// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_WeaponInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_WeaponInfo.W_WeaponInfo_C.UpdateBar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_UI_Progress_SimpleLinear_C* Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          CurrentValue                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MaxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponInfo_C::UpdateBar(class UW_UI_Progress_SimpleLinear_C* Target, float CurrentValue, float MaxValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponInfo.W_WeaponInfo_C.UpdateBar"));

	struct
	{
		class UW_UI_Progress_SimpleLinear_C* Target;
		float                          CurrentValue;
		float                          MaxValue;
	} params = {};

	params.Target = Target;
	params.CurrentValue = CurrentValue;
	params.MaxValue = MaxValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponInfo.W_WeaponInfo_C.UpdateDamageText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWeaponInstance*/ Class                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponInfo_C::UpdateDamageText(class UClass* /*UWeaponInstance*/ Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponInfo.W_WeaponInfo_C.UpdateDamageText"));

	struct
	{
		class UClass* /*UWeaponInstance*/ Class;
	} params = {};

	params.Class = Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponInfo.W_WeaponInfo_C.OnLoaded_0BBC0D25435C3084661465A915B5E16B
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponInfo_C::OnLoaded_0BBC0D25435C3084661465A915B5E16B(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponInfo.W_WeaponInfo_C.OnLoaded_0BBC0D25435C3084661465A915B5E16B"));

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


// Function W_WeaponInfo.W_WeaponInfo_C.UpdateWeaponDisplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWeaponInstance*/ Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EEquipSlot                     Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponInfo_C::UpdateWeaponDisplay(class UClass* /*UWeaponInstance*/ Weapon, EEquipSlot Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponInfo.W_WeaponInfo_C.UpdateWeaponDisplay"));

	struct
	{
		class UClass* /*UWeaponInstance*/ Weapon;
		EEquipSlot                     Slot;
	} params = {};

	params.Weapon = Weapon;
	params.Slot = Slot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponInfo.W_WeaponInfo_C.UpdateMagSize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWeaponInstance*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UW_WeaponInfo_C::UpdateMagSize(class UClass* /*UWeaponInstance*/ Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponInfo.W_WeaponInfo_C.UpdateMagSize"));

	struct
	{
		class UClass* /*UWeaponInstance*/ Class;
	} params = {};

	params.Class = Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponInfo.W_WeaponInfo_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_WeaponInfo_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponInfo.W_WeaponInfo_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponInfo.W_WeaponInfo_C.ExecuteUbergraph_W_WeaponInfo
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponInfo_C::ExecuteUbergraph_W_WeaponInfo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponInfo.W_WeaponInfo_C.ExecuteUbergraph_W_WeaponInfo"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
