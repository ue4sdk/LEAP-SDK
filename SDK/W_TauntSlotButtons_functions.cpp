// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_TauntSlotButtons_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_TauntSlotButtons.W_TauntSlotButtons_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_TauntSlotButtons_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TauntSlotButtons.W_TauntSlotButtons_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TauntSlotButtons.W_TauntSlotButtons_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_TauntSlotButtons_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TauntSlotButtons.W_TauntSlotButtons_C.Init"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TauntSlotButtons.W_TauntSlotButtons_C.OnTauntSlotPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  SlotSelected                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_TauntSlotButtons_C::OnTauntSlotPressed(unsigned char SlotSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TauntSlotButtons.W_TauntSlotButtons_C.OnTauntSlotPressed"));

	struct
	{
		unsigned char                  SlotSelected;
	} params = {};

	params.SlotSelected = SlotSelected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TauntSlotButtons.W_TauntSlotButtons_C.Set Slot to Waiting
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsWaiting                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_TauntSlotButtons_C::Set_Slot_to_Waiting(unsigned char Slot, bool bIsWaiting)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TauntSlotButtons.W_TauntSlotButtons_C.Set Slot to Waiting"));

	struct
	{
		unsigned char                  Slot;
		bool                           bIsWaiting;
	} params = {};

	params.Slot = Slot;
	params.bIsWaiting = bIsWaiting;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TauntSlotButtons.W_TauntSlotButtons_C.ExecuteUbergraph_W_TauntSlotButtons
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_TauntSlotButtons_C::ExecuteUbergraph_W_TauntSlotButtons(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TauntSlotButtons.W_TauntSlotButtons_C.ExecuteUbergraph_W_TauntSlotButtons"));

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


// Function W_TauntSlotButtons.W_TauntSlotButtons_C.OnSlotSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_TauntSlotButtons_C::OnSlotSelected__DelegateSignature(unsigned char Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TauntSlotButtons.W_TauntSlotButtons_C.OnSlotSelected__DelegateSignature"));

	struct
	{
		unsigned char                  Slot;
	} params = {};

	params.Slot = Slot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
