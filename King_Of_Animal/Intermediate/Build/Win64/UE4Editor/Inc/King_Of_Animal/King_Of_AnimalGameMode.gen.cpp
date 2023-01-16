// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "King_Of_Animal/King_Of_AnimalGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKing_Of_AnimalGameMode() {}
// Cross Module References
	KING_OF_ANIMAL_API UClass* Z_Construct_UClass_AKing_Of_AnimalGameMode_NoRegister();
	KING_OF_ANIMAL_API UClass* Z_Construct_UClass_AKing_Of_AnimalGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_King_Of_Animal();
// End Cross Module References
	void AKing_Of_AnimalGameMode::StaticRegisterNativesAKing_Of_AnimalGameMode()
	{
	}
	UClass* Z_Construct_UClass_AKing_Of_AnimalGameMode_NoRegister()
	{
		return AKing_Of_AnimalGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_King_Of_Animal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "King_Of_AnimalGameMode.h" },
		{ "ModuleRelativePath", "King_Of_AnimalGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKing_Of_AnimalGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::ClassParams = {
		&AKing_Of_AnimalGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKing_Of_AnimalGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKing_Of_AnimalGameMode, 3160803379);
	template<> KING_OF_ANIMAL_API UClass* StaticClass<AKing_Of_AnimalGameMode>()
	{
		return AKing_Of_AnimalGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKing_Of_AnimalGameMode(Z_Construct_UClass_AKing_Of_AnimalGameMode, &AKing_Of_AnimalGameMode::StaticClass, TEXT("/Script/King_Of_Animal"), TEXT("AKing_Of_AnimalGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKing_Of_AnimalGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
