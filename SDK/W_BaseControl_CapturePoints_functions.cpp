// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_BaseControl_CapturePoints_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_BaseControl_CapturePoints.W_BaseControl_CapturePoints_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_BaseControl_CapturePoints_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_BaseControl_CapturePoints.W_BaseControl_CapturePoints_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_BaseControl_CapturePoints.W_BaseControl_CapturePoints_C.ControlPointsChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class ACapturePoint*>   ControlPoints                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UW_BaseControl_CapturePoints_C::ControlPointsChanged(TArray<class ACapturePoint*> ControlPoints)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_BaseControl_CapturePoints.W_BaseControl_CapturePoints_C.ControlPointsChanged"));

	struct
	{
		TArray<class ACapturePoint*>   ControlPoints;
	} params = {};

	params.ControlPoints = ControlPoints;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_BaseControl_CapturePoints.W_BaseControl_CapturePoints_C.ExecuteUbergraph_W_BaseControl_CapturePoints
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_BaseControl_CapturePoints_C::ExecuteUbergraph_W_BaseControl_CapturePoints(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_BaseControl_CapturePoints.W_BaseControl_CapturePoints_C.ExecuteUbergraph_W_BaseControl_CapturePoints"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
