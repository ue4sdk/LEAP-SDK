// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "OculusHMD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OculusHMD.OculusFunctionLibrary.SetReorientHMDOnControllerRecenter
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           recenterMode                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::SetReorientHMDOnControllerRecenter(bool recenterMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.SetReorientHMDOnControllerRecenter"));

	struct
	{
		bool                           recenterMode;
	} params = {};

	params.recenterMode = recenterMode;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function OculusHMD.OculusFunctionLibrary.SetPositionScale3D
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 PosScale3D                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::SetPositionScale3D(const struct FVector& PosScale3D)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.SetPositionScale3D"));

	struct
	{
		struct FVector                 PosScale3D;
	} params = {};

	params.PosScale3D = PosScale3D;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function OculusHMD.OculusFunctionLibrary.SetGuardianVisibility
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           GuardianVisible                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::SetGuardianVisibility(bool GuardianVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.SetGuardianVisibility"));

	struct
	{
		bool                           GuardianVisible;
	} params = {};

	params.GuardianVisible = GuardianVisible;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function OculusHMD.OculusFunctionLibrary.SetFixedFoveatedRenderingLevel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EFixedFoveatedRenderingLevel   Level                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           isDynamic                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::SetFixedFoveatedRenderingLevel(EFixedFoveatedRenderingLevel Level, bool isDynamic)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.SetFixedFoveatedRenderingLevel"));

	struct
	{
		EFixedFoveatedRenderingLevel   Level;
		bool                           isDynamic;
	} params = {};

	params.Level = Level;
	params.isDynamic = isDynamic;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function OculusHMD.OculusFunctionLibrary.SetDisplayFrequency
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          RequestedFrequency             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::SetDisplayFrequency(float RequestedFrequency)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.SetDisplayFrequency"));

	struct
	{
		float                          RequestedFrequency;
	} params = {};

	params.RequestedFrequency = RequestedFrequency;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function OculusHMD.OculusFunctionLibrary.SetCPUAndGPULevels
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            CPULevel                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            GPULevel                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::SetCPUAndGPULevels(int CPULevel, int GPULevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.SetCPUAndGPULevels"));

	struct
	{
		int                            CPULevel;
		int                            GPULevel;
	} params = {};

	params.CPULevel = CPULevel;
	params.GPULevel = GPULevel;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function OculusHMD.OculusFunctionLibrary.SetColorScaleAndOffset
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FLinearColor            ColorScale                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            ColorOffset                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bApplyToAllLayers              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::SetColorScaleAndOffset(const struct FLinearColor& ColorScale, const struct FLinearColor& ColorOffset, bool bApplyToAllLayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.SetColorScaleAndOffset"));

	struct
	{
		struct FLinearColor            ColorScale;
		struct FLinearColor            ColorOffset;
		bool                           bApplyToAllLayers;
	} params = {};

	params.ColorScale = ColorScale;
	params.ColorOffset = ColorOffset;
	params.bApplyToAllLayers = bApplyToAllLayers;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function OculusHMD.OculusFunctionLibrary.SetClientColorDesc
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EColorSpace                    ColorSpace                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::SetClientColorDesc(EColorSpace ColorSpace)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.SetClientColorDesc"));

	struct
	{
		EColorSpace                    ColorSpace;
	} params = {};

	params.ColorSpace = ColorSpace;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndPositionOffset
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FRotator                BaseRot                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FVector                 PosOffset                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EOrientPositionSelector> OPTIONS                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::SetBaseRotationAndPositionOffset(const struct FRotator& BaseRot, const struct FVector& PosOffset, TEnumAsByte<EOrientPositionSelector> OPTIONS)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndPositionOffset"));

	struct
	{
		struct FRotator                BaseRot;
		struct FVector                 PosOffset;
		TEnumAsByte<EOrientPositionSelector> OPTIONS;
	} params = {};

	params.BaseRot = BaseRot;
	params.PosOffset = PosOffset;
	params.OPTIONS = OPTIONS;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FRotator                Rotation                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FVector                 BaseOffsetInMeters             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EOrientPositionSelector> OPTIONS                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::SetBaseRotationAndBaseOffsetInMeters(const struct FRotator& Rotation, const struct FVector& BaseOffsetInMeters, TEnumAsByte<EOrientPositionSelector> OPTIONS)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters"));

	struct
	{
		struct FRotator                Rotation;
		struct FVector                 BaseOffsetInMeters;
		TEnumAsByte<EOrientPositionSelector> OPTIONS;
	} params = {};

	params.Rotation = Rotation;
	params.BaseOffsetInMeters = BaseOffsetInMeters;
	params.OPTIONS = OPTIONS;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function OculusHMD.OculusFunctionLibrary.IsGuardianDisplayed
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UOculusFunctionLibrary::IsGuardianDisplayed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.IsGuardianDisplayed"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.IsGuardianConfigured
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UOculusFunctionLibrary::IsGuardianConfigured()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.IsGuardianConfigured"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.IsDeviceTracked
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// ETrackedDeviceType             DeviceType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UOculusFunctionLibrary::IsDeviceTracked(ETrackedDeviceType DeviceType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.IsDeviceTracked"));

	struct
	{
		ETrackedDeviceType             DeviceType;
		bool                           ReturnValue;
	} params = {};

	params.DeviceType = DeviceType;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.HasSystemOverlayPresent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UOculusFunctionLibrary::HasSystemOverlayPresent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.HasSystemOverlayPresent"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.HasInputFocus
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UOculusFunctionLibrary::HasInputFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.HasInputFocus"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetUserProfile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHmdUserProfile         Profile                        (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UOculusFunctionLibrary::GetUserProfile(struct FHmdUserProfile* Profile)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.GetUserProfile"));

	struct
	{
		struct FHmdUserProfile         Profile;
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Profile != nullptr)
		*Profile = params.Profile;

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetSystemHmd3DofModeEnabled
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UOculusFunctionLibrary::GetSystemHmd3DofModeEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.GetSystemHmd3DofModeEnabled"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetRawSensorData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 AngularAcceleration            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 LinearAcceleration             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 AngularVelocity                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 LinearVelocity                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          TimeInSeconds                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ETrackedDeviceType             DeviceType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::GetRawSensorData(ETrackedDeviceType DeviceType, struct FVector* AngularAcceleration, struct FVector* LinearAcceleration, struct FVector* AngularVelocity, struct FVector* LinearVelocity, float* TimeInSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.GetRawSensorData"));

	struct
	{
		struct FVector                 AngularAcceleration;
		struct FVector                 LinearAcceleration;
		struct FVector                 AngularVelocity;
		struct FVector                 LinearVelocity;
		float                          TimeInSeconds;
		ETrackedDeviceType             DeviceType;
	} params = {};

	params.DeviceType = DeviceType;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (AngularAcceleration != nullptr)
		*AngularAcceleration = params.AngularAcceleration;
	if (LinearAcceleration != nullptr)
		*LinearAcceleration = params.LinearAcceleration;
	if (AngularVelocity != nullptr)
		*AngularVelocity = params.AngularVelocity;
	if (LinearVelocity != nullptr)
		*LinearVelocity = params.LinearVelocity;
	if (TimeInSeconds != nullptr)
		*TimeInSeconds = params.TimeInSeconds;
}


