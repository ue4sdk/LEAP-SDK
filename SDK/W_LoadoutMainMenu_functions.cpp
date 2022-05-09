// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_LoadoutMainMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_LoadoutMainMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_0_CloseLoadout__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_LoadoutMainMenu_C::BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_0_CloseLoadout__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_0_CloseLoadout__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               Invisibility                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_LoadoutMainMenu_C::BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility Invisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature"));

	struct
	{
		ESlateVisibility               Invisibility;
	} params = {};

	params.Invisibility = Invisibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_2_WeaponSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWeaponInstance*/ Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EEquipSlot                     Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AProjectXCharacter*/ CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  WeaponIDNumber                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_LoadoutMainMenu_C::BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_2_WeaponSelected__DelegateSignature(class UClass* /*UWeaponInstance*/ Weapon, EEquipSlot Slot, class UClass* /*AProjectXCharacter*/ CharacterClass, unsigned char WeaponIDNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_2_WeaponSelected__DelegateSignature"));

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


// Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_3_ClassSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_LoadoutMainMenu_C::BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_3_ClassSelected__DelegateSignature(class UClass* /*AProjectXCharacter*/ Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_3_ClassSelected__DelegateSignature"));

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


// Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_4_TypeSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_LoadoutMainMenu_C::BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_4_TypeSelected__DelegateSignature(ECosmeticType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_4_TypeSelected__DelegateSignature"));

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


// Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_5_ItemSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bSelected                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// unsigned char                  Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 ShortCode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UClass* /*AProjectXCharacter*/ NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_LoadoutMainMenu_C::BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_5_ItemSelected__DelegateSignature(bool bSelected, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, const struct FString& ShortCode, class UClass* /*AProjectXCharacter*/ NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_5_ItemSelected__DelegateSignature"));

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


// Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_6_ActiveMenuChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EArmoryMenus>      ActiveMenuChanged              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EArmoryMenus>      PreviousMenu                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_LoadoutMainMenu_C::BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_6_ActiveMenuChanged__DelegateSignature(TEnumAsByte<EArmoryMenus> ActiveMenuChanged, TEnumAsByte<EArmoryMenus> PreviousMenu)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_6_ActiveMenuChanged__DelegateSignature"));

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


// Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.OnMenuBack
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_LoadoutMainMenu_C::OnMenuBack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.OnMenuBack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.CollapseWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_LoadoutMainMenu_C::CollapseWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.CollapseWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_7_PerkSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPerkAssetBase*          Perk                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            SlotNumber                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AProjectXCharacter*/ CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponInstance                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EPerkType                      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_LoadoutMainMenu_C::BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_7_PerkSelected__DelegateSignature(class UPerkAssetBase* Perk, int SlotNumber, class UClass* /*AProjectXCharacter*/ CharacterClass, class UClass* /*UWeaponInstance*/ WeaponInstance, EPerkType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.BndEvt__W_LoadoutMenu_K2Node_ComponentBoundEvent_7_PerkSelected__DelegateSignature"));

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


// Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.OnWidgetVisible
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_LoadoutMainMenu_C::OnWidgetVisible(class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.OnWidgetVisible"));

	struct
	{
		class UObject*                 ContextObject;
	} params = {};

	params.ContextObject = ContextObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.OnLeftBumper
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_LoadoutMainMenu_C::OnLeftBumper()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.OnLeftBumper"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.OnRightBumper
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_LoadoutMainMenu_C::OnRightBumper()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.OnRightBumper"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.ExecuteUbergraph_W_LoadoutMainMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_LoadoutMainMenu_C::ExecuteUbergraph_W_LoadoutMainMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LoadoutMainMenu.W_LoadoutMainMenu_C.ExecuteUbergraph_W_LoadoutMainMenu"));

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
