// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_WeaponButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_WeaponButton.W_WeaponButton_C.IsEquipped
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Equipped                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_WeaponButton_C::IsEquipped(bool* Equipped)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponButton.W_WeaponButton_C.IsEquipped"));

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


// Function W_WeaponButton.W_WeaponButton_C.Finished_8071DD3D49CE5FD0AE46938F8F74CAE2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_WeaponButton_C::Finished_8071DD3D49CE5FD0AE46938F8F74CAE2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponButton.W_WeaponButton_C.Finished_8071DD3D49CE5FD0AE46938F8F74CAE2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponButton.W_WeaponButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_WeaponButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponButton.W_WeaponButton_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponButton.W_WeaponButton_C.UpdateSlotText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InputPin                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_WeaponButton_C::UpdateSlotText(const struct FText& InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponButton.W_WeaponButton_C.UpdateSlotText"));

	struct
	{
		struct FText                   InputPin;
	} params = {};

	params.InputPin = InputPin;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponButton.W_WeaponButton_C.BndEvt__W_ArmoryIcon_K2Node_ComponentBoundEvent_0_ItemHovered__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           Hovered                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UW_ArmoryIcon_C*         Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponButton_C::BndEvt__W_ArmoryIcon_K2Node_ComponentBoundEvent_0_ItemHovered__DelegateSignature(bool Hovered, const struct FString& ItemId, ECosmeticType Type, const struct FString& WeaponID, class UW_ArmoryIcon_C* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponButton.W_WeaponButton_C.BndEvt__W_ArmoryIcon_K2Node_ComponentBoundEvent_0_ItemHovered__DelegateSignature"));

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


// Function W_WeaponButton.W_WeaponButton_C.BndEvt__W_ArmoryIcon_K2Node_ComponentBoundEvent_1_ItemPressed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// unsigned char                  Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UW_ArmoryIcon_C*         NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponButton_C::BndEvt__W_ArmoryIcon_K2Node_ComponentBoundEvent_1_ItemPressed__DelegateSignature(const struct FString& ItemId, ECosmeticType Type, const struct FString& WeaponID, unsigned char Slot, class UW_ArmoryIcon_C* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponButton.W_WeaponButton_C.BndEvt__W_ArmoryIcon_K2Node_ComponentBoundEvent_1_ItemPressed__DelegateSignature"));

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


// Function W_WeaponButton.W_WeaponButton_C.UpdateVersion
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Large                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_WeaponButton_C::UpdateVersion(bool Large)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponButton.W_WeaponButton_C.UpdateVersion"));

	struct
	{
		bool                           Large;
	} params = {};

	params.Large = Large;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponButton.W_WeaponButton_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWeaponInstance*/ Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponButton_C::Init(class UClass* /*UWeaponInstance*/ Weapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponButton.W_WeaponButton_C.Init"));

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


// Function W_WeaponButton.W_WeaponButton_C.Deselect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_WeaponButton_C::Deselect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponButton.W_WeaponButton_C.Deselect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponButton.W_WeaponButton_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponButton_C::BndEvt__W_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponButton.W_WeaponButton_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature"));

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


// Function W_WeaponButton.W_WeaponButton_C.BndEvt__Customize_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponButton_C::BndEvt__Customize_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponButton.W_WeaponButton_C.BndEvt__Customize_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature"));

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


// Function W_WeaponButton.W_WeaponButton_C.ExecuteUbergraph_W_WeaponButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponButton_C::ExecuteUbergraph_W_WeaponButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponButton.W_WeaponButton_C.ExecuteUbergraph_W_WeaponButton"));

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


// Function W_WeaponButton.W_WeaponButton_C.OnCustomize__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 WeaponName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponButton_C::OnCustomize__DelegateSignature(const struct FString& WeaponName, class UClass* /*UWeaponInstance*/ WeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponButton.W_WeaponButton_C.OnCustomize__DelegateSignature"));

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


// Function W_WeaponButton.W_WeaponButton_C.OnEquip__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 WeaponName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponButton_C::OnEquip__DelegateSignature(const struct FString& WeaponName, class UClass* /*UWeaponInstance*/ WeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponButton.W_WeaponButton_C.OnEquip__DelegateSignature"));

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


// Function W_WeaponButton.W_WeaponButton_C.OnButtonHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWeaponInstance*/ Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_WeaponButton_C::OnButtonHovered__DelegateSignature(class UClass* /*UWeaponInstance*/ Weapon, const struct FString& WeaponID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponButton.W_WeaponButton_C.OnButtonHovered__DelegateSignature"));

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


// Function W_WeaponButton.W_WeaponButton_C.OnButtonPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 WeaponName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponButton_C::OnButtonPressed__DelegateSignature(const struct FString& WeaponName, class UClass* /*UWeaponInstance*/ WeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponButton.W_WeaponButton_C.OnButtonPressed__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
