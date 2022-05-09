// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_CountdownTimer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_CountdownTimer.W_CountdownTimer_C.OnGameStateAcquired_CF8EF9694F0F7A1537214C923E409420
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameState*              GameState                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CountdownTimer_C::OnGameStateAcquired_CF8EF9694F0F7A1537214C923E409420(class AGameState* GameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CountdownTimer.W_CountdownTimer_C.OnGameStateAcquired_CF8EF9694F0F7A1537214C923E409420"));

	struct
	{
		class AGameState*              GameState;
	} params = {};

	params.GameState = GameState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CountdownTimer.W_CountdownTimer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_CountdownTimer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CountdownTimer.W_CountdownTimer_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CountdownTimer.W_CountdownTimer_C.Match Started
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_CountdownTimer_C::Match_Started()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CountdownTimer.W_CountdownTimer_C.Match Started"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CountdownTimer.W_CountdownTimer_C.ExecuteUbergraph_W_CountdownTimer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CountdownTimer_C::ExecuteUbergraph_W_CountdownTimer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CountdownTimer.W_CountdownTimer_C.ExecuteUbergraph_W_CountdownTimer"));

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
