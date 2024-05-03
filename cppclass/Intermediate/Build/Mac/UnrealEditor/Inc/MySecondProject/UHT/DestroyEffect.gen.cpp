// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MySecondProject/Public/DestroyEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestroyEffect() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
MYSECONDPROJECT_API UClass* Z_Construct_UClass_ADestroyEffect();
MYSECONDPROJECT_API UClass* Z_Construct_UClass_ADestroyEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_MySecondProject();
// End Cross Module References

// Begin Class ADestroyEffect
void ADestroyEffect::StaticRegisterNativesADestroyEffect()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADestroyEffect);
UClass* Z_Construct_UClass_ADestroyEffect_NoRegister()
{
	return ADestroyEffect::StaticClass();
}
struct Z_Construct_UClass_ADestroyEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DestroyEffect.h" },
		{ "ModuleRelativePath", "Public/DestroyEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_destroySound_MetaData[] = {
		{ "Category", "DestroyEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sound Destroy\n" },
#endif
		{ "ModuleRelativePath", "Public/DestroyEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound Destroy" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_destroyParticle_MetaData[] = {
		{ "Category", "DestroyEffect" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DestroyEffect.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_destroySound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_destroyParticle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADestroyEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADestroyEffect_Statics::NewProp_destroySound = { "destroySound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADestroyEffect, destroySound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_destroySound_MetaData), NewProp_destroySound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADestroyEffect_Statics::NewProp_destroyParticle = { "destroyParticle", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADestroyEffect, destroyParticle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_destroyParticle_MetaData), NewProp_destroyParticle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADestroyEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestroyEffect_Statics::NewProp_destroySound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestroyEffect_Statics::NewProp_destroyParticle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADestroyEffect_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADestroyEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MySecondProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADestroyEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADestroyEffect_Statics::ClassParams = {
	&ADestroyEffect::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADestroyEffect_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADestroyEffect_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADestroyEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_ADestroyEffect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADestroyEffect()
{
	if (!Z_Registration_Info_UClass_ADestroyEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADestroyEffect.OuterSingleton, Z_Construct_UClass_ADestroyEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADestroyEffect.OuterSingleton;
}
template<> MYSECONDPROJECT_API UClass* StaticClass<ADestroyEffect>()
{
	return ADestroyEffect::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADestroyEffect);
ADestroyEffect::~ADestroyEffect() {}
// End Class ADestroyEffect

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_DestroyEffect_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADestroyEffect, ADestroyEffect::StaticClass, TEXT("ADestroyEffect"), &Z_Registration_Info_UClass_ADestroyEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADestroyEffect), 1936310698U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_DestroyEffect_h_1276563261(TEXT("/Script/MySecondProject"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_DestroyEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_MySecondProject_Source_MySecondProject_Public_DestroyEffect_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
