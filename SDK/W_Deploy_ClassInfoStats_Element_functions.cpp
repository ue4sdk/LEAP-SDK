// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Deploy_ClassInfoStats_Element_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Deploy_ClassInfoStats_Element.W_Deploy_ClassInfoStats_Element_C.UpdateValue
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Deploy_ClassInfoStats_Element_C::UpdateValue(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_ClassInfoStats_Element.W_Deploy_ClassInfoStats_Element_C.UpdateValue"));

	struct
	{
		int                            Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Deploy_ClassInfoStats_Element.W_Deploy_ClassInfoStats_Element_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Deploy_ClassInfoStats_Element_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_ClassInfoStats_Element.W_Deploy_ClassInfoStats_Element_C.PreConstruct"));

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


// Function W_Deploy_ClassInfoStats_Element.W_Deploy_ClassInfoStats_Element_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Deploy_ClassInfoStats_Element_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_ClassInfoStats_Element.W_Deploy_ClassInfoStats_Element_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Deploy_ClassInfoStats_Element.W_Deploy_ClassInfoStats_Element_C.ExecuteUbergraph_W_Deploy_ClassInfoStats_Element
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Deploy_ClassInfoStats_Element_C::ExecuteUbergraph_W_Deploy_ClassInfoStats_Element(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Deploy_ClassInfoStats_Element.W_Deploy_ClassInfoStats_Element_C.ExecuteUbergraph_W_Deploy_ClassInfoStats_Element"));

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
