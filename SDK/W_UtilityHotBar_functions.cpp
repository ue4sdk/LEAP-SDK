// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_UtilityHotBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_UtilityHotBar.W_UtilityHotBar_C.OnPawnAcquired_B7FD5A8249A78BDE54BB78A1A9D9F78A
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UtilityHotBar_C::OnPawnAcquired_B7FD5A8249A78BDE54BB78A1A9D9F78A(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UtilityHotBar.W_UtilityHotBar_C.OnPawnAcquired_B7FD5A8249A78BDE54BB78A1A9D9F78A"));

	struct
	{
		class APawn*                   Pawn;
	} params = {};

	params.Pawn = Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UtilityHotBar.W_UtilityHotBar_C.OnPawnAcquired_5F7A0DEF497C74775D4B91A9F6EA2512
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UtilityHotBar_C::OnPawnAcquired_5F7A0DEF497C74775D4B91A9F6EA2512(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UtilityHotBar.W_UtilityHotBar_C.OnPawnAcquired_5F7A0DEF497C74775D4B91A9F6EA2512"));

	struct
	{
		class APawn*                   Pawn;
	} params = {};

	params.Pawn = Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UtilityHotBar.W_UtilityHotBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_UtilityHotBar_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UtilityHotBar.W_UtilityHotBar_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UtilityHotBar.W_UtilityHotBar_C.RefreshAbilities
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UtilityHotBar_C::RefreshAbilities(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UtilityHotBar.W_UtilityHotBar_C.RefreshAbilities"));

	struct
	{
		class APawn*                   Pawn;
	} params = {};

	params.Pawn = Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UtilityHotBar.W_UtilityHotBar_C.OnWeaponAdded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWeaponInstance*         Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UtilityHotBar_C::OnWeaponAdded(class UWeaponInstance* Weapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UtilityHotBar.W_UtilityHotBar_C.OnWeaponAdded"));

	struct
	{
		class UWeaponInstance*         Weapon;
	} params = {};

	params.Weapon = Weapon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UtilityHotBar.W_UtilityHotBar_C.OnWeaponRemoved
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_UtilityHotBar_C::OnWeaponRemoved()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UtilityHotBar.W_UtilityHotBar_C.OnWeaponRemoved"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UtilityHotBar.W_UtilityHotBar_C.ExecuteUbergraph_W_UtilityHotBar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UtilityHotBar_C::ExecuteUbergraph_W_UtilityHotBar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UtilityHotBar.W_UtilityHotBar_C.ExecuteUbergraph_W_UtilityHotBar"));

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
