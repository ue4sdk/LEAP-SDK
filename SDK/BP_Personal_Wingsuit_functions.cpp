// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Personal_Wingsuit_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Personal_Wingsuit.BP_Personal_Wingsuit_C.BoostEffects
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Personal_Wingsuit_C::BoostEffects()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Personal_Wingsuit.BP_Personal_Wingsuit_C.BoostEffects"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Personal_Wingsuit.BP_Personal_Wingsuit_C.On Driver Enter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXCharacter*      Driver                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Personal_Wingsuit_C::On_Driver_Enter(class AProjectXCharacter* Driver)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Personal_Wingsuit.BP_Personal_Wingsuit_C.On Driver Enter"));

	struct
	{
		class AProjectXCharacter*      Driver;
	} params = {};

	params.Driver = Driver;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Personal_Wingsuit.BP_Personal_Wingsuit_C.Tilt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Personal_Wingsuit_C::Tilt(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Personal_Wingsuit.BP_Personal_Wingsuit_C.Tilt"));

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


// Function BP_Personal_Wingsuit.BP_Personal_Wingsuit_C.BarrelRoll
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Personal_Wingsuit_C::BarrelRoll(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Personal_Wingsuit.BP_Personal_Wingsuit_C.BarrelRoll"));

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


// Function BP_Personal_Wingsuit.BP_Personal_Wingsuit_C.JumpEffects
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Personal_Wingsuit_C::JumpEffects()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Personal_Wingsuit.BP_Personal_Wingsuit_C.JumpEffects"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Personal_Wingsuit.BP_Personal_Wingsuit_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Personal_Wingsuit_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Personal_Wingsuit.BP_Personal_Wingsuit_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Personal_Wingsuit.BP_Personal_Wingsuit_C.SingleSpinInterp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Personal_Wingsuit_C::SingleSpinInterp(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Personal_Wingsuit.BP_Personal_Wingsuit_C.SingleSpinInterp"));

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


// Function BP_Personal_Wingsuit.BP_Personal_Wingsuit_C.ResetRotation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Personal_Wingsuit_C::ResetRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Personal_Wingsuit.BP_Personal_Wingsuit_C.ResetRotation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Personal_Wingsuit.BP_Personal_Wingsuit_C.RotationHasEnded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Personal_Wingsuit_C::RotationHasEnded(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Personal_Wingsuit.BP_Personal_Wingsuit_C.RotationHasEnded"));

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


// Function BP_Personal_Wingsuit.BP_Personal_Wingsuit_C.ExecuteUbergraph_BP_Personal_Wingsuit
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Personal_Wingsuit_C::ExecuteUbergraph_BP_Personal_Wingsuit(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Personal_Wingsuit.BP_Personal_Wingsuit_C.ExecuteUbergraph_BP_Personal_Wingsuit"));

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
