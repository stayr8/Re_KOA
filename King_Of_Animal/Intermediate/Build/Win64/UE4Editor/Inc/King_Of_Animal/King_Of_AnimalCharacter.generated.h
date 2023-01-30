// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KING_OF_ANIMAL_King_Of_AnimalCharacter_generated_h
#error "King_Of_AnimalCharacter.generated.h already included, missing '#pragma once' in King_Of_AnimalCharacter.h"
#endif
#define KING_OF_ANIMAL_King_Of_AnimalCharacter_generated_h

#define King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalCharacter_h_19_SPARSE_DATA
#define King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalCharacter_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalCharacter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKing_Of_AnimalCharacter(); \
	friend struct Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics; \
public: \
	DECLARE_CLASS(AKing_Of_AnimalCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/King_Of_Animal"), NO_API) \
	DECLARE_SERIALIZER(AKing_Of_AnimalCharacter)


#define King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalCharacter_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAKing_Of_AnimalCharacter(); \
	friend struct Z_Construct_UClass_AKing_Of_AnimalCharacter_Statics; \
public: \
	DECLARE_CLASS(AKing_Of_AnimalCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/King_Of_Animal"), NO_API) \
	DECLARE_SERIALIZER(AKing_Of_AnimalCharacter)


#define King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalCharacter_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKing_Of_AnimalCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKing_Of_AnimalCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKing_Of_AnimalCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKing_Of_AnimalCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKing_Of_AnimalCharacter(AKing_Of_AnimalCharacter&&); \
	NO_API AKing_Of_AnimalCharacter(const AKing_Of_AnimalCharacter&); \
public:


#define King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKing_Of_AnimalCharacter(AKing_Of_AnimalCharacter&&); \
	NO_API AKing_Of_AnimalCharacter(const AKing_Of_AnimalCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKing_Of_AnimalCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKing_Of_AnimalCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKing_Of_AnimalCharacter)


#define King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(AKing_Of_AnimalCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AKing_Of_AnimalCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__otherPlayer() { return STRUCT_OFFSET(AKing_Of_AnimalCharacter, otherPlayer); } \
	FORCEINLINE static uint32 __PPO__hurbox() { return STRUCT_OFFSET(AKing_Of_AnimalCharacter, hurbox); } \
	FORCEINLINE static uint32 __PPO__directionalInput() { return STRUCT_OFFSET(AKing_Of_AnimalCharacter, directionalInput); } \
	FORCEINLINE static uint32 __PPO__transform() { return STRUCT_OFFSET(AKing_Of_AnimalCharacter, transform); } \
	FORCEINLINE static uint32 __PPO__scale() { return STRUCT_OFFSET(AKing_Of_AnimalCharacter, scale); } \
	FORCEINLINE static uint32 __PPO__playerHealth() { return STRUCT_OFFSET(AKing_Of_AnimalCharacter, playerHealth); } \
	FORCEINLINE static uint32 __PPO__wasLightAttackUsed() { return STRUCT_OFFSET(AKing_Of_AnimalCharacter, wasLightAttackUsed); } \
	FORCEINLINE static uint32 __PPO__wasMediumAttackUsed() { return STRUCT_OFFSET(AKing_Of_AnimalCharacter, wasMediumAttackUsed); } \
	FORCEINLINE static uint32 __PPO__wasHeavyAttackUsed() { return STRUCT_OFFSET(AKing_Of_AnimalCharacter, wasHeavyAttackUsed); } \
	FORCEINLINE static uint32 __PPO__wasSpecialAttackUsed() { return STRUCT_OFFSET(AKing_Of_AnimalCharacter, wasSpecialAttackUsed); } \
	FORCEINLINE static uint32 __PPO__isFlipped() { return STRUCT_OFFSET(AKing_Of_AnimalCharacter, isFlipped); } \
	FORCEINLINE static uint32 __PPO__hasLandedHit() { return STRUCT_OFFSET(AKing_Of_AnimalCharacter, hasLandedHit); }


#define King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalCharacter_h_16_PROLOG
#define King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalCharacter_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalCharacter_h_19_SPARSE_DATA \
	King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalCharacter_h_19_RPC_WRAPPERS \
	King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalCharacter_h_19_INCLASS \
	King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalCharacter_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalCharacter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalCharacter_h_19_SPARSE_DATA \
	King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalCharacter_h_19_INCLASS_NO_PURE_DECLS \
	King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KING_OF_ANIMAL_API UClass* StaticClass<class AKing_Of_AnimalCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalCharacter_h


#define FOREACH_ENUM_EDIRECTIONALINPUT(op) \
	op(EDirectionalInput::VE_Default) \
	op(EDirectionalInput::VE_MovingRight) \
	op(EDirectionalInput::VE_MovingLeft) 

enum class EDirectionalInput : uint8;
template<> KING_OF_ANIMAL_API UEnum* StaticEnum<EDirectionalInput>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
