// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_DeployScreenMarker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_DeployScreenMarker.W_DeployScreenMarker_C.IsInVehicle
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bInVehicle                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_DeployScreenMarker_C::IsInVehicle(bool* bInVehicle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.IsInVehicle"));

	struct
	{
		bool                           bInVehicle;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bInVehicle != nullptr)
		*bInVehicle = params.bInVehicle;
}


// Function W_DeployScreenMarker.W_DeployScreenMarker_C.SpawnSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSelected                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_DeployScreenMarker_C::SpawnSelected(bool bSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.SpawnSelected"));

	struct
	{
		bool                           bSelected;
	} params = {};

	params.bSelected = bSelected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreenMarker.W_DeployScreenMarker_C.SpawnChild
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OwningActor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UUserWidget*             Created_Widget                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreenMarker_C::SpawnChild(class UClass* /*UUserWidget*/ Widget, class AActor* OwningActor, class UUserWidget** Created_Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.SpawnChild"));

	struct
	{
		class UClass* /*UUserWidget*/  Widget;
		class AActor*                  OwningActor;
		class UUserWidget*             Created_Widget;
	} params = {};

	params.Widget = Widget;
	params.OwningActor = OwningActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Created_Widget != nullptr)
		*Created_Widget = params.Created_Widget;
}


// Function W_DeployScreenMarker.W_DeployScreenMarker_C.IsSquadMate
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bInSquad                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_DeployScreenMarker_C::IsSquadMate(bool* bInSquad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.IsSquadMate"));

	struct
	{
		bool                           bInSquad;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bInSquad != nullptr)
		*bInSquad = params.bInSquad;
}


