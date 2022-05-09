// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HorizontalArrowBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HorizontalArrowBox.HorizontalArrowBox_C.FindMatchingText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FText>           NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   InText                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   InText1                        (CPF_ConstParm, CPF_Parm, CPF_OutParm)
// int                            Array_Index                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHorizontalArrowBox_C::FindMatchingText(const struct FText& InText, const struct FText& InText1, TArray<struct FText>* NewParam, int* Array_Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorizontalArrowBox.HorizontalArrowBox_C.FindMatchingText"));

	struct
	{
		TArray<struct FText>           NewParam;
		struct FText                   InText;
		struct FText                   InText1;
		int                            Array_Index;
	} params = {};

	params.InText = InText;
	params.InText1 = InText1;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
	if (Array_Index != nullptr)
		*Array_Index = params.Array_Index;
}


// Function HorizontalArrowBox.HorizontalArrowBox_C.GetSelectionID
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Target                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHorizontalArrowBox_C::GetSelectionID(int* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorizontalArrowBox.HorizontalArrowBox_C.GetSelectionID"));

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


// Function HorizontalArrowBox.HorizontalArrowBox_C.GetSelection
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   Output                         (CPF_Parm, CPF_OutParm)

void UHorizontalArrowBox_C::GetSelection(struct FText* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorizontalArrowBox.HorizontalArrowBox_C.GetSelection"));

	struct
	{
		struct FText                   Output;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Output != nullptr)
		*Output = params.Output;
}


// Function HorizontalArrowBox.HorizontalArrowBox_C.UpdateTarget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Direction                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHorizontalArrowBox_C::UpdateTarget(int Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorizontalArrowBox.HorizontalArrowBox_C.UpdateTarget"));

	struct
	{
		int                            Direction;
	} params = {};

	params.Direction = Direction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorizontalArrowBox.HorizontalArrowBox_C.UpdateSelection
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHorizontalArrowBox_C::UpdateSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorizontalArrowBox.HorizontalArrowBox_C.UpdateSelection"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorizontalArrowBox.HorizontalArrowBox_C.BndEvt__LeftBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UHorizontalArrowBox_C::BndEvt__LeftBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorizontalArrowBox.HorizontalArrowBox_C.BndEvt__LeftBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorizontalArrowBox.HorizontalArrowBox_C.BndEvt__RightBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UHorizontalArrowBox_C::BndEvt__RightBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorizontalArrowBox.HorizontalArrowBox_C.BndEvt__RightBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorizontalArrowBox.HorizontalArrowBox_C.InitOptions
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FText>           NewParam                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   Default                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UHorizontalArrowBox_C::InitOptions(TArray<struct FText> NewParam, const struct FText& Default)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorizontalArrowBox.HorizontalArrowBox_C.InitOptions"));

	struct
	{
		TArray<struct FText>           NewParam;
		struct FText                   Default;
	} params = {};

	params.NewParam = NewParam;
	params.Default = Default;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorizontalArrowBox.HorizontalArrowBox_C.AddOption
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ItemToFind                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UHorizontalArrowBox_C::AddOption(const struct FText& ItemToFind)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorizontalArrowBox.HorizontalArrowBox_C.AddOption"));

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


// Function HorizontalArrowBox.HorizontalArrowBox_C.SetOption
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ItemToFind                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UHorizontalArrowBox_C::SetOption(const struct FText& ItemToFind)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorizontalArrowBox.HorizontalArrowBox_C.SetOption"));

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


// Function HorizontalArrowBox.HorizontalArrowBox_C.SetOptionByID
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Dimension_1                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHorizontalArrowBox_C::SetOptionByID(int Dimension_1)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorizontalArrowBox.HorizontalArrowBox_C.SetOptionByID"));

	struct
	{
		int                            Dimension_1;
	} params = {};

	params.Dimension_1 = Dimension_1;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorizontalArrowBox.HorizontalArrowBox_C.InitOptionsDefaultID
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FText>           OPTIONS                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            Dimension_1                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHorizontalArrowBox_C::InitOptionsDefaultID(TArray<struct FText> OPTIONS, int Dimension_1)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorizontalArrowBox.HorizontalArrowBox_C.InitOptionsDefaultID"));

	struct
	{
		TArray<struct FText>           OPTIONS;
		int                            Dimension_1;
	} params = {};

	params.OPTIONS = OPTIONS;
	params.Dimension_1 = Dimension_1;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorizontalArrowBox.HorizontalArrowBox_C.UpdateSliderSize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHorizontalArrowBox_C::UpdateSliderSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorizontalArrowBox.HorizontalArrowBox_C.UpdateSliderSize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorizontalArrowBox.HorizontalArrowBox_C.BndEvt__Focusable_Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHorizontalArrowBox_C::BndEvt__Focusable_Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorizontalArrowBox.HorizontalArrowBox_C.BndEvt__Focusable_Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature"));

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


// Function HorizontalArrowBox.HorizontalArrowBox_C.ExecuteUbergraph_HorizontalArrowBox
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHorizontalArrowBox_C::ExecuteUbergraph_HorizontalArrowBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorizontalArrowBox.HorizontalArrowBox_C.ExecuteUbergraph_HorizontalArrowBox"));

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
