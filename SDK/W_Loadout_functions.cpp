// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Loadout_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Loadout.W_Loadout_C.MenuBack
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bConsumed                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Loadout_C::MenuBack(bool* bConsumed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.MenuBack"));

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


// Function W_Loadout.W_Loadout_C.ChangeActiveMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EArmoryMenus>      NewActiveMenu                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Loadout_C::ChangeActiveMenu(TEnumAsByte<EArmoryMenus> NewActiveMenu)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.ChangeActiveMenu"));

	struct
	{
		TEnumAsByte<EArmoryMenus>      NewActiveMenu;
	} params = {};

	params.NewActiveMenu = NewActiveMenu;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Loadout.W_Loadout_C.GetWeaponNumber
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UClass* /*AProjectXCharacter*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// EEquipSlot                     Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponName                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// int                            Array_Index                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Loadout_C::GetWeaponNumber(class UClass* /*AProjectXCharacter*/ Class, EEquipSlot Slot, const struct FString& WeaponName, int* Array_Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.GetWeaponNumber"));

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


// Function W_Loadout.W_Loadout_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Loadout_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Loadout.W_Loadout_C.BndEvt__W_ArmoryMain_K2Node_ComponentBoundEvent_2_WeaponSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWeaponInstance*/ WeaponSelected                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EEquipSlot                     Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  WeaponIDNumber                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_ArmoryMain_K2Node_ComponentBoundEvent_2_WeaponSelected__DelegateSignature(class UClass* /*UWeaponInstance*/ WeaponSelected, EEquipSlot Slot, unsigned char WeaponIDNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.BndEvt__W_ArmoryMain_K2Node_ComponentBoundEvent_2_WeaponSelected__DelegateSignature"));

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


// Function W_Loadout.W_Loadout_C.BndEvt__W_WeaponScreen_K2Node_ComponentBoundEvent_4_EquipButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Loadout_C::BndEvt__W_WeaponScreen_K2Node_ComponentBoundEvent_4_EquipButtonPressed__DelegateSignature(bool NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.BndEvt__W_WeaponScreen_K2Node_ComponentBoundEvent_4_EquipButtonPressed__DelegateSignature"));

	struct
	{
		bool                           NewParam;
	} params = {};

	params.NewParam = NewParam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Loadout.W_Loadout_C.OnVisible
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Loadout_C::OnVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.OnVisible"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Loadout.W_Loadout_C.BndEvt__W_ArmoryMain_K2Node_ComponentBoundEvent_1_AppearanceButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Loadout_C::BndEvt__W_ArmoryMain_K2Node_ComponentBoundEvent_1_AppearanceButtonPressed__DelegateSignature(bool Weapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.BndEvt__W_ArmoryMain_K2Node_ComponentBoundEvent_1_AppearanceButtonPressed__DelegateSignature"));

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


// Function W_Loadout.W_Loadout_C.BndEvt__W_AppearanceScreen_K2Node_ComponentBoundEvent_3_EquipButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_Loadout_C::BndEvt__W_AppearanceScreen_K2Node_ComponentBoundEvent_3_EquipButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.BndEvt__W_AppearanceScreen_K2Node_ComponentBoundEvent_3_EquipButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Loadout.W_Loadout_C.BndEvt__W_ArmoryMain_K2Node_ComponentBoundEvent_5_ClassSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ ClassSelected                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_ArmoryMain_K2Node_ComponentBoundEvent_5_ClassSelected__DelegateSignature(class UClass* /*AProjectXCharacter*/ ClassSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.BndEvt__W_ArmoryMain_K2Node_ComponentBoundEvent_5_ClassSelected__DelegateSignature"));

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


