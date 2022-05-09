// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_UI_ArmoryTypeButton_Background_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_UI_ArmoryTypeButton_Background.W_UI_ArmoryTypeButton_Background_C.SetActive
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_UI_ArmoryTypeButton_Background_C::SetActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_ArmoryTypeButton_Background.W_UI_ArmoryTypeButton_Background_C.SetActive"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_ArmoryTypeButton_Background.W_UI_ArmoryTypeButton_Background_C.ExecuteUbergraph_W_UI_ArmoryTypeButton_Background
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_ArmoryTypeButton_Background_C::ExecuteUbergraph_W_UI_ArmoryTypeButton_Background(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_ArmoryTypeButton_Background.W_UI_ArmoryTypeButton_Background_C.ExecuteUbergraph_W_UI_ArmoryTypeButton_Background"));

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
