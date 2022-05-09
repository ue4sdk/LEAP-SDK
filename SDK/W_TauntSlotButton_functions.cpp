// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_TauntSlotButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_TauntSlotButton.W_TauntSlotButton_C.BndEvt__W_ArmoryIcon_K2Node_ComponentBoundEvent_0_ItemPressed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// unsigned char                  Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UW_ArmoryIcon_C*         NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_TauntSlotButton_C::BndEvt__W_ArmoryIcon_K2Node_ComponentBoundEvent_0_ItemPressed__DelegateSignature(const struct FString& ItemId, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, class UW_ArmoryIcon_C* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TauntSlotButton.W_TauntSlotButton_C.BndEvt__W_ArmoryIcon_K2Node_ComponentBoundEvent_0_ItemPressed__DelegateSignature"));

	struct
	{
		struct FString                 ItemId;
		ECosmeticType                  Type;
		struct FString                 WeaponID;
		unsigned char                  Slot;
		class UW_ArmoryIcon_C*         NewParam;
	} params = {};

	params.ItemId = ItemId;
	params.Type = Type;
	params.WeaponID = WeaponID;
	params.Slot = Slot;
	params.NewParam = NewParam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TauntSlotButton.W_TauntSlotButton_C.SetTitle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   NewText                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_TauntSlotButton_C::SetTitle(const struct FText& NewText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TauntSlotButton.W_TauntSlotButton_C.SetTitle"));

	struct
	{
		struct FText                   NewText;
	} params = {};

	params.NewText = NewText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TauntSlotButton.W_TauntSlotButton_C.Toggle waiting on selection
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsWaiting                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_TauntSlotButton_C::Toggle_waiting_on_selection(bool bIsWaiting)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TauntSlotButton.W_TauntSlotButton_C.Toggle waiting on selection"));

	struct
	{
		bool                           bIsWaiting;
	} params = {};

	params.bIsWaiting = bIsWaiting;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_TauntSlotButton.W_TauntSlotButton_C.ExecuteUbergraph_W_TauntSlotButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_TauntSlotButton_C::ExecuteUbergraph_W_TauntSlotButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TauntSlotButton.W_TauntSlotButton_C.ExecuteUbergraph_W_TauntSlotButton"));

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


// Function W_TauntSlotButton.W_TauntSlotButton_C.TauntSlotSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  SlotSelected                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_TauntSlotButton_C::TauntSlotSelected__DelegateSignature(unsigned char SlotSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_TauntSlotButton.W_TauntSlotButton_C.TauntSlotSelected__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
