// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_SquadMember_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_SquadMember.W_SquadMember_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_SquadMember_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadMember.W_SquadMember_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SquadMember.W_SquadMember_C.OnSquadLeaderChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SquadMember_C::OnSquadLeaderChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadMember.W_SquadMember_C.OnSquadLeaderChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SquadMember.W_SquadMember_C.OnClassChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ PlayerClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UW_SquadMember_C::OnClassChange(class UClass* /*AProjectXCharacter*/ PlayerClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadMember.W_SquadMember_C.OnClassChange"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ PlayerClass;
	} params = {};

	params.PlayerClass = PlayerClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SquadMember.W_SquadMember_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_SquadMember_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadMember.W_SquadMember_C.PreConstruct"));

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


// Function W_SquadMember.W_SquadMember_C.RefreshInformation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    Target_Player_State            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UW_SquadMember_C::RefreshInformation(class AProjectXPlayerState* Target_Player_State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadMember.W_SquadMember_C.RefreshInformation"));

	struct
	{
		class AProjectXPlayerState*    Target_Player_State;
	} params = {};

	params.Target_Player_State = Target_Player_State;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SquadMember.W_SquadMember_C.ReRunConstruct
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SquadMember_C::ReRunConstruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadMember.W_SquadMember_C.ReRunConstruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SquadMember.W_SquadMember_C.ExecuteUbergraph_W_SquadMember
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SquadMember_C::ExecuteUbergraph_W_SquadMember(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SquadMember.W_SquadMember_C.ExecuteUbergraph_W_SquadMember"));

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
