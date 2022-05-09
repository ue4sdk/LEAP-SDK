// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PlayModeInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PlayModeInfo.W_PlayModeInfo_C.BndEvt__SelectModeButton_K2Node_ComponentBoundEvent_0_ButtonHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_PlayModeInfo_C::BndEvt__SelectModeButton_K2Node_ComponentBoundEvent_0_ButtonHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayModeInfo.W_PlayModeInfo_C.BndEvt__SelectModeButton_K2Node_ComponentBoundEvent_0_ButtonHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayModeInfo.W_PlayModeInfo_C.BndEvt__SelectModeButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_PlayModeInfo_C::BndEvt__SelectModeButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayModeInfo.W_PlayModeInfo_C.BndEvt__SelectModeButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayModeInfo.W_PlayModeInfo_C.BndEvt__SelectModeButton_K2Node_ComponentBoundEvent_2_ButtonUnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_PlayModeInfo_C::BndEvt__SelectModeButton_K2Node_ComponentBoundEvent_2_ButtonUnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayModeInfo.W_PlayModeInfo_C.BndEvt__SelectModeButton_K2Node_ComponentBoundEvent_2_ButtonUnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayModeInfo.W_PlayModeInfo_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_PlayModeInfo_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayModeInfo.W_PlayModeInfo_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayModeInfo.W_PlayModeInfo_C.Deselect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlayModeInfo_C::Deselect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayModeInfo.W_PlayModeInfo_C.Deselect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayModeInfo.W_PlayModeInfo_C.NavigateTo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlayModeInfo_C::NavigateTo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayModeInfo.W_PlayModeInfo_C.NavigateTo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayModeInfo.W_PlayModeInfo_C.ExecuteUbergraph_W_PlayModeInfo
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayModeInfo_C::ExecuteUbergraph_W_PlayModeInfo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayModeInfo.W_PlayModeInfo_C.ExecuteUbergraph_W_PlayModeInfo"));

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


// Function W_PlayModeInfo.W_PlayModeInfo_C.Selected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_PlayModeInfo_C*       PlayModeInfo                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bSelected                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlayModeInfo_C::Selected__DelegateSignature(class UW_PlayModeInfo_C* PlayModeInfo, bool bSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayModeInfo.W_PlayModeInfo_C.Selected__DelegateSignature"));

	struct
	{
		class UW_PlayModeInfo_C*       PlayModeInfo;
		bool                           bSelected;
	} params = {};

	params.PlayModeInfo = PlayModeInfo;
	params.bSelected = bSelected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayModeInfo.W_PlayModeInfo_C.Hovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_PlayModeInfo_C*       PlayModeInfo                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHovered                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlayModeInfo_C::Hovered__DelegateSignature(class UW_PlayModeInfo_C* PlayModeInfo, bool bHovered)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayModeInfo.W_PlayModeInfo_C.Hovered__DelegateSignature"));

	struct
	{
		class UW_PlayModeInfo_C*       PlayModeInfo;
		bool                           bHovered;
	} params = {};

	params.PlayModeInfo = PlayModeInfo;
	params.bHovered = bHovered;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
