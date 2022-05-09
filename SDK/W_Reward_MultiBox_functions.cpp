// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Reward_MultiBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Reward_MultiBox.W_Reward_MultiBox_C.AddNewRow
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bAddTopPadding                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Reward_MultiBox_C::AddNewRow(bool bAddTopPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reward_MultiBox.W_Reward_MultiBox_C.AddNewRow"));

	struct
	{
		bool                           bAddTopPadding;
	} params = {};

	params.bAddTopPadding = bAddTopPadding;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Reward_MultiBox.W_Reward_MultiBox_C.AddSpacer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Reward_MultiBox_C::AddSpacer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reward_MultiBox.W_Reward_MultiBox_C.AddSpacer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Reward_MultiBox.W_Reward_MultiBox_C.Add Children
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_RewardIcon_C*         W_RewardIcon                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reward_MultiBox_C::Add_Children(class UW_RewardIcon_C* W_RewardIcon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reward_MultiBox.W_Reward_MultiBox_C.Add Children"));

	struct
	{
		class UW_RewardIcon_C*         W_RewardIcon;
	} params = {};

	params.W_RewardIcon = W_RewardIcon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Reward_MultiBox.W_Reward_MultiBox_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Reward_MultiBox_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reward_MultiBox.W_Reward_MultiBox_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Reward_MultiBox.W_Reward_MultiBox_C.DisplayRewards
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FString>         ID                             (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            Currency                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Experience                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reward_MultiBox_C::DisplayRewards(TArray<struct FString> ID, int Currency, int Experience)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reward_MultiBox.W_Reward_MultiBox_C.DisplayRewards"));

	struct
	{
		TArray<struct FString>         ID;
		int                            Currency;
		int                            Experience;
	} params = {};

	params.ID = ID;
	params.Currency = Currency;
	params.Experience = Experience;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Reward_MultiBox.W_Reward_MultiBox_C.ExecuteUbergraph_W_Reward_MultiBox
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Reward_MultiBox_C::ExecuteUbergraph_W_Reward_MultiBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Reward_MultiBox.W_Reward_MultiBox_C.ExecuteUbergraph_W_Reward_MultiBox"));

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
