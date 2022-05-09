// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ProjectXHUDTeamDeathmatch_Spectator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ProjectXHUDTeamDeathmatch_Spectator.BP_ProjectXHUDTeamDeathmatch_Spectator_C.ShouldCloseMap
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_ProjectXHUDTeamDeathmatch_Spectator_C::ShouldCloseMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXHUDTeamDeathmatch_Spectator.BP_ProjectXHUDTeamDeathmatch_Spectator_C.ShouldCloseMap"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_ProjectXHUDTeamDeathmatch_Spectator.BP_ProjectXHUDTeamDeathmatch_Spectator_C.ShouldOpenMap
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_ProjectXHUDTeamDeathmatch_Spectator_C::ShouldOpenMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXHUDTeamDeathmatch_Spectator.BP_ProjectXHUDTeamDeathmatch_Spectator_C.ShouldOpenMap"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_ProjectXHUDTeamDeathmatch_Spectator.BP_ProjectXHUDTeamDeathmatch_Spectator_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_ProjectXHUDTeamDeathmatch_Spectator_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXHUDTeamDeathmatch_Spectator.BP_ProjectXHUDTeamDeathmatch_Spectator_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXHUDTeamDeathmatch_Spectator.BP_ProjectXHUDTeamDeathmatch_Spectator_C.ExecuteUbergraph_BP_ProjectXHUDTeamDeathmatch_Spectator
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXHUDTeamDeathmatch_Spectator_C::ExecuteUbergraph_BP_ProjectXHUDTeamDeathmatch_Spectator(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXHUDTeamDeathmatch_Spectator.BP_ProjectXHUDTeamDeathmatch_Spectator_C.ExecuteUbergraph_BP_ProjectXHUDTeamDeathmatch_Spectator"));

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
