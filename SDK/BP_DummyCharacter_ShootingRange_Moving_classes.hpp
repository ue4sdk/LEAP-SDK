#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_DummyCharacter_ShootingRange_Moving_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DummyCharacter_ShootingRange_Moving.BP_DummyCharacter_ShootingRange_Moving_C
// 0x003C (0x0FEC - 0x0FB0)
class ABP_DummyCharacter_ShootingRange_Moving_C : public ABP_DummyCharacter_ShootingRange_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FB0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FVector                                     InitialLocation;                                          // 0x0FB8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     OffsetLocationLeft;                                       // 0x0FC4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     OffsetLocationRight;                                      // 0x0FD0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     CurrentLocation;                                          // 0x0FDC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RandomSpeed;                                              // 0x0FE8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DummyCharacter_ShootingRange_Moving.BP_DummyCharacter_ShootingRange_Moving_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void TickUpdateActorLocation(float Value);
	void Move(float Value);
	void InvertMove(float Value);
	void RestartLoop(float Value);
	void UpdateActorLocationRight(float Value);
	void RestartMove();
	void ExecuteUbergraph_BP_DummyCharacter_ShootingRange_Moving(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
