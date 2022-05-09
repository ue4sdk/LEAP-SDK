#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Weapon_Minigun_Fast_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_Minigun_Fast.BP_Weapon_Minigun_Fast_C
// 0x0018 (0x09F8 - 0x09E0)
class UBP_Weapon_Minigun_Fast_C : public UWeaponInstanceProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	TArray<class UParticleSystemComponent*>            Particles;                                                // 0x09E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Weapon_Minigun_Fast.BP_Weapon_Minigun_Fast_C"));
		return ptr;
	}


	void OnNotifyEnd_1F68CF5D49A9E354F34F7894EE5E884D(const struct FName& NotifyName);
	void OnNotifyBegin_1F68CF5D49A9E354F34F7894EE5E884D(const struct FName& NotifyName);
	void OnInterrupted_1F68CF5D49A9E354F34F7894EE5E884D(const struct FName& NotifyName);
	void OnBlendOut_1F68CF5D49A9E354F34F7894EE5E884D(const struct FName& NotifyName);
	void OnCompleted_1F68CF5D49A9E354F34F7894EE5E884D(const struct FName& NotifyName);
	void OnNotifyEnd_44E205884E236A12D9703EA63783DE2E(const struct FName& NotifyName);
	void OnNotifyBegin_44E205884E236A12D9703EA63783DE2E(const struct FName& NotifyName);
	void OnInterrupted_44E205884E236A12D9703EA63783DE2E(const struct FName& NotifyName);
	void OnBlendOut_44E205884E236A12D9703EA63783DE2E(const struct FName& NotifyName);
	void OnCompleted_44E205884E236A12D9703EA63783DE2E(const struct FName& NotifyName);
	void K2_Fire(unsigned char Mode);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Weapon_Minigun_Fast(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
