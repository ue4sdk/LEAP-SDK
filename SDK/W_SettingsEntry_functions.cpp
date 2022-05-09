// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_SettingsEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_SettingsEntry.W_SettingsEntry_C.ClampSliderValues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          MinDisplayText                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MaxDisplayText                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SettingsEntry_C::ClampSliderValues(float MinDisplayText, float MaxDisplayText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.ClampSliderValues"));

	struct
	{
		float                          MinDisplayText;
		float                          MaxDisplayText;
	} params = {};

	params.MinDisplayText = MinDisplayText;
	params.MaxDisplayText = MaxDisplayText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SettingsEntry.W_SettingsEntry_C.GetSliderToIntRange
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Output                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SettingsEntry_C::GetSliderToIntRange(int* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.GetSliderToIntRange"));

	struct
	{
		int                            Output;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Output != nullptr)
		*Output = params.Output;
}


// Function W_SettingsEntry.W_SettingsEntry_C.GetSliderValue
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UW_SettingsEntry_C::GetSliderValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.GetSliderValue"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_SettingsEntry.W_SettingsEntry_C.SetSliderValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SettingsEntry_C::SetSliderValue(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.SetSliderValue"));

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


// Function W_SettingsEntry.W_SettingsEntry_C.Init Arrow Box by Name
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FText>           OPTIONS                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   Default                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_SettingsEntry_C::Init_Arrow_Box_by_Name(TArray<struct FText> OPTIONS, const struct FText& Default)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.Init Arrow Box by Name"));

	struct
	{
		TArray<struct FText>           OPTIONS;
		struct FText                   Default;
	} params = {};

	params.OPTIONS = OPTIONS;
	params.Default = Default;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SettingsEntry.W_SettingsEntry_C.SetArrowBoxOption
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ItemToFind                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UW_SettingsEntry_C::SetArrowBoxOption(const struct FText& ItemToFind)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.SetArrowBoxOption"));

	struct
	{
		struct FText                   ItemToFind;
	} params = {};

	params.ItemToFind = ItemToFind;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SettingsEntry.W_SettingsEntry_C.InitToggle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_SettingsEntry_C::InitToggle(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.InitToggle"));

	struct
	{
		bool                           Enabled;
	} params = {};

	params.Enabled = Enabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SettingsEntry.W_SettingsEntry_C.GetToggleState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Toggle                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_SettingsEntry_C::GetToggleState(bool* Toggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.GetToggleState"));

	struct
	{
		bool                           Toggle;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Toggle != nullptr)
		*Toggle = params.Toggle;
}


// Function W_SettingsEntry.W_SettingsEntry_C.InitSliderIntRange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Min                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Max                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SettingsEntry_C::InitSliderIntRange(int Min, int Max, int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.InitSliderIntRange"));

	struct
	{
		int                            Min;
		int                            Max;
		int                            Value;
	} params = {};

	params.Min = Min;
	params.Max = Max;
	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SettingsEntry.W_SettingsEntry_C.GetArrowBoxSelection
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Target                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SettingsEntry_C::GetArrowBoxSelection(int* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.GetArrowBoxSelection"));

	struct
	{
		int                            Target;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Target != nullptr)
		*Target = params.Target;
}


// Function W_SettingsEntry.W_SettingsEntry_C.Init Arrow Box by Index
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FText>           OPTIONS                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            DefaultIndex                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SettingsEntry_C::Init_Arrow_Box_by_Index(TArray<struct FText> OPTIONS, int DefaultIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.Init Arrow Box by Index"));

	struct
	{
		TArray<struct FText>           OPTIONS;
		int                            DefaultIndex;
	} params = {};

	params.OPTIONS = OPTIONS;
	params.DefaultIndex = DefaultIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SettingsEntry.W_SettingsEntry_C.GetHighlightMaterial
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic* HighlightDynMat                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SettingsEntry_C::GetHighlightMaterial(class UMaterialInstanceDynamic** HighlightDynMat)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.GetHighlightMaterial"));

	struct
	{
		class UMaterialInstanceDynamic* HighlightDynMat;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (HighlightDynMat != nullptr)
		*HighlightDynMat = params.HighlightDynMat;
}


// Function W_SettingsEntry.W_SettingsEntry_C.UpdateHighlight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Alpha                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SettingsEntry_C::UpdateHighlight(float Alpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.UpdateHighlight"));

	struct
	{
		float                          Alpha;
	} params = {};

	params.Alpha = Alpha;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SettingsEntry.W_SettingsEntry_C.UpdateLabelStyle
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Alpha                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SettingsEntry_C::UpdateLabelStyle(float Alpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.UpdateLabelStyle"));

	struct
	{
		float                          Alpha;
	} params = {};

	params.Alpha = Alpha;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SettingsEntry.W_SettingsEntry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_SettingsEntry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.PreConstruct"));

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


// Function W_SettingsEntry.W_SettingsEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_SettingsEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SettingsEntry.W_SettingsEntry_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UW_SettingsEntry_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.OnMouseEnter"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SettingsEntry.W_SettingsEntry_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UW_SettingsEntry_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.OnMouseLeave"));

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params = {};

	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SettingsEntry.W_SettingsEntry_C.highlight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          StartAlpha                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          EndAlpha                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SettingsEntry_C::highlight(float Duration, float StartAlpha, float EndAlpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.highlight"));

	struct
	{
		float                          Duration;
		float                          StartAlpha;
		float                          EndAlpha;
	} params = {};

	params.Duration = Duration;
	params.StartAlpha = StartAlpha;
	params.EndAlpha = EndAlpha;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SettingsEntry.W_SettingsEntry_C.AnimateHighlight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SettingsEntry_C::AnimateHighlight(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.AnimateHighlight"));

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


// Function W_SettingsEntry.W_SettingsEntry_C.BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnSliderUpdated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SettingsEntry_C::BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnSliderUpdated__DelegateSignature(float Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnSliderUpdated__DelegateSignature"));

	struct
	{
		float                          Amount;
	} params = {};

	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SettingsEntry.W_SettingsEntry_C.BndEvt__EnableDisableToggle_K2Node_ComponentBoundEvent_1_DisableEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_SettingsEntry_C::BndEvt__EnableDisableToggle_K2Node_ComponentBoundEvent_1_DisableEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.BndEvt__EnableDisableToggle_K2Node_ComponentBoundEvent_1_DisableEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SettingsEntry.W_SettingsEntry_C.BndEvt__EnableDisableToggle_K2Node_ComponentBoundEvent_2_EnableEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_SettingsEntry_C::BndEvt__EnableDisableToggle_K2Node_ComponentBoundEvent_2_EnableEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.BndEvt__EnableDisableToggle_K2Node_ComponentBoundEvent_2_EnableEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SettingsEntry.W_SettingsEntry_C.SliderUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SettingsEntry_C::SliderUpdated(float Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.SliderUpdated"));

	struct
	{
		float                          Amount;
	} params = {};

	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SettingsEntry.W_SettingsEntry_C.SetEnabledLabel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   NewLabel                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_SettingsEntry_C::SetEnabledLabel(const struct FText& NewLabel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.SetEnabledLabel"));

	struct
	{
		struct FText                   NewLabel;
	} params = {};

	params.NewLabel = NewLabel;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SettingsEntry.W_SettingsEntry_C.SetDisabledLabel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   NewLabel                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_SettingsEntry_C::SetDisabledLabel(const struct FText& NewLabel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.SetDisabledLabel"));

	struct
	{
		struct FText                   NewLabel;
	} params = {};

	params.NewLabel = NewLabel;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SettingsEntry.W_SettingsEntry_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SettingsEntry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.Tick"));

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


// Function W_SettingsEntry.W_SettingsEntry_C.ExecuteUbergraph_W_SettingsEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SettingsEntry_C::ExecuteUbergraph_W_SettingsEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.ExecuteUbergraph_W_SettingsEntry"));

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


// Function W_SettingsEntry.W_SettingsEntry_C.ToggleEvent__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_SettingsEntry_C::ToggleEvent__DelegateSignature(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.ToggleEvent__DelegateSignature"));

	struct
	{
		bool                           Enabled;
	} params = {};

	params.Enabled = Enabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SettingsEntry.W_SettingsEntry_C.OnSliderUpdated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SettingsEntry_C::OnSliderUpdated__DelegateSignature(float Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SettingsEntry.W_SettingsEntry_C.OnSliderUpdated__DelegateSignature"));

	struct
	{
		float                          Amount;
	} params = {};

	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
