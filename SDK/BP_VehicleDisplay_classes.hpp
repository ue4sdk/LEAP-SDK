#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_VehicleDisplay_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VehicleDisplay.BP_VehicleDisplay_C
// 0x00C0 (0x02F0 - 0x0230)
class ABP_VehicleDisplay_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class USceneComponent*                             Scene;                                                    // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UMaterialInstance>>    CurrentVehicleSkinMaterials;                              // 0x0240(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                WeaponSkinID;                                             // 0x0250(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0254(0x0004) MISSED OFFSET
	class UClass* /*UWeaponInstance*/                  ActiveWeaponClass;                                        // 0x0258(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTransform                                  DisplayTransform;                                         // 0x0260(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FName                                       KeyChainSocketName;                                       // 0x0290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       DisplaySocketName;                                        // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FadeValue;                                                // 0x02A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               LoadingWeapon;                                            // 0x02A4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02A5(0x0003) MISSED OFFSET
	struct FMulticastScriptDelegate                    IsLoadingWeapon;                                          // 0x02A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UParticleSystemComponent*                    WeaponParticle;                                           // 0x02B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCosmeticVehicleSkinAsset*                   CurrentWeaponSkinAsset;                                   // 0x02C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USkeletalMesh*                               VehicleMesh;                                              // 0x02C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bBlockRotation;                                           // 0x02D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02D1(0x0007) MISSED OFFSET
	class ABP_ProjectXVehicle_C*                       Vehicle;                                                  // 0x02D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ABP_DisplayCharacter_C*                      DriverDisplayCharacter;                                   // 0x02E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UClass* /*AProjectXCharacter*/               SelectedClass;                                            // 0x02E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_VehicleDisplay.BP_VehicleDisplay_C"));
		return ptr;
	}


	void GetVehicleSpawnInfo(class UClass* /*UWeaponInstance*/ WeaponClass, class UClass* /*AProjectXVehicle*/ Vehicle_Class, struct FVector* DisplayScale, bool* IsVehicle);
	void UpdateRotation();
	void OnLoaded_C81D11804CF1FF9CEBD4BEA59550E466(class UObject* Loaded);
	void OnLoaded_C49F8EA243ED186494CCAE8BFC2325E3(class UObject* Loaded);
	void LoadCosmetic(ECosmeticType Type, class UClass* /*UWeaponInstance*/ WeaponInstance, class UCosmeticAssetBase* CosmeticAsset);
	void AsyncLoadVehicleskins(class UCosmeticVehicleSkinAsset* CurrentWeaponSkinAsset);
	void LoadCosmeticVehicleSkin(class UCosmeticVehicleSkinAsset* VehicleSkin);
	void Fade(float Value);
	void FadeOut();
	void FadeIn();
	void UpdateVisibility();
	void SetDefaultSkin();
	void OnVehicleUpdated(class UClass* /*UWeaponInstance*/ WeaponClass);
	void OnCharacterSelected(class UClass* /*AProjectXCharacter*/ CharacterClass);
	void ReceiveBeginPlay();
	void OnWidgetChanged(class UClass* /*UUserWidget*/ WidgetClass);
	void ReceiveTick(float DeltaSeconds);
	void Update_Driver_Display_Character(class ABP_DisplayCharacter_C* NewParam);
	void Clear_Vehicle_And_Driver();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_VehicleDisplay(int EntryPoint);
	void IsLoadingWeapon__DelegateSignature(bool Loading);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
