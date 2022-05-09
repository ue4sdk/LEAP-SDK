#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_PersonalVehicle_MechMoose_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PersonalVehicle_MechMoose.BP_PersonalVehicle_MechMoose_C
// 0x005A (0x0D6C - 0x0D12)
class ABP_PersonalVehicle_MechMoose_C : public ABP_PersonalVehicle_Base_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0D12(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D18(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UNiagaraComponent*                           Afterburner2;                                             // 0x0D20(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UNiagaraComponent*                           PSN_Afterburners_Controllable2;                           // 0x0D28(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UNiagaraComponent*                           PSN_Afterburners_Controllable1;                           // 0x0D30(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UNiagaraComponent*                           Afterburner1;                                             // 0x0D38(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UNiagaraComponent*                           BottomBooster;                                            // 0x0D40(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	bool                                               bGunToggle;                                               // 0x0D48(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0D49(0x0003) MISSED OFFSET
	float                                              Time;                                                     // 0x0D4C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                LandedInterp;                                             // 0x0D50(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Return_Value_X;                                           // 0x0D54(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UABP_PersonalVehicle_MechMoose_C*            AnimInstance;                                             // 0x0D58(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LateralRotationAmount;                                    // 0x0D60(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                BoostSpinInterp;                                          // 0x0D64(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                SpinInterp;                                               // 0x0D68(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PersonalVehicle_MechMoose.BP_PersonalVehicle_MechMoose_C"));
		return ptr;
	}


	void Set_Valid_Team_Colour();
	void ReceiveBeginPlay();
	void BoostEffects();
	void OnBoostingStarted();
	void OnBoostingStopped();
	void ReceiveTick(float DeltaSeconds);
	void BarrelRoll(float Value);
	void Stop_Roll(float Value);
	void Handle_Cosmetic_Boosters(float Delta);
	void ResetRotation();
	void ExecuteUbergraph_BP_PersonalVehicle_MechMoose(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
