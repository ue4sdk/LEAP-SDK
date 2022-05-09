// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_ArmoryMain_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_ArmoryMain.W_ArmoryMain_C.MenuBack
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bConsumed                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ArmoryMain_C::MenuBack(bool* bConsumed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.MenuBack"));

	struct
	{
		bool                           bConsumed;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bConsumed != nullptr)
		*bConsumed = params.bConsumed;
}


// Function W_ArmoryMain.W_ArmoryMain_C.GetEquippedPerks
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// unsigned char                  SlotID                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EPerkType                      PerkType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AProjectXCharacter*/ CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// struct FItem                   EquippedPerk                   (CPF_Parm, CPF_OutParm)
// struct FString                 ShortCode                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_ArmoryMain_C::GetEquippedPerks(unsigned char SlotID, EPerkType PerkType, class UClass* /*AProjectXCharacter*/ CharacterClass, class UClass* /*UWeaponInstance*/ WeaponClass, struct FItem* EquippedPerk, struct FString* ShortCode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.GetEquippedPerks"));

	struct
	{
		unsigned char                  SlotID;
		EPerkType                      PerkType;
		class UClass* /*AProjectXCharacter*/ CharacterClass;
		class UClass* /*UWeaponInstance*/ WeaponClass;
		struct FItem                   EquippedPerk;
		struct FString                 ShortCode;
	} params = {};

	params.SlotID = SlotID;
	params.PerkType = PerkType;
	params.CharacterClass = CharacterClass;
	params.WeaponClass = WeaponClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (EquippedPerk != nullptr)
		*EquippedPerk = params.EquippedPerk;
	if (ShortCode != nullptr)
		*ShortCode = params.ShortCode;
}


// Function W_ArmoryMain.W_ArmoryMain_C.GetLoadout
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)

void UW_ArmoryMain_C::GetLoadout()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.GetLoadout"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryMain.W_ArmoryMain_C.GetClassLevel
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int UW_ArmoryMain_C::GetClassLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.GetClassLevel"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_ArmoryMain.W_ArmoryMain_C.OnClassChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryMain_C::OnClassChanged(class UClass* /*AProjectXCharacter*/ Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.OnClassChanged"));

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


// Function W_ArmoryMain.W_ArmoryMain_C.GetWeaponNumber
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UClass* /*AProjectXCharacter*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// EEquipSlot                     Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponName                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// int                            Array_Index                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryMain_C::GetWeaponNumber(class UClass* /*AProjectXCharacter*/ Class, EEquipSlot Slot, const struct FString& WeaponName, int* Array_Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.GetWeaponNumber"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ Class;
		EEquipSlot                     Slot;
		struct FString                 WeaponName;
		int                            Array_Index;
	} params = {};

	params.Class = Class;
	params.Slot = Slot;
	params.WeaponName = WeaponName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Array_Index != nullptr)
		*Array_Index = params.Array_Index;
}


// Function W_ArmoryMain.W_ArmoryMain_C.ForceClassSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryMain_C::ForceClassSelected(class UClass* /*AProjectXCharacter*/ Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.ForceClassSelected"));

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


// Function W_ArmoryMain.W_ArmoryMain_C.BndEvt__btn_Back_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryMain_C::BndEvt__btn_Back_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.BndEvt__btn_Back_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature"));

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


// Function W_ArmoryMain.W_ArmoryMain_C.BndEvt__AppearanceButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryMain_C::BndEvt__AppearanceButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.BndEvt__AppearanceButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature"));

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


