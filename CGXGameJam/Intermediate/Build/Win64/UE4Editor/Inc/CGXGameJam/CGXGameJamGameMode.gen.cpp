// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CGXGameJam/CGXGameJamGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGXGameJamGameMode() {}
// Cross Module References
	CGXGAMEJAM_API UClass* Z_Construct_UClass_ACGXGameJamGameMode_NoRegister();
	CGXGAMEJAM_API UClass* Z_Construct_UClass_ACGXGameJamGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CGXGameJam();
// End Cross Module References
	void ACGXGameJamGameMode::StaticRegisterNativesACGXGameJamGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACGXGameJamGameMode_NoRegister()
	{
		return ACGXGameJamGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACGXGameJamGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACGXGameJamGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CGXGameJam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGXGameJamGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CGXGameJamGameMode.h" },
		{ "ModuleRelativePath", "CGXGameJamGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACGXGameJamGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACGXGameJamGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACGXGameJamGameMode_Statics::ClassParams = {
		&ACGXGameJamGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACGXGameJamGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACGXGameJamGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACGXGameJamGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACGXGameJamGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACGXGameJamGameMode, 1257956983);
	template<> CGXGAMEJAM_API UClass* StaticClass<ACGXGameJamGameMode>()
	{
		return ACGXGameJamGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACGXGameJamGameMode(Z_Construct_UClass_ACGXGameJamGameMode, &ACGXGameJamGameMode::StaticClass, TEXT("/Script/CGXGameJam"), TEXT("ACGXGameJamGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACGXGameJamGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
