// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Typhoon/TyphoonPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTyphoonPlayerController() {}
// Cross Module References
	TYPHOON_API UClass* Z_Construct_UClass_ATyphoonPlayerController_NoRegister();
	TYPHOON_API UClass* Z_Construct_UClass_ATyphoonPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Typhoon();
// End Cross Module References
	DEFINE_FUNCTION(ATyphoonPlayerController::execHandleBeginPlayAfterCountdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleBeginPlayAfterCountdown_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ATyphoonPlayerController_HandleBeginPlayAfterCountdown = FName(TEXT("HandleBeginPlayAfterCountdown"));
	void ATyphoonPlayerController::HandleBeginPlayAfterCountdown()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATyphoonPlayerController_HandleBeginPlayAfterCountdown),NULL);
	}
	static FName NAME_ATyphoonPlayerController_OnBeginPlayAfterCountdown = FName(TEXT("OnBeginPlayAfterCountdown"));
	void ATyphoonPlayerController::OnBeginPlayAfterCountdown()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATyphoonPlayerController_OnBeginPlayAfterCountdown),NULL);
	}
	void ATyphoonPlayerController::StaticRegisterNativesATyphoonPlayerController()
	{
		UClass* Class = ATyphoonPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleBeginPlayAfterCountdown", &ATyphoonPlayerController::execHandleBeginPlayAfterCountdown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATyphoonPlayerController_HandleBeginPlayAfterCountdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATyphoonPlayerController_HandleBeginPlayAfterCountdown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TyphoonPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATyphoonPlayerController_HandleBeginPlayAfterCountdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATyphoonPlayerController, nullptr, "HandleBeginPlayAfterCountdown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATyphoonPlayerController_HandleBeginPlayAfterCountdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyphoonPlayerController_HandleBeginPlayAfterCountdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATyphoonPlayerController_HandleBeginPlayAfterCountdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATyphoonPlayerController_HandleBeginPlayAfterCountdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATyphoonPlayerController_OnBeginPlayAfterCountdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATyphoonPlayerController_OnBeginPlayAfterCountdown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TyphoonPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATyphoonPlayerController_OnBeginPlayAfterCountdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATyphoonPlayerController, nullptr, "OnBeginPlayAfterCountdown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATyphoonPlayerController_OnBeginPlayAfterCountdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyphoonPlayerController_OnBeginPlayAfterCountdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATyphoonPlayerController_OnBeginPlayAfterCountdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATyphoonPlayerController_OnBeginPlayAfterCountdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATyphoonPlayerController_NoRegister()
	{
		return ATyphoonPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATyphoonPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableInputDuringInitialCountdown_MetaData[];
#endif
		static void NewProp_DisableInputDuringInitialCountdown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableInputDuringInitialCountdown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATyphoonPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Typhoon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATyphoonPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATyphoonPlayerController_HandleBeginPlayAfterCountdown, "HandleBeginPlayAfterCountdown" }, // 377536768
		{ &Z_Construct_UFunction_ATyphoonPlayerController_OnBeginPlayAfterCountdown, "OnBeginPlayAfterCountdown" }, // 2076035776
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyphoonPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// A bit more than a standard PlayerController.\n" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TyphoonPlayerController.h" },
		{ "ModuleRelativePath", "TyphoonPlayerController.h" },
		{ "ToolTip", "A bit more than a standard PlayerController." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyphoonPlayerController_Statics::NewProp_DisableInputDuringInitialCountdown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TyphoonPlayerController" },
		{ "ModuleRelativePath", "TyphoonPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_ATyphoonPlayerController_Statics::NewProp_DisableInputDuringInitialCountdown_SetBit(void* Obj)
	{
		((ATyphoonPlayerController*)Obj)->DisableInputDuringInitialCountdown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATyphoonPlayerController_Statics::NewProp_DisableInputDuringInitialCountdown = { "DisableInputDuringInitialCountdown", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATyphoonPlayerController), &Z_Construct_UClass_ATyphoonPlayerController_Statics::NewProp_DisableInputDuringInitialCountdown_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATyphoonPlayerController_Statics::NewProp_DisableInputDuringInitialCountdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonPlayerController_Statics::NewProp_DisableInputDuringInitialCountdown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATyphoonPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATyphoonPlayerController_Statics::NewProp_DisableInputDuringInitialCountdown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATyphoonPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATyphoonPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATyphoonPlayerController_Statics::ClassParams = {
		&ATyphoonPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATyphoonPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATyphoonPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATyphoonPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATyphoonPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATyphoonPlayerController, 1304175698);
	template<> TYPHOON_API UClass* StaticClass<ATyphoonPlayerController>()
	{
		return ATyphoonPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATyphoonPlayerController(Z_Construct_UClass_ATyphoonPlayerController, &ATyphoonPlayerController::StaticClass, TEXT("/Script/Typhoon"), TEXT("ATyphoonPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATyphoonPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
