// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Challenges_Reward_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Challenges_Reward.W_Challenges_Reward_C.UpdateCurrencyAmount
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Currency                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Challenges_Reward_C::UpdateCurrencyAmount(int Currency)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Challenges_Reward.W_Challenges_Reward_C.UpdateCurrencyAmount"));

	struct
	{
		int                            Currency;
	} params = {};

	params.Currency = Currency;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Challenges_Reward.W_Challenges_Reward_C.UpdateExperienceAmount
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Experience                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Challenges_Reward_C::UpdateExperienceAmount(int Experience)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Challenges_Reward.W_Challenges_Reward_C.UpdateExperienceAmount"));

	struct
	{
		int                            Experience;
	} params = {};

	params.Experience = Experience;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Challenges_Reward.W_Challenges_Reward_C.ExecuteUbergraph_W_Challenges_Reward
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Challenges_Reward_C::ExecuteUbergraph_W_Challenges_Reward(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Challenges_Reward.W_Challenges_Reward_C.ExecuteUbergraph_W_Challenges_Reward"));

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
