// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_UI_ChallengesSmallEntry_Deco_Frame_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_UI_ChallengesSmallEntry_Deco_Frame.W_UI_ChallengesSmallEntry_Deco_Frame_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_UI_ChallengesSmallEntry_Deco_Frame_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_ChallengesSmallEntry_Deco_Frame.W_UI_ChallengesSmallEntry_Deco_Frame_C.PreConstruct"));

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


// Function W_UI_ChallengesSmallEntry_Deco_Frame.W_UI_ChallengesSmallEntry_Deco_Frame_C.ExecuteUbergraph_W_UI_ChallengesSmallEntry_Deco_Frame
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_UI_ChallengesSmallEntry_Deco_Frame_C::ExecuteUbergraph_W_UI_ChallengesSmallEntry_Deco_Frame(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_UI_ChallengesSmallEntry_Deco_Frame.W_UI_ChallengesSmallEntry_Deco_Frame_C.ExecuteUbergraph_W_UI_ChallengesSmallEntry_Deco_Frame"));

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
