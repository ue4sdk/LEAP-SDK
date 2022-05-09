// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_BasicStatObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_BasicStatObject.W_BasicStatObject_C.ComplexStatOverride
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_BasicStatObject_C::ComplexStatOverride()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_BasicStatObject.W_BasicStatObject_C.ComplexStatOverride"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_BasicStatObject.W_BasicStatObject_C.GetComplexStat
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_BasicStatObject_C::GetComplexStat()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_BasicStatObject.W_BasicStatObject_C.GetComplexStat"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_BasicStatObject.W_BasicStatObject_C.IsComplexStat
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UW_BasicStatObject_C::IsComplexStat()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_BasicStatObject.W_BasicStatObject_C.IsComplexStat"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_BasicStatObject.W_BasicStatObject_C.GetStat
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EStatNames                     NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int UW_BasicStatObject_C::GetStat(EStatNames NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_BasicStatObject.W_BasicStatObject_C.GetStat"));

	struct
	{
		EStatNames                     NewParam;
		int                            ReturnValue;
	} params = {};

	params.NewParam = NewParam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_BasicStatObject.W_BasicStatObject_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_BasicStatObject_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_BasicStatObject.W_BasicStatObject_C.PreConstruct"));

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


// Function W_BasicStatObject.W_BasicStatObject_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_BasicStatObject_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_BasicStatObject.W_BasicStatObject_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_BasicStatObject.W_BasicStatObject_C.LoadStat
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 StatClassName                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// EStatClassifier                StatType                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_BasicStatObject_C::LoadStat(const struct FString& StatClassName, EStatClassifier StatType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_BasicStatObject.W_BasicStatObject_C.LoadStat"));

	struct
	{
		struct FString                 StatClassName;
		EStatClassifier                StatType;
	} params = {};

	params.StatClassName = StatClassName;
	params.StatType = StatType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_BasicStatObject.W_BasicStatObject_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_BasicStatObject_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_BasicStatObject.W_BasicStatObject_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_BasicStatObject.W_BasicStatObject_C.PanBGMaskHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_BasicStatObject_C::PanBGMaskHover(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_BasicStatObject.W_BasicStatObject_C.PanBGMaskHover"));

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


// Function W_BasicStatObject.W_BasicStatObject_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_BasicStatObject_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_BasicStatObject.W_BasicStatObject_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_BasicStatObject.W_BasicStatObject_C.PanBGMaskUnhover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_BasicStatObject_C::PanBGMaskUnhover(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_BasicStatObject.W_BasicStatObject_C.PanBGMaskUnhover"));

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


// Function W_BasicStatObject.W_BasicStatObject_C.PanMaskLineHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_BasicStatObject_C::PanMaskLineHover(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_BasicStatObject.W_BasicStatObject_C.PanMaskLineHover"));

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


// Function W_BasicStatObject.W_BasicStatObject_C.PanLineMaskUnhover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_BasicStatObject_C::PanLineMaskUnhover(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_BasicStatObject.W_BasicStatObject_C.PanLineMaskUnhover"));

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


// Function W_BasicStatObject.W_BasicStatObject_C.ExecuteUbergraph_W_BasicStatObject
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_BasicStatObject_C::ExecuteUbergraph_W_BasicStatObject(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_BasicStatObject.W_BasicStatObject_C.ExecuteUbergraph_W_BasicStatObject"));

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
