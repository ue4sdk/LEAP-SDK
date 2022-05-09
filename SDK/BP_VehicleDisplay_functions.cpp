// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_VehicleDisplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_VehicleDisplay.BP_VehicleDisplay_C.GetVehicleSpawnInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 DisplayScale                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AProjectXVehicle*/ Vehicle_Class                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// bool                           IsVehicle                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_VehicleDisplay_C::GetVehicleSpawnInfo(class UClass* /*UWeaponInstance*/ WeaponClass, class UClass* /*AProjectXVehicle*/ Vehicle_Class, struct FVector* DisplayScale, bool* IsVehicle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleDisplay.BP_VehicleDisplay_C.GetVehicleSpawnInfo"));

	struct
	{
		class UClass* /*UWeaponInstance*/ WeaponClass;
		struct FVector                 DisplayScale;
		class UClass* /*AProjectXVehicle*/ Vehicle_Class;
		bool                           IsVehicle;
	} params = {};

	params.WeaponClass = WeaponClass;
	params.Vehicle_Class = Vehicle_Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (DisplayScale != nullptr)
		*DisplayScale = params.DisplayScale;
	if (IsVehicle != nullptr)
		*IsVehicle = params.IsVehicle;
}


// Function BP_VehicleDisplay.BP_VehicleDisplay_C.UpdateRotation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_VehicleDisplay_C::UpdateRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleDisplay.BP_VehicleDisplay_C.UpdateRotation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VehicleDisplay.BP_VehicleDisplay_C.OnLoaded_C81D11804CF1FF9CEBD4BEA59550E466
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_VehicleDisplay_C::OnLoaded_C81D11804CF1FF9CEBD4BEA59550E466(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleDisplay.BP_VehicleDisplay_C.OnLoaded_C81D11804CF1FF9CEBD4BEA59550E466"));

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


// Function BP_VehicleDisplay.BP_VehicleDisplay_C.OnLoaded_C49F8EA243ED186494CCAE8BFC2325E3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_VehicleDisplay_C::OnLoaded_C49F8EA243ED186494CCAE8BFC2325E3(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleDisplay.BP_VehicleDisplay_C.OnLoaded_C49F8EA243ED186494CCAE8BFC2325E3"));

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


// Function BP_VehicleDisplay.BP_VehicleDisplay_C.LoadCosmetic
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECosmeticType                  Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UWeaponInstance*/ WeaponInstance                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UCosmeticAssetBase*      CosmeticAsset                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_VehicleDisplay_C::LoadCosmetic(ECosmeticType Type, class UClass* /*UWeaponInstance*/ WeaponInstance, class UCosmeticAssetBase* CosmeticAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleDisplay.BP_VehicleDisplay_C.LoadCosmetic"));

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


// Function BP_VehicleDisplay.BP_VehicleDisplay_C.AsyncLoadVehicleskins
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCosmeticVehicleSkinAsset* CurrentWeaponSkinAsset         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_VehicleDisplay_C::AsyncLoadVehicleskins(class UCosmeticVehicleSkinAsset* CurrentWeaponSkinAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleDisplay.BP_VehicleDisplay_C.AsyncLoadVehicleskins"));

	struct
	{
		class UCosmeticVehicleSkinAsset* CurrentWeaponSkinAsset;
	} params = {};

	params.CurrentWeaponSkinAsset = CurrentWeaponSkinAsset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VehicleDisplay.BP_VehicleDisplay_C.LoadCosmeticVehicleSkin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCosmeticVehicleSkinAsset* VehicleSkin                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_VehicleDisplay_C::LoadCosmeticVehicleSkin(class UCosmeticVehicleSkinAsset* VehicleSkin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleDisplay.BP_VehicleDisplay_C.LoadCosmeticVehicleSkin"));

	struct
	{
		class UCosmeticVehicleSkinAsset* VehicleSkin;
	} params = {};

	params.VehicleSkin = VehicleSkin;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VehicleDisplay.BP_VehicleDisplay_C.Fade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_VehicleDisplay_C::Fade(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleDisplay.BP_VehicleDisplay_C.Fade"));

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


// Function BP_VehicleDisplay.BP_VehicleDisplay_C.FadeOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_VehicleDisplay_C::FadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleDisplay.BP_VehicleDisplay_C.FadeOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VehicleDisplay.BP_VehicleDisplay_C.FadeIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_VehicleDisplay_C::FadeIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleDisplay.BP_VehicleDisplay_C.FadeIn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VehicleDisplay.BP_VehicleDisplay_C.UpdateVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_VehicleDisplay_C::UpdateVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleDisplay.BP_VehicleDisplay_C.UpdateVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VehicleDisplay.BP_VehicleDisplay_C.SetDefaultSkin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_VehicleDisplay_C::SetDefaultSkin()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleDisplay.BP_VehicleDisplay_C.SetDefaultSkin"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VehicleDisplay.BP_VehicleDisplay_C.OnVehicleUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWeaponInstance*/ WeaponClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void ABP_VehicleDisplay_C::OnVehicleUpdated(class UClass* /*UWeaponInstance*/ WeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleDisplay.BP_VehicleDisplay_C.OnVehicleUpdated"));

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


// Function BP_VehicleDisplay.BP_VehicleDisplay_C.OnCharacterSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AProjectXCharacter*/ CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void ABP_VehicleDisplay_C::OnCharacterSelected(class UClass* /*AProjectXCharacter*/ CharacterClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleDisplay.BP_VehicleDisplay_C.OnCharacterSelected"));

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


// Function BP_VehicleDisplay.BP_VehicleDisplay_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_VehicleDisplay_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleDisplay.BP_VehicleDisplay_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VehicleDisplay.BP_VehicleDisplay_C.OnWidgetChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UUserWidget*/  WidgetClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void ABP_VehicleDisplay_C::OnWidgetChanged(class UClass* /*UUserWidget*/ WidgetClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleDisplay.BP_VehicleDisplay_C.OnWidgetChanged"));

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


// Function BP_VehicleDisplay.BP_VehicleDisplay_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_VehicleDisplay_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleDisplay.BP_VehicleDisplay_C.ReceiveTick"));

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


// Function BP_VehicleDisplay.BP_VehicleDisplay_C.Update Driver Display Character
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_DisplayCharacter_C*  NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_VehicleDisplay_C::Update_Driver_Display_Character(class ABP_DisplayCharacter_C* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleDisplay.BP_VehicleDisplay_C.Update Driver Display Character"));

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


// Function BP_VehicleDisplay.BP_VehicleDisplay_C.Clear Vehicle And Driver
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_VehicleDisplay_C::Clear_Vehicle_And_Driver()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleDisplay.BP_VehicleDisplay_C.Clear Vehicle And Driver"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_VehicleDisplay.BP_VehicleDisplay_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_VehicleDisplay_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleDisplay.BP_VehicleDisplay_C.ReceiveEndPlay"));

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


// Function BP_VehicleDisplay.BP_VehicleDisplay_C.ExecuteUbergraph_BP_VehicleDisplay
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_VehicleDisplay_C::ExecuteUbergraph_BP_VehicleDisplay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleDisplay.BP_VehicleDisplay_C.ExecuteUbergraph_BP_VehicleDisplay"));

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


// Function BP_VehicleDisplay.BP_VehicleDisplay_C.IsLoadingWeapon__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Loading                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_VehicleDisplay_C::IsLoadingWeapon__DelegateSignature(bool Loading)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_VehicleDisplay.BP_VehicleDisplay_C.IsLoadingWeapon__DelegateSignature"));

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
