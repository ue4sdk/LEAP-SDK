// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_RewardRow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_RewardRow.W_RewardRow_C.AddSpacer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_RewardRow_C::AddSpacer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_RewardRow.W_RewardRow_C.AddSpacer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_RewardRow.W_RewardRow_C.Add Children
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_RewardIcon_C*         W_RewardIcon                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_RewardRow_C::Add_Children(class UW_RewardIcon_C* W_RewardIcon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_RewardRow.W_RewardRow_C.Add Children"));

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


// Function W_RewardRow.W_RewardRow_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_RewardRow_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_RewardRow.W_RewardRow_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_RewardRow.W_RewardRow_C.ExecuteUbergraph_W_RewardRow
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_RewardRow_C::ExecuteUbergraph_W_RewardRow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_RewardRow.W_RewardRow_C.ExecuteUbergraph_W_RewardRow"));

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
