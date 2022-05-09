// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_DevastatorModeTurret_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DevastatorModeTurret.BP_DevastatorModeTurret_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DevastatorModeTurret_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DevastatorModeTurret.BP_DevastatorModeTurret_C.ReceiveEndPlay"));

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


// Function BP_DevastatorModeTurret.BP_DevastatorModeTurret_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_DevastatorModeTurret_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DevastatorModeTurret.BP_DevastatorModeTurret_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DevastatorModeTurret.BP_DevastatorModeTurret_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DevastatorModeTurret_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DevastatorModeTurret.BP_DevastatorModeTurret_C.ReceiveTick"));

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


// Function BP_DevastatorModeTurret.BP_DevastatorModeTurret_C.BndEvt__BP_ShoulderTurret_K2Node_ComponentBoundEvent_0_FiredSignature__DelegateSignature
// (FUNC_BlueprintEvent)

void ABP_DevastatorModeTurret_C::BndEvt__BP_ShoulderTurret_K2Node_ComponentBoundEvent_0_FiredSignature__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DevastatorModeTurret.BP_DevastatorModeTurret_C.BndEvt__BP_ShoulderTurret_K2Node_ComponentBoundEvent_0_FiredSignature__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DevastatorModeTurret.BP_DevastatorModeTurret_C.BndEvt__BP_ShoulderTurret_K2Node_ComponentBoundEvent_1_TargetFoundSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DevastatorModeTurret_C::BndEvt__BP_ShoulderTurret_K2Node_ComponentBoundEvent_1_TargetFoundSignature__DelegateSignature(class AActor* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DevastatorModeTurret.BP_DevastatorModeTurret_C.BndEvt__BP_ShoulderTurret_K2Node_ComponentBoundEvent_1_TargetFoundSignature__DelegateSignature"));

	struct
	{
		class AActor*                  Target;
	} params = {};

	params.Target = Target;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DevastatorModeTurret.BP_DevastatorModeTurret_C.Rotate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DevastatorModeTurret_C::Rotate(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DevastatorModeTurret.BP_DevastatorModeTurret_C.Rotate"));

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


// Function BP_DevastatorModeTurret.BP_DevastatorModeTurret_C.ExecuteUbergraph_BP_DevastatorModeTurret
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DevastatorModeTurret_C::ExecuteUbergraph_BP_DevastatorModeTurret(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DevastatorModeTurret.BP_DevastatorModeTurret_C.ExecuteUbergraph_BP_DevastatorModeTurret"));

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
