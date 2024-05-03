// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MySecondProject/Public/PlayerPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerPawn() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
MYSECONDPROJECT_API UClass* Z_Construct_UClass_ABullet_NoRegister();
MYSECONDPROJECT_API UClass* Z_Construct_UClass_APlayerPawn();
MYSECONDPROJECT_API UClass* Z_Construct_UClass_APlayerPawn_NoRegister();
MYSECONDPROJECT_API UClass* Z_Construct_UClass_UGameOverWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_MySecondProject();
// End Cross Module References

// Begin Class APlayerPawn
void APlayerPawn::StaticRegisterNativesAPlayerPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerPawn);
UClass* Z_Construct_UClass_APlayerPawn_NoRegister()
{
	return APlayerPawn::StaticClass();
}
struct Z_Construct_UClass_APlayerPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerPawn.h" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_compBox_MetaData[] = {
		{ "Category", "PlayerPawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Box component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Box component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_compMesh_MetaData[] = {
		{ "Category", "PlayerPawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// StaticMesh component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StaticMesh component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_firePosition_MetaData[] = {
		{ "Category", "PlayerPawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bullet Create Postion\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bullet Create Postion" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bulletFactory_MetaData[] = {
		{ "Category", "PlayerPawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bullet\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bullet" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fireSound_MetaData[] = {
		{ "Category", "PlayerPawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sound\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gameOverWidgetFactory_MetaData[] = {
		{ "Category", "PlayerPawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Game Over Widget\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game Over Widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_creaeteTime_MetaData[] = {
		{ "Category", "PlayerPawn" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_compBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_compMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_firePosition;
	static const UECodeGen_Private::FClassPropertyParams NewProp_bulletFactory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_fireSound;
	static const UECodeGen_Private::FClassPropertyParams NewProp_gameOverWidgetFactory;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_creaeteTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_compBox = { "compBox", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawn, compBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_compBox_MetaData), NewProp_compBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_compMesh = { "compMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawn, compMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_compMesh_MetaData), NewProp_compMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_firePosition = { "firePosition", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawn, firePosition), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_firePosition_MetaData), NewProp_firePosition_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_bulletFactory = { "bulletFactory", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawn, bulletFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_ABullet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bulletFactory_MetaData), NewProp_bulletFactory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_fireSound = { "fireSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawn, fireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fireSound_MetaData), NewProp_fireSound_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_gameOverWidgetFactory = { "gameOverWidgetFactory", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawn, gameOverWidgetFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameOverWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gameOverWidgetFactory_MetaData), NewProp_gameOverWidgetFactory_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_creaeteTime = { "creaeteTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawn, creaeteTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_creaeteTime_MetaData), NewProp_creaeteTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_compBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_compMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_firePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_bulletFactory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_fireSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_gameOverWidgetFactory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_creaeteTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_MySecondProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerPawn_Statics::ClassParams = {
	&APlayerPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlayerPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerPawn()
{
	if (!Z_Registration_Info_UClass_APlayerPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerPawn.OuterSingleton, Z_Construct_UClass_APlayerPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerPawn.OuterSingleton;
}
template<> MYSECONDPROJECT_API UClass* StaticClass<APlayerPawn>()
{
	return APlayerPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerPawn);
APlayerPawn::~APlayerPawn() {}
// End Class APlayerPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_PlayerPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerPawn, APlayerPawn::StaticClass, TEXT("APlayerPawn"), &Z_Registration_Info_UClass_APlayerPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerPawn), 1892139450U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_PlayerPawn_h_665098554(TEXT("/Script/MySecondProject"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_PlayerPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_PlayerPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
