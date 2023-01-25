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
	KING_OF_ANIMAL_API UEnum* Z_Construct_UEnum_King_Of_Animal_ECharacterClass();
	UPackage* Z_Construct_UPackage__Script_King_Of_Animal();
	KING_OF_ANIMAL_API UClass* Z_Construct_UClass_AKing_Of_AnimalGameMode_NoRegister();
	KING_OF_ANIMAL_API UClass* Z_Construct_UClass_AKing_Of_AnimalGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	KING_OF_ANIMAL_API UClass* Z_Construct_UClass_AKing_Of_AnimalCharacter_NoRegister();
// End Cross Module References
	static UEnum* ECharacterClass_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_King_Of_Animal_ECharacterClass, Z_Construct_UPackage__Script_King_Of_Animal(), TEXT("ECharacterClass"));
		}
		return Singleton;
	}
	template<> KING_OF_ANIMAL_API UEnum* StaticEnum<ECharacterClass>()
	{
		return ECharacterClass_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECharacterClass(ECharacterClass_StaticEnum, TEXT("/Script/King_Of_Animal"), TEXT("ECharacterClass"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_King_Of_Animal_ECharacterClass_Hash() { return 63847288U; }
	UEnum* Z_Construct_UEnum_King_Of_Animal_ECharacterClass()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_King_Of_Animal();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECharacterClass"), 0, Get_Z_Construct_UEnum_King_Of_Animal_ECharacterClass_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECharacterClass::VE_Default", (int64)ECharacterClass::VE_Default },
				{ "ECharacterClass::VE_Zebra", (int64)ECharacterClass::VE_Zebra },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "King_Of_AnimalGameMode.h" },
				{ "VE_Default.DisplayName", "Mannequin" },
				{ "VE_Default.Name", "ECharacterClass::VE_Default" },
				{ "VE_Zebra.DisplayName", "Zebra" },
				{ "VE_Zebra.Name", "ECharacterClass::VE_Zebra" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_King_Of_Animal,
				nullptr,
				"ECharacterClass",
				"ECharacterClass",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_player1_MetaData[] = {
		{ "Category", "Player References" },
		{ "ModuleRelativePath", "King_Of_AnimalGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_player1 = { "player1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKing_Of_AnimalGameMode, player1), Z_Construct_UClass_AKing_Of_AnimalCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_player1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_player1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_player2_MetaData[] = {
		{ "Category", "Player References" },
		{ "ModuleRelativePath", "King_Of_AnimalGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_player2 = { "player2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKing_Of_AnimalGameMode, player2), Z_Construct_UClass_AKing_Of_AnimalCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_player2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_player2_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_player1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_player2,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKing_Of_AnimalGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::ClassParams = {
		&AKing_Of_AnimalGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AKing_Of_AnimalGameMode, 2940608958);
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
