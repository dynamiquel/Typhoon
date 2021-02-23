// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Typhoon/TyphoonPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTyphoonPlayerState() {}
// Cross Module References
	TYPHOON_API UClass* Z_Construct_UClass_ATyphoonPlayerState_NoRegister();
	TYPHOON_API UClass* Z_Construct_UClass_ATyphoonPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_Typhoon();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
	DEFINE_FUNCTION(ATyphoonPlayerState::execSetSpawnPoint)
	{
		P_GET_OBJECT(AActor,Z_Param_NewSpawnPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpawnPoint(Z_Param_NewSpawnPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATyphoonPlayerState::execGetSpawnPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetSpawnPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATyphoonPlayerState::execSetTimeFinished)
	{
		P_GET_STRUCT(FDateTime,Z_Param_DateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimeFinished(Z_Param_DateTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATyphoonPlayerState::execGetTimeFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetTimeFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATyphoonPlayerState::execKillPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KillPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATyphoonPlayerState::execSetLives)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewLives);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLives(Z_Param_NewLives);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATyphoonPlayerState::execGetLives)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLives();
		P_NATIVE_END;
	}
	static FName NAME_ATyphoonPlayerState_OnPlayerDied = FName(TEXT("OnPlayerDied"));
	void ATyphoonPlayerState::OnPlayerDied()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATyphoonPlayerState_OnPlayerDied),NULL);
	}
	void ATyphoonPlayerState::StaticRegisterNativesATyphoonPlayerState()
	{
		UClass* Class = ATyphoonPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLives", &ATyphoonPlayerState::execGetLives },
			{ "GetSpawnPoint", &ATyphoonPlayerState::execGetSpawnPoint },
			{ "GetTimeFinished", &ATyphoonPlayerState::execGetTimeFinished },
			{ "KillPlayer", &ATyphoonPlayerState::execKillPlayer },
			{ "SetLives", &ATyphoonPlayerState::execSetLives },
			{ "SetSpawnPoint", &ATyphoonPlayerState::execSetSpawnPoint },
			{ "SetTimeFinished", &ATyphoonPlayerState::execSetTimeFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATyphoonPlayerState_GetLives_Statics
	{
		struct TyphoonPlayerState_eventGetLives_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATyphoonPlayerState_GetLives_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TyphoonPlayerState_eventGetLives_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATyphoonPlayerState_GetLives_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATyphoonPlayerState_GetLives_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATyphoonPlayerState_GetLives_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "TyphoonPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATyphoonPlayerState_GetLives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATyphoonPlayerState, nullptr, "GetLives", nullptr, nullptr, sizeof(TyphoonPlayerState_eventGetLives_Parms), Z_Construct_UFunction_ATyphoonPlayerState_GetLives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyphoonPlayerState_GetLives_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATyphoonPlayerState_GetLives_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyphoonPlayerState_GetLives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATyphoonPlayerState_GetLives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATyphoonPlayerState_GetLives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATyphoonPlayerState_GetSpawnPoint_Statics
	{
		struct TyphoonPlayerState_eventGetSpawnPoint_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATyphoonPlayerState_GetSpawnPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TyphoonPlayerState_eventGetSpawnPoint_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATyphoonPlayerState_GetSpawnPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATyphoonPlayerState_GetSpawnPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATyphoonPlayerState_GetSpawnPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "TyphoonPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATyphoonPlayerState_GetSpawnPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATyphoonPlayerState, nullptr, "GetSpawnPoint", nullptr, nullptr, sizeof(TyphoonPlayerState_eventGetSpawnPoint_Parms), Z_Construct_UFunction_ATyphoonPlayerState_GetSpawnPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyphoonPlayerState_GetSpawnPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATyphoonPlayerState_GetSpawnPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyphoonPlayerState_GetSpawnPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATyphoonPlayerState_GetSpawnPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATyphoonPlayerState_GetSpawnPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATyphoonPlayerState_GetTimeFinished_Statics
	{
		struct TyphoonPlayerState_eventGetTimeFinished_Parms
		{
			FDateTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATyphoonPlayerState_GetTimeFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TyphoonPlayerState_eventGetTimeFinished_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATyphoonPlayerState_GetTimeFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATyphoonPlayerState_GetTimeFinished_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATyphoonPlayerState_GetTimeFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "TyphoonPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATyphoonPlayerState_GetTimeFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATyphoonPlayerState, nullptr, "GetTimeFinished", nullptr, nullptr, sizeof(TyphoonPlayerState_eventGetTimeFinished_Parms), Z_Construct_UFunction_ATyphoonPlayerState_GetTimeFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyphoonPlayerState_GetTimeFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATyphoonPlayerState_GetTimeFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyphoonPlayerState_GetTimeFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATyphoonPlayerState_GetTimeFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATyphoonPlayerState_GetTimeFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATyphoonPlayerState_KillPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATyphoonPlayerState_KillPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "TyphoonPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATyphoonPlayerState_KillPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATyphoonPlayerState, nullptr, "KillPlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATyphoonPlayerState_KillPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyphoonPlayerState_KillPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATyphoonPlayerState_KillPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATyphoonPlayerState_KillPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATyphoonPlayerState_OnPlayerDied_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATyphoonPlayerState_OnPlayerDied_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "TyphoonPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATyphoonPlayerState_OnPlayerDied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATyphoonPlayerState, nullptr, "OnPlayerDied", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATyphoonPlayerState_OnPlayerDied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyphoonPlayerState_OnPlayerDied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATyphoonPlayerState_OnPlayerDied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATyphoonPlayerState_OnPlayerDied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATyphoonPlayerState_SetLives_Statics
	{
		struct TyphoonPlayerState_eventSetLives_Parms
		{
			int32 NewLives;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewLives_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewLives;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATyphoonPlayerState_SetLives_Statics::NewProp_NewLives_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATyphoonPlayerState_SetLives_Statics::NewProp_NewLives = { "NewLives", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TyphoonPlayerState_eventSetLives_Parms, NewLives), METADATA_PARAMS(Z_Construct_UFunction_ATyphoonPlayerState_SetLives_Statics::NewProp_NewLives_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyphoonPlayerState_SetLives_Statics::NewProp_NewLives_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATyphoonPlayerState_SetLives_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATyphoonPlayerState_SetLives_Statics::NewProp_NewLives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATyphoonPlayerState_SetLives_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "TyphoonPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATyphoonPlayerState_SetLives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATyphoonPlayerState, nullptr, "SetLives", nullptr, nullptr, sizeof(TyphoonPlayerState_eventSetLives_Parms), Z_Construct_UFunction_ATyphoonPlayerState_SetLives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyphoonPlayerState_SetLives_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATyphoonPlayerState_SetLives_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyphoonPlayerState_SetLives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATyphoonPlayerState_SetLives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATyphoonPlayerState_SetLives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATyphoonPlayerState_SetSpawnPoint_Statics
	{
		struct TyphoonPlayerState_eventSetSpawnPoint_Parms
		{
			AActor* NewSpawnPoint;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewSpawnPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATyphoonPlayerState_SetSpawnPoint_Statics::NewProp_NewSpawnPoint = { "NewSpawnPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TyphoonPlayerState_eventSetSpawnPoint_Parms, NewSpawnPoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATyphoonPlayerState_SetSpawnPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATyphoonPlayerState_SetSpawnPoint_Statics::NewProp_NewSpawnPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATyphoonPlayerState_SetSpawnPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "TyphoonPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATyphoonPlayerState_SetSpawnPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATyphoonPlayerState, nullptr, "SetSpawnPoint", nullptr, nullptr, sizeof(TyphoonPlayerState_eventSetSpawnPoint_Parms), Z_Construct_UFunction_ATyphoonPlayerState_SetSpawnPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyphoonPlayerState_SetSpawnPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATyphoonPlayerState_SetSpawnPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyphoonPlayerState_SetSpawnPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATyphoonPlayerState_SetSpawnPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATyphoonPlayerState_SetSpawnPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATyphoonPlayerState_SetTimeFinished_Statics
	{
		struct TyphoonPlayerState_eventSetTimeFinished_Parms
		{
			FDateTime DateTime;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DateTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATyphoonPlayerState_SetTimeFinished_Statics::NewProp_DateTime = { "DateTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TyphoonPlayerState_eventSetTimeFinished_Parms, DateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATyphoonPlayerState_SetTimeFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATyphoonPlayerState_SetTimeFinished_Statics::NewProp_DateTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATyphoonPlayerState_SetTimeFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "TyphoonPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATyphoonPlayerState_SetTimeFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATyphoonPlayerState, nullptr, "SetTimeFinished", nullptr, nullptr, sizeof(TyphoonPlayerState_eventSetTimeFinished_Parms), Z_Construct_UFunction_ATyphoonPlayerState_SetTimeFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyphoonPlayerState_SetTimeFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATyphoonPlayerState_SetTimeFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyphoonPlayerState_SetTimeFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATyphoonPlayerState_SetTimeFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATyphoonPlayerState_SetTimeFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATyphoonPlayerState_NoRegister()
	{
		return ATyphoonPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ATyphoonPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Deaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Deaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lives_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Lives;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATyphoonPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_Typhoon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATyphoonPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATyphoonPlayerState_GetLives, "GetLives" }, // 255924718
		{ &Z_Construct_UFunction_ATyphoonPlayerState_GetSpawnPoint, "GetSpawnPoint" }, // 2527630401
		{ &Z_Construct_UFunction_ATyphoonPlayerState_GetTimeFinished, "GetTimeFinished" }, // 3678131623
		{ &Z_Construct_UFunction_ATyphoonPlayerState_KillPlayer, "KillPlayer" }, // 813831388
		{ &Z_Construct_UFunction_ATyphoonPlayerState_OnPlayerDied, "OnPlayerDied" }, // 2238854527
		{ &Z_Construct_UFunction_ATyphoonPlayerState_SetLives, "SetLives" }, // 863440341
		{ &Z_Construct_UFunction_ATyphoonPlayerState_SetSpawnPoint, "SetSpawnPoint" }, // 2218070551
		{ &Z_Construct_UFunction_ATyphoonPlayerState_SetTimeFinished, "SetTimeFinished" }, // 454449935
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyphoonPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TyphoonPlayerState.h" },
		{ "ModuleRelativePath", "TyphoonPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyphoonPlayerState_Statics::NewProp_SpawnPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerState" },
		{ "Comment", "// Where to spawn the player when they respawn.\n" },
		{ "ModuleRelativePath", "TyphoonPlayerState.h" },
		{ "ToolTip", "Where to spawn the player when they respawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATyphoonPlayerState_Statics::NewProp_SpawnPoint = { "SpawnPoint", nullptr, (EPropertyFlags)0x0040000000020021, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATyphoonPlayerState, SpawnPoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATyphoonPlayerState_Statics::NewProp_SpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonPlayerState_Statics::NewProp_SpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyphoonPlayerState_Statics::NewProp_TimeFinished_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerState" },
		{ "Comment", "// Time the player ran out of lives and died.\n" },
		{ "ModuleRelativePath", "TyphoonPlayerState.h" },
		{ "ToolTip", "Time the player ran out of lives and died." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATyphoonPlayerState_Statics::NewProp_TimeFinished = { "TimeFinished", nullptr, (EPropertyFlags)0x0040000000020021, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATyphoonPlayerState, TimeFinished), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_ATyphoonPlayerState_Statics::NewProp_TimeFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonPlayerState_Statics::NewProp_TimeFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyphoonPlayerState_Statics::NewProp_Deaths_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerState" },
		{ "Comment", "// Number of times the player has died.\n" },
		{ "ModuleRelativePath", "TyphoonPlayerState.h" },
		{ "ToolTip", "Number of times the player has died." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATyphoonPlayerState_Statics::NewProp_Deaths = { "Deaths", nullptr, (EPropertyFlags)0x0040000000020021, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATyphoonPlayerState, Deaths), METADATA_PARAMS(Z_Construct_UClass_ATyphoonPlayerState_Statics::NewProp_Deaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonPlayerState_Statics::NewProp_Deaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyphoonPlayerState_Statics::NewProp_Lives_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerState" },
		{ "Comment", "// Number of lives the player has.\n" },
		{ "ModuleRelativePath", "TyphoonPlayerState.h" },
		{ "ToolTip", "Number of lives the player has." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATyphoonPlayerState_Statics::NewProp_Lives = { "Lives", nullptr, (EPropertyFlags)0x0040000000020021, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATyphoonPlayerState, Lives), METADATA_PARAMS(Z_Construct_UClass_ATyphoonPlayerState_Statics::NewProp_Lives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonPlayerState_Statics::NewProp_Lives_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATyphoonPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATyphoonPlayerState_Statics::NewProp_SpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATyphoonPlayerState_Statics::NewProp_TimeFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATyphoonPlayerState_Statics::NewProp_Deaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATyphoonPlayerState_Statics::NewProp_Lives,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATyphoonPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATyphoonPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATyphoonPlayerState_Statics::ClassParams = {
		&ATyphoonPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATyphoonPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATyphoonPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATyphoonPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATyphoonPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATyphoonPlayerState, 2630691714);
	template<> TYPHOON_API UClass* StaticClass<ATyphoonPlayerState>()
	{
		return ATyphoonPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATyphoonPlayerState(Z_Construct_UClass_ATyphoonPlayerState, &ATyphoonPlayerState::StaticClass, TEXT("/Script/Typhoon"), TEXT("ATyphoonPlayerState"), false, nullptr, nullptr, nullptr);

	void ATyphoonPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Lives(TEXT("Lives"));
		static const FName Name_Deaths(TEXT("Deaths"));
		static const FName Name_TimeFinished(TEXT("TimeFinished"));
		static const FName Name_SpawnPoint(TEXT("SpawnPoint"));

		const bool bIsValid = true
			&& Name_Lives == ClassReps[(int32)ENetFields_Private::Lives].Property->GetFName()
			&& Name_Deaths == ClassReps[(int32)ENetFields_Private::Deaths].Property->GetFName()
			&& Name_TimeFinished == ClassReps[(int32)ENetFields_Private::TimeFinished].Property->GetFName()
			&& Name_SpawnPoint == ClassReps[(int32)ENetFields_Private::SpawnPoint].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATyphoonPlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATyphoonPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
