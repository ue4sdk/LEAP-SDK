// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_MenuBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_MenuBase.W_MenuBase_C.OnWidgetVisible
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MenuBase_C::OnWidgetVisible(class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MenuBase.W_MenuBase_C.OnWidgetVisible"));

	struct
	{
		class UObject*                 ContextObject;
	} params = {};

	params.ContextObject = ContextObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MenuBase.W_MenuBase_C.Fade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MenuBase_C::Fade(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MenuBase.W_MenuBase_C.Fade"));

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


// Function W_MenuBase.W_MenuBase_C.OnWidgetDelayedCollapseStart
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MenuBase_C::OnWidgetDelayedCollapseStart(class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MenuBase.W_MenuBase_C.OnWidgetDelayedCollapseStart"));

	struct
	{
		class UObject*                 ContextObject;
	} params = {};

	params.ContextObject = ContextObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MenuBase.W_MenuBase_C.FadeOverTime
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Start                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          End                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MenuBase_C::FadeOverTime(float Start, float End)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MenuBase.W_MenuBase_C.FadeOverTime"));

	struct
	{
		float                          Start;
		float                          End;
	} params = {};

	params.Start = Start;
	params.End = End;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MenuBase.W_MenuBase_C.InitMenuBase
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCanvasPanel*            Menu                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UW_MainMenuHeader_C*     W_MainMenuHeader               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MenuBase_C::InitMenuBase(class UCanvasPanel* Menu, class UW_MainMenuHeader_C* W_MainMenuHeader)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MenuBase.W_MenuBase_C.InitMenuBase"));

	struct
	{
		class UCanvasPanel*            Menu;
		class UW_MainMenuHeader_C*     W_MainMenuHeader;
	} params = {};

	params.Menu = Menu;
	params.W_MainMenuHeader = W_MainMenuHeader;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MenuBase.W_MenuBase_C.ExecuteUbergraph_W_MenuBase
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MenuBase_C::ExecuteUbergraph_W_MenuBase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MenuBase.W_MenuBase_C.ExecuteUbergraph_W_MenuBase"));

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
