// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Typhoon/TyphoonGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTyphoonGameMode() {}
// Cross Module References
	TYPHOON_API UClass* Z_Construct_UClass_ATyphoonGameMode_NoRegister();
	TYPHOON_API UClass* Z_Construct_UClass_ATyphoonGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Typhoon();
// End Cross Module References
	void ATyphoonGameMode::StaticRegisterNativesATyphoonGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATyphoonGameMode_NoRegister()
	{
		return ATyphoonGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATyphoonGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATyphoonGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Typhoon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyphoonGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TyphoonGameMode.h" },
		{ "ModuleRelativePath", "TyphoonGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATyphoonGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATyphoonGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATyphoonGameMode_Statics::ClassParams = {
		&ATyphoonGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATyphoonGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATyphoonGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATyphoonGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATyphoonGameMode, 3421833917);
	template<> TYPHOON_API UClass* StaticClass<ATyphoonGameMode>()
	{
		return ATyphoonGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATyphoonGameMode(Z_Construct_UClass_ATyphoonGameMode, &ATyphoonGameMode::StaticClass, TEXT("/Script/Typhoon"), TEXT("ATyphoonGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATyphoonGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
