// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_VoteKickEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_VoteKickEntry.W_VoteKickEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_VoteKickEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VoteKickEntry.W_VoteKickEntry_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VoteKickEntry.W_VoteKickEntry_C.BndEvt__btn_Player_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_VoteKickEntry_C::BndEvt__btn_Player_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VoteKickEntry.W_VoteKickEntry_C.BndEvt__btn_Player_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature"));

	struct
	{
		struct FString                 ID;
		struct FString                 Name;
		ECosmeticType                  Type;
		class UClass* /*UUserWidget*/  Widget;
	} params = {};

	params.ID = ID;
	params.Name = Name;
	params.Type = Type;
	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VoteKickEntry.W_VoteKickEntry_C.BndEvt__btn_Player_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_VoteKickEntry_C::BndEvt__btn_Player_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VoteKickEntry.W_VoteKickEntry_C.BndEvt__btn_Player_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VoteKickEntry.W_VoteKickEntry_C.BndEvt__btn_Player_K2Node_ComponentBoundEvent_3_OnHoveredOff__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_VoteKickEntry_C::BndEvt__btn_Player_K2Node_ComponentBoundEvent_3_OnHoveredOff__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VoteKickEntry.W_VoteKickEntry_C.BndEvt__btn_Player_K2Node_ComponentBoundEvent_3_OnHoveredOff__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_VoteKickEntry.W_VoteKickEntry_C.ExecuteUbergraph_W_VoteKickEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_VoteKickEntry_C::ExecuteUbergraph_W_VoteKickEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_VoteKickEntry.W_VoteKickEntry_C.ExecuteUbergraph_W_VoteKickEntry"));

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
