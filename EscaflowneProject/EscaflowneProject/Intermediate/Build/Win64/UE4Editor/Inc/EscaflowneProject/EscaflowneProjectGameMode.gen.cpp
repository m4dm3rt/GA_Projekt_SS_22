// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EscaflowneProject/EscaflowneProjectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscaflowneProjectGameMode() {}
// Cross Module References
	ESCAFLOWNEPROJECT_API UClass* Z_Construct_UClass_AEscaflowneProjectGameMode_NoRegister();
	ESCAFLOWNEPROJECT_API UClass* Z_Construct_UClass_AEscaflowneProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_EscaflowneProject();
// End Cross Module References
	void AEscaflowneProjectGameMode::StaticRegisterNativesAEscaflowneProjectGameMode()
	{
	}
	UClass* Z_Construct_UClass_AEscaflowneProjectGameMode_NoRegister()
	{
		return AEscaflowneProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AEscaflowneProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscaflowneProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EscaflowneProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscaflowneProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "EscaflowneProjectGameMode.h" },
		{ "ModuleRelativePath", "EscaflowneProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscaflowneProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscaflowneProjectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscaflowneProjectGameMode_Statics::ClassParams = {
		&AEscaflowneProjectGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEscaflowneProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscaflowneProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscaflowneProjectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscaflowneProjectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscaflowneProjectGameMode, 3914899930);
	template<> ESCAFLOWNEPROJECT_API UClass* StaticClass<AEscaflowneProjectGameMode>()
	{
		return AEscaflowneProjectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscaflowneProjectGameMode(Z_Construct_UClass_AEscaflowneProjectGameMode, &AEscaflowneProjectGameMode::StaticClass, TEXT("/Script/EscaflowneProject"), TEXT("AEscaflowneProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscaflowneProjectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
