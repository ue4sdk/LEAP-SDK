// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_TeamDeathMatchSpawnPoint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TeamDeathMatchSpawnPoint.BP_TeamDeathMatchSpawnPoint_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_TeamDeathMatchSpawnPoint_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TeamDeathMatchSpawnPoint.BP_TeamDeathMatchSpawnPoint_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_TeamDeathMatchSpawnPoint.BP_TeamDeathMatchSpawnPoint_C.ExecuteUbergraph_BP_TeamDeathMatchSpawnPoint
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_TeamDeathMatchSpawnPoint_C::ExecuteUbergraph_BP_TeamDeathMatchSpawnPoint(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TeamDeathMatchSpawnPoint.BP_TeamDeathMatchSpawnPoint_C.ExecuteUbergraph_BP_TeamDeathMatchSpawnPoint"));

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
