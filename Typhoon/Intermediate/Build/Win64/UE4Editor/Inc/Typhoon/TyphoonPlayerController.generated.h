// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TYPHOON_TyphoonPlayerController_generated_h
#error "TyphoonPlayerController.generated.h already included, missing '#pragma once' in TyphoonPlayerController.h"
#endif
#define TYPHOON_TyphoonPlayerController_generated_h

#define Typhoon_Source_Typhoon_TyphoonPlayerController_h_13_SPARSE_DATA
#define Typhoon_Source_Typhoon_TyphoonPlayerController_h_13_RPC_WRAPPERS \
	virtual void HandleGameOver_Implementation(); \
	virtual void HandleBeginPlayAfterCountdown_Implementation(); \
 \
	DECLARE_FUNCTION(execHandleGameOver); \
	DECLARE_FUNCTION(execHandleBeginPlayAfterCountdown);


#define Typhoon_Source_Typhoon_TyphoonPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HandleGameOver_Implementation(); \
	virtual void HandleBeginPlayAfterCountdown_Implementation(); \
 \
	DECLARE_FUNCTION(execHandleGameOver); \
	DECLARE_FUNCTION(execHandleBeginPlayAfterCountdown);


#define Typhoon_Source_Typhoon_TyphoonPlayerController_h_13_EVENT_PARMS
#define Typhoon_Source_Typhoon_TyphoonPlayerController_h_13_CALLBACK_WRAPPERS
#define Typhoon_Source_Typhoon_TyphoonPlayerController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATyphoonPlayerController(); \
	friend struct Z_Construct_UClass_ATyphoonPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATyphoonPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Typhoon"), NO_API) \
	DECLARE_SERIALIZER(ATyphoonPlayerController)


#define Typhoon_Source_Typhoon_TyphoonPlayerController_h_13_INCLASS \
private: \
	static void StaticRegisterNativesATyphoonPlayerController(); \
	friend struct Z_Construct_UClass_ATyphoonPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATyphoonPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Typhoon"), NO_API) \
	DECLARE_SERIALIZER(ATyphoonPlayerController)


#define Typhoon_Source_Typhoon_TyphoonPlayerController_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATyphoonPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATyphoonPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATyphoonPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATyphoonPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATyphoonPlayerController(ATyphoonPlayerController&&); \
	NO_API ATyphoonPlayerController(const ATyphoonPlayerController&); \
public:


#define Typhoon_Source_Typhoon_TyphoonPlayerController_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATyphoonPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATyphoonPlayerController(ATyphoonPlayerController&&); \
	NO_API ATyphoonPlayerController(const ATyphoonPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATyphoonPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATyphoonPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATyphoonPlayerController)


#define Typhoon_Source_Typhoon_TyphoonPlayerController_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DisableInputDuringInitialCountdown() { return STRUCT_OFFSET(ATyphoonPlayerController, DisableInputDuringInitialCountdown); }


#define Typhoon_Source_Typhoon_TyphoonPlayerController_h_10_PROLOG \
	Typhoon_Source_Typhoon_TyphoonPlayerController_h_13_EVENT_PARMS


#define Typhoon_Source_Typhoon_TyphoonPlayerController_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Typhoon_Source_Typhoon_TyphoonPlayerController_h_13_PRIVATE_PROPERTY_OFFSET \
	Typhoon_Source_Typhoon_TyphoonPlayerController_h_13_SPARSE_DATA \
	Typhoon_Source_Typhoon_TyphoonPlayerController_h_13_RPC_WRAPPERS \
	Typhoon_Source_Typhoon_TyphoonPlayerController_h_13_CALLBACK_WRAPPERS \
	Typhoon_Source_Typhoon_TyphoonPlayerController_h_13_INCLASS \
	Typhoon_Source_Typhoon_TyphoonPlayerController_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Typhoon_Source_Typhoon_TyphoonPlayerController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Typhoon_Source_Typhoon_TyphoonPlayerController_h_13_PRIVATE_PROPERTY_OFFSET \
	Typhoon_Source_Typhoon_TyphoonPlayerController_h_13_SPARSE_DATA \
	Typhoon_Source_Typhoon_TyphoonPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Typhoon_Source_Typhoon_TyphoonPlayerController_h_13_CALLBACK_WRAPPERS \
	Typhoon_Source_Typhoon_TyphoonPlayerController_h_13_INCLASS_NO_PURE_DECLS \
	Typhoon_Source_Typhoon_TyphoonPlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TYPHOON_API UClass* StaticClass<class ATyphoonPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Typhoon_Source_Typhoon_TyphoonPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
