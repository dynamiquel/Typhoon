// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Typhoon/TyphoonCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTyphoonCharacter() {}
// Cross Module References
	TYPHOON_API UClass* Z_Construct_UClass_ATyphoonCharacter_NoRegister();
	TYPHOON_API UClass* Z_Construct_UClass_ATyphoonCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Typhoon();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATyphoonCharacter::execResetSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSpeed();
		P_NATIVE_END;
	}
	void ATyphoonCharacter::StaticRegisterNativesATyphoonCharacter()
	{
		UClass* Class = ATyphoonCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetSpeed", &ATyphoonCharacter::execResetSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATyphoonCharacter_ResetSpeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATyphoonCharacter_ResetSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TyphoonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATyphoonCharacter_ResetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATyphoonCharacter, nullptr, "ResetSpeed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATyphoonCharacter_ResetSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATyphoonCharacter_ResetSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATyphoonCharacter_ResetSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATyphoonCharacter_ResetSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATyphoonCharacter_NoRegister()
	{
		return ATyphoonCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATyphoonCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverseControls_MetaData[];
#endif
		static void NewProp_bReverseControls_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverseControls;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialMaxWalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialMaxWalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideViewCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SideViewCameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATyphoonCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Typhoon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATyphoonCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATyphoonCharacter_ResetSpeed, "ResetSpeed" }, // 3961278719
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyphoonCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TyphoonCharacter.h" },
		{ "ModuleRelativePath", "TyphoonCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyphoonCharacter_Statics::NewProp_bReverseControls_MetaData[] = {
		{ "Category", "TyphoonCharacter" },
		{ "ModuleRelativePath", "TyphoonCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ATyphoonCharacter_Statics::NewProp_bReverseControls_SetBit(void* Obj)
	{
		((ATyphoonCharacter*)Obj)->bReverseControls = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATyphoonCharacter_Statics::NewProp_bReverseControls = { "bReverseControls", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATyphoonCharacter), &Z_Construct_UClass_ATyphoonCharacter_Statics::NewProp_bReverseControls_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATyphoonCharacter_Statics::NewProp_bReverseControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonCharacter_Statics::NewProp_bReverseControls_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyphoonCharacter_Statics::NewProp_InitialMaxWalkSpeed_MetaData[] = {
		{ "Category", "TyphoonCharacter" },
		{ "Comment", "// Shouldn't be here but lazy.\n" },
		{ "ModuleRelativePath", "TyphoonCharacter.h" },
		{ "ToolTip", "Shouldn't be here but lazy." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATyphoonCharacter_Statics::NewProp_InitialMaxWalkSpeed = { "InitialMaxWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATyphoonCharacter, InitialMaxWalkSpeed), METADATA_PARAMS(Z_Construct_UClass_ATyphoonCharacter_Statics::NewProp_InitialMaxWalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonCharacter_Statics::NewProp_InitialMaxWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyphoonCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera beside the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TyphoonCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera beside the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATyphoonCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATyphoonCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATyphoonCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATyphoonCharacter_Statics::NewProp_SideViewCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Side view camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TyphoonCharacter.h" },
		{ "ToolTip", "Side view camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATyphoonCharacter_Statics::NewProp_SideViewCameraComponent = { "SideViewCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATyphoonCharacter, SideViewCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATyphoonCharacter_Statics::NewProp_SideViewCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonCharacter_Statics::NewProp_SideViewCameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATyphoonCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATyphoonCharacter_Statics::NewProp_bReverseControls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATyphoonCharacter_Statics::NewProp_InitialMaxWalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATyphoonCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATyphoonCharacter_Statics::NewProp_SideViewCameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATyphoonCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATyphoonCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATyphoonCharacter_Statics::ClassParams = {
		&ATyphoonCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATyphoonCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATyphoonCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATyphoonCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATyphoonCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATyphoonCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATyphoonCharacter, 2183928725);
	template<> TYPHOON_API UClass* StaticClass<ATyphoonCharacter>()
	{
		return ATyphoonCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATyphoonCharacter(Z_Construct_UClass_ATyphoonCharacter, &ATyphoonCharacter::StaticClass, TEXT("/Script/Typhoon"), TEXT("ATyphoonCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATyphoonCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
