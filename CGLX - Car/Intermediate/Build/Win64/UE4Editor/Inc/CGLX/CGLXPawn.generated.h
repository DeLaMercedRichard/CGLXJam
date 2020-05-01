// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CGLX_CGLXPawn_generated_h
#error "CGLXPawn.generated.h already included, missing '#pragma once' in CGLXPawn.h"
#endif
#define CGLX_CGLXPawn_generated_h

#define CGLX_Source_CGLX_CGLXPawn_h_19_SPARSE_DATA
#define CGLX_Source_CGLX_CGLXPawn_h_19_RPC_WRAPPERS
#define CGLX_Source_CGLX_CGLXPawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define CGLX_Source_CGLX_CGLXPawn_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACGLXPawn(); \
	friend struct Z_Construct_UClass_ACGLXPawn_Statics; \
public: \
	DECLARE_CLASS(ACGLXPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CGLX"), NO_API) \
	DECLARE_SERIALIZER(ACGLXPawn)


#define CGLX_Source_CGLX_CGLXPawn_h_19_INCLASS \
private: \
	static void StaticRegisterNativesACGLXPawn(); \
	friend struct Z_Construct_UClass_ACGLXPawn_Statics; \
public: \
	DECLARE_CLASS(ACGLXPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CGLX"), NO_API) \
	DECLARE_SERIALIZER(ACGLXPawn)


#define CGLX_Source_CGLX_CGLXPawn_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACGLXPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACGLXPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGLXPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGLXPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGLXPawn(ACGLXPawn&&); \
	NO_API ACGLXPawn(const ACGLXPawn&); \
public:


#define CGLX_Source_CGLX_CGLXPawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGLXPawn(ACGLXPawn&&); \
	NO_API ACGLXPawn(const ACGLXPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGLXPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGLXPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACGLXPawn)


#define CGLX_Source_CGLX_CGLXPawn_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ACGLXPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ACGLXPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__InternalCameraBase() { return STRUCT_OFFSET(ACGLXPawn, InternalCameraBase); } \
	FORCEINLINE static uint32 __PPO__InternalCamera() { return STRUCT_OFFSET(ACGLXPawn, InternalCamera); } \
	FORCEINLINE static uint32 __PPO__InCarSpeed() { return STRUCT_OFFSET(ACGLXPawn, InCarSpeed); } \
	FORCEINLINE static uint32 __PPO__InCarGear() { return STRUCT_OFFSET(ACGLXPawn, InCarGear); } \
	FORCEINLINE static uint32 __PPO__EngineSoundComponent() { return STRUCT_OFFSET(ACGLXPawn, EngineSoundComponent); }


#define CGLX_Source_CGLX_CGLXPawn_h_16_PROLOG
#define CGLX_Source_CGLX_CGLXPawn_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CGLX_Source_CGLX_CGLXPawn_h_19_PRIVATE_PROPERTY_OFFSET \
	CGLX_Source_CGLX_CGLXPawn_h_19_SPARSE_DATA \
	CGLX_Source_CGLX_CGLXPawn_h_19_RPC_WRAPPERS \
	CGLX_Source_CGLX_CGLXPawn_h_19_INCLASS \
	CGLX_Source_CGLX_CGLXPawn_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CGLX_Source_CGLX_CGLXPawn_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CGLX_Source_CGLX_CGLXPawn_h_19_PRIVATE_PROPERTY_OFFSET \
	CGLX_Source_CGLX_CGLXPawn_h_19_SPARSE_DATA \
	CGLX_Source_CGLX_CGLXPawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	CGLX_Source_CGLX_CGLXPawn_h_19_INCLASS_NO_PURE_DECLS \
	CGLX_Source_CGLX_CGLXPawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CGLX_API UClass* StaticClass<class ACGLXPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CGLX_Source_CGLX_CGLXPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
