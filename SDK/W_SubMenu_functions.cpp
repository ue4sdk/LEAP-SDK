// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_SubMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_SubMenu.W_SubMenu_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_SubMenu_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenu.W_SubMenu_C.PreConstruct"));

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


// Function W_SubMenu.W_SubMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_SubMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenu.W_SubMenu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SubMenu.W_SubMenu_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SubMenu_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenu.W_SubMenu_C.Init"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SubMenu.W_SubMenu_C.FadeIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SubMenu_C::FadeIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenu.W_SubMenu_C.FadeIn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SubMenu.W_SubMenu_C.FadeOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SubMenu_C::FadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenu.W_SubMenu_C.FadeOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SubMenu.W_SubMenu_C.Fade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SubMenu_C::Fade(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenu.W_SubMenu_C.Fade"));

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


// Function W_SubMenu.W_SubMenu_C.FadeAway
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SubMenu_C::FadeAway(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenu.W_SubMenu_C.FadeAway"));

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


// Function W_SubMenu.W_SubMenu_C.FadeOutCOmplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SubMenu_C::FadeOutCOmplete(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenu.W_SubMenu_C.FadeOutCOmplete"));

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


// Function W_SubMenu.W_SubMenu_C.BndEvt__W_SubMenuTitle_K2Node_ComponentBoundEvent_2_NavigatePage__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  SubPage                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SubMenu_C::BndEvt__W_SubMenuTitle_K2Node_ComponentBoundEvent_2_NavigatePage__DelegateSignature(const struct FString& ID, class UClass* /*UUserWidget*/ SubPage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenu.W_SubMenu_C.BndEvt__W_SubMenuTitle_K2Node_ComponentBoundEvent_2_NavigatePage__DelegateSignature"));

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


// Function W_SubMenu.W_SubMenu_C.OnControllerUsed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsUsingGamepad                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_SubMenu_C::OnControllerUsed(bool bIsUsingGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenu.W_SubMenu_C.OnControllerUsed"));

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


// Function W_SubMenu.W_SubMenu_C.ExecuteUbergraph_W_SubMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SubMenu_C::ExecuteUbergraph_W_SubMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenu.W_SubMenu_C.ExecuteUbergraph_W_SubMenu"));

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


// Function W_SubMenu.W_SubMenu_C.ControllerUsed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsUsingGamepad                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_SubMenu_C::ControllerUsed__DelegateSignature(bool bIsUsingGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenu.W_SubMenu_C.ControllerUsed__DelegateSignature"));

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


// Function W_SubMenu.W_SubMenu_C.OnWidgetActive__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             NewPage                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SubMenu_C::OnWidgetActive__DelegateSignature(class UUserWidget* NewPage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SubMenu.W_SubMenu_C.OnWidgetActive__DelegateSignature"));

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
