// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEWORLD_TheWorldCharacter_generated_h
#error "TheWorldCharacter.generated.h already included, missing '#pragma once' in TheWorldCharacter.h"
#endif
#define THEWORLD_TheWorldCharacter_generated_h

#define TheWorld_Source_TheWorld_TheWorldCharacter_h_12_SPARSE_DATA
#define TheWorld_Source_TheWorld_TheWorldCharacter_h_12_RPC_WRAPPERS
#define TheWorld_Source_TheWorld_TheWorldCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TheWorld_Source_TheWorld_TheWorldCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATheWorldCharacter(); \
	friend struct Z_Construct_UClass_ATheWorldCharacter_Statics; \
public: \
	DECLARE_CLASS(ATheWorldCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheWorld"), NO_API) \
	DECLARE_SERIALIZER(ATheWorldCharacter)


#define TheWorld_Source_TheWorld_TheWorldCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATheWorldCharacter(); \
	friend struct Z_Construct_UClass_ATheWorldCharacter_Statics; \
public: \
	DECLARE_CLASS(ATheWorldCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheWorld"), NO_API) \
	DECLARE_SERIALIZER(ATheWorldCharacter)


#define TheWorld_Source_TheWorld_TheWorldCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATheWorldCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATheWorldCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheWorldCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheWorldCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATheWorldCharacter(ATheWorldCharacter&&); \
	NO_API ATheWorldCharacter(const ATheWorldCharacter&); \
public:


#define TheWorld_Source_TheWorld_TheWorldCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATheWorldCharacter(ATheWorldCharacter&&); \
	NO_API ATheWorldCharacter(const ATheWorldCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheWorldCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheWorldCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATheWorldCharacter)


#define TheWorld_Source_TheWorld_TheWorldCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATheWorldCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ATheWorldCharacter, FollowCamera); }


#define TheWorld_Source_TheWorld_TheWorldCharacter_h_9_PROLOG
#define TheWorld_Source_TheWorld_TheWorldCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheWorld_Source_TheWorld_TheWorldCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TheWorld_Source_TheWorld_TheWorldCharacter_h_12_SPARSE_DATA \
	TheWorld_Source_TheWorld_TheWorldCharacter_h_12_RPC_WRAPPERS \
	TheWorld_Source_TheWorld_TheWorldCharacter_h_12_INCLASS \
	TheWorld_Source_TheWorld_TheWorldCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheWorld_Source_TheWorld_TheWorldCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheWorld_Source_TheWorld_TheWorldCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TheWorld_Source_TheWorld_TheWorldCharacter_h_12_SPARSE_DATA \
	TheWorld_Source_TheWorld_TheWorldCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TheWorld_Source_TheWorld_TheWorldCharacter_h_12_INCLASS_NO_PURE_DECLS \
	TheWorld_Source_TheWorld_TheWorldCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEWORLD_API UClass* StaticClass<class ATheWorldCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheWorld_Source_TheWorld_TheWorldCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
