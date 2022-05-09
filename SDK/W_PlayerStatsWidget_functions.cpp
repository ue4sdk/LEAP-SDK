// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PlayerStatsWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PlayerStatsWidget.W_PlayerStatsWidget_C.GetDisplayColour
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            SquadColor                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsEnemy                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlayerStatsWidget_C::GetDisplayColour(struct FLinearColor* SquadColor, bool* IsEnemy)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerStatsWidget.W_PlayerStatsWidget_C.GetDisplayColour"));

	struct
	{
		struct FLinearColor            SquadColor;
		bool                           IsEnemy;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SquadColor != nullptr)
		*SquadColor = params.SquadColor;
	if (IsEnemy != nullptr)
		*IsEnemy = params.IsEnemy;
}


// Function W_PlayerStatsWidget.W_PlayerStatsWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_PlayerStatsWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerStatsWidget.W_PlayerStatsWidget_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerStatsWidget.W_PlayerStatsWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_PlayerStatsWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerStatsWidget.W_PlayerStatsWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerStatsWidget.W_PlayerStatsWidget_C.Initialize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerStatsWidget_C::Initialize(class AProjectXPlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerStatsWidget.W_PlayerStatsWidget_C.Initialize"));

	struct
	{
		class AProjectXPlayerState*    PlayerState;
	} params = {};

	params.PlayerState = PlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerStatsWidget.W_PlayerStatsWidget_C.UpdateStats
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlayerStatsWidget_C::UpdateStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerStatsWidget.W_PlayerStatsWidget_C.UpdateStats"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerStatsWidget.W_PlayerStatsWidget_C.SetupDefaults
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PlayerStatsWidget_C::SetupDefaults()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerStatsWidget.W_PlayerStatsWidget_C.SetupDefaults"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_PlayerStatsWidget.W_PlayerStatsWidget_C.ExecuteUbergraph_W_PlayerStatsWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_PlayerStatsWidget_C::ExecuteUbergraph_W_PlayerStatsWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_PlayerStatsWidget.W_PlayerStatsWidget_C.ExecuteUbergraph_W_PlayerStatsWidget"));

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
