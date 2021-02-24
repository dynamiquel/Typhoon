// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TYPHOON_TyphoonGameState_generated_h
#error "TyphoonGameState.generated.h already included, missing '#pragma once' in TyphoonGameState.h"
#endif
#define TYPHOON_TyphoonGameState_generated_h

#define Typhoon_Source_Typhoon_TyphoonGameState_h_24_DELEGATE \
struct TyphoonGameState_eventOnStageCompleteSignature_Parms \
{ \
	int32 NewStageValue; \
}; \
static inline void FOnStageCompleteSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStageCompleteSignature, const int32 NewStageValue) \
{ \
	TyphoonGameState_eventOnStageCompleteSignature_Parms Parms; \
	Parms.NewStageValue=NewStageValue; \
	OnStageCompleteSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Typhoon_Source_Typhoon_TyphoonGameState_h_13_SPARSE_DATA
#define Typhoon_Source_Typhoon_TyphoonGameState_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGameWon); \
	DECLARE_FUNCTION(execGetEndStage); \
	DECLARE_FUNCTION(execGetCurrentStage); \
	DECLARE_FUNCTION(execCompleteStage); \
	DECLARE_FUNCTION(execOnRep_MatchInProgressState); \
	DECLARE_FUNCTION(execGetMatchInProgressState);


#define Typhoon_Source_Typhoon_TyphoonGameState_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGameWon); \
	DECLARE_FUNCTION(execGetEndStage); \
	DECLARE_FUNCTION(execGetCurrentStage); \
	DECLARE_FUNCTION(execCompleteStage); \
	DECLARE_FUNCTION(execOnRep_MatchInProgressState); \
	DECLARE_FUNCTION(execGetMatchInProgressState);


#define Typhoon_Source_Typhoon_TyphoonGameState_h_13_EVENT_PARMS
#define Typhoon_Source_Typhoon_TyphoonGameState_h_13_CALLBACK_WRAPPERS
#define Typhoon_Source_Typhoon_TyphoonGameState_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATyphoonGameState(); \
	friend struct Z_Construct_UClass_ATyphoonGameState_Statics; \
public: \
	DECLARE_CLASS(ATyphoonGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Typhoon"), NO_API) \
	DECLARE_SERIALIZER(ATyphoonGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MatchInProgressState=NETFIELD_REP_START, \
		BeginTime, \
		GameStartTime, \
		CountdownEndTime, \
		PrepPhaseDuration, \
		CurrentStage, \
		EndStage, \
		GameWon, \
		NETFIELD_REP_END=GameWon	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Typhoon_Source_Typhoon_TyphoonGameState_h_13_INCLASS \
private: \
	static void StaticRegisterNativesATyphoonGameState(); \
	friend struct Z_Construct_UClass_ATyphoonGameState_Statics; \
public: \
	DECLARE_CLASS(ATyphoonGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Typhoon"), NO_API) \
	DECLARE_SERIALIZER(ATyphoonGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MatchInProgressState=NETFIELD_REP_START, \
		BeginTime, \
		GameStartTime, \
		CountdownEndTime, \
		PrepPhaseDuration, \
		CurrentStage, \
		EndStage, \
		GameWon, \
		NETFIELD_REP_END=GameWon	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Typhoon_Source_Typhoon_TyphoonGameState_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATyphoonGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATyphoonGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATyphoonGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATyphoonGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATyphoonGameState(ATyphoonGameState&&); \
	NO_API ATyphoonGameState(const ATyphoonGameState&); \
public:


#define Typhoon_Source_Typhoon_TyphoonGameState_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATyphoonGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATyphoonGameState(ATyphoonGameState&&); \
	NO_API ATyphoonGameState(const ATyphoonGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATyphoonGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATyphoonGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATyphoonGameState)


#define Typhoon_Source_Typhoon_TyphoonGameState_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MatchInProgressState() { return STRUCT_OFFSET(ATyphoonGameState, MatchInProgressState); } \
	FORCEINLINE static uint32 __PPO__BeginTime() { return STRUCT_OFFSET(ATyphoonGameState, BeginTime); } \
	FORCEINLINE static uint32 __PPO__GameStartTime() { return STRUCT_OFFSET(ATyphoonGameState, GameStartTime); } \
	FORCEINLINE static uint32 __PPO__CountdownEndTime() { return STRUCT_OFFSET(ATyphoonGameState, CountdownEndTime); } \
	FORCEINLINE static uint32 __PPO__PrepPhaseDuration() { return STRUCT_OFFSET(ATyphoonGameState, PrepPhaseDuration); } \
	FORCEINLINE static uint32 __PPO__CurrentStage() { return STRUCT_OFFSET(ATyphoonGameState, CurrentStage); } \
	FORCEINLINE static uint32 __PPO__EndStage() { return STRUCT_OFFSET(ATyphoonGameState, EndStage); } \
	FORCEINLINE static uint32 __PPO__GameWon() { return STRUCT_OFFSET(ATyphoonGameState, GameWon); }


#define Typhoon_Source_Typhoon_TyphoonGameState_h_10_PROLOG \
	Typhoon_Source_Typhoon_TyphoonGameState_h_13_EVENT_PARMS


#define Typhoon_Source_Typhoon_TyphoonGameState_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Typhoon_Source_Typhoon_TyphoonGameState_h_13_PRIVATE_PROPERTY_OFFSET \
	Typhoon_Source_Typhoon_TyphoonGameState_h_13_SPARSE_DATA \
	Typhoon_Source_Typhoon_TyphoonGameState_h_13_RPC_WRAPPERS \
	Typhoon_Source_Typhoon_TyphoonGameState_h_13_CALLBACK_WRAPPERS \
	Typhoon_Source_Typhoon_TyphoonGameState_h_13_INCLASS \
	Typhoon_Source_Typhoon_TyphoonGameState_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Typhoon_Source_Typhoon_TyphoonGameState_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Typhoon_Source_Typhoon_TyphoonGameState_h_13_PRIVATE_PROPERTY_OFFSET \
	Typhoon_Source_Typhoon_TyphoonGameState_h_13_SPARSE_DATA \
	Typhoon_Source_Typhoon_TyphoonGameState_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Typhoon_Source_Typhoon_TyphoonGameState_h_13_CALLBACK_WRAPPERS \
	Typhoon_Source_Typhoon_TyphoonGameState_h_13_INCLASS_NO_PURE_DECLS \
	Typhoon_Source_Typhoon_TyphoonGameState_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TYPHOON_API UClass* StaticClass<class ATyphoonGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Typhoon_Source_Typhoon_TyphoonGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
