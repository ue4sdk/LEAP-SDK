// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ControlledTurret_GunTurret_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ControlledTurret_GunTurret.BP_ControlledTurret_GunTurret_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_ControlledTurret_GunTurret_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ControlledTurret_GunTurret.BP_ControlledTurret_GunTurret_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ControlledTurret_GunTurret.BP_ControlledTurret_GunTurret_C.DestroyTurret
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ControlledTurret_GunTurret_C::DestroyTurret()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ControlledTurret_GunTurret.BP_ControlledTurret_GunTurret_C.DestroyTurret"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ControlledTurret_GunTurret.BP_ControlledTurret_GunTurret_C.DriverChangedEvent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXCharacter*      PreviousDriver                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXCharacter*      NewDriver                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ControlledTurret_GunTurret_C::DriverChangedEvent(class AProjectXCharacter* PreviousDriver, class AProjectXCharacter* NewDriver)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ControlledTurret_GunTurret.BP_ControlledTurret_GunTurret_C.DriverChangedEvent"));

	struct
	{
		class AProjectXCharacter*      PreviousDriver;
		class AProjectXCharacter*      NewDriver;
	} params = {};

	params.PreviousDriver = PreviousDriver;
	params.NewDriver = NewDriver;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ControlledTurret_GunTurret.BP_ControlledTurret_GunTurret_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ControlledTurret_GunTurret_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ControlledTurret_GunTurret.BP_ControlledTurret_GunTurret_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params = {};

	params.EndPlayReason = EndPlayReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ControlledTurret_GunTurret.BP_ControlledTurret_GunTurret_C.ExecuteUbergraph_BP_ControlledTurret_GunTurret
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ControlledTurret_GunTurret_C::ExecuteUbergraph_BP_ControlledTurret_GunTurret(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ControlledTurret_GunTurret.BP_ControlledTurret_GunTurret_C.ExecuteUbergraph_BP_ControlledTurret_GunTurret"));

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
