// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ControlledRocketDeployAffliction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ControlledRocketDeployAffliction.BP_ControlledRocketDeployAffliction_C.CreateOverlay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ControlledRocketDeployAffliction_C::CreateOverlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ControlledRocketDeployAffliction.BP_ControlledRocketDeployAffliction_C.CreateOverlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ControlledRocketDeployAffliction.BP_ControlledRocketDeployAffliction_C.OnPlayerStateAcquired_DBD38455474558B87E37E9B1360D3739
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ControlledRocketDeployAffliction_C::OnPlayerStateAcquired_DBD38455474558B87E37E9B1360D3739(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ControlledRocketDeployAffliction.BP_ControlledRocketDeployAffliction_C.OnPlayerStateAcquired_DBD38455474558B87E37E9B1360D3739"));

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


// Function BP_ControlledRocketDeployAffliction.BP_ControlledRocketDeployAffliction_C.K2_End
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_ControlledRocketDeployAffliction_C::K2_End()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ControlledRocketDeployAffliction.BP_ControlledRocketDeployAffliction_C.K2_End"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ControlledRocketDeployAffliction.BP_ControlledRocketDeployAffliction_C.K2_Start
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_ControlledRocketDeployAffliction_C::K2_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ControlledRocketDeployAffliction.BP_ControlledRocketDeployAffliction_C.K2_Start"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ControlledRocketDeployAffliction.BP_ControlledRocketDeployAffliction_C.CreateParticleEffect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ControlledRocketDeployAffliction_C::CreateParticleEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ControlledRocketDeployAffliction.BP_ControlledRocketDeployAffliction_C.CreateParticleEffect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ControlledRocketDeployAffliction.BP_ControlledRocketDeployAffliction_C.TeamUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ControlledRocketDeployAffliction_C::TeamUpdated(class AProjectXPlayerState* PlayerState, unsigned char Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ControlledRocketDeployAffliction.BP_ControlledRocketDeployAffliction_C.TeamUpdated"));

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


// Function BP_ControlledRocketDeployAffliction.BP_ControlledRocketDeployAffliction_C.ExecuteUbergraph_BP_ControlledRocketDeployAffliction
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ControlledRocketDeployAffliction_C::ExecuteUbergraph_BP_ControlledRocketDeployAffliction(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ControlledRocketDeployAffliction.BP_ControlledRocketDeployAffliction_C.ExecuteUbergraph_BP_ControlledRocketDeployAffliction"));

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
