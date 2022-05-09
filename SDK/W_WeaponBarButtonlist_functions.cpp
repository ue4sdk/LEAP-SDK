// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_WeaponBarButtonlist_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_WeaponBarButtonlist.W_WeaponBarButtonlist_C.MakeButtonForWeapons
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FScriptDelegate         Clicked                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor)
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponBarButtonlist_C::MakeButtonForWeapons(int Index, const struct FScriptDelegate& Clicked, class UClass* /*UWeaponInstance*/ WeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponBarButtonlist.W_WeaponBarButtonlist_C.MakeButtonForWeapons"));

	struct
	{
		int                            Index;
		struct FScriptDelegate         Clicked;
		class UClass* /*UWeaponInstance*/ WeaponClass;
	} params = {};

	params.Index = Index;
	params.Clicked = Clicked;
	params.WeaponClass = WeaponClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponBarButtonlist.W_WeaponBarButtonlist_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_WeaponBarButtonlist_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponBarButtonlist.W_WeaponBarButtonlist_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponBarButtonlist.W_WeaponBarButtonlist_C.OnClick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponBarButtonlist_C::OnClick(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponBarButtonlist.W_WeaponBarButtonlist_C.OnClick"));

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


// Function W_WeaponBarButtonlist.W_WeaponBarButtonlist_C.ForceSelect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_WeaponBarButtonlist_C::ForceSelect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponBarButtonlist.W_WeaponBarButtonlist_C.ForceSelect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponBarButtonlist.W_WeaponBarButtonlist_C.ExecuteUbergraph_W_WeaponBarButtonlist
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponBarButtonlist_C::ExecuteUbergraph_W_WeaponBarButtonlist(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponBarButtonlist.W_WeaponBarButtonlist_C.ExecuteUbergraph_W_WeaponBarButtonlist"));

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


// Function W_WeaponBarButtonlist.W_WeaponBarButtonlist_C.OnButtonPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ButtonID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponBarButtonlist_C::OnButtonPressed__DelegateSignature(const struct FString& ButtonID, class UClass* /*UWeaponInstance*/ Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponBarButtonlist.W_WeaponBarButtonlist_C.OnButtonPressed__DelegateSignature"));

	struct
	{
		struct FString                 ButtonID;
		class UClass* /*UWeaponInstance*/ Class;
	} params = {};

	params.ButtonID = ButtonID;
	params.Class = Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
