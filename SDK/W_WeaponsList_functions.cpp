// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_WeaponsList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_WeaponsList.W_WeaponsList_C.ClearSpecificSlot
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EEquipSlot                     Key                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponsList_C::ClearSpecificSlot(EEquipSlot Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsList.W_WeaponsList_C.ClearSpecificSlot"));

	struct
	{
		EEquipSlot                     Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponsList.W_WeaponsList_C.IsValidSlot
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EEquipSlot                     ItemToFind                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UW_WeaponsList_C::IsValidSlot(EEquipSlot ItemToFind)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsList.W_WeaponsList_C.IsValidSlot"));

	struct
	{
		EEquipSlot                     ItemToFind;
		bool                           ReturnValue;
	} params = {};

	params.ItemToFind = ItemToFind;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_WeaponsList.W_WeaponsList_C.OnWeaponPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 WeaponName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// EEquipSlot                     EquipSlot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponsList_C::OnWeaponPressed(const struct FString& WeaponName, EEquipSlot EquipSlot, class UClass* /*UWeaponInstance*/ WeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsList.W_WeaponsList_C.OnWeaponPressed"));

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


// Function W_WeaponsList.W_WeaponsList_C.InitializeList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ShowAllWeapons                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FEquips                 Loadout                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_WeaponsList_C::InitializeList(class UClass* /*AProjectXCharacter*/ Class, bool ShowAllWeapons, const struct FEquips& Loadout)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsList.W_WeaponsList_C.InitializeList"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ Class;
		bool                           ShowAllWeapons;
		struct FEquips                 Loadout;
	} params = {};

	params.Class = Class;
	params.ShowAllWeapons = ShowAllWeapons;
	params.Loadout = Loadout;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponsList.W_WeaponsList_C.SetActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InputPin                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_WeaponsList_C::SetActive(const struct FString& InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsList.W_WeaponsList_C.SetActive"));

	struct
	{
		struct FString                 InputPin;
	} params = {};

	params.InputPin = InputPin;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponsList.W_WeaponsList_C.ClearList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_WeaponsList_C::ClearList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsList.W_WeaponsList_C.ClearList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponsList.W_WeaponsList_C.OnWeaponPerkSlotSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EPerkType                      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AProjectXCharacter*/ CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponsList_C::OnWeaponPerkSlotSelected(int Slot, EPerkType Type, class UClass* /*AProjectXCharacter*/ CharacterClass, class UClass* /*UWeaponInstance*/ WeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsList.W_WeaponsList_C.OnWeaponPerkSlotSelected"));

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


// Function W_WeaponsList.W_WeaponsList_C.UpdateWeaponSlot
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EEquipSlot                     Key                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponsList_C::UpdateWeaponSlot(EEquipSlot Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsList.W_WeaponsList_C.UpdateWeaponSlot"));

	struct
	{
		EEquipSlot                     Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponsList.W_WeaponsList_C.LoopNextEquipSlot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_WeaponsList_C::LoopNextEquipSlot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsList.W_WeaponsList_C.LoopNextEquipSlot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponsList.W_WeaponsList_C.WeaponHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWeaponInstance*/ Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// EEquipSlot                     Equip_Slot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponsList_C::WeaponHovered(class UClass* /*UWeaponInstance*/ Weapon, const struct FString& WeaponName, EEquipSlot Equip_Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsList.W_WeaponsList_C.WeaponHovered"));

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


// Function W_WeaponsList.W_WeaponsList_C.ExecuteUbergraph_W_WeaponsList
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponsList_C::ExecuteUbergraph_W_WeaponsList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsList.W_WeaponsList_C.ExecuteUbergraph_W_WeaponsList"));

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


// Function W_WeaponsList.W_WeaponsList_C.OnWeaponHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// EEquipSlot                     EquipSlot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponsList_C::OnWeaponHovered__DelegateSignature(const struct FString& WeaponID, EEquipSlot EquipSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsList.W_WeaponsList_C.OnWeaponHovered__DelegateSignature"));

	struct
	{
		struct FString                 WeaponID;
		EEquipSlot                     EquipSlot;
	} params = {};

	params.WeaponID = WeaponID;
	params.EquipSlot = EquipSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponsList.W_WeaponsList_C.OnPerkSlotSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EPerkType                      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AProjectXCharacter*/ CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponsList_C::OnPerkSlotSelected__DelegateSignature(int Slot, EPerkType Type, class UClass* /*AProjectXCharacter*/ CharacterClass, class UClass* /*UWeaponInstance*/ WeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsList.W_WeaponsList_C.OnPerkSlotSelected__DelegateSignature"));

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


// Function W_WeaponsList.W_WeaponsList_C.OnWeaponSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EEquipSlot                     Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_WeaponsList_C::OnWeaponSelected__DelegateSignature(EEquipSlot Slot, const struct FString& WeaponID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsList.W_WeaponsList_C.OnWeaponSelected__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
