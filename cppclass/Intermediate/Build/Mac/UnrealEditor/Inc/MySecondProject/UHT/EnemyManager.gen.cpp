// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MySecondProject/Public/EnemyManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
MYSECONDPROJECT_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
MYSECONDPROJECT_API UClass* Z_Construct_UClass_AEnemyManager();
MYSECONDPROJECT_API UClass* Z_Construct_UClass_AEnemyManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_MySecondProject();
// End Cross Module References

// Begin Class AEnemyManager
void AEnemyManager::StaticRegisterNativesAEnemyManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyManager);
UClass* Z_Construct_UClass_AEnemyManager_NoRegister()
{
	return AEnemyManager::StaticClass();
}
struct Z_Construct_UClass_AEnemyManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyManager.h" },
		{ "ModuleRelativePath", "Public/EnemyManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_createTime_MetaData[] = {
		{ "Category", "EnemyManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Create Time\n" },
#endif
		{ "ModuleRelativePath", "Public/EnemyManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create Time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_enemyFactory_MetaData[] = {
		{ "Category", "EnemyManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enemy Factory\n" },
#endif
		{ "ModuleRelativePath", "Public/EnemyManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enemy Factory" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_createTime;
	static const UECodeGen_Private::FClassPropertyParams NewProp_enemyFactory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_createTime = { "createTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyManager, createTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_createTime_MetaData), NewProp_createTime_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_enemyFactory = { "enemyFactory", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyManager, enemyFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_enemyFactory_MetaData), NewProp_enemyFactory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_createTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_enemyFactory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemyManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MySecondProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyManager_Statics::ClassParams = {
	&AEnemyManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemyManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyManager()
{
	if (!Z_Registration_Info_UClass_AEnemyManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyManager.OuterSingleton, Z_Construct_UClass_AEnemyManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyManager.OuterSingleton;
}
template<> MYSECONDPROJECT_API UClass* StaticClass<AEnemyManager>()
{
	return AEnemyManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyManager);
AEnemyManager::~AEnemyManager() {}
// End Class AEnemyManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_EnemyManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyManager, AEnemyManager::StaticClass, TEXT("AEnemyManager"), &Z_Registration_Info_UClass_AEnemyManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyManager), 1855570248U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_EnemyManager_h_2089576526(TEXT("/Script/MySecondProject"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_EnemyManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_EnemyManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
