#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Invisibility_VisibilityAffliction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Invisibility_VisibilityAffliction.BP_Invisibility_VisibilityAffliction_C
// 0x0030 (0x03F0 - 0x03C0)
class UBP_Invisibility_VisibilityAffliction_C : public UAfflictionInstanceStealth
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UW_InvisibilityOverlay_C*                    Overlay;                                                  // 0x03C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AActor*                                      NoInstigator;                                             // 0x03D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StealthValue;                                             // 0x03D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	class UCosmeticsComponent*                         CosmeticsCompo;                                           // 0x03E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AProjectXCharacter*                          Character;                                                // 0x03E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Invisibility_VisibilityAffliction.BP_Invisibility_VisibilityAffliction_C"));
		return ptr;
	}


	void Destroy_Overlay();
	void Create_Overlay(float InvisibilityDuration);
	void OnPlayerStateAcquired_6EEE412A49D941C1DAC3EE8A2DBB9ECF(class APlayerState* PlayerState);
	void K2_End();
	void K2_Start();
	void EnteringStealth(float Value);
	void OnNewWeaponEquipped(class UWeaponInstance* Weapon);
	void UpdateStealthValue();
	void OnTeamChanged(class AProjectXPlayerState* PlayerState, unsigned char Team);
	void OnStealthLoaded(float Value);
	void BeginDisableCloak();
	void ExecuteUbergraph_BP_Invisibility_VisibilityAffliction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
