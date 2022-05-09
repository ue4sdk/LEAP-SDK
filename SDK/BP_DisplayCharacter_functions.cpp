// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_DisplayCharacter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DisplayCharacter.BP_DisplayCharacter_C.GetWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EEquipSlot                     Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ Output                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void ABP_DisplayCharacter_C::GetWeapon(EEquipSlot Slot, class UClass* /*UWeaponInstance*/* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.GetWeapon"));

	struct
	{
		EEquipSlot                     Slot;
		class UClass* /*UWeaponInstance*/ Output;
	} params = {};

	params.Slot = Slot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Output != nullptr)
		*Output = params.Output;
}


// Function BP_DisplayCharacter.BP_DisplayCharacter_C.RotateActorMesh
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DisplayCharacter_C::RotateActorMesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.RotateActorMesh"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DisplayCharacter.BP_DisplayCharacter_C.GetCosmetics
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FEquips                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEquips ABP_DisplayCharacter_C::GetCosmetics()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.GetCosmetics"));

	struct
	{
		struct FEquips                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_DisplayCharacter.BP_DisplayCharacter_C.ShouldActorBeHidden
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_DisplayCharacter_C::ShouldActorBeHidden()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.ShouldActorBeHidden"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_DisplayCharacter.BP_DisplayCharacter_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DisplayCharacter_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DisplayCharacter.BP_DisplayCharacter_C.LoadCosmetic
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponInstance                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UCosmeticAssetBase*      CosmeticAsset                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DisplayCharacter_C::LoadCosmetic(ECosmeticType Type, class UClass* /*UWeaponInstance*/ WeaponInstance, class UCosmeticAssetBase* CosmeticAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.LoadCosmetic"));

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


// Function BP_DisplayCharacter.BP_DisplayCharacter_C.UpdateOwnerClass
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bLoadWeapons                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           LoadPlayerSkin                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_DisplayCharacter_C::UpdateOwnerClass(class UClass* /*AProjectXCharacter*/ Class, bool bLoadWeapons, bool LoadPlayerSkin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.UpdateOwnerClass"));

	struct
	{
		class UClass* /*AProjectXCharacter*/ Class;
		bool                           bLoadWeapons;
		bool                           LoadPlayerSkin;
	} params = {};

	params.Class = Class;
	params.bLoadWeapons = bLoadWeapons;
	params.LoadPlayerSkin = LoadPlayerSkin;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DisplayCharacter.BP_DisplayCharacter_C.UpdateWeapon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DisplayCharacter_C::UpdateWeapon(class UClass* /*UWeaponInstance*/ WeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.UpdateWeapon"));

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


// Function BP_DisplayCharacter.BP_DisplayCharacter_C.ToggleIsInKillCam
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInKillCam                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_DisplayCharacter_C::ToggleIsInKillCam(bool bInKillCam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.ToggleIsInKillCam"));

	struct
	{
		bool                           bInKillCam;
	} params = {};

	params.bInKillCam = bInKillCam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DisplayCharacter.BP_DisplayCharacter_C.UpdateTeamColouring
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DisplayCharacter_C::UpdateTeamColouring()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.UpdateTeamColouring"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DisplayCharacter.BP_DisplayCharacter_C.UpdateIsAlly
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Ally                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_DisplayCharacter_C::UpdateIsAlly(bool Ally)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.UpdateIsAlly"));

	struct
	{
		bool                           Ally;
	} params = {};

	params.Ally = Ally;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DisplayCharacter.BP_DisplayCharacter_C.UpdatePlayerAnimationClass
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DisplayCharacter_C::UpdatePlayerAnimationClass()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.UpdatePlayerAnimationClass"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DisplayCharacter.BP_DisplayCharacter_C.UpdateClassMaterials
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DisplayCharacter_C::UpdateClassMaterials()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.UpdateClassMaterials"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DisplayCharacter.BP_DisplayCharacter_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_DisplayCharacter_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DisplayCharacter.BP_DisplayCharacter_C.Fade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DisplayCharacter_C::Fade(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.Fade"));

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


// Function BP_DisplayCharacter.BP_DisplayCharacter_C.FadeOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DisplayCharacter_C::FadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.FadeOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DisplayCharacter.BP_DisplayCharacter_C.FadeIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DisplayCharacter_C::FadeIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.FadeIn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DisplayCharacter.BP_DisplayCharacter_C.UpdateVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DisplayCharacter_C::UpdateVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.UpdateVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DisplayCharacter.BP_DisplayCharacter_C.ForceHidden
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DisplayCharacter_C::ForceHidden()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.ForceHidden"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DisplayCharacter.BP_DisplayCharacter_C.OnFadeInComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DisplayCharacter_C::OnFadeInComplete(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.OnFadeInComplete"));

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


// Function BP_DisplayCharacter.BP_DisplayCharacter_C.CreatePlayerInfoWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DisplayCharacter_C::CreatePlayerInfoWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.CreatePlayerInfoWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DisplayCharacter.BP_DisplayCharacter_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DisplayCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.ReceiveTick"));

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


// Function BP_DisplayCharacter.BP_DisplayCharacter_C.OnSkinLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCosmeticPlayerSkinAsset* SkinAsset                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DisplayCharacter_C::OnSkinLoaded(class UCosmeticPlayerSkinAsset* SkinAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.OnSkinLoaded"));

	struct
	{
		class UCosmeticPlayerSkinAsset* SkinAsset;
	} params = {};

	params.SkinAsset = SkinAsset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DisplayCharacter.BP_DisplayCharacter_C.LoopMontage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DisplayCharacter_C::LoopMontage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.LoopMontage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DisplayCharacter.BP_DisplayCharacter_C.CosmeticDeselected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponInstance                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UCosmeticAssetBase*      CosmeticAsset                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DisplayCharacter_C::CosmeticDeselected(ECosmeticType Type, class UClass* /*UWeaponInstance*/ WeaponInstance, class UCosmeticAssetBase* CosmeticAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.CosmeticDeselected"));

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


// Function BP_DisplayCharacter.BP_DisplayCharacter_C.ExecuteUbergraph_BP_DisplayCharacter
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DisplayCharacter_C::ExecuteUbergraph_BP_DisplayCharacter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.ExecuteUbergraph_BP_DisplayCharacter"));

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


// Function BP_DisplayCharacter.BP_DisplayCharacter_C.FadeInComplete__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_DisplayCharacter_C*  NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_DisplayCharacter_C::FadeInComplete__DelegateSignature(class ABP_DisplayCharacter_C* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.FadeInComplete__DelegateSignature"));

	struct
	{
		class ABP_DisplayCharacter_C*  NewParam;
	} params = {};

	params.NewParam = NewParam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_DisplayCharacter.BP_DisplayCharacter_C.IsLoadingAssets__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Loading                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_DisplayCharacter_C::IsLoadingAssets__DelegateSignature(bool Loading)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_DisplayCharacter.BP_DisplayCharacter_C.IsLoadingAssets__DelegateSignature"));

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
