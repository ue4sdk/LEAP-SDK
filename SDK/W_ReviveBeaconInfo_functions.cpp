// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_ReviveBeaconInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_ReviveBeaconInfo.W_ReviveBeaconInfo_C.OnPlayerStateAcquired_8B8DD87A4F3F7882ECA68F9818527B63
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ReviveBeaconInfo_C::OnPlayerStateAcquired_8B8DD87A4F3F7882ECA68F9818527B63(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ReviveBeaconInfo.W_ReviveBeaconInfo_C.OnPlayerStateAcquired_8B8DD87A4F3F7882ECA68F9818527B63"));

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


// Function W_ReviveBeaconInfo.W_ReviveBeaconInfo_C.UpdateVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ReviveBeaconInfo_C::UpdateVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ReviveBeaconInfo.W_ReviveBeaconInfo_C.UpdateVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ReviveBeaconInfo.W_ReviveBeaconInfo_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ReviveBeaconInfo_C::Init(class AActor* Owner)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ReviveBeaconInfo.W_ReviveBeaconInfo_C.Init"));

	struct
	{
		class AActor*                  Owner;
	} params = {};

	params.Owner = Owner;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ReviveBeaconInfo.W_ReviveBeaconInfo_C.OnTeamChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AProjectXPlayerState*    PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ReviveBeaconInfo_C::OnTeamChanged(class AProjectXPlayerState* PlayerState, unsigned char Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ReviveBeaconInfo.W_ReviveBeaconInfo_C.OnTeamChanged"));

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


// Function W_ReviveBeaconInfo.W_ReviveBeaconInfo_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ReviveBeaconInfo_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ReviveBeaconInfo.W_ReviveBeaconInfo_C.Tick"));

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


// Function W_ReviveBeaconInfo.W_ReviveBeaconInfo_C.OnMenuToggled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAdvancedUserWidget*     Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ReviveBeaconInfo_C::OnMenuToggled(class UAdvancedUserWidget* Widget, bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ReviveBeaconInfo.W_ReviveBeaconInfo_C.OnMenuToggled"));

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


// Function W_ReviveBeaconInfo.W_ReviveBeaconInfo_C.PoolConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_ReviveBeaconInfo_C::PoolConstruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ReviveBeaconInfo.W_ReviveBeaconInfo_C.PoolConstruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ReviveBeaconInfo.W_ReviveBeaconInfo_C.PoolDestruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_ReviveBeaconInfo_C::PoolDestruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ReviveBeaconInfo.W_ReviveBeaconInfo_C.PoolDestruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ReviveBeaconInfo.W_ReviveBeaconInfo_C.TogglePlayerCanRedeployState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ReviveBeaconInfo_C::TogglePlayerCanRedeployState(bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ReviveBeaconInfo.W_ReviveBeaconInfo_C.TogglePlayerCanRedeployState"));

	struct
	{
		bool                           bToggle;
	} params = {};

	params.bToggle = bToggle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ReviveBeaconInfo.W_ReviveBeaconInfo_C.ToggleProgressVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_ReviveBeaconInfo_C::ToggleProgressVisibility(bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ReviveBeaconInfo.W_ReviveBeaconInfo_C.ToggleProgressVisibility"));

	struct
	{
		bool                           bToggle;
	} params = {};

	params.bToggle = bToggle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_ReviveBeaconInfo.W_ReviveBeaconInfo_C.ExecuteUbergraph_W_ReviveBeaconInfo
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_ReviveBeaconInfo_C::ExecuteUbergraph_W_ReviveBeaconInfo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_ReviveBeaconInfo.W_ReviveBeaconInfo_C.ExecuteUbergraph_W_ReviveBeaconInfo"));

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
