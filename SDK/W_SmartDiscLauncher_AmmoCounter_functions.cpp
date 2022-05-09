// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_SmartDiscLauncher_AmmoCounter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_SmartDiscLauncher_AmmoCounter.W_SmartDiscLauncher_AmmoCounter_C.OnPawnAcquired_800DF95141E371F4BF207F89F7A090C1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SmartDiscLauncher_AmmoCounter_C::OnPawnAcquired_800DF95141E371F4BF207F89F7A090C1(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SmartDiscLauncher_AmmoCounter.W_SmartDiscLauncher_AmmoCounter_C.OnPawnAcquired_800DF95141E371F4BF207F89F7A090C1"));

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


// Function W_SmartDiscLauncher_AmmoCounter.W_SmartDiscLauncher_AmmoCounter_C.AmmoChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SmartDiscLauncher_AmmoCounter_C::AmmoChanged(int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SmartDiscLauncher_AmmoCounter.W_SmartDiscLauncher_AmmoCounter_C.AmmoChanged"));

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


// Function W_SmartDiscLauncher_AmmoCounter.W_SmartDiscLauncher_AmmoCounter_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_SmartDiscLauncher_AmmoCounter_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SmartDiscLauncher_AmmoCounter.W_SmartDiscLauncher_AmmoCounter_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SmartDiscLauncher_AmmoCounter.W_SmartDiscLauncher_AmmoCounter_C.ExecuteUbergraph_W_SmartDiscLauncher_AmmoCounter
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SmartDiscLauncher_AmmoCounter_C::ExecuteUbergraph_W_SmartDiscLauncher_AmmoCounter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SmartDiscLauncher_AmmoCounter.W_SmartDiscLauncher_AmmoCounter_C.ExecuteUbergraph_W_SmartDiscLauncher_AmmoCounter"));

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
