// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_CurrencyRewardIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_CurrencyRewardIcon.W_CurrencyRewardIcon_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Currency                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CurrencyRewardIcon_C::Init(int Currency)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CurrencyRewardIcon.W_CurrencyRewardIcon_C.Init"));

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


// Function W_CurrencyRewardIcon.W_CurrencyRewardIcon_C.ExecuteUbergraph_W_CurrencyRewardIcon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CurrencyRewardIcon_C::ExecuteUbergraph_W_CurrencyRewardIcon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CurrencyRewardIcon.W_CurrencyRewardIcon_C.ExecuteUbergraph_W_CurrencyRewardIcon"));

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
