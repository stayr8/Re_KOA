// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "King_Of_Animal/King_Of_AnimalCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKing_Of_AnimalCharacter() {}
// Cross Module References
	KING_OF_ANIMAL_API UClass* Z_Construct_UClass_AKing_Of_AnimalCharacter_NoRegister();
	KING_OF_ANIMAL_API UClass* Z_Construct_UClass_AKing_Of_AnimalCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_King_Of_Animal();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void AKing_Of_AnimalCharacter::StaticRegisterNativesAKing_Of_AnimalCharacter()
	{
	}
	UClass* Z_Construct_UClass_AKing_Of_AnimalCharacter_NoRegister()
	{
		return AKing_Of_AnimalCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideViewCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SideViewCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wasFirstAttackUsed_MetaData[];
#endif
		static void NewProp_wasFirstAttackUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasFirstAttackUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_playerHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_King_Of_Animal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "King_Of_AnimalCharacter.h" },
		{ "ModuleRelativePath", "King_Of_AnimalCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_SideViewCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Side view camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "King_Of_AnimalCharacter.h" },
		{ "ToolTip", "Side view camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_SideViewCameraComponent = { "SideViewCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKing_Of_AnimalCharacter, SideViewCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_SideViewCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_SideViewCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera beside the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "King_Of_AnimalCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera beside the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKing_Of_AnimalCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasFirstAttackUsed_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "//Has the player used the basic attack?\n" },
		{ "ModuleRelativePath", "King_Of_AnimalCharacter.h" },
		{ "ToolTip", "Has the player used the basic attack?" },
	};
#endif
	void Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasFirstAttackUsed_SetBit(void* Obj)
	{
		((AKing_Of_AnimalCharacter*)Obj)->wasFirstAttackUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasFirstAttackUsed = { "wasFirstAttackUsed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AKing_Of_AnimalCharacter), &Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasFirstAttackUsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasFirstAttackUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasFirstAttackUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_playerHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "//The amount of health the character currently has.\n" },
		{ "ModuleRelativePath", "King_Of_AnimalCharacter.h" },
		{ "ToolTip", "The amount of health the character currently has." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_playerHealth = { "playerHealth", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKing_Of_AnimalCharacter, playerHealth), METADATA_PARAMS(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_playerHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_playerHealth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_SideViewCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasFirstAttackUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_playerHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKing_Of_AnimalCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::ClassParams = {
		&AKing_Of_AnimalCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKing_Of_AnimalCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKing_Of_AnimalCharacter, 4264913238);
	template<> KING_OF_ANIMAL_API UClass* StaticClass<AKing_Of_AnimalCharacter>()
	{
		return AKing_Of_AnimalCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKing_Of_AnimalCharacter(Z_Construct_UClass_AKing_Of_AnimalCharacter, &AKing_Of_AnimalCharacter::StaticClass, TEXT("/Script/King_Of_Animal"), TEXT("AKing_Of_AnimalCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKing_Of_AnimalCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif