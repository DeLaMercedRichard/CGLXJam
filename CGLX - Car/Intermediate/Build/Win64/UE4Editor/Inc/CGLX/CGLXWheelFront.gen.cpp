// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CGLX/CGLXWheelFront.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGLXWheelFront() {}
// Cross Module References
	CGLX_API UClass* Z_Construct_UClass_UCGLXWheelFront_NoRegister();
	CGLX_API UClass* Z_Construct_UClass_UCGLXWheelFront();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_CGLX();
// End Cross Module References
	void UCGLXWheelFront::StaticRegisterNativesUCGLXWheelFront()
	{
	}
	UClass* Z_Construct_UClass_UCGLXWheelFront_NoRegister()
	{
		return UCGLXWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_UCGLXWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCGLXWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_CGLX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCGLXWheelFront_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CGLXWheelFront.h" },
		{ "ModuleRelativePath", "CGLXWheelFront.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCGLXWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCGLXWheelFront>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCGLXWheelFront_Statics::ClassParams = {
		&UCGLXWheelFront::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCGLXWheelFront_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCGLXWheelFront_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCGLXWheelFront()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCGLXWheelFront_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCGLXWheelFront, 2095580847);
	template<> CGLX_API UClass* StaticClass<UCGLXWheelFront>()
	{
		return UCGLXWheelFront::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCGLXWheelFront(Z_Construct_UClass_UCGLXWheelFront, &UCGLXWheelFront::StaticClass, TEXT("/Script/CGLX"), TEXT("UCGLXWheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCGLXWheelFront);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