// Function W_Loadout.W_Loadout_C.BndEvt__W_WeaponScreen_K2Node_ComponentBoundEvent_6_TypeSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// ECosmeticType                  CosmeticType                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_WeaponScreen_K2Node_ComponentBoundEvent_6_TypeSelected__DelegateSignature(ECosmeticType CosmeticType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.BndEvt__W_WeaponScreen_K2Node_ComponentBoundEvent_6_TypeSelected__DelegateSignature"));

	struct
	{
		ECosmeticType                  CosmeticType;
	} params = {};

	params.CosmeticType = CosmeticType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Loadout.W_Loadout_C.BndEvt__W_WeaponScreen_K2Node_ComponentBoundEvent_7_ItemSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           Selected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// unsigned char                  Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 ShortCode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UClass* /*AProjectXCharacter*/ NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_WeaponScreen_K2Node_ComponentBoundEvent_7_ItemSelected__DelegateSignature(bool Selected, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, const struct FString& ShortCode, class UClass* /*AProjectXCharacter*/ NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.BndEvt__W_WeaponScreen_K2Node_ComponentBoundEvent_7_ItemSelected__DelegateSignature"));

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


// Function W_Loadout.W_Loadout_C.BndEvt__W_AppearanceScreen_K2Node_ComponentBoundEvent_8_ItemSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           Selected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// unsigned char                  Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 ShortCode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UClass* /*AProjectXCharacter*/ NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_AppearanceScreen_K2Node_ComponentBoundEvent_8_ItemSelected__DelegateSignature(bool Selected, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, const struct FString& ShortCode, class UClass* /*AProjectXCharacter*/ NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.BndEvt__W_AppearanceScreen_K2Node_ComponentBoundEvent_8_ItemSelected__DelegateSignature"));

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


// Function W_Loadout.W_Loadout_C.BndEvt__W_AppearanceScreen_K2Node_ComponentBoundEvent_9_TypeSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_AppearanceScreen_K2Node_ComponentBoundEvent_9_TypeSelected__DelegateSignature(ECosmeticType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.BndEvt__W_AppearanceScreen_K2Node_ComponentBoundEvent_9_TypeSelected__DelegateSignature"));

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


// Function W_Loadout.W_Loadout_C.BndEvt__W_ArmoryMain_K2Node_ComponentBoundEvent_10_BackButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_Loadout_C::BndEvt__W_ArmoryMain_K2Node_ComponentBoundEvent_10_BackButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.BndEvt__W_ArmoryMain_K2Node_ComponentBoundEvent_10_BackButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Loadout.W_Loadout_C.BndEvt__W_ArmoryMain_K2Node_ComponentBoundEvent_0_SlotSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EPerkType                      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AProjectXCharacter*/ CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_ArmoryMain_K2Node_ComponentBoundEvent_0_SlotSelected__DelegateSignature(int Slot, EPerkType Type, class UClass* /*AProjectXCharacter*/ CharacterClass, class UClass* /*UWeaponInstance*/ WeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.BndEvt__W_ArmoryMain_K2Node_ComponentBoundEvent_0_SlotSelected__DelegateSignature"));

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


