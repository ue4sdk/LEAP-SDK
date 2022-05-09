// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SecondaryEventFeed_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SecondaryEventFeed.SecondaryEventFeed_C.CreateFeedItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UExperienceEvent*        Event                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Experience                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USecondaryEventFeed_C::CreateFeedItem(class UExperienceEvent* Event, int Experience)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SecondaryEventFeed.SecondaryEventFeed_C.CreateFeedItem"));

	struct
	{
		class UExperienceEvent*        Event;
		int                            Experience;
	} params = {};

	params.Event = Event;
	params.Experience = Experience;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SecondaryEventFeed.SecondaryEventFeed_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USecondaryEventFeed_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SecondaryEventFeed.SecondaryEventFeed_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SecondaryEventFeed.SecondaryEventFeed_C.ShowKillParticipation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USecondaryEventFeed_C::ShowKillParticipation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SecondaryEventFeed.SecondaryEventFeed_C.ShowKillParticipation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SecondaryEventFeed.SecondaryEventFeed_C.ConstrainFeedlength
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USecondaryEventFeed_C::ConstrainFeedlength()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SecondaryEventFeed.SecondaryEventFeed_C.ConstrainFeedlength"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SecondaryEventFeed.SecondaryEventFeed_C.ExecuteUbergraph_SecondaryEventFeed
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USecondaryEventFeed_C::ExecuteUbergraph_SecondaryEventFeed(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SecondaryEventFeed.SecondaryEventFeed_C.ExecuteUbergraph_SecondaryEventFeed"));

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
