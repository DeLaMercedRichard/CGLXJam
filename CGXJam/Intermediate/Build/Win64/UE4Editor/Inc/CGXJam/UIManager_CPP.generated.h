// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CGXJAM_UIManager_CPP_generated_h
#error "UIManager_CPP.generated.h already included, missing '#pragma once' in UIManager_CPP.h"
#endif
#define CGXJAM_UIManager_CPP_generated_h

#define CGXJam_Source_CGXJam_UIManager_CPP_h_12_SPARSE_DATA
#define CGXJam_Source_CGXJam_UIManager_CPP_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStageComplete) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetStageComplete(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStageComplete) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStageComplete(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerDead) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetPlayerDead(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayerDead) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlayerDead(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMenuHidden) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetMenuHidden(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMenuHidden) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMenuHidden(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBuildLimit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetBuildLimit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUsedBudget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetUsedBudget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtractFromStageBudget) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_itemValue_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SubtractFromStageBudget(Z_Param_itemValue_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryAddToStageBudget) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_itemValue_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TryAddToStageBudget(Z_Param_itemValue_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStageBuildLimit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_stageLimit_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStageBuildLimit(Z_Param_stageLimit_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTimer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimer) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_f_stageTimer_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimer(Z_Param_f_stageTimer_); \
		P_NATIVE_END; \
	}


#define CGXJam_Source_CGXJam_UIManager_CPP_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStageComplete) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetStageComplete(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStageComplete) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStageComplete(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerDead) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetPlayerDead(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayerDead) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlayerDead(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMenuHidden) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetMenuHidden(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMenuHidden) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMenuHidden(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBuildLimit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetBuildLimit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUsedBudget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetUsedBudget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtractFromStageBudget) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_itemValue_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SubtractFromStageBudget(Z_Param_itemValue_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryAddToStageBudget) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_itemValue_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TryAddToStageBudget(Z_Param_itemValue_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStageBuildLimit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_stageLimit_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStageBuildLimit(Z_Param_stageLimit_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTimer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimer) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_f_stageTimer_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimer(Z_Param_f_stageTimer_); \
		P_NATIVE_END; \
	}


#define CGXJam_Source_CGXJam_UIManager_CPP_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUIManager_CPP(); \
	friend struct Z_Construct_UClass_AUIManager_CPP_Statics; \
public: \
	DECLARE_CLASS(AUIManager_CPP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CGXJam"), NO_API) \
	DECLARE_SERIALIZER(AUIManager_CPP)


#define CGXJam_Source_CGXJam_UIManager_CPP_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAUIManager_CPP(); \
	friend struct Z_Construct_UClass_AUIManager_CPP_Statics; \
public: \
	DECLARE_CLASS(AUIManager_CPP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CGXJam"), NO_API) \
	DECLARE_SERIALIZER(AUIManager_CPP)


#define CGXJam_Source_CGXJam_UIManager_CPP_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUIManager_CPP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUIManager_CPP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUIManager_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUIManager_CPP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUIManager_CPP(AUIManager_CPP&&); \
	NO_API AUIManager_CPP(const AUIManager_CPP&); \
public:


#define CGXJam_Source_CGXJam_UIManager_CPP_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUIManager_CPP(AUIManager_CPP&&); \
	NO_API AUIManager_CPP(const AUIManager_CPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUIManager_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUIManager_CPP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUIManager_CPP)


#define CGXJam_Source_CGXJam_UIManager_CPP_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__f_timer() { return STRUCT_OFFSET(AUIManager_CPP, f_timer); } \
	FORCEINLINE static uint32 __PPO__i_buildLimit() { return STRUCT_OFFSET(AUIManager_CPP, i_buildLimit); } \
	FORCEINLINE static uint32 __PPO__i_usedBudget() { return STRUCT_OFFSET(AUIManager_CPP, i_usedBudget); } \
	FORCEINLINE static uint32 __PPO__b_isHidden() { return STRUCT_OFFSET(AUIManager_CPP, b_isHidden); } \
	FORCEINLINE static uint32 __PPO__b_isDead() { return STRUCT_OFFSET(AUIManager_CPP, b_isDead); } \
	FORCEINLINE static uint32 __PPO__b_stageComplete() { return STRUCT_OFFSET(AUIManager_CPP, b_stageComplete); }


#define CGXJam_Source_CGXJam_UIManager_CPP_h_9_PROLOG
#define CGXJam_Source_CGXJam_UIManager_CPP_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CGXJam_Source_CGXJam_UIManager_CPP_h_12_PRIVATE_PROPERTY_OFFSET \
	CGXJam_Source_CGXJam_UIManager_CPP_h_12_SPARSE_DATA \
	CGXJam_Source_CGXJam_UIManager_CPP_h_12_RPC_WRAPPERS \
	CGXJam_Source_CGXJam_UIManager_CPP_h_12_INCLASS \
	CGXJam_Source_CGXJam_UIManager_CPP_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CGXJam_Source_CGXJam_UIManager_CPP_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CGXJam_Source_CGXJam_UIManager_CPP_h_12_PRIVATE_PROPERTY_OFFSET \
	CGXJam_Source_CGXJam_UIManager_CPP_h_12_SPARSE_DATA \
	CGXJam_Source_CGXJam_UIManager_CPP_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CGXJam_Source_CGXJam_UIManager_CPP_h_12_INCLASS_NO_PURE_DECLS \
	CGXJam_Source_CGXJam_UIManager_CPP_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CGXJAM_API UClass* StaticClass<class AUIManager_CPP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CGXJam_Source_CGXJam_UIManager_CPP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
