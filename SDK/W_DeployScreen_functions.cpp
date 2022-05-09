// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_DeployScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_DeployScreen.W_DeployScreen_C.GetExponentialHeightFogColour
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            Colour                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreen_C::GetExponentialHeightFogColour(struct FLinearColor* Colour)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.GetExponentialHeightFogColour"));

	struct
	{
		struct FLinearColor            Colour;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Colour != nullptr)
		*Colour = params.Colour;
}


// Function W_DeployScreen.W_DeployScreen_C.GetPostProcessVolume
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  PostProcessVolume              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreen_C::GetPostProcessVolume(class AActor** PostProcessVolume)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.GetPostProcessVolume"));

	struct
	{
		class AActor*                  PostProcessVolume;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (PostProcessVolume != nullptr)
		*PostProcessVolume = params.PostProcessVolume;
}


// Function W_DeployScreen.W_DeployScreen_C.GetTimeUntilDeploy
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UW_DeployScreen_C::GetTimeUntilDeploy()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.GetTimeUntilDeploy"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function W_DeployScreen.W_DeployScreen_C.OnPlayerStateAcquired_2451AB64476DB382627363BD54C2655F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreen_C::OnPlayerStateAcquired_2451AB64476DB382627363BD54C2655F(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.OnPlayerStateAcquired_2451AB64476DB382627363BD54C2655F"));

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


