// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Keybindings_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Keybindings.W_Keybindings_C.OnClickBinding
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKeybindingEntry_C*      SelectedWidget                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Keybindings_C::OnClickBinding(class UKeybindingEntry_C* SelectedWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Keybindings.W_Keybindings_C.OnClickBinding"));

	struct
	{
		class UKeybindingEntry_C*      SelectedWidget;
	} params = {};

	params.SelectedWidget = SelectedWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Keybindings.W_Keybindings_C.FindAxisMapping
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Scale                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FInputAxisMappingStruct KeyboardEntry1                 (CPF_Parm, CPF_OutParm)
// struct FInputAxisMappingStruct GamepadEntry1                  (CPF_Parm, CPF_OutParm)

void UW_Keybindings_C::FindAxisMapping(const struct FName& NewParam, float Scale, struct FInputAxisMappingStruct* KeyboardEntry1, struct FInputAxisMappingStruct* GamepadEntry1)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Keybindings.W_Keybindings_C.FindAxisMapping"));

	struct
	{
		struct FName                   NewParam;
		float                          Scale;
		struct FInputAxisMappingStruct KeyboardEntry1;
		struct FInputAxisMappingStruct GamepadEntry1;
	} params = {};

	params.NewParam = NewParam;
	params.Scale = Scale;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (KeyboardEntry1 != nullptr)
		*KeyboardEntry1 = params.KeyboardEntry1;
	if (GamepadEntry1 != nullptr)
		*GamepadEntry1 = params.GamepadEntry1;
}


// Function W_Keybindings.W_Keybindings_C.FindActionMapping
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FInputActionMappingStruct KeyboardEntry1                 (CPF_Parm, CPF_OutParm)
// struct FInputActionMappingStruct GamepadEntry1                  (CPF_Parm, CPF_OutParm)

void UW_Keybindings_C::FindActionMapping(const struct FName& NewParam, struct FInputActionMappingStruct* KeyboardEntry1, struct FInputActionMappingStruct* GamepadEntry1)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Keybindings.W_Keybindings_C.FindActionMapping"));

	struct
	{
		struct FName                   NewParam;
		struct FInputActionMappingStruct KeyboardEntry1;
		struct FInputActionMappingStruct GamepadEntry1;
	} params = {};

	params.NewParam = NewParam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (KeyboardEntry1 != nullptr)
		*KeyboardEntry1 = params.KeyboardEntry1;
	if (GamepadEntry1 != nullptr)
		*GamepadEntry1 = params.GamepadEntry1;
}


// Function W_Keybindings.W_Keybindings_C.PopulateGamePadInputs
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FInputActionMappingStruct> GamepadInputs                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<class UKeybindingEntry_C*> KeybindingEntries              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UW_Keybindings_C::PopulateGamePadInputs(TArray<struct FInputActionMappingStruct>* GamepadInputs, TArray<class UKeybindingEntry_C*>* KeybindingEntries)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Keybindings.W_Keybindings_C.PopulateGamePadInputs"));

	struct
	{
		TArray<struct FInputActionMappingStruct> GamepadInputs;
		TArray<class UKeybindingEntry_C*> KeybindingEntries;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (GamepadInputs != nullptr)
		*GamepadInputs = params.GamepadInputs;
	if (KeybindingEntries != nullptr)
		*KeybindingEntries = params.KeybindingEntries;
}


// Function W_Keybindings.W_Keybindings_C.FindActionMapEntry
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UKeybindingEntry_C*> Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// struct FInputActionMappingStruct B                              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UKeybindingEntry_C*      Array_Element                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           FoundElement                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Keybindings_C::FindActionMapEntry(const struct FInputActionMappingStruct& B, TArray<class UKeybindingEntry_C*>* Array, class UKeybindingEntry_C** Array_Element, bool* FoundElement)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Keybindings.W_Keybindings_C.FindActionMapEntry"));

	struct
	{
		TArray<class UKeybindingEntry_C*> Array;
		struct FInputActionMappingStruct B;
		class UKeybindingEntry_C*      Array_Element;
		bool                           FoundElement;
	} params = {};

	params.B = B;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;
	if (Array_Element != nullptr)
		*Array_Element = params.Array_Element;
	if (FoundElement != nullptr)
		*FoundElement = params.FoundElement;
}


