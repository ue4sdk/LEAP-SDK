#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MagicLeapController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MagicLeapController.MagicLeapControllerFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapControllerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapController.MagicLeapControllerFunctionLibrary"));
		return ptr;
	}


	static bool SetMotionSourceForHand(EControllerHand Hand, const struct FName& MotionSource);
	static bool SetControllerTrackingMode(EMagicLeapControllerTrackingMode TrackingMode);
	static bool PlayLEDPattern(const struct FName& MotionSource, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	static bool PlayLEDEffect(const struct FName& MotionSource, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	static bool PlayHapticPattern(const struct FName& MotionSource, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity);
	static bool PlayControllerLEDEffect(EControllerHand Hand, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	static bool PlayControllerLED(EControllerHand Hand, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	static bool PlayControllerHapticFeedback(EControllerHand Hand, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity);
	static int MaxSupportedMagicLeapControllers();
	static bool IsMLControllerConnected(const struct FName& MotionSource);
	static void InvertControllerMapping();
	static struct FName GetMotionSourceForHand(EControllerHand Hand);
	static EMagicLeapControllerType GetMLControllerType(EControllerHand Hand);
	static EControllerHand GetHandForMotionSource(const struct FName& MotionSource);
	static EMagicLeapControllerType GetControllerType(const struct FName& MotionSource);
	static EMagicLeapControllerTrackingMode GetControllerTrackingMode();
	static bool GetControllerMapping(int ControllerIndex, EControllerHand* Hand);
};


// Class MagicLeapController.MagicLeapTouchpadGesturesComponent
// 0x0090 (0x0158 - 0x00C8)
class UMagicLeapTouchpadGesturesComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnTouchpadGestureStart;                                   // 0x00D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnTouchpadGestureContinue;                                // 0x00E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnTouchpadGestureEnd;                                     // 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0100(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapController.MagicLeapTouchpadGesturesComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
