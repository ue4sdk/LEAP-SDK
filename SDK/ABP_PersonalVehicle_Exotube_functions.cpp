// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_PersonalVehicle_Exotube_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_PersonalVehicle_Exotube.ABP_PersonalVehicle_Exotube_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UABP_PersonalVehicle_Exotube_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_PersonalVehicle_Exotube.ABP_PersonalVehicle_Exotube_C.AnimGraph"));

	struct
	{
		struct FPoseLink               AnimGraph;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ABP_PersonalVehicle_Exotube.ABP_PersonalVehicle_Exotube_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_PersonalVehicle_Exotube_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_PersonalVehicle_Exotube.ABP_PersonalVehicle_Exotube_C.BlueprintUpdateAnimation"));

	struct
	{
		float                          DeltaTimeX;
	} params = {};

	params.DeltaTimeX = DeltaTimeX;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_PersonalVehicle_Exotube.ABP_PersonalVehicle_Exotube_C.Boost
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_PersonalVehicle_Exotube_C::Boost()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_PersonalVehicle_Exotube.ABP_PersonalVehicle_Exotube_C.Boost"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_PersonalVehicle_Exotube.ABP_PersonalVehicle_Exotube_C.StopBoost
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_PersonalVehicle_Exotube_C::StopBoost()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_PersonalVehicle_Exotube.ABP_PersonalVehicle_Exotube_C.StopBoost"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_PersonalVehicle_Exotube.ABP_PersonalVehicle_Exotube_C.ExecuteUbergraph_ABP_PersonalVehicle_Exotube
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_PersonalVehicle_Exotube_C::ExecuteUbergraph_ABP_PersonalVehicle_Exotube(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_PersonalVehicle_Exotube.ABP_PersonalVehicle_Exotube_C.ExecuteUbergraph_ABP_PersonalVehicle_Exotube"));

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
