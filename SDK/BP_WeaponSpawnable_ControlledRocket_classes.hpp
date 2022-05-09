#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_WeaponSpawnable_ControlledRocket_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WeaponSpawnable_ControlledRocket.BP_WeaponSpawnable_ControlledRocket_C
// 0x0010 (0x0920 - 0x0910)
class UBP_WeaponSpawnable_ControlledRocket_C : public UWeaponInstanceControlled
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UABP_Character_FirstPerson_V3_C*             CachedAnimInstance;                                       // 0x0918(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_WeaponSpawnable_ControlledRocket.BP_WeaponSpawnable_ControlledRocket_C"));
		return ptr;
	}


	void K2_OnDeployableControlStop();
	void OnDeathAnimationEndCallback();
	void K2_Fire(unsigned char Mode);
	void GetAndCacheAnimInstance();
	void K2_OnDeployableControlStarted(class ADeployable* Deployable);
	void K2_OnDeployableControlStopFinished();
	void ExecuteUbergraph_BP_WeaponSpawnable_ControlledRocket(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