// Function W_Loadout.W_Loadout_C.BndEvt__W_PerkScreen_K2Node_ComponentBoundEvent_11_BackButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_Loadout_C::BndEvt__W_PerkScreen_K2Node_ComponentBoundEvent_11_BackButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.BndEvt__W_PerkScreen_K2Node_ComponentBoundEvent_11_BackButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Loadout.W_Loadout_C.BndEvt__W_PerkScreen_K2Node_ComponentBoundEvent_12_OnPerkClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPerkAssetBase*          Perk                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            SlotNumber                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AProjectXCharacter*/ CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponInstance                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EPerkType                      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_PerkScreen_K2Node_ComponentBoundEvent_12_OnPerkClicked__DelegateSignature(class UPerkAssetBase* Perk, int SlotNumber, class UClass* /*AProjectXCharacter*/ CharacterClass, class UClass* /*UWeaponInstance*/ WeaponInstance, EPerkType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.BndEvt__W_PerkScreen_K2Node_ComponentBoundEvent_12_OnPerkClicked__DelegateSignature"));

	struct
	{
		class UPerkAssetBase*          Perk;
		int                            SlotNumber;
		class UClass* /*AProjectXCharacter*/ CharacterClass;
		class UClass* /*UWeaponInstance*/ WeaponInstance;
		EPerkType                      Type;
	} params = {};

	params.Perk = Perk;
	params.SlotNumber = SlotNumber;
	params.CharacterClass = CharacterClass;
	params.WeaponInstance = WeaponInstance;
	params.Type = Type;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Loadout.W_Loadout_C.BndEvt__W_GeneralScreen_K2Node_ComponentBoundEvent_13_ItemSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           Selected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// unsigned char                  Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 ShortCode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UClass* /*AProjectXCharacter*/ NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_GeneralScreen_K2Node_ComponentBoundEvent_13_ItemSelected__DelegateSignature(bool Selected, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, const struct FString& ShortCode, class UClass* /*AProjectXCharacter*/ NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.BndEvt__W_GeneralScreen_K2Node_ComponentBoundEvent_13_ItemSelected__DelegateSignature"));

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


// Function W_Loadout.W_Loadout_C.BndEvt__W_GeneralScreen_K2Node_ComponentBoundEvent_14_TypeSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_GeneralScreen_K2Node_ComponentBoundEvent_14_TypeSelected__DelegateSignature(ECosmeticType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.BndEvt__W_GeneralScreen_K2Node_ComponentBoundEvent_14_TypeSelected__DelegateSignature"));

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


// Function W_Loadout.W_Loadout_C.BndEvt__W_GeneralScreen_K2Node_ComponentBoundEvent_15_EquipButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_Loadout_C::BndEvt__W_GeneralScreen_K2Node_ComponentBoundEvent_15_EquipButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.BndEvt__W_GeneralScreen_K2Node_ComponentBoundEvent_15_EquipButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Loadout.W_Loadout_C.BndEvt__W_VehicleScreen_K2Node_ComponentBoundEvent_16_ItemSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           Selected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// unsigned char                  Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 ShortCode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UClass* /*AProjectXCharacter*/ NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_VehicleScreen_K2Node_ComponentBoundEvent_16_ItemSelected__DelegateSignature(bool Selected, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, const struct FString& ShortCode, class UClass* /*AProjectXCharacter*/ NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.BndEvt__W_VehicleScreen_K2Node_ComponentBoundEvent_16_ItemSelected__DelegateSignature"));

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


// Function W_Loadout.W_Loadout_C.BndEvt__W_GeneralScreen_K2Node_ComponentBoundEvent_18_ClassSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ PlayerClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Loadout_C::BndEvt__W_GeneralScreen_K2Node_ComponentBoundEvent_18_ClassSelected__DelegateSignature(class UClass* /*AProjectXCharacter*/ PlayerClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.BndEvt__W_GeneralScreen_K2Node_ComponentBoundEvent_18_ClassSelected__DelegateSignature"));

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


// Function W_Loadout.W_Loadout_C.BndEvt__W_VehicleScreen_K2Node_ComponentBoundEvent_17_EquipButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Loadout_C::BndEvt__W_VehicleScreen_K2Node_ComponentBoundEvent_17_EquipButtonPressed__DelegateSignature(bool NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.BndEvt__W_VehicleScreen_K2Node_ComponentBoundEvent_17_EquipButtonPressed__DelegateSignature"));

	struct
	{
		bool                           NewParam;
	} params = {};

	params.NewParam = NewParam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Loadout.W_Loadout_C.OnActiveMenuChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EArmoryMenus>      ActiveMenuChanged              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EArmoryMenus>      PreviousMenu                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Loadout_C::OnActiveMenuChanged(TEnumAsByte<EArmoryMenus> ActiveMenuChanged, TEnumAsByte<EArmoryMenus> PreviousMenu)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.OnActiveMenuChanged"));

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


