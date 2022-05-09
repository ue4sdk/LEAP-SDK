// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PartyBrowser_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PartyBrowser.W_PartyBrowser_C.OnJoinParty
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PartyBrowser_C::OnJoinParty()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyBrowser.W_PartyBrowser_C.OnJoinParty"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyBrowser.W_PartyBrowser_C.OnFailure_0AFCD578449271EF9DE65BBB5CDB8CE7
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UW_PartyBrowser_C::OnFailure_0AFCD578449271EF9DE65BBB5CDB8CE7(TArray<struct FBlueprintSessionResult> Results)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyBrowser.W_PartyBrowser_C.OnFailure_0AFCD578449271EF9DE65BBB5CDB8CE7"));

	struct
	{
		TArray<struct FBlueprintSessionResult> Results;
	} params = {};

	params.Results = Results;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyBrowser.W_PartyBrowser_C.OnSuccess_0AFCD578449271EF9DE65BBB5CDB8CE7
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UW_PartyBrowser_C::OnSuccess_0AFCD578449271EF9DE65BBB5CDB8CE7(TArray<struct FBlueprintSessionResult> Results)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyBrowser.W_PartyBrowser_C.OnSuccess_0AFCD578449271EF9DE65BBB5CDB8CE7"));

	struct
	{
		TArray<struct FBlueprintSessionResult> Results;
	} params = {};

	params.Results = Results;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyBrowser.W_PartyBrowser_C.BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_PartyBrowser_C::BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyBrowser.W_PartyBrowser_C.BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyBrowser.W_PartyBrowser_C.RefreshPartyBrowser
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PartyBrowser_C::RefreshPartyBrowser()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyBrowser.W_PartyBrowser_C.RefreshPartyBrowser"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyBrowser.W_PartyBrowser_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_PartyBrowser_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyBrowser.W_PartyBrowser_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyBrowser.W_PartyBrowser_C.ExecuteUbergraph_W_PartyBrowser
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PartyBrowser_C::ExecuteUbergraph_W_PartyBrowser(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyBrowser.W_PartyBrowser_C.ExecuteUbergraph_W_PartyBrowser"));

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


// Function W_PartyBrowser.W_PartyBrowser_C.OnJoinPartyClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PartyBrowser_C::OnJoinPartyClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyBrowser.W_PartyBrowser_C.OnJoinPartyClicked__DelegateSignature"));

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
