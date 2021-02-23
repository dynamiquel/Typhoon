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
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_Typhoon();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATyphoonGameMode::execHandlePlayerRespawnEnded)
	{
		P_GET_OBJECT(AController,Z_Param_Controller);
		P_GET_STRUCT(FTransform,Z_Param_SpawnTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlayerRespawnEnded(Z_Param_Controller,Z_Param_SpawnTransform);
		P_NATIVE_END;
	}
	void ATyphoonGameMode::StaticRegisterNativesATyphoonGameMode()
	{
		UClass* Class = ATyphoonGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandlePlayerRespawnEnded", &ATyphoonGameMode::execHandlePlayerRespawnEnded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATyphoonGameMode_HandlePlayerRespawnEnded_Statics
	{
		struct TyphoonGameMode_eventHandlePlayerRespawnEnded_Parms
		{
			AController* Controller;
			FTransform SpawnTransform;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATyphoonGameMode_HandlePlayerRespawnEnded_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TyphoonGameMode_eventHandlePlayerRespawnEnded_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATyphoonGameMode_HandlePlayerRespawnEnded_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TyphoonGameMode_eventHandlePlayerRespawnEnded_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATyphoonGameMode_HandlePlayerRespawnEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATyphoonGameMode_HandlePlayerRespawnEnded_Statics::NewProp_SpawnTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATyphoonGameMode_HandlePlayerRespawnEnded_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATyphoonGameMode_HandlePlayerRespawnEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TyphoonGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATyphoonGameMode_HandlePlayerRespawnEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATyphoonGameMode, nullptr, "HandlePlayerRespawnEnded", nullptr, nullptr, sizeof(TyphoonGameMode_eventHandlePlayerRespawnEnded_Parms), Z_Construct_UFunction_ATyphoonGameMode_HandlePlayerRespawnEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyphoonGameMode_HandlePlayerRespawnEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATyphoonGameMode_HandlePlayerRespawnEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyphoonGameMode_HandlePlayerRespawnEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATyphoonGameMode_HandlePlayerRespawnEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATyphoonGameMode_HandlePlayerRespawnEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATyphoonGameMode_NoRegister()
	{
		return ATyphoonGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATyphoonGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RespawnDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RespawnDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLives_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartLives;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrepPhaseDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PrepPhaseDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountdownDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CountdownDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumPlayersToStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumPlayersToStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATyphoonGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Typhoon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATyphoonGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATyphoonGameMode_HandlePlayerRespawnEnded, "HandlePlayerRespawnEnded" }, // 1056960065
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyphoonGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TyphoonGameMode.h" },
		{ "ModuleRelativePath", "TyphoonGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyphoonGameMode_Statics::NewProp_RespawnDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TyphoonGameMode" },
		{ "ModuleRelativePath", "TyphoonGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATyphoonGameMode_Statics::NewProp_RespawnDelay = { "RespawnDelay", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATyphoonGameMode, RespawnDelay), METADATA_PARAMS(Z_Construct_UClass_ATyphoonGameMode_Statics::NewProp_RespawnDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonGameMode_Statics::NewProp_RespawnDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyphoonGameMode_Statics::NewProp_StartLives_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TyphoonGameMode" },
		{ "ModuleRelativePath", "TyphoonGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATyphoonGameMode_Statics::NewProp_StartLives = { "StartLives", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATyphoonGameMode, StartLives), METADATA_PARAMS(Z_Construct_UClass_ATyphoonGameMode_Statics::NewProp_StartLives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonGameMode_Statics::NewProp_StartLives_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyphoonGameMode_Statics::NewProp_PrepPhaseDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TyphoonGameMode" },
		{ "Comment", "// Duration of the Preparation phase.\n" },
		{ "ModuleRelativePath", "TyphoonGameMode.h" },
		{ "ToolTip", "Duration of the Preparation phase." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATyphoonGameMode_Statics::NewProp_PrepPhaseDuration = { "PrepPhaseDuration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATyphoonGameMode, PrepPhaseDuration), METADATA_PARAMS(Z_Construct_UClass_ATyphoonGameMode_Statics::NewProp_PrepPhaseDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonGameMode_Statics::NewProp_PrepPhaseDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyphoonGameMode_Statics::NewProp_CountdownDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TyphoonGameMode" },
		{ "Comment", "// Duration of the Countdown phase.\n" },
		{ "ModuleRelativePath", "TyphoonGameMode.h" },
		{ "ToolTip", "Duration of the Countdown phase." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATyphoonGameMode_Statics::NewProp_CountdownDuration = { "CountdownDuration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATyphoonGameMode, CountdownDuration), METADATA_PARAMS(Z_Construct_UClass_ATyphoonGameMode_Statics::NewProp_CountdownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonGameMode_Statics::NewProp_CountdownDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyphoonGameMode_Statics::NewProp_MinimumPlayersToStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TyphoonGameMode" },
		{ "ModuleRelativePath", "TyphoonGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATyphoonGameMode_Statics::NewProp_MinimumPlayersToStart = { "MinimumPlayersToStart", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATyphoonGameMode, MinimumPlayersToStart), METADATA_PARAMS(Z_Construct_UClass_ATyphoonGameMode_Statics::NewProp_MinimumPlayersToStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonGameMode_Statics::NewProp_MinimumPlayersToStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATyphoonGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATyphoonGameMode_Statics::NewProp_RespawnDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATyphoonGameMode_Statics::NewProp_StartLives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATyphoonGameMode_Statics::NewProp_PrepPhaseDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATyphoonGameMode_Statics::NewProp_CountdownDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATyphoonGameMode_Statics::NewProp_MinimumPlayersToStart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATyphoonGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATyphoonGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATyphoonGameMode_Statics::ClassParams = {
		&ATyphoonGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATyphoonGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonGameMode_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ATyphoonGameMode, 1926128566);
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
