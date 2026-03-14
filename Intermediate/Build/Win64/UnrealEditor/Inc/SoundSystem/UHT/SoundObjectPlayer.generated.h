// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundObjectPlayer.h"

#ifdef SOUNDSYSTEM_SoundObjectPlayer_generated_h
#error "SoundObjectPlayer.generated.h already included, missing '#pragma once' in SoundObjectPlayer.h"
#endif
#define SOUNDSYSTEM_SoundObjectPlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSoundPair ********************************************************
struct Z_Construct_UScriptStruct_FSoundPair_Statics;
#define FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_SoundObjectPlayer_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundPair_Statics; \
	SOUNDSYSTEM_API static class UScriptStruct* StaticStruct();


struct FSoundPair;
// ********** End ScriptStruct FSoundPair **********************************************************

// ********** Begin Class USoundObjectPlayer *******************************************************
#define FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_SoundObjectPlayer_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execstopSample); \
	DECLARE_FUNCTION(execplaybackSample); \
	DECLARE_FUNCTION(execinterpolatePair); \
	DECLARE_FUNCTION(execupdatePair); \
	DECLARE_FUNCTION(execupdateCurrentSample); \
	DECLARE_FUNCTION(execcreateTimeSample);


struct Z_Construct_UClass_USoundObjectPlayer_Statics;
SOUNDSYSTEM_API UClass* Z_Construct_UClass_USoundObjectPlayer_NoRegister();

#define FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_SoundObjectPlayer_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundObjectPlayer(); \
	friend struct ::Z_Construct_UClass_USoundObjectPlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOUNDSYSTEM_API UClass* ::Z_Construct_UClass_USoundObjectPlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundObjectPlayer, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SoundSystem"), Z_Construct_UClass_USoundObjectPlayer_NoRegister) \
	DECLARE_SERIALIZER(USoundObjectPlayer)


#define FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_SoundObjectPlayer_h_39_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundObjectPlayer(USoundObjectPlayer&&) = delete; \
	USoundObjectPlayer(const USoundObjectPlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundObjectPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundObjectPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USoundObjectPlayer) \
	NO_API virtual ~USoundObjectPlayer();


#define FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_SoundObjectPlayer_h_36_PROLOG
#define FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_SoundObjectPlayer_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_SoundObjectPlayer_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_SoundObjectPlayer_h_39_INCLASS_NO_PURE_DECLS \
	FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_SoundObjectPlayer_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundObjectPlayer;

// ********** End Class USoundObjectPlayer *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_SoundObjectPlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
