#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_TeamDeathMatchSpawnPoint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TeamDeathMatchSpawnPoint.BP_TeamDeathMatchSpawnPoint_C
// 0x0010 (0x0348 - 0x0338)
class ABP_TeamDeathMatchSpawnPoint_C : public ATeamDeathmatchSpawnPoint
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TeamDeathMatchSpawnPoint.BP_TeamDeathMatchSpawnPoint_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_TeamDeathMatchSpawnPoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
