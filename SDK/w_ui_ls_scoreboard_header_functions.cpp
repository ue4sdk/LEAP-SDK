// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "w_ui_ls_scoreboard_header_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_ui_ls_scoreboard_header.w_ui_ls_scoreboard_header_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void Uw_ui_ls_scoreboard_header_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function w_ui_ls_scoreboard_header.w_ui_ls_scoreboard_header_C.PreConstruct"));

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


// Function w_ui_ls_scoreboard_header.w_ui_ls_scoreboard_header_C.ExecuteUbergraph_w_ui_ls_scoreboard_header
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void Uw_ui_ls_scoreboard_header_C::ExecuteUbergraph_w_ui_ls_scoreboard_header(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function w_ui_ls_scoreboard_header.w_ui_ls_scoreboard_header_C.ExecuteUbergraph_w_ui_ls_scoreboard_header"));

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
