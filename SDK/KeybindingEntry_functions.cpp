// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "KeybindingEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KeybindingEntry.KeybindingEntry_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UKeybindingEntry_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeybindingEntry.KeybindingEntry_C.OnKeyUp"));

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


// Function KeybindingEntry.KeybindingEntry_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UKeybindingEntry_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeybindingEntry.KeybindingEntry_C.OnKeyDown"));

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


// Function KeybindingEntry.KeybindingEntry_C.OnPreviewMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UKeybindingEntry_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeybindingEntry.KeybindingEntry_C.OnPreviewMouseButtonDown"));

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


// Function KeybindingEntry.KeybindingEntry_C.GetKeyBindings
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FKey                    PCBinding                      (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)
// struct FKey                    GamepadBinding                 (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UKeybindingEntry_C::GetKeyBindings(struct FKey* PCBinding, struct FKey* GamepadBinding)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeybindingEntry.KeybindingEntry_C.GetKeyBindings"));

	struct
	{
		struct FKey                    PCBinding;
		struct FKey                    GamepadBinding;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (PCBinding != nullptr)
		*PCBinding = params.PCBinding;
	if (GamepadBinding != nullptr)
		*GamepadBinding = params.GamepadBinding;
}


// Function KeybindingEntry.KeybindingEntry_C.OnPreviewKeyDown
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UKeybindingEntry_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeybindingEntry.KeybindingEntry_C.OnPreviewKeyDown"));

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


// Function KeybindingEntry.KeybindingEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKeybindingEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeybindingEntry.KeybindingEntry_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KeybindingEntry.KeybindingEntry_C.UpdateVisuals
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeybindingEntry_C::UpdateVisuals()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeybindingEntry.KeybindingEntry_C.UpdateVisuals"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KeybindingEntry.KeybindingEntry_C.BindKeyboard
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    KeyPressed                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UKeybindingEntry_C::BindKeyboard(const struct FKey& KeyPressed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeybindingEntry.KeybindingEntry_C.BindKeyboard"));

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


// Function KeybindingEntry.KeybindingEntry_C.BindGamepad
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    KeyPressed                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UKeybindingEntry_C::BindGamepad(const struct FKey& KeyPressed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeybindingEntry.KeybindingEntry_C.BindGamepad"));

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


// Function KeybindingEntry.KeybindingEntry_C.Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeybindingEntry_C::Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeybindingEntry.KeybindingEntry_C.Update"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KeybindingEntry.KeybindingEntry_C.UpdateGaempadAction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FInputActionMappingStruct GamepadAction                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UKeybindingEntry_C::UpdateGaempadAction(const struct FInputActionMappingStruct& GamepadAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeybindingEntry.KeybindingEntry_C.UpdateGaempadAction"));

	struct
	{
		struct FInputActionMappingStruct GamepadAction;
	} params = {};

	params.GamepadAction = GamepadAction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KeybindingEntry.KeybindingEntry_C.BndEvt__btn_bind_KeyboardandMouse_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKeybindingEntry_C::BndEvt__btn_bind_KeyboardandMouse_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeybindingEntry.KeybindingEntry_C.BndEvt__btn_bind_KeyboardandMouse_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature"));

	struct
	{
		struct FString                 ID;
		struct FString                 Name;
		ECosmeticType                  Type;
		class UClass* /*UUserWidget*/  Widget;
	} params = {};

	params.ID = ID;
	params.Name = Name;
	params.Type = Type;
	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KeybindingEntry.KeybindingEntry_C.BndEvt__btn_bind_GamepadButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKeybindingEntry_C::BndEvt__btn_bind_GamepadButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeybindingEntry.KeybindingEntry_C.BndEvt__btn_bind_GamepadButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature"));

	struct
	{
		struct FString                 ID;
		struct FString                 Name;
		ECosmeticType                  Type;
		class UClass* /*UUserWidget*/  Widget;
	} params = {};

	params.ID = ID;
	params.Name = Name;
	params.Type = Type;
	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KeybindingEntry.KeybindingEntry_C.Revert
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeybindingEntry_C::Revert()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeybindingEntry.KeybindingEntry_C.Revert"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KeybindingEntry.KeybindingEntry_C.RevertGamepad
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeybindingEntry_C::RevertGamepad()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeybindingEntry.KeybindingEntry_C.RevertGamepad"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KeybindingEntry.KeybindingEntry_C.RevertMKB
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeybindingEntry_C::RevertMKB()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeybindingEntry.KeybindingEntry_C.RevertMKB"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KeybindingEntry.KeybindingEntry_C.ExecuteUbergraph_KeybindingEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKeybindingEntry_C::ExecuteUbergraph_KeybindingEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeybindingEntry.KeybindingEntry_C.ExecuteUbergraph_KeybindingEntry"));

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


// Function KeybindingEntry.KeybindingEntry_C.ButtonPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKeybindingEntry_C*      OutBindWidget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKeybindingEntry_C::ButtonPressed__DelegateSignature(class UKeybindingEntry_C* OutBindWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeybindingEntry.KeybindingEntry_C.ButtonPressed__DelegateSignature"));

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


// Function KeybindingEntry.KeybindingEntry_C.BindKey__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    KeyPressed                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UKeybindingEntry_C::BindKey__DelegateSignature(const struct FKey& KeyPressed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KeybindingEntry.KeybindingEntry_C.BindKey__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
