// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_WaveRemnenantVisbility_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WaveRemnenantVisbility.BP_WaveRemnenantVisbility_C.K2_Start
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_WaveRemnenantVisbility_C::K2_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WaveRemnenantVisbility.BP_WaveRemnenantVisbility_C.K2_Start"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WaveRemnenantVisbility.BP_WaveRemnenantVisbility_C.K2_End
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_WaveRemnenantVisbility_C::K2_End()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WaveRemnenantVisbility.BP_WaveRemnenantVisbility_C.K2_End"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_WaveRemnenantVisbility.BP_WaveRemnenantVisbility_C.ExecuteUbergraph_BP_WaveRemnenantVisbility
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_WaveRemnenantVisbility_C::ExecuteUbergraph_BP_WaveRemnenantVisbility(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_WaveRemnenantVisbility.BP_WaveRemnenantVisbility_C.ExecuteUbergraph_BP_WaveRemnenantVisbility"));

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
