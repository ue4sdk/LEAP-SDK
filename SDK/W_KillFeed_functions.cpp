// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_KillFeed_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_KillFeed.W_KillFeed_C.OnGameStateAcquired_C67C9C1446CCD70343C992BE5F8A7DA3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameState*              GameState                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KillFeed_C::OnGameStateAcquired_C67C9C1446CCD70343C992BE5F8A7DA3(class AGameState* GameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillFeed.W_KillFeed_C.OnGameStateAcquired_C67C9C1446CCD70343C992BE5F8A7DA3"));

	struct
	{
		class AGameState*              GameState;
	} params = {};

	params.GameState = GameState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KillFeed.W_KillFeed_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_KillFeed_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillFeed.W_KillFeed_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KillFeed.W_KillFeed_C.OnPlayerKill
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    Killer                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXPlayerState*    Killed                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Data                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UProjectXDamageType*/ DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// bool                           bWasHeadshot                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_KillFeed_C::OnPlayerKill(class AProjectXPlayerState* Killer, class AProjectXPlayerState* Killed, int Data, class UClass* /*UProjectXDamageType*/ DamageType, bool bWasHeadshot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillFeed.W_KillFeed_C.OnPlayerKill"));

	struct
	{
		class AProjectXPlayerState*    Killer;
		class AProjectXPlayerState*    Killed;
		int                            Data;
		class UClass* /*UProjectXDamageType*/ DamageType;
		bool                           bWasHeadshot;
	} params = {};

	params.Killer = Killer;
	params.Killed = Killed;
	params.Data = Data;
	params.DamageType = DamageType;
	params.bWasHeadshot = bWasHeadshot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_KillFeed.W_KillFeed_C.ExecuteUbergraph_W_KillFeed
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_KillFeed_C::ExecuteUbergraph_W_KillFeed(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_KillFeed.W_KillFeed_C.ExecuteUbergraph_W_KillFeed"));

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