// Function W_DeployScreenMarker.W_DeployScreenMarker_C.OnLoaded_B4F8C9324281CC9F18E5BB9E12AEC1FC
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreenMarker_C::OnLoaded_B4F8C9324281CC9F18E5BB9E12AEC1FC(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.OnLoaded_B4F8C9324281CC9F18E5BB9E12AEC1FC"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreenMarker.W_DeployScreenMarker_C.BndEvt__W_ButtonBase_K2Node_ComponentBoundEvent_0_ButtonHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_DeployScreenMarker_C::BndEvt__W_ButtonBase_K2Node_ComponentBoundEvent_0_ButtonHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.BndEvt__W_ButtonBase_K2Node_ComponentBoundEvent_0_ButtonHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreenMarker.W_DeployScreenMarker_C.BndEvt__W_ButtonBase_K2Node_ComponentBoundEvent_1_ButtonUnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_DeployScreenMarker_C::BndEvt__W_ButtonBase_K2Node_ComponentBoundEvent_1_ButtonUnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.BndEvt__W_ButtonBase_K2Node_ComponentBoundEvent_1_ButtonUnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreenMarker.W_DeployScreenMarker_C.BndEvt__W_ButtonBase_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_DeployScreenMarker_C::BndEvt__W_ButtonBase_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.BndEvt__W_ButtonBase_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreenMarker.W_DeployScreenMarker_C.BndEvt__W_ButtonBase_K2Node_ComponentBoundEvent_3_ButtonDoubleClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_DeployScreenMarker_C::BndEvt__W_ButtonBase_K2Node_ComponentBoundEvent_3_ButtonDoubleClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.BndEvt__W_ButtonBase_K2Node_ComponentBoundEvent_3_ButtonDoubleClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreenMarker.W_DeployScreenMarker_C.SetSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewSelected                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_DeployScreenMarker_C::SetSelected(bool bNewSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.SetSelected"));

	struct
	{
		bool                           bNewSelected;
	} params = {};

	params.bNewSelected = bNewSelected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreenMarker.W_DeployScreenMarker_C.SetSelectable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSelectable                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_DeployScreenMarker_C::SetSelectable(bool bSelectable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.SetSelectable"));

	struct
	{
		bool                           bSelectable;
	} params = {};

	params.bSelectable = bSelectable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreenMarker.W_DeployScreenMarker_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreenMarker_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.Tick"));

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


// Function W_DeployScreenMarker.W_DeployScreenMarker_C.RefreshInfo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DeployScreenMarker_C::RefreshInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.RefreshInfo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreenMarker.W_DeployScreenMarker_C.Death
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Damage                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDamageEvent            DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class AController*             EventInstigator                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerState*            InstigatorPlayerState          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreenMarker_C::Death(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.Death"));

	struct
	{
		class AActor*                  Victim;
		float                          Damage;
		struct FDamageEvent            DamageEvent;
		class AController*             EventInstigator;
		class AActor*                  DamageCauser;
		class APlayerState*            InstigatorPlayerState;
	} params = {};

	params.Victim = Victim;
	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.InstigatorPlayerState = InstigatorPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreenMarker.W_DeployScreenMarker_C.ChangeTeams
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreenMarker_C::ChangeTeams(class AProjectXPlayerState* PlayerState, unsigned char Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.ChangeTeams"));

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


// Function W_DeployScreenMarker.W_DeployScreenMarker_C.ChangeSquads
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SquadID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreenMarker_C::ChangeSquads(int SquadID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.ChangeSquads"));

	struct
	{
		int                            SquadID;
	} params = {};

	params.SquadID = SquadID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreenMarker.W_DeployScreenMarker_C.SetSelectionToTeamColour
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DeployScreenMarker_C::SetSelectionToTeamColour()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.SetSelectionToTeamColour"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreenMarker.W_DeployScreenMarker_C.OnMenuToggled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAdvancedUserWidget*     Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_DeployScreenMarker_C::OnMenuToggled(class UAdvancedUserWidget* Widget, bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.OnMenuToggled"));

	struct
	{
		class UAdvancedUserWidget*     Widget;
		bool                           bToggle;
	} params = {};

	params.Widget = Widget;
	params.bToggle = bToggle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreenMarker.W_DeployScreenMarker_C.MenuToggled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAdvancedUserWidget*     Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_DeployScreenMarker_C::MenuToggled(class UAdvancedUserWidget* Widget, bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.MenuToggled"));

	struct
	{
		class UAdvancedUserWidget*     Widget;
		bool                           bToggle;
	} params = {};

	params.Widget = Widget;
	params.bToggle = bToggle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreenMarker.W_DeployScreenMarker_C.UpdateTeamAndSquadStatus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DeployScreenMarker_C::UpdateTeamAndSquadStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.UpdateTeamAndSquadStatus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreenMarker.W_DeployScreenMarker_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwningActor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreenMarker_C::Init(class AActor* OwningActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.Init"));

	struct
	{
		class AActor*                  OwningActor;
	} params = {};

	params.OwningActor = OwningActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreenMarker.W_DeployScreenMarker_C.PoolDestruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_DeployScreenMarker_C::PoolDestruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.PoolDestruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreenMarker.W_DeployScreenMarker_C.Update Enemy Status
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DeployScreenMarker_C::Update_Enemy_Status()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.Update Enemy Status"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreenMarker.W_DeployScreenMarker_C.SpottedStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DeployScreenMarker_C::SpottedStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.SpottedStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreenMarker.W_DeployScreenMarker_C.SpottedEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DeployScreenMarker_C::SpottedEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.SpottedEnd"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreenMarker.W_DeployScreenMarker_C.RefreshSpottedState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DeployScreenMarker_C::RefreshSpottedState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.RefreshSpottedState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreenMarker.W_DeployScreenMarker_C.UpdateContextImageAndColor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DeployScreenMarker_C::UpdateContextImageAndColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.UpdateContextImageAndColor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreenMarker.W_DeployScreenMarker_C.ExecuteUbergraph_W_DeployScreenMarker
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreenMarker_C::ExecuteUbergraph_W_DeployScreenMarker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreenMarker.W_DeployScreenMarker_C.ExecuteUbergraph_W_DeployScreenMarker"));

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
