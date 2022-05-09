// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_GroundPoundDesignator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GroundPoundDesignator.BP_GroundPoundDesignator_C.FadeAway
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GroundPoundDesignator_C::FadeAway(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GroundPoundDesignator.BP_GroundPoundDesignator_C.FadeAway"));

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


// Function BP_GroundPoundDesignator.BP_GroundPoundDesignator_C.Destroy
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GroundPoundDesignator_C::Destroy(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GroundPoundDesignator.BP_GroundPoundDesignator_C.Destroy"));

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


// Function BP_GroundPoundDesignator.BP_GroundPoundDesignator_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_GroundPoundDesignator_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GroundPoundDesignator.BP_GroundPoundDesignator_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_GroundPoundDesignator.BP_GroundPoundDesignator_C.InitializeForTeam
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GroundPoundDesignator_C::InitializeForTeam(int Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GroundPoundDesignator.BP_GroundPoundDesignator_C.InitializeForTeam"));

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


// Function BP_GroundPoundDesignator.BP_GroundPoundDesignator_C.Complete
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_GroundPoundDesignator_C::Complete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GroundPoundDesignator.BP_GroundPoundDesignator_C.Complete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_GroundPoundDesignator.BP_GroundPoundDesignator_C.SetColour
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Colour                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GroundPoundDesignator_C::SetColour(const struct FLinearColor& Colour)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GroundPoundDesignator.BP_GroundPoundDesignator_C.SetColour"));

	struct
	{
		struct FLinearColor            Colour;
	} params = {};

	params.Colour = Colour;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_GroundPoundDesignator.BP_GroundPoundDesignator_C.EmitWarrning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_GroundPoundDesignator_C::EmitWarrning()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GroundPoundDesignator.BP_GroundPoundDesignator_C.EmitWarrning"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_GroundPoundDesignator.BP_GroundPoundDesignator_C.ExecuteUbergraph_BP_GroundPoundDesignator
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GroundPoundDesignator_C::ExecuteUbergraph_BP_GroundPoundDesignator(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GroundPoundDesignator.BP_GroundPoundDesignator_C.ExecuteUbergraph_BP_GroundPoundDesignator"));

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
