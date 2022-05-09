#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ProjectXPlayerController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ProjectXPlayerController.BP_ProjectXPlayerController_C
// 0x0008 (0x0B78 - 0x0B70)
class ABP_ProjectXPlayerController_C : public AProjectXPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B70(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ProjectXPlayerController.BP_ProjectXPlayerController_C"));
		return ptr;
	}


	void OnPlayerStateAcquired_69E318834CA991A8242AD4852E85C170(class APlayerState* PlayerState);
	void ReceiveBeginPlay();
	void SpawnContextPing(const struct FVector& SpawnVector);
	void ExecuteUbergraph_BP_ProjectXPlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
