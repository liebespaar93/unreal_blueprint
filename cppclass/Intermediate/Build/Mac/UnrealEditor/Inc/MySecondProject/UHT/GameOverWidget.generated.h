// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameOverWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYSECONDPROJECT_GameOverWidget_generated_h
#error "GameOverWidget.generated.h already included, missing '#pragma once' in GameOverWidget.h"
#endif
#define MYSECONDPROJECT_GameOverWidget_generated_h

#define FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_GameOverWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execQuit); \
	DECLARE_FUNCTION(execRestart);


#define FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_GameOverWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameOverWidget(); \
	friend struct Z_Construct_UClass_UGameOverWidget_Statics; \
public: \
	DECLARE_CLASS(UGameOverWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MySecondProject"), NO_API) \
	DECLARE_SERIALIZER(UGameOverWidget)


#define FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_GameOverWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameOverWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameOverWidget(UGameOverWidget&&); \
	UGameOverWidget(const UGameOverWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameOverWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameOverWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameOverWidget) \
	NO_API virtual ~UGameOverWidget();


#define FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_GameOverWidget_h_12_PROLOG
#define FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_GameOverWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_GameOverWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_GameOverWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_GameOverWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYSECONDPROJECT_API UClass* StaticClass<class UGameOverWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_GameOverWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
