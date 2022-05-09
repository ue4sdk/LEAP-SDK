#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_GrenadeWarningWidgetComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GrenadeWarningWidgetComponent.BP_GrenadeWarningWidgetComponent_C
// 0x0020 (0x0610 - 0x05F0)
class UBP_GrenadeWarningWidgetComponent_C : public UAdvancedWidgetComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	float                                              SafeZoneDistance;                                         // 0x05F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	float                                              DangerZoneDistance;                                       // 0x05FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	float                                              MinDistanceToRender;                                      // 0x0600(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               bIsDeployScreenOpen;                                      // 0x0604(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0605(0x0003) MISSED OFFSET
	class UMaterialInterface*                          Icon;                                                     // 0x0608(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_GrenadeWarningWidgetComponent.BP_GrenadeWarningWidgetComponent_C"));
		return ptr;
	}


	void OnPlayerStateAcquired_B96DF0AC488B69B2F8AFFB93E7CD70E0(class APlayerState* PlayerState);
	void InitializeForTeam(int Team);
	void ReceiveTick(float DeltaSeconds);
	void OnMatchEnded();
	void ReceiveBeginPlay();
	void K2_OnSpawnedFromObjectPool();
	void K2_OnReleasedToObjectPool();
	void UpdateVisibility();
	void OnWidgetClamped(bool bIsClamped);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnMenuToggled(class UAdvancedUserWidget* Widget, bool bToggle);
	void Update_Icon();
	void ExecuteUbergraph_BP_GrenadeWarningWidgetComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
