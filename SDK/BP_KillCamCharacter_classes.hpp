#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_KillCamCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_KillCamCharacter.BP_KillCamCharacter_C
// 0x0028 (0x0314 - 0x02EC)
class ABP_KillCamCharacter_C : public ABP_KillCamActor_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UChildActorComponent*                        ChildActor;                                               // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UABP_Character_ThirdPerson_C*                AnimationBP;                                              // 0x0300(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     PreviousMeshLocation;                                     // 0x0308(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_KillCamCharacter.BP_KillCamCharacter_C"));
		return ptr;
	}


	void UpdateDefaultMaterials(class ABP_DisplayCharacter_C* Display, class AProjectXCharacter* KillerDefaultObject);
	void UpdateTransform(class ABP_DisplayCharacter_C* Display, class AProjectXCharacter* KillerDefaultObject);
	void InitializeKillCameraActor(class AProjectXCharacter* Killed, class AActor* Killer, class AProjectXPlayerState* KillerState, class UClass* /*UDamageType*/ DamageType);
	void ReceiveBeginPlay();
	void OnKillerFocused();
	void ExecuteUbergraph_BP_KillCamCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
