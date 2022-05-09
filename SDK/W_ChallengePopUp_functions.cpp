// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_ChallengePopUp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_ChallengePopUp.W_ChallengePopUp_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_ChallengePopUp_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengePopUp.W_ChallengePopUp_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengePopUp.W_ChallengePopUp_C.OnChallengeProgressUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ChallengeID                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ChallengePopUp_C::OnChallengeProgressUpdated(const struct FString& ChallengeID, int Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengePopUp.W_ChallengePopUp_C.OnChallengeProgressUpdated"));

	struct
	{
		struct FString                 ChallengeID;
		int                            Progress;
	} params = {};

	params.ChallengeID = ChallengeID;
	params.Progress = Progress;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengePopUp.W_ChallengePopUp_C.OnEntryFadedOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ChallengeID                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_ChallengePopUp_C::OnEntryFadedOut(const struct FString& ChallengeID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengePopUp.W_ChallengePopUp_C.OnEntryFadedOut"));

	struct
	{
		struct FString                 ChallengeID;
	} params = {};

	params.ChallengeID = ChallengeID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ChallengePopUp.W_ChallengePopUp_C.ExecuteUbergraph_W_ChallengePopUp
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ChallengePopUp_C::ExecuteUbergraph_W_ChallengePopUp(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ChallengePopUp.W_ChallengePopUp_C.ExecuteUbergraph_W_ChallengePopUp"));

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
