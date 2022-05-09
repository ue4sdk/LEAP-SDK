#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ProjectXVehicle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ProjectXVehicle.BP_ProjectXVehicle_C
// 0x0135 (0x0C25 - 0x0AF0)
class ABP_ProjectXVehicle_C : public AProjectXVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UParticleSystemComponent*                    WaterParticles;                                           // 0x0AF8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_AimSphere_C*                             BP_AimSphere;                                             // 0x0B00(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    wind;                                                     // 0x0B08(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UNiagaraComponent*                           FirstPersonEffects;                                       // 0x0B10(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             WindPivot;                                                // 0x0B18(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        Outline;                                                  // 0x0B20(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_DamageIndicatorWidgetComponent_C*        BP_DamageIndicatorWidgetComponent;                        // 0x0B28(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UVehicleSeatComponent*                       VehicleDriverSeat;                                        // 0x0B30(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBillboardComponent*                         AimStartPoint;                                            // 0x0B38(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystem*                             DeathParticle;                                            // 0x0B40(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    VehicleMat;                                               // 0x0B48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystem*                             WeaponFireParticle;                                       // 0x0B50(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  WeaponFireSound;                                          // 0x0B58(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystem*                             EngineTrailParticle;                                      // 0x0B60(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             LowHealthSFX;                                             // 0x0B68(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             NearDeathSFX;                                             // 0x0B70(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    LowHealthVFX;                                             // 0x0B78(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    NearDeathVFX;                                             // 0x0B80(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  DeathSound;                                               // 0x0B88(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SwayTilt_Multiplier;                                      // 0x0B90(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RotationTiltMultiplier;                                   // 0x0B94(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bAlternateGun;                                            // 0x0B98(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0B99(0x0007) MISSED OFFSET
	struct FTransform                                  HUDInfoWidgetTransform;                                   // 0x0BA0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	TSoftObjectPtr<class UTexture2D>                   VehicleSeatInfoHUDImage;                                  // 0x0BD0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	float                                              DeltaTime;                                                // 0x0BF8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SpeedLerp;                                                // 0x0BFC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     LastVelocity;                                             // 0x0C00(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DeltaSpeed;                                               // 0x0C0C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LastWindVolume;                                           // 0x0C10(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0C14(0x0004) MISSED OFFSET
	class ABP_ProjectXCharacter_C*                     LocalOccupant;                                            // 0x0C18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              BoostCameraShakeIntensity;                                // 0x0C20(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bDisplayVehicle;                                          // 0x0C24(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ProjectXVehicle.BP_ProjectXVehicle_C"));
		return ptr;
	}


	void GetLocalOccupant(class ABP_ProjectXCharacter_C** LocalOccupant);
	struct FVector GetKillCamWidgetPlacementPivot();
	struct FVector GetAimStartPoint();
	void OnPlayerStateAcquired_7B7C20F44DCA79A3984D849A90A544F9(class APlayerState* PlayerState);
	void OnGameStateAcquired_970D20774FBD40F468CD6F9D9553B9F3(class AGameState* GameState);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void DriverChangedEvent(class AProjectXCharacter* PreviousDriver, class AProjectXCharacter* NewDriver);
	void OnDeathEvent();
	void WeaponFireEffects(const struct FVector& InputPin);
	void PlayWeaponFireEffects(class UWeaponInstanceVehicle* Weapon);
	void HandleEngineTrails(bool HasDriver);
	void Bind_Vehicle_Events();
	void Toggle_Low_Health_Effects(bool Active);
	void Toggle_Near_Death_Effects(bool Active);
	void ReceivePossessed(class AController* NewController);
	void ReceiveUnpossessed(class AController* OldController);
	void UpdateTeamColour(class AProjectXPlayerState* PlayerState, unsigned char Team);
	void Create_Hud_Widget();
	void OnRepair(float Amount, float Health, bool bFromPassiveRegen);
	void Passengers_Changed(class AProjectXVehicle* Vehicle, class UVehicleSeatComponent* Seat, class AProjectXCharacter* PreviousPassenger);
	void UpdateTeamColouring();
	void ToggleIsInKillCam(bool bInKillCam);
	void VehicleDamageTaken(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState);
	void On_Engine_Start();
	void On_Engine_Stop();
	void Set_Invalid_Team_Colour();
	void Set_Valid_Team_Colour();
	void On_Seat_Passenger_Changed(class AProjectXVehicle* Vehicle, class UVehicleSeatComponent* Seat, class AProjectXCharacter* Previous_Passenger);
	void OnBoostingStarted();
	void OnBoostingStopped();
	void OnBoostingToggled(bool bToggle);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void K2_VehicleSetAsDisplay();
	void OnWorldOriginShiftUpdate(class UWorld* InWorld, const struct FIntVector& PreviousOriginLocation, const struct FIntVector& NewOriginLocation);
	void ExecuteUbergraph_BP_ProjectXVehicle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
