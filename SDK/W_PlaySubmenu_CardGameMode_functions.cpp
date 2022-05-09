// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PlaySubmenu_CardGameMode_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.SequenceEvent__ENTRYPOINTW_PlaySubmenu_CardGameMode_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlaySubmenu_CardGameMode_C::SequenceEvent__ENTRYPOINTW_PlaySubmenu_CardGameMode_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.SequenceEvent__ENTRYPOINTW_PlaySubmenu_CardGameMode_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.ToggleFiltersVisibility
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           SetFocusOnFirst                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlaySubmenu_CardGameMode_C::ToggleFiltersVisibility(bool bToggle, bool SetFocusOnFirst)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.ToggleFiltersVisibility"));

	struct
	{
		bool                           bToggle;
		bool                           SetFocusOnFirst;
	} params = {};

	params.bToggle = bToggle;
	params.SetFocusOnFirst = SetFocusOnFirst;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.OnGamepadStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsUsingGamepad                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlaySubmenu_CardGameMode_C::OnGamepadStateChanged(bool bIsUsingGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.OnGamepadStateChanged"));

	struct
	{
		bool                           bIsUsingGamepad;
	} params = {};

	params.bIsUsingGamepad = bIsUsingGamepad;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.LoadCalltoActionIcons
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlaySubmenu_CardGameMode_C::LoadCalltoActionIcons()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.LoadCalltoActionIcons"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UW_PlaySubmenu_CardGameMode_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.OnKeyDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.CanDeselectFilter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 OptionID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           bAllowed                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlaySubmenu_CardGameMode_C::CanDeselectFilter(const struct FString& OptionID, bool* bAllowed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.CanDeselectFilter"));

	struct
	{
		struct FString                 OptionID;
		bool                           bAllowed;
	} params = {};

	params.OptionID = OptionID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bAllowed != nullptr)
		*bAllowed = params.bAllowed;
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.AddFilterOptionWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 OptionID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            StyleColor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  Data                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsUnique                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UW_PlayMode_FilterOption_C* Filter_Widget                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlaySubmenu_CardGameMode_C::AddFilterOptionWidget(const struct FString& OptionID, const struct FLinearColor& StyleColor, unsigned char Data, bool bIsUnique, class UW_PlayMode_FilterOption_C** Filter_Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.AddFilterOptionWidget"));

	struct
	{
		struct FString                 OptionID;
		struct FLinearColor            StyleColor;
		unsigned char                  Data;
		bool                           bIsUnique;
		class UW_PlayMode_FilterOption_C* Filter_Widget;
	} params = {};

	params.OptionID = OptionID;
	params.StyleColor = StyleColor;
	params.Data = Data;
	params.bIsUnique = bIsUnique;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Filter_Widget != nullptr)
		*Filter_Widget = params.Filter_Widget;
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UW_PlaySubmenu_CardGameMode_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.OnMouseButtonDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.Finished_6DF0F1CF4C67A79037E3D0B8F8FF0505
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlaySubmenu_CardGameMode_C::Finished_6DF0F1CF4C67A79037E3D0B8F8FF0505()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.Finished_6DF0F1CF4C67A79037E3D0B8F8FF0505"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.Setup Card Information
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFStruct_SubmenuCardConfiguration CardInfo                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UW_PlaySubmenu_CardGameMode_C::Setup_Card_Information(const struct FFStruct_SubmenuCardConfiguration& CardInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.Setup Card Information"));

	struct
	{
		struct FFStruct_SubmenuCardConfiguration CardInfo;
	} params = {};

	params.CardInfo = CardInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.Reveal
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlaySubmenu_CardGameMode_C::Reveal()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.Reveal"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_PlaySubmenu_CardGameMode_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.ToggleBackCard
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlaySubmenu_CardGameMode_C::ToggleBackCard()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.ToggleBackCard"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.ToggleHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bHover                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlaySubmenu_CardGameMode_C::ToggleHover(bool bHover)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.ToggleHover"));

	struct
	{
		bool                           bHover;
	} params = {};

	params.bHover = bHover;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.Reveal Ending
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlaySubmenu_CardGameMode_C::Reveal_Ending()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.Reveal Ending"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.Hide Card
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlaySubmenu_CardGameMode_C::Hide_Card()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.Hide Card"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.SelectCard
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlaySubmenu_CardGameMode_C::SelectCard()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.SelectCard"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.Deselect Card
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlaySubmenu_CardGameMode_C::Deselect_Card()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.Deselect Card"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.Check Hover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlaySubmenu_CardGameMode_C::Check_Hover()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.Check Hover"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.Editor_UpdateCardGraphics
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlaySubmenu_CardGameMode_C::Editor_UpdateCardGraphics()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.Editor_UpdateCardGraphics"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.ToggleLockCard
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bLocked                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlaySubmenu_CardGameMode_C::ToggleLockCard(bool bLocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.ToggleLockCard"));

	struct
	{
		bool                           bLocked;
	} params = {};

	params.bLocked = bLocked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.Setup Filters
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlaySubmenu_CardGameMode_C::Setup_Filters()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.Setup Filters"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.On Filter Selected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_PlayMode_FilterOption_C* ButtonClicked                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Selected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlaySubmenu_CardGameMode_C::On_Filter_Selected(class UW_PlayMode_FilterOption_C* ButtonClicked, bool Selected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.On Filter Selected"));

	struct
	{
		class UW_PlayMode_FilterOption_C* ButtonClicked;
		bool                           Selected;
	} params = {};

	params.ButtonClicked = ButtonClicked;
	params.Selected = Selected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.Force Hover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlaySubmenu_CardGameMode_C::Force_Hover()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.Force Hover"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.Setup Difficulties
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlaySubmenu_CardGameMode_C::Setup_Difficulties()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.Setup Difficulties"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.On Difficulty Selected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_PlayMode_FilterOption_C* ButtonClicked                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Selected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlaySubmenu_CardGameMode_C::On_Difficulty_Selected(class UW_PlayMode_FilterOption_C* ButtonClicked, bool Selected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.On Difficulty Selected"));

	struct
	{
		class UW_PlayMode_FilterOption_C* ButtonClicked;
		bool                           Selected;
	} params = {};

	params.ButtonClicked = ButtonClicked;
	params.Selected = Selected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.BndEvt__btn_Card_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_PlaySubmenu_CardGameMode_C::BndEvt__btn_Card_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.BndEvt__btn_Card_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.BndEvt__btn_Card_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_PlaySubmenu_CardGameMode_C::BndEvt__btn_Card_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.BndEvt__btn_Card_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.OnKeybindsUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlaySubmenu_CardGameMode_C::OnKeybindsUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.OnKeybindsUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.BndEvt__btn_Card_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_PlaySubmenu_CardGameMode_C::BndEvt__btn_Card_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.BndEvt__btn_Card_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.OnFilterFocused
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_PlayMode_FilterOption_C* Filter                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlaySubmenu_CardGameMode_C::OnFilterFocused(class UW_PlayMode_FilterOption_C* Filter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.OnFilterFocused"));

	struct
	{
		class UW_PlayMode_FilterOption_C* Filter;
	} params = {};

	params.Filter = Filter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.Focus Valid Filter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlaySubmenu_CardGameMode_C::Focus_Valid_Filter()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.Focus Valid Filter"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.ExecuteUbergraph_W_PlaySubmenu_CardGameMode
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlaySubmenu_CardGameMode_C::ExecuteUbergraph_W_PlaySubmenu_CardGameMode(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.ExecuteUbergraph_W_PlaySubmenu_CardGameMode"));

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


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.DifficultiesUpdated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TMap<struct FString, EDifficultyLevel> Difficulties                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_PlaySubmenu_CardGameMode_C::DifficultiesUpdated__DelegateSignature(TMap<struct FString, EDifficultyLevel> Difficulties)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.DifficultiesUpdated__DelegateSignature"));

	struct
	{
		TMap<struct FString, EDifficultyLevel> Difficulties;
	} params = {};

	params.Difficulties = Difficulties;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.FiltersUpdated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TMap<struct FString, EGameType> Filters                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_PlaySubmenu_CardGameMode_C::FiltersUpdated__DelegateSignature(TMap<struct FString, EGameType> Filters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.FiltersUpdated__DelegateSignature"));

	struct
	{
		TMap<struct FString, EGameType> Filters;
	} params = {};

	params.Filters = Filters;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.CardSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_PlaySubmenu_CardGameMode_C* Card                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlaySubmenu_CardGameMode_C::CardSelected__DelegateSignature(class UW_PlaySubmenu_CardGameMode_C* Card)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.CardSelected__DelegateSignature"));

	struct
	{
		class UW_PlaySubmenu_CardGameMode_C* Card;
	} params = {};

	params.Card = Card;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.RevealFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlaySubmenu_CardGameMode_C::RevealFinished__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlaySubmenu_CardGameMode.W_PlaySubmenu_CardGameMode_C.RevealFinished__DelegateSignature"));

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
