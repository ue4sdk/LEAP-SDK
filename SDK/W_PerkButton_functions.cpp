// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PerkButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PerkButton.W_PerkButton_C.GetEquippedStatus
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Equipped                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PerkButton_C::GetEquippedStatus(bool* Equipped)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkButton.W_PerkButton_C.GetEquippedStatus"));

	struct
	{
		bool                           Equipped;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Equipped != nullptr)
		*Equipped = params.Equipped;
}


// Function W_PerkButton.W_PerkButton_C.UpdatePerk
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Perk                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_PerkButton_C::UpdatePerk(const struct FString& Perk)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkButton.W_PerkButton_C.UpdatePerk"));

	struct
	{
		struct FString                 Perk;
	} params = {};

	params.Perk = Perk;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PerkButton.W_PerkButton_C.Initialize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ Character_Class                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ Weapon_Class                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// EPerkType                      Perk_Type                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  Slot_ID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PerkButton_C::Initialize(class UClass* /*AProjectXCharacter*/ Character_Class, class UClass* /*UWeaponInstance*/ Weapon_Class, EPerkType Perk_Type, unsigned char Slot_ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkButton.W_PerkButton_C.Initialize"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ Character_Class;
		class UClass* /*UWeaponInstance*/ Weapon_Class;
		EPerkType                      Perk_Type;
		unsigned char                  Slot_ID;
	} params = {};

	params.Character_Class = Character_Class;
	params.Weapon_Class = Weapon_Class;
	params.Perk_Type = Perk_Type;
	params.Slot_ID = Slot_ID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PerkButton.W_PerkButton_C.ForceToggleHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           hover                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PerkButton_C::ForceToggleHover(bool hover)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkButton.W_PerkButton_C.ForceToggleHover"));

	struct
	{
		bool                           hover;
	} params = {};

	params.hover = hover;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PerkButton.W_PerkButton_C.ToggleIsActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bPickA                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PerkButton_C::ToggleIsActive(bool bPickA)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkButton.W_PerkButton_C.ToggleIsActive"));

	struct
	{
		bool                           bPickA;
	} params = {};

	params.bPickA = bPickA;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PerkButton.W_PerkButton_C.UpdateIsEquipped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PerkButton_C::UpdateIsEquipped()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkButton.W_PerkButton_C.UpdateIsEquipped"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PerkButton.W_PerkButton_C.ToggleIsOwned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PerkButton_C::ToggleIsOwned()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkButton.W_PerkButton_C.ToggleIsOwned"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PerkButton.W_PerkButton_C.BndEvt__W_ItemIcon_New_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           Hovered                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PerkButton_C::BndEvt__W_ItemIcon_New_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature(bool Hovered)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkButton.W_PerkButton_C.BndEvt__W_ItemIcon_New_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature"));

	struct
	{
		bool                           Hovered;
	} params = {};

	params.Hovered = Hovered;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PerkButton.W_PerkButton_C.BndEvt__W_ItemIcon_New_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UW_ItemIcon_New_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PerkButton_C::BndEvt__W_ItemIcon_New_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_ItemIcon_New_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkButton.W_PerkButton_C.BndEvt__W_ItemIcon_New_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature"));

	struct
	{
		class UW_ItemIcon_New_C*       Button;
	} params = {};

	params.Button = Button;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PerkButton.W_PerkButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_PerkButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkButton.W_PerkButton_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PerkButton.W_PerkButton_C.ExecuteUbergraph_W_PerkButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PerkButton_C::ExecuteUbergraph_W_PerkButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkButton.W_PerkButton_C.ExecuteUbergraph_W_PerkButton"));

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


// Function W_PerkButton.W_PerkButton_C.PerkUnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPerkAssetBase*          SelectedPerk                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PerkButton_C::PerkUnHovered__DelegateSignature(class UPerkAssetBase* SelectedPerk)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkButton.W_PerkButton_C.PerkUnHovered__DelegateSignature"));

	struct
	{
		class UPerkAssetBase*          SelectedPerk;
	} params = {};

	params.SelectedPerk = SelectedPerk;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PerkButton.W_PerkButton_C.PerkHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPerkAssetBase*          SelectedPerk                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PerkButton_C::PerkHovered__DelegateSignature(class UPerkAssetBase* SelectedPerk)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkButton.W_PerkButton_C.PerkHovered__DelegateSignature"));

	struct
	{
		class UPerkAssetBase*          SelectedPerk;
	} params = {};

	params.SelectedPerk = SelectedPerk;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PerkButton.W_PerkButton_C.PerkSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPerkAssetBase*          SelectedPerk                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Owned                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UW_PerkButton_C*         Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PerkButton_C::PerkSelected__DelegateSignature(class UPerkAssetBase* SelectedPerk, bool Owned, class UW_PerkButton_C* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkButton.W_PerkButton_C.PerkSelected__DelegateSignature"));

	struct
	{
		class UPerkAssetBase*          SelectedPerk;
		bool                           Owned;
		class UW_PerkButton_C*         Widget;
	} params = {};

	params.SelectedPerk = SelectedPerk;
	params.Owned = Owned;
	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
