// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_ObjectiveIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnAOWCommandCenterDestroyed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ACommandCenter*          CommandCenter                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::OnAOWCommandCenterDestroyed(class ACommandCenter* CommandCenter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnAOWCommandCenterDestroyed"));

	struct
	{
		class ACommandCenter*          CommandCenter;
	} params = {};

	params.CommandCenter = CommandCenter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnAOWCommandCenterHealthChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ACommandCenter*          CommandCenter                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::OnAOWCommandCenterHealthChanged(class ACommandCenter* CommandCenter, float Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnAOWCommandCenterHealthChanged"));

	struct
	{
		class ACommandCenter*          CommandCenter;
		float                          Delta;
	} params = {};

	params.CommandCenter = CommandCenter;
	params.Delta = Delta;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnAOWShieldGeneratorDestroyed
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AShieldGenerator*        Generator                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::OnAOWShieldGeneratorDestroyed(class AShieldGenerator* Generator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnAOWShieldGeneratorDestroyed"));

	struct
	{
		class AShieldGenerator*        Generator;
	} params = {};

	params.Generator = Generator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnAOWShieldGeneratorHealthChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AShieldGenerator*        Generator                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::OnAOWShieldGeneratorHealthChanged(class AShieldGenerator* Generator, float Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnAOWShieldGeneratorHealthChanged"));

	struct
	{
		class AShieldGenerator*        Generator;
		float                          Delta;
	} params = {};

	params.Generator = Generator;
	params.Delta = Delta;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnAOWCaptureInfoChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCaptureInfo            CaptureInfo                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UW_ObjectiveIcon_C::OnAOWCaptureInfoChanged(const struct FCaptureInfo& CaptureInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnAOWCaptureInfoChanged"));

	struct
	{
		struct FCaptureInfo            CaptureInfo;
	} params = {};

	params.CaptureInfo = CaptureInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.UpdateAOWProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CurerntProgressTeam            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ProgressPercent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::UpdateAOWProgress(int CurerntProgressTeam, float ProgressPercent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.UpdateAOWProgress"));

	struct
	{
		int                            CurerntProgressTeam;
		float                          ProgressPercent;
	} params = {};

	params.CurerntProgressTeam = CurerntProgressTeam;
	params.ProgressPercent = ProgressPercent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.Init AOW Objective
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ObjectiveIcon_C::Init_AOW_Objective()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.Init AOW Objective"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.GetReferenceActor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Reference_Actor                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::GetReferenceActor(class AActor** Reference_Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.GetReferenceActor"));

	struct
	{
		class AActor*                  Reference_Actor;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Reference_Actor != nullptr)
		*Reference_Actor = params.Reference_Actor;
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.Hovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Hovered                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ObjectiveIcon_C::Hovered(bool Hovered)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.Hovered"));

	struct
	{
		bool                           Hovered;
	} params = {};

	params.Hovered = Hovered;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.GetVipDesignation
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// unsigned char                  Key                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Value                          (CPF_Parm, CPF_OutParm)

void UW_ObjectiveIcon_C::GetVipDesignation(unsigned char Key, struct FText* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.GetVipDesignation"));

	struct
	{
		unsigned char                  Key;
		struct FText                   Value;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Value != nullptr)
		*Value = params.Value;
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.Init VIP
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVIP                    NewVIP                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// int                            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bShouldUpdateIconSize          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ObjectiveIcon_C::Init_VIP(const struct FVIP& NewVIP, int Team, bool bShouldUpdateIconSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.Init VIP"));

	struct
	{
		struct FVIP                    NewVIP;
		int                            Team;
		bool                           bShouldUpdateIconSize;
	} params = {};

	params.NewVIP = NewVIP;
	params.Team = Team;
	params.bShouldUpdateIconSize = bShouldUpdateIconSize;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.Spawnable
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSpawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ObjectiveIcon_C::Spawnable(bool IsSpawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.Spawnable"));

	struct
	{
		bool                           IsSpawn;
	} params = {};

	params.IsSpawn = IsSpawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.Selectable
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Selectable                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ObjectiveIcon_C::Selectable(bool Selectable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.Selectable"));

	struct
	{
		bool                           Selectable;
	} params = {};

	params.Selectable = Selectable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.Selected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Selected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ObjectiveIcon_C::Selected(bool Selected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.Selected"));

	struct
	{
		bool                           Selected;
	} params = {};

	params.Selected = Selected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.InitSpawn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_SpawnPoint_C*         SpawnPointWidget               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::InitSpawn(class UW_SpawnPoint_C* SpawnPointWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.InitSpawn"));

	struct
	{
		class UW_SpawnPoint_C*         SpawnPointWidget;
	} params = {};

	params.SpawnPointWidget = SpawnPointWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.InitStates
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ObjectiveIcon_C::InitStates()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.InitStates"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.IsFriendlyOwned
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsFriendlyOwned                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ObjectiveIcon_C::IsFriendlyOwned(bool* IsFriendlyOwned)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.IsFriendlyOwned"));

	struct
	{
		bool                           IsFriendlyOwned;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsFriendlyOwned != nullptr)
		*IsFriendlyOwned = params.IsFriendlyOwned;
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.SetSize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               Size                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::SetSize(const struct FVector2D& Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.SetSize"));

	struct
	{
		struct FVector2D               Size;
	} params = {};

	params.Size = Size;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.DeactivateCapturePoint
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ACapturePoint*           CapturePoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::DeactivateCapturePoint(class ACapturePoint* CapturePoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.DeactivateCapturePoint"));

	struct
	{
		class ACapturePoint*           CapturePoint;
	} params = {};

	params.CapturePoint = CapturePoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnCaptureInfoChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCaptureInfo            CaptureInfo                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UW_ObjectiveIcon_C::OnCaptureInfoChanged(const struct FCaptureInfo& CaptureInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnCaptureInfoChanged"));

	struct
	{
		struct FCaptureInfo            CaptureInfo;
	} params = {};

	params.CaptureInfo = CaptureInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.InitCapturePoint_KingOfTheHill
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ObjectiveIcon_C::InitCapturePoint_KingOfTheHill()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.InitCapturePoint_KingOfTheHill"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.InitCapturePoint
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ObjectiveIcon_C::InitCapturePoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.InitCapturePoint"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.Disabled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Disable                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ObjectiveIcon_C::Disabled(bool Disable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.Disabled"));

	struct
	{
		bool                           Disable;
	} params = {};

	params.Disable = Disable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnFlagStateUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bFlagIsHome                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ObjectiveIcon_C::OnFlagStateUpdated(bool bFlagIsHome)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnFlagStateUpdated"));

	struct
	{
		bool                           bFlagIsHome;
	} params = {};

	params.bFlagIsHome = bFlagIsHome;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.InitFlagPoint
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ObjectiveIcon_C::InitFlagPoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.InitFlagPoint"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.UpdateIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateBrush             IconBrush                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_ObjectiveIcon_C::UpdateIcon(const struct FSlateBrush& IconBrush)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.UpdateIcon"));

	struct
	{
		struct FSlateBrush             IconBrush;
	} params = {};

	params.IconBrush = IconBrush;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.GetObjectiveDistance
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  ObjectiveActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Distance                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsKilometers                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ObjectiveIcon_C::GetObjectiveDistance(class AActor* ObjectiveActor, float* Distance, bool* IsKilometers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.GetObjectiveDistance"));

	struct
	{
		class AActor*                  ObjectiveActor;
		float                          Distance;
		bool                           IsKilometers;
	} params = {};

	params.ObjectiveActor = ObjectiveActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Distance != nullptr)
		*Distance = params.Distance;
	if (IsKilometers != nullptr)
		*IsKilometers = params.IsKilometers;
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnAssaultInfoChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FAssaultPointInfo       AssaultPointInfo               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UW_ObjectiveIcon_C::OnAssaultInfoChanged(const struct FAssaultPointInfo& AssaultPointInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnAssaultInfoChanged"));

	struct
	{
		struct FAssaultPointInfo       AssaultPointInfo;
	} params = {};

	params.AssaultPointInfo = AssaultPointInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.InitAssaultPoint
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ObjectiveIcon_C::InitAssaultPoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.InitAssaultPoint"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.UpdateSquadOrders
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ObjectiveIcon_C::UpdateSquadOrders()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.UpdateSquadOrders"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.UpdatePlayerCount
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Players                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::UpdatePlayerCount(int Players)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.UpdatePlayerCount"));

	struct
	{
		int                            Players;
	} params = {};

	params.Players = Players;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.ClearSquadOrders
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ObjectiveIcon_C::ClearSquadOrders()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.ClearSquadOrders"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnSquadMemberAdded
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SquadID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AProjectXPlayerState*    PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::OnSquadMemberAdded(int SquadID, class AProjectXPlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnSquadMemberAdded"));

	struct
	{
		int                            SquadID;
		class AProjectXPlayerState*    PlayerState;
	} params = {};

	params.SquadID = SquadID;
	params.PlayerState = PlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.SetSquadOrders
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    SquadLeaderActor               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::SetSquadOrders(class AProjectXPlayerState* SquadLeaderActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.SetSquadOrders"));

	struct
	{
		class AProjectXPlayerState*    SquadLeaderActor;
	} params = {};

	params.SquadLeaderActor = SquadLeaderActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnQuickChatMessageReceived
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FQuickChatInfo          QuickChatData                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UW_ObjectiveIcon_C::OnQuickChatMessageReceived(const struct FQuickChatInfo& QuickChatData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnQuickChatMessageReceived"));

	struct
	{
		struct FQuickChatInfo          QuickChatData;
	} params = {};

	params.QuickChatData = QuickChatData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.UpdateTimer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::UpdateTimer(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.UpdateTimer"));

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


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.Warn
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Warn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ObjectiveIcon_C::Warn(bool Warn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.Warn"));

	struct
	{
		bool                           Warn;
	} params = {};

	params.Warn = Warn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.SetOwnership
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            OwningTeam                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::SetOwnership(int OwningTeam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.SetOwnership"));

	struct
	{
		int                            OwningTeam;
	} params = {};

	params.OwningTeam = OwningTeam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.Attack
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Attack                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ObjectiveIcon_C::Attack(bool Attack)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.Attack"));

	struct
	{
		bool                           Attack;
	} params = {};

	params.Attack = Attack;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.Defend
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Defend                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ObjectiveIcon_C::Defend(bool Defend)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.Defend"));

	struct
	{
		bool                           Defend;
	} params = {};

	params.Defend = Defend;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.UpdateColors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ObjectiveIcon_C::UpdateColors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.UpdateColors"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.UpdateDesignation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           HasDesignation                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   ObjectiveDesignation           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_ObjectiveIcon_C::UpdateDesignation(bool HasDesignation, const struct FText& ObjectiveDesignation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.UpdateDesignation"));

	struct
	{
		bool                           HasDesignation;
		struct FText                   ObjectiveDesignation;
	} params = {};

	params.HasDesignation = HasDesignation;
	params.ObjectiveDesignation = ObjectiveDesignation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.UpdateProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CurerntProgressTeam            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ProgressPercent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::UpdateProgress(int CurerntProgressTeam, float ProgressPercent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.UpdateProgress"));

	struct
	{
		int                            CurerntProgressTeam;
		float                          ProgressPercent;
	} params = {};

	params.CurerntProgressTeam = CurerntProgressTeam;
	params.ProgressPercent = ProgressPercent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.GetTeamColour
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Colour                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Mid                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Dark                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Emissive                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::GetTeamColour(int Team, struct FLinearColor* Colour, struct FLinearColor* Mid, struct FLinearColor* Dark, struct FLinearColor* Emissive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.GetTeamColour"));

	struct
	{
		int                            Team;
		struct FLinearColor            Colour;
		struct FLinearColor            Mid;
		struct FLinearColor            Dark;
		struct FLinearColor            Emissive;
	} params = {};

	params.Team = Team;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Colour != nullptr)
		*Colour = params.Colour;
	if (Mid != nullptr)
		*Mid = params.Mid;
	if (Dark != nullptr)
		*Dark = params.Dark;
	if (Emissive != nullptr)
		*Emissive = params.Emissive;
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.InitColors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ObjectiveIcon_C::InitColors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.InitColors"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.InitMaterials
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ObjectiveIcon_C::InitMaterials()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.InitMaterials"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.InitStyle
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ObjectiveIcon_C::InitStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.InitStyle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnPlayerStateAcquired_380188FF4E1D7A1568E9F191AAE09C47
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::OnPlayerStateAcquired_380188FF4E1D7A1568E9F191AAE09C47(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnPlayerStateAcquired_380188FF4E1D7A1568E9F191AAE09C47"));

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


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnGameStateAcquired_C92C98F148ADA2014B7AC58173300083
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameState*              GameState                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::OnGameStateAcquired_C92C98F148ADA2014B7AC58173300083(class AGameState* GameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnGameStateAcquired_C92C98F148ADA2014B7AC58173300083"));

	struct
	{
		class AGameState*              GameState;
	} params = {};

	params.GameState = GameState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnPlayerStateAcquired_2564299043B5BCD90AC99B805D649233
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::OnPlayerStateAcquired_2564299043B5BCD90AC99B805D649233(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnPlayerStateAcquired_2564299043B5BCD90AC99B805D649233"));

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


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ObjectiveIcon_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.PreConstruct"));

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


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_ObjectiveIcon_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnPlayerChangedTeam
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::OnPlayerChangedTeam(class AProjectXPlayerState* PlayerState, unsigned char Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnPlayerChangedTeam"));

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


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.Initialize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ObjectiveIcon_Styles> IconStyle                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  ObjectiveActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ShowDistance                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           HasDesignation                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsMarker                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ForceInitialization            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ObjectiveIcon_C::Initialize(TEnumAsByte<E_ObjectiveIcon_Styles> IconStyle, class AActor* ObjectiveActor, bool ShowDistance, bool HasDesignation, bool IsMarker, bool ForceInitialization)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.Initialize"));

	struct
	{
		TEnumAsByte<E_ObjectiveIcon_Styles> IconStyle;
		class AActor*                  ObjectiveActor;
		bool                           ShowDistance;
		bool                           HasDesignation;
		bool                           IsMarker;
		bool                           ForceInitialization;
	} params = {};

	params.IconStyle = IconStyle;
	params.ObjectiveActor = ObjectiveActor;
	params.ShowDistance = ShowDistance;
	params.HasDesignation = HasDesignation;
	params.IsMarker = IsMarker;
	params.ForceInitialization = ForceInitialization;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.KingOfTheHillPhaseUpdated
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKingOfTheHillPhaseInfo PhaseInfo                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UW_ObjectiveIcon_C::KingOfTheHillPhaseUpdated(const struct FKingOfTheHillPhaseInfo& PhaseInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.KingOfTheHillPhaseUpdated"));

	struct
	{
		struct FKingOfTheHillPhaseInfo PhaseInfo;
	} params = {};

	params.PhaseInfo = PhaseInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.UpdateKingOfTheHillTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::UpdateKingOfTheHillTimer(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.UpdateKingOfTheHillTimer"));

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


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnCapturePointEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ACapturePoint*           CapturePoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OwningTeam                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            CaptureTeam                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::OnCapturePointEvent(class ACapturePoint* CapturePoint, int OwningTeam, int CaptureTeam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnCapturePointEvent"));

	struct
	{
		class ACapturePoint*           CapturePoint;
		int                            OwningTeam;
		int                            CaptureTeam;
	} params = {};

	params.CapturePoint = CapturePoint;
	params.OwningTeam = OwningTeam;
	params.CaptureTeam = CaptureTeam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.ResetCooldown
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ObjectiveIcon_C::ResetCooldown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.ResetCooldown"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnPointCaptured
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TeamOwner                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ACapturePoint*           Point                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::OnPointCaptured(int TeamOwner, class ACapturePoint* Point)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnPointCaptured"));

	struct
	{
		int                            TeamOwner;
		class ACapturePoint*           Point;
	} params = {};

	params.TeamOwner = TeamOwner;
	params.Point = Point;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.UpdateDistance
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ObjectiveIcon_C::UpdateDistance()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.UpdateDistance"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnAssaultAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AAssaultPointDestructible* DestructiblePoint              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FBombInfo               BombInfo                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UW_ObjectiveIcon_C::OnAssaultAttack(class AAssaultPointDestructible* DestructiblePoint, const struct FBombInfo& BombInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnAssaultAttack"));

	struct
	{
		class AAssaultPointDestructible* DestructiblePoint;
		struct FBombInfo               BombInfo;
	} params = {};

	params.DestructiblePoint = DestructiblePoint;
	params.BombInfo = BombInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.BombTimerCountdown
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::BombTimerCountdown(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.BombTimerCountdown"));

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


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.BombTimerComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::BombTimerComplete(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.BombTimerComplete"));

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


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.SoftInit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ObjectiveIcon_C::SoftInit()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.SoftInit"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.hover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ObjectiveIcon_C::hover()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.hover"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.Unhover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ObjectiveIcon_C::Unhover()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.Unhover"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::CustomEvent_1(class AProjectXPlayerState* PlayerState, unsigned char Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.CustomEvent_1"));

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


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.UpdateIconSizeandLoction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ObjectiveIcon_C::UpdateIconSizeandLoction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.UpdateIconSizeandLoction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.On AOW Shield Generator Under Attack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AShieldGenerator*        Generator                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::On_AOW_Shield_Generator_Under_Attack(class AShieldGenerator* Generator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.On AOW Shield Generator Under Attack"));

	struct
	{
		class AShieldGenerator*        Generator;
	} params = {};

	params.Generator = Generator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.War Stop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::War_Stop(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.War Stop"));

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


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.WarningUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::WarningUpdate(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.WarningUpdate"));

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


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.On AOW Command Center Under Attack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ACommandCenter*          CommandCenter                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::On_AOW_Command_Center_Under_Attack(class ACommandCenter* CommandCenter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.On AOW Command Center Under Attack"));

	struct
	{
		class ACommandCenter*          CommandCenter;
	} params = {};

	params.CommandCenter = CommandCenter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.HideVIPIcon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ObjectiveIcon_C::HideVIPIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.HideVIPIcon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.On AOW Command Center defenses Depleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ACommandCenter*          CommandCenter                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::On_AOW_Command_Center_defenses_Depleted(class ACommandCenter* CommandCenter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.On AOW Command Center defenses Depleted"));

	struct
	{
		class ACommandCenter*          CommandCenter;
	} params = {};

	params.CommandCenter = CommandCenter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.CheckAndInitAOWObjective
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ObjectiveIcon_C::CheckAndInitAOWObjective()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.CheckAndInitAOWObjective"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.ExecuteUbergraph_W_ObjectiveIcon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ObjectiveIcon_C::ExecuteUbergraph_W_ObjectiveIcon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.ExecuteUbergraph_W_ObjectiveIcon"));

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


// Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnCaptureProgress__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ObjectiveIcon_C::OnCaptureProgress__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ObjectiveIcon.W_ObjectiveIcon_C.OnCaptureProgress__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
