// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_DeployableMarker_SpawnPoint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DeployableMarker_SpawnPoint.BP_DeployableMarker_SpawnPoint_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_DeployableMarker_SpawnPoint_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DeployableMarker_SpawnPoint.BP_DeployableMarker_SpawnPoint_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DeployableMarker_SpawnPoint.BP_DeployableMarker_SpawnPoint_C.OnMarkerFailed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EPlacementFailureReason        reason                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DeployableMarker_SpawnPoint_C::OnMarkerFailed(EPlacementFailureReason reason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DeployableMarker_SpawnPoint.BP_DeployableMarker_SpawnPoint_C.OnMarkerFailed"));

	struct
	{
		EPlacementFailureReason        reason;
	} params = {};

	params.reason = reason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DeployableMarker_SpawnPoint.BP_DeployableMarker_SpawnPoint_C.OnMarkerSuccess
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_DeployableMarker_SpawnPoint_C::OnMarkerSuccess()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DeployableMarker_SpawnPoint.BP_DeployableMarker_SpawnPoint_C.OnMarkerSuccess"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DeployableMarker_SpawnPoint.BP_DeployableMarker_SpawnPoint_C.ExecuteUbergraph_BP_DeployableMarker_SpawnPoint
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DeployableMarker_SpawnPoint_C::ExecuteUbergraph_BP_DeployableMarker_SpawnPoint(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DeployableMarker_SpawnPoint.BP_DeployableMarker_SpawnPoint_C.ExecuteUbergraph_BP_DeployableMarker_SpawnPoint"));

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
