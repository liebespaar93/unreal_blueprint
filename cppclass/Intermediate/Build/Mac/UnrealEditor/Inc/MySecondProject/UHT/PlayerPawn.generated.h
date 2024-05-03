// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYSECONDPROJECT_PlayerPawn_generated_h
#error "PlayerPawn.generated.h already included, missing '#pragma once' in PlayerPawn.h"
#endif
#define MYSECONDPROJECT_PlayerPawn_generated_h

#define FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_PlayerPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MySecondProject"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_PlayerPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerPawn(APlayerPawn&&); \
	APlayerPawn(const APlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerPawn) \
	NO_API virtual ~APlayerPawn();


#define FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_PlayerPawn_h_9_PROLOG
#define FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_PlayerPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_PlayerPawn_h_12_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_PlayerPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYSECONDPROJECT_API UClass* StaticClass<class APlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_PlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
