// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "King_Of_AnimalCharacter.h"
#include "ZebraCharacter.generated.h"

/**
 * 
 */
UCLASS()
class KING_OF_ANIMAL_API AZebraCharacter : public AKing_Of_AnimalCharacter
{
	GENERATED_BODY()

public:
	AZebraCharacter();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
};
