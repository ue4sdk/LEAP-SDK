// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Weapon_SniperRifle_Charged_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Weapon_SniperRifle_Charged.BP_Weapon_SniperRifle_Charged_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_Weapon_SniperRifle_Charged_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_SniperRifle_Charged.BP_Weapon_SniperRifle_Charged_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_SniperRifle_Charged.BP_Weapon_SniperRifle_Charged_C.TightAimStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_Weapon_SniperRifle_Charged_C::TightAimStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_SniperRifle_Charged.BP_Weapon_SniperRifle_Charged_C.TightAimStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_SniperRifle_Charged.BP_Weapon_SniperRifle_Charged_C.TightAimEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_Weapon_SniperRifle_Charged_C::TightAimEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_SniperRifle_Charged.BP_Weapon_SniperRifle_Charged_C.TightAimEnd"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_SniperRifle_Charged.BP_Weapon_SniperRifle_Charged_C.K2_UnEquip
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_Weapon_SniperRifle_Charged_C::K2_UnEquip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_SniperRifle_Charged.BP_Weapon_SniperRifle_Charged_C.K2_UnEquip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_SniperRifle_Charged.BP_Weapon_SniperRifle_Charged_C.K2_FireComplete
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_SniperRifle_Charged_C::K2_FireComplete(unsigned char Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_SniperRifle_Charged.BP_Weapon_SniperRifle_Charged_C.K2_FireComplete"));

	struct
	{
		unsigned char                  Mode;
	} params = {};

	params.Mode = Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_SniperRifle_Charged.BP_Weapon_SniperRifle_Charged_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_SniperRifle_Charged_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_SniperRifle_Charged.BP_Weapon_SniperRifle_Charged_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_SniperRifle_Charged.BP_Weapon_SniperRifle_Charged_C.OnChargeStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TotalTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TimeElapsed                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_SniperRifle_Charged_C::OnChargeStart(float TotalTime, float TimeElapsed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_SniperRifle_Charged.BP_Weapon_SniperRifle_Charged_C.OnChargeStart"));

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


// Function BP_Weapon_SniperRifle_Charged.BP_Weapon_SniperRifle_Charged_C.OnChargeEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TotalTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TimeElapsed                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_SniperRifle_Charged_C::OnChargeEnd(float TotalTime, float TimeElapsed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_SniperRifle_Charged.BP_Weapon_SniperRifle_Charged_C.OnChargeEnd"));

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


// Function BP_Weapon_SniperRifle_Charged.BP_Weapon_SniperRifle_Charged_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_SniperRifle_Charged_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_SniperRifle_Charged.BP_Weapon_SniperRifle_Charged_C.ReceiveEndPlay"));

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


// Function BP_Weapon_SniperRifle_Charged.BP_Weapon_SniperRifle_Charged_C.OnChargeValueUpdated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Charge                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_SniperRifle_Charged_C::OnChargeValueUpdated(float Charge)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_SniperRifle_Charged.BP_Weapon_SniperRifle_Charged_C.OnChargeValueUpdated"));

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


// Function BP_Weapon_SniperRifle_Charged.BP_Weapon_SniperRifle_Charged_C.ExecuteUbergraph_BP_Weapon_SniperRifle_Charged
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_SniperRifle_Charged_C::ExecuteUbergraph_BP_Weapon_SniperRifle_Charged(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_SniperRifle_Charged.BP_Weapon_SniperRifle_Charged_C.ExecuteUbergraph_BP_Weapon_SniperRifle_Charged"));

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
