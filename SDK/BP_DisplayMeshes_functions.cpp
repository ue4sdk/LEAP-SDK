// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_DisplayMeshes_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DisplayMeshes.BP_DisplayMeshes_C.Update Mesh Visibility
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECosmeticType                  Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DisplayMeshes_C::Update_Mesh_Visibility(ECosmeticType Selection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayMeshes.BP_DisplayMeshes_C.Update Mesh Visibility"));

	struct
	{
		ECosmeticType                  Selection;
	} params = {};

	params.Selection = Selection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DisplayMeshes.BP_DisplayMeshes_C.UpdateDisplayMeshRotation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DisplayMeshes_C::UpdateDisplayMeshRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayMeshes.BP_DisplayMeshes_C.UpdateDisplayMeshRotation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DisplayMeshes.BP_DisplayMeshes_C.GetDisplayVehicle
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ABP_VehicleDisplay_C*    DisplayVehicle                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DisplayMeshes_C::GetDisplayVehicle(class ABP_VehicleDisplay_C** DisplayVehicle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayMeshes.BP_DisplayMeshes_C.GetDisplayVehicle"));

	struct
	{
		class ABP_VehicleDisplay_C*    DisplayVehicle;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (DisplayVehicle != nullptr)
		*DisplayVehicle = params.DisplayVehicle;
}


// Function BP_DisplayMeshes.BP_DisplayMeshes_C.GetDisplayDecal
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ABP_DecalDisplay_C*      DisplayWeapon                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DisplayMeshes_C::GetDisplayDecal(class ABP_DecalDisplay_C** DisplayWeapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayMeshes.BP_DisplayMeshes_C.GetDisplayDecal"));

	struct
	{
		class ABP_DecalDisplay_C*      DisplayWeapon;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (DisplayWeapon != nullptr)
		*DisplayWeapon = params.DisplayWeapon;
}


// Function BP_DisplayMeshes.BP_DisplayMeshes_C.GetDisplayWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ABP_WeaponDisplay_C*     DisplayWeapon                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DisplayMeshes_C::GetDisplayWeapon(class ABP_WeaponDisplay_C** DisplayWeapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayMeshes.BP_DisplayMeshes_C.GetDisplayWeapon"));

	struct
	{
		class ABP_WeaponDisplay_C*     DisplayWeapon;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (DisplayWeapon != nullptr)
		*DisplayWeapon = params.DisplayWeapon;
}


// Function BP_DisplayMeshes.BP_DisplayMeshes_C.SwitchCamera
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECosmeticType                  Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           SnapToo                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_DisplayMeshes_C::SwitchCamera(ECosmeticType Selection, bool SnapToo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayMeshes.BP_DisplayMeshes_C.SwitchCamera"));

	struct
	{
		ECosmeticType                  Selection;
		bool                           SnapToo;
	} params = {};

	params.Selection = Selection;
	params.SnapToo = SnapToo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DisplayMeshes.BP_DisplayMeshes_C.GetDisplayCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ABP_DisplayCharacter_C*  DisplayCharacter               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DisplayMeshes_C::GetDisplayCharacter(class ABP_DisplayCharacter_C** DisplayCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayMeshes.BP_DisplayMeshes_C.GetDisplayCharacter"));

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


// Function BP_DisplayMeshes.BP_DisplayMeshes_C.OnPlayerStateAcquired_565000034FCF3B71BDB67D9EC0676EA7
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DisplayMeshes_C::OnPlayerStateAcquired_565000034FCF3B71BDB67D9EC0676EA7(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayMeshes.BP_DisplayMeshes_C.OnPlayerStateAcquired_565000034FCF3B71BDB67D9EC0676EA7"));

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


// Function BP_DisplayMeshes.BP_DisplayMeshes_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_DisplayMeshes_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayMeshes.BP_DisplayMeshes_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DisplayMeshes.BP_DisplayMeshes_C.OnCharacterClassUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bSwitchCamera                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_DisplayMeshes_C::OnCharacterClassUpdated(class UClass* /*AProjectXCharacter*/ CharacterClass, bool bSwitchCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayMeshes.BP_DisplayMeshes_C.OnCharacterClassUpdated"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ CharacterClass;
		bool                           bSwitchCamera;
	} params = {};

	params.CharacterClass = CharacterClass;
	params.bSwitchCamera = bSwitchCamera;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DisplayMeshes.BP_DisplayMeshes_C.OnWeaponUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DisplayMeshes_C::OnWeaponUpdated(class UClass* /*UWeaponInstance*/ WeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayMeshes.BP_DisplayMeshes_C.OnWeaponUpdated"));

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


// Function BP_DisplayMeshes.BP_DisplayMeshes_C.OnLoadOutMenuToggle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_DisplayMeshes_C::OnLoadOutMenuToggle(bool Active)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayMeshes.BP_DisplayMeshes_C.OnLoadOutMenuToggle"));

	struct
	{
		bool                           Active;
	} params = {};

	params.Active = Active;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DisplayMeshes.BP_DisplayMeshes_C.LoadCosmetic
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponInstance                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UCosmeticAssetBase*      CosmeticAsset                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DisplayMeshes_C::LoadCosmetic(ECosmeticType Type, class UClass* /*UWeaponInstance*/ WeaponInstance, class UCosmeticAssetBase* CosmeticAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayMeshes.BP_DisplayMeshes_C.LoadCosmetic"));

	struct
	{
		ECosmeticType                  Type;
		class UClass* /*UWeaponInstance*/ WeaponInstance;
		class UCosmeticAssetBase*      CosmeticAsset;
	} params = {};

	params.Type = Type;
	params.WeaponInstance = WeaponInstance;
	params.CosmeticAsset = CosmeticAsset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DisplayMeshes.BP_DisplayMeshes_C.CosemticTypeSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECosmeticType                  Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DisplayMeshes_C::CosemticTypeSelected(ECosmeticType Selection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayMeshes.BP_DisplayMeshes_C.CosemticTypeSelected"));

	struct
	{
		ECosmeticType                  Selection;
	} params = {};

	params.Selection = Selection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DisplayMeshes.BP_DisplayMeshes_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DisplayMeshes_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayMeshes.BP_DisplayMeshes_C.ReceiveTick"));

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


// Function BP_DisplayMeshes.BP_DisplayMeshes_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DisplayMeshes_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayMeshes.BP_DisplayMeshes_C.ReceiveEndPlay"));

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


// Function BP_DisplayMeshes.BP_DisplayMeshes_C.RestoreViewTarget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DisplayMeshes_C::RestoreViewTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayMeshes.BP_DisplayMeshes_C.RestoreViewTarget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DisplayMeshes.BP_DisplayMeshes_C.OnVisibilityUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bDisplayVisible                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_DisplayMeshes_C::OnVisibilityUpdated(bool bDisplayVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayMeshes.BP_DisplayMeshes_C.OnVisibilityUpdated"));

	struct
	{
		bool                           bDisplayVisible;
	} params = {};

	params.bDisplayVisible = bDisplayVisible;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DisplayMeshes.BP_DisplayMeshes_C.ExecuteUbergraph_BP_DisplayMeshes
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DisplayMeshes_C::ExecuteUbergraph_BP_DisplayMeshes(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayMeshes.BP_DisplayMeshes_C.ExecuteUbergraph_BP_DisplayMeshes"));

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


// Function BP_DisplayMeshes.BP_DisplayMeshes_C.LoadCosmeticEvent__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponInstance                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UCosmeticAssetBase*      CosmeticAsset                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DisplayMeshes_C::LoadCosmeticEvent__DelegateSignature(ECosmeticType Type, class UClass* /*UWeaponInstance*/ WeaponInstance, class UCosmeticAssetBase* CosmeticAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayMeshes.BP_DisplayMeshes_C.LoadCosmeticEvent__DelegateSignature"));

	struct
	{
		ECosmeticType                  Type;
		class UClass* /*UWeaponInstance*/ WeaponInstance;
		class UCosmeticAssetBase*      CosmeticAsset;
	} params = {};

	params.Type = Type;
	params.WeaponInstance = WeaponInstance;
	params.CosmeticAsset = CosmeticAsset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
