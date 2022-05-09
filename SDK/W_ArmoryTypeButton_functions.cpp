// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_ArmoryTypeButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_ArmoryTypeButton.W_ArmoryTypeButton_C.SetLast
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Last                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ArmoryTypeButton_C::SetLast(bool Last)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryTypeButton.W_ArmoryTypeButton_C.SetLast"));

	struct
	{
		bool                           Last;
	} params = {};

	params.Last = Last;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryTypeButton.W_ArmoryTypeButton_C.SetActive
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ArmoryTypeButton_C::SetActive(bool IsActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryTypeButton.W_ArmoryTypeButton_C.SetActive"));

	struct
	{
		bool                           IsActive;
	} params = {};

	params.IsActive = IsActive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryTypeButton.W_ArmoryTypeButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ArmoryTypeButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryTypeButton.W_ArmoryTypeButton_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryTypeButton.W_ArmoryTypeButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_ArmoryTypeButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryTypeButton.W_ArmoryTypeButton_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryTypeButton.W_ArmoryTypeButton_C.ForceClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ArmoryTypeButton_C::ForceClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryTypeButton.W_ArmoryTypeButton_C.ForceClicked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryTypeButton.W_ArmoryTypeButton_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_ArmoryTypeButton_C::BndEvt__W_Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryTypeButton.W_ArmoryTypeButton_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryTypeButton.W_ArmoryTypeButton_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_4_OnHoveredOff__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_ArmoryTypeButton_C::BndEvt__W_Button_K2Node_ComponentBoundEvent_4_OnHoveredOff__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryTypeButton.W_ArmoryTypeButton_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_4_OnHoveredOff__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ArmoryTypeButton.W_ArmoryTypeButton_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryTypeButton_C::BndEvt__W_Button_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryTypeButton.W_ArmoryTypeButton_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature"));

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


// Function W_ArmoryTypeButton.W_ArmoryTypeButton_C.ExecuteUbergraph_W_ArmoryTypeButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ArmoryTypeButton_C::ExecuteUbergraph_W_ArmoryTypeButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryTypeButton.W_ArmoryTypeButton_C.ExecuteUbergraph_W_ArmoryTypeButton"));

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


// Function W_ArmoryTypeButton.W_ArmoryTypeButton_C.ArmorySubCategoryClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticCategory              Category                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TSet<struct FST_UI_ArmoryTypeCollection> CosmeticTypes                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           Colour                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// EColourSlot                    ColourSlot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_ArmoryTypeButton_C::ArmorySubCategoryClicked__DelegateSignature(const struct FString& ID, ECosmeticCategory Category, TSet<struct FST_UI_ArmoryTypeCollection> CosmeticTypes, bool Colour, EColourSlot ColourSlot, const struct FString& WeaponID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ArmoryTypeButton.W_ArmoryTypeButton_C.ArmorySubCategoryClicked__DelegateSignature"));

	struct
	{
		struct FString                 ID;
		ECosmeticCategory              Category;
		TSet<struct FST_UI_ArmoryTypeCollection> CosmeticTypes;
		bool                           Colour;
		EColourSlot                    ColourSlot;
		struct FString                 WeaponID;
	} params = {};

	params.ID = ID;
	params.Category = Category;
	params.CosmeticTypes = CosmeticTypes;
	params.Colour = Colour;
	params.ColourSlot = ColourSlot;
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
