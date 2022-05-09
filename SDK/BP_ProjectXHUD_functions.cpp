// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ProjectXHUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ProjectXHUD.BP_ProjectXHUD_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_ProjectXHUD_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXHUD.BP_ProjectXHUD_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXHUD.BP_ProjectXHUD_C.OnMatchStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXHUD_C::OnMatchStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXHUD.BP_ProjectXHUD_C.OnMatchStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXHUD.BP_ProjectXHUD_C.MatchStartUISetup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXHUD_C::MatchStartUISetup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXHUD.BP_ProjectXHUD_C.MatchStartUISetup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXHUD.BP_ProjectXHUD_C.OnPlayerDeath
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_ProjectXHUD_C::OnPlayerDeath()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXHUD.BP_ProjectXHUD_C.OnPlayerDeath"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXHUD.BP_ProjectXHUD_C.OnWarnPlayerIdle_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXHUD_C::OnWarnPlayerIdle_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXHUD.BP_ProjectXHUD_C.OnWarnPlayerIdle_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXHUD.BP_ProjectXHUD_C.Dismiss Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXHUD_C::Dismiss_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXHUD.BP_ProjectXHUD_C.Dismiss Event"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXHUD.BP_ProjectXHUD_C.ExecuteUbergraph_BP_ProjectXHUD
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXHUD_C::ExecuteUbergraph_BP_ProjectXHUD(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXHUD.BP_ProjectXHUD_C.ExecuteUbergraph_BP_ProjectXHUD"));

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
