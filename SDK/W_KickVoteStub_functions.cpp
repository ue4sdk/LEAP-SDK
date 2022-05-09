// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_KickVoteStub_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_KickVoteStub.W_KickVoteStub_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UW_KickVoteStub_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KickVoteStub.W_KickVoteStub_C.OnKeyDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_KickVoteStub.W_KickVoteStub_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_KickVoteStub_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KickVoteStub.W_KickVoteStub_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KickVoteStub.W_KickVoteStub_C.UpdateVotes
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_KickVoteStub_C::UpdateVotes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KickVoteStub.W_KickVoteStub_C.UpdateVotes"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KickVoteStub.W_KickVoteStub_C.VoteReceived
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            Voter                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   VoteOption                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KickVoteStub_C::VoteReceived(class APlayerState* Voter, const struct FName& VoteOption)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KickVoteStub.W_KickVoteStub_C.VoteReceived"));

	struct
	{
		class APlayerState*            Voter;
		struct FName                   VoteOption;
	} params = {};

	params.Voter = Voter;
	params.VoteOption = VoteOption;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KickVoteStub.W_KickVoteStub_C.VoteComplete
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Option                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EVoteResult                    Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KickVoteStub_C::VoteComplete(const struct FName& Option, EVoteResult Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KickVoteStub.W_KickVoteStub_C.VoteComplete"));

	struct
	{
		struct FName                   Option;
		EVoteResult                    Result;
	} params = {};

	params.Option = Option;
	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KickVoteStub.W_KickVoteStub_C.ExecuteUbergraph_W_KickVoteStub
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KickVoteStub_C::ExecuteUbergraph_W_KickVoteStub(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KickVoteStub.W_KickVoteStub_C.ExecuteUbergraph_W_KickVoteStub"));

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
