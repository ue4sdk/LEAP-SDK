// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_WeaponsSlotButtonList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.GetWeaponUnlockLevel
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 InputPin                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// int                            Level                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponsSlotButtonList_C::GetWeaponUnlockLevel(const struct FString& InputPin, int* Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.GetWeaponUnlockLevel"));

	struct
	{
		struct FString                 InputPin;
		int                            Level;
	} params = {};

	params.InputPin = InputPin;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Level != nullptr)
		*Level = params.Level;
}


// Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.UpdateSlotText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_WeaponButton_C*       InputPin                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponsSlotButtonList_C::UpdateSlotText(class UW_WeaponButton_C* InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.UpdateSlotText"));

	struct
	{
		class UW_WeaponButton_C*       InputPin;
	} params = {};

	params.InputPin = InputPin;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.GetWeaponUnlockLevels
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UClass* /*UWeaponInstance*/> WeaponsIn                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UClass* /*AProjectXCharacter*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponsSlotButtonList_C::GetWeaponUnlockLevels(class UClass* /*AProjectXCharacter*/ Class, TArray<class UClass* /*UWeaponInstance*/>* WeaponsIn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.GetWeaponUnlockLevels"));

	struct
	{
		TArray<class UClass* /*UWeaponInstance*/> WeaponsIn;
		class UClass* /*AProjectXCharacter*/ Class;
	} params = {};

	params.Class = Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (WeaponsIn != nullptr)
		*WeaponsIn = params.WeaponsIn;
}


// Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.IsLockedElement
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Unlocked                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            Level                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Found                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_WeaponsSlotButtonList_C::IsLockedElement(class UClass* /*UWeaponInstance*/ WeaponClass, bool* Unlocked, int* Level, bool* Found)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.IsLockedElement"));

	struct
	{
		class UClass* /*UWeaponInstance*/ WeaponClass;
		bool                           Unlocked;
		int                            Level;
		bool                           Found;
	} params = {};

	params.WeaponClass = WeaponClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Unlocked != nullptr)
		*Unlocked = params.Unlocked;
	if (Level != nullptr)
		*Level = params.Level;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.AddToBox
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Content                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponsSlotButtonList_C::AddToBox(class UWidget* Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.AddToBox"));

	struct
	{
		class UWidget*                 Content;
	} params = {};

	params.Content = Content;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.GetWeaponList
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UClass* /*UWeaponInstance*/> ClassList1                     (CPF_Parm, CPF_OutParm)

void UW_WeaponsSlotButtonList_C::GetWeaponList(TArray<class UClass* /*UWeaponInstance*/>* ClassList1)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.GetWeaponList"));

	struct
	{
		TArray<class UClass* /*UWeaponInstance*/> ClassList1;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ClassList1 != nullptr)
		*ClassList1 = params.ClassList1;
}


// Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.InitializeWeaponsList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ ClassSpecifier                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EEquipSlot                     EquipSlot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ SpecificWeaponInstance         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           RebuildList                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_WeaponsSlotButtonList_C::InitializeWeaponsList(class UClass* /*AProjectXCharacter*/ ClassSpecifier, EEquipSlot EquipSlot, class UClass* /*UWeaponInstance*/ SpecificWeaponInstance, bool RebuildList)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.InitializeWeaponsList"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ ClassSpecifier;
		EEquipSlot                     EquipSlot;
		class UClass* /*UWeaponInstance*/ SpecificWeaponInstance;
		bool                           RebuildList;
	} params = {};

	params.ClassSpecifier = ClassSpecifier;
	params.EquipSlot = EquipSlot;
	params.SpecificWeaponInstance = SpecificWeaponInstance;
	params.RebuildList = RebuildList;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.ClearList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_WeaponsSlotButtonList_C::ClearList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.ClearList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.OnWeaponPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 WeaponName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponsSlotButtonList_C::OnWeaponPressed(const struct FString& WeaponName, class UClass* /*UWeaponInstance*/ WeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.OnWeaponPressed"));

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


// Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.CreateButtonWIdget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Dimension_1                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// bool                           List                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_WeaponsSlotButtonList_C::CreateButtonWIdget(int Dimension_1, bool List)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.CreateButtonWIdget"));

	struct
	{
		int                            Dimension_1;
		bool                           List;
	} params = {};

	params.Dimension_1 = Dimension_1;
	params.List = List;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.ForceActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InputPin                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_WeaponsSlotButtonList_C::ForceActive(const struct FString& InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.ForceActive"));

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


// Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.OnWeaponHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWeaponInstance*/ Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_WeaponsSlotButtonList_C::OnWeaponHovered(class UClass* /*UWeaponInstance*/ Weapon, const struct FString& WeaponID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.OnWeaponHovered"));

	struct
	{
		class UClass* /*UWeaponInstance*/ Weapon;
		struct FString                 WeaponID;
	} params = {};

	params.Weapon = Weapon;
	params.WeaponID = WeaponID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.ForceClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InputPin                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_WeaponsSlotButtonList_C::ForceClicked(const struct FString& InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.ForceClicked"));

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


// Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.UpdateWeapon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponsSlotButtonList_C::UpdateWeapon(class UClass* /*UWeaponInstance*/ WeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.UpdateWeapon"));

	struct
	{
		class UClass* /*UWeaponInstance*/ WeaponClass;
	} params = {};

	params.WeaponClass = WeaponClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_WeaponsSlotButtonList_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.OnEquipWeaponPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 WeaponName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponsSlotButtonList_C::OnEquipWeaponPressed(const struct FString& WeaponName, class UClass* /*UWeaponInstance*/ WeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.OnEquipWeaponPressed"));

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


// Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.OnCustomizeWeaponPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 WeaponName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponsSlotButtonList_C::OnCustomizeWeaponPressed(const struct FString& WeaponName, class UClass* /*UWeaponInstance*/ WeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.OnCustomizeWeaponPressed"));

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


// Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.SetWeaponEquipped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWeaponInstance*/ Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponsSlotButtonList_C::SetWeaponEquipped(class UClass* /*UWeaponInstance*/ Weapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.SetWeaponEquipped"));

	struct
	{
		class UClass* /*UWeaponInstance*/ Weapon;
	} params = {};

	params.Weapon = Weapon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.SetWeaponEquippedByID
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_WeaponsSlotButtonList_C::SetWeaponEquippedByID(const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.SetWeaponEquippedByID"));

	struct
	{
		struct FString                 ID;
	} params = {};

	params.ID = ID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.ExecuteUbergraph_W_WeaponsSlotButtonList
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponsSlotButtonList_C::ExecuteUbergraph_W_WeaponsSlotButtonList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.ExecuteUbergraph_W_WeaponsSlotButtonList"));

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


// Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.OnWeaponsListFirstOptionAvailable__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_WeaponsSlotButtonList_C::OnWeaponsListFirstOptionAvailable__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.OnWeaponsListFirstOptionAvailable__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.OnWeaponsListInitialized__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_WeaponsSlotButtonList_C::OnWeaponsListInitialized__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.OnWeaponsListInitialized__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.WeaponCustomizeButtonPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 WeaponName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponsSlotButtonList_C::WeaponCustomizeButtonPressed__DelegateSignature(const struct FString& WeaponName, class UClass* /*UWeaponInstance*/ WeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.WeaponCustomizeButtonPressed__DelegateSignature"));

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


// Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.WeaponEquipButtonPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 WeaponName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// EEquipSlot                     EquipSlot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponsSlotButtonList_C::WeaponEquipButtonPressed__DelegateSignature(const struct FString& WeaponName, EEquipSlot EquipSlot, class UClass* /*UWeaponInstance*/ WeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.WeaponEquipButtonPressed__DelegateSignature"));

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


// Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.WeaponPerkSlotSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EPerkType                      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AProjectXCharacter*/ CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponsSlotButtonList_C::WeaponPerkSlotSelected__DelegateSignature(int Slot, EPerkType Type, class UClass* /*AProjectXCharacter*/ CharacterClass, class UClass* /*UWeaponInstance*/ WeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.WeaponPerkSlotSelected__DelegateSignature"));

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


// Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.WeaponHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWeaponInstance*/ Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// EEquipSlot                     Equip_Slot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponsSlotButtonList_C::WeaponHovered__DelegateSignature(class UClass* /*UWeaponInstance*/ Weapon, const struct FString& WeaponName, EEquipSlot Equip_Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.WeaponHovered__DelegateSignature"));

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


// Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.WeaponButtonPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 WeaponName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// EEquipSlot                     EquipSlot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponsSlotButtonList_C::WeaponButtonPressed__DelegateSignature(const struct FString& WeaponName, EEquipSlot EquipSlot, class UClass* /*UWeaponInstance*/ WeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponsSlotButtonList.W_WeaponsSlotButtonList_C.WeaponButtonPressed__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
