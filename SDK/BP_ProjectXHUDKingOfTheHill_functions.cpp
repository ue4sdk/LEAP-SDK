// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ProjectXHUDKingOfTheHill_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ProjectXHUDKingOfTheHill.BP_ProjectXHUDKingOfTheHill_C.MatchStartUISetup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXHUDKingOfTheHill_C::MatchStartUISetup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXHUDKingOfTheHill.BP_ProjectXHUDKingOfTheHill_C.MatchStartUISetup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXHUDKingOfTheHill.BP_ProjectXHUDKingOfTheHill_C.ExecuteUbergraph_BP_ProjectXHUDKingOfTheHill
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXHUDKingOfTheHill_C::ExecuteUbergraph_BP_ProjectXHUDKingOfTheHill(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXHUDKingOfTheHill.BP_ProjectXHUDKingOfTheHill_C.ExecuteUbergraph_BP_ProjectXHUDKingOfTheHill"));

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
