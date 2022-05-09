// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Weapon_Pistol_Ultimate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Weapon_Pistol_Ultimate.BP_Weapon_Pistol_Ultimate_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_Weapon_Pistol_Ultimate_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Pistol_Ultimate.BP_Weapon_Pistol_Ultimate_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_Pistol_Ultimate.BP_Weapon_Pistol_Ultimate_C.K2_Equip
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_Weapon_Pistol_Ultimate_C::K2_Equip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Pistol_Ultimate.BP_Weapon_Pistol_Ultimate_C.K2_Equip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_Pistol_Ultimate.BP_Weapon_Pistol_Ultimate_C.K2_UnEquip
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_Weapon_Pistol_Ultimate_C::K2_UnEquip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Pistol_Ultimate.BP_Weapon_Pistol_Ultimate_C.K2_UnEquip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_Pistol_Ultimate.BP_Weapon_Pistol_Ultimate_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bToggleTaunt                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_Weapon_Pistol_Ultimate_C::CustomEvent_1(bool bToggleTaunt)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Pistol_Ultimate.BP_Weapon_Pistol_Ultimate_C.CustomEvent_1"));

	struct
	{
		bool                           bToggleTaunt;
	} params = {};

	params.bToggleTaunt = bToggleTaunt;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_Pistol_Ultimate.BP_Weapon_Pistol_Ultimate_C.ExecuteUbergraph_BP_Weapon_Pistol_Ultimate
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_Pistol_Ultimate_C::ExecuteUbergraph_BP_Weapon_Pistol_Ultimate(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_Pistol_Ultimate.BP_Weapon_Pistol_Ultimate_C.ExecuteUbergraph_BP_Weapon_Pistol_Ultimate"));

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
