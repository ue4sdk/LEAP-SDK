// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_VehicleInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_VehicleInfo.W_VehicleInfo_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_VehicleInfo_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VehicleInfo.W_VehicleInfo_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VehicleInfo.W_VehicleInfo_C.OnWorldReady
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UW_VehicleInfo_C::OnWorldReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VehicleInfo.W_VehicleInfo_C.OnWorldReady"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VehicleInfo.W_VehicleInfo_C.OnVehicleChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXCharacter*      Driver                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXVehicle*        CurrentVehicle                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXVehicle*        PreviousVehicle                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_VehicleInfo_C::OnVehicleChanged(class AProjectXCharacter* Driver, class AProjectXVehicle* CurrentVehicle, class AProjectXVehicle* PreviousVehicle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VehicleInfo.W_VehicleInfo_C.OnVehicleChanged"));

	struct
	{
		class AProjectXCharacter*      Driver;
		class AProjectXVehicle*        CurrentVehicle;
		class AProjectXVehicle*        PreviousVehicle;
	} params = {};

	params.Driver = Driver;
	params.CurrentVehicle = CurrentVehicle;
	params.PreviousVehicle = PreviousVehicle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VehicleInfo.W_VehicleInfo_C.OnHealthUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_VehicleInfo_C::OnHealthUpdate(float Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VehicleInfo.W_VehicleInfo_C.OnHealthUpdate"));

	struct
	{
		float                          Delta;
	} params = {};

	params.Delta = Delta;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VehicleInfo.W_VehicleInfo_C.OnBoostChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bCanBoost                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_VehicleInfo_C::OnBoostChanged(bool bCanBoost)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VehicleInfo.W_VehicleInfo_C.OnBoostChanged"));

	struct
	{
		bool                           bCanBoost;
	} params = {};

	params.bCanBoost = bCanBoost;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VehicleInfo.W_VehicleInfo_C.UpdateBoost
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentBoost                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_VehicleInfo_C::UpdateBoost(float CurrentBoost)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VehicleInfo.W_VehicleInfo_C.UpdateBoost"));

	struct
	{
		float                          CurrentBoost;
	} params = {};

	params.CurrentBoost = CurrentBoost;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VehicleInfo.W_VehicleInfo_C.HealthLerp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_VehicleInfo_C::HealthLerp(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VehicleInfo.W_VehicleInfo_C.HealthLerp"));

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


// Function W_VehicleInfo.W_VehicleInfo_C.ExecuteUbergraph_W_VehicleInfo
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_VehicleInfo_C::ExecuteUbergraph_W_VehicleInfo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VehicleInfo.W_VehicleInfo_C.ExecuteUbergraph_W_VehicleInfo"));

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
