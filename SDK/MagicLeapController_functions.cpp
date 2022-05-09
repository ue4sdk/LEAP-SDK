// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MagicLeapController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EControllerHand                Hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   MotionSource                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::SetMotionSourceForHand(EControllerHand Hand, const struct FName& MotionSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand"));

	struct
	{
		EControllerHand                Hand;
		struct FName                   MotionSource;
		bool                           ReturnValue;
	} params = {};

	params.Hand = Hand;
	params.MotionSource = MotionSource;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EMagicLeapControllerTrackingMode TrackingMode                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::SetControllerTrackingMode(EMagicLeapControllerTrackingMode TrackingMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode"));

	struct
	{
		EMagicLeapControllerTrackingMode TrackingMode;
		bool                           ReturnValue;
	} params = {};

	params.TrackingMode = TrackingMode;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   MotionSource                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerLEDPattern LEDPattern                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerLEDColor   LEDColor                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          DurationInSec                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::PlayLEDPattern(const struct FName& MotionSource, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern"));

	struct
	{
		struct FName                   MotionSource;
		EMagicLeapControllerLEDPattern LEDPattern;
		EMagicLeapControllerLEDColor   LEDColor;
		float                          DurationInSec;
		bool                           ReturnValue;
	} params = {};

	params.MotionSource = MotionSource;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   MotionSource                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerLEDEffect  LEDEffect                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerLEDSpeed   LEDSpeed                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerLEDPattern LEDPattern                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerLEDColor   LEDColor                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          DurationInSec                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::PlayLEDEffect(const struct FName& MotionSource, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect"));

	struct
	{
		struct FName                   MotionSource;
		EMagicLeapControllerLEDEffect  LEDEffect;
		EMagicLeapControllerLEDSpeed   LEDSpeed;
		EMagicLeapControllerLEDPattern LEDPattern;
		EMagicLeapControllerLEDColor   LEDColor;
		float                          DurationInSec;
		bool                           ReturnValue;
	} params = {};

	params.MotionSource = MotionSource;
	params.LEDEffect = LEDEffect;
	params.LEDSpeed = LEDSpeed;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   MotionSource                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerHapticPattern HapticPattern                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerHapticIntensity Intensity                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::PlayHapticPattern(const struct FName& MotionSource, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern"));

	struct
	{
		struct FName                   MotionSource;
		EMagicLeapControllerHapticPattern HapticPattern;
		EMagicLeapControllerHapticIntensity Intensity;
		bool                           ReturnValue;
	} params = {};

	params.MotionSource = MotionSource;
	params.HapticPattern = HapticPattern;
	params.Intensity = Intensity;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EControllerHand                Hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerLEDEffect  LEDEffect                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerLEDSpeed   LEDSpeed                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerLEDPattern LEDPattern                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerLEDColor   LEDColor                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          DurationInSec                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::PlayControllerLEDEffect(EControllerHand Hand, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect"));

	struct
	{
		EControllerHand                Hand;
		EMagicLeapControllerLEDEffect  LEDEffect;
		EMagicLeapControllerLEDSpeed   LEDSpeed;
		EMagicLeapControllerLEDPattern LEDPattern;
		EMagicLeapControllerLEDColor   LEDColor;
		float                          DurationInSec;
		bool                           ReturnValue;
	} params = {};

	params.Hand = Hand;
	params.LEDEffect = LEDEffect;
	params.LEDSpeed = LEDSpeed;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EControllerHand                Hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerLEDPattern LEDPattern                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerLEDColor   LEDColor                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          DurationInSec                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::PlayControllerLED(EControllerHand Hand, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED"));

	struct
	{
		EControllerHand                Hand;
		EMagicLeapControllerLEDPattern LEDPattern;
		EMagicLeapControllerLEDColor   LEDColor;
		float                          DurationInSec;
		bool                           ReturnValue;
	} params = {};

	params.Hand = Hand;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EControllerHand                Hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerHapticPattern HapticPattern                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerHapticIntensity Intensity                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::PlayControllerHapticFeedback(EControllerHand Hand, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback"));

	struct
	{
		EControllerHand                Hand;
		EMagicLeapControllerHapticPattern HapticPattern;
		EMagicLeapControllerHapticIntensity Intensity;
		bool                           ReturnValue;
	} params = {};

	params.Hand = Hand;
	params.HapticPattern = HapticPattern;
	params.Intensity = Intensity;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UMagicLeapControllerFunctionLibrary::MaxSupportedMagicLeapControllers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   MotionSource                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::IsMLControllerConnected(const struct FName& MotionSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected"));

	struct
	{
		struct FName                   MotionSource;
		bool                           ReturnValue;
	} params = {};

	params.MotionSource = MotionSource;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UMagicLeapControllerFunctionLibrary::InvertControllerMapping()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EControllerHand                Hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FName UMagicLeapControllerFunctionLibrary::GetMotionSourceForHand(EControllerHand Hand)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand"));

	struct
	{
		EControllerHand                Hand;
		struct FName                   ReturnValue;
	} params = {};

	params.Hand = Hand;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EControllerHand                Hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerType       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EMagicLeapControllerType UMagicLeapControllerFunctionLibrary::GetMLControllerType(EControllerHand Hand)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType"));

	struct
	{
		EControllerHand                Hand;
		EMagicLeapControllerType       ReturnValue;
	} params = {};

	params.Hand = Hand;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   MotionSource                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EControllerHand                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EControllerHand UMagicLeapControllerFunctionLibrary::GetHandForMotionSource(const struct FName& MotionSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource"));

	struct
	{
		struct FName                   MotionSource;
		EControllerHand                ReturnValue;
	} params = {};

	params.MotionSource = MotionSource;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   MotionSource                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMagicLeapControllerType       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EMagicLeapControllerType UMagicLeapControllerFunctionLibrary::GetControllerType(const struct FName& MotionSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType"));

	struct
	{
		struct FName                   MotionSource;
		EMagicLeapControllerType       ReturnValue;
	} params = {};

	params.MotionSource = MotionSource;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EMagicLeapControllerTrackingMode ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EMagicLeapControllerTrackingMode UMagicLeapControllerFunctionLibrary::GetControllerTrackingMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode"));

	struct
	{
		EMagicLeapControllerTrackingMode ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            ControllerIndex                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EControllerHand                Hand                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::GetControllerMapping(int ControllerIndex, EControllerHand* Hand)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping"));

	struct
	{
		int                            ControllerIndex;
		EControllerHand                Hand;
		bool                           ReturnValue;
	} params = {};

	params.ControllerIndex = ControllerIndex;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Hand != nullptr)
		*Hand = params.Hand;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
