// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_StingerDamageAffliction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_StingerDamageAffliction.BP_StingerDamageAffliction_C.K2_Start
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_StingerDamageAffliction_C::K2_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_StingerDamageAffliction.BP_StingerDamageAffliction_C.K2_Start"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_StingerDamageAffliction.BP_StingerDamageAffliction_C.K2_End
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_StingerDamageAffliction_C::K2_End()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_StingerDamageAffliction.BP_StingerDamageAffliction_C.K2_End"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_StingerDamageAffliction.BP_StingerDamageAffliction_C.PrematureEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_StingerDamageAffliction_C::PrematureEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_StingerDamageAffliction.BP_StingerDamageAffliction_C.PrematureEnd"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_StingerDamageAffliction.BP_StingerDamageAffliction_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_StingerDamageAffliction_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_StingerDamageAffliction.BP_StingerDamageAffliction_C.ReceiveTick"));

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


// Function BP_StingerDamageAffliction.BP_StingerDamageAffliction_C.OwnerDied
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Damage                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDamageEvent            DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class AController*             EventInstigator                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerState*            InstigatorPlayerState          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_StingerDamageAffliction_C::OwnerDied(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_StingerDamageAffliction.BP_StingerDamageAffliction_C.OwnerDied"));

	struct
	{
		class AActor*                  Victim;
		float                          Damage;
		struct FDamageEvent            DamageEvent;
		class AController*             EventInstigator;
		class AActor*                  DamageCauser;
		class APlayerState*            InstigatorPlayerState;
	} params = {};

	params.Victim = Victim;
	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.InstigatorPlayerState = InstigatorPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_StingerDamageAffliction.BP_StingerDamageAffliction_C.ExecuteUbergraph_BP_StingerDamageAffliction
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_StingerDamageAffliction_C::ExecuteUbergraph_BP_StingerDamageAffliction(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_StingerDamageAffliction.BP_StingerDamageAffliction_C.ExecuteUbergraph_BP_StingerDamageAffliction"));

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
