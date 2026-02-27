// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSystem_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SoundSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SoundSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_SoundSystem.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/SoundSystem",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000000,
			0x62035FBA,
			0xCC9C0196,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SoundSystem.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_SoundSystem.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SoundSystem(Z_Construct_UPackage__Script_SoundSystem, TEXT("/Script/SoundSystem"), Z_Registration_Info_UPackage__Script_SoundSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x62035FBA, 0xCC9C0196));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
