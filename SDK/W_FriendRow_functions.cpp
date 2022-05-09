// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_FriendRow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_FriendRow.W_FriendRow_C.Send Invite Message
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Invited_player                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_FriendRow_C::Send_Invite_Message(const struct FString& Invited_player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_FriendRow.W_FriendRow_C.Send Invite Message"));

	struct
	{
		struct FString                 Invited_player;
	} params = {};

	params.Invited_player = Invited_player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_FriendRow.W_FriendRow_C.SetData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSteamFriendInfo        InFriendInfo                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UTexture2D*              InAvatar                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_FriendRow_C::SetData(const struct FSteamFriendInfo& InFriendInfo, class UTexture2D* InAvatar)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_FriendRow.W_FriendRow_C.SetData"));

	struct
	{
		struct FSteamFriendInfo        InFriendInfo;
		class UTexture2D*              InAvatar;
	} params = {};

	params.InFriendInfo = InFriendInfo;
	params.InAvatar = InAvatar;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_FriendRow.W_FriendRow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_FriendRow_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_FriendRow.W_FriendRow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_FriendRow.W_FriendRow_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_FriendRow_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_FriendRow.W_FriendRow_C.PreConstruct"));

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


// Function W_FriendRow.W_FriendRow_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_FriendRow_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_FriendRow.W_FriendRow_C.Init"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_FriendRow.W_FriendRow_C.ExecuteUbergraph_W_FriendRow
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_FriendRow_C::ExecuteUbergraph_W_FriendRow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_FriendRow.W_FriendRow_C.ExecuteUbergraph_W_FriendRow"));

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
