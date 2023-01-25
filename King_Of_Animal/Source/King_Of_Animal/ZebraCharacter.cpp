// Fill out your copyright notice in the Description page of Project Settings.


#include "ZebraCharacter.h"

AZebraCharacter::AZebraCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AZebraCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AZebraCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AZebraCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
