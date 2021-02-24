// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
struct FTransform;
#ifdef TYPHOON_TyphoonGameMode_generated_h
#error "TyphoonGameMode.generated.h already included, missing '#pragma once' in TyphoonGameMode.h"
#endif
#define TYPHOON_TyphoonGameMode_generated_h

#define Typhoon_Source_Typhoon_TyphoonGameMode_h_23_SPARSE_DATA
#define Typhoon_Source_Typhoon_TyphoonGameMode_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandlePlayerRespawnEnded);


#define Typhoon_Source_Typhoon_TyphoonGameMode_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandlePlayerRespawnEnded);


#define Typhoon_Source_Typhoon_TyphoonGameMode_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATyphoonGameMode(); \
	friend struct Z_Construct_UClass_ATyphoonGameMode_Statics; \
public: \
	DECLARE_CLASS(ATyphoonGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Typhoon"), TYPHOON_API) \
	DECLARE_SERIALIZER(ATyphoonGameMode)


#define Typhoon_Source_Typhoon_TyphoonGameMode_h_23_INCLASS \
private: \
	static void StaticRegisterNativesATyphoonGameMode(); \
	friend struct Z_Construct_UClass_ATyphoonGameMode_Statics; \
public: \
	DECLARE_CLASS(ATyphoonGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Typhoon"), TYPHOON_API) \
	DECLARE_SERIALIZER(ATyphoonGameMode)


#define Typhoon_Source_Typhoon_TyphoonGameMode_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TYPHOON_API ATyphoonGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATyphoonGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TYPHOON_API, ATyphoonGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATyphoonGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TYPHOON_API ATyphoonGameMode(ATyphoonGameMode&&); \
	TYPHOON_API ATyphoonGameMode(const ATyphoonGameMode&); \
public:


#define Typhoon_Source_Typhoon_TyphoonGameMode_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TYPHOON_API ATyphoonGameMode(ATyphoonGameMode&&); \
	TYPHOON_API ATyphoonGameMode(const ATyphoonGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TYPHOON_API, ATyphoonGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATyphoonGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATyphoonGameMode)


#define Typhoon_Source_Typhoon_TyphoonGameMode_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MinimumPlayersToStart() { return STRUCT_OFFSET(ATyphoonGameMode, MinimumPlayersToStart); } \
	FORCEINLINE static uint32 __PPO__CountdownDuration() { return STRUCT_OFFSET(ATyphoonGameMode, CountdownDuration); } \
	FORCEINLINE static uint32 __PPO__PrepPhaseDuration() { return STRUCT_OFFSET(ATyphoonGameMode, PrepPhaseDuration); } \
	FORCEINLINE static uint32 __PPO__StartLives() { return STRUCT_OFFSET(ATyphoonGameMode, StartLives); } \
	FORCEINLINE static uint32 __PPO__RespawnDelay() { return STRUCT_OFFSET(ATyphoonGameMode, RespawnDelay); } \
	FORCEINLINE static uint32 __PPO__StartPoint() { return STRUCT_OFFSET(ATyphoonGameMode, StartPoint); } \
	FORCEINLINE static uint32 __PPO__DeathSpectatorPawn() { return STRUCT_OFFSET(ATyphoonGameMode, DeathSpectatorPawn); } \
	FORCEINLINE static uint32 __PPO__WinStage() { return STRUCT_OFFSET(ATyphoonGameMode, WinStage); }


#define Typhoon_Source_Typhoon_TyphoonGameMode_h_20_PROLOG
#define Typhoon_Source_Typhoon_TyphoonGameMode_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Typhoon_Source_Typhoon_TyphoonGameMode_h_23_PRIVATE_PROPERTY_OFFSET \
	Typhoon_Source_Typhoon_TyphoonGameMode_h_23_SPARSE_DATA \
	Typhoon_Source_Typhoon_TyphoonGameMode_h_23_RPC_WRAPPERS \
	Typhoon_Source_Typhoon_TyphoonGameMode_h_23_INCLASS \
	Typhoon_Source_Typhoon_TyphoonGameMode_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Typhoon_Source_Typhoon_TyphoonGameMode_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Typhoon_Source_Typhoon_TyphoonGameMode_h_23_PRIVATE_PROPERTY_OFFSET \
	Typhoon_Source_Typhoon_TyphoonGameMode_h_23_SPARSE_DATA \
	Typhoon_Source_Typhoon_TyphoonGameMode_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Typhoon_Source_Typhoon_TyphoonGameMode_h_23_INCLASS_NO_PURE_DECLS \
	Typhoon_Source_Typhoon_TyphoonGameMode_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TYPHOON_API UClass* StaticClass<class ATyphoonGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Typhoon_Source_Typhoon_TyphoonGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
