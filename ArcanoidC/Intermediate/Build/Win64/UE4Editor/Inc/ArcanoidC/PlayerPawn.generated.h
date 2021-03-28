// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCANOIDC_PlayerPawn_generated_h
#error "PlayerPawn.generated.h already included, missing '#pragma once' in PlayerPawn.h"
#endif
#define ARCANOIDC_PlayerPawn_generated_h

#define ArcanoidC_Source_ArcanoidC_PlayerPawn_h_14_SPARSE_DATA
#define ArcanoidC_Source_ArcanoidC_PlayerPawn_h_14_RPC_WRAPPERS
#define ArcanoidC_Source_ArcanoidC_PlayerPawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define ArcanoidC_Source_ArcanoidC_PlayerPawn_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArcanoidC"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define ArcanoidC_Source_ArcanoidC_PlayerPawn_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArcanoidC"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define ArcanoidC_Source_ArcanoidC_PlayerPawn_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public:


#define ArcanoidC_Source_ArcanoidC_PlayerPawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerPawn)


#define ArcanoidC_Source_ArcanoidC_PlayerPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SM_PlayerPawn() { return STRUCT_OFFSET(APlayerPawn, SM_PlayerPawn); } \
	FORCEINLINE static uint32 __PPO__FloatingMovement() { return STRUCT_OFFSET(APlayerPawn, FloatingMovement); }


#define ArcanoidC_Source_ArcanoidC_PlayerPawn_h_11_PROLOG
#define ArcanoidC_Source_ArcanoidC_PlayerPawn_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArcanoidC_Source_ArcanoidC_PlayerPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	ArcanoidC_Source_ArcanoidC_PlayerPawn_h_14_SPARSE_DATA \
	ArcanoidC_Source_ArcanoidC_PlayerPawn_h_14_RPC_WRAPPERS \
	ArcanoidC_Source_ArcanoidC_PlayerPawn_h_14_INCLASS \
	ArcanoidC_Source_ArcanoidC_PlayerPawn_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArcanoidC_Source_ArcanoidC_PlayerPawn_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArcanoidC_Source_ArcanoidC_PlayerPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	ArcanoidC_Source_ArcanoidC_PlayerPawn_h_14_SPARSE_DATA \
	ArcanoidC_Source_ArcanoidC_PlayerPawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ArcanoidC_Source_ArcanoidC_PlayerPawn_h_14_INCLASS_NO_PURE_DECLS \
	ArcanoidC_Source_ArcanoidC_PlayerPawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCANOIDC_API UClass* StaticClass<class APlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArcanoidC_Source_ArcanoidC_PlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
