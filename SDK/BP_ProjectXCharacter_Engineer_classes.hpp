#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ProjectXCharacter_Engineer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ProjectXCharacter_Engineer.BP_ProjectXCharacter_Engineer_C
// 0x0024 (0x0F30 - 0x0F0C)
class ABP_ProjectXCharacter_Engineer_C : public ABP_ProjectXCharacter_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0F0C(0x0004) MISSED OFFSET
	class UBP_Hookshot_C*                              BP_Hookshot;                                              // 0x0F10(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TArray<class UParticleSystem*>                     ParticlesByTeam_1;                                        // 0x0F18(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	class UWidgetComponent*                            PlayerInfoWidget_1;                                       // 0x0F28(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ProjectXCharacter_Engineer.BP_ProjectXCharacter_Engineer_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
