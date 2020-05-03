// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CGXJam/UIManager_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIManager_CPP() {}
// Cross Module References
	CGXJAM_API UClass* Z_Construct_UClass_AUIManager_CPP_NoRegister();
	CGXJAM_API UClass* Z_Construct_UClass_AUIManager_CPP();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CGXJam();
	CGXJAM_API UFunction* Z_Construct_UFunction_AUIManager_CPP_GetBuildLimit();
	CGXJAM_API UFunction* Z_Construct_UFunction_AUIManager_CPP_GetMenuHidden();
	CGXJAM_API UFunction* Z_Construct_UFunction_AUIManager_CPP_GetTimer();
	CGXJAM_API UFunction* Z_Construct_UFunction_AUIManager_CPP_GetUsedBudget();
	CGXJAM_API UFunction* Z_Construct_UFunction_AUIManager_CPP_SetMenuHidden();
	CGXJAM_API UFunction* Z_Construct_UFunction_AUIManager_CPP_SetStageBuildLimit();
	CGXJAM_API UFunction* Z_Construct_UFunction_AUIManager_CPP_SetTimer();
	CGXJAM_API UFunction* Z_Construct_UFunction_AUIManager_CPP_SubtractFromStageBudget();
	CGXJAM_API UFunction* Z_Construct_UFunction_AUIManager_CPP_TryAddToStageBudget();
