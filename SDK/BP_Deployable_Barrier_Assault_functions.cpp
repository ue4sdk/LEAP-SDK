// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Deployable_Barrier_Assault_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Deployable_Barrier_Assault.BP_Deployable_Barrier_Assault_C.InitializeForTeam
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_Barrier_Assault_C::InitializeForTeam(int Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_Barrier_Assault.BP_Deployable_Barrier_Assault_C.InitializeForTeam"));

	struct
	{
		int                            Team;
	} params = {};

	params.Team = Team;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_Barrier_Assault.BP_Deployable_Barrier_Assault_C.ExecuteUbergraph_BP_Deployable_Barrier_Assault
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_Barrier_Assault_C::ExecuteUbergraph_BP_Deployable_Barrier_Assault(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_Barrier_Assault.BP_Deployable_Barrier_Assault_C.ExecuteUbergraph_BP_Deployable_Barrier_Assault"));

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
