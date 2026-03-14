// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundSystem/SoundObjectPlayer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSoundObjectPlayer() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
SOUNDSYSTEM_API UClass* Z_Construct_UClass_USoundObjectPlayer();
SOUNDSYSTEM_API UClass* Z_Construct_UClass_USoundObjectPlayer_NoRegister();
SOUNDSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSoundPair();
UPackage* Z_Construct_UPackage__Script_SoundSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSoundPair ********************************************************
struct Z_Construct_UScriptStruct_FSoundPair_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSoundPair); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSoundPair); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoundObjectPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_start_MetaData[] = {
		{ "ModuleRelativePath", "SoundObjectPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_end_MetaData[] = {
		{ "ModuleRelativePath", "SoundObjectPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_startTime_MetaData[] = {
		{ "ModuleRelativePath", "SoundObjectPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_endTime_MetaData[] = {
		{ "ModuleRelativePath", "SoundObjectPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentInterp_MetaData[] = {
		{ "ModuleRelativePath", "SoundObjectPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lastInterp_MetaData[] = {
		{ "ModuleRelativePath", "SoundObjectPlayer.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSoundPair constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_end;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_startTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_endTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_currentInterp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_lastInterp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSoundPair constinit property declarations **************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundPair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSoundPair_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSoundPair;
class UScriptStruct* FSoundPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSoundPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSoundPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundPair, (UObject*)Z_Construct_UPackage__Script_SoundSystem(), TEXT("SoundPair"));
	}
	return Z_Registration_Info_UScriptStruct_FSoundPair.OuterSingleton;
	}

// ********** Begin ScriptStruct FSoundPair Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundPair_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundPair, start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_start_MetaData), NewProp_start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundPair_Statics::NewProp_end = { "end", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundPair, end), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_end_MetaData), NewProp_end_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundPair_Statics::NewProp_startTime = { "startTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundPair, startTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_startTime_MetaData), NewProp_startTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundPair_Statics::NewProp_endTime = { "endTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundPair, endTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_endTime_MetaData), NewProp_endTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundPair_Statics::NewProp_currentInterp = { "currentInterp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundPair, currentInterp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentInterp_MetaData), NewProp_currentInterp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundPair_Statics::NewProp_lastInterp = { "lastInterp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundPair, lastInterp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lastInterp_MetaData), NewProp_lastInterp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundPair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundPair_Statics::NewProp_start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundPair_Statics::NewProp_end,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundPair_Statics::NewProp_startTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundPair_Statics::NewProp_endTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundPair_Statics::NewProp_currentInterp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundPair_Statics::NewProp_lastInterp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundPair_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSoundPair Property Definitions *************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundPair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SoundSystem,
	nullptr,
	&NewStructOps,
	"SoundPair",
	Z_Construct_UScriptStruct_FSoundPair_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundPair_Statics::PropPointers),
	sizeof(FSoundPair),
	alignof(FSoundPair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundPair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundPair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundPair()
{
	if (!Z_Registration_Info_UScriptStruct_FSoundPair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSoundPair.InnerSingleton, Z_Construct_UScriptStruct_FSoundPair_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSoundPair.InnerSingleton);
}
// ********** End ScriptStruct FSoundPair **********************************************************

// ********** Begin Class USoundObjectPlayer Function createTimeSample *****************************
struct Z_Construct_UFunction_USoundObjectPlayer_createTimeSample_Statics
{
	struct SoundObjectPlayer_eventcreateTimeSample_Parms
	{
		FVector position;
		float time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoundObjectPlayer.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function createTimeSample constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function createTimeSample constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function createTimeSample Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundObjectPlayer_createTimeSample_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundObjectPlayer_eventcreateTimeSample_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundObjectPlayer_createTimeSample_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundObjectPlayer_eventcreateTimeSample_Parms, time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundObjectPlayer_createTimeSample_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundObjectPlayer_createTimeSample_Statics::NewProp_position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundObjectPlayer_createTimeSample_Statics::NewProp_time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundObjectPlayer_createTimeSample_Statics::PropPointers) < 2048);
// ********** End Function createTimeSample Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundObjectPlayer_createTimeSample_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USoundObjectPlayer, nullptr, "createTimeSample", 	Z_Construct_UFunction_USoundObjectPlayer_createTimeSample_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USoundObjectPlayer_createTimeSample_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USoundObjectPlayer_createTimeSample_Statics::SoundObjectPlayer_eventcreateTimeSample_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundObjectPlayer_createTimeSample_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundObjectPlayer_createTimeSample_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USoundObjectPlayer_createTimeSample_Statics::SoundObjectPlayer_eventcreateTimeSample_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundObjectPlayer_createTimeSample()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundObjectPlayer_createTimeSample_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundObjectPlayer::execcreateTimeSample)
{
	P_GET_STRUCT(FVector,Z_Param_position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->createTimeSample(Z_Param_position,Z_Param_time);
	P_NATIVE_END;
}
// ********** End Class USoundObjectPlayer Function createTimeSample *******************************

// ********** Begin Class USoundObjectPlayer Function interpolatePair ******************************
struct Z_Construct_UFunction_USoundObjectPlayer_interpolatePair_Statics
{
	struct SoundObjectPlayer_eventinterpolatePair_Parms
	{
		int32 i;
		float interp;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoundObjectPlayer.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function interpolatePair constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_i;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_interp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function interpolatePair constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function interpolatePair Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundObjectPlayer_interpolatePair_Statics::NewProp_i = { "i", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundObjectPlayer_eventinterpolatePair_Parms, i), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundObjectPlayer_interpolatePair_Statics::NewProp_interp = { "interp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundObjectPlayer_eventinterpolatePair_Parms, interp), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundObjectPlayer_interpolatePair_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundObjectPlayer_eventinterpolatePair_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundObjectPlayer_interpolatePair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundObjectPlayer_interpolatePair_Statics::NewProp_i,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundObjectPlayer_interpolatePair_Statics::NewProp_interp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundObjectPlayer_interpolatePair_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundObjectPlayer_interpolatePair_Statics::PropPointers) < 2048);
// ********** End Function interpolatePair Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundObjectPlayer_interpolatePair_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USoundObjectPlayer, nullptr, "interpolatePair", 	Z_Construct_UFunction_USoundObjectPlayer_interpolatePair_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USoundObjectPlayer_interpolatePair_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USoundObjectPlayer_interpolatePair_Statics::SoundObjectPlayer_eventinterpolatePair_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundObjectPlayer_interpolatePair_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundObjectPlayer_interpolatePair_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USoundObjectPlayer_interpolatePair_Statics::SoundObjectPlayer_eventinterpolatePair_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundObjectPlayer_interpolatePair()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundObjectPlayer_interpolatePair_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundObjectPlayer::execinterpolatePair)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_i);
	P_GET_PROPERTY(FFloatProperty,Z_Param_interp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->interpolatePair(Z_Param_i,Z_Param_interp);
	P_NATIVE_END;
}
// ********** End Class USoundObjectPlayer Function interpolatePair ********************************

// ********** Begin Class USoundObjectPlayer Function playbackSample *******************************
struct Z_Construct_UFunction_USoundObjectPlayer_playbackSample_Statics
{
	struct SoundObjectPlayer_eventplaybackSample_Parms
	{
		FVector position;
		float pitch;
		int32 index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoundObjectPlayer.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function playbackSample constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_pitch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function playbackSample constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function playbackSample Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundObjectPlayer_playbackSample_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundObjectPlayer_eventplaybackSample_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundObjectPlayer_playbackSample_Statics::NewProp_pitch = { "pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundObjectPlayer_eventplaybackSample_Parms, pitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundObjectPlayer_playbackSample_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundObjectPlayer_eventplaybackSample_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundObjectPlayer_playbackSample_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundObjectPlayer_playbackSample_Statics::NewProp_position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundObjectPlayer_playbackSample_Statics::NewProp_pitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundObjectPlayer_playbackSample_Statics::NewProp_index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundObjectPlayer_playbackSample_Statics::PropPointers) < 2048);
// ********** End Function playbackSample Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundObjectPlayer_playbackSample_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USoundObjectPlayer, nullptr, "playbackSample", 	Z_Construct_UFunction_USoundObjectPlayer_playbackSample_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USoundObjectPlayer_playbackSample_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USoundObjectPlayer_playbackSample_Statics::SoundObjectPlayer_eventplaybackSample_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundObjectPlayer_playbackSample_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundObjectPlayer_playbackSample_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USoundObjectPlayer_playbackSample_Statics::SoundObjectPlayer_eventplaybackSample_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundObjectPlayer_playbackSample()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundObjectPlayer_playbackSample_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundObjectPlayer::execplaybackSample)
{
	P_GET_STRUCT(FVector,Z_Param_position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_pitch);
	P_GET_PROPERTY(FIntProperty,Z_Param_index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->playbackSample(Z_Param_position,Z_Param_pitch,Z_Param_index);
	P_NATIVE_END;
}
// ********** End Class USoundObjectPlayer Function playbackSample *********************************

// ********** Begin Class USoundObjectPlayer Function stopSample ***********************************
struct Z_Construct_UFunction_USoundObjectPlayer_stopSample_Statics
{
	struct SoundObjectPlayer_eventstopSample_Parms
	{
		int32 index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoundObjectPlayer.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function stopSample constinit property declarations ****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function stopSample constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function stopSample Property Definitions ***************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundObjectPlayer_stopSample_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundObjectPlayer_eventstopSample_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundObjectPlayer_stopSample_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundObjectPlayer_stopSample_Statics::NewProp_index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundObjectPlayer_stopSample_Statics::PropPointers) < 2048);
// ********** End Function stopSample Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundObjectPlayer_stopSample_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USoundObjectPlayer, nullptr, "stopSample", 	Z_Construct_UFunction_USoundObjectPlayer_stopSample_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USoundObjectPlayer_stopSample_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USoundObjectPlayer_stopSample_Statics::SoundObjectPlayer_eventstopSample_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundObjectPlayer_stopSample_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundObjectPlayer_stopSample_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USoundObjectPlayer_stopSample_Statics::SoundObjectPlayer_eventstopSample_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundObjectPlayer_stopSample()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundObjectPlayer_stopSample_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundObjectPlayer::execstopSample)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->stopSample(Z_Param_index);
	P_NATIVE_END;
}
// ********** End Class USoundObjectPlayer Function stopSample *************************************

// ********** Begin Class USoundObjectPlayer Function updateCurrentSample **************************
struct Z_Construct_UFunction_USoundObjectPlayer_updateCurrentSample_Statics
{
	struct SoundObjectPlayer_eventupdateCurrentSample_Parms
	{
		FVector position;
		float time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoundObjectPlayer.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function updateCurrentSample constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function updateCurrentSample constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function updateCurrentSample Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundObjectPlayer_updateCurrentSample_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundObjectPlayer_eventupdateCurrentSample_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundObjectPlayer_updateCurrentSample_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundObjectPlayer_eventupdateCurrentSample_Parms, time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundObjectPlayer_updateCurrentSample_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundObjectPlayer_updateCurrentSample_Statics::NewProp_position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundObjectPlayer_updateCurrentSample_Statics::NewProp_time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundObjectPlayer_updateCurrentSample_Statics::PropPointers) < 2048);
// ********** End Function updateCurrentSample Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundObjectPlayer_updateCurrentSample_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USoundObjectPlayer, nullptr, "updateCurrentSample", 	Z_Construct_UFunction_USoundObjectPlayer_updateCurrentSample_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USoundObjectPlayer_updateCurrentSample_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USoundObjectPlayer_updateCurrentSample_Statics::SoundObjectPlayer_eventupdateCurrentSample_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundObjectPlayer_updateCurrentSample_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundObjectPlayer_updateCurrentSample_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USoundObjectPlayer_updateCurrentSample_Statics::SoundObjectPlayer_eventupdateCurrentSample_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundObjectPlayer_updateCurrentSample()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundObjectPlayer_updateCurrentSample_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundObjectPlayer::execupdateCurrentSample)
{
	P_GET_STRUCT(FVector,Z_Param_position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->updateCurrentSample(Z_Param_position,Z_Param_time);
	P_NATIVE_END;
}
// ********** End Class USoundObjectPlayer Function updateCurrentSample ****************************

// ********** Begin Class USoundObjectPlayer Function updatePair ***********************************
struct Z_Construct_UFunction_USoundObjectPlayer_updatePair_Statics
{
	struct SoundObjectPlayer_eventupdatePair_Parms
	{
		int32 i;
		float time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoundObjectPlayer.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function updatePair constinit property declarations ****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_i;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function updatePair constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function updatePair Property Definitions ***************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundObjectPlayer_updatePair_Statics::NewProp_i = { "i", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundObjectPlayer_eventupdatePair_Parms, i), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundObjectPlayer_updatePair_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundObjectPlayer_eventupdatePair_Parms, time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundObjectPlayer_updatePair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundObjectPlayer_updatePair_Statics::NewProp_i,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundObjectPlayer_updatePair_Statics::NewProp_time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundObjectPlayer_updatePair_Statics::PropPointers) < 2048);
// ********** End Function updatePair Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundObjectPlayer_updatePair_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USoundObjectPlayer, nullptr, "updatePair", 	Z_Construct_UFunction_USoundObjectPlayer_updatePair_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USoundObjectPlayer_updatePair_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USoundObjectPlayer_updatePair_Statics::SoundObjectPlayer_eventupdatePair_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundObjectPlayer_updatePair_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundObjectPlayer_updatePair_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USoundObjectPlayer_updatePair_Statics::SoundObjectPlayer_eventupdatePair_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundObjectPlayer_updatePair()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundObjectPlayer_updatePair_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundObjectPlayer::execupdatePair)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_i);
	P_GET_PROPERTY(FFloatProperty,Z_Param_time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->updatePair(Z_Param_i,Z_Param_time);
	P_NATIVE_END;
}
// ********** End Class USoundObjectPlayer Function updatePair *************************************

// ********** Begin Class USoundObjectPlayer *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USoundObjectPlayer;
UClass* USoundObjectPlayer::GetPrivateStaticClass()
{
	using TClass = USoundObjectPlayer;
	if (!Z_Registration_Info_UClass_USoundObjectPlayer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SoundObjectPlayer"),
			Z_Registration_Info_UClass_USoundObjectPlayer.InnerSingleton,
			StaticRegisterNativesUSoundObjectPlayer,
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
	return Z_Registration_Info_UClass_USoundObjectPlayer.InnerSingleton;
}
UClass* Z_Construct_UClass_USoundObjectPlayer_NoRegister()
{
	return USoundObjectPlayer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USoundObjectPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SoundObjectPlayer.h" },
		{ "ModuleRelativePath", "SoundObjectPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speedOfSound_MetaData[] = {
		{ "Category", "SoundObjectPlayer" },
		{ "ModuleRelativePath", "SoundObjectPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxSoundSamples_MetaData[] = {
		{ "Category", "SoundObjectPlayer" },
		{ "ModuleRelativePath", "SoundObjectPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_amountOfSoundPlayer_MetaData[] = {
		{ "Category", "SoundObjectPlayer" },
		{ "ModuleRelativePath", "SoundObjectPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "SoundObjectPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pitchParamName_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "SoundObjectPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerRef_MetaData[] = {
		{ "ModuleRelativePath", "SoundObjectPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerPosition_MetaData[] = {
		{ "ModuleRelativePath", "SoundObjectPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lastPosition_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//for creating new samples\n" },
#endif
		{ "ModuleRelativePath", "SoundObjectPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "for creating new samples" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lastSample_MetaData[] = {
		{ "ModuleRelativePath", "SoundObjectPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_audioComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SoundObjectPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_soundTrail_MetaData[] = {
		{ "ModuleRelativePath", "SoundObjectPlayer.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USoundObjectPlayer constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_speedOfSound;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxSoundSamples;
	static const UECodeGen_Private::FIntPropertyParams NewProp_amountOfSoundPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSound;
	static const UECodeGen_Private::FNamePropertyParams NewProp_pitchParamName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_playerRef;
	static const UECodeGen_Private::FStructPropertyParams NewProp_playerPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_lastPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_lastSample;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_audioComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_audioComponents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_soundTrail_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_soundTrail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USoundObjectPlayer constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("createTimeSample"), .Pointer = &USoundObjectPlayer::execcreateTimeSample },
		{ .NameUTF8 = UTF8TEXT("interpolatePair"), .Pointer = &USoundObjectPlayer::execinterpolatePair },
		{ .NameUTF8 = UTF8TEXT("playbackSample"), .Pointer = &USoundObjectPlayer::execplaybackSample },
		{ .NameUTF8 = UTF8TEXT("stopSample"), .Pointer = &USoundObjectPlayer::execstopSample },
		{ .NameUTF8 = UTF8TEXT("updateCurrentSample"), .Pointer = &USoundObjectPlayer::execupdateCurrentSample },
		{ .NameUTF8 = UTF8TEXT("updatePair"), .Pointer = &USoundObjectPlayer::execupdatePair },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundObjectPlayer_createTimeSample, "createTimeSample" }, // 2947389066
		{ &Z_Construct_UFunction_USoundObjectPlayer_interpolatePair, "interpolatePair" }, // 140721000
		{ &Z_Construct_UFunction_USoundObjectPlayer_playbackSample, "playbackSample" }, // 2037062999
		{ &Z_Construct_UFunction_USoundObjectPlayer_stopSample, "stopSample" }, // 1426652259
		{ &Z_Construct_UFunction_USoundObjectPlayer_updateCurrentSample, "updateCurrentSample" }, // 241839227
		{ &Z_Construct_UFunction_USoundObjectPlayer_updatePair, "updatePair" }, // 3294788586
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundObjectPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USoundObjectPlayer_Statics

// ********** Begin Class USoundObjectPlayer Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundObjectPlayer_Statics::NewProp_speedOfSound = { "speedOfSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundObjectPlayer, speedOfSound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speedOfSound_MetaData), NewProp_speedOfSound_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundObjectPlayer_Statics::NewProp_maxSoundSamples = { "maxSoundSamples", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundObjectPlayer, maxSoundSamples), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxSoundSamples_MetaData), NewProp_maxSoundSamples_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundObjectPlayer_Statics::NewProp_amountOfSoundPlayer = { "amountOfSoundPlayer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundObjectPlayer, amountOfSoundPlayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_amountOfSoundPlayer_MetaData), NewProp_amountOfSoundPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundObjectPlayer_Statics::NewProp_CurrentSound = { "CurrentSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundObjectPlayer, CurrentSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSound_MetaData), NewProp_CurrentSound_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USoundObjectPlayer_Statics::NewProp_pitchParamName = { "pitchParamName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundObjectPlayer, pitchParamName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pitchParamName_MetaData), NewProp_pitchParamName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundObjectPlayer_Statics::NewProp_playerRef = { "playerRef", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundObjectPlayer, playerRef), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerRef_MetaData), NewProp_playerRef_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundObjectPlayer_Statics::NewProp_playerPosition = { "playerPosition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundObjectPlayer, playerPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerPosition_MetaData), NewProp_playerPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundObjectPlayer_Statics::NewProp_lastPosition = { "lastPosition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundObjectPlayer, lastPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lastPosition_MetaData), NewProp_lastPosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundObjectPlayer_Statics::NewProp_lastSample = { "lastSample", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundObjectPlayer, lastSample), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lastSample_MetaData), NewProp_lastSample_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundObjectPlayer_Statics::NewProp_audioComponents_Inner = { "audioComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundObjectPlayer_Statics::NewProp_audioComponents = { "audioComponents", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundObjectPlayer, audioComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_audioComponents_MetaData), NewProp_audioComponents_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundObjectPlayer_Statics::NewProp_soundTrail_Inner = { "soundTrail", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoundPair, METADATA_PARAMS(0, nullptr) }; // 139584538
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundObjectPlayer_Statics::NewProp_soundTrail = { "soundTrail", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundObjectPlayer, soundTrail), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_soundTrail_MetaData), NewProp_soundTrail_MetaData) }; // 139584538
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundObjectPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundObjectPlayer_Statics::NewProp_speedOfSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundObjectPlayer_Statics::NewProp_maxSoundSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundObjectPlayer_Statics::NewProp_amountOfSoundPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundObjectPlayer_Statics::NewProp_CurrentSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundObjectPlayer_Statics::NewProp_pitchParamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundObjectPlayer_Statics::NewProp_playerRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundObjectPlayer_Statics::NewProp_playerPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundObjectPlayer_Statics::NewProp_lastPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundObjectPlayer_Statics::NewProp_lastSample,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundObjectPlayer_Statics::NewProp_audioComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundObjectPlayer_Statics::NewProp_audioComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundObjectPlayer_Statics::NewProp_soundTrail_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundObjectPlayer_Statics::NewProp_soundTrail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundObjectPlayer_Statics::PropPointers) < 2048);
// ********** End Class USoundObjectPlayer Property Definitions ************************************
UObject* (*const Z_Construct_UClass_USoundObjectPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SoundSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundObjectPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundObjectPlayer_Statics::ClassParams = {
	&USoundObjectPlayer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USoundObjectPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundObjectPlayer_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundObjectPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundObjectPlayer_Statics::Class_MetaDataParams)
};
void USoundObjectPlayer::StaticRegisterNativesUSoundObjectPlayer()
{
	UClass* Class = USoundObjectPlayer::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USoundObjectPlayer_Statics::Funcs));
}
UClass* Z_Construct_UClass_USoundObjectPlayer()
{
	if (!Z_Registration_Info_UClass_USoundObjectPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundObjectPlayer.OuterSingleton, Z_Construct_UClass_USoundObjectPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundObjectPlayer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USoundObjectPlayer);
USoundObjectPlayer::~USoundObjectPlayer() {}
// ********** End Class USoundObjectPlayer *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_SoundObjectPlayer_h__Script_SoundSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSoundPair::StaticStruct, Z_Construct_UScriptStruct_FSoundPair_Statics::NewStructOps, TEXT("SoundPair"),&Z_Registration_Info_UScriptStruct_FSoundPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundPair), 139584538U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundObjectPlayer, USoundObjectPlayer::StaticClass, TEXT("USoundObjectPlayer"), &Z_Registration_Info_UClass_USoundObjectPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundObjectPlayer), 2982468676U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_SoundObjectPlayer_h__Script_SoundSystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_SoundObjectPlayer_h__Script_SoundSystem_598153468{
	TEXT("/Script/SoundSystem"),
	Z_CompiledInDeferFile_FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_SoundObjectPlayer_h__Script_SoundSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_SoundObjectPlayer_h__Script_SoundSystem_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_SoundObjectPlayer_h__Script_SoundSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Astro_Documents_Unreal_Projects_SoundSystem_Source_SoundSystem_SoundObjectPlayer_h__Script_SoundSystem_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
