#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_KillFeed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_KillFeed.W_KillFeed_C
// 0x0018 (0x0278 - 0x0260)
class UW_KillFeed_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UW_KillFeed_Entry_C*                         BP_KillFeed_Entry;                                        // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                KillFeedBox;                                              // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_KillFeed.W_KillFeed_C"));
		return ptr;
	}


	void OnGameStateAcquired_C67C9C1446CCD70343C992BE5F8A7DA3(class AGameState* GameState);
	void Construct();
	void OnPlayerKill(class AProjectXPlayerState* Killer, class AProjectXPlayerState* Killed, int Data, class UClass* /*UProjectXDamageType*/ DamageType, bool bWasHeadshot);
	void ExecuteUbergraph_W_KillFeed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
