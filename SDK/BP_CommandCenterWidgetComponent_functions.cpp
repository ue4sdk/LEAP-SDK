// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_CommandCenterWidgetComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CommandCenterWidgetComponent.BP_CommandCenterWidgetComponent_C.GetCommandCenter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_CommandCenter_C*     AsBP_Command_Center            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UBP_CommandCenterWidgetComponent_C::GetCommandCenter(class ABP_CommandCenter_C** AsBP_Command_Center)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CommandCenterWidgetComponent.BP_CommandCenterWidgetComponent_C.GetCommandCenter"));

	struct
	{
		class ABP_CommandCenter_C*     AsBP_Command_Center;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AsBP_Command_Center != nullptr)
		*AsBP_Command_Center = params.AsBP_Command_Center;
}


// Function BP_CommandCenterWidgetComponent.BP_CommandCenterWidgetComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_CommandCenterWidgetComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CommandCenterWidgetComponent.BP_CommandCenterWidgetComponent_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_CommandCenterWidgetComponent.BP_CommandCenterWidgetComponent_C.CustomEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAdvancedUserWidget*     Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_CommandCenterWidgetComponent_C::CustomEvent(class UAdvancedUserWidget* Widget, bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CommandCenterWidgetComponent.BP_CommandCenterWidgetComponent_C.CustomEvent"));

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


// Function BP_CommandCenterWidgetComponent.BP_CommandCenterWidgetComponent_C.ExecuteUbergraph_BP_CommandCenterWidgetComponent
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_CommandCenterWidgetComponent_C::ExecuteUbergraph_BP_CommandCenterWidgetComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_CommandCenterWidgetComponent.BP_CommandCenterWidgetComponent_C.ExecuteUbergraph_BP_CommandCenterWidgetComponent"));

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
