// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TYPHOON_StageActor_generated_h
#error "StageActor.generated.h already included, missing '#pragma once' in StageActor.h"
#endif
#define TYPHOON_StageActor_generated_h

#define Typhoon_Source_Typhoon_StageActor_h_12_SPARSE_DATA
#define Typhoon_Source_Typhoon_StageActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckNewStage);


#define Typhoon_Source_Typhoon_StageActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckNewStage);


#define Typhoon_Source_Typhoon_StageActor_h_12_EVENT_PARMS
#define Typhoon_Source_Typhoon_StageActor_h_12_CALLBACK_WRAPPERS
#define Typhoon_Source_Typhoon_StageActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStageActor(); \
	friend struct Z_Construct_UClass_AStageActor_Statics; \
public: \
	DECLARE_CLASS(AStageActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Typhoon"), NO_API) \
	DECLARE_SERIALIZER(AStageActor)


#define Typhoon_Source_Typhoon_StageActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAStageActor(); \
	friend struct Z_Construct_UClass_AStageActor_Statics; \
public: \
	DECLARE_CLASS(AStageActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Typhoon"), NO_API) \
	DECLARE_SERIALIZER(AStageActor)


#define Typhoon_Source_Typhoon_StageActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStageActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStageActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStageActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStageActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStageActor(AStageActor&&); \
	NO_API AStageActor(const AStageActor&); \
public:


#define Typhoon_Source_Typhoon_StageActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStageActor(AStageActor&&); \
	NO_API AStageActor(const AStageActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStageActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStageActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStageActor)


#define Typhoon_Source_Typhoon_StageActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StageToActivate() { return STRUCT_OFFSET(AStageActor, StageToActivate); } \
	FORCEINLINE static uint32 __PPO__bOnlySpawnOnExactStage() { return STRUCT_OFFSET(AStageActor, bOnlySpawnOnExactStage); }


#define Typhoon_Source_Typhoon_StageActor_h_9_PROLOG \
	Typhoon_Source_Typhoon_StageActor_h_12_EVENT_PARMS


#define Typhoon_Source_Typhoon_StageActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Typhoon_Source_Typhoon_StageActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Typhoon_Source_Typhoon_StageActor_h_12_SPARSE_DATA \
	Typhoon_Source_Typhoon_StageActor_h_12_RPC_WRAPPERS \
	Typhoon_Source_Typhoon_StageActor_h_12_CALLBACK_WRAPPERS \
	Typhoon_Source_Typhoon_StageActor_h_12_INCLASS \
	Typhoon_Source_Typhoon_StageActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Typhoon_Source_Typhoon_StageActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Typhoon_Source_Typhoon_StageActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Typhoon_Source_Typhoon_StageActor_h_12_SPARSE_DATA \
	Typhoon_Source_Typhoon_StageActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Typhoon_Source_Typhoon_StageActor_h_12_CALLBACK_WRAPPERS \
	Typhoon_Source_Typhoon_StageActor_h_12_INCLASS_NO_PURE_DECLS \
	Typhoon_Source_Typhoon_StageActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TYPHOON_API UClass* StaticClass<class AStageActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Typhoon_Source_Typhoon_StageActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
