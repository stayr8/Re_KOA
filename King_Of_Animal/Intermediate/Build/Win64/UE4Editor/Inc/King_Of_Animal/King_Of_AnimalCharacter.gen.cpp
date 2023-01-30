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
	KING_OF_ANIMAL_API UEnum* Z_Construct_UEnum_King_Of_Animal_EDirectionalInput();
	UPackage* Z_Construct_UPackage__Script_King_Of_Animal();
	KING_OF_ANIMAL_API UClass* Z_Construct_UClass_AKing_Of_AnimalCharacter_NoRegister();
	KING_OF_ANIMAL_API UClass* Z_Construct_UClass_AKing_Of_AnimalCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EDirectionalInput_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_King_Of_Animal_EDirectionalInput, Z_Construct_UPackage__Script_King_Of_Animal(), TEXT("EDirectionalInput"));
		}
		return Singleton;
	}
	template<> KING_OF_ANIMAL_API UEnum* StaticEnum<EDirectionalInput>()
	{
		return EDirectionalInput_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDirectionalInput(EDirectionalInput_StaticEnum, TEXT("/Script/King_Of_Animal"), TEXT("EDirectionalInput"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_King_Of_Animal_EDirectionalInput_Hash() { return 3219592004U; }
	UEnum* Z_Construct_UEnum_King_Of_Animal_EDirectionalInput()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_King_Of_Animal();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDirectionalInput"), 0, Get_Z_Construct_UEnum_King_Of_Animal_EDirectionalInput_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDirectionalInput::VE_Default", (int64)EDirectionalInput::VE_Default },
				{ "EDirectionalInput::VE_MovingRight", (int64)EDirectionalInput::VE_MovingRight },
				{ "EDirectionalInput::VE_MovingLeft", (int64)EDirectionalInput::VE_MovingLeft },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "King_Of_AnimalCharacter.h" },
				{ "VE_Default.DisplayName", "NOT_MOVING" },
				{ "VE_Default.Name", "EDirectionalInput::VE_Default" },
				{ "VE_MovingLeft.DisplayName", "MOVING_LEFT" },
				{ "VE_MovingLeft.Name", "EDirectionalInput::VE_MovingLeft" },
				{ "VE_MovingRight.DisplayName", "MOVING_RIGHT" },
				{ "VE_MovingRight.Name", "EDirectionalInput::VE_MovingRight" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_King_Of_Animal,
				nullptr,
				"EDirectionalInput",
				"EDirectionalInput",
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
	DEFINE_FUNCTION(AKing_Of_AnimalCharacter::execTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__damageAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param__damageAmount);
		P_NATIVE_END;
	}
	void AKing_Of_AnimalCharacter::StaticRegisterNativesAKing_Of_AnimalCharacter()
	{
		UClass* Class = AKing_Of_AnimalCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TakeDamage", &AKing_Of_AnimalCharacter::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AKing_Of_AnimalCharacter_TakeDamage_Statics
	{
		struct King_Of_AnimalCharacter_eventTakeDamage_Parms
		{
			float _damageAmount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__damageAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AKing_Of_AnimalCharacter_TakeDamage_Statics::NewProp__damageAmount = { "_damageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(King_Of_AnimalCharacter_eventTakeDamage_Parms, _damageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKing_Of_AnimalCharacter_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKing_Of_AnimalCharacter_TakeDamage_Statics::NewProp__damageAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKing_Of_AnimalCharacter_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Damage the player\n" },
		{ "ModuleRelativePath", "King_Of_AnimalCharacter.h" },
		{ "ToolTip", "Damage the player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKing_Of_AnimalCharacter_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKing_Of_AnimalCharacter, nullptr, "TakeDamage", nullptr, nullptr, sizeof(King_Of_AnimalCharacter_eventTakeDamage_Parms), Z_Construct_UFunction_AKing_Of_AnimalCharacter_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKing_Of_AnimalCharacter_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKing_Of_AnimalCharacter_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKing_Of_AnimalCharacter_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKing_Of_AnimalCharacter_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKing_Of_AnimalCharacter_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AKing_Of_AnimalCharacter_NoRegister()
	{
		return AKing_Of_AnimalCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hurbox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hurbox;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_directionalInput_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_directionalInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_directionalInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_playerHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wasLightAttackUsed_MetaData[];
#endif
		static void NewProp_wasLightAttackUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasLightAttackUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wasMediumAttackUsed_MetaData[];
#endif
		static void NewProp_wasMediumAttackUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasMediumAttackUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wasHeavyAttackUsed_MetaData[];
#endif
		static void NewProp_wasHeavyAttackUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasHeavyAttackUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wasSpecialAttackUsed_MetaData[];
#endif
		static void NewProp_wasSpecialAttackUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasSpecialAttackUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isFlipped_MetaData[];
#endif
		static void NewProp_isFlipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isFlipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasLandedHit_MetaData[];
#endif
		static void NewProp_hasLandedHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasLandedHit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_King_Of_Animal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AKing_Of_AnimalCharacter_TakeDamage, "TakeDamage" }, // 837545629
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_otherPlayer_MetaData[] = {
		{ "Category", "Player References" },
		{ "ModuleRelativePath", "King_Of_AnimalCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_otherPlayer = { "otherPlayer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKing_Of_AnimalCharacter, otherPlayer), Z_Construct_UClass_AKing_Of_AnimalCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_otherPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_otherPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_hurbox_MetaData[] = {
		{ "Category", "Hitbox" },
		{ "ModuleRelativePath", "King_Of_AnimalCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_hurbox = { "hurbox", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKing_Of_AnimalCharacter, hurbox), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_hurbox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_hurbox_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_directionalInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_directionalInput_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//The direction the character is moving or the direction the player is holding down\n" },
		{ "ModuleRelativePath", "King_Of_AnimalCharacter.h" },
		{ "ToolTip", "The direction the character is moving or the direction the player is holding down" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_directionalInput = { "directionalInput", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKing_Of_AnimalCharacter, directionalInput), Z_Construct_UEnum_King_Of_Animal_EDirectionalInput, METADATA_PARAMS(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_directionalInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_directionalInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_transform_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "// The character's transform\n" },
		{ "ModuleRelativePath", "King_Of_AnimalCharacter.h" },
		{ "ToolTip", "The character's transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_transform = { "transform", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKing_Of_AnimalCharacter, transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_scale_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "// The character's scale\n" },
		{ "ModuleRelativePath", "King_Of_AnimalCharacter.h" },
		{ "ToolTip", "The character's scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKing_Of_AnimalCharacter, scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_playerHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "//The amount of health the character currently has.\n" },
		{ "ModuleRelativePath", "King_Of_AnimalCharacter.h" },
		{ "ToolTip", "The amount of health the character currently has." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_playerHealth = { "playerHealth", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKing_Of_AnimalCharacter, playerHealth), METADATA_PARAMS(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_playerHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_playerHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasLightAttackUsed_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "//Has the player used the light attack?\n" },
		{ "ModuleRelativePath", "King_Of_AnimalCharacter.h" },
		{ "ToolTip", "Has the player used the light attack?" },
	};
#endif
	void Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasLightAttackUsed_SetBit(void* Obj)
	{
		((AKing_Of_AnimalCharacter*)Obj)->wasLightAttackUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasLightAttackUsed = { "wasLightAttackUsed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AKing_Of_AnimalCharacter), &Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasLightAttackUsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasLightAttackUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasLightAttackUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasMediumAttackUsed_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "//Has the player used the medium attack?\n" },
		{ "ModuleRelativePath", "King_Of_AnimalCharacter.h" },
		{ "ToolTip", "Has the player used the medium attack?" },
	};
#endif
	void Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasMediumAttackUsed_SetBit(void* Obj)
	{
		((AKing_Of_AnimalCharacter*)Obj)->wasMediumAttackUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasMediumAttackUsed = { "wasMediumAttackUsed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AKing_Of_AnimalCharacter), &Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasMediumAttackUsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasMediumAttackUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasMediumAttackUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasHeavyAttackUsed_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "//Has the player used the heavy attack?\n" },
		{ "ModuleRelativePath", "King_Of_AnimalCharacter.h" },
		{ "ToolTip", "Has the player used the heavy attack?" },
	};
#endif
	void Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasHeavyAttackUsed_SetBit(void* Obj)
	{
		((AKing_Of_AnimalCharacter*)Obj)->wasHeavyAttackUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasHeavyAttackUsed = { "wasHeavyAttackUsed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AKing_Of_AnimalCharacter), &Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasHeavyAttackUsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasHeavyAttackUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasHeavyAttackUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasSpecialAttackUsed_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "//Has the player used the special attack?\n" },
		{ "ModuleRelativePath", "King_Of_AnimalCharacter.h" },
		{ "ToolTip", "Has the player used the special attack?" },
	};
#endif
	void Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasSpecialAttackUsed_SetBit(void* Obj)
	{
		((AKing_Of_AnimalCharacter*)Obj)->wasSpecialAttackUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasSpecialAttackUsed = { "wasSpecialAttackUsed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AKing_Of_AnimalCharacter), &Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasSpecialAttackUsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasSpecialAttackUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasSpecialAttackUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_isFlipped_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "// Is the character's model flipped?\n" },
		{ "ModuleRelativePath", "King_Of_AnimalCharacter.h" },
		{ "ToolTip", "Is the character's model flipped?" },
	};
#endif
	void Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_isFlipped_SetBit(void* Obj)
	{
		((AKing_Of_AnimalCharacter*)Obj)->isFlipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_isFlipped = { "isFlipped", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AKing_Of_AnimalCharacter), &Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_isFlipped_SetBit, METADATA_PARAMS(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_isFlipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_isFlipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_hasLandedHit_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "//Has the player landed a hit with their last attack?\n" },
		{ "ModuleRelativePath", "King_Of_AnimalCharacter.h" },
		{ "ToolTip", "Has the player landed a hit with their last attack?" },
	};
#endif
	void Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_hasLandedHit_SetBit(void* Obj)
	{
		((AKing_Of_AnimalCharacter*)Obj)->hasLandedHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_hasLandedHit = { "hasLandedHit", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AKing_Of_AnimalCharacter), &Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_hasLandedHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_hasLandedHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_hasLandedHit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_SideViewCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_otherPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_hurbox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_directionalInput_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_directionalInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_playerHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasLightAttackUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasMediumAttackUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasHeavyAttackUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_wasSpecialAttackUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_isFlipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::NewProp_hasLandedHit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKing_Of_AnimalCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::ClassParams = {
		&AKing_Of_AnimalCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AKing_Of_AnimalCharacter, 3849991859);
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
