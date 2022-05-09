#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SpawnedEventWidgetComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SpawnedEventWidgetComponent.BP_SpawnedEventWidgetComponent_C
// 0x0008 (0x05F8 - 0x05F0)
class UBP_SpawnedEventWidgetComponent_C : public UAdvancedWidgetComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SpawnedEventWidgetComponent.BP_SpawnedEventWidgetComponent_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void SetTimeRemaining(float TimeRemaining);
	void UpdateImage(class UTexture* Value);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnMenuToggled(class UAdvancedUserWidget* Widget, bool bToggle);
	void ExecuteUbergraph_BP_SpawnedEventWidgetComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
