// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_KillParticipationFeed_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_KillParticipationFeed.W_KillParticipationFeed_C.GetTargetName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            TargetState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Target                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_KillParticipationFeed_C::GetTargetName(class APlayerState* TargetState, struct FString* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillParticipationFeed.W_KillParticipationFeed_C.GetTargetName"));

	struct
	{
		class APlayerState*            TargetState;
		struct FString                 Target;
	} params = {};

	params.TargetState = TargetState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Target != nullptr)
		*Target = params.Target;
}


// Function W_KillParticipationFeed.W_KillParticipationFeed_C.OnPlayerStateAcquired_1A18F7164716C014084CB5A0C04FCE2B
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KillParticipationFeed_C::OnPlayerStateAcquired_1A18F7164716C014084CB5A0C04FCE2B(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillParticipationFeed.W_KillParticipationFeed_C.OnPlayerStateAcquired_1A18F7164716C014084CB5A0C04FCE2B"));

	struct
	{
		class APlayerState*            PlayerState;
	} params = {};

	params.PlayerState = PlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KillParticipationFeed.W_KillParticipationFeed_C.ShowKillParticipation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsSecondary                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_KillParticipationFeed_C::ShowKillParticipation(bool bIsSecondary)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillParticipationFeed.W_KillParticipationFeed_C.ShowKillParticipation"));

	struct
	{
		bool                           bIsSecondary;
	} params = {};

	params.bIsSecondary = bIsSecondary;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KillParticipationFeed.W_KillParticipationFeed_C.CreateFeedItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UExperienceEvent*        Event                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXPlayerState*    Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Experience                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KillParticipationFeed_C::CreateFeedItem(class UExperienceEvent* Event, class AProjectXPlayerState* Target, int Experience)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillParticipationFeed.W_KillParticipationFeed_C.CreateFeedItem"));

	struct
	{
		class UExperienceEvent*        Event;
		class AProjectXPlayerState*    Target;
		int                            Experience;
	} params = {};

	params.Event = Event;
	params.Target = Target;
	params.Experience = Experience;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KillParticipationFeed.W_KillParticipationFeed_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_KillParticipationFeed_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillParticipationFeed.W_KillParticipationFeed_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KillParticipationFeed.W_KillParticipationFeed_C.ExecuteUbergraph_W_KillParticipationFeed
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KillParticipationFeed_C::ExecuteUbergraph_W_KillParticipationFeed(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillParticipationFeed.W_KillParticipationFeed_C.ExecuteUbergraph_W_KillParticipationFeed"));

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
