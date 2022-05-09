// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Personal_Bouncyball_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Personal_Bouncyball.BP_Personal_Bouncyball_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Personal_Bouncyball_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Personal_Bouncyball.BP_Personal_Bouncyball_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Personal_Bouncyball.BP_Personal_Bouncyball_C.OnLanded
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_Personal_Bouncyball_C::OnLanded(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Personal_Bouncyball.BP_Personal_Bouncyball_C.OnLanded"));

	struct
	{
		struct FHitResult              Hit;
	} params = {};

	params.Hit = Hit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Personal_Bouncyball.BP_Personal_Bouncyball_C.Bounce
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Personal_Bouncyball_C::Bounce(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Personal_Bouncyball.BP_Personal_Bouncyball_C.Bounce"));

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


// Function BP_Personal_Bouncyball.BP_Personal_Bouncyball_C.OnJumped
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Personal_Bouncyball_C::OnJumped()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Personal_Bouncyball.BP_Personal_Bouncyball_C.OnJumped"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Personal_Bouncyball.BP_Personal_Bouncyball_C.CustomEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Personal_Bouncyball_C::CustomEvent(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Personal_Bouncyball.BP_Personal_Bouncyball_C.CustomEvent"));

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


// Function BP_Personal_Bouncyball.BP_Personal_Bouncyball_C.Set Valid Team Colour
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Personal_Bouncyball_C::Set_Valid_Team_Colour()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Personal_Bouncyball.BP_Personal_Bouncyball_C.Set Valid Team Colour"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Personal_Bouncyball.BP_Personal_Bouncyball_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Personal_Bouncyball_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Personal_Bouncyball.BP_Personal_Bouncyball_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Personal_Bouncyball.BP_Personal_Bouncyball_C.OnBoostingStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Personal_Bouncyball_C::OnBoostingStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Personal_Bouncyball.BP_Personal_Bouncyball_C.OnBoostingStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Personal_Bouncyball.BP_Personal_Bouncyball_C.OnBoostingStopped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Personal_Bouncyball_C::OnBoostingStopped()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Personal_Bouncyball.BP_Personal_Bouncyball_C.OnBoostingStopped"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Personal_Bouncyball.BP_Personal_Bouncyball_C.ExecuteUbergraph_BP_Personal_Bouncyball
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Personal_Bouncyball_C::ExecuteUbergraph_BP_Personal_Bouncyball(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Personal_Bouncyball.BP_Personal_Bouncyball_C.ExecuteUbergraph_BP_Personal_Bouncyball"));

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
