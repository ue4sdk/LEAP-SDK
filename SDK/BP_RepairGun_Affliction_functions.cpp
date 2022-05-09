// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_RepairGun_Affliction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RepairGun_Affliction.BP_RepairGun_Affliction_C.TakeDamage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDamageEvent            DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class AController*             EventInstigator                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UBP_RepairGun_Affliction_C::TakeDamage(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RepairGun_Affliction.BP_RepairGun_Affliction_C.TakeDamage"));

	struct
	{
		float                          Damage;
		struct FDamageEvent            DamageEvent;
		class AController*             EventInstigator;
		class AActor*                  DamageCauser;
		float                          ReturnValue;
	} params = {};

	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_RepairGun_Affliction.BP_RepairGun_Affliction_C.SetHealDelay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_RepairGun_Affliction_C::SetHealDelay(float Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RepairGun_Affliction.BP_RepairGun_Affliction_C.SetHealDelay"));

	struct
	{
		float                          Damage;
	} params = {};

	params.Damage = Damage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_RepairGun_Affliction.BP_RepairGun_Affliction_C.K2_Start
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_RepairGun_Affliction_C::K2_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RepairGun_Affliction.BP_RepairGun_Affliction_C.K2_Start"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_RepairGun_Affliction.BP_RepairGun_Affliction_C.K2_End
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_RepairGun_Affliction_C::K2_End()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RepairGun_Affliction.BP_RepairGun_Affliction_C.K2_End"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_RepairGun_Affliction.BP_RepairGun_Affliction_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_RepairGun_Affliction_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RepairGun_Affliction.BP_RepairGun_Affliction_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_RepairGun_Affliction.BP_RepairGun_Affliction_C.ExecuteUbergraph_BP_RepairGun_Affliction
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_RepairGun_Affliction_C::ExecuteUbergraph_BP_RepairGun_Affliction(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RepairGun_Affliction.BP_RepairGun_Affliction_C.ExecuteUbergraph_BP_RepairGun_Affliction"));

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
