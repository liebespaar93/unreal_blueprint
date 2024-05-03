// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MySecondProject/Public/ShootingGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootingGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MYSECONDPROJECT_API UClass* Z_Construct_UClass_AShootingGameModeBase();
MYSECONDPROJECT_API UClass* Z_Construct_UClass_AShootingGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_MySecondProject();
// End Cross Module References

// Begin Class AShootingGameModeBase
void AShootingGameModeBase::StaticRegisterNativesAShootingGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShootingGameModeBase);
UClass* Z_Construct_UClass_AShootingGameModeBase_NoRegister()
{
	return AShootingGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AShootingGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ShootingGameModeBase.h" },
		{ "ModuleRelativePath", "Public/ShootingGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootingGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AShootingGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MySecondProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShootingGameModeBase_Statics::ClassParams = {
	&AShootingGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AShootingGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShootingGameModeBase()
{
	if (!Z_Registration_Info_UClass_AShootingGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShootingGameModeBase.OuterSingleton, Z_Construct_UClass_AShootingGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShootingGameModeBase.OuterSingleton;
}
template<> MYSECONDPROJECT_API UClass* StaticClass<AShootingGameModeBase>()
{
	return AShootingGameModeBase::StaticClass();
}
AShootingGameModeBase::AShootingGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShootingGameModeBase);
AShootingGameModeBase::~AShootingGameModeBase() {}
// End Class AShootingGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_ShootingGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShootingGameModeBase, AShootingGameModeBase::StaticClass, TEXT("AShootingGameModeBase"), &Z_Registration_Info_UClass_AShootingGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShootingGameModeBase), 2097302313U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_ShootingGameModeBase_h_3911640794(TEXT("/Script/MySecondProject"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_ShootingGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_ShootingGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
