// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_AssaultRifleAmmoCounter_Incendiary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_AssaultRifleAmmoCounter_Incendiary.W_AssaultRifleAmmoCounter_Incendiary_C.Get Ammo Color and Opacity 0
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateColor UW_AssaultRifleAmmoCounter_Incendiary_C::Get_Ammo_Color_and_Opacity_0()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AssaultRifleAmmoCounter_Incendiary.W_AssaultRifleAmmoCounter_Incendiary_C.Get Ammo Color and Opacity 0"));

	struct
	{
		struct FSlateColor             ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_AssaultRifleAmmoCounter_Incendiary.W_AssaultRifleAmmoCounter_Incendiary_C.OnPawnAcquired_02FC813D4A08D66D4E1CF6A4B25601F7
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_AssaultRifleAmmoCounter_Incendiary_C::OnPawnAcquired_02FC813D4A08D66D4E1CF6A4B25601F7(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AssaultRifleAmmoCounter_Incendiary.W_AssaultRifleAmmoCounter_Incendiary_C.OnPawnAcquired_02FC813D4A08D66D4E1CF6A4B25601F7"));

	struct
	{
		class APawn*                   Pawn;
	} params = {};

	params.Pawn = Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AssaultRifleAmmoCounter_Incendiary.W_AssaultRifleAmmoCounter_Incendiary_C.AmmoChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_AssaultRifleAmmoCounter_Incendiary_C::AmmoChanged(int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AssaultRifleAmmoCounter_Incendiary.W_AssaultRifleAmmoCounter_Incendiary_C.AmmoChanged"));

	struct
	{
		int                            Amount;
	} params = {};

	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AssaultRifleAmmoCounter_Incendiary.W_AssaultRifleAmmoCounter_Incendiary_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_AssaultRifleAmmoCounter_Incendiary_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AssaultRifleAmmoCounter_Incendiary.W_AssaultRifleAmmoCounter_Incendiary_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AssaultRifleAmmoCounter_Incendiary.W_AssaultRifleAmmoCounter_Incendiary_C.ExecuteUbergraph_W_AssaultRifleAmmoCounter_Incendiary
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_AssaultRifleAmmoCounter_Incendiary_C::ExecuteUbergraph_W_AssaultRifleAmmoCounter_Incendiary(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AssaultRifleAmmoCounter_Incendiary.W_AssaultRifleAmmoCounter_Incendiary_C.ExecuteUbergraph_W_AssaultRifleAmmoCounter_Incendiary"));

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
