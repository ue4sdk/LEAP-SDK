// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_GeneralScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_GeneralScreen.W_GeneralScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_GeneralScreen_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GeneralScreen.W_GeneralScreen_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GeneralScreen.W_GeneralScreen_C.BndEvt__W_CosmeticTypesButtonList_K2Node_ComponentBoundEvent_0_OnTypeButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 CosmeticType                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_GeneralScreen_C::BndEvt__W_CosmeticTypesButtonList_K2Node_ComponentBoundEvent_0_OnTypeButtonPressed__DelegateSignature(const struct FString& CosmeticType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GeneralScreen.W_GeneralScreen_C.BndEvt__W_CosmeticTypesButtonList_K2Node_ComponentBoundEvent_0_OnTypeButtonPressed__DelegateSignature"));

	struct
	{
		struct FString                 CosmeticType;
	} params = {};

	params.CosmeticType = CosmeticType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GeneralScreen.W_GeneralScreen_C.InitClass
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ Player_Class                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_GeneralScreen_C::InitClass(class UClass* /*AProjectXCharacter*/ Player_Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GeneralScreen.W_GeneralScreen_C.InitClass"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ Player_Class;
	} params = {};

	params.Player_Class = Player_Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GeneralScreen.W_GeneralScreen_C.BndEvt__W_CosmeticItemListGrid_K2Node_ComponentBoundEvent_2_ItemClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// unsigned char                  Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UW_ArmoryIcon_C*         NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_GeneralScreen_C::BndEvt__W_CosmeticItemListGrid_K2Node_ComponentBoundEvent_2_ItemClicked__DelegateSignature(const struct FString& ItemId, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, class UW_ArmoryIcon_C* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GeneralScreen.W_GeneralScreen_C.BndEvt__W_CosmeticItemListGrid_K2Node_ComponentBoundEvent_2_ItemClicked__DelegateSignature"));

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