// Function OculusHMD.OculusFunctionLibrary.GetPose
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FRotator                DeviceRotation                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FVector                 DevicePosition                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 NeckPosition                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bUseOrienationForPlayerCamera  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bUsePositionForPlayerCamera    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 PositionScale                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::GetPose(bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const struct FVector& PositionScale, struct FRotator* DeviceRotation, struct FVector* DevicePosition, struct FVector* NeckPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.GetPose"));

	struct
	{
		struct FRotator                DeviceRotation;
		struct FVector                 DevicePosition;
		struct FVector                 NeckPosition;
		bool                           bUseOrienationForPlayerCamera;
		bool                           bUsePositionForPlayerCamera;
		struct FVector                 PositionScale;
	} params = {};

	params.bUseOrienationForPlayerCamera = bUseOrienationForPlayerCamera;
	params.bUsePositionForPlayerCamera = bUsePositionForPlayerCamera;
	params.PositionScale = PositionScale;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (DeviceRotation != nullptr)
		*DeviceRotation = params.DeviceRotation;
	if (DevicePosition != nullptr)
		*DevicePosition = params.DevicePosition;
	if (NeckPosition != nullptr)
		*NeckPosition = params.NeckPosition;
}


// Function OculusHMD.OculusFunctionLibrary.GetPointGuardianIntersection
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 Point                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EBoundaryType                  BoundaryType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGuardianTestResult     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FGuardianTestResult UOculusFunctionLibrary::GetPointGuardianIntersection(const struct FVector& Point, EBoundaryType BoundaryType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.GetPointGuardianIntersection"));

	struct
	{
		struct FVector                 Point;
		EBoundaryType                  BoundaryType;
		struct FGuardianTestResult     ReturnValue;
	} params = {};

	params.Point = Point;
	params.BoundaryType = BoundaryType;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetPlayAreaTransform
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTransform UOculusFunctionLibrary::GetPlayAreaTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.GetPlayAreaTransform"));

	struct
	{
		struct FTransform              ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetNodeGuardianIntersection
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ETrackedDeviceType             DeviceType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EBoundaryType                  BoundaryType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGuardianTestResult     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FGuardianTestResult UOculusFunctionLibrary::GetNodeGuardianIntersection(ETrackedDeviceType DeviceType, EBoundaryType BoundaryType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.GetNodeGuardianIntersection"));

	struct
	{
		ETrackedDeviceType             DeviceType;
		EBoundaryType                  BoundaryType;
		struct FGuardianTestResult     ReturnValue;
	} params = {};

	params.DeviceType = DeviceType;
	params.BoundaryType = BoundaryType;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetHmdColorDesc
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EColorSpace                    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EColorSpace UOculusFunctionLibrary::GetHmdColorDesc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.GetHmdColorDesc"));

	struct
	{
		EColorSpace                    ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetGuardianPoints
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EBoundaryType                  BoundaryType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           UsePawnSpace                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVector>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FVector> UOculusFunctionLibrary::GetGuardianPoints(EBoundaryType BoundaryType, bool UsePawnSpace)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.GetGuardianPoints"));

	struct
	{
		EBoundaryType                  BoundaryType;
		bool                           UsePawnSpace;
		TArray<struct FVector>         ReturnValue;
	} params = {};

	params.BoundaryType = BoundaryType;
	params.UsePawnSpace = UsePawnSpace;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetGuardianDimensions
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EBoundaryType                  BoundaryType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UOculusFunctionLibrary::GetGuardianDimensions(EBoundaryType BoundaryType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.GetGuardianDimensions"));

	struct
	{
		EBoundaryType                  BoundaryType;
		struct FVector                 ReturnValue;
	} params = {};

	params.BoundaryType = BoundaryType;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetGPUUtilization
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           IsGPUAvailable                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          GPUUtilization                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::GetGPUUtilization(bool* IsGPUAvailable, float* GPUUtilization)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.GetGPUUtilization"));

	struct
	{
		bool                           IsGPUAvailable;
		float                          GPUUtilization;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (IsGPUAvailable != nullptr)
		*IsGPUAvailable = params.IsGPUAvailable;
	if (GPUUtilization != nullptr)
		*GPUUtilization = params.GPUUtilization;
}


// Function OculusHMD.OculusFunctionLibrary.GetGPUFrameTime
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UOculusFunctionLibrary::GetGPUFrameTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.GetGPUFrameTime"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetFixedFoveatedRenderingLevel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EFixedFoveatedRenderingLevel   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EFixedFoveatedRenderingLevel UOculusFunctionLibrary::GetFixedFoveatedRenderingLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.GetFixedFoveatedRenderingLevel"));

	struct
	{
		EFixedFoveatedRenderingLevel   ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetDeviceType
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EOculusDeviceType              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EOculusDeviceType UOculusFunctionLibrary::GetDeviceType()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.GetDeviceType"));

	struct
	{
		EOculusDeviceType              ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetDeviceName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UOculusFunctionLibrary::GetDeviceName()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.GetDeviceName"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetCurrentDisplayFrequency
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UOculusFunctionLibrary::GetCurrentDisplayFrequency()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.GetCurrentDisplayFrequency"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndPositionOffset
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FRotator                OutRot                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FVector                 OutPosOffset                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::GetBaseRotationAndPositionOffset(struct FRotator* OutRot, struct FVector* OutPosOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndPositionOffset"));

	struct
	{
		struct FRotator                OutRot;
		struct FVector                 OutPosOffset;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutRot != nullptr)
		*OutRot = params.OutRot;
	if (OutPosOffset != nullptr)
		*OutPosOffset = params.OutPosOffset;
}


// Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FRotator                OutRotation                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FVector                 OutBaseOffsetInMeters          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::GetBaseRotationAndBaseOffsetInMeters(struct FRotator* OutRotation, struct FVector* OutBaseOffsetInMeters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters"));

	struct
	{
		struct FRotator                OutRotation;
		struct FVector                 OutBaseOffsetInMeters;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
	if (OutBaseOffsetInMeters != nullptr)
		*OutBaseOffsetInMeters = params.OutBaseOffsetInMeters;
}


// Function OculusHMD.OculusFunctionLibrary.GetAvailableDisplayFrequencies
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<float>                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<float> UOculusFunctionLibrary::GetAvailableDisplayFrequencies()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.GetAvailableDisplayFrequencies"));

	struct
	{
		TArray<float>                  ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.EnablePositionTracking
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bPositionTracking              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::EnablePositionTracking(bool bPositionTracking)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.EnablePositionTracking"));

	struct
	{
		bool                           bPositionTracking;
	} params = {};

	params.bPositionTracking = bPositionTracking;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function OculusHMD.OculusFunctionLibrary.EnableOrientationTracking
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bOrientationTracking           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::EnableOrientationTracking(bool bOrientationTracking)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.EnableOrientationTracking"));

	struct
	{
		bool                           bOrientationTracking;
	} params = {};

	params.bOrientationTracking = bOrientationTracking;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function OculusHMD.OculusFunctionLibrary.ClearLoadingSplashScreens
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UOculusFunctionLibrary::ClearLoadingSplashScreens()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.ClearLoadingSplashScreens"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function OculusHMD.OculusFunctionLibrary.AddLoadingSplashScreen
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UTexture2D*              Texture                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TranslationInMeters            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                Rotation                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               SizeInMeters                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                DeltaRotation                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           bClearBeforeAdd                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UOculusFunctionLibrary::AddLoadingSplashScreen(class UTexture2D* Texture, const struct FVector& TranslationInMeters, const struct FRotator& Rotation, const struct FVector2D& SizeInMeters, const struct FRotator& DeltaRotation, bool bClearBeforeAdd)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusHMD.OculusFunctionLibrary.AddLoadingSplashScreen"));

	struct
	{
		class UTexture2D*              Texture;
		struct FVector                 TranslationInMeters;
		struct FRotator                Rotation;
		struct FVector2D               SizeInMeters;
		struct FRotator                DeltaRotation;
		bool                           bClearBeforeAdd;
	} params = {};

	params.Texture = Texture;
	params.TranslationInMeters = TranslationInMeters;
	params.Rotation = Rotation;
	params.SizeInMeters = SizeInMeters;
	params.DeltaRotation = DeltaRotation;
	params.bClearBeforeAdd = bClearBeforeAdd;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
