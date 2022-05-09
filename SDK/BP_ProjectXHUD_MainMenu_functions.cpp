// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ProjectXHUD_MainMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ProjectXHUD_MainMenu.BP_ProjectXHUD_MainMenu_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_ProjectXHUD_MainMenu_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXHUD_MainMenu.BP_ProjectXHUD_MainMenu_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXHUD_MainMenu.BP_ProjectXHUD_MainMenu_C.OnSessionUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESessionState                  State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXHUD_MainMenu_C::OnSessionUpdated(ESessionState State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXHUD_MainMenu.BP_ProjectXHUD_MainMenu_C.OnSessionUpdated"));

	struct
	{
		ESessionState                  State;
	} params = {};

	params.State = State;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXHUD_MainMenu.BP_ProjectXHUD_MainMenu_C.ExecuteUbergraph_BP_ProjectXHUD_MainMenu
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXHUD_MainMenu_C::ExecuteUbergraph_BP_ProjectXHUD_MainMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXHUD_MainMenu.BP_ProjectXHUD_MainMenu_C.ExecuteUbergraph_BP_ProjectXHUD_MainMenu"));

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
