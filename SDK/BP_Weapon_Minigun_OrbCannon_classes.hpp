#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Weapon_Minigun_OrbCannon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_Minigun_OrbCannon.BP_Weapon_Minigun_OrbCannon_C
// 0x0018 (0x09F8 - 0x09E0)
class UBP_Weapon_Minigun_OrbCannon_C : public UWeaponInstanceProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	TArray<class UParticleSystemComponent*>            Particles;                                                // 0x09E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Weapon_Minigun_OrbCannon.BP_Weapon_Minigun_OrbCannon_C"));
		return ptr;
	}


	void OnNotifyEnd_0B7137A24724C1B05AC5A2A589B06FF6(const struct FName& NotifyName);
	void OnNotifyBegin_0B7137A24724C1B05AC5A2A589B06FF6(const struct FName& NotifyName);
	void OnInterrupted_0B7137A24724C1B05AC5A2A589B06FF6(const struct FName& NotifyName);
	void OnBlendOut_0B7137A24724C1B05AC5A2A589B06FF6(const struct FName& NotifyName);
	void OnCompleted_0B7137A24724C1B05AC5A2A589B06FF6(const struct FName& NotifyName);
	void OnNotifyEnd_6612CAB04AB9444204B2949B3859027A(const struct FName& NotifyName);
	void OnNotifyBegin_6612CAB04AB9444204B2949B3859027A(const struct FName& NotifyName);
	void OnInterrupted_6612CAB04AB9444204B2949B3859027A(const struct FName& NotifyName);
	void OnBlendOut_6612CAB04AB9444204B2949B3859027A(const struct FName& NotifyName);
	void OnCompleted_6612CAB04AB9444204B2949B3859027A(const struct FName& NotifyName);
	void K2_Fire(unsigned char Mode);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Weapon_Minigun_OrbCannon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
