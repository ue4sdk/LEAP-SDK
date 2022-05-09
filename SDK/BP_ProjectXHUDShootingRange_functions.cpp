// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ProjectXHUDShootingRange_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ProjectXHUDShootingRange.BP_ProjectXHUDShootingRange_C.MatchStartUISetup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXHUDShootingRange_C::MatchStartUISetup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXHUDShootingRange.BP_ProjectXHUDShootingRange_C.MatchStartUISetup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXHUDShootingRange.BP_ProjectXHUDShootingRange_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_ProjectXHUDShootingRange_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXHUDShootingRange.BP_ProjectXHUDShootingRange_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXHUDShootingRange.BP_ProjectXHUDShootingRange_C.ExecuteUbergraph_BP_ProjectXHUDShootingRange
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXHUDShootingRange_C::ExecuteUbergraph_BP_ProjectXHUDShootingRange(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXHUDShootingRange.BP_ProjectXHUDShootingRange_C.ExecuteUbergraph_BP_ProjectXHUDShootingRange"));

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
