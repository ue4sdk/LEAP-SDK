// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ProjectXHUDBaseControl_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ProjectXHUDBaseControl.BP_ProjectXHUDBaseControl_C.SortCapturePointWidgets
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 A                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 B                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bResult                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXHUDBaseControl_C::SortCapturePointWidgets(class UObject* A, class UObject* B, bool* bResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXHUDBaseControl.BP_ProjectXHUDBaseControl_C.SortCapturePointWidgets"));

	struct
	{
		class UObject*                 A;
		class UObject*                 B;
		bool                           bResult;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BP_ProjectXHUDBaseControl.BP_ProjectXHUDBaseControl_C.MatchStartUISetup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXHUDBaseControl_C::MatchStartUISetup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXHUDBaseControl.BP_ProjectXHUDBaseControl_C.MatchStartUISetup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXHUDBaseControl.BP_ProjectXHUDBaseControl_C.ExecuteUbergraph_BP_ProjectXHUDBaseControl
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXHUDBaseControl_C::ExecuteUbergraph_BP_ProjectXHUDBaseControl(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXHUDBaseControl.BP_ProjectXHUDBaseControl_C.ExecuteUbergraph_BP_ProjectXHUDBaseControl"));

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
