// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_CommandCenter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CommandCenter.BP_CommandCenter_C.OnCommandCenterInitialized
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_CommandCenter_C::OnCommandCenterInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CommandCenter.BP_CommandCenter_C.OnCommandCenterInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CommandCenter.BP_CommandCenter_C.ExecuteUbergraph_BP_CommandCenter
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_CommandCenter_C::ExecuteUbergraph_BP_CommandCenter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CommandCenter.BP_CommandCenter_C.ExecuteUbergraph_BP_CommandCenter"));

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
