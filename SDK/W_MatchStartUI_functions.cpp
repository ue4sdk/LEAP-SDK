// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_MatchStartUI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_MatchStartUI.W_MatchStartUI_C.UpdateAnchorPoints
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               Geometry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_MatchStartUI_C::UpdateAnchorPoints(struct FGeometry* Geometry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MatchStartUI.W_MatchStartUI_C.UpdateAnchorPoints"));

	struct
	{
		struct FGeometry               Geometry;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Geometry != nullptr)
		*Geometry = params.Geometry;
}


// Function W_MatchStartUI.W_MatchStartUI_C.GetWidgetSize
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UAdvancedWidgetComponent* WidgetComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector2D UW_MatchStartUI_C::GetWidgetSize(class UAdvancedWidgetComponent* WidgetComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MatchStartUI.W_MatchStartUI_C.GetWidgetSize"));

	struct
	{
		class UAdvancedWidgetComponent* WidgetComponent;
		struct FVector2D               ReturnValue;
	} params = {};

	params.WidgetComponent = WidgetComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_MatchStartUI.W_MatchStartUI_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_MatchStartUI_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MatchStartUI.W_MatchStartUI_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_MatchStartUI.W_MatchStartUI_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MatchStartUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MatchStartUI.W_MatchStartUI_C.Tick"));

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


// Function W_MatchStartUI.W_MatchStartUI_C.Release
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MatchStartUI_C::Release(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MatchStartUI.W_MatchStartUI_C.Release"));

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


// Function W_MatchStartUI.W_MatchStartUI_C.PullIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MatchStartUI_C::PullIn(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MatchStartUI.W_MatchStartUI_C.PullIn"));

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


// Function W_MatchStartUI.W_MatchStartUI_C.ExecuteUbergraph_W_MatchStartUI
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_MatchStartUI_C::ExecuteUbergraph_W_MatchStartUI(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MatchStartUI.W_MatchStartUI_C.ExecuteUbergraph_W_MatchStartUI"));

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


// Function W_MatchStartUI.W_MatchStartUI_C.NewEventDispatcher_0__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_MatchStartUI_C::NewEventDispatcher_0__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_MatchStartUI.W_MatchStartUI_C.NewEventDispatcher_0__DelegateSignature"));

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