// Function W_GeneralScreen.W_GeneralScreen_C.EquipCosmeticItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 CosmeticID                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// unsigned char                  SlotID                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UW_ArmoryIcon_C*         Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_GeneralScreen_C::EquipCosmeticItem(class UClass* /*AProjectXCharacter*/ CharacterClass, ECosmeticType Type, const struct FString& CosmeticID, const struct FString& WeaponName, unsigned char SlotID, class UW_ArmoryIcon_C* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GeneralScreen.W_GeneralScreen_C.EquipCosmeticItem"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ CharacterClass;
		ECosmeticType                  Type;
		struct FString                 CosmeticID;
		struct FString                 WeaponName;
		unsigned char                  SlotID;
		class UW_ArmoryIcon_C*         Widget;
	} params = {};

	params.CharacterClass = CharacterClass;
	params.Type = Type;
	params.CosmeticID = CosmeticID;
	params.WeaponName = WeaponName;
	params.SlotID = SlotID;
	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GeneralScreen.W_GeneralScreen_C.BndEvt__btn_Back_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_GeneralScreen_C::BndEvt__btn_Back_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GeneralScreen.W_GeneralScreen_C.BndEvt__btn_Back_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature"));

	struct
	{
		struct FString                 ID;
		struct FString                 Name;
		ECosmeticType                  Type;
		class UClass* /*UUserWidget*/  Widget;
	} params = {};

	params.ID = ID;
	params.Name = Name;
	params.Type = Type;
	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GeneralScreen.W_GeneralScreen_C.UpdateTauntButtons
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TauntSlotsVisible              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_GeneralScreen_C::UpdateTauntButtons(bool TauntSlotsVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GeneralScreen.W_GeneralScreen_C.UpdateTauntButtons"));

	struct
	{
		bool                           TauntSlotsVisible;
	} params = {};

	params.TauntSlotsVisible = TauntSlotsVisible;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GeneralScreen.W_GeneralScreen_C.BndEvt__W_TauntSlotButtons_K2Node_ComponentBoundEvent_3_OnSlotSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_GeneralScreen_C::BndEvt__W_TauntSlotButtons_K2Node_ComponentBoundEvent_3_OnSlotSelected__DelegateSignature(unsigned char Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GeneralScreen.W_GeneralScreen_C.BndEvt__W_TauntSlotButtons_K2Node_ComponentBoundEvent_3_OnSlotSelected__DelegateSignature"));

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


// Function W_GeneralScreen.W_GeneralScreen_C.OnActiveMenuChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EArmoryMenus>      ActiveMenuChanged              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EArmoryMenus>      PreviousMenu                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_GeneralScreen_C::OnActiveMenuChanged(TEnumAsByte<EArmoryMenus> ActiveMenuChanged, TEnumAsByte<EArmoryMenus> PreviousMenu)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GeneralScreen.W_GeneralScreen_C.OnActiveMenuChanged"));

	struct
	{
		TEnumAsByte<EArmoryMenus>      ActiveMenuChanged;
		TEnumAsByte<EArmoryMenus>      PreviousMenu;
	} params = {};

	params.ActiveMenuChanged = ActiveMenuChanged;
	params.PreviousMenu = PreviousMenu;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GeneralScreen.W_GeneralScreen_C.BndEvt__W_ClassIconButtons_K2Node_ComponentBoundEvent_4_OnClassSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_GeneralScreen_C::BndEvt__W_ClassIconButtons_K2Node_ComponentBoundEvent_4_OnClassSelected__DelegateSignature(class UClass* /*AProjectXCharacter*/ Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GeneralScreen.W_GeneralScreen_C.BndEvt__W_ClassIconButtons_K2Node_ComponentBoundEvent_4_OnClassSelected__DelegateSignature"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ Class;
	} params = {};

	params.Class = Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GeneralScreen.W_GeneralScreen_C.BndEvt__W_CosmeticItemListGrid_K2Node_ComponentBoundEvent_6_ItemHovered__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bHovered                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// unsigned char                  Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UW_ArmoryIcon_C*         Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_GeneralScreen_C::BndEvt__W_CosmeticItemListGrid_K2Node_ComponentBoundEvent_6_ItemHovered__DelegateSignature(bool bHovered, const struct FString& ItemId, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, class UW_ArmoryIcon_C* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GeneralScreen.W_GeneralScreen_C.BndEvt__W_CosmeticItemListGrid_K2Node_ComponentBoundEvent_6_ItemHovered__DelegateSignature"));

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


// Function W_GeneralScreen.W_GeneralScreen_C.ExecuteUbergraph_W_GeneralScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_GeneralScreen_C::ExecuteUbergraph_W_GeneralScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GeneralScreen.W_GeneralScreen_C.ExecuteUbergraph_W_GeneralScreen"));

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


// Function W_GeneralScreen.W_GeneralScreen_C.ClassSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ PlayerClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_GeneralScreen_C::ClassSelected__DelegateSignature(class UClass* /*AProjectXCharacter*/ PlayerClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GeneralScreen.W_GeneralScreen_C.ClassSelected__DelegateSignature"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ PlayerClass;
	} params = {};

	params.PlayerClass = PlayerClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GeneralScreen.W_GeneralScreen_C.SlotSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_GeneralScreen_C::SlotSelected__DelegateSignature(unsigned char Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GeneralScreen.W_GeneralScreen_C.SlotSelected__DelegateSignature"));

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


// Function W_GeneralScreen.W_GeneralScreen_C.TypeSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_GeneralScreen_C::TypeSelected__DelegateSignature(ECosmeticType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GeneralScreen.W_GeneralScreen_C.TypeSelected__DelegateSignature"));

	struct
	{
		ECosmeticType                  Type;
	} params = {};

	params.Type = Type;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GeneralScreen.W_GeneralScreen_C.ItemSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Selected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// unsigned char                  Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 ShortCode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UClass* /*AProjectXCharacter*/ NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_GeneralScreen_C::ItemSelected__DelegateSignature(bool Selected, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, const struct FString& ShortCode, class UClass* /*AProjectXCharacter*/ NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GeneralScreen.W_GeneralScreen_C.ItemSelected__DelegateSignature"));

	struct
	{
		bool                           Selected;
		ECosmeticType                  Type;
		struct FString                 WeaponID;
		unsigned char                  Slot;
		struct FString                 ShortCode;
		class UClass* /*AProjectXCharacter*/ NewParam;
	} params = {};

	params.Selected = Selected;
	params.Type = Type;
	params.WeaponID = WeaponID;
	params.Slot = Slot;
	params.ShortCode = ShortCode;
	params.NewParam = NewParam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GeneralScreen.W_GeneralScreen_C.EquipButtonPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_GeneralScreen_C::EquipButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GeneralScreen.W_GeneralScreen_C.EquipButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
