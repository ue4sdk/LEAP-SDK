// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_XP_CalcEntryText_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_XP_CalcEntryText.W_XP_CalcEntryText_C.UpdateXPText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewXPAmount                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Multiplier                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_XP_CalcEntryText_C::UpdateXPText(int NewXPAmount, float Multiplier)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_XP_CalcEntryText.W_XP_CalcEntryText_C.UpdateXPText"));

	struct
	{
		int                            NewXPAmount;
		float                          Multiplier;
	} params = {};

	params.NewXPAmount = NewXPAmount;
	params.Multiplier = Multiplier;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_XP_CalcEntryText.W_XP_CalcEntryText_C.InitFromPool
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_XP_CalcEntryText_C::InitFromPool()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_XP_CalcEntryText.W_XP_CalcEntryText_C.InitFromPool"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_XP_CalcEntryText.W_XP_CalcEntryText_C.ExecuteUbergraph_W_XP_CalcEntryText
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_XP_CalcEntryText_C::ExecuteUbergraph_W_XP_CalcEntryText(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_XP_CalcEntryText.W_XP_CalcEntryText_C.ExecuteUbergraph_W_XP_CalcEntryText"));

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
