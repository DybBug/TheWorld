// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheWorld/TheWorldGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheWorldGameMode() {}
// Cross Module References
	THEWORLD_API UClass* Z_Construct_UClass_ATheWorldGameMode_NoRegister();
	THEWORLD_API UClass* Z_Construct_UClass_ATheWorldGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TheWorld();
// End Cross Module References
	void ATheWorldGameMode::StaticRegisterNativesATheWorldGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATheWorldGameMode_NoRegister()
	{
		return ATheWorldGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATheWorldGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATheWorldGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TheWorld,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheWorldGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
		{ "IncludePath", "TheWorldGameMode.h" },
		{ "ModuleRelativePath", "TheWorldGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATheWorldGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheWorldGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATheWorldGameMode_Statics::ClassParams = {
		&ATheWorldGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATheWorldGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATheWorldGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATheWorldGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATheWorldGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATheWorldGameMode, 996034699);
	template<> THEWORLD_API UClass* StaticClass<ATheWorldGameMode>()
	{
		return ATheWorldGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATheWorldGameMode(Z_Construct_UClass_ATheWorldGameMode, &ATheWorldGameMode::StaticClass, TEXT("/Script/TheWorld"), TEXT("ATheWorldGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATheWorldGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
