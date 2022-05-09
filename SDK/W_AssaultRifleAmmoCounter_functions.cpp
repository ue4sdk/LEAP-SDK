// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_AssaultRifleAmmoCounter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_AssaultRifleAmmoCounter.W_AssaultRifleAmmoCounter_C.OnPawnAcquired_12D06FC14670E1E71820D3B5AB830E10
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_AssaultRifleAmmoCounter_C::OnPawnAcquired_12D06FC14670E1E71820D3B5AB830E10(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AssaultRifleAmmoCounter.W_AssaultRifleAmmoCounter_C.OnPawnAcquired_12D06FC14670E1E71820D3B5AB830E10"));

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


// Function W_AssaultRifleAmmoCounter.W_AssaultRifleAmmoCounter_C.AmmoChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_AssaultRifleAmmoCounter_C::AmmoChanged(int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AssaultRifleAmmoCounter.W_AssaultRifleAmmoCounter_C.AmmoChanged"));

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


// Function W_AssaultRifleAmmoCounter.W_AssaultRifleAmmoCounter_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_AssaultRifleAmmoCounter_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AssaultRifleAmmoCounter.W_AssaultRifleAmmoCounter_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_AssaultRifleAmmoCounter.W_AssaultRifleAmmoCounter_C.ExecuteUbergraph_W_AssaultRifleAmmoCounter
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_AssaultRifleAmmoCounter_C::ExecuteUbergraph_W_AssaultRifleAmmoCounter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_AssaultRifleAmmoCounter.W_AssaultRifleAmmoCounter_C.ExecuteUbergraph_W_AssaultRifleAmmoCounter"));

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
