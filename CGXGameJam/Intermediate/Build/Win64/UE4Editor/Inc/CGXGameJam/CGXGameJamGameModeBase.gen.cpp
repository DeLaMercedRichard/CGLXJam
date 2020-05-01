// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CGXGameJam/CGXGameJamGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGXGameJamGameModeBase() {}
// Cross Module References
	CGXGAMEJAM_API UClass* Z_Construct_UClass_ACGXGameJamGameModeBase_NoRegister();
	CGXGAMEJAM_API UClass* Z_Construct_UClass_ACGXGameJamGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CGXGameJam();
// End Cross Module References
	void ACGXGameJamGameModeBase::StaticRegisterNativesACGXGameJamGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACGXGameJamGameModeBase_NoRegister()
	{
		return ACGXGameJamGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACGXGameJamGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACGXGameJamGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CGXGameJam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGXGameJamGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CGXGameJamGameModeBase.h" },
		{ "ModuleRelativePath", "CGXGameJamGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACGXGameJamGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACGXGameJamGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACGXGameJamGameModeBase_Statics::ClassParams = {
		&ACGXGameJamGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACGXGameJamGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACGXGameJamGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACGXGameJamGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACGXGameJamGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACGXGameJamGameModeBase, 3939967456);
	template<> CGXGAMEJAM_API UClass* StaticClass<ACGXGameJamGameModeBase>()
	{
		return ACGXGameJamGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACGXGameJamGameModeBase(Z_Construct_UClass_ACGXGameJamGameModeBase, &ACGXGameJamGameModeBase::StaticClass, TEXT("/Script/CGXGameJam"), TEXT("ACGXGameJamGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACGXGameJamGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
