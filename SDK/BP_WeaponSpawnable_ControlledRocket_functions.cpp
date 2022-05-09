// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_WeaponSpawnable_ControlledRocket_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WeaponSpawnable_ControlledRocket.BP_WeaponSpawnable_ControlledRocket_C.K2_OnDeployableControlStop
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_WeaponSpawnable_ControlledRocket_C::K2_OnDeployableControlStop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponSpawnable_ControlledRocket.BP_WeaponSpawnable_ControlledRocket_C.K2_OnDeployableControlStop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WeaponSpawnable_ControlledRocket.BP_WeaponSpawnable_ControlledRocket_C.OnDeathAnimationEndCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_WeaponSpawnable_ControlledRocket_C::OnDeathAnimationEndCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponSpawnable_ControlledRocket.BP_WeaponSpawnable_ControlledRocket_C.OnDeathAnimationEndCallback"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WeaponSpawnable_ControlledRocket.BP_WeaponSpawnable_ControlledRocket_C.K2_Fire
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_WeaponSpawnable_ControlledRocket_C::K2_Fire(unsigned char Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponSpawnable_ControlledRocket.BP_WeaponSpawnable_ControlledRocket_C.K2_Fire"));

	struct
	{
		unsigned char                  Mode;
	} params = {};

	params.Mode = Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WeaponSpawnable_ControlledRocket.BP_WeaponSpawnable_ControlledRocket_C.GetAndCacheAnimInstance
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_WeaponSpawnable_ControlledRocket_C::GetAndCacheAnimInstance()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponSpawnable_ControlledRocket.BP_WeaponSpawnable_ControlledRocket_C.GetAndCacheAnimInstance"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WeaponSpawnable_ControlledRocket.BP_WeaponSpawnable_ControlledRocket_C.K2_OnDeployableControlStarted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class ADeployable*             Deployable                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_WeaponSpawnable_ControlledRocket_C::K2_OnDeployableControlStarted(class ADeployable* Deployable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponSpawnable_ControlledRocket.BP_WeaponSpawnable_ControlledRocket_C.K2_OnDeployableControlStarted"));

	struct
	{
		class ADeployable*             Deployable;
	} params = {};

	params.Deployable = Deployable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WeaponSpawnable_ControlledRocket.BP_WeaponSpawnable_ControlledRocket_C.K2_OnDeployableControlStopFinished
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_WeaponSpawnable_ControlledRocket_C::K2_OnDeployableControlStopFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponSpawnable_ControlledRocket.BP_WeaponSpawnable_ControlledRocket_C.K2_OnDeployableControlStopFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WeaponSpawnable_ControlledRocket.BP_WeaponSpawnable_ControlledRocket_C.ExecuteUbergraph_BP_WeaponSpawnable_ControlledRocket
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_WeaponSpawnable_ControlledRocket_C::ExecuteUbergraph_BP_WeaponSpawnable_ControlledRocket(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WeaponSpawnable_ControlledRocket.BP_WeaponSpawnable_ControlledRocket_C.ExecuteUbergraph_BP_WeaponSpawnable_ControlledRocket"));

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
