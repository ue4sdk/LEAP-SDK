// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_WeaponHotBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_WeaponHotBar.W_WeaponHotBar_C.OnPawnAcquired_4A8CF4254E2E63C34D3B48A60AC4D4D3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponHotBar_C::OnPawnAcquired_4A8CF4254E2E63C34D3B48A60AC4D4D3(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponHotBar.W_WeaponHotBar_C.OnPawnAcquired_4A8CF4254E2E63C34D3B48A60AC4D4D3"));

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


// Function W_WeaponHotBar.W_WeaponHotBar_C.OnPawnAcquired_C0D28E4E47A2B52CA68436A63C9E2EE0
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponHotBar_C::OnPawnAcquired_C0D28E4E47A2B52CA68436A63C9E2EE0(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponHotBar.W_WeaponHotBar_C.OnPawnAcquired_C0D28E4E47A2B52CA68436A63C9E2EE0"));

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


// Function W_WeaponHotBar.W_WeaponHotBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_WeaponHotBar_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponHotBar.W_WeaponHotBar_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponHotBar.W_WeaponHotBar_C.OnWeaponAdded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWeaponInstance*         Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponHotBar_C::OnWeaponAdded(class UWeaponInstance* Weapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponHotBar.W_WeaponHotBar_C.OnWeaponAdded"));

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


// Function W_WeaponHotBar.W_WeaponHotBar_C.OnWeaponRemoved
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_WeaponHotBar_C::OnWeaponRemoved()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponHotBar.W_WeaponHotBar_C.OnWeaponRemoved"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponHotBar.W_WeaponHotBar_C.OnWeaponChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWeaponInstance*         Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponHotBar_C::OnWeaponChanged(class UWeaponInstance* Weapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponHotBar.W_WeaponHotBar_C.OnWeaponChanged"));

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


// Function W_WeaponHotBar.W_WeaponHotBar_C.CreateWeaponHotBarIcon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWeaponInstance*         Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponHotBar_C::CreateWeaponHotBarIcon(int Index, class UWeaponInstance* Weapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponHotBar.W_WeaponHotBar_C.CreateWeaponHotBarIcon"));

	struct
	{
		int                            Index;
		class UWeaponInstance*         Weapon;
	} params = {};

	params.Index = Index;
	params.Weapon = Weapon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponHotBar.W_WeaponHotBar_C.AddSingleItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWeaponInstance*         NewWeapon                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponHotBar_C::AddSingleItem(class UWeaponInstance* NewWeapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponHotBar.W_WeaponHotBar_C.AddSingleItem"));

	struct
	{
		class UWeaponInstance*         NewWeapon;
	} params = {};

	params.NewWeapon = NewWeapon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponHotBar.W_WeaponHotBar_C.RefreshWeaponHotBar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_WeaponHotBar_C::RefreshWeaponHotBar()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponHotBar.W_WeaponHotBar_C.RefreshWeaponHotBar"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponHotBar.W_WeaponHotBar_C.RecreateWeaponHotBar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_WeaponHotBar_C::RecreateWeaponHotBar()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponHotBar.W_WeaponHotBar_C.RecreateWeaponHotBar"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_WeaponHotBar.W_WeaponHotBar_C.ExecuteUbergraph_W_WeaponHotBar
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponHotBar_C::ExecuteUbergraph_W_WeaponHotBar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponHotBar.W_WeaponHotBar_C.ExecuteUbergraph_W_WeaponHotBar"));

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


// Function W_WeaponHotBar.W_WeaponHotBar_C.EquipmentChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWeaponInstance*         EquipedWeapon                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_WeaponHotBar_C::EquipmentChanged__DelegateSignature(class UWeaponInstance* EquipedWeapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_WeaponHotBar.W_WeaponHotBar_C.EquipmentChanged__DelegateSignature"));

	struct
	{
		class UWeaponInstance*         EquipedWeapon;
	} params = {};

	params.EquipedWeapon = EquipedWeapon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
