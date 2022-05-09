// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_ItemButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_ItemButton.W_ItemButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_ItemButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ItemButton.W_ItemButton_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ItemButton.W_ItemButton_C.Initialize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FText                   DisplayText                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           Equiped                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// ECosmeticType                  CosmeticType                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_ItemButton_C::Initialize(const struct FString& Name, const struct FText& DisplayText, bool Equiped, ECosmeticType CosmeticType, const struct FString& WeaponName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ItemButton.W_ItemButton_C.Initialize"));

	struct
	{
		struct FString                 Name;
		struct FText                   DisplayText;
		bool                           Equiped;
		ECosmeticType                  CosmeticType;
		struct FString                 WeaponName;
	} params = {};

	params.Name = Name;
	params.DisplayText = DisplayText;
	params.Equiped = Equiped;
	params.CosmeticType = CosmeticType;
	params.WeaponName = WeaponName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ItemButton.W_ItemButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_ItemButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ItemButton.W_ItemButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ItemButton.W_ItemButton_C.ToggleEquiped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ItemButton_C::ToggleEquiped(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ItemButton.W_ItemButton_C.ToggleEquiped"));

	struct
	{
		bool                           Condition;
	} params = {};

	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ItemButton.W_ItemButton_C.ExecuteUbergraph_W_ItemButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ItemButton_C::ExecuteUbergraph_W_ItemButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ItemButton.W_ItemButton_C.ExecuteUbergraph_W_ItemButton"));

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


// Function W_ItemButton.W_ItemButton_C.Clicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 WeaponName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ItemButton_C::Clicked__DelegateSignature(const struct FString& ID, const struct FString& WeaponName, ECosmeticType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ItemButton.W_ItemButton_C.Clicked__DelegateSignature"));

	struct
	{
		struct FString                 ID;
		struct FString                 WeaponName;
		ECosmeticType                  Type;
	} params = {};

	params.ID = ID;
	params.WeaponName = WeaponName;
	params.Type = Type;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
