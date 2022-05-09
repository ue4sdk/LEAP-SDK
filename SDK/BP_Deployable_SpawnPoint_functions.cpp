// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Deployable_SpawnPoint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Deployable_SpawnPoint.BP_Deployable_SpawnPoint_C.InitializeForTeam
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_SpawnPoint_C::InitializeForTeam(int Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SpawnPoint.BP_Deployable_SpawnPoint_C.InitializeForTeam"));

	struct
	{
		int                            Team;
	} params = {};

	params.Team = Team;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_SpawnPoint.BP_Deployable_SpawnPoint_C.OnDeployStart
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Deployable_SpawnPoint_C::OnDeployStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SpawnPoint.BP_Deployable_SpawnPoint_C.OnDeployStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_SpawnPoint.BP_Deployable_SpawnPoint_C.OnDeployComplete
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Deployable_SpawnPoint_C::OnDeployComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SpawnPoint.BP_Deployable_SpawnPoint_C.OnDeployComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_SpawnPoint.BP_Deployable_SpawnPoint_C.FadeIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_SpawnPoint_C::FadeIn(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SpawnPoint.BP_Deployable_SpawnPoint_C.FadeIn"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_SpawnPoint.BP_Deployable_SpawnPoint_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Deployable_SpawnPoint_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SpawnPoint.BP_Deployable_SpawnPoint_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_SpawnPoint.BP_Deployable_SpawnPoint_C.FadeOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_SpawnPoint_C::FadeOut(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SpawnPoint.BP_Deployable_SpawnPoint_C.FadeOut"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_SpawnPoint.BP_Deployable_SpawnPoint_C.OnDeployableDied
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Deployable_SpawnPoint_C::OnDeployableDied()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SpawnPoint.BP_Deployable_SpawnPoint_C.OnDeployableDied"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_SpawnPoint.BP_Deployable_SpawnPoint_C.Interpolate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_SpawnPoint_C::Interpolate(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SpawnPoint.BP_Deployable_SpawnPoint_C.Interpolate"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_SpawnPoint.BP_Deployable_SpawnPoint_C.Landed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_SpawnPoint_C::Landed(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SpawnPoint.BP_Deployable_SpawnPoint_C.Landed"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Deployable_SpawnPoint.BP_Deployable_SpawnPoint_C.ExecuteUbergraph_BP_Deployable_SpawnPoint
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Deployable_SpawnPoint_C::ExecuteUbergraph_BP_Deployable_SpawnPoint(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Deployable_SpawnPoint.BP_Deployable_SpawnPoint_C.ExecuteUbergraph_BP_Deployable_SpawnPoint"));

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