// Function W_Keybindings.W_Keybindings_C.ToggleEntryVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               Invisibility                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsFocusable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Keybindings_C::ToggleEntryVisibility(ESlateVisibility Invisibility, bool bIsFocusable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Keybindings.W_Keybindings_C.ToggleEntryVisibility"));

	struct
	{
		ESlateVisibility               Invisibility;
		bool                           bIsFocusable;
	} params = {};

	params.Invisibility = Invisibility;
	params.bIsFocusable = bIsFocusable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Keybindings.W_Keybindings_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Keybindings_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Keybindings.W_Keybindings_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Keybindings.W_Keybindings_C.ApplySettings
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Keybindings_C::ApplySettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Keybindings.W_Keybindings_C.ApplySettings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Keybindings.W_Keybindings_C.SetDefaults
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Keybindings_C::SetDefaults()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Keybindings.W_Keybindings_C.SetDefaults"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Keybindings.W_Keybindings_C.InitValues
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Keybindings_C::InitValues()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Keybindings.W_Keybindings_C.InitValues"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Keybindings.W_Keybindings_C.CreateSubEntryBoxes
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Keybindings_C::CreateSubEntryBoxes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Keybindings.W_Keybindings_C.CreateSubEntryBoxes"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Keybindings.W_Keybindings_C.OnButtonPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKeybindingEntry_C*      OutBindWidget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Keybindings_C::OnButtonPressed(class UKeybindingEntry_C* OutBindWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Keybindings.W_Keybindings_C.OnButtonPressed"));

	struct
	{
		class UKeybindingEntry_C*      OutBindWidget;
	} params = {};

	params.OutBindWidget = OutBindWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Keybindings.W_Keybindings_C.OnButtonBound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    KeyPressed                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UW_Keybindings_C::OnButtonBound(const struct FKey& KeyPressed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Keybindings.W_Keybindings_C.OnButtonBound"));

	struct
	{
		struct FKey                    KeyPressed;
	} params = {};

	params.KeyPressed = KeyPressed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Keybindings.W_Keybindings_C.OnMenuClosed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Keybindings_C::OnMenuClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Keybindings.W_Keybindings_C.OnMenuClosed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Keybindings.W_Keybindings_C.OnButtonPushed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKeybindingEntry_C*      OutBindWidget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Keybindings_C::OnButtonPushed(class UKeybindingEntry_C* OutBindWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Keybindings.W_Keybindings_C.OnButtonPushed"));

	struct
	{
		class UKeybindingEntry_C*      OutBindWidget;
	} params = {};

	params.OutBindWidget = OutBindWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Keybindings.W_Keybindings_C.OnButtonBoundEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    KeyPressed                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UW_Keybindings_C::OnButtonBoundEvent(const struct FKey& KeyPressed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Keybindings.W_Keybindings_C.OnButtonBoundEvent"));

	struct
	{
		struct FKey                    KeyPressed;
	} params = {};

	params.KeyPressed = KeyPressed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Keybindings.W_Keybindings_C.ExecuteUbergraph_W_Keybindings
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Keybindings_C::ExecuteUbergraph_W_Keybindings(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Keybindings.W_Keybindings_C.ExecuteUbergraph_W_Keybindings"));

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


// Function W_Keybindings.W_Keybindings_C.ToggleConsumeBackInput__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ConsumeBackInput               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Keybindings_C::ToggleConsumeBackInput__DelegateSignature(bool ConsumeBackInput)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Keybindings.W_Keybindings_C.ToggleConsumeBackInput__DelegateSignature"));

	struct
	{
		bool                           ConsumeBackInput;
	} params = {};

	params.ConsumeBackInput = ConsumeBackInput;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
