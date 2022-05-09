// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_ControlledRocketOverlay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_ControlledRocketOverlay.W_ControlledRocketOverlay_C.Finished_90EA1D604C842E412C2865AA6950BFB7
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ControlledRocketOverlay_C::Finished_90EA1D604C842E412C2865AA6950BFB7()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ControlledRocketOverlay.W_ControlledRocketOverlay_C.Finished_90EA1D604C842E412C2865AA6950BFB7"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ControlledRocketOverlay.W_ControlledRocketOverlay_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ControlledRocketOverlay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ControlledRocketOverlay.W_ControlledRocketOverlay_C.Tick"));

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


// Function W_ControlledRocketOverlay.W_ControlledRocketOverlay_C.Cleanup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           skipAnimation                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ControlledRocketOverlay_C::Cleanup(bool skipAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ControlledRocketOverlay.W_ControlledRocketOverlay_C.Cleanup"));

	struct
	{
		bool                           skipAnimation;
	} params = {};

	params.skipAnimation = skipAnimation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ControlledRocketOverlay.W_ControlledRocketOverlay_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_ControlledRocketOverlay_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ControlledRocketOverlay.W_ControlledRocketOverlay_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ControlledRocketOverlay.W_ControlledRocketOverlay_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_ControlledRocketOverlay_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ControlledRocketOverlay.W_ControlledRocketOverlay_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ControlledRocketOverlay.W_ControlledRocketOverlay_C.OnKeybindUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ControlledRocketOverlay_C::OnKeybindUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ControlledRocketOverlay.W_ControlledRocketOverlay_C.OnKeybindUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ControlledRocketOverlay.W_ControlledRocketOverlay_C.OnGamepadStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsUsingGamepad                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ControlledRocketOverlay_C::OnGamepadStateChanged(bool bIsUsingGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ControlledRocketOverlay.W_ControlledRocketOverlay_C.OnGamepadStateChanged"));

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


// Function W_ControlledRocketOverlay.W_ControlledRocketOverlay_C.ExecuteUbergraph_W_ControlledRocketOverlay
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ControlledRocketOverlay_C::ExecuteUbergraph_W_ControlledRocketOverlay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ControlledRocketOverlay.W_ControlledRocketOverlay_C.ExecuteUbergraph_W_ControlledRocketOverlay"));

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
