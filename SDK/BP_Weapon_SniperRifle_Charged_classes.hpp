#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Weapon_SniperRifle_Charged_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_SniperRifle_Charged.BP_Weapon_SniperRifle_Charged_C
// 0x0058 (0x0A38 - 0x09E0)
class UBP_Weapon_SniperRifle_Charged_C : public UWeaponInstanceProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UTightAimWeaponBillboard*                    TightAimBillboard;                                        // 0x09E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMaterialSpriteElement                      Material;                                                 // 0x09F0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	class UMaterialInstanceDynamic*                    SniperGlareDMI;                                           // 0x0A18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCurveFloat*                                 GlareDotCurve;                                            // 0x0A20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             ChargingAudio;                                            // 0x0A28(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             ChargingAudio2;                                           // 0x0A30(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Weapon_SniperRifle_Charged.BP_Weapon_SniperRifle_Charged_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void TightAimStart();
	void TightAimEnd();
	void K2_UnEquip();
	void K2_FireComplete(unsigned char Mode);
	void ReceiveTick(float DeltaSeconds);
	void OnChargeStart(float TotalTime, float TimeElapsed);
	void OnChargeEnd(float TotalTime, float TimeElapsed);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnChargeValueUpdated(float Charge);
	void ExecuteUbergraph_BP_Weapon_SniperRifle_Charged(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
