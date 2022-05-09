// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_UI_Progress_SimpleLinear_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.GetProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_UI_Progress_SimpleLinear_C::GetProgress()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.GetProgress"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.AdjustBars
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_Progress_SimpleLinear_C::AdjustBars(float Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.AdjustBars"));

	struct
	{
		float                          Progress;
	} params = {};

	params.Progress = Progress;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.SetProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentValue                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MaxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          PreComputed_Progress           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_Progress_SimpleLinear_C::SetProgress(float CurrentValue, float MaxValue, float PreComputed_Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.SetProgress"));

	struct
	{
		float                          CurrentValue;
		float                          MaxValue;
		float                          PreComputed_Progress;
	} params = {};

	params.CurrentValue = CurrentValue;
	params.MaxValue = MaxValue;
	params.PreComputed_Progress = PreComputed_Progress;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.HideBarsOnNoProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_UI_Progress_SimpleLinear_C::HideBarsOnNoProgress()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.HideBarsOnNoProgress"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.SetStyle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_UI_Progress_SimpleLinear_C::SetStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.SetStyle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_UI_Progress_SimpleLinear_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.PreConstruct"));

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


// Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_UI_Progress_SimpleLinear_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.UpdateMeter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Start                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          End                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_Progress_SimpleLinear_C::UpdateMeter(float Duration, float Start, float End)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.UpdateMeter"));

	struct
	{
		float                          Duration;
		float                          Start;
		float                          End;
	} params = {};

	params.Duration = Duration;
	params.Start = Start;
	params.End = End;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.FillProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_Progress_SimpleLinear_C::FillProgress(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.FillProgress"));

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


// Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.CheckStatus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_Progress_SimpleLinear_C::CheckStatus(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.CheckStatus"));

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


// Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.UpdateProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentValue                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MaxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Pre_Computed_Progress          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_Progress_SimpleLinear_C::UpdateProgress(float CurrentValue, float MaxValue, float Pre_Computed_Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.UpdateProgress"));

	struct
	{
		float                          CurrentValue;
		float                          MaxValue;
		float                          Pre_Computed_Progress;
	} params = {};

	params.CurrentValue = CurrentValue;
	params.MaxValue = MaxValue;
	params.Pre_Computed_Progress = Pre_Computed_Progress;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.ClearBar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_UI_Progress_SimpleLinear_C::ClearBar()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.ClearBar"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.ExecuteUbergraph_W_UI_Progress_SimpleLinear
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_Progress_SimpleLinear_C::ExecuteUbergraph_W_UI_Progress_SimpleLinear(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.ExecuteUbergraph_W_UI_Progress_SimpleLinear"));

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


// Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.OnProgressFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_UI_Progress_SimpleLinear_C::OnProgressFinished__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_Progress_SimpleLinear.W_UI_Progress_SimpleLinear_C.OnProgressFinished__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
