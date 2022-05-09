// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_FlyingVehicle_Fighter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FlyingVehicle_Fighter.BP_FlyingVehicle_Fighter_C.HandleEngineTrails
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           HasDriver                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_FlyingVehicle_Fighter_C::HandleEngineTrails(bool HasDriver)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FlyingVehicle_Fighter.BP_FlyingVehicle_Fighter_C.HandleEngineTrails"));

	struct
	{
		bool                           HasDriver;
	} params = {};

	params.HasDriver = HasDriver;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FlyingVehicle_Fighter.BP_FlyingVehicle_Fighter_C.UpdateTeamColouring
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_FlyingVehicle_Fighter_C::UpdateTeamColouring()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FlyingVehicle_Fighter.BP_FlyingVehicle_Fighter_C.UpdateTeamColouring"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FlyingVehicle_Fighter.BP_FlyingVehicle_Fighter_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_FlyingVehicle_Fighter_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FlyingVehicle_Fighter.BP_FlyingVehicle_Fighter_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FlyingVehicle_Fighter.BP_FlyingVehicle_Fighter_C.DriverChangedEvent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXCharacter*      PreviousDriver                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXCharacter*      NewDriver                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_FlyingVehicle_Fighter_C::DriverChangedEvent(class AProjectXCharacter* PreviousDriver, class AProjectXCharacter* NewDriver)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FlyingVehicle_Fighter.BP_FlyingVehicle_Fighter_C.DriverChangedEvent"));

	struct
	{
		class AProjectXCharacter*      PreviousDriver;
		class AProjectXCharacter*      NewDriver;
	} params = {};

	params.PreviousDriver = PreviousDriver;
	params.NewDriver = NewDriver;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FlyingVehicle_Fighter.BP_FlyingVehicle_Fighter_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_FlyingVehicle_Fighter_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FlyingVehicle_Fighter.BP_FlyingVehicle_Fighter_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_FlyingVehicle_Fighter.BP_FlyingVehicle_Fighter_C.ExecuteUbergraph_BP_FlyingVehicle_Fighter
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_FlyingVehicle_Fighter_C::ExecuteUbergraph_BP_FlyingVehicle_Fighter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FlyingVehicle_Fighter.BP_FlyingVehicle_Fighter_C.ExecuteUbergraph_BP_FlyingVehicle_Fighter"));

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
