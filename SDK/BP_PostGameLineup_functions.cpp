// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_PostGameLineup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PostGameLineup.BP_PostGameLineup_C.UpdateWidgetTransform
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PostGameLineup_C::UpdateWidgetTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PostGameLineup.BP_PostGameLineup_C.UpdateWidgetTransform"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PostGameLineup.BP_PostGameLineup_C.GetWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UW_PlayerStatsWidget_C*  AsW_Player_Stats_Widget        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_PostGameLineup_C::GetWidget(int ID, class UW_PlayerStatsWidget_C** AsW_Player_Stats_Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PostGameLineup.BP_PostGameLineup_C.GetWidget"));

	struct
	{
		int                            ID;
		class UW_PlayerStatsWidget_C*  AsW_Player_Stats_Widget;
	} params = {};

	params.ID = ID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AsW_Player_Stats_Widget != nullptr)
		*AsW_Player_Stats_Widget = params.AsW_Player_Stats_Widget;
}


// Function BP_PostGameLineup.BP_PostGameLineup_C.InitLineupPositions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PostGameLineup_C::InitLineupPositions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PostGameLineup.BP_PostGameLineup_C.InitLineupPositions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PostGameLineup.BP_PostGameLineup_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_PostGameLineup_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PostGameLineup.BP_PostGameLineup_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PostGameLineup.BP_PostGameLineup_C.PlayerSpawned
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FPodiumPawn>     PodiumPawns                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ABP_PostGameLineup_C::PlayerSpawned(TArray<struct FPodiumPawn> PodiumPawns)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PostGameLineup.BP_PostGameLineup_C.PlayerSpawned"));

	struct
	{
		TArray<struct FPodiumPawn>     PodiumPawns;
	} params = {};

	params.PodiumPawns = PodiumPawns;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PostGameLineup.BP_PostGameLineup_C.K2_InitPostGameScreen
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_PostGameLineup_C::K2_InitPostGameScreen(float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PostGameLineup.BP_PostGameLineup_C.K2_InitPostGameScreen"));

	struct
	{
		float                          Duration;
	} params = {};

	params.Duration = Duration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PostGameLineup.BP_PostGameLineup_C.CreatePodiumPlace
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPodiumPawn             PodiumPawn                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// int                            InputPin                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_PostGameLineup_C::CreatePodiumPlace(const struct FPodiumPawn& PodiumPawn, int InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PostGameLineup.BP_PostGameLineup_C.CreatePodiumPlace"));

	struct
	{
		struct FPodiumPawn             PodiumPawn;
		int                            InputPin;
	} params = {};

	params.PodiumPawn = PodiumPawn;
	params.InputPin = InputPin;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PostGameLineup.BP_PostGameLineup_C.Move
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_PostGameLineup_C::Move(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PostGameLineup.BP_PostGameLineup_C.Move"));

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


// Function BP_PostGameLineup.BP_PostGameLineup_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_PostGameLineup_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PostGameLineup.BP_PostGameLineup_C.ReceiveEndPlay"));

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


// Function BP_PostGameLineup.BP_PostGameLineup_C.ExecuteUbergraph_BP_PostGameLineup
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_PostGameLineup_C::ExecuteUbergraph_BP_PostGameLineup(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PostGameLineup.BP_PostGameLineup_C.ExecuteUbergraph_BP_PostGameLineup"));

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
