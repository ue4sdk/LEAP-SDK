// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Weapon_DevastatorMode_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Weapon_DevastatorMode.BP_Weapon_DevastatorMode_C.K2_FireComplete
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_DevastatorMode_C::K2_FireComplete(unsigned char Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_DevastatorMode.BP_Weapon_DevastatorMode_C.K2_FireComplete"));

	struct
	{
		unsigned char                  Mode;
	} params = {};

	params.Mode = Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_DevastatorMode.BP_Weapon_DevastatorMode_C.K2_ToggleOff
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_Weapon_DevastatorMode_C::K2_ToggleOff()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_DevastatorMode.BP_Weapon_DevastatorMode_C.K2_ToggleOff"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_DevastatorMode.BP_Weapon_DevastatorMode_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_DevastatorMode_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_DevastatorMode.BP_Weapon_DevastatorMode_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params = {};

	params.EndPlayReason = EndPlayReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weapon_DevastatorMode.BP_Weapon_DevastatorMode_C.ExecuteUbergraph_BP_Weapon_DevastatorMode
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Weapon_DevastatorMode_C::ExecuteUbergraph_BP_Weapon_DevastatorMode(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weapon_DevastatorMode.BP_Weapon_DevastatorMode_C.ExecuteUbergraph_BP_Weapon_DevastatorMode"));

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
