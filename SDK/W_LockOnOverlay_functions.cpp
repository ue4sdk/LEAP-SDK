// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_LockOnOverlay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_LockOnOverlay.W_LockOnOverlay_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_LockOnOverlay_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LockOnOverlay.W_LockOnOverlay_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LockOnOverlay.W_LockOnOverlay_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_LockOnOverlay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LockOnOverlay.W_LockOnOverlay_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LockOnOverlay.W_LockOnOverlay_C.OnLock
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWeaponInstanceProjectile* Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_LockOnOverlay_C::OnLock(class UWeaponInstanceProjectile* Weapon, class AActor* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LockOnOverlay.W_LockOnOverlay_C.OnLock"));

	struct
	{
		class UWeaponInstanceProjectile* Weapon;
		class AActor*                  Target;
	} params = {};

	params.Weapon = Weapon;
	params.Target = Target;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LockOnOverlay.W_LockOnOverlay_C.OnLockLost
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWeaponInstanceProjectile* Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_LockOnOverlay_C::OnLockLost(class UWeaponInstanceProjectile* Weapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LockOnOverlay.W_LockOnOverlay_C.OnLockLost"));

	struct
	{
		class UWeaponInstanceProjectile* Weapon;
	} params = {};

	params.Weapon = Weapon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LockOnOverlay.W_LockOnOverlay_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_LockOnOverlay_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LockOnOverlay.W_LockOnOverlay_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LockOnOverlay.W_LockOnOverlay_C.LockOnStrengthChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWeaponInstanceProjectile* Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DeltaStrength                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_LockOnOverlay_C::LockOnStrengthChanged(class UWeaponInstanceProjectile* Weapon, float DeltaStrength)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LockOnOverlay.W_LockOnOverlay_C.LockOnStrengthChanged"));

	struct
	{
		class UWeaponInstanceProjectile* Weapon;
		float                          DeltaStrength;
	} params = {};

	params.Weapon = Weapon;
	params.DeltaStrength = DeltaStrength;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LockOnOverlay.W_LockOnOverlay_C.LockOnStopped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWeaponInstanceProjectile* Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_LockOnOverlay_C::LockOnStopped(class UWeaponInstanceProjectile* Weapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LockOnOverlay.W_LockOnOverlay_C.LockOnStopped"));

	struct
	{
		class UWeaponInstanceProjectile* Weapon;
	} params = {};

	params.Weapon = Weapon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LockOnOverlay.W_LockOnOverlay_C.LockOnStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWeaponInstanceProjectile* Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_LockOnOverlay_C::LockOnStart(class UWeaponInstanceProjectile* Weapon, class AActor* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LockOnOverlay.W_LockOnOverlay_C.LockOnStart"));

	struct
	{
		class UWeaponInstanceProjectile* Weapon;
		class AActor*                  Target;
	} params = {};

	params.Weapon = Weapon;
	params.Target = Target;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_LockOnOverlay.W_LockOnOverlay_C.ExecuteUbergraph_W_LockOnOverlay
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_LockOnOverlay_C::ExecuteUbergraph_W_LockOnOverlay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_LockOnOverlay.W_LockOnOverlay_C.ExecuteUbergraph_W_LockOnOverlay"));

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
