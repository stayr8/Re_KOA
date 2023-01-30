// Copyright Epic Games, Inc. All Rights Reserved.

#include "King_Of_AnimalCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

AKing_Of_AnimalCharacter::AKing_Of_AnimalCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Create a camera boom attached to the root (capsule)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Rotation of the character should not affect rotation of boom
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->TargetArmLength = 500.f;
	CameraBoom->SocketOffset = FVector(0.f,0.f,75.f);
	CameraBoom->SetRelativeRotation(FRotator(0.f,180.f,0.f));

	// Create a camera and attach to boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	SideViewCameraComponent->bUsePawnControlRotation = false; // We don't want the controller rotating the camera

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = false; // Face in the direction we are moving..
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 3.f;
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	GetCharacterMovement()->MaxFlySpeed = 600.f;

	directionalInput = EDirectionalInput::VE_Default;

	otherPlayer = nullptr;
	hurbox = nullptr;
	wasLightAttackUsed = false;
	wasHeavyAttackUsed = false;
	wasMediumAttackUsed = false;
	wasSpecialAttackUsed = false;
	isFlipped = false;
	hasLandedHit = false;

	transform = FTransform();
	scale = FVector(0.0f, 0.0f, 0.0f);
	playerHealth = 1.00f;
}

//////////////////////////////////////////////////////////////////////////
// Input

void AKing_Of_AnimalCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAxis("MoveRight", this, &AKing_Of_AnimalCharacter::MoveRight);

	PlayerInputComponent->BindAction("Attack1", IE_Pressed, this, &AKing_Of_AnimalCharacter::StartAttack1);
	PlayerInputComponent->BindAction("Attack2", IE_Pressed, this, &AKing_Of_AnimalCharacter::StartAttack2);
	PlayerInputComponent->BindAction("Attack3", IE_Pressed, this, &AKing_Of_AnimalCharacter::StartAttack3);
	PlayerInputComponent->BindAction("Attack4", IE_Pressed, this, &AKing_Of_AnimalCharacter::StartAttack4);

	PlayerInputComponent->BindTouch(IE_Pressed, this, &AKing_Of_AnimalCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &AKing_Of_AnimalCharacter::TouchStopped);
}

void AKing_Of_AnimalCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (otherPlayer)
	{
		if (auto characterMovement = GetCharacterMovement())
		{
			if (auto enemyMovement = otherPlayer->GetCharacterMovement())
			{
				if (enemyMovement->GetActorLocation().Y >= characterMovement->GetActorLocation().Y)
				{
					if (isFlipped)
					{
						if (auto mesh = GetCapsuleComponent()->GetChildComponent(1))
						{
							transform = mesh->GetRelativeTransform();
							scale = transform.GetScale3D();
							scale.Y = -1;
							transform.SetScale3D(scale);
							mesh->SetRelativeTransform(transform);
						}
						isFlipped = false;
					}
				}
				else
				{
					if (!isFlipped)
					{
						if (auto mesh = GetCapsuleComponent()->GetChildComponent(1))
						{
							transform = mesh->GetRelativeTransform();
							scale = transform.GetScale3D();
							scale.Y = 1;
							transform.SetScale3D(scale);
							mesh->SetRelativeTransform(transform);
						}
						isFlipped = true;
					}
				}
			}
		}
	}
}



void AKing_Of_AnimalCharacter::MoveRight(float Value)
{
	UE_LOG(LogTemp, Warning, TEXT("The directional input is: %f"), Value);

	if (Value > 0.20f)
	{
		directionalInput = EDirectionalInput::VE_MovingRight;
	}
	else if (Value < -0.20f)
	{
		directionalInput = EDirectionalInput::VE_MovingLeft;
	}
	else 
	{
		directionalInput = EDirectionalInput::VE_Default;
	}

	// add movement in that direction
	AddMovementInput(FVector(0.f,-1.f,0.f), Value);
}

void AKing_Of_AnimalCharacter::TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	// jump on any touch
	Jump();
}

void AKing_Of_AnimalCharacter::TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	StopJumping();
}

void AKing_Of_AnimalCharacter::StartAttack1()
{
	UE_LOG(LogTemp, Warning, TEXT("We are using our light attack"));
	wasLightAttackUsed = true;
}

void AKing_Of_AnimalCharacter::StartAttack2()
{
	UE_LOG(LogTemp, Warning, TEXT("We are using our medium attack"));
	wasMediumAttackUsed = true;
}

void AKing_Of_AnimalCharacter::StartAttack3()
{
	UE_LOG(LogTemp, Warning, TEXT("We are using our heavy attack"));
	wasHeavyAttackUsed = true;
}

void AKing_Of_AnimalCharacter::StartAttack4()
{
	UE_LOG(LogTemp, Warning, TEXT("We are using our special attack"));
	wasSpecialAttackUsed = true;
}

void AKing_Of_AnimalCharacter::TakeDamage(float _damageAmount)
{
	UE_LOG(LogTemp, Warning, TEXT("We are taking damage for %f points."), _damageAmount);
	playerHealth -= _damageAmount;
	
	if (otherPlayer) 
	{
		otherPlayer->hasLandedHit = true;
	}

	if (playerHealth < 0.00f)
	{
		playerHealth = 0.00f;
	}
}
