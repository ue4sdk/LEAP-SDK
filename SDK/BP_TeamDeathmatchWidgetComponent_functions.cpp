// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_TeamDeathmatchWidgetComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TeamDeathmatchWidgetComponent.BP_TeamDeathmatchWidgetComponent_C.GetAssaultPoint
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AAssaultPoint*           CapturePoint                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_TeamDeathmatchWidgetComponent_C::GetAssaultPoint(class AAssaultPoint** CapturePoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TeamDeathmatchWidgetComponent.BP_TeamDeathmatchWidgetComponent_C.GetAssaultPoint"));

	struct
	{
		class AAssaultPoint*           CapturePoint;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CapturePoint != nullptr)
		*CapturePoint = params.CapturePoint;
}


// Function BP_TeamDeathmatchWidgetComponent.BP_TeamDeathmatchWidgetComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_TeamDeathmatchWidgetComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TeamDeathmatchWidgetComponent.BP_TeamDeathmatchWidgetComponent_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_TeamDeathmatchWidgetComponent.BP_TeamDeathmatchWidgetComponent_C.ExecuteUbergraph_BP_TeamDeathmatchWidgetComponent
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_TeamDeathmatchWidgetComponent_C::ExecuteUbergraph_BP_TeamDeathmatchWidgetComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TeamDeathmatchWidgetComponent.BP_TeamDeathmatchWidgetComponent_C.ExecuteUbergraph_BP_TeamDeathmatchWidgetComponent"));

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
