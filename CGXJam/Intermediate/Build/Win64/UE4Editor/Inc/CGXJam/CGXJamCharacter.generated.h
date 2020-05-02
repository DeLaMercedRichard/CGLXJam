// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CGXJAM_CGXJamCharacter_generated_h
#error "CGXJamCharacter.generated.h already included, missing '#pragma once' in CGXJamCharacter.h"
#endif
#define CGXJAM_CGXJamCharacter_generated_h

#define CGXJam_Source_CGXJam_CGXJamCharacter_h_12_SPARSE_DATA
#define CGXJam_Source_CGXJam_CGXJamCharacter_h_12_RPC_WRAPPERS
#define CGXJam_Source_CGXJam_CGXJamCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define CGXJam_Source_CGXJam_CGXJamCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACGXJamCharacter(); \
	friend struct Z_Construct_UClass_ACGXJamCharacter_Statics; \
public: \
	DECLARE_CLASS(ACGXJamCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CGXJam"), NO_API) \
	DECLARE_SERIALIZER(ACGXJamCharacter)


#define CGXJam_Source_CGXJam_CGXJamCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACGXJamCharacter(); \
	friend struct Z_Construct_UClass_ACGXJamCharacter_Statics; \
public: \
	DECLARE_CLASS(ACGXJamCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CGXJam"), NO_API) \
	DECLARE_SERIALIZER(ACGXJamCharacter)


#define CGXJam_Source_CGXJam_CGXJamCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACGXJamCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACGXJamCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGXJamCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGXJamCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGXJamCharacter(ACGXJamCharacter&&); \
	NO_API ACGXJamCharacter(const ACGXJamCharacter&); \
public:


#define CGXJam_Source_CGXJam_CGXJamCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGXJamCharacter(ACGXJamCharacter&&); \
	NO_API ACGXJamCharacter(const ACGXJamCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGXJamCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGXJamCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACGXJamCharacter)


#define CGXJam_Source_CGXJam_CGXJamCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ACGXJamCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ACGXJamCharacter, FollowCamera); }


#define CGXJam_Source_CGXJam_CGXJamCharacter_h_9_PROLOG
#define CGXJam_Source_CGXJam_CGXJamCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CGXJam_Source_CGXJam_CGXJamCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	CGXJam_Source_CGXJam_CGXJamCharacter_h_12_SPARSE_DATA \
	CGXJam_Source_CGXJam_CGXJamCharacter_h_12_RPC_WRAPPERS \
	CGXJam_Source_CGXJam_CGXJamCharacter_h_12_INCLASS \
	CGXJam_Source_CGXJam_CGXJamCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CGXJam_Source_CGXJam_CGXJamCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CGXJam_Source_CGXJam_CGXJamCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	CGXJam_Source_CGXJam_CGXJamCharacter_h_12_SPARSE_DATA \
	CGXJam_Source_CGXJam_CGXJamCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CGXJam_Source_CGXJam_CGXJamCharacter_h_12_INCLASS_NO_PURE_DECLS \
	CGXJam_Source_CGXJam_CGXJamCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CGXJAM_API UClass* StaticClass<class ACGXJamCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CGXJam_Source_CGXJam_CGXJamCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
