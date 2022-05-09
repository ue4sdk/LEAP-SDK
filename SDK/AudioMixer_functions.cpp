// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AudioMixer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AudioMixer.SynthComponent.Stop
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USynthComponent::Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SynthComponent.Stop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.SynthComponent.Start
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USynthComponent::Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SynthComponent.Start"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.SynthComponent.SetVolumeMultiplier
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          VolumeMultiplier               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponent::SetVolumeMultiplier(float VolumeMultiplier)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SynthComponent.SetVolumeMultiplier"));

	struct
	{
		float                          VolumeMultiplier;
	} params = {};

	params.VolumeMultiplier = VolumeMultiplier;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.SynthComponent.SetSubmixSend
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USoundSubmixBase*        Submix                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          SendLevel                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponent::SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SynthComponent.SetSubmixSend"));

	struct
	{
		class USoundSubmixBase*        Submix;
		float                          SendLevel;
	} params = {};

	params.Submix = Submix;
	params.SendLevel = SendLevel;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.SynthComponent.SetLowPassFilterFrequency
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InLowPassFilterFrequency       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponent::SetLowPassFilterFrequency(float InLowPassFilterFrequency)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SynthComponent.SetLowPassFilterFrequency"));

	struct
	{
		float                          InLowPassFilterFrequency;
	} params = {};

	params.InLowPassFilterFrequency = InLowPassFilterFrequency;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.SynthComponent.SetLowPassFilterEnabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InLowPassFilterEnabled         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponent::SetLowPassFilterEnabled(bool InLowPassFilterEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SynthComponent.SetLowPassFilterEnabled"));

	struct
	{
		bool                           InLowPassFilterEnabled;
	} params = {};

	params.InLowPassFilterEnabled = InLowPassFilterEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.SynthComponent.IsPlaying
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USynthComponent::IsPlaying()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SynthComponent.IsPlaying"));

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


// Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InMegabytesToFree              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UAudioMixerBlueprintLibrary::TrimAudioCache(float InMegabytesToFree)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache"));

	struct
	{
		float                          InMegabytesToFree;
		float                          ReturnValue;
	} params = {};

	params.InMegabytesToFree = InMegabytesToFree;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EAudioRecordingExportType      ExportType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Path                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            SubmixToRecord                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundWave*              ExistingSoundWaveToOverwrite   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundWave*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class USoundWave* UAudioMixerBlueprintLibrary::StopRecordingOutput(class UObject* WorldContextObject, EAudioRecordingExportType ExportType, const struct FString& Name, const struct FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput"));

	struct
	{
		class UObject*                 WorldContextObject;
		EAudioRecordingExportType      ExportType;
		struct FString                 Name;
		struct FString                 Path;
		class USoundSubmix*            SubmixToRecord;
		class USoundWave*              ExistingSoundWaveToOverwrite;
		class USoundWave*              ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.ExportType = ExportType;
	params.Name = Name;
	params.Path = Path;
	params.SubmixToRecord = SubmixToRecord;
	params.ExistingSoundWaveToOverwrite = ExistingSoundWaveToOverwrite;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAudioBus*               AudioBus                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::StopAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UAudioBus*               AudioBus;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.AudioBus = AudioBus;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            SubmixToStopAnalyzing          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundSubmix*            SubmixToStopAnalyzing;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.SubmixToStopAnalyzing = SubmixToStopAnalyzing;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ExpectedDuration               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            SubmixToRecord                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput"));

	struct
	{
		class UObject*                 WorldContextObject;
		float                          ExpectedDuration;
		class USoundSubmix*            SubmixToRecord;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.ExpectedDuration = ExpectedDuration;
	params.SubmixToRecord = SubmixToRecord;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAudioBus*               AudioBus                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::StartAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UAudioBus*               AudioBus;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.AudioBus = AudioBus;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            SubmixToAnalyze                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EFFTSize                       FFTSize                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EFFTPeakInterpolationMethod    InterpolationMethod            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EFFTWindowType                 WindowType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          HopSize                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EAudioSpectrumType             SpectrumType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundSubmix*            SubmixToAnalyze;
		EFFTSize                       FFTSize;
		EFFTPeakInterpolationMethod    InterpolationMethod;
		EFFTWindowType                 WindowType;
		float                          HopSize;
		EAudioSpectrumType             SpectrumType;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.SubmixToAnalyze = SubmixToAnalyze;
	params.FFTSize = FFTSize;
	params.InterpolationMethod = InterpolationMethod;
	params.WindowType = WindowType;
	params.HopSize = HopSize;
	params.SpectrumType = SpectrumType;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            SoundSubmix                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class USoundEffectSubmixPreset*> SubmixEffectPresetChain        (CPF_Parm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// float                          FadeTimeSec                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::SetSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, TArray<class USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundSubmix*            SoundSubmix;
		TArray<class USoundEffectSubmixPreset*> SubmixEffectPresetChain;
		float                          FadeTimeSec;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.SoundSubmix = SoundSubmix;
	params.SubmixEffectPresetChain = SubmixEffectPresetChain;
	params.FadeTimeSec = FadeTimeSec;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundEffectSourcePresetChain* PresetChain                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            EntryIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bBypassed                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex, bool bBypassed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundEffectSourcePresetChain* PresetChain;
		int                            EntryIndex;
		bool                           bBypassed;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;
	params.EntryIndex = EntryIndex;
	params.bBypassed = bBypassed;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            SubmixToPause                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundSubmix*            SubmixToPause;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.SubmixToPause = SubmixToPause;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            InSoundSubmix                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            SubmixChainIndex               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::ReplaceSoundEffectSubmix(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundSubmix*            InSoundSubmix;
		int                            SubmixChainIndex;
		class USoundEffectSubmixPreset* SubmixEffectPreset;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.InSoundSubmix = InSoundSubmix;
	params.SubmixChainIndex = SubmixChainIndex;
	params.SubmixEffectPreset = SubmixEffectPreset;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            SoundSubmix                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            SubmixChainIndex               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::RemoveSubmixEffectPresetAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int SubmixChainIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundSubmix*            SoundSubmix;
		int                            SubmixChainIndex;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.SoundSubmix = SoundSubmix;
	params.SubmixChainIndex = SubmixChainIndex;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            SoundSubmix                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::RemoveSubmixEffectPreset(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundSubmix*            SoundSubmix;
		class USoundEffectSubmixPreset* SubmixEffectPreset;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.SoundSubmix = SoundSubmix;
	params.SubmixEffectPreset = SubmixEffectPreset;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundEffectSourcePresetChain* PresetChain                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            EntryIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundEffectSourcePresetChain* PresetChain;
		int                            EntryIndex;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;
	params.EntryIndex = EntryIndex;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundEffectSubmixPreset* SubmixEffectPreset;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.SubmixEffectPreset = SubmixEffectPreset;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USoundWave*              SoundWave                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnLoadCompletion               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::PrimeSoundForPlayback(class USoundWave* SoundWave, const struct FScriptDelegate& OnLoadCompletion)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback"));

	struct
	{
		class USoundWave*              SoundWave;
		struct FScriptDelegate         OnLoadCompletion;
	} params = {};

	params.SoundWave = SoundWave;
	params.OnLoadCompletion = OnLoadCompletion;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USoundCue*               SoundCue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::PrimeSoundCueForPlayback(class USoundCue* SoundCue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback"));

	struct
	{
		class USoundCue*               SoundCue;
	} params = {};

	params.SoundCue = SoundCue;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            SubmixToPause                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundSubmix*            SubmixToPause;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.SubmixToPause = SubmixToPause;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EAudioSpectrumBandPresetType   InBandPresetType               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InNumBands                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InAttackTimeMsec               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InReleaseTimeMsec              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType InBandPresetType, int InNumBands, int InAttackTimeMsec, int InReleaseTimeMsec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings"));

	struct
	{
		EAudioSpectrumBandPresetType   InBandPresetType;
		int                            InNumBands;
		int                            InAttackTimeMsec;
		int                            InReleaseTimeMsec;
		TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;
	} params = {};

	params.InBandPresetType = InBandPresetType;
	params.InNumBands = InNumBands;
	params.InAttackTimeMsec = InAttackTimeMsec;
	params.InReleaseTimeMsec = InReleaseTimeMsec;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            InNumSemitones                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMusicalNoteName               InStartingMusicalNote          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InStartingOctave               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InAttackTimeMsec               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InReleaseTimeMsec              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::MakeMusicalSpectralAnalysisBandSettings(int InNumSemitones, EMusicalNoteName InStartingMusicalNote, int InStartingOctave, int InAttackTimeMsec, int InReleaseTimeMsec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings"));

	struct
	{
		int                            InNumSemitones;
		EMusicalNoteName               InStartingMusicalNote;
		int                            InStartingOctave;
		int                            InAttackTimeMsec;
		int                            InReleaseTimeMsec;
		TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;
	} params = {};

	params.InNumSemitones = InNumSemitones;
	params.InStartingMusicalNote = InStartingMusicalNote;
	params.InStartingOctave = InStartingOctave;
	params.InAttackTimeMsec = InAttackTimeMsec;
	params.InReleaseTimeMsec = InReleaseTimeMsec;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            InNumBands                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InMinimumFrequency             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InMaximumFrequency             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InAttackTimeMsec               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            InReleaseTimeMsec              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::MakeFullSpectrumSpectralAnalysisBandSettings(int InNumBands, float InMinimumFrequency, float InMaximumFrequency, int InAttackTimeMsec, int InReleaseTimeMsec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings"));

	struct
	{
		int                            InNumBands;
		float                          InMinimumFrequency;
		float                          InMaximumFrequency;
		int                            InAttackTimeMsec;
		int                            InReleaseTimeMsec;
		TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;
	} params = {};

	params.InNumBands = InNumBands;
	params.InMinimumFrequency = InMinimumFrequency;
	params.InMaximumFrequency = InMaximumFrequency;
	params.InAttackTimeMsec = InAttackTimeMsec;
	params.InReleaseTimeMsec = InReleaseTimeMsec;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAudioBus*               AudioBus                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAudioMixerBlueprintLibrary::IsAudioBusActive(class UObject* WorldContextObject, class UAudioBus* AudioBus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UAudioBus*               AudioBus;
		bool                           ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.AudioBus = AudioBus;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<float>                  Frequencies                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<float>                  Phases                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            SubmixToAnalyze                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, class USoundSubmix* SubmixToAnalyze, TArray<float>* Phases)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies"));

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<float>                  Frequencies;
		TArray<float>                  Phases;
		class USoundSubmix*            SubmixToAnalyze;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.Frequencies = Frequencies;
	params.SubmixToAnalyze = SubmixToAnalyze;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Phases != nullptr)
		*Phases = params.Phases;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundEffectSourcePresetChain* PresetChain                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAudioMixerBlueprintLibrary::GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundEffectSourcePresetChain* PresetChain;
		int                            ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<float>                  Frequencies                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<float>                  Magnitudes                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            SubmixToAnalyze                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, class USoundSubmix* SubmixToAnalyze, TArray<float>* Magnitudes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies"));

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<float>                  Frequencies;
		TArray<float>                  Magnitudes;
		class USoundSubmix*            SubmixToAnalyze;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.Frequencies = Frequencies;
	params.SubmixToAnalyze = SubmixToAnalyze;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Magnitudes != nullptr)
		*Magnitudes = params.Magnitudes;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            SoundSubmix                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::ClearSubmixEffects(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundSubmix*            SoundSubmix;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.SoundSubmix = SoundSubmix;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            SoundSubmix                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          FadeTimeSec                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::ClearSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, float FadeTimeSec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundSubmix*            SoundSubmix;
		float                          FadeTimeSec;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.SoundSubmix = SoundSubmix;
	params.FadeTimeSec = FadeTimeSec;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::ClearMasterSubmixEffects(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects"));

	struct
	{
		class UObject*                 WorldContextObject;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            SoundSubmix                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAudioMixerBlueprintLibrary::AddSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundSubmix*            SoundSubmix;
		class USoundEffectSubmixPreset* SubmixEffectPreset;
		int                            ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.SoundSubmix = SoundSubmix;
	params.SubmixEffectPreset = SubmixEffectPreset;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundEffectSourcePresetChain* PresetChain                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FSourceEffectChainEntry Entry                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundEffectSourcePresetChain* PresetChain;
		struct FSourceEffectChainEntry Entry;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;
	params.Entry = Entry;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundEffectSubmixPreset* SubmixEffectPreset;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.SubmixEffectPreset = SubmixEffectPreset;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EQuartzCommandQuantization     InQuantizationBoundary         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UQuartzClockHandle::UnsubscribeFromTimeDivision(class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision"));

	struct
	{
		class UObject*                 WorldContextObject;
		EQuartzCommandQuantization     InQuantizationBoundary;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.InQuantizationBoundary = InQuantizationBoundary;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UQuartzClockHandle::UnsubscribeFromAllTimeDivisions(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions"));

	struct
	{
		class UObject*                 WorldContextObject;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EQuartzCommandQuantization     InQuantizationBoundary         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnQuantizationEvent            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UQuartzClockHandle::SubscribeToQuantizationEvent(class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, const struct FScriptDelegate& OnQuantizationEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent"));

	struct
	{
		class UObject*                 WorldContextObject;
		EQuartzCommandQuantization     InQuantizationBoundary;
		struct FScriptDelegate         OnQuantizationEvent;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.InQuantizationBoundary = InQuantizationBoundary;
	params.OnQuantizationEvent = OnQuantizationEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnQuantizationEvent            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UQuartzClockHandle::SubscribeToAllQuantizationEvents(class UObject* WorldContextObject, const struct FScriptDelegate& OnQuantizationEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FScriptDelegate         OnQuantizationEvent;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.OnQuantizationEvent = OnQuantizationEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.QuartzClockHandle.SetTicksPerSecond
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FQuartzQuantizationBoundary QuantizationBoundary           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// float                          TicksPerSecond                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UQuartzClockHandle::SetTicksPerSecond(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FScriptDelegate& Delegate, float TicksPerSecond)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzClockHandle.SetTicksPerSecond"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FQuartzQuantizationBoundary QuantizationBoundary;
		struct FScriptDelegate         Delegate;
		float                          TicksPerSecond;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.QuantizationBoundary = QuantizationBoundary;
	params.Delegate = Delegate;
	params.TicksPerSecond = TicksPerSecond;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FQuartzQuantizationBoundary QuantizationBoundary           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// float                          ThirtySecondsNotesPerMinute    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UQuartzClockHandle::SetThirtySecondNotesPerMinute(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FScriptDelegate& Delegate, float ThirtySecondsNotesPerMinute)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FQuartzQuantizationBoundary QuantizationBoundary;
		struct FScriptDelegate         Delegate;
		float                          ThirtySecondsNotesPerMinute;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.QuantizationBoundary = QuantizationBoundary;
	params.Delegate = Delegate;
	params.ThirtySecondsNotesPerMinute = ThirtySecondsNotesPerMinute;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.QuartzClockHandle.SetSecondsPerTick
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FQuartzQuantizationBoundary QuantizationBoundary           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// float                          SecondsPerTick                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UQuartzClockHandle::SetSecondsPerTick(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FScriptDelegate& Delegate, float SecondsPerTick)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzClockHandle.SetSecondsPerTick"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FQuartzQuantizationBoundary QuantizationBoundary;
		struct FScriptDelegate         Delegate;
		float                          SecondsPerTick;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.QuantizationBoundary = QuantizationBoundary;
	params.Delegate = Delegate;
	params.SecondsPerTick = SecondsPerTick;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FQuartzQuantizationBoundary QuantizationBoundary           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// float                          MillisecondsPerTick            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UQuartzClockHandle::SetMillisecondsPerTick(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FScriptDelegate& Delegate, float MillisecondsPerTick)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FQuartzQuantizationBoundary QuantizationBoundary;
		struct FScriptDelegate         Delegate;
		float                          MillisecondsPerTick;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.QuantizationBoundary = QuantizationBoundary;
	params.Delegate = Delegate;
	params.MillisecondsPerTick = MillisecondsPerTick;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FQuartzQuantizationBoundary QuantizationBoundary           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// float                          BeatsPerMinute                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UQuartzClockHandle::SetBeatsPerMinute(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FScriptDelegate& Delegate, float BeatsPerMinute)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FQuartzQuantizationBoundary QuantizationBoundary;
		struct FScriptDelegate         Delegate;
		float                          BeatsPerMinute;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.QuantizationBoundary = QuantizationBoundary;
	params.Delegate = Delegate;
	params.BeatsPerMinute = BeatsPerMinute;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.QuartzClockHandle.ResumeClock
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UQuartzClockHandle::ResumeClock(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzClockHandle.ResumeClock"));

	struct
	{
		class UObject*                 WorldContextObject;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.QuartzClockHandle.ResetTransport
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         InDelegate                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UQuartzClockHandle::ResetTransport(class UObject* WorldContextObject, const struct FScriptDelegate& InDelegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzClockHandle.ResetTransport"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FScriptDelegate         InDelegate;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.InDelegate = InDelegate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.QuartzClockHandle.PauseClock
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UQuartzClockHandle::PauseClock(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzClockHandle.PauseClock"));

	struct
	{
		class UObject*                 WorldContextObject;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.QuartzClockHandle.GetTicksPerSecond
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UQuartzClockHandle::GetTicksPerSecond(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzClockHandle.GetTicksPerSecond"));

	struct
	{
		class UObject*                 WorldContextObject;
		float                          ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UQuartzClockHandle::GetThirtySecondNotesPerMinute(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute"));

	struct
	{
		class UObject*                 WorldContextObject;
		float                          ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.QuartzClockHandle.GetSecondsPerTick
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UQuartzClockHandle::GetSecondsPerTick(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzClockHandle.GetSecondsPerTick"));

	struct
	{
		class UObject*                 WorldContextObject;
		float                          ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UQuartzClockHandle::GetMillisecondsPerTick(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick"));

	struct
	{
		class UObject*                 WorldContextObject;
		float                          ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UQuartzClockHandle::GetBeatsPerMinute(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute"));

	struct
	{
		class UObject*                 WorldContextObject;
		float                          ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSubmixEffectDynamicsProcessorSettings Settings                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USubmixEffectDynamicsProcessorPreset::SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& Settings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings"));

	struct
	{
		struct FSubmixEffectDynamicsProcessorSettings Settings;
	} params = {};

	params.Settings = Settings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USoundSubmix*            Submix                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USubmixEffectDynamicsProcessorPreset::SetExternalSubmix(class USoundSubmix* Submix)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix"));

	struct
	{
		class USoundSubmix*            Submix;
	} params = {};

	params.Submix = Submix;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSubmixEffectSubmixEQSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void USubmixEffectSubmixEQPreset::SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings"));

	struct
	{
		struct FSubmixEffectSubmixEQSettings InSettings;
	} params = {};

	params.InSettings = InSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UReverbEffect*           InReverbEffect                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          WetLevel                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          DryLevel                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USubmixEffectReverbPreset::SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect"));

	struct
	{
		class UReverbEffect*           InReverbEffect;
		float                          WetLevel;
		float                          DryLevel;
	} params = {};

	params.InReverbEffect = InReverbEffect;
	params.WetLevel = WetLevel;
	params.DryLevel = DryLevel;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.SubmixEffectReverbPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSubmixEffectReverbSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USubmixEffectReverbPreset::SetSettings(const struct FSubmixEffectReverbSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SubmixEffectReverbPreset.SetSettings"));

	struct
	{
		struct FSubmixEffectReverbSettings InSettings;
	} params = {};

	params.InSettings = InSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UQuartzSubsystem::GetRoundTripMinLatency(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency"));

	struct
	{
		class UObject*                 WorldContextObject;
		float                          ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UQuartzSubsystem::GetRoundTripMaxLatency(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency"));

	struct
	{
		class UObject*                 WorldContextObject;
		float                          ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UQuartzSubsystem::GetRoundTripAverageLatency(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency"));

	struct
	{
		class UObject*                 WorldContextObject;
		float                          ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetHandleForClock
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ClockName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UQuartzClockHandle*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UQuartzClockHandle* UQuartzSubsystem::GetHandleForClock(class UObject* WorldContextObject, const struct FName& ClockName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzSubsystem.GetHandleForClock"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FName                   ClockName;
		class UQuartzClockHandle*      ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.ClockName = ClockName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadMinLatency(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency"));

	struct
	{
		class UObject*                 WorldContextObject;
		float                          ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadMaxLatency(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency"));

	struct
	{
		class UObject*                 WorldContextObject;
		float                          ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadAverageLatency(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency"));

	struct
	{
		class UObject*                 WorldContextObject;
		float                          ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UQuartzSubsystem::GetAudioRenderThreadToGameThreadMinLatency()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UQuartzSubsystem::GetAudioRenderThreadToGameThreadMaxLatency()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UQuartzSubsystem::GetAudioRenderThreadToGameThreadAverageLatency()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.DoesClockExist
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ClockName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UQuartzSubsystem::DoesClockExist(class UObject* WorldContextObject, const struct FName& ClockName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzSubsystem.DoesClockExist"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FName                   ClockName;
		bool                           ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.ClockName = ClockName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.CreateNewClock
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ClockName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FQuartzClockSettings    InSettings                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           bOverrideSettingsIfClockExists (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UQuartzClockHandle*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UQuartzClockHandle* UQuartzSubsystem::CreateNewClock(class UObject* WorldContextObject, const struct FName& ClockName, const struct FQuartzClockSettings& InSettings, bool bOverrideSettingsIfClockExists)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.QuartzSubsystem.CreateNewClock"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FName                   ClockName;
		struct FQuartzClockSettings    InSettings;
		bool                           bOverrideSettingsIfClockExists;
		class UQuartzClockHandle*      ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.ClockName = ClockName;
	params.InSettings = InSettings;
	params.bOverrideSettingsIfClockExists = bOverrideSettingsIfClockExists;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
