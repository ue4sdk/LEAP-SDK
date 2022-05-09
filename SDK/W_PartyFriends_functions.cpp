// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PartyFriends_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PartyFriends.W_PartyFriends_C.RefreshFriendsList
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FSteamFriendInfo> InFriendsList                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UW_PartyFriends_C::RefreshFriendsList(TArray<struct FSteamFriendInfo>* InFriendsList)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyFriends.W_PartyFriends_C.RefreshFriendsList"));

	struct
	{
		TArray<struct FSteamFriendInfo> InFriendsList;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InFriendsList != nullptr)
		*InFriendsList = params.InFriendsList;
}


// Function W_PartyFriends.W_PartyFriends_C.OnFailure_4BF5A74B4418D3E2A98387811A6DAD51
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FSteamFriendInfo> Results                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FString                 Error                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_PartyFriends_C::OnFailure_4BF5A74B4418D3E2A98387811A6DAD51(TArray<struct FSteamFriendInfo> Results, const struct FString& Error)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyFriends.W_PartyFriends_C.OnFailure_4BF5A74B4418D3E2A98387811A6DAD51"));

	struct
	{
		TArray<struct FSteamFriendInfo> Results;
		struct FString                 Error;
	} params = {};

	params.Results = Results;
	params.Error = Error;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyFriends.W_PartyFriends_C.OnSuccess_4BF5A74B4418D3E2A98387811A6DAD51
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FSteamFriendInfo> Results                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FString                 Error                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_PartyFriends_C::OnSuccess_4BF5A74B4418D3E2A98387811A6DAD51(TArray<struct FSteamFriendInfo> Results, const struct FString& Error)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyFriends.W_PartyFriends_C.OnSuccess_4BF5A74B4418D3E2A98387811A6DAD51"));

	struct
	{
		TArray<struct FSteamFriendInfo> Results;
		struct FString                 Error;
	} params = {};

	params.Results = Results;
	params.Error = Error;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyFriends.W_PartyFriends_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_PartyFriends_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyFriends.W_PartyFriends_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyFriends.W_PartyFriends_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PartyFriends_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyFriends.W_PartyFriends_C.Tick"));

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


// Function W_PartyFriends.W_PartyFriends_C.UpdateFriendsList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PartyFriends_C::UpdateFriendsList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyFriends.W_PartyFriends_C.UpdateFriendsList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyFriends.W_PartyFriends_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PartyFriends_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyFriends.W_PartyFriends_C.PreConstruct"));

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


// Function W_PartyFriends.W_PartyFriends_C.ExecuteUbergraph_W_PartyFriends
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PartyFriends_C::ExecuteUbergraph_W_PartyFriends(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyFriends.W_PartyFriends_C.ExecuteUbergraph_W_PartyFriends"));

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


// Function W_PartyFriends.W_PartyFriends_C.FriendsFound__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           FoundFriends                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PartyFriends_C::FriendsFound__DelegateSignature(bool FoundFriends)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyFriends.W_PartyFriends_C.FriendsFound__DelegateSignature"));

	struct
	{
		bool                           FoundFriends;
	} params = {};

	params.FoundFriends = FoundFriends;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
