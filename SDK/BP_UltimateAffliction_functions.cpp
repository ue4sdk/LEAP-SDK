// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_UltimateAffliction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_UltimateAffliction.BP_UltimateAffliction_C.CreateOverlay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_UltimateAffliction_C::CreateOverlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_UltimateAffliction.BP_UltimateAffliction_C.CreateOverlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_UltimateAffliction.BP_UltimateAffliction_C.OnPlayerStateAcquired_DFE65A294FB4D42DBC813588FA2B4066
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_UltimateAffliction_C::OnPlayerStateAcquired_DFE65A294FB4D42DBC813588FA2B4066(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_UltimateAffliction.BP_UltimateAffliction_C.OnPlayerStateAcquired_DFE65A294FB4D42DBC813588FA2B4066"));

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


// Function BP_UltimateAffliction.BP_UltimateAffliction_C.K2_End
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_UltimateAffliction_C::K2_End()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_UltimateAffliction.BP_UltimateAffliction_C.K2_End"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_UltimateAffliction.BP_UltimateAffliction_C.K2_Start
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_UltimateAffliction_C::K2_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_UltimateAffliction.BP_UltimateAffliction_C.K2_Start"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_UltimateAffliction.BP_UltimateAffliction_C.CreateParticleEffect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_UltimateAffliction_C::CreateParticleEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_UltimateAffliction.BP_UltimateAffliction_C.CreateParticleEffect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_UltimateAffliction.BP_UltimateAffliction_C.TeamUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_UltimateAffliction_C::TeamUpdated(class AProjectXPlayerState* PlayerState, unsigned char Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_UltimateAffliction.BP_UltimateAffliction_C.TeamUpdated"));

	struct
	{
		class AProjectXPlayerState*    PlayerState;
		unsigned char                  Team;
	} params = {};

	params.PlayerState = PlayerState;
	params.Team = Team;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_UltimateAffliction.BP_UltimateAffliction_C.ExecuteUbergraph_BP_UltimateAffliction
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_UltimateAffliction_C::ExecuteUbergraph_BP_UltimateAffliction(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_UltimateAffliction.BP_UltimateAffliction_C.ExecuteUbergraph_BP_UltimateAffliction"));

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
