// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "King_Of_AnimalCharacter.h"
#include "King_Of_AnimalGameMode.generated.h"

UENUM(BlueprintType)
enum class ECharacterClass : uint8
{
	VE_Default  UMETA(DisplayName = "Mannequin"),
	VE_Zebra    UMETA(DisplayName = "Zebra")
};

UCLASS(minimalapi)
class AKing_Of_AnimalGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AKing_Of_AnimalGameMode();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player References")
	AKing_Of_AnimalCharacter* player1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player References")
	AKing_Of_AnimalCharacter* player2;
};




