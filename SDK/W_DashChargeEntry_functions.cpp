// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_DashChargeEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_DashChargeEntry.W_DashChargeEntry_C.GetIconMaterialInstance
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic* ProgressMaterialInstance       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DashChargeEntry_C::GetIconMaterialInstance(class UMaterialInstanceDynamic** ProgressMaterialInstance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DashChargeEntry.W_DashChargeEntry_C.GetIconMaterialInstance"));

	struct
	{
		class UMaterialInstanceDynamic* ProgressMaterialInstance;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ProgressMaterialInstance != nullptr)
		*ProgressMaterialInstance = params.ProgressMaterialInstance;
}


// Function W_DashChargeEntry.W_DashChargeEntry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_DashChargeEntry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DashChargeEntry.W_DashChargeEntry_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DashChargeEntry.W_DashChargeEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_DashChargeEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DashChargeEntry.W_DashChargeEntry_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DashChargeEntry.W_DashChargeEntry_C.RechargeDash
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          RechargeStartTime              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            DashRechargingValue            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DashChargeEntry_C::RechargeDash(float RechargeStartTime, float Duration, int DashRechargingValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DashChargeEntry.W_DashChargeEntry_C.RechargeDash"));

	struct
	{
		float                          RechargeStartTime;
		float                          Duration;
		int                            DashRechargingValue;
	} params = {};

	params.RechargeStartTime = RechargeStartTime;
	params.Duration = Duration;
	params.DashRechargingValue = DashRechargingValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DashChargeEntry.W_DashChargeEntry_C.fill
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DashChargeEntry_C::fill(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DashChargeEntry.W_DashChargeEntry_C.fill"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DashChargeEntry.W_DashChargeEntry_C.ToggleCanDash
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bPickA                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            DashCharges                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DashChargeEntry_C::ToggleCanDash(bool bPickA, int DashCharges)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DashChargeEntry.W_DashChargeEntry_C.ToggleCanDash"));

	struct
	{
		bool                           bPickA;
		int                            DashCharges;
	} params = {};

	params.bPickA = bPickA;
	params.DashCharges = DashCharges;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DashChargeEntry.W_DashChargeEntry_C.OnComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DashChargeEntry_C::OnComplete(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DashChargeEntry.W_DashChargeEntry_C.OnComplete"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DashChargeEntry.W_DashChargeEntry_C.ExecuteUbergraph_W_DashChargeEntry
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DashChargeEntry_C::ExecuteUbergraph_W_DashChargeEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DashChargeEntry.W_DashChargeEntry_C.ExecuteUbergraph_W_DashChargeEntry"));

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
