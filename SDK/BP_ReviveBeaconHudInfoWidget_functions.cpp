// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ReviveBeaconHudInfoWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ReviveBeaconHudInfoWidget.BP_ReviveBeaconHudInfoWidget_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_ReviveBeaconHudInfoWidget_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ReviveBeaconHudInfoWidget.BP_ReviveBeaconHudInfoWidget_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ReviveBeaconHudInfoWidget.BP_ReviveBeaconHudInfoWidget_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ReviveBeaconHudInfoWidget_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ReviveBeaconHudInfoWidget.BP_ReviveBeaconHudInfoWidget_C.ReceiveEndPlay"));

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


// Function BP_ReviveBeaconHudInfoWidget.BP_ReviveBeaconHudInfoWidget_C.BeginTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ReviveStartTime                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ReviveDuration                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ReviveBeaconHudInfoWidget_C::BeginTimer(float ReviveStartTime, float ReviveDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ReviveBeaconHudInfoWidget.BP_ReviveBeaconHudInfoWidget_C.BeginTimer"));

	struct
	{
		float                          ReviveStartTime;
		float                          ReviveDuration;
	} params = {};

	params.ReviveStartTime = ReviveStartTime;
	params.ReviveDuration = ReviveDuration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ReviveBeaconHudInfoWidget.BP_ReviveBeaconHudInfoWidget_C.TogglePlayerCan RedeployState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_ReviveBeaconHudInfoWidget_C::TogglePlayerCan_RedeployState(bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ReviveBeaconHudInfoWidget.BP_ReviveBeaconHudInfoWidget_C.TogglePlayerCan RedeployState"));

	struct
	{
		bool                           bToggle;
	} params = {};

	params.bToggle = bToggle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ReviveBeaconHudInfoWidget.BP_ReviveBeaconHudInfoWidget_C.ExecuteUbergraph_BP_ReviveBeaconHudInfoWidget
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ReviveBeaconHudInfoWidget_C::ExecuteUbergraph_BP_ReviveBeaconHudInfoWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ReviveBeaconHudInfoWidget.BP_ReviveBeaconHudInfoWidget_C.ExecuteUbergraph_BP_ReviveBeaconHudInfoWidget"));

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
