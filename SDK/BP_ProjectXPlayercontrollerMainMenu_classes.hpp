#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ProjectXPlayercontrollerMainMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C
// 0x0148 (0x0778 - 0x0630)
class ABP_ProjectXPlayercontrollerMainMenu_C : public AProjectXPlayerControllerMainMenu
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0630(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class USteamPartyComponent*                        SteamParty;                                               // 0x0638(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ABP_DisplayCharacter_C*                      DisplayCharacter;                                         // 0x0640(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ABP_DecalDisplay_C*                          Decal;                                                    // 0x0648(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ABP_WeaponDisplay_C*                         DisplayWeapon;                                            // 0x0650(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UW_PartyPanel_C*                             UI_PartyPanel;                                            // 0x0658(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ASteamBeaconPlayerState*                     LastBeaconState;                                          // 0x0660(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class ABP_DisplayCharacter_C*>              PartyCharacters;                                          // 0x0668(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	TArray<class ASteamBeaconPlayerState*>             PartyMembers;                                             // 0x0678(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	class ABP_DisplayCharacter_C*                      UnassignedDisplayCharacter;                               // 0x0688(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class ASteamBeaconPlayerState*>             PartyMembersAfterLeaving;                                 // 0x0690(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	class ACameraActor*                                HeadCamera;                                               // 0x06A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ACameraActor*                                CharacterCamera;                                          // 0x06A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UClass* /*UUserWidget*/>              VisibleDisplayCharacterMenus;                             // 0x06B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class ACameraActor*                                WeaponCamera;                                             // 0x06C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ACameraActor*                                KeyChainCamera;                                           // 0x06C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    LoadingAssets;                                            // 0x06D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    FadeBackground;                                           // 0x06E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UDataTable*                                  InputTable;                                               // 0x06F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ACineCameraActor*                            CustomizeWeaponCamera;                                    // 0x06F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ABP_VehicleDisplay_C*                        DisplayVehicle;                                           // 0x0700(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ACineCameraActor*                            VehicleCamera;                                            // 0x0708(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bCanRotateDisplayModels;                                  // 0x0710(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0711(0x0007) MISSED OFFSET
	class UClass* /*AProjectXCharacter*/               Favourited_Class;                                         // 0x0718(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UDataTable*                                  AxisInputTable;                                           // 0x0720(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<struct FString, struct FString>               PartyMemberIDs;                                           // 0x0728(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ProjectXPlayercontrollerMainMenu.BP_ProjectXPlayercontrollerMainMenu_C"));
		return ptr;
	}


	void GetNakamaIDFromSteamID(const struct FString& Key, struct FString* Value);
	void UpdatePartyMemberCosmetics(class ABP_DisplayCharacter_C* DisplayCharacter, const struct FString& PlayerID);
	void IsLocalPlayerID(const struct FString& PlayerID, bool* LocalPlayerID);
	void ApplyFocalLength(class ACineCameraActor* Target, class UClass* /*UObject*/ Class);
	void SetCanRotateDisplayModels(bool bInCanRotate);
	void GetDisplayCharacter(class ABP_DisplayCharacter_C** DisplayCharacter);
	class UCosmeticAssetBase* GetEquippedWeaponCosmetic(class UClass* /*UWeaponInstance*/ Class, ECosmeticType Type);
	void GetPartyBeaconState(class ASteamBeaconState** Output_Get);
	void GetAssignedPartyMemberCharacter(const struct FString& NakamaID, class ABP_DisplayCharacter_C** DisplayCharacter);
	void RemoveInvalidDisplayCharacters(TArray<class ASteamBeaconPlayerState*>* Array);
	void GetUnassignedPartyMemberCharacter(class ABP_DisplayCharacter_C** DisplayCharacter);
	void ToggleDisplay(bool HideCharacter, bool Hide_Decal);
	void InpActEvt_Enter_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_C_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_C_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void OnCharacterClassSelected(class UClass* /*AProjectXCharacter*/ CharacterClass, bool bChangeCamera);
	void InitDisplayCharacter(class ABP_DisplayCharacter_C* DisplayCharacter, class APlayerState* NewOwnedPlayerState);
	void InitDecalDisplay(class ABP_DecalDisplay_C* Decal);
	void ReceiveBeginPlay();
	void OnCosmeticTypeSelected(ECosmeticType Type, bool bChangeCamera);
	void OnCosmeticSelected(ECosmeticType CosmeticType, class UClass* /*UWeaponInstance*/ WeaponClass, class UCosmeticAssetBase* CosmeticAsset, bool bChangeCamera);
	void InitDisplayWeapon(class ABP_WeaponDisplay_C* Display_Weapon);
	void OnWeaponSelected(class UClass* /*UWeaponInstance*/ WeaponClass);
	void BndEvt__SteamParty_K2Node_ComponentBoundEvent_0_OnPlayerJoinedSteamPartyDelegate__DelegateSignature(class ASteamBeaconPlayerState* InPlayerBeaconState);
	void BndEvt__SteamParty_K2Node_ComponentBoundEvent_1_OnPlayerUpdateSteamPartyDelegate__DelegateSignature(class ASteamBeaconPlayerState* InPlayerBeaconState);
	void BndEvt__SteamParty_K2Node_ComponentBoundEvent_2_OnPlayerUpdateSteamPartyDelegate__DelegateSignature(class ASteamBeaconPlayerState* InPlayerBeaconState);
	void BndEvt__SteamParty_K2Node_ComponentBoundEvent_3_EmptyDelegate__DelegateSignature();
	void BndEvt__SteamParty_K2Node_ComponentBoundEvent_4_OnPlayerUniqueIdSteamPartyDelegate__DelegateSignature(const struct FUniqueNetIdRepl& InPlayerUniqueId);
	void BndEvt__SteamParty_K2Node_ComponentBoundEvent_5_OnPlayerMessageSteamPartyDelegate__DelegateSignature(const struct FPartyMessage& InPartyMessage);
	void BndEvt__SteamParty_K2Node_ComponentBoundEvent_7_EmptyDelegate__DelegateSignature();
	void BndEvt__SteamParty_K2Node_ComponentBoundEvent_8_EmptyDelegate__DelegateSignature();
	void BndEvt__SteamParty_K2Node_ComponentBoundEvent_10_OnPlayerInviteReceivedSteamPartyDelegate__DelegateSignature(const struct FUniqueNetIdRepl& InPlayerUniqueId, const struct FString& InFriendName);
	void OnPartyMemberLoaded(const struct FString& PlayerID);
	void InitPartyCharacter(class ABP_DisplayCharacter_C* PartyCharacter);
	void OnMenuChanged(class UClass* /*UUserWidget*/ WidgetClass);
	void UpdateCharacterVisibility(class UClass* /*UUserWidget*/ ActiveWidget);
	void AssignDisplayCharacter(const struct FString& PlayerID);
	void OnWidgetChanged(class UClass* /*UUserWidget*/ WidgetClass);
	void OnAssetLoading(bool Loading);
	void ToggleBackgroundType(bool BackgroundEnabled, bool BlurEnabled);
	void DisplayCharacterID(const struct FString& PlayerID);
	void AssignLocalplayerID();
	void InitVehicleDisplay(class ABP_VehicleDisplay_C* DisplayVehicle);
	void UpdateClass(class UClass* /*AProjectXCharacter*/ CharacterClass);
	void OnPlayerInfoLoaded(const struct FSharedPlayerInfo& PlayerInfo, const struct FString& PlayerID);
	void OnNakamaIDFound(const struct FString& NakamaID, const struct FString& SteamID);
	void ExecuteUbergraph_BP_ProjectXPlayercontrollerMainMenu(int EntryPoint);
	void FadeBackground__DelegateSignature(bool BackgroundOn, bool IsBlurred);
	void LoadingAssets__DelegateSignature(bool Loading);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
