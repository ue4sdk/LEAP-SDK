// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ChildWeapon_ShotgunGrenadeLauncher_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ChildWeapon_ShotgunGrenadeLauncher.BP_ChildWeapon_ShotgunGrenadeLauncher_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_ChildWeapon_ShotgunGrenadeLauncher_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ChildWeapon_ShotgunGrenadeLauncher.BP_ChildWeapon_ShotgunGrenadeLauncher_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ChildWeapon_ShotgunGrenadeLauncher.BP_ChildWeapon_ShotgunGrenadeLauncher_C.OnChargeStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TotalTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TimeElapsed                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ChildWeapon_ShotgunGrenadeLauncher_C::OnChargeStart(float TotalTime, float TimeElapsed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ChildWeapon_ShotgunGrenadeLauncher.BP_ChildWeapon_ShotgunGrenadeLauncher_C.OnChargeStart"));

	struct
	{
		float                          TotalTime;
		float                          TimeElapsed;
	} params = {};

	params.TotalTime = TotalTime;
	params.TimeElapsed = TimeElapsed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ChildWeapon_ShotgunGrenadeLauncher.BP_ChildWeapon_ShotgunGrenadeLauncher_C.OnChargeEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TotalTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TimeElapsed                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ChildWeapon_ShotgunGrenadeLauncher_C::OnChargeEnd(float TotalTime, float TimeElapsed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ChildWeapon_ShotgunGrenadeLauncher.BP_ChildWeapon_ShotgunGrenadeLauncher_C.OnChargeEnd"));

	struct
	{
		float                          TotalTime;
		float                          TimeElapsed;
	} params = {};

	params.TotalTime = TotalTime;
	params.TimeElapsed = TimeElapsed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ChildWeapon_ShotgunGrenadeLauncher.BP_ChildWeapon_ShotgunGrenadeLauncher_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ChildWeapon_ShotgunGrenadeLauncher_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ChildWeapon_ShotgunGrenadeLauncher.BP_ChildWeapon_ShotgunGrenadeLauncher_C.ReceiveEndPlay"));

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


// Function BP_ChildWeapon_ShotgunGrenadeLauncher.BP_ChildWeapon_ShotgunGrenadeLauncher_C.OnChargeValueUpdated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Charge                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ChildWeapon_ShotgunGrenadeLauncher_C::OnChargeValueUpdated(float Charge)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ChildWeapon_ShotgunGrenadeLauncher.BP_ChildWeapon_ShotgunGrenadeLauncher_C.OnChargeValueUpdated"));

	struct
	{
		float                          Charge;
	} params = {};

	params.Charge = Charge;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ChildWeapon_ShotgunGrenadeLauncher.BP_ChildWeapon_ShotgunGrenadeLauncher_C.K2_UnEquip
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_ChildWeapon_ShotgunGrenadeLauncher_C::K2_UnEquip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ChildWeapon_ShotgunGrenadeLauncher.BP_ChildWeapon_ShotgunGrenadeLauncher_C.K2_UnEquip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ChildWeapon_ShotgunGrenadeLauncher.BP_ChildWeapon_ShotgunGrenadeLauncher_C.ExecuteUbergraph_BP_ChildWeapon_ShotgunGrenadeLauncher
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ChildWeapon_ShotgunGrenadeLauncher_C::ExecuteUbergraph_BP_ChildWeapon_ShotgunGrenadeLauncher(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ChildWeapon_ShotgunGrenadeLauncher.BP_ChildWeapon_ShotgunGrenadeLauncher_C.ExecuteUbergraph_BP_ChildWeapon_ShotgunGrenadeLauncher"));

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