// Function W_ArmoryMain.W_ArmoryMain_C.BndEvt__W_WeaponsList_K2Node_ComponentBoundEvent_4_OnPerkSlotSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EPerkType                      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AProjectXCharacter*/ CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryMain_C::BndEvt__W_WeaponsList_K2Node_ComponentBoundEvent_4_OnPerkSlotSelected__DelegateSignature(int Slot, EPerkType Type, class UClass* /*AProjectXCharacter*/ CharacterClass, class UClass* /*UWeaponInstance*/ WeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.BndEvt__W_WeaponsList_K2Node_ComponentBoundEvent_4_OnPerkSlotSelected__DelegateSignature"));

	struct
	{
		int                            Slot;
		EPerkType                      Type;
		class UClass* /*AProjectXCharacter*/ CharacterClass;
		class UClass* /*UWeaponInstance*/ WeaponClass;
	} params = {};

	params.Slot = Slot;
	params.Type = Type;
	params.CharacterClass = CharacterClass;
	params.WeaponClass = WeaponClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryMain.W_ArmoryMain_C.BndEvt__W_WeaponsSlotButtonList_K2Node_ComponentBoundEvent_7_WeaponPerkSlotSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EPerkType                      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AProjectXCharacter*/ CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryMain_C::BndEvt__W_WeaponsSlotButtonList_K2Node_ComponentBoundEvent_7_WeaponPerkSlotSelected__DelegateSignature(int Slot, EPerkType Type, class UClass* /*AProjectXCharacter*/ CharacterClass, class UClass* /*UWeaponInstance*/ WeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.BndEvt__W_WeaponsSlotButtonList_K2Node_ComponentBoundEvent_7_WeaponPerkSlotSelected__DelegateSignature"));

	struct
	{
		int                            Slot;
		EPerkType                      Type;
		class UClass* /*AProjectXCharacter*/ CharacterClass;
		class UClass* /*UWeaponInstance*/ WeaponClass;
	} params = {};

	params.Slot = Slot;
	params.Type = Type;
	params.CharacterClass = CharacterClass;
	params.WeaponClass = WeaponClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryMain.W_ArmoryMain_C.ClearSelectedWeapon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ArmoryMain_C::ClearSelectedWeapon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.ClearSelectedWeapon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryMain.W_ArmoryMain_C.BndEvt__Augment_K2Node_ComponentBoundEvent_6_SlotSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            SelectedSlot                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EPerkType                      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryMain_C::BndEvt__Augment_K2Node_ComponentBoundEvent_6_SlotSelected__DelegateSignature(int SelectedSlot, EPerkType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.BndEvt__Augment_K2Node_ComponentBoundEvent_6_SlotSelected__DelegateSignature"));

	struct
	{
		int                            SelectedSlot;
		EPerkType                      Type;
	} params = {};

	params.SelectedSlot = SelectedSlot;
	params.Type = Type;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryMain.W_ArmoryMain_C.BndEvt__SuitModule_K2Node_ComponentBoundEvent_9_SlotSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            SelectedSlot                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EPerkType                      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryMain_C::BndEvt__SuitModule_K2Node_ComponentBoundEvent_9_SlotSelected__DelegateSignature(int SelectedSlot, EPerkType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.BndEvt__SuitModule_K2Node_ComponentBoundEvent_9_SlotSelected__DelegateSignature"));

	struct
	{
		int                            SelectedSlot;
		EPerkType                      Type;
	} params = {};

	params.SelectedSlot = SelectedSlot;
	params.Type = Type;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryMain.W_ArmoryMain_C.OnItemEquipped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 ShortCode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 EquipKey                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_ArmoryMain_C::OnItemEquipped(ECosmeticType Type, const struct FString& ShortCode, const struct FString& EquipKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.OnItemEquipped"));

	struct
	{
		ECosmeticType                  Type;
		struct FString                 ShortCode;
		struct FString                 EquipKey;
	} params = {};

	params.Type = Type;
	params.ShortCode = ShortCode;
	params.EquipKey = EquipKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryMain.W_ArmoryMain_C.UpdatePerks
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ArmoryMain_C::UpdatePerks()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.UpdatePerks"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryMain.W_ArmoryMain_C.OnActiveMenuChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EArmoryMenus>      ActiveMenuChanged              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EArmoryMenus>      PreviousMenu                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryMain_C::OnActiveMenuChanged(TEnumAsByte<EArmoryMenus> ActiveMenuChanged, TEnumAsByte<EArmoryMenus> PreviousMenu)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.OnActiveMenuChanged"));

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


// Function W_ArmoryMain.W_ArmoryMain_C.BndEvt__Contractor_K2Node_ComponentBoundEvent_10_SlotSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            SelectedSlot                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EPerkType                      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryMain_C::BndEvt__Contractor_K2Node_ComponentBoundEvent_10_SlotSelected__DelegateSignature(int SelectedSlot, EPerkType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.BndEvt__Contractor_K2Node_ComponentBoundEvent_10_SlotSelected__DelegateSignature"));

	struct
	{
		int                            SelectedSlot;
		EPerkType                      Type;
	} params = {};

	params.SelectedSlot = SelectedSlot;
	params.Type = Type;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryMain.W_ArmoryMain_C.ToggleCustomizeVisiblity
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EEquipSlot                     Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryMain_C::ToggleCustomizeVisiblity(EEquipSlot Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.ToggleCustomizeVisiblity"));

	struct
	{
		EEquipSlot                     Slot;
	} params = {};

	params.Slot = Slot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryMain.W_ArmoryMain_C.BndEvt__W_WeaponsSlotButtonList_K2Node_ComponentBoundEvent_8_WeaponEquipButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 WeaponName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// EEquipSlot                     EquipSlot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryMain_C::BndEvt__W_WeaponsSlotButtonList_K2Node_ComponentBoundEvent_8_WeaponEquipButtonPressed__DelegateSignature(const struct FString& WeaponName, EEquipSlot EquipSlot, class UClass* /*UWeaponInstance*/ WeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.BndEvt__W_WeaponsSlotButtonList_K2Node_ComponentBoundEvent_8_WeaponEquipButtonPressed__DelegateSignature"));

	struct
	{
		struct FString                 WeaponName;
		EEquipSlot                     EquipSlot;
		class UClass* /*UWeaponInstance*/ WeaponClass;
	} params = {};

	params.WeaponName = WeaponName;
	params.EquipSlot = EquipSlot;
	params.WeaponClass = WeaponClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryMain.W_ArmoryMain_C.BndEvt__W_WeaponsSlotButtonList_K2Node_ComponentBoundEvent_3_WeaponButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 WeaponName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// EEquipSlot                     EquipSlot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryMain_C::BndEvt__W_WeaponsSlotButtonList_K2Node_ComponentBoundEvent_3_WeaponButtonPressed__DelegateSignature(const struct FString& WeaponName, EEquipSlot EquipSlot, class UClass* /*UWeaponInstance*/ WeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.BndEvt__W_WeaponsSlotButtonList_K2Node_ComponentBoundEvent_3_WeaponButtonPressed__DelegateSignature"));

	struct
	{
		struct FString                 WeaponName;
		EEquipSlot                     EquipSlot;
		class UClass* /*UWeaponInstance*/ WeaponClass;
	} params = {};

	params.WeaponName = WeaponName;
	params.EquipSlot = EquipSlot;
	params.WeaponClass = WeaponClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryMain.W_ArmoryMain_C.BndEvt__W_WeaponsSlotButtonList_K2Node_ComponentBoundEvent_11_WeaponCustomizeButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 WeaponName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryMain_C::BndEvt__W_WeaponsSlotButtonList_K2Node_ComponentBoundEvent_11_WeaponCustomizeButtonPressed__DelegateSignature(const struct FString& WeaponName, class UClass* /*UWeaponInstance*/ WeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.BndEvt__W_WeaponsSlotButtonList_K2Node_ComponentBoundEvent_11_WeaponCustomizeButtonPressed__DelegateSignature"));

	struct
	{
		struct FString                 WeaponName;
		class UClass* /*UWeaponInstance*/ WeaponClass;
	} params = {};

	params.WeaponName = WeaponName;
	params.WeaponClass = WeaponClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryMain.W_ArmoryMain_C.ForceSelectWeapon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EEquipSlot                     Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_ArmoryMain_C::ForceSelectWeapon(EEquipSlot Slot, const struct FString& WeaponID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.ForceSelectWeapon"));

	struct
	{
		EEquipSlot                     Slot;
		struct FString                 WeaponID;
	} params = {};

	params.Slot = Slot;
	params.WeaponID = WeaponID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryMain.W_ArmoryMain_C.BndEvt__W_WeaponsList_K2Node_ComponentBoundEvent_1_OnWeaponSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// EEquipSlot                     Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_ArmoryMain_C::BndEvt__W_WeaponsList_K2Node_ComponentBoundEvent_1_OnWeaponSelected__DelegateSignature(EEquipSlot Slot, const struct FString& WeaponID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.BndEvt__W_WeaponsList_K2Node_ComponentBoundEvent_1_OnWeaponSelected__DelegateSignature"));

	struct
	{
		EEquipSlot                     Slot;
		struct FString                 WeaponID;
	} params = {};

	params.Slot = Slot;
	params.WeaponID = WeaponID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryMain.W_ArmoryMain_C.BndEvt__W_WeaponsSlotButtonList_K2Node_ComponentBoundEvent_12_WeaponHovered__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWeaponInstance*/ Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// EEquipSlot                     Equip_Slot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryMain_C::BndEvt__W_WeaponsSlotButtonList_K2Node_ComponentBoundEvent_12_WeaponHovered__DelegateSignature(class UClass* /*UWeaponInstance*/ Weapon, const struct FString& WeaponName, EEquipSlot Equip_Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.BndEvt__W_WeaponsSlotButtonList_K2Node_ComponentBoundEvent_12_WeaponHovered__DelegateSignature"));

	struct
	{
		class UClass* /*UWeaponInstance*/ Weapon;
		struct FString                 WeaponName;
		EEquipSlot                     Equip_Slot;
	} params = {};

	params.Weapon = Weapon;
	params.WeaponName = WeaponName;
	params.Equip_Slot = Equip_Slot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryMain.W_ArmoryMain_C.BndEvt__W_ClassIconButtons_K2Node_ComponentBoundEvent_0_OnClassSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryMain_C::BndEvt__W_ClassIconButtons_K2Node_ComponentBoundEvent_0_OnClassSelected__DelegateSignature(class UClass* /*AProjectXCharacter*/ Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.BndEvt__W_ClassIconButtons_K2Node_ComponentBoundEvent_0_OnClassSelected__DelegateSignature"));

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


// Function W_ArmoryMain.W_ArmoryMain_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_ArmoryMain_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryMain.W_ArmoryMain_C.OnWeaponListBuildFirstOptionAvailable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ArmoryMain_C::OnWeaponListBuildFirstOptionAvailable()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.OnWeaponListBuildFirstOptionAvailable"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryMain.W_ArmoryMain_C.ExecuteUbergraph_W_ArmoryMain
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryMain_C::ExecuteUbergraph_W_ArmoryMain(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.ExecuteUbergraph_W_ArmoryMain"));

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


// Function W_ArmoryMain.W_ArmoryMain_C.SlotSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EPerkType                      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AProjectXCharacter*/ CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryMain_C::SlotSelected__DelegateSignature(int Slot, EPerkType Type, class UClass* /*AProjectXCharacter*/ CharacterClass, class UClass* /*UWeaponInstance*/ WeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.SlotSelected__DelegateSignature"));

	struct
	{
		int                            Slot;
		EPerkType                      Type;
		class UClass* /*AProjectXCharacter*/ CharacterClass;
		class UClass* /*UWeaponInstance*/ WeaponClass;
	} params = {};

	params.Slot = Slot;
	params.Type = Type;
	params.CharacterClass = CharacterClass;
	params.WeaponClass = WeaponClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryMain.W_ArmoryMain_C.SaveButtonPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ArmoryMain_C::SaveButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.SaveButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryMain.W_ArmoryMain_C.ClassSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ ClassSelected                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryMain_C::ClassSelected__DelegateSignature(class UClass* /*AProjectXCharacter*/ ClassSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.ClassSelected__DelegateSignature"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ ClassSelected;
	} params = {};

	params.ClassSelected = ClassSelected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryMain.W_ArmoryMain_C.AppearanceButtonPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ArmoryMain_C::AppearanceButtonPressed__DelegateSignature(bool Weapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.AppearanceButtonPressed__DelegateSignature"));

	struct
	{
		bool                           Weapon;
	} params = {};

	params.Weapon = Weapon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryMain.W_ArmoryMain_C.BackButtonPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ArmoryMain_C::BackButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.BackButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryMain.W_ArmoryMain_C.WeaponSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWeaponInstance*/ WeaponSelected                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EEquipSlot                     Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  WeaponIDNumber                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryMain_C::WeaponSelected__DelegateSignature(class UClass* /*UWeaponInstance*/ WeaponSelected, EEquipSlot Slot, unsigned char WeaponIDNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryMain.W_ArmoryMain_C.WeaponSelected__DelegateSignature"));

	struct
	{
		class UClass* /*UWeaponInstance*/ WeaponSelected;
		EEquipSlot                     Slot;
		unsigned char                  WeaponIDNumber;
	} params = {};

	params.WeaponSelected = WeaponSelected;
	params.Slot = Slot;
	params.WeaponIDNumber = WeaponIDNumber;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
