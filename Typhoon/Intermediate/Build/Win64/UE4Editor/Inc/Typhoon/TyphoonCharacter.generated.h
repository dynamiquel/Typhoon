// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TYPHOON_TyphoonCharacter_generated_h
#error "TyphoonCharacter.generated.h already included, missing '#pragma once' in TyphoonCharacter.h"
#endif
#define TYPHOON_TyphoonCharacter_generated_h

#define Typhoon_Source_Typhoon_TyphoonCharacter_h_12_SPARSE_DATA
#define Typhoon_Source_Typhoon_TyphoonCharacter_h_12_RPC_WRAPPERS
#define Typhoon_Source_Typhoon_TyphoonCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Typhoon_Source_Typhoon_TyphoonCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATyphoonCharacter(); \
	friend struct Z_Construct_UClass_ATyphoonCharacter_Statics; \
public: \
	DECLARE_CLASS(ATyphoonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Typhoon"), NO_API) \
	DECLARE_SERIALIZER(ATyphoonCharacter)


#define Typhoon_Source_Typhoon_TyphoonCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATyphoonCharacter(); \
	friend struct Z_Construct_UClass_ATyphoonCharacter_Statics; \
public: \
	DECLARE_CLASS(ATyphoonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Typhoon"), NO_API) \
	DECLARE_SERIALIZER(ATyphoonCharacter)


#define Typhoon_Source_Typhoon_TyphoonCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATyphoonCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATyphoonCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATyphoonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATyphoonCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATyphoonCharacter(ATyphoonCharacter&&); \
	NO_API ATyphoonCharacter(const ATyphoonCharacter&); \
public:


#define Typhoon_Source_Typhoon_TyphoonCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATyphoonCharacter(ATyphoonCharacter&&); \
	NO_API ATyphoonCharacter(const ATyphoonCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATyphoonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATyphoonCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATyphoonCharacter)


#define Typhoon_Source_Typhoon_TyphoonCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(ATyphoonCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATyphoonCharacter, CameraBoom); }


#define Typhoon_Source_Typhoon_TyphoonCharacter_h_9_PROLOG
#define Typhoon_Source_Typhoon_TyphoonCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Typhoon_Source_Typhoon_TyphoonCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Typhoon_Source_Typhoon_TyphoonCharacter_h_12_SPARSE_DATA \
	Typhoon_Source_Typhoon_TyphoonCharacter_h_12_RPC_WRAPPERS \
	Typhoon_Source_Typhoon_TyphoonCharacter_h_12_INCLASS \
	Typhoon_Source_Typhoon_TyphoonCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Typhoon_Source_Typhoon_TyphoonCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Typhoon_Source_Typhoon_TyphoonCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Typhoon_Source_Typhoon_TyphoonCharacter_h_12_SPARSE_DATA \
	Typhoon_Source_Typhoon_TyphoonCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Typhoon_Source_Typhoon_TyphoonCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Typhoon_Source_Typhoon_TyphoonCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TYPHOON_API UClass* StaticClass<class ATyphoonCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Typhoon_Source_Typhoon_TyphoonCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
