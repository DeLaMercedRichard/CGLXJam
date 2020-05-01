// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CGXGameJam/CGXGameJamPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGXGameJamPlayerController() {}
// Cross Module References
	CGXGAMEJAM_API UClass* Z_Construct_UClass_ACGXGameJamPlayerController_NoRegister();
	CGXGAMEJAM_API UClass* Z_Construct_UClass_ACGXGameJamPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_CGXGameJam();
// End Cross Module References
	void ACGXGameJamPlayerController::StaticRegisterNativesACGXGameJamPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ACGXGameJamPlayerController_NoRegister()
	{
		return ACGXGameJamPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ACGXGameJamPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACGXGameJamPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_CGXGameJam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGXGameJamPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CGXGameJamPlayerController.h" },
		{ "ModuleRelativePath", "CGXGameJamPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACGXGameJamPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACGXGameJamPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACGXGameJamPlayerController_Statics::ClassParams = {
		&ACGXGameJamPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACGXGameJamPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACGXGameJamPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACGXGameJamPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACGXGameJamPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACGXGameJamPlayerController, 686381754);
	template<> CGXGAMEJAM_API UClass* StaticClass<ACGXGameJamPlayerController>()
	{
		return ACGXGameJamPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACGXGameJamPlayerController(Z_Construct_UClass_ACGXGameJamPlayerController, &ACGXGameJamPlayerController::StaticClass, TEXT("/Script/CGXGameJam"), TEXT("ACGXGameJamPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACGXGameJamPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
