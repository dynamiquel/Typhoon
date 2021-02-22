// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Typhoon/TyphoonGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTyphoonGameState() {}
// Cross Module References
	TYPHOON_API UFunction* Z_Construct_UDelegateFunction_ATyphoonGameState_OnStageCompleteSignature__DelegateSignature();
	TYPHOON_API UClass* Z_Construct_UClass_ATyphoonGameState();
	TYPHOON_API UClass* Z_Construct_UClass_ATyphoonGameState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	UPackage* Z_Construct_UPackage__Script_Typhoon();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ATyphoonGameState_OnStageCompleteSignature__DelegateSignature_Statics
	{
		struct TyphoonGameState_eventOnStageCompleteSignature_Parms
		{
			int32 NewStageValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewStageValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewStageValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ATyphoonGameState_OnStageCompleteSignature__DelegateSignature_Statics::NewProp_NewStageValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ATyphoonGameState_OnStageCompleteSignature__DelegateSignature_Statics::NewProp_NewStageValue = { "NewStageValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TyphoonGameState_eventOnStageCompleteSignature_Parms, NewStageValue), METADATA_PARAMS(Z_Construct_UDelegateFunction_ATyphoonGameState_OnStageCompleteSignature__DelegateSignature_Statics::NewProp_NewStageValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ATyphoonGameState_OnStageCompleteSignature__DelegateSignature_Statics::NewProp_NewStageValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ATyphoonGameState_OnStageCompleteSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ATyphoonGameState_OnStageCompleteSignature__DelegateSignature_Statics::NewProp_NewStageValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ATyphoonGameState_OnStageCompleteSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TyphoonGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ATyphoonGameState_OnStageCompleteSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATyphoonGameState, nullptr, "OnStageCompleteSignature__DelegateSignature", nullptr, nullptr, sizeof(TyphoonGameState_eventOnStageCompleteSignature_Parms), Z_Construct_UDelegateFunction_ATyphoonGameState_OnStageCompleteSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ATyphoonGameState_OnStageCompleteSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ATyphoonGameState_OnStageCompleteSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ATyphoonGameState_OnStageCompleteSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ATyphoonGameState_OnStageCompleteSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ATyphoonGameState_OnStageCompleteSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ATyphoonGameState::execCompleteStage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompleteStage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATyphoonGameState::execOnRep_MatchInProgressState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MatchInProgressState();
		P_NATIVE_END;
	}
	static FName NAME_ATyphoonGameState_BP_OnCountdownStarted = FName(TEXT("BP_OnCountdownStarted"));
	void ATyphoonGameState::BP_OnCountdownStarted()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATyphoonGameState_BP_OnCountdownStarted),NULL);
	}
	static FName NAME_ATyphoonGameState_BP_OnGameStarted = FName(TEXT("BP_OnGameStarted"));
	void ATyphoonGameState::BP_OnGameStarted()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATyphoonGameState_BP_OnGameStarted),NULL);
	}
	static FName NAME_ATyphoonGameState_BP_OnPrepPhaseStarted = FName(TEXT("BP_OnPrepPhaseStarted"));
	void ATyphoonGameState::BP_OnPrepPhaseStarted()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATyphoonGameState_BP_OnPrepPhaseStarted),NULL);
	}
	void ATyphoonGameState::StaticRegisterNativesATyphoonGameState()
	{
		UClass* Class = ATyphoonGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CompleteStage", &ATyphoonGameState::execCompleteStage },
			{ "OnRep_MatchInProgressState", &ATyphoonGameState::execOnRep_MatchInProgressState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATyphoonGameState_BP_OnCountdownStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATyphoonGameState_BP_OnCountdownStarted_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the Countdown state starts.\n" },
		{ "ModuleRelativePath", "TyphoonGameState.h" },
		{ "ToolTip", "Called when the Countdown state starts." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATyphoonGameState_BP_OnCountdownStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATyphoonGameState, nullptr, "BP_OnCountdownStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATyphoonGameState_BP_OnCountdownStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyphoonGameState_BP_OnCountdownStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATyphoonGameState_BP_OnCountdownStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATyphoonGameState_BP_OnCountdownStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATyphoonGameState_BP_OnGameStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATyphoonGameState_BP_OnGameStarted_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the Normal state starts.\n" },
		{ "ModuleRelativePath", "TyphoonGameState.h" },
		{ "ToolTip", "Called when the Normal state starts." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATyphoonGameState_BP_OnGameStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATyphoonGameState, nullptr, "BP_OnGameStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATyphoonGameState_BP_OnGameStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyphoonGameState_BP_OnGameStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATyphoonGameState_BP_OnGameStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATyphoonGameState_BP_OnGameStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATyphoonGameState_BP_OnPrepPhaseStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATyphoonGameState_BP_OnPrepPhaseStarted_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the Prep Phase state starts.\n" },
		{ "ModuleRelativePath", "TyphoonGameState.h" },
		{ "ToolTip", "Called when the Prep Phase state starts." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATyphoonGameState_BP_OnPrepPhaseStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATyphoonGameState, nullptr, "BP_OnPrepPhaseStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATyphoonGameState_BP_OnPrepPhaseStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyphoonGameState_BP_OnPrepPhaseStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATyphoonGameState_BP_OnPrepPhaseStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATyphoonGameState_BP_OnPrepPhaseStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATyphoonGameState_CompleteStage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATyphoonGameState_CompleteStage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TyphoonGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATyphoonGameState_CompleteStage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATyphoonGameState, nullptr, "CompleteStage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATyphoonGameState_CompleteStage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyphoonGameState_CompleteStage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATyphoonGameState_CompleteStage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATyphoonGameState_CompleteStage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATyphoonGameState_OnRep_MatchInProgressState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATyphoonGameState_OnRep_MatchInProgressState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TyphoonGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATyphoonGameState_OnRep_MatchInProgressState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATyphoonGameState, nullptr, "OnRep_MatchInProgressState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATyphoonGameState_OnRep_MatchInProgressState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyphoonGameState_OnRep_MatchInProgressState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATyphoonGameState_OnRep_MatchInProgressState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATyphoonGameState_OnRep_MatchInProgressState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATyphoonGameState_NoRegister()
	{
		return ATyphoonGameState::StaticClass();
	}
	struct Z_Construct_UClass_ATyphoonGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrepPhaseDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PrepPhaseDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountdownEndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CountdownEndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeginTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BeginTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchInProgressState_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MatchInProgressState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStageComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStageComplete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATyphoonGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_Typhoon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATyphoonGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATyphoonGameState_BP_OnCountdownStarted, "BP_OnCountdownStarted" }, // 2259811962
		{ &Z_Construct_UFunction_ATyphoonGameState_BP_OnGameStarted, "BP_OnGameStarted" }, // 1762299940
		{ &Z_Construct_UFunction_ATyphoonGameState_BP_OnPrepPhaseStarted, "BP_OnPrepPhaseStarted" }, // 211749464
		{ &Z_Construct_UFunction_ATyphoonGameState_CompleteStage, "CompleteStage" }, // 784759500
		{ &Z_Construct_UFunction_ATyphoonGameState_OnRep_MatchInProgressState, "OnRep_MatchInProgressState" }, // 2232815454
		{ &Z_Construct_UDelegateFunction_ATyphoonGameState_OnStageCompleteSignature__DelegateSignature, "OnStageCompleteSignature__DelegateSignature" }, // 2367170676
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyphoonGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// A bit more than the standard GameState.\n" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TyphoonGameState.h" },
		{ "ModuleRelativePath", "TyphoonGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A bit more than the standard GameState." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_PrepPhaseDuration_MetaData[] = {
		{ "Category", "GameState" },
		{ "Comment", "// Retrieved from TyphoonGameMode.\n// Should only be used for aesthetics, such as a timer displaying how long until prep phase ends.\n" },
		{ "ModuleRelativePath", "TyphoonGameState.h" },
		{ "ToolTip", "Retrieved from TyphoonGameMode.\nShould only be used for aesthetics, such as a timer displaying how long until prep phase ends." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_PrepPhaseDuration = { "PrepPhaseDuration", nullptr, (EPropertyFlags)0x0020080000020835, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATyphoonGameState, PrepPhaseDuration), METADATA_PARAMS(Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_PrepPhaseDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_PrepPhaseDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_CountdownEndTime_MetaData[] = {
		{ "Category", "GameState" },
		{ "Comment", "/**\n\x09 * @brief Retrieved from TyphoonGameMode.\n\x09 * \\n Since it may be a few ms off from the GameMode, it should only really be used for aesthetics,\n\x09 * such as a timer displaying how long until countdown ends.\n\x09 */" },
		{ "ModuleRelativePath", "TyphoonGameState.h" },
		{ "ToolTip", "@brief Retrieved from TyphoonGameMode.\n\\n Since it may be a few ms off from the GameMode, it should only really be used for aesthetics,\nsuch as a timer displaying how long until countdown ends." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_CountdownEndTime = { "CountdownEndTime", nullptr, (EPropertyFlags)0x0020080000020835, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATyphoonGameState, CountdownEndTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_CountdownEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_CountdownEndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_GameStartTime_MetaData[] = {
		{ "Category", "GameState" },
		{ "Comment", "// Time when the game 'started' (MatchInProgressState == MatchInProgressState::PrepPhase).\n" },
		{ "ModuleRelativePath", "TyphoonGameState.h" },
		{ "ToolTip", "Time when the game 'started' (MatchInProgressState == MatchInProgressState::PrepPhase)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_GameStartTime = { "GameStartTime", nullptr, (EPropertyFlags)0x0020080000020835, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATyphoonGameState, GameStartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_GameStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_GameStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_BeginTime_MetaData[] = {
		{ "Category", "GameState" },
		{ "Comment", "// Time when the match 'started' (MatchState == MatchState::InProgress).\n" },
		{ "ModuleRelativePath", "TyphoonGameState.h" },
		{ "ToolTip", "Time when the match 'started' (MatchState == MatchState::InProgress)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_BeginTime = { "BeginTime", nullptr, (EPropertyFlags)0x0020080000020835, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATyphoonGameState, BeginTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_BeginTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_BeginTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_MatchInProgressState_MetaData[] = {
		{ "Category", "GameState" },
		{ "Comment", "// Current game state.\n" },
		{ "ModuleRelativePath", "TyphoonGameState.h" },
		{ "ToolTip", "Current game state." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_MatchInProgressState = { "MatchInProgressState", "OnRep_MatchInProgressState", (EPropertyFlags)0x0020080100020835, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATyphoonGameState, MatchInProgressState), METADATA_PARAMS(Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_MatchInProgressState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_MatchInProgressState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_OnStageComplete_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "TyphoonGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_OnStageComplete = { "OnStageComplete", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATyphoonGameState, OnStageComplete), Z_Construct_UDelegateFunction_ATyphoonGameState_OnStageCompleteSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_OnStageComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_OnStageComplete_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATyphoonGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_PrepPhaseDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_CountdownEndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_GameStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_BeginTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_MatchInProgressState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATyphoonGameState_Statics::NewProp_OnStageComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATyphoonGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATyphoonGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATyphoonGameState_Statics::ClassParams = {
		&ATyphoonGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATyphoonGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATyphoonGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATyphoonGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATyphoonGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATyphoonGameState, 2072394700);
	template<> TYPHOON_API UClass* StaticClass<ATyphoonGameState>()
	{
		return ATyphoonGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATyphoonGameState(Z_Construct_UClass_ATyphoonGameState, &ATyphoonGameState::StaticClass, TEXT("/Script/Typhoon"), TEXT("ATyphoonGameState"), false, nullptr, nullptr, nullptr);

	void ATyphoonGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_MatchInProgressState(TEXT("MatchInProgressState"));
		static const FName Name_BeginTime(TEXT("BeginTime"));
		static const FName Name_GameStartTime(TEXT("GameStartTime"));
		static const FName Name_CountdownEndTime(TEXT("CountdownEndTime"));
		static const FName Name_PrepPhaseDuration(TEXT("PrepPhaseDuration"));

		const bool bIsValid = true
			&& Name_MatchInProgressState == ClassReps[(int32)ENetFields_Private::MatchInProgressState].Property->GetFName()
			&& Name_BeginTime == ClassReps[(int32)ENetFields_Private::BeginTime].Property->GetFName()
			&& Name_GameStartTime == ClassReps[(int32)ENetFields_Private::GameStartTime].Property->GetFName()
			&& Name_CountdownEndTime == ClassReps[(int32)ENetFields_Private::CountdownEndTime].Property->GetFName()
			&& Name_PrepPhaseDuration == ClassReps[(int32)ENetFields_Private::PrepPhaseDuration].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATyphoonGameState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATyphoonGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
