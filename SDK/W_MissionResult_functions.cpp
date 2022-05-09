// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_MissionResult_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_MissionResult.W_MissionResult_C.OnGameStateAcquired_1B4AECA1477A122D6077CFB0E0F4ED05
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameState*              GameState                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MissionResult_C::OnGameStateAcquired_1B4AECA1477A122D6077CFB0E0F4ED05(class AGameState* GameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MissionResult.W_MissionResult_C.OnGameStateAcquired_1B4AECA1477A122D6077CFB0E0F4ED05"));

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


// Function W_MissionResult.W_MissionResult_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_MissionResult_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MissionResult.W_MissionResult_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MissionResult.W_MissionResult_C.UpdateText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            WinningTeam                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MissionResult_C::UpdateText(int WinningTeam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MissionResult.W_MissionResult_C.UpdateText"));

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


// Function W_MissionResult.W_MissionResult_C.ExecuteUbergraph_W_MissionResult
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MissionResult_C::ExecuteUbergraph_W_MissionResult(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MissionResult.W_MissionResult_C.ExecuteUbergraph_W_MissionResult"));

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
