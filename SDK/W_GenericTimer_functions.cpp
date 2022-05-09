// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_GenericTimer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_GenericTimer.W_GenericTimer_C.OnGameStateAcquired_8B162EBF4B34DFD679D6C797BB1C9EA0
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameState*              GameState                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_GenericTimer_C::OnGameStateAcquired_8B162EBF4B34DFD679D6C797BB1C9EA0(class AGameState* GameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GenericTimer.W_GenericTimer_C.OnGameStateAcquired_8B162EBF4B34DFD679D6C797BB1C9EA0"));

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


// Function W_GenericTimer.W_GenericTimer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_GenericTimer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GenericTimer.W_GenericTimer_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GenericTimer.W_GenericTimer_C.TimerStarted
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          EndTime                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   TimerDescription               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UW_GenericTimer_C::TimerStarted(float EndTime, const struct FText& TimerDescription)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GenericTimer.W_GenericTimer_C.TimerStarted"));

	struct
	{
		float                          EndTime;
		struct FText                   TimerDescription;
	} params = {};

	params.EndTime = EndTime;
	params.TimerDescription = TimerDescription;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GenericTimer.W_GenericTimer_C.ExecuteUbergraph_W_GenericTimer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_GenericTimer_C::ExecuteUbergraph_W_GenericTimer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GenericTimer.W_GenericTimer_C.ExecuteUbergraph_W_GenericTimer"));

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
