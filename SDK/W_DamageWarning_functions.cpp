// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_DamageWarning_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_DamageWarning.W_DamageWarning_C.SetDirectionArrow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            DirectionalArrow               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DamageWarning_C::SetDirectionArrow(int DirectionalArrow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DamageWarning.W_DamageWarning_C.SetDirectionArrow"));

	struct
	{
		int                            DirectionalArrow;
	} params = {};

	params.DirectionalArrow = DirectionalArrow;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DamageWarning.W_DamageWarning_C.GetYawRotationDifference
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRotator                RotOne                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FRotator                RotTwo                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          OutAngle                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DamageWarning_C::GetYawRotationDifference(const struct FRotator& RotOne, const struct FRotator& RotTwo, float* OutAngle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DamageWarning.W_DamageWarning_C.GetYawRotationDifference"));

	struct
	{
		struct FRotator                RotOne;
		struct FRotator                RotTwo;
		float                          OutAngle;
	} params = {};

	params.RotOne = RotOne;
	params.RotTwo = RotTwo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutAngle != nullptr)
		*OutAngle = params.OutAngle;
}


// Function W_DamageWarning.W_DamageWarning_C.IsActorOnScreen
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bOnscreen                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_DamageWarning_C::IsActorOnScreen(bool* bOnscreen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DamageWarning.W_DamageWarning_C.IsActorOnScreen"));

	struct
	{
		bool                           bOnscreen;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bOnscreen != nullptr)
		*bOnscreen = params.bOnscreen;
}


// Function W_DamageWarning.W_DamageWarning_C.UpdateIcons
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DamageWarning_C::UpdateIcons()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DamageWarning.W_DamageWarning_C.UpdateIcons"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DamageWarning.W_DamageWarning_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DamageWarning_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DamageWarning.W_DamageWarning_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DamageWarning.W_DamageWarning_C.SetWarningVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DamageWarning_C::SetWarningVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DamageWarning.W_DamageWarning_C.SetWarningVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DamageWarning.W_DamageWarning_C.TickWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DamageWarning_C::TickWidget(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DamageWarning.W_DamageWarning_C.TickWidget"));

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


// Function W_DamageWarning.W_DamageWarning_C.FinishTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DamageWarning_C::FinishTimer(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DamageWarning.W_DamageWarning_C.FinishTimer"));

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


// Function W_DamageWarning.W_DamageWarning_C.UpdateAngle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DamageWarning_C::UpdateAngle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DamageWarning.W_DamageWarning_C.UpdateAngle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DamageWarning.W_DamageWarning_C.ExecuteUbergraph_W_DamageWarning
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DamageWarning_C::ExecuteUbergraph_W_DamageWarning(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DamageWarning.W_DamageWarning_C.ExecuteUbergraph_W_DamageWarning"));

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
