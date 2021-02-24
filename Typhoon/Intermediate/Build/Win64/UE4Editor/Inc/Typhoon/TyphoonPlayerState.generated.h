// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FDateTime;
#ifdef TYPHOON_TyphoonPlayerState_generated_h
#error "TyphoonPlayerState.generated.h already included, missing '#pragma once' in TyphoonPlayerState.h"
#endif
#define TYPHOON_TyphoonPlayerState_generated_h

#define Typhoon_Source_Typhoon_TyphoonPlayerState_h_17_SPARSE_DATA
#define Typhoon_Source_Typhoon_TyphoonPlayerState_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleGodMode); \
	DECLARE_FUNCTION(execAddPoints); \
	DECLARE_FUNCTION(execSetSpawnPoint); \
	DECLARE_FUNCTION(execGetSpawnPoint); \
	DECLARE_FUNCTION(execSetTimeFinished); \
	DECLARE_FUNCTION(execGetTimeFinished); \
	DECLARE_FUNCTION(execKillPlayer); \
	DECLARE_FUNCTION(execSetLives); \
	DECLARE_FUNCTION(execGetLives);


#define Typhoon_Source_Typhoon_TyphoonPlayerState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleGodMode); \
	DECLARE_FUNCTION(execAddPoints); \
	DECLARE_FUNCTION(execSetSpawnPoint); \
	DECLARE_FUNCTION(execGetSpawnPoint); \
	DECLARE_FUNCTION(execSetTimeFinished); \
	DECLARE_FUNCTION(execGetTimeFinished); \
	DECLARE_FUNCTION(execKillPlayer); \
	DECLARE_FUNCTION(execSetLives); \
	DECLARE_FUNCTION(execGetLives);


#define Typhoon_Source_Typhoon_TyphoonPlayerState_h_17_EVENT_PARMS
#define Typhoon_Source_Typhoon_TyphoonPlayerState_h_17_CALLBACK_WRAPPERS
#define Typhoon_Source_Typhoon_TyphoonPlayerState_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATyphoonPlayerState(); \
	friend struct Z_Construct_UClass_ATyphoonPlayerState_Statics; \
public: \
	DECLARE_CLASS(ATyphoonPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Typhoon"), NO_API) \
	DECLARE_SERIALIZER(ATyphoonPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Lives=NETFIELD_REP_START, \
		Deaths, \
		TimeFinished, \
		SpawnPoint, \
		GodMode, \
		NETFIELD_REP_END=GodMode	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Typhoon_Source_Typhoon_TyphoonPlayerState_h_17_INCLASS \
private: \
	static void StaticRegisterNativesATyphoonPlayerState(); \
	friend struct Z_Construct_UClass_ATyphoonPlayerState_Statics; \
public: \
	DECLARE_CLASS(ATyphoonPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Typhoon"), NO_API) \
	DECLARE_SERIALIZER(ATyphoonPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Lives=NETFIELD_REP_START, \
		Deaths, \
		TimeFinished, \
		SpawnPoint, \
		GodMode, \
		NETFIELD_REP_END=GodMode	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Typhoon_Source_Typhoon_TyphoonPlayerState_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATyphoonPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATyphoonPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATyphoonPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATyphoonPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATyphoonPlayerState(ATyphoonPlayerState&&); \
	NO_API ATyphoonPlayerState(const ATyphoonPlayerState&); \
public:


#define Typhoon_Source_Typhoon_TyphoonPlayerState_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATyphoonPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATyphoonPlayerState(ATyphoonPlayerState&&); \
	NO_API ATyphoonPlayerState(const ATyphoonPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATyphoonPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATyphoonPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATyphoonPlayerState)


#define Typhoon_Source_Typhoon_TyphoonPlayerState_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Lives() { return STRUCT_OFFSET(ATyphoonPlayerState, Lives); } \
	FORCEINLINE static uint32 __PPO__Deaths() { return STRUCT_OFFSET(ATyphoonPlayerState, Deaths); } \
	FORCEINLINE static uint32 __PPO__TimeFinished() { return STRUCT_OFFSET(ATyphoonPlayerState, TimeFinished); } \
	FORCEINLINE static uint32 __PPO__SpawnPoint() { return STRUCT_OFFSET(ATyphoonPlayerState, SpawnPoint); } \
	FORCEINLINE static uint32 __PPO__GodMode() { return STRUCT_OFFSET(ATyphoonPlayerState, GodMode); }


#define Typhoon_Source_Typhoon_TyphoonPlayerState_h_14_PROLOG \
	Typhoon_Source_Typhoon_TyphoonPlayerState_h_17_EVENT_PARMS


#define Typhoon_Source_Typhoon_TyphoonPlayerState_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Typhoon_Source_Typhoon_TyphoonPlayerState_h_17_PRIVATE_PROPERTY_OFFSET \
	Typhoon_Source_Typhoon_TyphoonPlayerState_h_17_SPARSE_DATA \
	Typhoon_Source_Typhoon_TyphoonPlayerState_h_17_RPC_WRAPPERS \
	Typhoon_Source_Typhoon_TyphoonPlayerState_h_17_CALLBACK_WRAPPERS \
	Typhoon_Source_Typhoon_TyphoonPlayerState_h_17_INCLASS \
	Typhoon_Source_Typhoon_TyphoonPlayerState_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Typhoon_Source_Typhoon_TyphoonPlayerState_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Typhoon_Source_Typhoon_TyphoonPlayerState_h_17_PRIVATE_PROPERTY_OFFSET \
	Typhoon_Source_Typhoon_TyphoonPlayerState_h_17_SPARSE_DATA \
	Typhoon_Source_Typhoon_TyphoonPlayerState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Typhoon_Source_Typhoon_TyphoonPlayerState_h_17_CALLBACK_WRAPPERS \
	Typhoon_Source_Typhoon_TyphoonPlayerState_h_17_INCLASS_NO_PURE_DECLS \
	Typhoon_Source_Typhoon_TyphoonPlayerState_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TYPHOON_API UClass* StaticClass<class ATyphoonPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Typhoon_Source_Typhoon_TyphoonPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
