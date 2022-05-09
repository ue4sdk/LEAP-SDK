// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AfflictionInstanceDashKillBuff_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AfflictionInstanceDashKillBuff.BP_AfflictionInstanceDashKillBuff_C.K2_Start
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_AfflictionInstanceDashKillBuff_C::K2_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AfflictionInstanceDashKillBuff.BP_AfflictionInstanceDashKillBuff_C.K2_Start"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AfflictionInstanceDashKillBuff.BP_AfflictionInstanceDashKillBuff_C.OnKill
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_AfflictionInstanceDashKillBuff_C::OnKill()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AfflictionInstanceDashKillBuff.BP_AfflictionInstanceDashKillBuff_C.OnKill"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AfflictionInstanceDashKillBuff.BP_AfflictionInstanceDashKillBuff_C.ExecuteUbergraph_BP_AfflictionInstanceDashKillBuff
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AfflictionInstanceDashKillBuff_C::ExecuteUbergraph_BP_AfflictionInstanceDashKillBuff(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AfflictionInstanceDashKillBuff.BP_AfflictionInstanceDashKillBuff_C.ExecuteUbergraph_BP_AfflictionInstanceDashKillBuff"));

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
