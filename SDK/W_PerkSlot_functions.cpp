// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PerkSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PerkSlot.W_PerkSlot_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_PerkSlot_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkSlot.W_PerkSlot_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PerkSlot.W_PerkSlot_C.UpdatePerk
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ShortCode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_PerkSlot_C::UpdatePerk(const struct FString& ShortCode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkSlot.W_PerkSlot_C.UpdatePerk"));

	struct
	{
		struct FString                 ShortCode;
	} params = {};

	params.ShortCode = ShortCode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PerkSlot.W_PerkSlot_C.BndEvt__W_PerkButton_K2Node_ComponentBoundEvent_0_PerkSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPerkAssetBase*          SelectedPerk                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Owned                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UW_PerkButton_C*         Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PerkSlot_C::BndEvt__W_PerkButton_K2Node_ComponentBoundEvent_0_PerkSelected__DelegateSignature(class UPerkAssetBase* SelectedPerk, bool Owned, class UW_PerkButton_C* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkSlot.W_PerkSlot_C.BndEvt__W_PerkButton_K2Node_ComponentBoundEvent_0_PerkSelected__DelegateSignature"));

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


// Function W_PerkSlot.W_PerkSlot_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ Character_Class                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ Weapon_Instance_Class          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UW_PerkSlot_C::Init(class UClass* /*AProjectXCharacter*/ Character_Class, class UClass* /*UWeaponInstance*/ Weapon_Instance_Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkSlot.W_PerkSlot_C.Init"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ Character_Class;
		class UClass* /*UWeaponInstance*/ Weapon_Instance_Class;
	} params = {};

	params.Character_Class = Character_Class;
	params.Weapon_Instance_Class = Weapon_Instance_Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PerkSlot.W_PerkSlot_C.ExecuteUbergraph_W_PerkSlot
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PerkSlot_C::ExecuteUbergraph_W_PerkSlot(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkSlot.W_PerkSlot_C.ExecuteUbergraph_W_PerkSlot"));

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


// Function W_PerkSlot.W_PerkSlot_C.SlotSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SelectedSlot                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EPerkType                      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PerkSlot_C::SlotSelected__DelegateSignature(int SelectedSlot, EPerkType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PerkSlot.W_PerkSlot_C.SlotSelected__DelegateSignature"));

	struct
	{
		int                            SelectedSlot;
		EPerkType                      Type;
	} params = {};

	params.SelectedSlot = SelectedSlot;
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
