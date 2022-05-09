// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Party_List_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Party_List.W_Party_List_C.UpdateAddButtonVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Party_List_C::UpdateAddButtonVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Party_List.W_Party_List_C.UpdateAddButtonVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Party_List.W_Party_List_C.GetPartyFull
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Party_List_C::GetPartyFull()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Party_List.W_Party_List_C.GetPartyFull"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Party_List.W_Party_List_C.Finished_8D15BD94415AC82CDCB2FD985B2B348B
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Party_List_C::Finished_8D15BD94415AC82CDCB2FD985B2B348B()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Party_List.W_Party_List_C.Finished_8D15BD94415AC82CDCB2FD985B2B348B"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Party_List.W_Party_List_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_Party_List_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Party_List.W_Party_List_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Party_List.W_Party_List_C.RemoveMember
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_PartySlotInfo_C*      Member                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Party_List_C::RemoveMember(class UW_PartySlotInfo_C* Member)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Party_List.W_Party_List_C.RemoveMember"));

	struct
	{
		class UW_PartySlotInfo_C*      Member;
	} params = {};

	params.Member = Member;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Party_List.W_Party_List_C.AddMember
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* SteamBeaconPlayerState         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Party_List_C::AddMember(class ASteamBeaconPlayerState* SteamBeaconPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Party_List.W_Party_List_C.AddMember"));

	struct
	{
		class ASteamBeaconPlayerState* SteamBeaconPlayerState;
	} params = {};

	params.SteamBeaconPlayerState = SteamBeaconPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Party_List.W_Party_List_C.UpdateParty
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPartyStatus                   CurrentPartyStatus             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class ASteamBeaconPlayerState*> PartyMembers                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UW_Party_List_C::UpdateParty(EPartyStatus CurrentPartyStatus, TArray<class ASteamBeaconPlayerState*> PartyMembers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Party_List.W_Party_List_C.UpdateParty"));

	struct
	{
		EPartyStatus                   CurrentPartyStatus;
		TArray<class ASteamBeaconPlayerState*> PartyMembers;
	} params = {};

	params.CurrentPartyStatus = CurrentPartyStatus;
	params.PartyMembers = PartyMembers;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Party_List.W_Party_List_C.MemberOptionMenuUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* MemberID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Party_List_C::MemberOptionMenuUpdate(class ASteamBeaconPlayerState* MemberID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Party_List.W_Party_List_C.MemberOptionMenuUpdate"));

	struct
	{
		class ASteamBeaconPlayerState* MemberID;
	} params = {};

	params.MemberID = MemberID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Party_List.W_Party_List_C.BndEvt__W_PlayerInfo_Party_AddButton_K2Node_ComponentBoundEvent_0_AddPartyClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_Party_List_C::BndEvt__W_PlayerInfo_Party_AddButton_K2Node_ComponentBoundEvent_0_AddPartyClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Party_List.W_Party_List_C.BndEvt__W_PlayerInfo_Party_AddButton_K2Node_ComponentBoundEvent_0_AddPartyClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Party_List.W_Party_List_C.ToggleShowFriendsList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InShowFriendsList              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_Party_List_C::ToggleShowFriendsList(bool InShowFriendsList)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Party_List.W_Party_List_C.ToggleShowFriendsList"));

	struct
	{
		bool                           InShowFriendsList;
	} params = {};

	params.InShowFriendsList = InShowFriendsList;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Party_List.W_Party_List_C.Close All Options
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_Party_List_C::Close_All_Options()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Party_List.W_Party_List_C.Close All Options"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_Party_List.W_Party_List_C.ExecuteUbergraph_W_Party_List
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_Party_List_C::ExecuteUbergraph_W_Party_List(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_Party_List.W_Party_List_C.ExecuteUbergraph_W_Party_List"));

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
