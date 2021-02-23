// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Typhoon/StageActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStageActor() {}
// Cross Module References
	TYPHOON_API UClass* Z_Construct_UClass_AStageActor_NoRegister();
	TYPHOON_API UClass* Z_Construct_UClass_AStageActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Typhoon();
// End Cross Module References
	DEFINE_FUNCTION(AStageActor::execCheckNewStage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewStage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckNewStage(Z_Param_NewStage);
		P_NATIVE_END;
	}
	static FName NAME_AStageActor_OnStageHide = FName(TEXT("OnStageHide"));
	void AStageActor::OnStageHide()
	{
		ProcessEvent(FindFunctionChecked(NAME_AStageActor_OnStageHide),NULL);
	}
	static FName NAME_AStageActor_OnStagePlay = FName(TEXT("OnStagePlay"));
	void AStageActor::OnStagePlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_AStageActor_OnStagePlay),NULL);
	}
	void AStageActor::StaticRegisterNativesAStageActor()
	{
		UClass* Class = AStageActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckNewStage", &AStageActor::execCheckNewStage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStageActor_CheckNewStage_Statics
	{
		struct StageActor_eventCheckNewStage_Parms
		{
			int32 NewStage;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewStage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AStageActor_CheckNewStage_Statics::NewProp_NewStage = { "NewStage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StageActor_eventCheckNewStage_Parms, NewStage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStageActor_CheckNewStage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStageActor_CheckNewStage_Statics::NewProp_NewStage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStageActor_CheckNewStage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStageActor_CheckNewStage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStageActor, nullptr, "CheckNewStage", nullptr, nullptr, sizeof(StageActor_eventCheckNewStage_Parms), Z_Construct_UFunction_AStageActor_CheckNewStage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStageActor_CheckNewStage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStageActor_CheckNewStage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStageActor_CheckNewStage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStageActor_CheckNewStage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStageActor_CheckNewStage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStageActor_OnStageHide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStageActor_OnStageHide_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Do stuff like disabling certain components through BP here.\n" },
		{ "ModuleRelativePath", "StageActor.h" },
		{ "ToolTip", "Do stuff like disabling certain components through BP here." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStageActor_OnStageHide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStageActor, nullptr, "OnStageHide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStageActor_OnStageHide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStageActor_OnStageHide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStageActor_OnStageHide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStageActor_OnStageHide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStageActor_OnStagePlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStageActor_OnStagePlay_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Do BeginPlay stuff here instead. BP.\n" },
		{ "ModuleRelativePath", "StageActor.h" },
		{ "ToolTip", "Do BeginPlay stuff here instead. BP." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStageActor_OnStagePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStageActor, nullptr, "OnStagePlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStageActor_OnStagePlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStageActor_OnStagePlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStageActor_OnStagePlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStageActor_OnStagePlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStageActor_NoRegister()
	{
		return AStageActor::StaticClass();
	}
	struct Z_Construct_UClass_AStageActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlySpawnOnExactStage_MetaData[];
#endif
		static void NewProp_bOnlySpawnOnExactStage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlySpawnOnExactStage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StageToActivate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StageToActivate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStageActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Typhoon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStageActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStageActor_CheckNewStage, "CheckNewStage" }, // 595553128
		{ &Z_Construct_UFunction_AStageActor_OnStageHide, "OnStageHide" }, // 2125642276
		{ &Z_Construct_UFunction_AStageActor_OnStagePlay, "OnStagePlay" }, // 3228173186
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStageActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StageActor.h" },
		{ "ModuleRelativePath", "StageActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStageActor_Statics::NewProp_bOnlySpawnOnExactStage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StageActor" },
		{ "ModuleRelativePath", "StageActor.h" },
	};
#endif
	void Z_Construct_UClass_AStageActor_Statics::NewProp_bOnlySpawnOnExactStage_SetBit(void* Obj)
	{
		((AStageActor*)Obj)->bOnlySpawnOnExactStage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStageActor_Statics::NewProp_bOnlySpawnOnExactStage = { "bOnlySpawnOnExactStage", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStageActor), &Z_Construct_UClass_AStageActor_Statics::NewProp_bOnlySpawnOnExactStage_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStageActor_Statics::NewProp_bOnlySpawnOnExactStage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStageActor_Statics::NewProp_bOnlySpawnOnExactStage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStageActor_Statics::NewProp_StageToActivate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StageActor" },
		{ "ModuleRelativePath", "StageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AStageActor_Statics::NewProp_StageToActivate = { "StageToActivate", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStageActor, StageToActivate), METADATA_PARAMS(Z_Construct_UClass_AStageActor_Statics::NewProp_StageToActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStageActor_Statics::NewProp_StageToActivate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStageActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStageActor_Statics::NewProp_bOnlySpawnOnExactStage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStageActor_Statics::NewProp_StageToActivate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStageActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStageActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStageActor_Statics::ClassParams = {
		&AStageActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStageActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStageActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStageActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStageActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStageActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStageActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStageActor, 3784389098);
	template<> TYPHOON_API UClass* StaticClass<AStageActor>()
	{
		return AStageActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStageActor(Z_Construct_UClass_AStageActor, &AStageActor::StaticClass, TEXT("/Script/Typhoon"), TEXT("AStageActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStageActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
