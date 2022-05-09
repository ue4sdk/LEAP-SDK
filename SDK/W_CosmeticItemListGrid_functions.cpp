// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_CosmeticItemListGrid_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.UpdateEquippedTaunts
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_CosmeticItemListGrid_C::UpdateEquippedTaunts()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.UpdateEquippedTaunts"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.Is Equipped
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ShortCode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UW_CosmeticItemListGrid_C::Is_Equipped(const struct FString& ShortCode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.Is Equipped"));

	struct
	{
		struct FString                 ShortCode;
		bool                           ReturnValue;
	} params = {};

	params.ShortCode = ShortCode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.SelectPadding
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FMargin                 Margin                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_CosmeticItemListGrid_C::SelectPadding(struct FMargin* Margin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.SelectPadding"));

	struct
	{
		struct FMargin                 Margin;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Margin != nullptr)
		*Margin = params.Margin;
}


// Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.CreateStandardItemIcon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InputPin                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FScriptDelegate         ClickedEvent                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor)
// struct FScriptDelegate         HoveredEvent                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor)

void UW_CosmeticItemListGrid_C::CreateStandardItemIcon(const struct FString& InputPin, const struct FScriptDelegate& ClickedEvent, const struct FScriptDelegate& HoveredEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.CreateStandardItemIcon"));

	struct
	{
		struct FString                 InputPin;
		struct FScriptDelegate         ClickedEvent;
		struct FScriptDelegate         HoveredEvent;
	} params = {};

	params.InputPin = InputPin;
	params.ClickedEvent = ClickedEvent;
	params.HoveredEvent = HoveredEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_CosmeticItemListGrid_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.CreateItemList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDataTable*              Table                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AProjectXCharacter*/ PlayerClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// unsigned char                  SlotID                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CosmeticItemListGrid_C::CreateItemList(class UDataTable* Table, ECosmeticType Type, class UClass* /*AProjectXCharacter*/ PlayerClass, const struct FString& WeaponID, unsigned char SlotID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.CreateItemList"));

	struct
	{
		class UDataTable*              Table;
		ECosmeticType                  Type;
		class UClass* /*AProjectXCharacter*/ PlayerClass;
		struct FString                 WeaponID;
		unsigned char                  SlotID;
	} params = {};

	params.Table = Table;
	params.Type = Type;
	params.PlayerClass = PlayerClass;
	params.WeaponID = WeaponID;
	params.SlotID = SlotID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.ClearList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_CosmeticItemListGrid_C::ClearList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.ClearList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.UpdateEquip
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_ArmoryIcon_C*         EquippedWidget                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CosmeticItemListGrid_C::UpdateEquip(class UW_ArmoryIcon_C* EquippedWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.UpdateEquip"));

	struct
	{
		class UW_ArmoryIcon_C*         EquippedWidget;
	} params = {};

	params.EquippedWidget = EquippedWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.OnItemClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// unsigned char                  Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UW_ArmoryIcon_C*         NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CosmeticItemListGrid_C::OnItemClicked(const struct FString& ItemId, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, class UW_ArmoryIcon_C* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.OnItemClicked"));

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


// Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.OnItemHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Hovered                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UW_ArmoryIcon_C*         Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CosmeticItemListGrid_C::OnItemHovered(bool Hovered, const struct FString& ItemId, ECosmeticType Type, const struct FString& WeaponID, class UW_ArmoryIcon_C* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.OnItemHovered"));

	struct
	{
		bool                           Hovered;
		struct FString                 ItemId;
		ECosmeticType                  Type;
		struct FString                 WeaponID;
		class UW_ArmoryIcon_C*         Widget;
	} params = {};

	params.Hovered = Hovered;
	params.ItemId = ItemId;
	params.Type = Type;
	params.WeaponID = WeaponID;
	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.Next Loop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_CosmeticItemListGrid_C::Next_Loop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.Next Loop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.ExecuteUbergraph_W_CosmeticItemListGrid
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CosmeticItemListGrid_C::ExecuteUbergraph_W_CosmeticItemListGrid(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.ExecuteUbergraph_W_CosmeticItemListGrid"));

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


// Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.ItemHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bHovered                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// unsigned char                  Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UW_ArmoryIcon_C*         Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CosmeticItemListGrid_C::ItemHovered__DelegateSignature(bool bHovered, const struct FString& ItemId, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, class UW_ArmoryIcon_C* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.ItemHovered__DelegateSignature"));

	struct
	{
		bool                           bHovered;
		struct FString                 ItemId;
		ECosmeticType                  Type;
		struct FString                 WeaponID;
		unsigned char                  Slot;
		class UW_ArmoryIcon_C*         Widget;
	} params = {};

	params.bHovered = bHovered;
	params.ItemId = ItemId;
	params.Type = Type;
	params.WeaponID = WeaponID;
	params.Slot = Slot;
	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.UpdateEquipped__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_CosmeticItemListGrid_C::UpdateEquipped__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.UpdateEquipped__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.ItemClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// unsigned char                  Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UW_ArmoryIcon_C*         NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_CosmeticItemListGrid_C::ItemClicked__DelegateSignature(const struct FString& ItemId, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, class UW_ArmoryIcon_C* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_CosmeticItemListGrid.W_CosmeticItemListGrid_C.ItemClicked__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
