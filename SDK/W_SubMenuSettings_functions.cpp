// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_SubMenuSettings_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_SubMenuSettings.W_SubMenuSettings_C.GetWidgetByClass
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UClass* /*UUserWidget*/  InputPin                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UUserWidget*             OutputPin                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SubMenuSettings_C::GetWidgetByClass(class UClass* /*UUserWidget*/ InputPin, class UUserWidget** OutputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuSettings.W_SubMenuSettings_C.GetWidgetByClass"));

	struct
	{
		class UClass* /*UUserWidget*/  InputPin;
		class UUserWidget*             OutputPin;
	} params = {};

	params.InputPin = InputPin;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutputPin != nullptr)
		*OutputPin = params.OutputPin;
}


// Function W_SubMenuSettings.W_SubMenuSettings_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_SubMenuSettings_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuSettings.W_SubMenuSettings_C.PreConstruct"));

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


// Function W_SubMenuSettings.W_SubMenuSettings_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_SubMenuSettings_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuSettings.W_SubMenuSettings_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SubMenuSettings.W_SubMenuSettings_C.BndEvt__W_SubMenuTitle_K2Node_ComponentBoundEvent_0_ChangePage__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UUserWidget*/  SubPage                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SubMenuSettings_C::BndEvt__W_SubMenuTitle_K2Node_ComponentBoundEvent_0_ChangePage__DelegateSignature(class UClass* /*UUserWidget*/ SubPage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuSettings.W_SubMenuSettings_C.BndEvt__W_SubMenuTitle_K2Node_ComponentBoundEvent_0_ChangePage__DelegateSignature"));

	struct
	{
		class UClass* /*UUserWidget*/  SubPage;
	} params = {};

	params.SubPage = SubPage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SubMenuSettings.W_SubMenuSettings_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SubMenuSettings_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuSettings.W_SubMenuSettings_C.Init"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SubMenuSettings.W_SubMenuSettings_C.FadeIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SubMenuSettings_C::FadeIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuSettings.W_SubMenuSettings_C.FadeIn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SubMenuSettings.W_SubMenuSettings_C.FadeOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SubMenuSettings_C::FadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuSettings.W_SubMenuSettings_C.FadeOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SubMenuSettings.W_SubMenuSettings_C.Fade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SubMenuSettings_C::Fade(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuSettings.W_SubMenuSettings_C.Fade"));

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


// Function W_SubMenuSettings.W_SubMenuSettings_C.FadeOpacityIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SubMenuSettings_C::FadeOpacityIn(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuSettings.W_SubMenuSettings_C.FadeOpacityIn"));

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


// Function W_SubMenuSettings.W_SubMenuSettings_C.FadeOutCOmplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SubMenuSettings_C::FadeOutCOmplete(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuSettings.W_SubMenuSettings_C.FadeOutCOmplete"));

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


// Function W_SubMenuSettings.W_SubMenuSettings_C.BndEvt__W_SubMenuTitle_K2Node_ComponentBoundEvent_2_NavigatePage__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  SubPage                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SubMenuSettings_C::BndEvt__W_SubMenuTitle_K2Node_ComponentBoundEvent_2_NavigatePage__DelegateSignature(const struct FString& ID, class UClass* /*UUserWidget*/ SubPage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuSettings.W_SubMenuSettings_C.BndEvt__W_SubMenuTitle_K2Node_ComponentBoundEvent_2_NavigatePage__DelegateSignature"));

	struct
	{
		struct FString                 ID;
		class UClass* /*UUserWidget*/  SubPage;
	} params = {};

	params.ID = ID;
	params.SubPage = SubPage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SubMenuSettings.W_SubMenuSettings_C.ExecuteUbergraph_W_SubMenuSettings
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SubMenuSettings_C::ExecuteUbergraph_W_SubMenuSettings(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuSettings.W_SubMenuSettings_C.ExecuteUbergraph_W_SubMenuSettings"));

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


// Function W_SubMenuSettings.W_SubMenuSettings_C.OnWidgetActive__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             NewPage                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SubMenuSettings_C::OnWidgetActive__DelegateSignature(class UUserWidget* NewPage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenuSettings.W_SubMenuSettings_C.OnWidgetActive__DelegateSignature"));

	struct
	{
		class UUserWidget*             NewPage;
	} params = {};

	params.NewPage = NewPage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
