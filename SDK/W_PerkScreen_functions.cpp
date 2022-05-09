// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PerkScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PerkScreen.W_PerkScreen_C.GetPerkInInventory
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 PerkID                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// EPerkType                      Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Owned                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PerkScreen_C::GetPerkInInventory(const struct FString& PerkID, EPerkType Selection, bool* Owned)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkScreen.W_PerkScreen_C.GetPerkInInventory"));

	struct
	{
		struct FString                 PerkID;
		EPerkType                      Selection;
		bool                           Owned;
	} params = {};

	params.PerkID = PerkID;
	params.Selection = Selection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Owned != nullptr)
		*Owned = params.Owned;
}


// Function W_PerkScreen.W_PerkScreen_C.GetPerkText
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   NewParam                       (CPF_Parm, CPF_OutParm)

void UW_PerkScreen_C::GetPerkText(struct FText* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkScreen.W_PerkScreen_C.GetPerkText"));

	struct
	{
		struct FText                   NewParam;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function W_PerkScreen.W_PerkScreen_C.OnLoaded_FD19900A46584C4520FD18BE7462440E
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PerkScreen_C::OnLoaded_FD19900A46584C4520FD18BE7462440E(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkScreen.W_PerkScreen_C.OnLoaded_FD19900A46584C4520FD18BE7462440E"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PerkScreen.W_PerkScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_PerkScreen_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkScreen.W_PerkScreen_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PerkScreen.W_PerkScreen_C.CreatePerkList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TargetSlotID                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AProjectXCharacter*/ CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EPerkType                      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PerkScreen_C::CreatePerkList(int TargetSlotID, class UClass* /*AProjectXCharacter*/ CharacterClass, EPerkType Type, class UClass* /*UWeaponInstance*/ WeaponType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkScreen.W_PerkScreen_C.CreatePerkList"));

	struct
	{
		int                            TargetSlotID;
		class UClass* /*AProjectXCharacter*/ CharacterClass;
		EPerkType                      Type;
		class UClass* /*UWeaponInstance*/ WeaponType;
	} params = {};

	params.TargetSlotID = TargetSlotID;
	params.CharacterClass = CharacterClass;
	params.Type = Type;
	params.WeaponType = WeaponType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PerkScreen.W_PerkScreen_C.BndEvt__btn_Back_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PerkScreen_C::BndEvt__btn_Back_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkScreen.W_PerkScreen_C.BndEvt__btn_Back_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature"));

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


// Function W_PerkScreen.W_PerkScreen_C.UpdateEquipedPerk
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 EquippedPerkID                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_PerkScreen_C::UpdateEquipedPerk(const struct FString& EquippedPerkID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkScreen.W_PerkScreen_C.UpdateEquipedPerk"));

	struct
	{
		struct FString                 EquippedPerkID;
	} params = {};

	params.EquippedPerkID = EquippedPerkID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PerkScreen.W_PerkScreen_C.UpdateText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PerkScreen_C::UpdateText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkScreen.W_PerkScreen_C.UpdateText"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PerkScreen.W_PerkScreen_C.UpdatePerkInfo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPerkAssetBase*          Perk                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PerkScreen_C::UpdatePerkInfo(class UPerkAssetBase* Perk)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkScreen.W_PerkScreen_C.UpdatePerkInfo"));

	struct
	{
		class UPerkAssetBase*          Perk;
	} params = {};

	params.Perk = Perk;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PerkScreen.W_PerkScreen_C.OnPerkHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPerkAssetBase*          SelectedPerk                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PerkScreen_C::OnPerkHovered(class UPerkAssetBase* SelectedPerk)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkScreen.W_PerkScreen_C.OnPerkHovered"));

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


// Function W_PerkScreen.W_PerkScreen_C.PerkSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPerkAssetBase*          SelectedPerk                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Owned                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UW_PerkButton_C*         Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PerkScreen_C::PerkSelected(class UPerkAssetBase* SelectedPerk, bool Owned, class UW_PerkButton_C* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkScreen.W_PerkScreen_C.PerkSelected"));

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


// Function W_PerkScreen.W_PerkScreen_C.ExecuteUbergraph_W_PerkScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PerkScreen_C::ExecuteUbergraph_W_PerkScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkScreen.W_PerkScreen_C.ExecuteUbergraph_W_PerkScreen"));

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


// Function W_PerkScreen.W_PerkScreen_C.OnPerkClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPerkAssetBase*          Perk                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            SlotNumber                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AProjectXCharacter*/ CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponInstance                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EPerkType                      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PerkScreen_C::OnPerkClicked__DelegateSignature(class UPerkAssetBase* Perk, int SlotNumber, class UClass* /*AProjectXCharacter*/ CharacterClass, class UClass* /*UWeaponInstance*/ WeaponInstance, EPerkType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkScreen.W_PerkScreen_C.OnPerkClicked__DelegateSignature"));

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


// Function W_PerkScreen.W_PerkScreen_C.BackButtonPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PerkScreen_C::BackButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkScreen.W_PerkScreen_C.BackButtonPressed__DelegateSignature"));

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
