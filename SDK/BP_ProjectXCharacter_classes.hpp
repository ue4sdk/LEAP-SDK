#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ProjectXCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ProjectXCharacter.BP_ProjectXCharacter_C
// 0x01EC (0x0F0C - 0x0D20)
class ABP_ProjectXCharacter_C : public AProjectXCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D20(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UBP_DamageIndicatorWidgetComponent_C*        BP_DamageIndicatorWidgetComponent;                        // 0x0D28(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UDropsComponent*                             DropsComponent;                                           // 0x0D30(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UNiagaraComponent*                           DashEmitter;                                              // 0x0D38(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UNiagaraComponent*                           DashTrail;                                                // 0x0D40(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UNiagaraComponent*                           FirstPersonEffects;                                       // 0x0D48(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UNiagaraComponent*                           Trail6;                                                   // 0x0D50(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UNiagaraComponent*                           Trail5;                                                   // 0x0D58(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UNiagaraComponent*                           Trail2;                                                   // 0x0D60(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UNiagaraComponent*                           Trail1;                                                   // 0x0D68(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        Outline;                                                  // 0x0D70(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_SpottingComponent_C*                     BP_SpottingComponent;                                     // 0x0D78(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0D80(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetComponent*                            AmmoCounter;                                              // 0x0D88(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    wind;                                                     // 0x0D90(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             WindPivot;                                                // 0x0D98(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             EarWind;                                                  // 0x0DA0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UVOIPTalker*                                 VOIPTalker;                                               // 0x0DA8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UW_InteractionHighlight_C*                   InteractionHighlightWidget;                               // 0x0DB0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SpeedLerp;                                                // 0x0DB8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     LastVelocity;                                             // 0x0DBC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             LowHealthSFX;                                             // 0x0DC8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                ShieldShimmerInterpID;                                    // 0x0DD0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                ShieldDecayInterpID;                                      // 0x0DD4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             ShieldWarningSound;                                       // 0x0DD8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             ShieldChargeUp;                                           // 0x0DE0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             WaterRunSound;                                            // 0x0DE8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    SplashParticles;                                          // 0x0DF0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DeltaTime;                                                // 0x0DF8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                DashColour;                                               // 0x0DFC(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               InKillCam;                                                // 0x0E0C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0E0D(0x0003) MISSED OFFSET
	class UAudioComponent*                             BoostingSound;                                            // 0x0E10(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DeltaSpeed;                                               // 0x0E18(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TrailSpeedLerp;                                           // 0x0E1C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCameraModifier*                             FOVShiftCameraModifier;                                   // 0x0E20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnCosmeticallyClamber;                                    // 0x0E28(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UMaterialInstanceDynamic*                    DMI_Wind;                                                 // 0x0E38(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                CosmeticDashHandler;                                      // 0x0E40(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  FootstepFoley;                                            // 0x0E48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LastWindVolume;                                           // 0x0E50(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0E54(0x0004) MISSED OFFSET
	class UAudioComponent*                             tinnitussound;                                            // 0x0E58(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                TinnitusInterpID;                                         // 0x0E60(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0E64(0x0004) MISSED OFFSET
	class UCameraShakeBase*                            BoostShake;                                               // 0x0E68(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              PreviousShakeScale;                                       // 0x0E70(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Death_Wepon_Force;                                        // 0x0E74(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsRagdolling;                                             // 0x0E78(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0E79(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<E_LimbChains>>                  LimbsAvailable;                                           // 0x0E80(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<E_LimbChains>                          RandomlyPickedLimb;                                       // 0x0E90(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0E91(0x0003) MISSED OFFSET
	float                                              MaxSquaredDistanceToSpawnLimbs;                           // 0x0E94(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                NewVar_1;                                                 // 0x0E98(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxSquaredDistanceToSpawnDeathEffects;                    // 0x0E9C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     NameplateOffset;                                          // 0x0EA0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0EAC(0x0004) MISSED OFFSET
	class UBP_GrenadeWarningWidgetComponent_C*         HUDWarningComponent;                                      // 0x0EB0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       Warning_Tag;                                              // 0x0EB8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnTaunt;                                                  // 0x0EC0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FPoseSnapshot                               PoseSnapshot;                                             // 0x0ED0(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              timeUntilStopRagdoll;                                     // 0x0F08(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ProjectXCharacter.BP_ProjectXCharacter_C"));
		return ptr;
	}


	void GetLimbSocketNameForChain(TEnumAsByte<E_LimbChains> Chain, struct FName* SocketName);
	void GetBoneNameForLimbRemoval(const struct FName& Bone_Name_Query, TEnumAsByte<E_LimbChains>* LimbChain);
	void ShouldTick(float DeltaTime, bool* bShouldTick);
	void ShouldDrawTrails(bool* bShouldDraw);
	void CleanupVFX();
	void GetDamageIndicatorWidget(class UUserWidget** Widget);
	void ApplyTeamColouring(bool bAlly);
	struct FVector GetKillCamWidgetPlacementPivot();
	void WaitForController(bool* bReady);
	void OnPlayerStateAcquired_D6CCA6FF486E5BE1F8A37C8E8A8CB628(class APlayerState* PlayerState);
	void OnGameStateAcquired_BA0AD3BD402A1E5E56742A88A8B51C33(class AGameState* GameState);
	void OnNotifyEnd_C5F8B3344E951C054F980E979D58CFD0(const struct FName& NotifyName);
	void OnNotifyBegin_C5F8B3344E951C054F980E979D58CFD0(const struct FName& NotifyName);
	void OnInterrupted_C5F8B3344E951C054F980E979D58CFD0(const struct FName& NotifyName);
	void OnBlendOut_C5F8B3344E951C054F980E979D58CFD0(const struct FName& NotifyName);
	void OnCompleted_C5F8B3344E951C054F980E979D58CFD0(const struct FName& NotifyName);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnJumped();
	void OnLanded(const struct FHitResult& Hit);
	void BndEvt__WeaponComponent_K2Node_ComponentBoundEvent_0_WeaponEquippedSignature__DelegateSignature(class UWeaponInstance* Weapon);
	void Healed(float Amount, float Health, bool bFromPassiveRegen);
	void UpdateTeamCosmetics();
	void UpdateTeamColouring();
	void PlayerChangedTeam(class AProjectXPlayerState* PlayerState, unsigned char Team);
	void CreatePlayerInfoWidget();
	void ShieldsChanged(float Delta);
	void ShieldsDepleted(float Delta);
	void OnWaterRunStart();
	void OnWaterRunEnd();
	void OnTightAimStart();
	void OnTightAimStop();
	void DashEffect(const struct FLinearColor& Color);
	void EffectLerp(float Value);
	void ToggleIsInKillCam(bool bInKillCam);
	void OnNewWeaponEquipped(class UWeaponInstance* Weapon);
	void Died(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState);
	void DamageTaken(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState);
	void DecayShieldEffect(float Value);
	void ShieldShimmerEffect(float Value);
	void OnBoostingChangedEvent(bool bToggle);
	void OnVehicleChangedDelegate(class AProjectXCharacter* Driver, class AProjectXVehicle* CurrentVehicle, class AProjectXVehicle* PreviousVehicle);
	void OnPatternLoaded();
	void OnTauntMessageReceived();
	void OnTauntFinished();
	void Multicast_DoubleJump();
	void OnHoldingBreathChangedDelegate(bool bToggle);
	void OnDash(bool bToggle);
	void OnCustomMovementToggled(ECustomMovementType CustomMovement, bool bToggledState);
	void Multicast_DashEffects();
	void OnCosmeticallyDashEnd();
	void StopCosmeticDashEnd();
	void DashTrailIsEnding(float Value);
	void OnClamberStart();
	void Multicast_Cosmetically_Clamber();
	void OnPlayerFootstep(class UPhysicalMaterial* PhysicsMaterial);
	void WeaponEquipped(class UWeaponInstance* Weapon);
	void Fade(float Value);
	void HitByObject(float Damage, bool bHeadshot, class UClass* /*UDamageType*/ DamageType, class AActor* DamagingActor, float RadialDamageLerp);
	void OnCloakChanged(bool bVisible, float VisibleTimeStamp);
	void OnTauntToggled(bool bTauntOn);
	void HandleDeathEffects(const struct FDeathEffectInfo& DeathEffectInfo);
	void Start_Ragdoll();
	void Slow_Down(float Value);
	void Stop(float Value);
	void Start_Weapon_Ragdoll();
	void Spawn_Limb_for_Chain(TEnumAsByte<E_LimbChains> Chain, const struct FHitResult& Hit);
	void UpdateHUDVisibility(bool bShowHUD);
	void OnWorldOriginShiftUpdate(class UWorld* InWorld, const struct FIntVector& PreviousOriginLocation, const struct FIntVector& NewOriginLocation);
	void StopCosmeticDash();
	void GameUserSettingUIUpdated();
	void AddGlobalWarningWidgetComponent(float SafeZoneDistance, float DangerZoneDistance, float MinDistanceToRender, class UMaterialInterface* Icon, const struct FName& WarningTag, const struct FVector& Offset);
	void StopGlobalWarningWidgetComponent(const struct FName& WarningTag);
	void RagdollEnding();
	void SetupRagdollLifespan();
	void DesintegrateRagdoll(float Value);
	void Stop_Ragdoll();
	void ExecuteUbergraph_BP_ProjectXCharacter(int EntryPoint);
	void OnTaunt__DelegateSignature(bool bToggleTaunt);
	void OnCosmeticallyClamber__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
