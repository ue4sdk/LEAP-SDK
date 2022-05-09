// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_SpawnPoint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_SpawnPoint.W_SpawnPoint_C.SpawnChild
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OwningActor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UUserWidget*             Created_Widget                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SpawnPoint_C::SpawnChild(class UClass* /*UUserWidget*/ Widget, class AActor* OwningActor, class UUserWidget** Created_Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SpawnPoint.W_SpawnPoint_C.SpawnChild"));

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


// Function W_SpawnPoint.W_SpawnPoint_C.OnPlayerStateAcquired_F13AA1A14ADEA212D9F1499F6C0CED9B
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SpawnPoint_C::OnPlayerStateAcquired_F13AA1A14ADEA212D9F1499F6C0CED9B(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SpawnPoint.W_SpawnPoint_C.OnPlayerStateAcquired_F13AA1A14ADEA212D9F1499F6C0CED9B"));

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


// Function W_SpawnPoint.W_SpawnPoint_C.OnPlayerStateAcquired_D81955614C118E4C27E164962208BAF2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SpawnPoint_C::OnPlayerStateAcquired_D81955614C118E4C27E164962208BAF2(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SpawnPoint.W_SpawnPoint_C.OnPlayerStateAcquired_D81955614C118E4C27E164962208BAF2"));

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


// Function W_SpawnPoint.W_SpawnPoint_C.SetSelectable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSelectable                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_SpawnPoint_C::SetSelectable(bool bSelectable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SpawnPoint.W_SpawnPoint_C.SetSelectable"));

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


// Function W_SpawnPoint.W_SpawnPoint_C.SetSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewSelected                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_SpawnPoint_C::SetSelected(bool bNewSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SpawnPoint.W_SpawnPoint_C.SetSelected"));

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


// Function W_SpawnPoint.W_SpawnPoint_C.OnSpawnPointChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class USpawnTargetInterface> SpawnTarget                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_SpawnPoint_C::OnSpawnPointChanged(const TScriptInterface<class USpawnTargetInterface>& SpawnTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SpawnPoint.W_SpawnPoint_C.OnSpawnPointChanged"));

	struct
	{
		TScriptInterface<class USpawnTargetInterface> SpawnTarget;
	} params = {};

	params.SpawnTarget = SpawnTarget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SpawnPoint.W_SpawnPoint_C.SetSelectionToTeamColour
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SpawnPoint_C::SetSelectionToTeamColour()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SpawnPoint.W_SpawnPoint_C.SetSelectionToTeamColour"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SpawnPoint.W_SpawnPoint_C.UpdateTeamAndSquadStatus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SpawnPoint_C::UpdateTeamAndSquadStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SpawnPoint.W_SpawnPoint_C.UpdateTeamAndSquadStatus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SpawnPoint.W_SpawnPoint_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SpawnPoint_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SpawnPoint.W_SpawnPoint_C.Tick"));

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


// Function W_SpawnPoint.W_SpawnPoint_C.MenuToggled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAdvancedUserWidget*     Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_SpawnPoint_C::MenuToggled(class UAdvancedUserWidget* Widget, bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SpawnPoint.W_SpawnPoint_C.MenuToggled"));

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


// Function W_SpawnPoint.W_SpawnPoint_C.BndEvt__btn_Spawn_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_SpawnPoint_C::BndEvt__btn_Spawn_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SpawnPoint.W_SpawnPoint_C.BndEvt__btn_Spawn_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SpawnPoint.W_SpawnPoint_C.BndEvt__btn_Spawn_K2Node_ComponentBoundEvent_1_ButtonDoubleClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_SpawnPoint_C::BndEvt__btn_Spawn_K2Node_ComponentBoundEvent_1_ButtonDoubleClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SpawnPoint.W_SpawnPoint_C.BndEvt__btn_Spawn_K2Node_ComponentBoundEvent_1_ButtonDoubleClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SpawnPoint.W_SpawnPoint_C.BndEvt__btn_Spawn_K2Node_ComponentBoundEvent_2_ButtonHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_SpawnPoint_C::BndEvt__btn_Spawn_K2Node_ComponentBoundEvent_2_ButtonHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SpawnPoint.W_SpawnPoint_C.BndEvt__btn_Spawn_K2Node_ComponentBoundEvent_2_ButtonHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SpawnPoint.W_SpawnPoint_C.BndEvt__btn_Spawn_K2Node_ComponentBoundEvent_5_ButtonUnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UW_SpawnPoint_C::BndEvt__btn_Spawn_K2Node_ComponentBoundEvent_5_ButtonUnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SpawnPoint.W_SpawnPoint_C.BndEvt__btn_Spawn_K2Node_ComponentBoundEvent_5_ButtonUnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SpawnPoint.W_SpawnPoint_C.OnMenuToggled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAdvancedUserWidget*     Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_SpawnPoint_C::OnMenuToggled(class UAdvancedUserWidget* Widget, bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SpawnPoint.W_SpawnPoint_C.OnMenuToggled"));

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


// Function W_SpawnPoint.W_SpawnPoint_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_SpawnPoint_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SpawnPoint.W_SpawnPoint_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SpawnPoint.W_SpawnPoint_C.Update Enemy Status
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SpawnPoint_C::Update_Enemy_Status()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SpawnPoint.W_SpawnPoint_C.Update Enemy Status"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SpawnPoint.W_SpawnPoint_C.PoolConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_SpawnPoint_C::PoolConstruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SpawnPoint.W_SpawnPoint_C.PoolConstruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SpawnPoint.W_SpawnPoint_C.PoolDestruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_SpawnPoint_C::PoolDestruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SpawnPoint.W_SpawnPoint_C.PoolDestruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SpawnPoint.W_SpawnPoint_C.ExecuteUbergraph_W_SpawnPoint
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_SpawnPoint_C::ExecuteUbergraph_W_SpawnPoint(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SpawnPoint.W_SpawnPoint_C.ExecuteUbergraph_W_SpawnPoint"));

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


// Function W_SpawnPoint.W_SpawnPoint_C.OnSpawnable__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSpawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_SpawnPoint_C::OnSpawnable__DelegateSignature(bool IsSpawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SpawnPoint.W_SpawnPoint_C.OnSpawnable__DelegateSignature"));

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


// Function W_SpawnPoint.W_SpawnPoint_C.OnSpawnUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SpawnPoint_C::OnSpawnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SpawnPoint.W_SpawnPoint_C.OnSpawnUnhovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SpawnPoint.W_SpawnPoint_C.OnSpawnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_SpawnPoint_C::OnSpawnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SpawnPoint.W_SpawnPoint_C.OnSpawnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_SpawnPoint.W_SpawnPoint_C.OnSpawnSelectable__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Selectable                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_SpawnPoint_C::OnSpawnSelectable__DelegateSignature(bool Selectable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SpawnPoint.W_SpawnPoint_C.OnSpawnSelectable__DelegateSignature"));

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


// Function W_SpawnPoint.W_SpawnPoint_C.OnSpawnSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Selected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_SpawnPoint_C::OnSpawnSelected__DelegateSignature(bool Selected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_SpawnPoint.W_SpawnPoint_C.OnSpawnSelected__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
