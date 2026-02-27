// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovingActor.h"

#ifdef SOUNDSYSTEM_MovingActor_generated_h
#error "MovingActor.generated.h already included, missing '#pragma once' in MovingActor.h"
#endif
#define SOUNDSYSTEM_MovingActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMovingActor *************************************************************
struct Z_Construct_UClass_AMovingActor_Statics;
SOUNDSYSTEM_API UClass* Z_Construct_UClass_AMovingActor_NoRegister();

#define FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_MovingActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovingActor(); \
	friend struct ::Z_Construct_UClass_AMovingActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOUNDSYSTEM_API UClass* ::Z_Construct_UClass_AMovingActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AMovingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SoundSystem"), Z_Construct_UClass_AMovingActor_NoRegister) \
	DECLARE_SERIALIZER(AMovingActor)


#define FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_MovingActor_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMovingActor(AMovingActor&&) = delete; \
	AMovingActor(const AMovingActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovingActor) \
	NO_API virtual ~AMovingActor();


#define FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_MovingActor_h_9_PROLOG
#define FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_MovingActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_MovingActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_MovingActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMovingActor;

// ********** End Class AMovingActor ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_MovingActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
