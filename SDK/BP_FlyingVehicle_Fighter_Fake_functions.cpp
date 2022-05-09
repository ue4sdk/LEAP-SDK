// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_FlyingVehicle_Fighter_Fake_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FlyingVehicle_Fighter_Fake.BP_FlyingVehicle_Fighter_Fake_C.Activate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_FlyingVehicle_Fighter_Fake_C::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FlyingVehicle_Fighter_Fake.BP_FlyingVehicle_Fighter_Fake_C.Activate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FlyingVehicle_Fighter_Fake.BP_FlyingVehicle_Fighter_Fake_C.Deactivate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_FlyingVehicle_Fighter_Fake_C::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FlyingVehicle_Fighter_Fake.BP_FlyingVehicle_Fighter_Fake_C.Deactivate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FlyingVehicle_Fighter_Fake.BP_FlyingVehicle_Fighter_Fake_C.ExecuteUbergraph_BP_FlyingVehicle_Fighter_Fake
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_FlyingVehicle_Fighter_Fake_C::ExecuteUbergraph_BP_FlyingVehicle_Fighter_Fake(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FlyingVehicle_Fighter_Fake.BP_FlyingVehicle_Fighter_Fake_C.ExecuteUbergraph_BP_FlyingVehicle_Fighter_Fake"));

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
