// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_MatchResult_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_MatchResult.W_MatchResult_C.OnGameStateAcquired_8DD67CB942DEFEDA0C33759ED2B5111B
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameState*              GameState                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MatchResult_C::OnGameStateAcquired_8DD67CB942DEFEDA0C33759ED2B5111B(class AGameState* GameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MatchResult.W_MatchResult_C.OnGameStateAcquired_8DD67CB942DEFEDA0C33759ED2B5111B"));

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


// Function W_MatchResult.W_MatchResult_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_MatchResult_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MatchResult.W_MatchResult_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MatchResult.W_MatchResult_C.UpdateCenterText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            WinningTeam                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MatchResult_C::UpdateCenterText(int WinningTeam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MatchResult.W_MatchResult_C.UpdateCenterText"));

	struct
	{
		int                            WinningTeam;
	} params = {};

	params.WinningTeam = WinningTeam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MatchResult.W_MatchResult_C.ExecuteUbergraph_W_MatchResult
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MatchResult_C::ExecuteUbergraph_W_MatchResult(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MatchResult.W_MatchResult_C.ExecuteUbergraph_W_MatchResult"));

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