// Function W_Loadout.W_Loadout_C.ExecuteUbergraph_W_Loadout
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Loadout_C::ExecuteUbergraph_W_Loadout(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.ExecuteUbergraph_W_Loadout"));

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


// Function W_Loadout.W_Loadout_C.PerkSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPerkAssetBase*          Perk                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            SlotNumber                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AProjectXCharacter*/ CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponInstance                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EPerkType                      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Loadout_C::PerkSelected__DelegateSignature(class UPerkAssetBase* Perk, int SlotNumber, class UClass* /*AProjectXCharacter*/ CharacterClass, class UClass* /*UWeaponInstance*/ WeaponInstance, EPerkType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.PerkSelected__DelegateSignature"));

	struct
	{
		class UPerkAssetBase*          Perk;
		int                            SlotNumber;
		class UClass* /*AProjectXCharacter*/ CharacterClass;
		class UClass* /*UWeaponInstance*/ WeaponInstance;
		EPerkType                      Type;
	} params = {};

	params.Perk = Perk;
	params.SlotNumber = SlotNumber;
	params.CharacterClass = CharacterClass;
	params.WeaponInstance = WeaponInstance;
	params.Type = Type;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Loadout.W_Loadout_C.ActiveMenuChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EArmoryMenus>      ActiveMenuChanged              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EArmoryMenus>      PreviousMenu                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Loadout_C::ActiveMenuChanged__DelegateSignature(TEnumAsByte<EArmoryMenus> ActiveMenuChanged, TEnumAsByte<EArmoryMenus> PreviousMenu)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.ActiveMenuChanged__DelegateSignature"));

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


// Function W_Loadout.W_Loadout_C.TypeSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Loadout_C::TypeSelected__DelegateSignature(ECosmeticType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.TypeSelected__DelegateSignature"));

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


// Function W_Loadout.W_Loadout_C.ItemSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSelected                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// unsigned char                  Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 ShortCode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UClass* /*AProjectXCharacter*/ NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Loadout_C::ItemSelected__DelegateSignature(bool bSelected, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, const struct FString& ShortCode, class UClass* /*AProjectXCharacter*/ NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.ItemSelected__DelegateSignature"));

	struct
	{
		bool                           bSelected;
		ECosmeticType                  Type;
		struct FString                 WeaponID;
		unsigned char                  Slot;
		struct FString                 ShortCode;
		class UClass* /*AProjectXCharacter*/ NewParam;
	} params = {};

	params.bSelected = bSelected;
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


// Function W_Loadout.W_Loadout_C.ClassSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Loadout_C::ClassSelected__DelegateSignature(class UClass* /*AProjectXCharacter*/ Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.ClassSelected__DelegateSignature"));

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


// Function W_Loadout.W_Loadout_C.WeaponSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWeaponInstance*/ Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EEquipSlot                     Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AProjectXCharacter*/ CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  WeaponIDNumber                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Loadout_C::WeaponSelected__DelegateSignature(class UClass* /*UWeaponInstance*/ Weapon, EEquipSlot Slot, class UClass* /*AProjectXCharacter*/ CharacterClass, unsigned char WeaponIDNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.WeaponSelected__DelegateSignature"));

	struct
	{
		class UClass* /*UWeaponInstance*/ Weapon;
		EEquipSlot                     Slot;
		class UClass* /*AProjectXCharacter*/ CharacterClass;
		unsigned char                  WeaponIDNumber;
	} params = {};

	params.Weapon = Weapon;
	params.Slot = Slot;
	params.CharacterClass = CharacterClass;
	params.WeaponIDNumber = WeaponIDNumber;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Loadout.W_Loadout_C.CloseLoadout__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Loadout_C::CloseLoadout__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Loadout.W_Loadout_C.CloseLoadout__DelegateSignature"));

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
