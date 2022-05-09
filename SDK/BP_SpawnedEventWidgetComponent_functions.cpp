// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SpawnedEventWidgetComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SpawnedEventWidgetComponent.BP_SpawnedEventWidgetComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_SpawnedEventWidgetComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SpawnedEventWidgetComponent.BP_SpawnedEventWidgetComponent_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SpawnedEventWidgetComponent.BP_SpawnedEventWidgetComponent_C.SetTimeRemaining
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TimeRemaining                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SpawnedEventWidgetComponent_C::SetTimeRemaining(float TimeRemaining)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SpawnedEventWidgetComponent.BP_SpawnedEventWidgetComponent_C.SetTimeRemaining"));

	struct
	{
		float                          TimeRemaining;
	} params = {};

	params.TimeRemaining = TimeRemaining;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SpawnedEventWidgetComponent.BP_SpawnedEventWidgetComponent_C.UpdateImage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture*                Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SpawnedEventWidgetComponent_C::UpdateImage(class UTexture* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SpawnedEventWidgetComponent.BP_SpawnedEventWidgetComponent_C.UpdateImage"));

	struct
	{
		class UTexture*                Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_SpawnedEventWidgetComponent.BP_SpawnedEventWidgetComponent_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SpawnedEventWidgetComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SpawnedEventWidgetComponent.BP_SpawnedEventWidgetComponent_C.ReceiveEndPlay"));

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


// Function BP_SpawnedEventWidgetComponent.BP_SpawnedEventWidgetComponent_C.OnMenuToggled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAdvancedUserWidget*     Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_SpawnedEventWidgetComponent_C::OnMenuToggled(class UAdvancedUserWidget* Widget, bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SpawnedEventWidgetComponent.BP_SpawnedEventWidgetComponent_C.OnMenuToggled"));

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


// Function BP_SpawnedEventWidgetComponent.BP_SpawnedEventWidgetComponent_C.ExecuteUbergraph_BP_SpawnedEventWidgetComponent
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SpawnedEventWidgetComponent_C::ExecuteUbergraph_BP_SpawnedEventWidgetComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SpawnedEventWidgetComponent.BP_SpawnedEventWidgetComponent_C.ExecuteUbergraph_BP_SpawnedEventWidgetComponent"));

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
