// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PurchaseProcessingMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.CreateDialogue
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_PurchaseProcessingMenu_Events> Event                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PurchaseProcessingMenu_C::CreateDialogue(TEnumAsByte<E_PurchaseProcessingMenu_Events> Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.CreateDialogue"));

	struct
	{
		TEnumAsByte<E_PurchaseProcessingMenu_Events> Event;
	} params = {};

	params.Event = Event;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.EquipGenericCosmetic
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 CosmeticID                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_PurchaseProcessingMenu_C::EquipGenericCosmetic(ECosmeticType Type, const struct FString& CosmeticID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.EquipGenericCosmetic"));

	struct
	{
		ECosmeticType                  Type;
		struct FString                 CosmeticID;
	} params = {};

	params.Type = Type;
	params.CosmeticID = CosmeticID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.EquipWeaponCosmetic
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 CosmeticID                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_PurchaseProcessingMenu_C::EquipWeaponCosmetic(ECosmeticType Type, const struct FString& CosmeticID, const struct FString& WeaponName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.EquipWeaponCosmetic"));

	struct
	{
		ECosmeticType                  Type;
		struct FString                 CosmeticID;
		struct FString                 WeaponName;
	} params = {};

	params.Type = Type;
	params.CosmeticID = CosmeticID;
	params.WeaponName = WeaponName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_PurchaseProcessingMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.Complete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSucess                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_PurchaseProcessingMenu_C::Complete(bool bSucess, const struct FString& ItemId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.Complete"));

	struct
	{
		bool                           bSucess;
		struct FString                 ItemId;
	} params = {};

	params.bSucess = bSucess;
	params.ItemId = ItemId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.InitProcessingPurchase
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ClassID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_PurchaseProcessingMenu_C::InitProcessingPurchase(const struct FString& ClassID, ECosmeticType Type, const struct FString& ItemId, const struct FString& WeaponID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.InitProcessingPurchase"));

	struct
	{
		struct FString                 ClassID;
		ECosmeticType                  Type;
		struct FString                 ItemId;
		struct FString                 WeaponID;
	} params = {};

	params.ClassID = ClassID;
	params.Type = Type;
	params.ItemId = ItemId;
	params.WeaponID = WeaponID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.Reset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PurchaseProcessingMenu_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.Reset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.Option 1 Clicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PurchaseProcessingMenu_C::Option_1_Clicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.Option 1 Clicked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.Option 2 Clicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PurchaseProcessingMenu_C::Option_2_Clicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.Option 2 Clicked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.CreateSlotButtons
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PurchaseProcessingMenu_C::CreateSlotButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.CreateSlotButtons"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.EquipCosmetic
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PurchaseProcessingMenu_C::EquipCosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.EquipCosmetic"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.OnSlotButtonSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PurchaseProcessingMenu_C::OnSlotButtonSelected(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.OnSlotButtonSelected"));

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


// Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.ExecuteUbergraph_W_PurchaseProcessingMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PurchaseProcessingMenu_C::ExecuteUbergraph_W_PurchaseProcessingMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.ExecuteUbergraph_W_PurchaseProcessingMenu"));

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


// Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.ProcessingComplete__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PurchaseProcessingMenu_C::ProcessingComplete__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PurchaseProcessingMenu.W_PurchaseProcessingMenu_C.ProcessingComplete__DelegateSignature"));

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
