// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CGXJam/CGXJamCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGXJamCharacter() {}
// Cross Module References
	CGXJAM_API UClass* Z_Construct_UClass_ACGXJamCharacter_NoRegister();
	CGXJAM_API UClass* Z_Construct_UClass_ACGXJamCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CGXJam();
	CGXJAM_API UFunction* Z_Construct_UFunction_ACGXJamCharacter_SelectFloor();
	CGXJAM_API UFunction* Z_Construct_UFunction_ACGXJamCharacter_SelectJumpPad();
	CGXJAM_API UFunction* Z_Construct_UFunction_ACGXJamCharacter_SelectStairs();
	CGXJAM_API UFunction* Z_Construct_UFunction_ACGXJamCharacter_UseBuild();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	static FName NAME_ACGXJamCharacter_SelectFloor = FName(TEXT("SelectFloor"));
	void ACGXJamCharacter::SelectFloor()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACGXJamCharacter_SelectFloor),NULL);
	}
	static FName NAME_ACGXJamCharacter_SelectJumpPad = FName(TEXT("SelectJumpPad"));
	void ACGXJamCharacter::SelectJumpPad()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACGXJamCharacter_SelectJumpPad),NULL);
	}
	static FName NAME_ACGXJamCharacter_SelectStairs = FName(TEXT("SelectStairs"));
	void ACGXJamCharacter::SelectStairs()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACGXJamCharacter_SelectStairs),NULL);
	}
	static FName NAME_ACGXJamCharacter_UseBuild = FName(TEXT("UseBuild"));
	void ACGXJamCharacter::UseBuild()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACGXJamCharacter_UseBuild),NULL);
	}
	void ACGXJamCharacter::StaticRegisterNativesACGXJamCharacter()
	{
	}
	struct Z_Construct_UFunction_ACGXJamCharacter_SelectFloor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACGXJamCharacter_SelectFloor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Build" },
		{ "ModuleRelativePath", "CGXJamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGXJamCharacter_SelectFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGXJamCharacter, nullptr, "SelectFloor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACGXJamCharacter_SelectFloor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACGXJamCharacter_SelectFloor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACGXJamCharacter_SelectFloor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACGXJamCharacter_SelectFloor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACGXJamCharacter_SelectJumpPad_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACGXJamCharacter_SelectJumpPad_Statics::Function_MetaDataParams[] = {
		{ "Category", "Build" },
		{ "ModuleRelativePath", "CGXJamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGXJamCharacter_SelectJumpPad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGXJamCharacter, nullptr, "SelectJumpPad", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACGXJamCharacter_SelectJumpPad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACGXJamCharacter_SelectJumpPad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACGXJamCharacter_SelectJumpPad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACGXJamCharacter_SelectJumpPad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACGXJamCharacter_SelectStairs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACGXJamCharacter_SelectStairs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Build" },
		{ "ModuleRelativePath", "CGXJamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGXJamCharacter_SelectStairs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGXJamCharacter, nullptr, "SelectStairs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACGXJamCharacter_SelectStairs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACGXJamCharacter_SelectStairs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACGXJamCharacter_SelectStairs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACGXJamCharacter_SelectStairs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACGXJamCharacter_UseBuild_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACGXJamCharacter_UseBuild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Build" },
		{ "ModuleRelativePath", "CGXJamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACGXJamCharacter_UseBuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACGXJamCharacter, nullptr, "UseBuild", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACGXJamCharacter_UseBuild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACGXJamCharacter_UseBuild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACGXJamCharacter_UseBuild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACGXJamCharacter_UseBuild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACGXJamCharacter_NoRegister()
	{
		return ACGXJamCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACGXJamCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuildActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACGXJamCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CGXJam,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACGXJamCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACGXJamCharacter_SelectFloor, "SelectFloor" }, // 865194373
		{ &Z_Construct_UFunction_ACGXJamCharacter_SelectJumpPad, "SelectJumpPad" }, // 300678728
		{ &Z_Construct_UFunction_ACGXJamCharacter_SelectStairs, "SelectStairs" }, // 2423728810
		{ &Z_Construct_UFunction_ACGXJamCharacter_UseBuild, "UseBuild" }, // 85947487
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGXJamCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CGXJamCharacter.h" },
		{ "ModuleRelativePath", "CGXJamCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGXJamCharacter_Statics::NewProp_BuildActor_MetaData[] = {
		{ "Category", "Build" },
		{ "ModuleRelativePath", "CGXJamCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACGXJamCharacter_Statics::NewProp_BuildActor = { "BuildActor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACGXJamCharacter, BuildActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACGXJamCharacter_Statics::NewProp_BuildActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACGXJamCharacter_Statics::NewProp_BuildActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGXJamCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "CGXJamCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACGXJamCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACGXJamCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ACGXJamCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACGXJamCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGXJamCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "CGXJamCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACGXJamCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACGXJamCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ACGXJamCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACGXJamCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGXJamCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CGXJamCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACGXJamCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACGXJamCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACGXJamCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACGXJamCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGXJamCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CGXJamCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACGXJamCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACGXJamCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACGXJamCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACGXJamCharacter_Statics::NewProp_CameraBoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACGXJamCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGXJamCharacter_Statics::NewProp_BuildActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGXJamCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGXJamCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGXJamCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGXJamCharacter_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACGXJamCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACGXJamCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACGXJamCharacter_Statics::ClassParams = {
		&ACGXJamCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACGXJamCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACGXJamCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACGXJamCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACGXJamCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACGXJamCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACGXJamCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACGXJamCharacter, 1404780313);
	template<> CGXJAM_API UClass* StaticClass<ACGXJamCharacter>()
	{
		return ACGXJamCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACGXJamCharacter(Z_Construct_UClass_ACGXJamCharacter, &ACGXJamCharacter::StaticClass, TEXT("/Script/CGXJam"), TEXT("ACGXJamCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACGXJamCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
