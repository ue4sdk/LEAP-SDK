#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_DisplayCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DisplayCharacter.BP_DisplayCharacter_C
// 0x0088 (0x0F94 - 0x0F0C)
class ABP_DisplayCharacter_C : public ABP_ProjectXCharacter_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0F0C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0F10(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FString                                     PlayerID;                                                 // 0x0F18(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               AllyColoured;                                             // 0x0F28(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0F29(0x0007) MISSED OFFSET
	class UClass* /*AProjectXCharacter*/               CurrentClass;                                             // 0x0F30(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	float                                              FadeValue;                                                // 0x0F38(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               SwitchingClasses;                                         // 0x0F3C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               LoadingBody;                                              // 0x0F3D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0F3E(0x0002) MISSED OFFSET
	struct FMulticastScriptDelegate                    IsLoadingAssets;                                          // 0x0F40(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               ForceInvisibility;                                        // 0x0F50(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0F51(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    FadeInComplete;                                           // 0x0F58(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class AProjectXPlayerState*                        OwnedPlayerState;                                         // 0x0F68(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Time_Total;                                               // 0x0F70(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bBlockRotation;                                           // 0x0F74(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               SwitchingWeapon;                                          // 0x0F75(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0F76(0x0002) MISSED OFFSET
	struct FTimerHandle                                MontageLoopingTimer;                                      // 0x0F78(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UClass* /*UWeaponInstance*/                  Weapon_Class;                                             // 0x0F80(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                TauntMontage;                                             // 0x0F88(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Fadetimer;                                                // 0x0F90(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DisplayCharacter.BP_DisplayCharacter_C"));
		return ptr;
	}


	void GetWeapon(EEquipSlot Slot, class UClass* /*UWeaponInstance*/* Output);
	void RotateActorMesh();
	struct FEquips GetCosmetics();
	bool ShouldActorBeHidden();
	void UserConstructionScript();
	void LoadCosmetic(ECosmeticType Type, class UClass* /*UWeaponInstance*/ WeaponInstance, class UCosmeticAssetBase* CosmeticAsset);
	void UpdateOwnerClass(class UClass* /*AProjectXCharacter*/ Class, bool bLoadWeapons, bool LoadPlayerSkin);
	void UpdateWeapon(class UClass* /*UWeaponInstance*/ WeaponClass);
	void ToggleIsInKillCam(bool bInKillCam);
	void UpdateTeamColouring();
	void UpdateIsAlly(bool Ally);
	void UpdatePlayerAnimationClass();
	void UpdateClassMaterials();
	void ReceiveBeginPlay();
	void Fade(float Value);
	void FadeOut();
	void FadeIn();
	void UpdateVisibility();
	void ForceHidden();
	void OnFadeInComplete(float Value);
	void CreatePlayerInfoWidget();
	void ReceiveTick(float DeltaSeconds);
	void OnSkinLoaded(class UCosmeticPlayerSkinAsset* SkinAsset);
	void LoopMontage();
	void CosmeticDeselected(ECosmeticType Type, class UClass* /*UWeaponInstance*/ WeaponInstance, class UCosmeticAssetBase* CosmeticAsset);
	void ExecuteUbergraph_BP_DisplayCharacter(int EntryPoint);
	void FadeInComplete__DelegateSignature(class ABP_DisplayCharacter_C* NewParam);
	void IsLoadingAssets__DelegateSignature(bool Loading);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
