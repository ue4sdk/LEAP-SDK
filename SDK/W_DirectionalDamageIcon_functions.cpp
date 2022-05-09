// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_DirectionalDamageIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_DirectionalDamageIcon.W_DirectionalDamageIcon_C.GetYawRotationDifference
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FRotator                A                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FRotator                B                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          Output                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DirectionalDamageIcon_C::GetYawRotationDifference(const struct FRotator& A, const struct FRotator& B, float* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DirectionalDamageIcon.W_DirectionalDamageIcon_C.GetYawRotationDifference"));

	struct
	{
		struct FRotator                A;
		struct FRotator                B;
		float                          Output;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Output != nullptr)
		*Output = params.Output;
}


// Function W_DirectionalDamageIcon.W_DirectionalDamageIcon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_DirectionalDamageIcon_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DirectionalDamageIcon.W_DirectionalDamageIcon_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DirectionalDamageIcon.W_DirectionalDamageIcon_C.EffectComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DirectionalDamageIcon_C::EffectComplete(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DirectionalDamageIcon.W_DirectionalDamageIcon_C.EffectComplete"));

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


// Function W_DirectionalDamageIcon.W_DirectionalDamageIcon_C.TickWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DirectionalDamageIcon_C::TickWidget(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DirectionalDamageIcon.W_DirectionalDamageIcon_C.TickWidget"));

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


// Function W_DirectionalDamageIcon.W_DirectionalDamageIcon_C.UpdateSize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DirectionalDamageIcon_C::UpdateSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DirectionalDamageIcon.W_DirectionalDamageIcon_C.UpdateSize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DirectionalDamageIcon.W_DirectionalDamageIcon_C.UpdatePosition
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DirectionalDamageIcon_C::UpdatePosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DirectionalDamageIcon.W_DirectionalDamageIcon_C.UpdatePosition"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DirectionalDamageIcon.W_DirectionalDamageIcon_C.ExecuteUbergraph_W_DirectionalDamageIcon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DirectionalDamageIcon_C::ExecuteUbergraph_W_DirectionalDamageIcon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DirectionalDamageIcon.W_DirectionalDamageIcon_C.ExecuteUbergraph_W_DirectionalDamageIcon"));

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
