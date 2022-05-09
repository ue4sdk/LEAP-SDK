#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_WeaponDisplay_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WeaponDisplay.BP_WeaponDisplay_C
// 0x00B9 (0x02E9 - 0x0230)
class ABP_WeaponDisplay_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UCineCameraComponent*                        CineCamera;                                               // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                    // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USpringArmComponent*                         SpringArm;                                                // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USkeletalMeshComponent*                      KeyChainMesh;                                             // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UMaterialInstance>>    CurrentKeyChainMaterial;                                  // 0x0260(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                WeaponSkinID;                                             // 0x0270(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0274(0x0004) MISSED OFFSET
	class UClass* /*UWeaponInstance*/                  ActiveWeaponClass;                                        // 0x0278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTransform                                  DisplayTransform;                                         // 0x0280(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FName                                       KeyChainSocketName;                                       // 0x02B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       DisplaySocketName;                                        // 0x02B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FadeValue;                                                // 0x02C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               LoadingWeapon;                                            // 0x02C4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02C5(0x0003) MISSED OFFSET
	struct FMulticastScriptDelegate                    IsLoadingWeapon;                                          // 0x02C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UParticleSystemComponent*                    WeaponParticle;                                           // 0x02D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCosmeticWeaponSkinAsset*                    CurrentWeaponSkinAsset;                                   // 0x02E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bBlockRotation;                                           // 0x02E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_WeaponDisplay.BP_WeaponDisplay_C"));
		return ptr;
	}


	void UpdateRotation();
	void OnLoaded_765B337F4C508229A502C8ACF6862D4E(class UObject* Loaded);
	void OnLoaded_A46C772F4F48CE828C03A4AC9A8ABFD5(class UObject* Loaded);
	void OnLoaded_D6009D3240D8B5F68A4269BEDCD74E32(class UObject* Loaded);
	void OnLoaded_2E3509F54D8129E56E6EEC818983B699(class UObject* Loaded);
	void OnLoaded_AF14E14F468C4FEEA0E0EB8474A1365E(class UObject* Loaded);
	void LoadCosmetic(ECosmeticType Type, class UClass* /*UWeaponInstance*/ WeaponInstance, class UCosmeticAssetBase* CosmeticAsset);
	void OnWeaponUpdated(class UClass* /*UWeaponInstance*/ NewParam);
	void OnCosmeticTypeSelected(ECosmeticType Type);
	void AsyncLoadWeaponSkins(class UCosmeticWeaponSkinAsset* CurrentWeaponSkinAsset);
	void LoadCosmeticWeaponSkin(class UCosmeticWeaponSkinAsset* WeaponSkinAsset);
	void LoadCosmeticKeyChain(class UCosmeticKeyChainAsset* KeyChainAsset);
	void Fade(float Value);
	void FadeOut();
	void FadeIn();
	void UpdateVisibility();
	void SetDefaultSkin();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_WeaponDisplay(int EntryPoint);
	void IsLoadingWeapon__DelegateSignature(bool Loading);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
