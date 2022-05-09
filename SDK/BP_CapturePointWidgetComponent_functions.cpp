// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_CapturePointWidgetComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CapturePointWidgetComponent.BP_CapturePointWidgetComponent_C.GetCapturePoint
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ACapturePoint*           CapturePoint                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CapturePointWidgetComponent_C::GetCapturePoint(class ACapturePoint** CapturePoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CapturePointWidgetComponent.BP_CapturePointWidgetComponent_C.GetCapturePoint"));

	struct
	{
		class ACapturePoint*           CapturePoint;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CapturePoint != nullptr)
		*CapturePoint = params.CapturePoint;
}


// Function BP_CapturePointWidgetComponent.BP_CapturePointWidgetComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_CapturePointWidgetComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CapturePointWidgetComponent.BP_CapturePointWidgetComponent_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CapturePointWidgetComponent.BP_CapturePointWidgetComponent_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CapturePointWidgetComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CapturePointWidgetComponent.BP_CapturePointWidgetComponent_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params = {};

	params.EndPlayReason = EndPlayReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CapturePointWidgetComponent.BP_CapturePointWidgetComponent_C.OnMenuToggled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAdvancedUserWidget*     Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_CapturePointWidgetComponent_C::OnMenuToggled(class UAdvancedUserWidget* Widget, bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CapturePointWidgetComponent.BP_CapturePointWidgetComponent_C.OnMenuToggled"));

	struct
	{
		class UAdvancedUserWidget*     Widget;
		bool                           bToggle;
	} params = {};

	params.Widget = Widget;
	params.bToggle = bToggle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CapturePointWidgetComponent.BP_CapturePointWidgetComponent_C.UpdateDescriptionText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   DescriptionText                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UBP_CapturePointWidgetComponent_C::UpdateDescriptionText(const struct FText& DescriptionText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CapturePointWidgetComponent.BP_CapturePointWidgetComponent_C.UpdateDescriptionText"));

	struct
	{
		struct FText                   DescriptionText;
	} params = {};

	params.DescriptionText = DescriptionText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CapturePointWidgetComponent.BP_CapturePointWidgetComponent_C.ExecuteUbergraph_BP_CapturePointWidgetComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CapturePointWidgetComponent_C::ExecuteUbergraph_BP_CapturePointWidgetComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CapturePointWidgetComponent.BP_CapturePointWidgetComponent_C.ExecuteUbergraph_BP_CapturePointWidgetComponent"));

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
