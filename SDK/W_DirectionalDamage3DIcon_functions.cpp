// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_DirectionalDamage3DIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_DirectionalDamage3DIcon.W_DirectionalDamage3DIcon_C.GetYawRotationDifference
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FRotator                A                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FRotator                B                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          Output                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DirectionalDamage3DIcon_C::GetYawRotationDifference(const struct FRotator& A, const struct FRotator& B, float* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DirectionalDamage3DIcon.W_DirectionalDamage3DIcon_C.GetYawRotationDifference"));

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


// Function W_DirectionalDamage3DIcon.W_DirectionalDamage3DIcon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_DirectionalDamage3DIcon_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DirectionalDamage3DIcon.W_DirectionalDamage3DIcon_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DirectionalDamage3DIcon.W_DirectionalDamage3DIcon_C.UpdateArrow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DirectionalDamage3DIcon_C::UpdateArrow(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DirectionalDamage3DIcon.W_DirectionalDamage3DIcon_C.UpdateArrow"));

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


// Function W_DirectionalDamage3DIcon.W_DirectionalDamage3DIcon_C.Remove
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DirectionalDamage3DIcon_C::Remove(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DirectionalDamage3DIcon.W_DirectionalDamage3DIcon_C.Remove"));

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


// Function W_DirectionalDamage3DIcon.W_DirectionalDamage3DIcon_C.UpdateDamageIndicator
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DirectionalDamage3DIcon_C::UpdateDamageIndicator()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DirectionalDamage3DIcon.W_DirectionalDamage3DIcon_C.UpdateDamageIndicator"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DirectionalDamage3DIcon.W_DirectionalDamage3DIcon_C.ExecuteUbergraph_W_DirectionalDamage3DIcon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DirectionalDamage3DIcon_C::ExecuteUbergraph_W_DirectionalDamage3DIcon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DirectionalDamage3DIcon.W_DirectionalDamage3DIcon_C.ExecuteUbergraph_W_DirectionalDamage3DIcon"));

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
