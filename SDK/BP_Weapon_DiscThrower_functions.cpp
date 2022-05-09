// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Weapon_DiscThrower_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C.K2_Equip
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_Weapon_DiscThrower_C::K2_Equip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C.K2_Equip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C.K2_UnEquip
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_Weapon_DiscThrower_C::K2_UnEquip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C.K2_UnEquip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C.K2_Fire
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_DiscThrower_C::K2_Fire(unsigned char Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C.K2_Fire"));

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


// Function BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C.DissolveDisk
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_DiscThrower_C::DissolveDisk(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C.DissolveDisk"));

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


// Function BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C.DissolveFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_DiscThrower_C::DissolveFinished(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C.DissolveFinished"));

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


// Function BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C.CustomEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_DiscThrower_C::CustomEvent(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C.CustomEvent"));

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


// Function BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C.OnReady
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_Weapon_DiscThrower_C::OnReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C.OnReady"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C.OnTightAimStart_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_Weapon_DiscThrower_C::OnTightAimStart_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C.OnTightAimStart_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C.OnTightAimStop_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_Weapon_DiscThrower_C::OnTightAimStop_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C.OnTightAimStop_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C.CleanupEffects
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_Weapon_DiscThrower_C::CleanupEffects()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C.CleanupEffects"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_DiscThrower_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C.ReceiveEndPlay"));

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


// Function BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C.K2_OwnerDied
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_Weapon_DiscThrower_C::K2_OwnerDied()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C.K2_OwnerDied"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C.ExecuteUbergraph_BP_Weapon_DiscThrower
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_DiscThrower_C::ExecuteUbergraph_BP_Weapon_DiscThrower(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_DiscThrower.BP_Weapon_DiscThrower_C.ExecuteUbergraph_BP_Weapon_DiscThrower"));

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
