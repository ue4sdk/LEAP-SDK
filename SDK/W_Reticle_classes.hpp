#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_Reticle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_Reticle.W_Reticle_C
// 0x00D0 (0x0348 - 0x0278)
class UW_Reticle_C : public UHUDBasicUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0278(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UImage*                                      Armor;                                                    // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                CanvasPanel_1;                                            // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      HitConfirm;                                               // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      HookshotDot;                                              // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      KillConfirm;                                              // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                ToggleableRoot;                                           // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWeaponComponent*                            WeaponComponent;                                          // 0x02B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_LockOnWidgetComponent_C*                 LockOnOverlayComponent;                                   // 0x02B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DamageRatio;                                              // 0x02C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LastHitTime;                                              // 0x02C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AActor*                                      CurrentTarget;                                            // 0x02C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                ArmorTint;                                                // 0x02D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                PlayerTint;                                               // 0x02E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bIsArmorHit;                                              // 0x02F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bPredictingKill;                                          // 0x02F1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x6];                                       // 0x02F2(0x0006) MISSED OFFSET
	TMap<class UClass* /*UWeaponInstance*/, struct FF_DamageTextTracking> DamageTextMappings;                                       // 0x02F8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_Reticle.W_Reticle_C"));
		return ptr;
	}


	void RemoveDamageText(class UClass* /*UWeaponInstance*/ WeaponClass, class AActor* Victim);
	void ProcessDamageText(class UClass* /*UWeaponInstance*/ Weapon_Class, float Damage, bool bHeadshot, class AActor* Victim);
	void CreateDamageTextWidget(class APlayerController* OwningPlayer, float Damage, class AActor* Victim, class UW_Reticle_C* Parent, class UClass* /*UWeaponInstance*/ WeaponClass, bool Headshot, bool Heal, class UW_DamageText_C** Widget);
	void OnPawnAcquired_8455D50F47BD7D430BCAC3A5DDBA0F66(class APawn* Pawn);
	void OnPlayerStateAcquired_93C830A049F71113110272B33D1E76EB(class APlayerState* PlayerState);
	void Construct();
	void OnHit(class AActor* Victim, class UClass* /*UWeaponInstance*/ Weapon, bool bHeadshot, float Damage, bool Healing);
	void Fade(float Value);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void FadeSkull(float Value);
	void OnHookshotTargetAvailable(class UHookshotComponent* HookshotComponent);
	void OnHookshotTargetNotAvailable(class UHookshotComponent* HookshotComponent);
	void OnTightAimStart_Event_1();
	void OnTightAimStop_Event_1();
	void Fade_End(float Value);
	void ExpGained(class UExperienceEvent* Event, int Value, class APlayerState* B);
	void Destruct();
	void OnMenuToggled(class UAdvancedUserWidget* Widget, bool bToggle);
	void ExecuteUbergraph_W_Reticle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
