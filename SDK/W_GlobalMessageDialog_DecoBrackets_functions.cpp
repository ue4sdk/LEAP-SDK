// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_GlobalMessageDialog_DecoBrackets_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_GlobalMessageDialog_DecoBrackets.W_GlobalMessageDialog_DecoBrackets_C.UpdateMaterial
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_GlobalMessageDialog_DecoBrackets_C::UpdateMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GlobalMessageDialog_DecoBrackets.W_GlobalMessageDialog_DecoBrackets_C.UpdateMaterial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GlobalMessageDialog_DecoBrackets.W_GlobalMessageDialog_DecoBrackets_C.UpdateColors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            LineColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            GlowColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_GlobalMessageDialog_DecoBrackets_C::UpdateColors(const struct FLinearColor& LineColor, const struct FLinearColor& GlowColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GlobalMessageDialog_DecoBrackets.W_GlobalMessageDialog_DecoBrackets_C.UpdateColors"));

	struct
	{
		struct FLinearColor            LineColor;
		struct FLinearColor            GlowColor;
	} params = {};

	params.LineColor = LineColor;
	params.GlowColor = GlowColor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GlobalMessageDialog_DecoBrackets.W_GlobalMessageDialog_DecoBrackets_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_GlobalMessageDialog_DecoBrackets_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GlobalMessageDialog_DecoBrackets.W_GlobalMessageDialog_DecoBrackets_C.PreConstruct"));

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


// Function W_GlobalMessageDialog_DecoBrackets.W_GlobalMessageDialog_DecoBrackets_C.ExecuteUbergraph_W_GlobalMessageDialog_DecoBrackets
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_GlobalMessageDialog_DecoBrackets_C::ExecuteUbergraph_W_GlobalMessageDialog_DecoBrackets(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GlobalMessageDialog_DecoBrackets.W_GlobalMessageDialog_DecoBrackets_C.ExecuteUbergraph_W_GlobalMessageDialog_DecoBrackets"));

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
