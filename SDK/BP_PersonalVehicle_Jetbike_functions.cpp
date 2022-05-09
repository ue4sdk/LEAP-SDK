// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_PersonalVehicle_Jetbike_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PersonalVehicle_Jetbike.BP_PersonalVehicle_Jetbike_C.OnLanded
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_PersonalVehicle_Jetbike_C::OnLanded(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PersonalVehicle_Jetbike.BP_PersonalVehicle_Jetbike_C.OnLanded"));

	struct
	{
		struct FHitResult              Hit;
	} params = {};

	params.Hit = Hit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PersonalVehicle_Jetbike.BP_PersonalVehicle_Jetbike_C.Bounce
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_PersonalVehicle_Jetbike_C::Bounce(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PersonalVehicle_Jetbike.BP_PersonalVehicle_Jetbike_C.Bounce"));

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


// Function BP_PersonalVehicle_Jetbike.BP_PersonalVehicle_Jetbike_C.OnJumped
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_PersonalVehicle_Jetbike_C::OnJumped()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PersonalVehicle_Jetbike.BP_PersonalVehicle_Jetbike_C.OnJumped"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PersonalVehicle_Jetbike.BP_PersonalVehicle_Jetbike_C.CustomEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_PersonalVehicle_Jetbike_C::CustomEvent(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PersonalVehicle_Jetbike.BP_PersonalVehicle_Jetbike_C.CustomEvent"));

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


// Function BP_PersonalVehicle_Jetbike.BP_PersonalVehicle_Jetbike_C.Set Valid Team Colour
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PersonalVehicle_Jetbike_C::Set_Valid_Team_Colour()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PersonalVehicle_Jetbike.BP_PersonalVehicle_Jetbike_C.Set Valid Team Colour"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PersonalVehicle_Jetbike.BP_PersonalVehicle_Jetbike_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_PersonalVehicle_Jetbike_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PersonalVehicle_Jetbike.BP_PersonalVehicle_Jetbike_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PersonalVehicle_Jetbike.BP_PersonalVehicle_Jetbike_C.OnBoostingStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PersonalVehicle_Jetbike_C::OnBoostingStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PersonalVehicle_Jetbike.BP_PersonalVehicle_Jetbike_C.OnBoostingStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PersonalVehicle_Jetbike.BP_PersonalVehicle_Jetbike_C.OnBoostingStopped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PersonalVehicle_Jetbike_C::OnBoostingStopped()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PersonalVehicle_Jetbike.BP_PersonalVehicle_Jetbike_C.OnBoostingStopped"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PersonalVehicle_Jetbike.BP_PersonalVehicle_Jetbike_C.ExecuteUbergraph_BP_PersonalVehicle_Jetbike
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_PersonalVehicle_Jetbike_C::ExecuteUbergraph_BP_PersonalVehicle_Jetbike(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PersonalVehicle_Jetbike.BP_PersonalVehicle_Jetbike_C.ExecuteUbergraph_BP_PersonalVehicle_Jetbike"));

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
