// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySecondProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MySecondProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MySecondProject()
	{
		if (!Z_Registration_Info_UPackage__Script_MySecondProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MySecondProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xA80428EE,
				0x4D47D782,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MySecondProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MySecondProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MySecondProject(Z_Construct_UPackage__Script_MySecondProject, TEXT("/Script/MySecondProject"), Z_Registration_Info_UPackage__Script_MySecondProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA80428EE, 0x4D47D782));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
