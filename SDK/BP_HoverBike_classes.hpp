#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_HoverBike_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HoverBike.BP_HoverBike_C
// 0x0053 (0x0C78 - 0x0C25)
class ABP_HoverBike_C : public ABP_ProjectXVehicle_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0C25(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C28(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UNiagaraComponent*                           Afterburners2;                                            // 0x0C30(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UNiagaraComponent*                           Afterburners1;                                            // 0x0C38(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             AccelerationLoop;                                         // 0x0C40(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             HoverEngineLoop;                                          // 0x0C48(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UNiagaraComponent*                           HoverFX2;                                                 // 0x0C50(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UNiagaraComponent*                           HoverFX;                                                  // 0x0C58(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	bool                                               bGunToggle;                                               // 0x0C60(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0C61(0x0003) MISSED OFFSET
	float                                              LerpedAcceleration;                                       // 0x0C64(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                DashColour;                                               // 0x0C68(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_HoverBike.BP_HoverBike_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void Engine_Start_Update(float Value);
	void Engine_Start_Done(float Value);
	void ReceiveTick(float DeltaSeconds);
	void OnJumped();
	void OnBoostingChangedDelegate(bool bToggle);
	void Play_Dash_Effect_On_Driver();
	void On_Engine_Start();
	void On_Engine_Stop();
	void Set_Invalid_Team_Colour();
	void Set_Valid_Team_Colour();
	void MULTICAST_JumpEffect();
	void ExecuteUbergraph_BP_HoverBike(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
