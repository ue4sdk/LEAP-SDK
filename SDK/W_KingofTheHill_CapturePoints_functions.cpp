// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_KingofTheHill_CapturePoints_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_KingofTheHill_CapturePoints.W_KingofTheHill_CapturePoints_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_KingofTheHill_CapturePoints_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KingofTheHill_CapturePoints.W_KingofTheHill_CapturePoints_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KingofTheHill_CapturePoints.W_KingofTheHill_CapturePoints_C.OnPhaseChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKingOfTheHillPhaseInfo PhaseInfo                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UW_KingofTheHill_CapturePoints_C::OnPhaseChanged(const struct FKingOfTheHillPhaseInfo& PhaseInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KingofTheHill_CapturePoints.W_KingofTheHill_CapturePoints_C.OnPhaseChanged"));

	struct
	{
		struct FKingOfTheHillPhaseInfo PhaseInfo;
	} params = {};

	params.PhaseInfo = PhaseInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KingofTheHill_CapturePoints.W_KingofTheHill_CapturePoints_C.ExecuteUbergraph_W_KingofTheHill_CapturePoints
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KingofTheHill_CapturePoints_C::ExecuteUbergraph_W_KingofTheHill_CapturePoints(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KingofTheHill_CapturePoints.W_KingofTheHill_CapturePoints_C.ExecuteUbergraph_W_KingofTheHill_CapturePoints"));

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


// Function W_KingofTheHill_CapturePoints.W_KingofTheHill_CapturePoints_C.OnIconsUpdated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_KingofTheHill_CapturePoints_C::OnIconsUpdated__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KingofTheHill_CapturePoints.W_KingofTheHill_CapturePoints_C.OnIconsUpdated__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
