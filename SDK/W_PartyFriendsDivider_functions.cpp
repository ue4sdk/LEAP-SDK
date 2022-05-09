// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PartyFriendsDivider_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PartyFriendsDivider.W_PartyFriendsDivider_C.GetText_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UW_PartyFriendsDivider_C::GetText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyFriendsDivider.W_PartyFriendsDivider_C.GetText_1"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_PartyFriendsDivider.W_PartyFriendsDivider_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_PartyFriendsDivider_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyFriendsDivider.W_PartyFriendsDivider_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyFriendsDivider.W_PartyFriendsDivider_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PartyFriendsDivider_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyFriendsDivider.W_PartyFriendsDivider_C.PreConstruct"));

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


// Function W_PartyFriendsDivider.W_PartyFriendsDivider_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PartyFriendsDivider_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyFriendsDivider.W_PartyFriendsDivider_C.Init"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PartyFriendsDivider.W_PartyFriendsDivider_C.ExecuteUbergraph_W_PartyFriendsDivider
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PartyFriendsDivider_C::ExecuteUbergraph_W_PartyFriendsDivider(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PartyFriendsDivider.W_PartyFriendsDivider_C.ExecuteUbergraph_W_PartyFriendsDivider"));

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
