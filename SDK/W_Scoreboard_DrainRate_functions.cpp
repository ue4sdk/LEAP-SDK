// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Scoreboard_DrainRate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Scoreboard_DrainRate.W_Scoreboard_DrainRate_C.UpdateRate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Scoreboard_DrainRate_C::UpdateRate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard_DrainRate.W_Scoreboard_DrainRate_C.UpdateRate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Scoreboard_DrainRate.W_Scoreboard_DrainRate_C.SetColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            TeamColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Scoreboard_DrainRate_C::SetColor(const struct FLinearColor& TeamColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard_DrainRate.W_Scoreboard_DrainRate_C.SetColor"));

	struct
	{
		struct FLinearColor            TeamColor;
	} params = {};

	params.TeamColor = TeamColor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Scoreboard_DrainRate.W_Scoreboard_DrainRate_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Scoreboard_DrainRate_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard_DrainRate.W_Scoreboard_DrainRate_C.PreConstruct"));

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


// Function W_Scoreboard_DrainRate.W_Scoreboard_DrainRate_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Scoreboard_DrainRate_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard_DrainRate.W_Scoreboard_DrainRate_C.Init"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Scoreboard_DrainRate.W_Scoreboard_DrainRate_C.ExecuteUbergraph_W_Scoreboard_DrainRate
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Scoreboard_DrainRate_C::ExecuteUbergraph_W_Scoreboard_DrainRate(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Scoreboard_DrainRate.W_Scoreboard_DrainRate_C.ExecuteUbergraph_W_Scoreboard_DrainRate"));

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
