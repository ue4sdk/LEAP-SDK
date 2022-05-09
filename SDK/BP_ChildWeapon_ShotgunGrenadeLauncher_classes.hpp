#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ChildWeapon_ShotgunGrenadeLauncher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ChildWeapon_ShotgunGrenadeLauncher.BP_ChildWeapon_ShotgunGrenadeLauncher_C
// 0x0018 (0x0A00 - 0x09E8)
class UBP_ChildWeapon_ShotgunGrenadeLauncher_C : public UChildWeaponInstanceShotgunMortar
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UAudioComponent*                             ChargingAudio;                                            // 0x09F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             ChargingAudio2;                                           // 0x09F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ChildWeapon_ShotgunGrenadeLauncher.BP_ChildWeapon_ShotgunGrenadeLauncher_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnChargeStart(float TotalTime, float TimeElapsed);
	void OnChargeEnd(float TotalTime, float TimeElapsed);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnChargeValueUpdated(float Charge);
	void K2_UnEquip();
	void ExecuteUbergraph_BP_ChildWeapon_ShotgunGrenadeLauncher(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
