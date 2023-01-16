// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KING_OF_ANIMAL_HitboxActor_generated_h
#error "HitboxActor.generated.h already included, missing '#pragma once' in HitboxActor.h"
#endif
#define KING_OF_ANIMAL_HitboxActor_generated_h

#define King_Of_Animal_Source_King_Of_Animal_HitboxActor_h_18_SPARSE_DATA
#define King_Of_Animal_Source_King_Of_Animal_HitboxActor_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTriggerVisualizeHitbox);


#define King_Of_Animal_Source_King_Of_Animal_HitboxActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTriggerVisualizeHitbox);


#define King_Of_Animal_Source_King_Of_Animal_HitboxActor_h_18_EVENT_PARMS
#define King_Of_Animal_Source_King_Of_Animal_HitboxActor_h_18_CALLBACK_WRAPPERS
#define King_Of_Animal_Source_King_Of_Animal_HitboxActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHitboxActor(); \
	friend struct Z_Construct_UClass_AHitboxActor_Statics; \
public: \
	DECLARE_CLASS(AHitboxActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/King_Of_Animal"), NO_API) \
	DECLARE_SERIALIZER(AHitboxActor)


#define King_Of_Animal_Source_King_Of_Animal_HitboxActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAHitboxActor(); \
	friend struct Z_Construct_UClass_AHitboxActor_Statics; \
public: \
	DECLARE_CLASS(AHitboxActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/King_Of_Animal"), NO_API) \
	DECLARE_SERIALIZER(AHitboxActor)


#define King_Of_Animal_Source_King_Of_Animal_HitboxActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHitboxActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHitboxActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHitboxActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHitboxActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHitboxActor(AHitboxActor&&); \
	NO_API AHitboxActor(const AHitboxActor&); \
public:


#define King_Of_Animal_Source_King_Of_Animal_HitboxActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHitboxActor(AHitboxActor&&); \
	NO_API AHitboxActor(const AHitboxActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHitboxActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHitboxActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHitboxActor)


#define King_Of_Animal_Source_King_Of_Animal_HitboxActor_h_18_PRIVATE_PROPERTY_OFFSET
#define King_Of_Animal_Source_King_Of_Animal_HitboxActor_h_15_PROLOG \
	King_Of_Animal_Source_King_Of_Animal_HitboxActor_h_18_EVENT_PARMS


#define King_Of_Animal_Source_King_Of_Animal_HitboxActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	King_Of_Animal_Source_King_Of_Animal_HitboxActor_h_18_PRIVATE_PROPERTY_OFFSET \
	King_Of_Animal_Source_King_Of_Animal_HitboxActor_h_18_SPARSE_DATA \
	King_Of_Animal_Source_King_Of_Animal_HitboxActor_h_18_RPC_WRAPPERS \
	King_Of_Animal_Source_King_Of_Animal_HitboxActor_h_18_CALLBACK_WRAPPERS \
	King_Of_Animal_Source_King_Of_Animal_HitboxActor_h_18_INCLASS \
	King_Of_Animal_Source_King_Of_Animal_HitboxActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define King_Of_Animal_Source_King_Of_Animal_HitboxActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	King_Of_Animal_Source_King_Of_Animal_HitboxActor_h_18_PRIVATE_PROPERTY_OFFSET \
	King_Of_Animal_Source_King_Of_Animal_HitboxActor_h_18_SPARSE_DATA \
	King_Of_Animal_Source_King_Of_Animal_HitboxActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	King_Of_Animal_Source_King_Of_Animal_HitboxActor_h_18_CALLBACK_WRAPPERS \
	King_Of_Animal_Source_King_Of_Animal_HitboxActor_h_18_INCLASS_NO_PURE_DECLS \
	King_Of_Animal_Source_King_Of_Animal_HitboxActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KING_OF_ANIMAL_API UClass* StaticClass<class AHitboxActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID King_Of_Animal_Source_King_Of_Animal_HitboxActor_h


#define FOREACH_ENUM_EHITBOXENUM(op) \
	op(EHitboxEnum::HB_PROXIMITY) \
	op(EHitboxEnum::HB_STRIKE) \
	op(EHitboxEnum::HB_HURTBOX) 

enum class EHitboxEnum : uint8;
template<> KING_OF_ANIMAL_API UEnum* StaticEnum<EHitboxEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
