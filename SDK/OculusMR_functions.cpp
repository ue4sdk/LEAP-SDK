// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "OculusMR_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OculusMR.OculusMR_PlaneMeshComponent.SetCustomMeshTriangles
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FOculusMR_PlaneMeshTriangle> Triangles                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UOculusMR_PlaneMeshComponent::SetCustomMeshTriangles(TArray<struct FOculusMR_PlaneMeshTriangle> Triangles)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusMR.OculusMR_PlaneMeshComponent.SetCustomMeshTriangles"));

	struct
	{
		TArray<struct FOculusMR_PlaneMeshTriangle> Triangles;
		bool                           ReturnValue;
	} params = {};

	params.Triangles = Triangles;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OculusMR.OculusMR_PlaneMeshComponent.ClearCustomMeshTriangles
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UOculusMR_PlaneMeshComponent::ClearCustomMeshTriangles()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusMR.OculusMR_PlaneMeshComponent.ClearCustomMeshTriangles"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OculusMR.OculusMR_PlaneMeshComponent.AddCustomMeshTriangles
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FOculusMR_PlaneMeshTriangle> Triangles                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UOculusMR_PlaneMeshComponent::AddCustomMeshTriangles(TArray<struct FOculusMR_PlaneMeshTriangle> Triangles)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusMR.OculusMR_PlaneMeshComponent.AddCustomMeshTriangles"));

	struct
	{
		TArray<struct FOculusMR_PlaneMeshTriangle> Triangles;
	} params = {};

	params.Triangles = Triangles;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OculusMR.OculusMR_Settings.SetIsCasting
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           Val                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UOculusMR_Settings::SetIsCasting(bool Val)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusMR.OculusMR_Settings.SetIsCasting"));

	struct
	{
		bool                           Val;
	} params = {};

	params.Val = Val;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OculusMR.OculusMR_Settings.SetCompositionMethod
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EOculusMR_CompositionMethod    Val                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UOculusMR_Settings::SetCompositionMethod(EOculusMR_CompositionMethod Val)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusMR.OculusMR_Settings.SetCompositionMethod"));

	struct
	{
		EOculusMR_CompositionMethod    Val;
	} params = {};

	params.Val = Val;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OculusMR.OculusMR_Settings.SetCapturingCamera
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EOculusMR_CameraDeviceEnum     Val                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UOculusMR_Settings::SetCapturingCamera(EOculusMR_CameraDeviceEnum Val)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusMR.OculusMR_Settings.SetCapturingCamera"));

	struct
	{
		EOculusMR_CameraDeviceEnum     Val;
	} params = {};

	params.Val = Val;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OculusMR.OculusMR_Settings.SaveToIni
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_Const)

void UOculusMR_Settings::SaveToIni()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusMR.OculusMR_Settings.SaveToIni"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OculusMR.OculusMR_Settings.LoadFromIni
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UOculusMR_Settings::LoadFromIni()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusMR.OculusMR_Settings.LoadFromIni"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OculusMR.OculusMR_Settings.GetIsCasting
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UOculusMR_Settings::GetIsCasting()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusMR.OculusMR_Settings.GetIsCasting"));

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


// Function OculusMR.OculusMR_Settings.GetCompositionMethod
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EOculusMR_CompositionMethod    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EOculusMR_CompositionMethod UOculusMR_Settings::GetCompositionMethod()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusMR.OculusMR_Settings.GetCompositionMethod"));

	struct
	{
		EOculusMR_CompositionMethod    ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OculusMR.OculusMR_Settings.GetCapturingCamera
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EOculusMR_CameraDeviceEnum     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EOculusMR_CameraDeviceEnum UOculusMR_Settings::GetCapturingCamera()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusMR.OculusMR_Settings.GetCapturingCamera"));

	struct
	{
		EOculusMR_CameraDeviceEnum     ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OculusMR.OculusMR_Settings.GetBindToTrackedCameraIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UOculusMR_Settings::GetBindToTrackedCameraIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusMR.OculusMR_Settings.GetBindToTrackedCameraIndex"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OculusMR.OculusMR_Settings.BindToTrackedCameraIndexIfAvailable
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            InTrackedCameraIndex           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UOculusMR_Settings::BindToTrackedCameraIndexIfAvailable(int InTrackedCameraIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusMR.OculusMR_Settings.BindToTrackedCameraIndexIfAvailable"));

	struct
	{
		int                            InTrackedCameraIndex;
	} params = {};

	params.InTrackedCameraIndex = InTrackedCameraIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OculusMR.OculusMRFunctionLibrary.SetTrackingReferenceComponent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USceneComponent*         Component                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UOculusMRFunctionLibrary::SetTrackingReferenceComponent(class USceneComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusMR.OculusMRFunctionLibrary.SetTrackingReferenceComponent"));

	struct
	{
		class USceneComponent*         Component;
		bool                           ReturnValue;
	} params = {};

	params.Component = Component;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OculusMR.OculusMRFunctionLibrary.SetMrcScalingFactor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          ScalingFactor                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UOculusMRFunctionLibrary::SetMrcScalingFactor(float ScalingFactor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusMR.OculusMRFunctionLibrary.SetMrcScalingFactor"));

	struct
	{
		float                          ScalingFactor;
		bool                           ReturnValue;
	} params = {};

	params.ScalingFactor = ScalingFactor;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OculusMR.OculusMRFunctionLibrary.IsMrcEnabled
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UOculusMRFunctionLibrary::IsMrcEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusMR.OculusMRFunctionLibrary.IsMrcEnabled"));

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


// Function OculusMR.OculusMRFunctionLibrary.IsMrcActive
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UOculusMRFunctionLibrary::IsMrcActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusMR.OculusMRFunctionLibrary.IsMrcActive"));

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


// Function OculusMR.OculusMRFunctionLibrary.GetTrackingReferenceComponent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USceneComponent*         ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class USceneComponent* UOculusMRFunctionLibrary::GetTrackingReferenceComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusMR.OculusMRFunctionLibrary.GetTrackingReferenceComponent"));

	struct
	{
		class USceneComponent*         ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OculusMR.OculusMRFunctionLibrary.GetOculusMRSettings
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UOculusMR_Settings*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UOculusMR_Settings* UOculusMRFunctionLibrary::GetOculusMRSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusMR.OculusMRFunctionLibrary.GetOculusMRSettings"));

	struct
	{
		class UOculusMR_Settings*      ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OculusMR.OculusMRFunctionLibrary.GetMrcScalingFactor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UOculusMRFunctionLibrary::GetMrcScalingFactor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OculusMR.OculusMRFunctionLibrary.GetMrcScalingFactor"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
