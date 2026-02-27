// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundSystem/MovingActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMovingActor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
SOUNDSYSTEM_API UClass* Z_Construct_UClass_AMovingActor();
SOUNDSYSTEM_API UClass* Z_Construct_UClass_AMovingActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_SoundSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMovingActor *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AMovingActor;
UClass* AMovingActor::GetPrivateStaticClass()
{
	using TClass = AMovingActor;
	if (!Z_Registration_Info_UClass_AMovingActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MovingActor"),
			Z_Registration_Info_UClass_AMovingActor.InnerSingleton,
			StaticRegisterNativesAMovingActor,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AMovingActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AMovingActor_NoRegister()
{
	return AMovingActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMovingActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovingActor.h" },
		{ "ModuleRelativePath", "MovingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_startPosition_MetaData[] = {
		{ "Category", "MovingActor" },
		{ "ModuleRelativePath", "MovingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_endPosition_MetaData[] = {
		{ "Category", "MovingActor" },
		{ "ModuleRelativePath", "MovingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[] = {
		{ "Category", "MovingActor" },
		{ "ModuleRelativePath", "MovingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_time_MetaData[] = {
		{ "ModuleRelativePath", "MovingActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMovingActor constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_startPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_endPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMovingActor constinit property declarations *******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMovingActor_Statics

// ********** Begin Class AMovingActor Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingActor_Statics::NewProp_startPosition = { "startPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingActor, startPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_startPosition_MetaData), NewProp_startPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingActor_Statics::NewProp_endPosition = { "endPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingActor, endPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_endPosition_MetaData), NewProp_endPosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingActor_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingActor, speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speed_MetaData), NewProp_speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingActor_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingActor, time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_time_MetaData), NewProp_time_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingActor_Statics::NewProp_startPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingActor_Statics::NewProp_endPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingActor_Statics::NewProp_speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingActor_Statics::NewProp_time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingActor_Statics::PropPointers) < 2048);
// ********** End Class AMovingActor Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_AMovingActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SoundSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingActor_Statics::ClassParams = {
	&AMovingActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMovingActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMovingActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovingActor_Statics::Class_MetaDataParams)
};
void AMovingActor::StaticRegisterNativesAMovingActor()
{
}
UClass* Z_Construct_UClass_AMovingActor()
{
	if (!Z_Registration_Info_UClass_AMovingActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingActor.OuterSingleton, Z_Construct_UClass_AMovingActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovingActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMovingActor);
AMovingActor::~AMovingActor() {}
// ********** End Class AMovingActor ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_MovingActor_h__Script_SoundSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovingActor, AMovingActor::StaticClass, TEXT("AMovingActor"), &Z_Registration_Info_UClass_AMovingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingActor), 1608937558U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_MovingActor_h__Script_SoundSystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_MovingActor_h__Script_SoundSystem_366469149{
	TEXT("/Script/SoundSystem"),
	Z_CompiledInDeferFile_FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_MovingActor_h__Script_SoundSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_MovingActor_h__Script_SoundSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
