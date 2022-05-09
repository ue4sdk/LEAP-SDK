// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MotoSynth_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MotoSynth.SynthComponentMoto.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FMotoSynthRuntimeSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USynthComponentMoto::SetSettings(const struct FMotoSynthRuntimeSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MotoSynth.SynthComponentMoto.SetSettings"));

	struct
	{
		struct FMotoSynthRuntimeSettings InSettings;
	} params = {};

	params.InSettings = InSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MotoSynth.SynthComponentMoto.SetRPM
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InRPM                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InTimeSec                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMoto::SetRPM(float InRPM, float InTimeSec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MotoSynth.SynthComponentMoto.SetRPM"));

	struct
	{
		float                          InRPM;
		float                          InTimeSec;
	} params = {};

	params.InRPM = InRPM;
	params.InTimeSec = InTimeSec;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MotoSynth.SynthComponentMoto.IsEnabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USynthComponentMoto::IsEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MotoSynth.SynthComponentMoto.IsEnabled"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MotoSynth.SynthComponentMoto.GetRPMRange
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// float                          OutMinRPM                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          OutMaxRPM                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMoto::GetRPMRange(float* OutMinRPM, float* OutMaxRPM)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MotoSynth.SynthComponentMoto.GetRPMRange"));

	struct
	{
		float                          OutMinRPM;
		float                          OutMaxRPM;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutMinRPM != nullptr)
		*OutMinRPM = params.OutMinRPM;
	if (OutMaxRPM != nullptr)
		*OutMaxRPM = params.OutMaxRPM;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
