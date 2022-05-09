// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_InventoryItem_Charges_Element_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_InventoryItem_Charges_Element.W_InventoryItem_Charges_Element_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_InventoryItem_Charges_Element_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_InventoryItem_Charges_Element.W_InventoryItem_Charges_Element_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_InventoryItem_Charges_Element.W_InventoryItem_Charges_Element_C.SetProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_InventoryItem_Charges_Element_C::SetProgress(float Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_InventoryItem_Charges_Element.W_InventoryItem_Charges_Element_C.SetProgress"));

	struct
	{
		float                          Progress;
	} params = {};

	params.Progress = Progress;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_InventoryItem_Charges_Element.W_InventoryItem_Charges_Element_C.ExecuteUbergraph_W_InventoryItem_Charges_Element
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_InventoryItem_Charges_Element_C::ExecuteUbergraph_W_InventoryItem_Charges_Element(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_InventoryItem_Charges_Element.W_InventoryItem_Charges_Element_C.ExecuteUbergraph_W_InventoryItem_Charges_Element"));

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
