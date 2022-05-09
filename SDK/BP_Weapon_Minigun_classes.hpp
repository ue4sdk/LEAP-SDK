#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Weapon_Minigun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_Minigun.BP_Weapon_Minigun_C
// 0x0018 (0x09F8 - 0x09E0)
class UBP_Weapon_Minigun_C : public UWeaponInstanceProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	TArray<class UParticleSystemComponent*>            Particles;                                                // 0x09E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Weapon_Minigun.BP_Weapon_Minigun_C"));
		return ptr;
	}


	void OnNotifyEnd_F84025ED4FD1019F3BB128A894E47145(const struct FName& NotifyName);
	void OnNotifyBegin_F84025ED4FD1019F3BB128A894E47145(const struct FName& NotifyName);
	void OnInterrupted_F84025ED4FD1019F3BB128A894E47145(const struct FName& NotifyName);
	void OnBlendOut_F84025ED4FD1019F3BB128A894E47145(const struct FName& NotifyName);
	void OnCompleted_F84025ED4FD1019F3BB128A894E47145(const struct FName& NotifyName);
	void OnNotifyEnd_E0CE802E4967239B4CC9C484C347928E(const struct FName& NotifyName);
	void OnNotifyBegin_E0CE802E4967239B4CC9C484C347928E(const struct FName& NotifyName);
	void OnInterrupted_E0CE802E4967239B4CC9C484C347928E(const struct FName& NotifyName);
	void OnBlendOut_E0CE802E4967239B4CC9C484C347928E(const struct FName& NotifyName);
	void OnCompleted_E0CE802E4967239B4CC9C484C347928E(const struct FName& NotifyName);
	void ReceiveTick(float DeltaSeconds);
	void K2_Fire(unsigned char Mode);
	void K2_WeaponStateChanged(EWeaponState NewWeaponState);
	void ExecuteUbergraph_BP_Weapon_Minigun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
