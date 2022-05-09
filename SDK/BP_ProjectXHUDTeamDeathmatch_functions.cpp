// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ProjectXHUDTeamDeathmatch_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ProjectXHUDTeamDeathmatch.BP_ProjectXHUDTeamDeathMatch_C.MatchStartUISetup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXHUDTeamDeathMatch_C::MatchStartUISetup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXHUDTeamDeathmatch.BP_ProjectXHUDTeamDeathMatch_C.MatchStartUISetup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXHUDTeamDeathmatch.BP_ProjectXHUDTeamDeathMatch_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_ProjectXHUDTeamDeathMatch_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXHUDTeamDeathmatch.BP_ProjectXHUDTeamDeathMatch_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXHUDTeamDeathmatch.BP_ProjectXHUDTeamDeathMatch_C.ExecuteUbergraph_BP_ProjectXHUDTeamDeathMatch
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXHUDTeamDeathMatch_C::ExecuteUbergraph_BP_ProjectXHUDTeamDeathMatch(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXHUDTeamDeathmatch.BP_ProjectXHUDTeamDeathMatch_C.ExecuteUbergraph_BP_ProjectXHUDTeamDeathMatch"));

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
