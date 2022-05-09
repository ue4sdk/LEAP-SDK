// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Weapon_SniperRifle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Weapon_SniperRifle.BP_Weapon_SniperRifle_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_Weapon_SniperRifle_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_SniperRifle.BP_Weapon_SniperRifle_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_SniperRifle.BP_Weapon_SniperRifle_C.TightAimStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_Weapon_SniperRifle_C::TightAimStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_SniperRifle.BP_Weapon_SniperRifle_C.TightAimStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_SniperRifle.BP_Weapon_SniperRifle_C.TightAimEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_Weapon_SniperRifle_C::TightAimEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_SniperRifle.BP_Weapon_SniperRifle_C.TightAimEnd"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_SniperRifle.BP_Weapon_SniperRifle_C.K2_UnEquip
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_Weapon_SniperRifle_C::K2_UnEquip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_SniperRifle.BP_Weapon_SniperRifle_C.K2_UnEquip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_SniperRifle.BP_Weapon_SniperRifle_C.K2_FireComplete
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_SniperRifle_C::K2_FireComplete(unsigned char Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_SniperRifle.BP_Weapon_SniperRifle_C.K2_FireComplete"));

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


// Function BP_Weapon_SniperRifle.BP_Weapon_SniperRifle_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_SniperRifle_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_SniperRifle.BP_Weapon_SniperRifle_C.ReceiveTick"));

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


// Function BP_Weapon_SniperRifle.BP_Weapon_SniperRifle_C.K2_OwnerDied
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_Weapon_SniperRifle_C::K2_OwnerDied()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_SniperRifle.BP_Weapon_SniperRifle_C.K2_OwnerDied"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_SniperRifle.BP_Weapon_SniperRifle_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_SniperRifle_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_SniperRifle.BP_Weapon_SniperRifle_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params = {};

	params.EndPlayReason = EndPlayReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_SniperRifle.BP_Weapon_SniperRifle_C.ExecuteUbergraph_BP_Weapon_SniperRifle
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_SniperRifle_C::ExecuteUbergraph_BP_Weapon_SniperRifle(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_SniperRifle.BP_Weapon_SniperRifle_C.ExecuteUbergraph_BP_Weapon_SniperRifle"));

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
