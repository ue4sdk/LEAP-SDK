// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_WeaponVehicle_ControlledTurret_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WeaponVehicle_ControlledTurret.BP_WeaponVehicle_ControlledTurret_C.K2_EquipComplete
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_WeaponVehicle_ControlledTurret_C::K2_EquipComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponVehicle_ControlledTurret.BP_WeaponVehicle_ControlledTurret_C.K2_EquipComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WeaponVehicle_ControlledTurret.BP_WeaponVehicle_ControlledTurret_C.FinishedTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_WeaponVehicle_ControlledTurret_C::FinishedTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponVehicle_ControlledTurret.BP_WeaponVehicle_ControlledTurret_C.FinishedTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WeaponVehicle_ControlledTurret.BP_WeaponVehicle_ControlledTurret_C.VehicleDestroyed
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_WeaponVehicle_ControlledTurret_C::VehicleDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponVehicle_ControlledTurret.BP_WeaponVehicle_ControlledTurret_C.VehicleDestroyed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WeaponVehicle_ControlledTurret.BP_WeaponVehicle_ControlledTurret_C.ExecuteUbergraph_BP_WeaponVehicle_ControlledTurret
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_WeaponVehicle_ControlledTurret_C::ExecuteUbergraph_BP_WeaponVehicle_ControlledTurret(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponVehicle_ControlledTurret.BP_WeaponVehicle_ControlledTurret_C.ExecuteUbergraph_BP_WeaponVehicle_ControlledTurret"));

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
