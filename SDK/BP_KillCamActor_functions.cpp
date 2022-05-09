// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_KillCamActor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_KillCamActor.BP_KillCamActor_C.RotateCamera
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_KillCamActor_C::RotateCamera(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_KillCamActor.BP_KillCamActor_C.RotateCamera"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_KillCamActor.BP_KillCamActor_C.OnKillerFocused
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_KillCamActor_C::OnKillerFocused()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_KillCamActor.BP_KillCamActor_C.OnKillerFocused"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_KillCamActor.BP_KillCamActor_C.ExecuteUbergraph_BP_KillCamActor
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_KillCamActor_C::ExecuteUbergraph_BP_KillCamActor(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_KillCamActor.BP_KillCamActor_C.ExecuteUbergraph_BP_KillCamActor"));

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
