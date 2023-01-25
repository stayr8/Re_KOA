// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KING_OF_ANIMAL_King_Of_AnimalGameMode_generated_h
#error "King_Of_AnimalGameMode.generated.h already included, missing '#pragma once' in King_Of_AnimalGameMode.h"
#endif
#define KING_OF_ANIMAL_King_Of_AnimalGameMode_generated_h

#define King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalGameMode_h_20_SPARSE_DATA
#define King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalGameMode_h_20_RPC_WRAPPERS
#define King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalGameMode_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalGameMode_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKing_Of_AnimalGameMode(); \
	friend struct Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics; \
public: \
	DECLARE_CLASS(AKing_Of_AnimalGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/King_Of_Animal"), KING_OF_ANIMAL_API) \
	DECLARE_SERIALIZER(AKing_Of_AnimalGameMode)


#define King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalGameMode_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAKing_Of_AnimalGameMode(); \
	friend struct Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics; \
public: \
	DECLARE_CLASS(AKing_Of_AnimalGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/King_Of_Animal"), KING_OF_ANIMAL_API) \
	DECLARE_SERIALIZER(AKing_Of_AnimalGameMode)


#define King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalGameMode_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	KING_OF_ANIMAL_API AKing_Of_AnimalGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKing_Of_AnimalGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(KING_OF_ANIMAL_API, AKing_Of_AnimalGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKing_Of_AnimalGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	KING_OF_ANIMAL_API AKing_Of_AnimalGameMode(AKing_Of_AnimalGameMode&&); \
	KING_OF_ANIMAL_API AKing_Of_AnimalGameMode(const AKing_Of_AnimalGameMode&); \
public:


#define King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalGameMode_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	KING_OF_ANIMAL_API AKing_Of_AnimalGameMode(AKing_Of_AnimalGameMode&&); \
	KING_OF_ANIMAL_API AKing_Of_AnimalGameMode(const AKing_Of_AnimalGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(KING_OF_ANIMAL_API, AKing_Of_AnimalGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKing_Of_AnimalGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKing_Of_AnimalGameMode)


#define King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalGameMode_h_20_PRIVATE_PROPERTY_OFFSET
#define King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalGameMode_h_17_PROLOG
#define King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalGameMode_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalGameMode_h_20_PRIVATE_PROPERTY_OFFSET \
	King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalGameMode_h_20_SPARSE_DATA \
	King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalGameMode_h_20_RPC_WRAPPERS \
	King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalGameMode_h_20_INCLASS \
	King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalGameMode_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalGameMode_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalGameMode_h_20_PRIVATE_PROPERTY_OFFSET \
	King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalGameMode_h_20_SPARSE_DATA \
	King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalGameMode_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalGameMode_h_20_INCLASS_NO_PURE_DECLS \
	King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalGameMode_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KING_OF_ANIMAL_API UClass* StaticClass<class AKing_Of_AnimalGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID King_Of_Animal_Source_King_Of_Animal_King_Of_AnimalGameMode_h


#define FOREACH_ENUM_ECHARACTERCLASS(op) \
	op(ECharacterClass::VE_Default) \
	op(ECharacterClass::VE_Zebra) 

enum class ECharacterClass : uint8;
template<> KING_OF_ANIMAL_API UEnum* StaticEnum<ECharacterClass>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
