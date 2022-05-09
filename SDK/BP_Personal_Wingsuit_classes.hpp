#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Personal_Wingsuit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Personal_Wingsuit.BP_Personal_Wingsuit_C
// 0x0056 (0x0D68 - 0x0D12)
class ABP_Personal_Wingsuit_C : public ABP_PersonalVehicle_Base_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0D12(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D18(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UNiagaraComponent*                           PSN_WingTrailFlip;                                        // 0x0D20(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UNiagaraComponent*                           PSN_WingTrailFlip1;                                       // 0x0D28(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UNiagaraComponent*                           Afterburner5;                                             // 0x0D30(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UNiagaraComponent*                           Afterburner4;                                             // 0x0D38(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UNiagaraComponent*                           Afterburner3;                                             // 0x0D40(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UNiagaraComponent*                           Afterburner2;                                             // 0x0D48(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	bool                                               bGunToggle;                                               // 0x0D50(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0D51(0x0007) MISSED OFFSET
	class USK_GliderRigged_Skeleton_AnimBlueprint_C*   AnimInstance;                                             // 0x0D58(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                BoostSpinInterp;                                          // 0x0D60(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                SpinInterp;                                               // 0x0D64(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Personal_Wingsuit.BP_Personal_Wingsuit_C"));
		return ptr;
	}


	void BoostEffects();
	void On_Driver_Enter(class AProjectXCharacter* Driver);
	void Tilt(float Value);
	void BarrelRoll(float Value);
	void JumpEffects();
	void ReceiveBeginPlay();
	void SingleSpinInterp(float Value);
	void ResetRotation();
	void RotationHasEnded(float Value);
	void ExecuteUbergraph_BP_Personal_Wingsuit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
