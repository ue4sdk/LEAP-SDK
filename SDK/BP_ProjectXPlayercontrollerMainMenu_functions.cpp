// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ProjectXPlayercontrollerMainMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.GetNakamaIDFromSteamID
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 Key                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// struct FString                 Value                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::GetNakamaIDFromSteamID(const struct FString& Key, struct FString* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.GetNakamaIDFromSteamID"));

	struct
	{
		struct FString                 Key;
		struct FString                 Value;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.UpdatePartyMemberCosmetics
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_DisplayCharacter_C*  DisplayCharacter               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 PlayerID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::UpdatePartyMemberCosmetics(class ABP_DisplayCharacter_C* DisplayCharacter, const struct FString& PlayerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.UpdatePartyMemberCosmetics"));

	struct
	{
		class ABP_DisplayCharacter_C*  DisplayCharacter;
		struct FString                 PlayerID;
	} params = {};

	params.DisplayCharacter = DisplayCharacter;
	params.PlayerID = PlayerID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.IsLocalPlayerID
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 PlayerID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           LocalPlayerID                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXPlayercontrollerMainMenu_C::IsLocalPlayerID(const struct FString& PlayerID, bool* LocalPlayerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.IsLocalPlayerID"));

	struct
	{
		struct FString                 PlayerID;
		bool                           LocalPlayerID;
	} params = {};

	params.PlayerID = PlayerID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (LocalPlayerID != nullptr)
		*LocalPlayerID = params.LocalPlayerID;
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.ApplyFocalLength
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ACineCameraActor*        Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// class UClass* /*UObject*/      Class                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::ApplyFocalLength(class ACineCameraActor* Target, class UClass* /*UObject*/ Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.ApplyFocalLength"));

	struct
	{
		class ACineCameraActor*        Target;
		class UClass* /*UObject*/      Class;
	} params = {};

	params.Target = Target;
	params.Class = Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.SetCanRotateDisplayModels
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInCanRotate                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXPlayercontrollerMainMenu_C::SetCanRotateDisplayModels(bool bInCanRotate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.SetCanRotateDisplayModels"));

	struct
	{
		bool                           bInCanRotate;
	} params = {};

	params.bInCanRotate = bInCanRotate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.GetDisplayCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class ABP_DisplayCharacter_C*  DisplayCharacter               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::GetDisplayCharacter(class ABP_DisplayCharacter_C** DisplayCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.GetDisplayCharacter"));

	struct
	{
		class ABP_DisplayCharacter_C*  DisplayCharacter;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (DisplayCharacter != nullptr)
		*DisplayCharacter = params.DisplayCharacter;
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.GetEquippedWeaponCosmetic
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UClass* /*UWeaponInstance*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UCosmeticAssetBase*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UCosmeticAssetBase* ABP_ProjectXPlayercontrollerMainMenu_C::GetEquippedWeaponCosmetic(class UClass* /*UWeaponInstance*/ Class, ECosmeticType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.GetEquippedWeaponCosmetic"));

	struct
	{
		class UClass* /*UWeaponInstance*/ Class;
		ECosmeticType                  Type;
		class UCosmeticAssetBase*      ReturnValue;
	} params = {};

	params.Class = Class;
	params.Type = Type;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.GetPartyBeaconState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASteamBeaconState*       Output_Get                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::GetPartyBeaconState(class ASteamBeaconState** Output_Get)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.GetPartyBeaconState"));

	struct
	{
		class ASteamBeaconState*       Output_Get;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.GetAssignedPartyMemberCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 NakamaID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class ABP_DisplayCharacter_C*  DisplayCharacter               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::GetAssignedPartyMemberCharacter(const struct FString& NakamaID, class ABP_DisplayCharacter_C** DisplayCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.GetAssignedPartyMemberCharacter"));

	struct
	{
		struct FString                 NakamaID;
		class ABP_DisplayCharacter_C*  DisplayCharacter;
	} params = {};

	params.NakamaID = NakamaID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (DisplayCharacter != nullptr)
		*DisplayCharacter = params.DisplayCharacter;
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.RemoveInvalidDisplayCharacters
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class ASteamBeaconPlayerState*> Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ABP_ProjectXPlayercontrollerMainMenu_C::RemoveInvalidDisplayCharacters(TArray<class ASteamBeaconPlayerState*>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.RemoveInvalidDisplayCharacters"));

	struct
	{
		TArray<class ASteamBeaconPlayerState*> Array;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.GetUnassignedPartyMemberCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ABP_DisplayCharacter_C*  DisplayCharacter               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::GetUnassignedPartyMemberCharacter(class ABP_DisplayCharacter_C** DisplayCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.GetUnassignedPartyMemberCharacter"));

	struct
	{
		class ABP_DisplayCharacter_C*  DisplayCharacter;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (DisplayCharacter != nullptr)
		*DisplayCharacter = params.DisplayCharacter;
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.ToggleDisplay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           HideCharacter                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Hide_Decal                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXPlayercontrollerMainMenu_C::ToggleDisplay(bool HideCharacter, bool Hide_Decal)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.ToggleDisplay"));

	struct
	{
		bool                           HideCharacter;
		bool                           Hide_Decal;
	} params = {};

	params.HideCharacter = HideCharacter;
	params.Hide_Decal = Hide_Decal;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.InpActEvt_Enter_K2Node_InputKeyEvent_3
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::InpActEvt_Enter_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.InpActEvt_Enter_K2Node_InputKeyEvent_3"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.InpActEvt_C_K2Node_InputKeyEvent_2
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::InpActEvt_C_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.InpActEvt_C_K2Node_InputKeyEvent_2"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.InpActEvt_C_K2Node_InputKeyEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::InpActEvt_C_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.InpActEvt_C_K2Node_InputKeyEvent_1"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.OnCharacterClassSelected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// bool                           bChangeCamera                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXPlayercontrollerMainMenu_C::OnCharacterClassSelected(class UClass* /*AProjectXCharacter*/ CharacterClass, bool bChangeCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.OnCharacterClassSelected"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ CharacterClass;
		bool                           bChangeCamera;
	} params = {};

	params.CharacterClass = CharacterClass;
	params.bChangeCamera = bChangeCamera;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.InitDisplayCharacter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_DisplayCharacter_C*  DisplayCharacter               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerState*            NewOwnedPlayerState            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::InitDisplayCharacter(class ABP_DisplayCharacter_C* DisplayCharacter, class APlayerState* NewOwnedPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.InitDisplayCharacter"));

	struct
	{
		class ABP_DisplayCharacter_C*  DisplayCharacter;
		class APlayerState*            NewOwnedPlayerState;
	} params = {};

	params.DisplayCharacter = DisplayCharacter;
	params.NewOwnedPlayerState = NewOwnedPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.InitDecalDisplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_DecalDisplay_C*      Decal                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::InitDecalDisplay(class ABP_DecalDisplay_C* Decal)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.InitDecalDisplay"));

	struct
	{
		class ABP_DecalDisplay_C*      Decal;
	} params = {};

	params.Decal = Decal;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_ProjectXPlayercontrollerMainMenu_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.OnCosmeticTypeSelected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bChangeCamera                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXPlayercontrollerMainMenu_C::OnCosmeticTypeSelected(ECosmeticType Type, bool bChangeCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.OnCosmeticTypeSelected"));

	struct
	{
		ECosmeticType                  Type;
		bool                           bChangeCamera;
	} params = {};

	params.Type = Type;
	params.bChangeCamera = bChangeCamera;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.OnCosmeticSelected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// ECosmeticType                  CosmeticType                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// class UCosmeticAssetBase*      CosmeticAsset                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bChangeCamera                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXPlayercontrollerMainMenu_C::OnCosmeticSelected(ECosmeticType CosmeticType, class UClass* /*UWeaponInstance*/ WeaponClass, class UCosmeticAssetBase* CosmeticAsset, bool bChangeCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.OnCosmeticSelected"));

	struct
	{
		ECosmeticType                  CosmeticType;
		class UClass* /*UWeaponInstance*/ WeaponClass;
		class UCosmeticAssetBase*      CosmeticAsset;
		bool                           bChangeCamera;
	} params = {};

	params.CosmeticType = CosmeticType;
	params.WeaponClass = WeaponClass;
	params.CosmeticAsset = CosmeticAsset;
	params.bChangeCamera = bChangeCamera;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.InitDisplayWeapon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_WeaponDisplay_C*     Display_Weapon                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::InitDisplayWeapon(class ABP_WeaponDisplay_C* Display_Weapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.InitDisplayWeapon"));

	struct
	{
		class ABP_WeaponDisplay_C*     Display_Weapon;
	} params = {};

	params.Display_Weapon = Display_Weapon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.OnWeaponSelected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::OnWeaponSelected(class UClass* /*UWeaponInstance*/ WeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.OnWeaponSelected"));

	struct
	{
		class UClass* /*UWeaponInstance*/ WeaponClass;
	} params = {};

	params.WeaponClass = WeaponClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_0_OnPlayerJoinedSteamPartyDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* InPlayerBeaconState            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::BndEvt__SteamParty_K2Node_ComponentBoundEvent_0_OnPlayerJoinedSteamPartyDelegate__DelegateSignature(class ASteamBeaconPlayerState* InPlayerBeaconState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_0_OnPlayerJoinedSteamPartyDelegate__DelegateSignature"));

	struct
	{
		class ASteamBeaconPlayerState* InPlayerBeaconState;
	} params = {};

	params.InPlayerBeaconState = InPlayerBeaconState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_1_OnPlayerUpdateSteamPartyDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* InPlayerBeaconState            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::BndEvt__SteamParty_K2Node_ComponentBoundEvent_1_OnPlayerUpdateSteamPartyDelegate__DelegateSignature(class ASteamBeaconPlayerState* InPlayerBeaconState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_1_OnPlayerUpdateSteamPartyDelegate__DelegateSignature"));

	struct
	{
		class ASteamBeaconPlayerState* InPlayerBeaconState;
	} params = {};

	params.InPlayerBeaconState = InPlayerBeaconState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_2_OnPlayerUpdateSteamPartyDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* InPlayerBeaconState            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::BndEvt__SteamParty_K2Node_ComponentBoundEvent_2_OnPlayerUpdateSteamPartyDelegate__DelegateSignature(class ASteamBeaconPlayerState* InPlayerBeaconState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_2_OnPlayerUpdateSteamPartyDelegate__DelegateSignature"));

	struct
	{
		class ASteamBeaconPlayerState* InPlayerBeaconState;
	} params = {};

	params.InPlayerBeaconState = InPlayerBeaconState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_3_EmptyDelegate__DelegateSignature
// (FUNC_BlueprintEvent)

void ABP_ProjectXPlayercontrollerMainMenu_C::BndEvt__SteamParty_K2Node_ComponentBoundEvent_3_EmptyDelegate__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_3_EmptyDelegate__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_4_OnPlayerUniqueIdSteamPartyDelegate__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        InPlayerUniqueId               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::BndEvt__SteamParty_K2Node_ComponentBoundEvent_4_OnPlayerUniqueIdSteamPartyDelegate__DelegateSignature(const struct FUniqueNetIdRepl& InPlayerUniqueId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_4_OnPlayerUniqueIdSteamPartyDelegate__DelegateSignature"));

	struct
	{
		struct FUniqueNetIdRepl        InPlayerUniqueId;
	} params = {};

	params.InPlayerUniqueId = InPlayerUniqueId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_5_OnPlayerMessageSteamPartyDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FPartyMessage           InPartyMessage                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_ProjectXPlayercontrollerMainMenu_C::BndEvt__SteamParty_K2Node_ComponentBoundEvent_5_OnPlayerMessageSteamPartyDelegate__DelegateSignature(const struct FPartyMessage& InPartyMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_5_OnPlayerMessageSteamPartyDelegate__DelegateSignature"));

	struct
	{
		struct FPartyMessage           InPartyMessage;
	} params = {};

	params.InPartyMessage = InPartyMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_7_EmptyDelegate__DelegateSignature
// (FUNC_BlueprintEvent)

void ABP_ProjectXPlayercontrollerMainMenu_C::BndEvt__SteamParty_K2Node_ComponentBoundEvent_7_EmptyDelegate__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_7_EmptyDelegate__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_8_EmptyDelegate__DelegateSignature
// (FUNC_BlueprintEvent)

void ABP_ProjectXPlayercontrollerMainMenu_C::BndEvt__SteamParty_K2Node_ComponentBoundEvent_8_EmptyDelegate__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_8_EmptyDelegate__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_10_OnPlayerInviteReceivedSteamPartyDelegate__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        InPlayerUniqueId               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// struct FString                 InFriendName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::BndEvt__SteamParty_K2Node_ComponentBoundEvent_10_OnPlayerInviteReceivedSteamPartyDelegate__DelegateSignature(const struct FUniqueNetIdRepl& InPlayerUniqueId, const struct FString& InFriendName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_10_OnPlayerInviteReceivedSteamPartyDelegate__DelegateSignature"));

	struct
	{
		struct FUniqueNetIdRepl        InPlayerUniqueId;
		struct FString                 InFriendName;
	} params = {};

	params.InPlayerUniqueId = InPlayerUniqueId;
	params.InFriendName = InFriendName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.OnPartyMemberLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 PlayerID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::OnPartyMemberLoaded(const struct FString& PlayerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.OnPartyMemberLoaded"));

	struct
	{
		struct FString                 PlayerID;
	} params = {};

	params.PlayerID = PlayerID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.InitPartyCharacter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_DisplayCharacter_C*  PartyCharacter                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::InitPartyCharacter(class ABP_DisplayCharacter_C* PartyCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.InitPartyCharacter"));

	struct
	{
		class ABP_DisplayCharacter_C*  PartyCharacter;
	} params = {};

	params.PartyCharacter = PartyCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.OnMenuChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UUserWidget*/  WidgetClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::OnMenuChanged(class UClass* /*UUserWidget*/ WidgetClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.OnMenuChanged"));

	struct
	{
		class UClass* /*UUserWidget*/  WidgetClass;
	} params = {};

	params.WidgetClass = WidgetClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.UpdateCharacterVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UUserWidget*/  ActiveWidget                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::UpdateCharacterVisibility(class UClass* /*UUserWidget*/ ActiveWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.UpdateCharacterVisibility"));

	struct
	{
		class UClass* /*UUserWidget*/  ActiveWidget;
	} params = {};

	params.ActiveWidget = ActiveWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.AssignDisplayCharacter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 PlayerID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::AssignDisplayCharacter(const struct FString& PlayerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.AssignDisplayCharacter"));

	struct
	{
		struct FString                 PlayerID;
	} params = {};

	params.PlayerID = PlayerID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.OnWidgetChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UUserWidget*/  WidgetClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::OnWidgetChanged(class UClass* /*UUserWidget*/ WidgetClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.OnWidgetChanged"));

	struct
	{
		class UClass* /*UUserWidget*/  WidgetClass;
	} params = {};

	params.WidgetClass = WidgetClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.OnAssetLoading
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Loading                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXPlayercontrollerMainMenu_C::OnAssetLoading(bool Loading)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.OnAssetLoading"));

	struct
	{
		bool                           Loading;
	} params = {};

	params.Loading = Loading;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.ToggleBackgroundType
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           BackgroundEnabled              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           BlurEnabled                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXPlayercontrollerMainMenu_C::ToggleBackgroundType(bool BackgroundEnabled, bool BlurEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.ToggleBackgroundType"));

	struct
	{
		bool                           BackgroundEnabled;
		bool                           BlurEnabled;
	} params = {};

	params.BackgroundEnabled = BackgroundEnabled;
	params.BlurEnabled = BlurEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.DisplayCharacterID
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 PlayerID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::DisplayCharacterID(const struct FString& PlayerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.DisplayCharacterID"));

	struct
	{
		struct FString                 PlayerID;
	} params = {};

	params.PlayerID = PlayerID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.AssignLocalplayerID
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ProjectXPlayercontrollerMainMenu_C::AssignLocalplayerID()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.AssignLocalplayerID"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.InitVehicleDisplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_VehicleDisplay_C*    DisplayVehicle                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::InitVehicleDisplay(class ABP_VehicleDisplay_C* DisplayVehicle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.InitVehicleDisplay"));

	struct
	{
		class ABP_VehicleDisplay_C*    DisplayVehicle;
	} params = {};

	params.DisplayVehicle = DisplayVehicle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.UpdateClass
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::UpdateClass(class UClass* /*AProjectXCharacter*/ CharacterClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.UpdateClass"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ CharacterClass;
	} params = {};

	params.CharacterClass = CharacterClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.OnPlayerInfoLoaded
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSharedPlayerInfo       PlayerInfo                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FString                 PlayerID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::OnPlayerInfoLoaded(const struct FSharedPlayerInfo& PlayerInfo, const struct FString& PlayerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.OnPlayerInfoLoaded"));

	struct
	{
		struct FSharedPlayerInfo       PlayerInfo;
		struct FString                 PlayerID;
	} params = {};

	params.PlayerInfo = PlayerInfo;
	params.PlayerID = PlayerID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.OnNakamaIDFound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 NakamaID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 SteamID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::OnNakamaIDFound(const struct FString& NakamaID, const struct FString& SteamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.OnNakamaIDFound"));

	struct
	{
		struct FString                 NakamaID;
		struct FString                 SteamID;
	} params = {};

	params.NakamaID = NakamaID;
	params.SteamID = SteamID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.ExecuteUbergraph_BP_ProjectXPlayercontrollerMainMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ProjectXPlayercontrollerMainMenu_C::ExecuteUbergraph_BP_ProjectXPlayercontrollerMainMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.ExecuteUbergraph_BP_ProjectXPlayercontrollerMainMenu"));

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


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.FadeBackground__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           BackgroundOn                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsBlurred                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXPlayercontrollerMainMenu_C::FadeBackground__DelegateSignature(bool BackgroundOn, bool IsBlurred)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.FadeBackground__DelegateSignature"));

	struct
	{
		bool                           BackgroundOn;
		bool                           IsBlurred;
	} params = {};

	params.BackgroundOn = BackgroundOn;
	params.IsBlurred = IsBlurred;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.LoadingAssets__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Loading                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ProjectXPlayercontrollerMainMenu_C::LoadingAssets__DelegateSignature(bool Loading)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C.LoadingAssets__DelegateSignature"));

	struct
	{
		bool                           Loading;
	} params = {};

	params.Loading = Loading;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
