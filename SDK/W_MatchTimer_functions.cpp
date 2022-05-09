// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_MatchTimer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_MatchTimer.W_MatchTimer_C.OnGameStateAcquired_C44530BD4F02E3343FC2D88FDDD73431
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameState*              GameState                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MatchTimer_C::OnGameStateAcquired_C44530BD4F02E3343FC2D88FDDD73431(class AGameState* GameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MatchTimer.W_MatchTimer_C.OnGameStateAcquired_C44530BD4F02E3343FC2D88FDDD73431"));

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


// Function W_MatchTimer.W_MatchTimer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_MatchTimer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MatchTimer.W_MatchTimer_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MatchTimer.W_MatchTimer_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MatchTimer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MatchTimer.W_MatchTimer_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MatchTimer.W_MatchTimer_C.OnMatchStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NewMatchState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousMatchState             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MatchTimer_C::OnMatchStateChanged(const struct FName& NewMatchState, const struct FName& PreviousMatchState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MatchTimer.W_MatchTimer_C.OnMatchStateChanged"));

	struct
	{
		struct FName                   NewMatchState;
		struct FName                   PreviousMatchState;
	} params = {};

	params.NewMatchState = NewMatchState;
	params.PreviousMatchState = PreviousMatchState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MatchTimer.W_MatchTimer_C.Force Time Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MatchTimer_C::Force_Time_Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MatchTimer.W_MatchTimer_C.Force Time Update"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MatchTimer.W_MatchTimer_C.ExecuteUbergraph_W_MatchTimer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MatchTimer_C::ExecuteUbergraph_W_MatchTimer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MatchTimer.W_MatchTimer_C.ExecuteUbergraph_W_MatchTimer"));

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
