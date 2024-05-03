// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MySecondProject/Public/GameOverWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameOverWidget() {}

// Begin Cross Module References
MYSECONDPROJECT_API UClass* Z_Construct_UClass_UGameOverWidget();
MYSECONDPROJECT_API UClass* Z_Construct_UClass_UGameOverWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MySecondProject();
// End Cross Module References

// Begin Class UGameOverWidget Function Quit
struct Z_Construct_UFunction_UGameOverWidget_Quit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Press Quit Button Funcion\n" },
#endif
		{ "ModuleRelativePath", "Public/GameOverWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Press Quit Button Funcion" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameOverWidget_Quit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameOverWidget, nullptr, "Quit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameOverWidget_Quit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameOverWidget_Quit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameOverWidget_Quit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameOverWidget_Quit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameOverWidget::execQuit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Quit();
	P_NATIVE_END;
}
// End Class UGameOverWidget Function Quit

// Begin Class UGameOverWidget Function Restart
struct Z_Construct_UFunction_UGameOverWidget_Restart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Press Restart Button Function\n" },
#endif
		{ "ModuleRelativePath", "Public/GameOverWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Press Restart Button Function" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameOverWidget_Restart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameOverWidget, nullptr, "Restart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameOverWidget_Restart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameOverWidget_Restart_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameOverWidget_Restart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameOverWidget_Restart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameOverWidget::execRestart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Restart();
	P_NATIVE_END;
}
// End Class UGameOverWidget Function Restart

// Begin Class UGameOverWidget
void UGameOverWidget::StaticRegisterNativesUGameOverWidget()
{
	UClass* Class = UGameOverWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Quit", &UGameOverWidget::execQuit },
		{ "Restart", &UGameOverWidget::execRestart },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameOverWidget);
UClass* Z_Construct_UClass_UGameOverWidget_NoRegister()
{
	return UGameOverWidget::StaticClass();
}
struct Z_Construct_UClass_UGameOverWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameOverWidget.h" },
		{ "ModuleRelativePath", "Public/GameOverWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_btnRestart_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameOverWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// restart button\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameOverWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "restart button" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_btnQuit_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameOverWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// end button\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameOverWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "end button" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_btnRestart;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_btnQuit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameOverWidget_Quit, "Quit" }, // 3798383129
		{ &Z_Construct_UFunction_UGameOverWidget_Restart, "Restart" }, // 3584005293
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameOverWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameOverWidget_Statics::NewProp_btnRestart = { "btnRestart", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameOverWidget, btnRestart), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_btnRestart_MetaData), NewProp_btnRestart_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameOverWidget_Statics::NewProp_btnQuit = { "btnQuit", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameOverWidget, btnQuit), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_btnQuit_MetaData), NewProp_btnQuit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameOverWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameOverWidget_Statics::NewProp_btnRestart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameOverWidget_Statics::NewProp_btnQuit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameOverWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MySecondProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameOverWidget_Statics::ClassParams = {
	&UGameOverWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameOverWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameOverWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameOverWidget()
{
	if (!Z_Registration_Info_UClass_UGameOverWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameOverWidget.OuterSingleton, Z_Construct_UClass_UGameOverWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameOverWidget.OuterSingleton;
}
template<> MYSECONDPROJECT_API UClass* StaticClass<UGameOverWidget>()
{
	return UGameOverWidget::StaticClass();
}
UGameOverWidget::UGameOverWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameOverWidget);
UGameOverWidget::~UGameOverWidget() {}
// End Class UGameOverWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_GameOverWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameOverWidget, UGameOverWidget::StaticClass, TEXT("UGameOverWidget"), &Z_Registration_Info_UClass_UGameOverWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameOverWidget), 583471582U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_GameOverWidget_h_1636147023(TEXT("/Script/MySecondProject"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_GameOverWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_GameOverWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
