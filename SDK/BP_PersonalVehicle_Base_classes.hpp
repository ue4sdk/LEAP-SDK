#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_PersonalVehicle_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PersonalVehicle_Base.BP_PersonalVehicle_Base_C
// 0x00ED (0x0D12 - 0x0C25)
class ABP_PersonalVehicle_Base_C : public ABP_ProjectXVehicle_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0C25(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C28(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UAudioComponent*                             EngineSound;                                              // 0x0C30(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	int                                                BoostingInterpolator;                                     // 0x0C38(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0C3C(0x0004) MISSED OFFSET
	class UAnimMontage*                                Vehicle_Enter_Montage;                                    // 0x0C40(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                Driver_Enter_Montage;                                     // 0x0C48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                Vehicle_Jump_Montage;                                     // 0x0C50(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                Driver_Jump_Montage;                                      // 0x0C58(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                Vehicle_Boost_Montage;                                    // 0x0C60(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAnimMontage*                                Driver_Boost_Montage;                                     // 0x0C68(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  Vehicle_Engine_Start_Sound;                               // 0x0C70(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  Vehicle_Engine_Stop_Sound;                                // 0x0C78(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  Vehicle_Jump_Sound;                                       // 0x0C80(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              BoostAudioBlendOutTIme;                                   // 0x0C88(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              BoostAudioBlendInTIme;                                    // 0x0C8C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LerpedAcceleration;                                       // 0x0C90(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0C94(0x0004) MISSED OFFSET
	TArray<class UNiagaraComponent*>                   BottomBoosters;                                           // 0x0C98(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	TArray<class UNiagaraComponent*>                   RearBoosters;                                             // 0x0CA8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	bool                                               bShouldSpawnPropVehicleOnDeath;                           // 0x0CB8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0CB9(0x0003) MISSED OFFSET
	struct FName                                       Engine_Trail_Socket;                                      // 0x0CBC(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0CC4(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    TrailParticle;                                            // 0x0CC8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                EngineInterpolator;                                       // 0x0CD0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TimeForEngineToStartVFX;                                  // 0x0CD4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  Vehicle_Boost_Sound;                                      // 0x0CD8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    DesiredRotation;                                          // 0x0CE0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0CEC(0x0004) MISSED OFFSET
	TArray<class UMeshComponent*>                      EffectMeshes;                                             // 0x0CF0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	float                                              BoosterMinSize;                                           // 0x0D00(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              BoosterMaxSize;                                           // 0x0D04(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              BoostingBoostSizeMultiplier;                              // 0x0D08(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              JumpAnimationLockDelay;                                   // 0x0D0C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bDoingCosmeticBoost;                                      // 0x0D10(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bDoingCosmeticJump;                                       // 0x0D11(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PersonalVehicle_Base.BP_PersonalVehicle_Base_C"));
		return ptr;
	}


	void OnNotifyEnd_2AE653A1457A7CB15F549F850F1A27AA(const struct FName& NotifyName);
	void OnNotifyBegin_2AE653A1457A7CB15F549F850F1A27AA(const struct FName& NotifyName);
	void OnInterrupted_2AE653A1457A7CB15F549F850F1A27AA(const struct FName& NotifyName);
	void OnBlendOut_2AE653A1457A7CB15F549F850F1A27AA(const struct FName& NotifyName);
	void OnCompleted_2AE653A1457A7CB15F549F850F1A27AA(const struct FName& NotifyName);
	void OnNotifyEnd_007E858D477954723BBA44B5446D8962(const struct FName& NotifyName);
	void OnNotifyBegin_007E858D477954723BBA44B5446D8962(const struct FName& NotifyName);
	void OnInterrupted_007E858D477954723BBA44B5446D8962(const struct FName& NotifyName);
	void OnBlendOut_007E858D477954723BBA44B5446D8962(const struct FName& NotifyName);
	void OnCompleted_007E858D477954723BBA44B5446D8962(const struct FName& NotifyName);
	void OnNotifyEnd_492C3767416489345F8728AF5EB58099(const struct FName& NotifyName);
	void OnNotifyBegin_492C3767416489345F8728AF5EB58099(const struct FName& NotifyName);
	void OnInterrupted_492C3767416489345F8728AF5EB58099(const struct FName& NotifyName);
	void OnBlendOut_492C3767416489345F8728AF5EB58099(const struct FName& NotifyName);
	void OnCompleted_492C3767416489345F8728AF5EB58099(const struct FName& NotifyName);
	void OnNotifyEnd_ABB9E30344EFC9900635028C078B2C40(const struct FName& NotifyName);
	void OnNotifyBegin_ABB9E30344EFC9900635028C078B2C40(const struct FName& NotifyName);
	void OnInterrupted_ABB9E30344EFC9900635028C078B2C40(const struct FName& NotifyName);
	void OnBlendOut_ABB9E30344EFC9900635028C078B2C40(const struct FName& NotifyName);
	void OnCompleted_ABB9E30344EFC9900635028C078B2C40(const struct FName& NotifyName);
	void OnNotifyEnd_4E551B284BB8685E67925CB3E99D046C(const struct FName& NotifyName);
	void OnNotifyBegin_4E551B284BB8685E67925CB3E99D046C(const struct FName& NotifyName);
	void OnInterrupted_4E551B284BB8685E67925CB3E99D046C(const struct FName& NotifyName);
	void OnBlendOut_4E551B284BB8685E67925CB3E99D046C(const struct FName& NotifyName);
	void OnCompleted_4E551B284BB8685E67925CB3E99D046C(const struct FName& NotifyName);
	void OnNotifyEnd_399C097A4228B75B6836A3BB8613015A(const struct FName& NotifyName);
	void OnNotifyBegin_399C097A4228B75B6836A3BB8613015A(const struct FName& NotifyName);
	void OnInterrupted_399C097A4228B75B6836A3BB8613015A(const struct FName& NotifyName);
	void OnBlendOut_399C097A4228B75B6836A3BB8613015A(const struct FName& NotifyName);
	void OnCompleted_399C097A4228B75B6836A3BB8613015A(const struct FName& NotifyName);
	void OnNotifyEnd_12D5D3664B3CBB2C76B15CA28FDBFC06(const struct FName& NotifyName);
	void OnNotifyBegin_12D5D3664B3CBB2C76B15CA28FDBFC06(const struct FName& NotifyName);
	void OnInterrupted_12D5D3664B3CBB2C76B15CA28FDBFC06(const struct FName& NotifyName);
	void OnBlendOut_12D5D3664B3CBB2C76B15CA28FDBFC06(const struct FName& NotifyName);
	void OnCompleted_12D5D3664B3CBB2C76B15CA28FDBFC06(const struct FName& NotifyName);
	void ReceiveDestroyed();
	void OnJumped();
	void MULTICAST_UNRELIABLE_JumpEffects();
	void JumpEffects();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnBoostingStarted();
	void OnBoostingToggled(bool bToggle);
	void OnBoostingStopped();
	void LerpBoostingStop(float Value);
	void OnLanded(const struct FHitResult& Hit);
	void BoostEffects();
	void ResetBoostLock();
	void Handle_Cosmetic_Engine(float Delta);
	void Handle_Cosmetic_Boosters(float Delta);
	void On_Engine_Start();
	void LerpBoost(float Value);
	void On_Engine_Stop();
	void On_Seat_Passenger_Changed(class AProjectXVehicle* Vehicle, class UVehicleSeatComponent* Seat, class AProjectXCharacter* Previous_Passenger);
	void On_Driver_Enter(class AProjectXCharacter* Driver);
	void HandleEngineTrails(bool HasDriver);
	void OnEgineStarting(float Value);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void Create_Hud_Widget();
	void DissolveIn(float Value);
	void OnMoveUp();
	void Reset_Jump_Effect();
	void K2_VehicleSetAsDisplay();
	void GameSettingsUpdated();
	void ExecuteUbergraph_BP_PersonalVehicle_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