// End Cross Module References
	void AUIManager_CPP::StaticRegisterNativesAUIManager_CPP()
	{
		UClass* Class = AUIManager_CPP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBuildLimit", &AUIManager_CPP::execGetBuildLimit },
			{ "GetMenuHidden", &AUIManager_CPP::execGetMenuHidden },
			{ "GetTimer", &AUIManager_CPP::execGetTimer },
			{ "GetUsedBudget", &AUIManager_CPP::execGetUsedBudget },
			{ "SetMenuHidden", &AUIManager_CPP::execSetMenuHidden },
			{ "SetStageBuildLimit", &AUIManager_CPP::execSetStageBuildLimit },
			{ "SetTimer", &AUIManager_CPP::execSetTimer },
			{ "SubtractFromStageBudget", &AUIManager_CPP::execSubtractFromStageBudget },
			{ "TryAddToStageBudget", &AUIManager_CPP::execTryAddToStageBudget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUIManager_CPP_GetBuildLimit_Statics
	{
		struct UIManager_CPP_eventGetBuildLimit_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AUIManager_CPP_GetBuildLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIManager_CPP_eventGetBuildLimit_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIManager_CPP_GetBuildLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIManager_CPP_GetBuildLimit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIManager_CPP_GetBuildLimit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stage Properties" },
		{ "Comment", "//get the used budget for the stage\n" },
		{ "ModuleRelativePath", "UIManager_CPP.h" },
		{ "ToolTip", "get the used budget for the stage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIManager_CPP_GetBuildLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIManager_CPP, nullptr, "GetBuildLimit", nullptr, nullptr, sizeof(UIManager_CPP_eventGetBuildLimit_Parms), Z_Construct_UFunction_AUIManager_CPP_GetBuildLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIManager_CPP_GetBuildLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIManager_CPP_GetBuildLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIManager_CPP_GetBuildLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIManager_CPP_GetBuildLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIManager_CPP_GetBuildLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIManager_CPP_GetMenuHidden_Statics
	{
		struct UIManager_CPP_eventGetMenuHidden_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUIManager_CPP_GetMenuHidden_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UIManager_CPP_eventGetMenuHidden_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUIManager_CPP_GetMenuHidden_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIManager_CPP_eventGetMenuHidden_Parms), &Z_Construct_UFunction_AUIManager_CPP_GetMenuHidden_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIManager_CPP_GetMenuHidden_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIManager_CPP_GetMenuHidden_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIManager_CPP_GetMenuHidden_Statics::Function_MetaDataParams[] = {
		{ "Category", "Build Menu" },
		{ "Comment", "//set if the build menu is hidden or not\n" },
		{ "ModuleRelativePath", "UIManager_CPP.h" },
		{ "ToolTip", "set if the build menu is hidden or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIManager_CPP_GetMenuHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIManager_CPP, nullptr, "GetMenuHidden", nullptr, nullptr, sizeof(UIManager_CPP_eventGetMenuHidden_Parms), Z_Construct_UFunction_AUIManager_CPP_GetMenuHidden_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIManager_CPP_GetMenuHidden_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIManager_CPP_GetMenuHidden_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIManager_CPP_GetMenuHidden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIManager_CPP_GetMenuHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIManager_CPP_GetMenuHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIManager_CPP_GetTimer_Statics
	{
		struct UIManager_CPP_eventGetTimer_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUIManager_CPP_GetTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIManager_CPP_eventGetTimer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIManager_CPP_GetTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIManager_CPP_GetTimer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIManager_CPP_GetTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stage Timer" },
		{ "Comment", "//Sets the timer for the stage\n" },
		{ "ModuleRelativePath", "UIManager_CPP.h" },
		{ "ToolTip", "Sets the timer for the stage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIManager_CPP_GetTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIManager_CPP, nullptr, "GetTimer", nullptr, nullptr, sizeof(UIManager_CPP_eventGetTimer_Parms), Z_Construct_UFunction_AUIManager_CPP_GetTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIManager_CPP_GetTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIManager_CPP_GetTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIManager_CPP_GetTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIManager_CPP_GetTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIManager_CPP_GetTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIManager_CPP_GetUsedBudget_Statics
	{
		struct UIManager_CPP_eventGetUsedBudget_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AUIManager_CPP_GetUsedBudget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIManager_CPP_eventGetUsedBudget_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIManager_CPP_GetUsedBudget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIManager_CPP_GetUsedBudget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIManager_CPP_GetUsedBudget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stage Properties" },
		{ "Comment", "//Decrease the stages used budget based on the passed itme value\n" },
		{ "ModuleRelativePath", "UIManager_CPP.h" },
		{ "ToolTip", "Decrease the stages used budget based on the passed itme value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIManager_CPP_GetUsedBudget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIManager_CPP, nullptr, "GetUsedBudget", nullptr, nullptr, sizeof(UIManager_CPP_eventGetUsedBudget_Parms), Z_Construct_UFunction_AUIManager_CPP_GetUsedBudget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIManager_CPP_GetUsedBudget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIManager_CPP_GetUsedBudget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIManager_CPP_GetUsedBudget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIManager_CPP_GetUsedBudget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIManager_CPP_GetUsedBudget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIManager_CPP_SetMenuHidden_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIManager_CPP_SetMenuHidden_Statics::Function_MetaDataParams[] = {
		{ "Category", "Build Menu" },
		{ "Comment", "//Build Menu Properties\n" },
		{ "ModuleRelativePath", "UIManager_CPP.h" },
		{ "ToolTip", "Build Menu Properties" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIManager_CPP_SetMenuHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIManager_CPP, nullptr, "SetMenuHidden", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIManager_CPP_SetMenuHidden_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIManager_CPP_SetMenuHidden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIManager_CPP_SetMenuHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIManager_CPP_SetMenuHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIManager_CPP_SetStageBuildLimit_Statics
	{
		struct UIManager_CPP_eventSetStageBuildLimit_Parms
		{
			int32 stageLimit_;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_stageLimit_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AUIManager_CPP_SetStageBuildLimit_Statics::NewProp_stageLimit_ = { "stageLimit_", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIManager_CPP_eventSetStageBuildLimit_Parms, stageLimit_), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIManager_CPP_SetStageBuildLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIManager_CPP_SetStageBuildLimit_Statics::NewProp_stageLimit_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIManager_CPP_SetStageBuildLimit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stage Properties" },
		{ "Comment", "//Stage Weight Tracking\n" },
		{ "ModuleRelativePath", "UIManager_CPP.h" },
		{ "ToolTip", "Stage Weight Tracking" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIManager_CPP_SetStageBuildLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIManager_CPP, nullptr, "SetStageBuildLimit", nullptr, nullptr, sizeof(UIManager_CPP_eventSetStageBuildLimit_Parms), Z_Construct_UFunction_AUIManager_CPP_SetStageBuildLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIManager_CPP_SetStageBuildLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIManager_CPP_SetStageBuildLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIManager_CPP_SetStageBuildLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIManager_CPP_SetStageBuildLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIManager_CPP_SetStageBuildLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIManager_CPP_SetTimer_Statics
	{
		struct UIManager_CPP_eventSetTimer_Parms
		{
			float f_stageTimer_;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_f_stageTimer_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUIManager_CPP_SetTimer_Statics::NewProp_f_stageTimer_ = { "f_stageTimer_", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIManager_CPP_eventSetTimer_Parms, f_stageTimer_), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIManager_CPP_SetTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIManager_CPP_SetTimer_Statics::NewProp_f_stageTimer_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIManager_CPP_SetTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stage Timer" },
		{ "Comment", "//is true, the timer will progress down towards true\n" },
		{ "ModuleRelativePath", "UIManager_CPP.h" },
		{ "ToolTip", "is true, the timer will progress down towards true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIManager_CPP_SetTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIManager_CPP, nullptr, "SetTimer", nullptr, nullptr, sizeof(UIManager_CPP_eventSetTimer_Parms), Z_Construct_UFunction_AUIManager_CPP_SetTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIManager_CPP_SetTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIManager_CPP_SetTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIManager_CPP_SetTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIManager_CPP_SetTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIManager_CPP_SetTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIManager_CPP_SubtractFromStageBudget_Statics
	{
		struct UIManager_CPP_eventSubtractFromStageBudget_Parms
		{
			int32 itemValue_;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_itemValue_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AUIManager_CPP_SubtractFromStageBudget_Statics::NewProp_itemValue_ = { "itemValue_", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIManager_CPP_eventSubtractFromStageBudget_Parms, itemValue_), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIManager_CPP_SubtractFromStageBudget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIManager_CPP_SubtractFromStageBudget_Statics::NewProp_itemValue_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIManager_CPP_SubtractFromStageBudget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stage Properties" },
		{ "Comment", "//increase the stages used budget based on the passed itme value\n" },
		{ "ModuleRelativePath", "UIManager_CPP.h" },
		{ "ToolTip", "increase the stages used budget based on the passed itme value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIManager_CPP_SubtractFromStageBudget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIManager_CPP, nullptr, "SubtractFromStageBudget", nullptr, nullptr, sizeof(UIManager_CPP_eventSubtractFromStageBudget_Parms), Z_Construct_UFunction_AUIManager_CPP_SubtractFromStageBudget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIManager_CPP_SubtractFromStageBudget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIManager_CPP_SubtractFromStageBudget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIManager_CPP_SubtractFromStageBudget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIManager_CPP_SubtractFromStageBudget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIManager_CPP_SubtractFromStageBudget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIManager_CPP_TryAddToStageBudget_Statics
	{
		struct UIManager_CPP_eventTryAddToStageBudget_Parms
		{
			int32 itemValue_;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_itemValue_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUIManager_CPP_TryAddToStageBudget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UIManager_CPP_eventTryAddToStageBudget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUIManager_CPP_TryAddToStageBudget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIManager_CPP_eventTryAddToStageBudget_Parms), &Z_Construct_UFunction_AUIManager_CPP_TryAddToStageBudget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AUIManager_CPP_TryAddToStageBudget_Statics::NewProp_itemValue_ = { "itemValue_", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIManager_CPP_eventTryAddToStageBudget_Parms, itemValue_), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIManager_CPP_TryAddToStageBudget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIManager_CPP_TryAddToStageBudget_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIManager_CPP_TryAddToStageBudget_Statics::NewProp_itemValue_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIManager_CPP_TryAddToStageBudget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stage Properties" },
		{ "Comment", "//set the max value of stage props that the player can place\n" },
		{ "ModuleRelativePath", "UIManager_CPP.h" },
		{ "ToolTip", "set the max value of stage props that the player can place" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIManager_CPP_TryAddToStageBudget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIManager_CPP, nullptr, "TryAddToStageBudget", nullptr, nullptr, sizeof(UIManager_CPP_eventTryAddToStageBudget_Parms), Z_Construct_UFunction_AUIManager_CPP_TryAddToStageBudget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIManager_CPP_TryAddToStageBudget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIManager_CPP_TryAddToStageBudget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIManager_CPP_TryAddToStageBudget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIManager_CPP_TryAddToStageBudget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIManager_CPP_TryAddToStageBudget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUIManager_CPP_NoRegister()
	{
		return AUIManager_CPP::StaticClass();
	}
	struct Z_Construct_UClass_AUIManager_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isHidden_MetaData[];
#endif
		static void NewProp_isHidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isHidden;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_i_usedBudget_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_i_usedBudget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_i_buildLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_i_buildLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_f_timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_f_timer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b_isTimerActive_MetaData[];
#endif
		static void NewProp_b_isTimerActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b_isTimerActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUIManager_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CGXJam,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUIManager_CPP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUIManager_CPP_GetBuildLimit, "GetBuildLimit" }, // 4080118128
		{ &Z_Construct_UFunction_AUIManager_CPP_GetMenuHidden, "GetMenuHidden" }, // 1853998486
		{ &Z_Construct_UFunction_AUIManager_CPP_GetTimer, "GetTimer" }, // 3697720180
		{ &Z_Construct_UFunction_AUIManager_CPP_GetUsedBudget, "GetUsedBudget" }, // 217118593
		{ &Z_Construct_UFunction_AUIManager_CPP_SetMenuHidden, "SetMenuHidden" }, // 401990361
		{ &Z_Construct_UFunction_AUIManager_CPP_SetStageBuildLimit, "SetStageBuildLimit" }, // 3499102606
		{ &Z_Construct_UFunction_AUIManager_CPP_SetTimer, "SetTimer" }, // 1331309388
		{ &Z_Construct_UFunction_AUIManager_CPP_SubtractFromStageBudget, "SubtractFromStageBudget" }, // 3435750508
		{ &Z_Construct_UFunction_AUIManager_CPP_TryAddToStageBudget, "TryAddToStageBudget" }, // 3417521969
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIManager_CPP_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UIManager_CPP.h" },
		{ "ModuleRelativePath", "UIManager_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_isHidden_MetaData[] = {
		{ "Category", "Build Menu" },
		{ "Comment", "//Build Menu Properties\n" },
		{ "ModuleRelativePath", "UIManager_CPP.h" },
		{ "ToolTip", "Build Menu Properties" },
	};
#endif
	void Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_isHidden_SetBit(void* Obj)
	{
		((AUIManager_CPP*)Obj)->isHidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_isHidden = { "isHidden", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIManager_CPP), &Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_isHidden_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_isHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_isHidden_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_i_usedBudget_MetaData[] = {
		{ "Category", "Stage Properties" },
		{ "Comment", "//Max value of buildable obejects per stage\n" },
		{ "ModuleRelativePath", "UIManager_CPP.h" },
		{ "ToolTip", "Max value of buildable obejects per stage" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_i_usedBudget = { "i_usedBudget", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIManager_CPP, i_usedBudget), METADATA_PARAMS(Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_i_usedBudget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_i_usedBudget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_i_buildLimit_MetaData[] = {
		{ "Category", "Stage Properties" },
		{ "Comment", "//Stage Weight Tracking\n" },
		{ "ModuleRelativePath", "UIManager_CPP.h" },
		{ "ToolTip", "Stage Weight Tracking" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_i_buildLimit = { "i_buildLimit", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIManager_CPP, i_buildLimit), METADATA_PARAMS(Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_i_buildLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_i_buildLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_f_timer_MetaData[] = {
		{ "Category", "Stage Timer" },
		{ "Comment", "//Timer Functionallity\n" },
		{ "ModuleRelativePath", "UIManager_CPP.h" },
		{ "ToolTip", "Timer Functionallity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_f_timer = { "f_timer", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIManager_CPP, f_timer), METADATA_PARAMS(Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_f_timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_f_timer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_b_isTimerActive_MetaData[] = {
		{ "Category", "Stage Timer" },
		{ "Comment", "//Timer Functionallity\n" },
		{ "ModuleRelativePath", "UIManager_CPP.h" },
		{ "ToolTip", "Timer Functionallity" },
	};
#endif
	void Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_b_isTimerActive_SetBit(void* Obj)
	{
		((AUIManager_CPP*)Obj)->b_isTimerActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_b_isTimerActive = { "b_isTimerActive", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIManager_CPP), &Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_b_isTimerActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_b_isTimerActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_b_isTimerActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUIManager_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_isHidden,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_i_usedBudget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_i_buildLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_f_timer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIManager_CPP_Statics::NewProp_b_isTimerActive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUIManager_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUIManager_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUIManager_CPP_Statics::ClassParams = {
		&AUIManager_CPP::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUIManager_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUIManager_CPP_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUIManager_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUIManager_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUIManager_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUIManager_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUIManager_CPP, 378459839);
	template<> CGXJAM_API UClass* StaticClass<AUIManager_CPP>()
	{
		return AUIManager_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUIManager_CPP(Z_Construct_UClass_AUIManager_CPP, &AUIManager_CPP::StaticClass, TEXT("/Script/CGXJam"), TEXT("AUIManager_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUIManager_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