// Function W_DeployScreen.W_DeployScreen_C.OnGameStateAcquired_20180BE645C49F739234B382EDF42F0A
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameState*              GameState                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreen_C::OnGameStateAcquired_20180BE645C49F739234B382EDF42F0A(class AGameState* GameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.OnGameStateAcquired_20180BE645C49F739234B382EDF42F0A"));

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


// Function W_DeployScreen.W_DeployScreen_C.OnPlayerStateAcquired_1B62BAD9474F62E2689025B51F8BF1CC
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreen_C::OnPlayerStateAcquired_1B62BAD9474F62E2689025B51F8BF1CC(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.OnPlayerStateAcquired_1B62BAD9474F62E2689025B51F8BF1CC"));

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


// Function W_DeployScreen.W_DeployScreen_C.Finished_FF38CCE8420F229120F271A7EB2D80CE
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DeployScreen_C::Finished_FF38CCE8420F229120F271A7EB2D80CE()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.Finished_FF38CCE8420F229120F271A7EB2D80CE"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.OnPlayerStateAcquired_13FD48354C59C431D180A2BC3EAF3985
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreen_C::OnPlayerStateAcquired_13FD48354C59C431D180A2BC3EAF3985(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.OnPlayerStateAcquired_13FD48354C59C431D180A2BC3EAF3985"));

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


// Function W_DeployScreen.W_DeployScreen_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.Tick"));

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


// Function W_DeployScreen.W_DeployScreen_C.OnWidgetVisible
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 ContextObject                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreen_C::OnWidgetVisible(class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.OnWidgetVisible"));

	struct
	{
		class UObject*                 ContextObject;
	} params = {};

	params.ContextObject = ContextObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.OnWorldReady
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UW_DeployScreen_C::OnWorldReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.OnWorldReady"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.OnConfirmYes
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DeployScreen_C::OnConfirmYes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.OnConfirmYes"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.OnConfirmNo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DeployScreen_C::OnConfirmNo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.OnConfirmNo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.StartDisplayTeamSwitchTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreen_C::StartDisplayTeamSwitchTimer(float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.StartDisplayTeamSwitchTimer"));

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


// Function W_DeployScreen.W_DeployScreen_C.Value
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreen_C::Value(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.Value"));

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


// Function W_DeployScreen.W_DeployScreen_C.TimerFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreen_C::TimerFinished(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.TimerFinished"));

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


// Function W_DeployScreen.W_DeployScreen_C.OnPlayersTeamChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreen_C::OnPlayersTeamChanged(class AProjectXPlayerState* PlayerState, unsigned char Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.OnPlayersTeamChanged"));

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


// Function W_DeployScreen.W_DeployScreen_C.CollapseWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_DeployScreen_C::CollapseWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.CollapseWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_DeployScreen_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.ActivatePostProcess
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DeployScreen_C::ActivatePostProcess()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.ActivatePostProcess"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.DeactivatePostProcess
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DeployScreen_C::DeactivatePostProcess()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.DeactivatePostProcess"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.BndEvt__btn_Deploy_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreen_C::BndEvt__btn_Deploy_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.BndEvt__btn_Deploy_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature"));

	struct
	{
		struct FString                 ID;
		struct FString                 Name;
		ECosmeticType                  Type;
		class UClass* /*UUserWidget*/  Widget;
	} params = {};

	params.ID = ID;
	params.Name = Name;
	params.Type = Type;
	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.BndEvt__W_Deploy_Classes_K2Node_ComponentBoundEvent_3_NewClassSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreen_C::BndEvt__W_Deploy_Classes_K2Node_ComponentBoundEvent_3_NewClassSelected__DelegateSignature(class UClass* /*AProjectXCharacter*/ Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.BndEvt__W_Deploy_Classes_K2Node_ComponentBoundEvent_3_NewClassSelected__DelegateSignature"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ Class;
	} params = {};

	params.Class = Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.BndEvt__btn_ChangeTeam_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreen_C::BndEvt__btn_ChangeTeam_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.BndEvt__btn_ChangeTeam_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature"));

	struct
	{
		struct FString                 ID;
		struct FString                 Name;
		ECosmeticType                  Type;
		class UClass* /*UUserWidget*/  Widget;
	} params = {};

	params.ID = ID;
	params.Name = Name;
	params.Type = Type;
	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.BndEvt__DeployButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreen_C::BndEvt__DeployButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(const struct FString& ID, const struct FString& Name, ECosmeticType Type, class UClass* /*UUserWidget*/ Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.BndEvt__DeployButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature"));

	struct
	{
		struct FString                 ID;
		struct FString                 Name;
		ECosmeticType                  Type;
		class UClass* /*UUserWidget*/  Widget;
	} params = {};

	params.ID = ID;
	params.Name = Name;
	params.Type = Type;
	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.BndEvt__SpawnInVehicle_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_DeployScreen_C::BndEvt__SpawnInVehicle_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.BndEvt__SpawnInVehicle_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature"));

	struct
	{
		bool                           bIsChecked;
	} params = {};

	params.bIsChecked = bIsChecked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.Redeploy
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DeployScreen_C::Redeploy()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.Redeploy"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.ServerRequestedRedeploy
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DeployScreen_C::ServerRequestedRedeploy()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.ServerRequestedRedeploy"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.OnTeamChangeResponseReceived
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETeamJoinResponse              ChangeResponse                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreen_C::OnTeamChangeResponseReceived(ETeamJoinResponse ChangeResponse)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.OnTeamChangeResponseReceived"));

	struct
	{
		ETeamJoinResponse              ChangeResponse;
	} params = {};

	params.ChangeResponse = ChangeResponse;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.DialogClosed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DeployScreen_C::DialogClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.DialogClosed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.OnWelcomeMessageChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 WelcomeMessage                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UW_DeployScreen_C::OnWelcomeMessageChanged(const struct FString& WelcomeMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.OnWelcomeMessageChanged"));

	struct
	{
		struct FString                 WelcomeMessage;
	} params = {};

	params.WelcomeMessage = WelcomeMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.CacheSpawnTargetLocation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DeployScreen_C::CacheSpawnTargetLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.CacheSpawnTargetLocation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.K2_OnPlayerDeployed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_DeployScreen_C::K2_OnPlayerDeployed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.K2_OnPlayerDeployed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.SetButtonToDeploying
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DeployScreen_C::SetButtonToDeploying()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.SetButtonToDeploying"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.StyleWarning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           bShowIcon                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_DeployScreen_C::StyleWarning(const struct FText& Text, bool bShowIcon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.StyleWarning"));

	struct
	{
		struct FText                   Text;
		bool                           bShowIcon;
	} params = {};

	params.Text = Text;
	params.bShowIcon = bShowIcon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.OnServerRespawnFailure
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESpawnError                    SpawnError                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreen_C::OnServerRespawnFailure(ESpawnError SpawnError)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.OnServerRespawnFailure"));

	struct
	{
		ESpawnError                    SpawnError;
	} params = {};

	params.SpawnError = SpawnError;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.On Loadout Closed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DeployScreen_C::On_Loadout_Closed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.On Loadout Closed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.SetButtonToDeploy
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   DeployText                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_DeployScreen_C::SetButtonToDeploy(const struct FText& DeployText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.SetButtonToDeploy"));

	struct
	{
		struct FText                   DeployText;
	} params = {};

	params.DeployText = DeployText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.OnDeploymentRequested
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_DeployScreen_C::OnDeploymentRequested()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.OnDeploymentRequested"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.ExecuteUbergraph_W_DeployScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreen_C::ExecuteUbergraph_W_DeployScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.ExecuteUbergraph_W_DeployScreen"));

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


// Function W_DeployScreen.W_DeployScreen_C.OnFadeStart__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Time                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreen_C::OnFadeStart__DelegateSignature(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.OnFadeStart__DelegateSignature"));

	struct
	{
		float                          Time;
	} params = {};

	params.Time = Time;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_DeployScreen.W_DeployScreen_C.OnBlip__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Time                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_DeployScreen_C::OnBlip__DelegateSignature(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_DeployScreen.W_DeployScreen_C.OnBlip__DelegateSignature"));

	struct
	{
		float                          Time;
	} params = {};

	params.Time = Time;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
