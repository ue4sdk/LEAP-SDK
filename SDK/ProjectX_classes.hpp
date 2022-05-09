#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ProjectX_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ProjectX.ActorPruningSystem
// 0x0070 (0x02A0 - 0x0230)
class AActorPruningSystem : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0230(0x0008) MISSED OFFSET
	TArray<struct FActorPruneInfo>                     ActorsToPrune;                                            // 0x0238(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bDebug;                                                   // 0x0248(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x57];                                      // 0x0249(0x0057) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ActorPruningSystem"));
		return ptr;
	}


	void Multicast_ShowActors(TArray<class AActor*> ActorsToShow);
};


// Class ProjectX.ActorSpawningVolume
// 0x00C8 (0x02F8 - 0x0230)
class AActorSpawningVolume : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0230(0x0030) MISSED OFFSET
	bool                                               bExecuteOnMatchStart;                                     // 0x0260(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bExecutesOnBeginPlay;                                     // 0x0261(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0262(0x0006) MISSED OFFSET
	TArray<struct FActorSpawnInfo>                     ActorsToSpawn;                                            // 0x0268(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   SpawnInitialDelay;                                        // 0x0278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   SpawnDelay;                                               // 0x0280(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                LoopCount;                                                // 0x0288(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bGroundActors;                                            // 0x028C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bProjectPointToNavigation;                                // 0x028D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x028E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ESpawnActorCollisionHandlingMethod                 SpawnCollisionHandling;                                   // 0x028F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CleanupDelay;                                             // 0x0290(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0294(0x0004) MISSED OFFSET
	class AActor*                                      ActorBoundsOverride;                                      // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ActorBoundsOverrideGameTime;                              // 0x02A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDebug;                                                   // 0x02A4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDestroyWhenFinishedSpawning;                             // 0x02A5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0xA];                                       // 0x02A6(0x000A) MISSED OFFSET
	TArray<class AStartPointVolume*>                   SpawnVolumes;                                             // 0x02B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
	class UBoxComponent*                               BoxComponent;                                             // 0x02C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData04[0x30];                                      // 0x02C8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ActorSpawningVolume"));
		return ptr;
	}


	void SpawningCompleted();
	void OnChildFinishedSpawning(class UObject* Spawner);
};


// Class ProjectX.ActorStateManager
// 0x0000 (0x0230 - 0x0230)
class AActorStateManager : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ActorStateManager"));
		return ptr;
	}


	void Server_SetState(class AController* Sender, class AManagedStateActor* Actor, unsigned char State);
	void Multicast_SetState(class AController* Sender, class AManagedStateActor* Actor, unsigned char State);
};


// Class ProjectX.AdvancedCharacterMovement
// 0x0010 (0x0B60 - 0x0B50)
class UAdvancedCharacterMovement : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0B50(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AdvancedCharacterMovement"));
		return ptr;
	}


	void GetProxyMovementComponents(TArray<class UProxyMovementComponent*>* ProxyMovementComponents);
};


// Class ProjectX.ProxyMovementComponent
// 0x0010 (0x00D8 - 0x00C8)
class UProxyMovementComponent : public UActorComponent
{
public:
	class UAdvancedCharacterMovement*                  OwningComponent;                                          // 0x00C8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProxyMovementComponent"));
		return ptr;
	}


	bool IsReplay();
};


// Class ProjectX.BasicUserWidget
// 0x0010 (0x0270 - 0x0260)
class UBasicUserWidget : public UUserWidget
{
public:
	struct FTimerHandle                                WorldStatusTimer;                                         // 0x0260(0x0008) (CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bWaitForPawn;                                             // 0x0268(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bUseVisibilitySemaphore;                                  // 0x0269(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x6];                                       // 0x026A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BasicUserWidget"));
		return ptr;
	}


	void OnWorldReady();
};


// Class ProjectX.AdvancedUserWidget
// 0x0078 (0x02E8 - 0x0270)
class UAdvancedUserWidget : public UBasicUserWidget
{
public:
	bool                                               bAutoRegister;                                            // 0x0270(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCloseOtherWidgets;                                       // 0x0271(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPreventWidgetsFromOpening;                               // 0x0272(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPreventLowerPriorityWidgetsFromOpening;                  // 0x0273(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDisablesPlayerInputWhenActive;                           // 0x0274(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0275(0x0003) MISSED OFFSET
	float                                              CollapseDelay;                                            // 0x0278(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDismissableByBackInput;                                  // 0x027C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDismissableByOtherWidgets;                               // 0x027D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDestroyOnLevelTravel;                                    // 0x027E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAutoFocusWidget;                                         // 0x027F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bRestoreLastFocusedChild;                                 // 0x0280(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
	class UWidget*                                     FocusPriorityWidget;                                      // 0x0288(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUsesVirtualCursor;                                       // 0x0290(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bRestrictNavigationToWidget;                              // 0x0291(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0292(0x0006) MISSED OFFSET
	class UClass* /*UAdvancedUserWidget*/              WidgetToActivateWhenClosed;                               // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x18];                                      // 0x02A0(0x0018) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnWidgetMadeVisible;                                      // 0x02B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnWidgetWasCollapsed;                                     // 0x02C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x10];                                      // 0x02D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AdvancedUserWidget"));
		return ptr;
	}


	void ToggleWidget(TEnumAsByte<EWindowToggleCommand> ToggleCommand);
	void SetWidgetVisible();
	void OnWidgetVisible(class UObject* ContextObject);
	void OnWidgetDelayedCollapseStart(class UObject* ContextObject);
	void OnTopFaceButton();
	void OnRightFaceButton();
	void OnRightBumper();
	void OnMenuBack();
	void OnLevelTravel();
	void OnLeftFaceButton();
	void OnLeftBumper();
	void OnGamepadButtonPressed(const struct FInputEvent& InputEvent, int ControllerId);
	void OnGamepadAxisMoved(const struct FName& AxisName, int ControllerId, float Delta);
	void OnBottomFaceButton();
	void LevelTravel();
	bool IsWidgetActive();
	bool IsDismissable();
	void CollapseWidget();
	void Close();
	bool CanDisplayWidget();
	bool CanDismissWidget(EWidgetDismissType Type);
};


// Class ProjectX.AdvancedVerticalBox
// 0x0000 (0x0130 - 0x0130)
class UAdvancedVerticalBox : public UVerticalBox
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AdvancedVerticalBox"));
		return ptr;
	}


	void SortChildWidgets(TArray<class UWidget*> NewOrder);
	class UVerticalBoxSlot* InsertChildAtIndex(int Index, class UWidget* Content);
	void GetAllChildWidgets(TArray<class UWidget*>* ChildWidgets);
};


// Class ProjectX.AdvancedWidgetComponent
// 0x0040 (0x05F0 - 0x05B0)
class UAdvancedWidgetComponent : public UWidgetComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05B0(0x0010) MISSED OFFSET
	bool                                               bClampToScreen;                                           // 0x05C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	EClampType                                         ClampType;                                                // 0x05C1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x2];                                       // 0x05C2(0x0002) MISSED OFFSET
	float                                              ClampRadius;                                              // 0x05C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bHideWhenDeployScreenActive;                              // 0x05C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bPoolUserWidget;                                          // 0x05C9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x2];                                       // 0x05CA(0x0002) MISSED OFFSET
	float                                              MaxDesiredDrawDistance;                                   // 0x05CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bAutoCleanup;                                             // 0x05D0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x1F];                                      // 0x05D1(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AdvancedWidgetComponent"));
		return ptr;
	}


	void SetScreenPositionOverride(const struct FVector2D& NewScreenPosition, float OverrideStrength);
	void OnWidgetClamped(bool bIsClamped);
	void MenuToggled(class UAdvancedUserWidget* OpenedWidget, bool bToggle);
	bool IsUsingScreenPositionOverride();
	EClampType GetClampType();
	float GetClampRadius();
	static void GetAllWidgetComponentsOfClass(class UObject* WorldContextObject, class UClass* /*UAdvancedWidgetComponent*/ WidgetComponentClass, TArray<class UAdvancedWidgetComponent*>* OutWidgetComponents);
	static void CreateWidgetComponent(class AActor* Owner, const struct FTransform& Transform, class UClass* /*UWidgetComponent*/ WidgetComponentClass, class UWidgetComponent** WidgetComponent);
};


// Class ProjectX.AfflictionInstance
// 0x0130 (0x01F8 - 0x00C8)
class UAfflictionInstance : public UActorComponent
{
public:
	float                                              AfflictionDuration;                                       // 0x00C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EApplicationType                                   Type;                                                     // 0x00CC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	TArray<class UClass* /*UAfflictionInstance*/>      ChildAfflictions;                                         // 0x00D0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	int                                                Priority;                                                 // 0x00E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPerk;                                                    // 0x00E4(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnAfflictionStart;                                        // 0x00E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnAfflictionEnd;                                          // 0x00F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnInitializationHitInfoReplicated;                        // 0x0108(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	class UAfflictionComponent*                        AfflictionComponent;                                      // 0x0120(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class AActor*                                      Instigator;                                               // 0x0128(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class AProjectXCharacter*                          OwningCharacter;                                          // 0x0130(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class AProjectXVehicle*                            OwningVehicle;                                            // 0x0138(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bInitialized;                                             // 0x0140(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x17];                                      // 0x0141(0x0017) MISSED OFFSET
	struct FHitResult                                  InitializationHitInfo;                                    // 0x0158(0x008C) (CPF_Net, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0xC];                                       // 0x01E4(0x000C) MISSED OFFSET
	float                                              EffectTriggerDelayDuration;                               // 0x01F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x4];                                       // 0x01F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstance"));
		return ptr;
	}


	float TakeDamage(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
	void Start();
	void OnRep_InitializationHitInfo();
	void OnInitialization();
	void K2_Start();
	void K2_HitInfoInitialized();
	void K2_End();
	void K2_ApplyModifier();
	bool IsVisible();
	bool Initialize(class UAfflictionComponent* OwningComponent, class AActor* AfflictionInstigator);
	float GetTimeStamp();
	int GetPriority();
	class AProjectXVehicle* GetOwningVehicle();
	class AProjectXCharacter* GetOwningCharacter();
	bool GetIsEffectActive();
	class AActor* GetInstigator();
	struct FHitResult GetInitializationHitInfo();
	float GetEffectDelayDuration();
	EApplicationType GetApplicationType();
	class UAfflictionComponent* GetAfflictionComponent();
	void End(bool bIgnoreApplyModifier);
};


// Class ProjectX.AfflictionInstanceBool
// 0x0000 (0x01F8 - 0x01F8)
class UAfflictionInstanceBool : public UAfflictionInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceBool"));
		return ptr;
	}


	bool K2_GetTotalBoolModifier(bool Modifier, class UClass* /*UAfflictionInstance*/ AfflictionClass);
};


// Class ProjectX.AfflictionBlockPersonalVehicle
// 0x0008 (0x0200 - 0x01F8)
class UAfflictionBlockPersonalVehicle : public UAfflictionInstanceBool
{
public:
	bool                                               bDisableActionsModifier;                                  // 0x01F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionBlockPersonalVehicle"));
		return ptr;
	}

};


// Class ProjectX.AfflictionComponent
// 0x0030 (0x00F8 - 0x00C8)
class UAfflictionComponent : public UActorComponent
{
public:
	struct FMulticastScriptDelegate                    AfflictionAddedEvent;                                     // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    AfflictionRemovedEvent;                                   // 0x00D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class UAfflictionInstance>>  AfflictionList;                                           // 0x00E8(0x0010) (CPF_ExportObject, CPF_Net, CPF_ZeroConstructor, CPF_RepNotify, CPF_ContainsInstancedReference, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionComponent"));
		return ptr;
	}


	void ResetTimersOnAfflictionsOfType(class UClass* /*UAfflictionInstance*/ AfflictionClass, class AActor* Instigator);
	void RemoveAfflictionsByType(class UClass* /*UAfflictionInstance*/ AfflictionClass, class AActor* Instigator, bool bCallAfflictionEndEvents);
	bool RemoveAfflictionbyType(class UClass* /*UAfflictionInstance*/ AfflictionClass, class AActor* Instigator);
	void RemoveAffliction(class UAfflictionInstance* Affliction);
	void OnRep_AfflictionList();
	void InitializeAffliction(class UAfflictionInstance* Affliction, class AActor* Instigator);
	bool HasAffliction(class UClass* /*UAfflictionInstance*/ AfflictionClass, class AActor* Instigator);
	int GetNumAfflictions(class UClass* /*UAfflictionInstance*/ AfflictionClass, class AActor* Instigator);
	void Client_RemoveAfflictionsByType(class UClass* /*UAfflictionInstance*/ AfflictionClass, TArray<TWeakObjectPtr<class UAfflictionInstance>> IgnoredAfflictions, class AActor* Instigator, bool bCallAfflictionEndEvents);
	class UAfflictionInstance* AddAffliction(class UClass* /*UAfflictionInstance*/ AfflictionClass, class AActor* Instigator, bool bDeferInitialization);
};


// Class ProjectX.AfflictionInstanceFloat
// 0x0058 (0x0250 - 0x01F8)
class UAfflictionInstanceFloat : public UAfflictionInstance
{
public:
	TMap<class UPhysicalMaterial*, float>              ValueMultipliers;                                         // 0x01F8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              Value;                                                    // 0x0248(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	EStackingMethod                                    StackingMethod;                                           // 0x024C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x024D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceFloat"));
		return ptr;
	}


	float K2_GetTotalFloatModifier(float Modifier, class UClass* /*UAfflictionInstance*/ AfflictionClass);
	void GetTotalFloatModifier(class UClass* /*UAfflictionInstance*/ AfflictionClass, float* TotalModifer);
};


// Class ProjectX.AfflictionInstanceAbilityCD
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceAbilityCD : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceAbilityCD"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceAmmoPickup
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceAmmoPickup : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceAmmoPickup"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceCombatSpawn
// 0x0008 (0x0200 - 0x01F8)
class UAfflictionInstanceCombatSpawn : public UAfflictionInstanceBool
{
public:
	bool                                               bCanSpawnInCombat;                                        // 0x01F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceCombatSpawn"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceCombinedRegen
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceCombinedRegen : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceCombinedRegen"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceDamage
// 0x0008 (0x0258 - 0x0250)
class UAfflictionInstanceDamage : public UAfflictionInstanceFloat
{
public:
	bool                                               bAppliesUltimateDamageMultiplier;                         // 0x0250(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0251(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceDamage"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceDamageRes
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceDamageRes : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceDamageRes"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceDashChargeRate
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceDashChargeRate : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceDashChargeRate"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceDashCount
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceDashCount : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceDashCount"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceDashDistance
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceDashDistance : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceDashDistance"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceDashOnKill
// 0x0008 (0x0200 - 0x01F8)
class UAfflictionInstanceDashOnKill : public UAfflictionInstanceBool
{
public:
	bool                                               bResetDashesOnKill;                                       // 0x01F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceDashOnKill"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceDeployableTime
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceDeployableTime : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceDeployableTime"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceDeployDuration
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceDeployDuration : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceDeployDuration"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceDisableActions
// 0x0008 (0x0200 - 0x01F8)
class UAfflictionInstanceDisableActions : public UAfflictionInstanceBool
{
public:
	bool                                               bDisableActionsModifier;                                  // 0x01F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceDisableActions"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceDisableHook
// 0x0008 (0x0200 - 0x01F8)
class UAfflictionInstanceDisableHook : public UAfflictionInstanceBool
{
public:
	bool                                               bDisableHookshotModifier;                                 // 0x01F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceDisableHook"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceDisableJump
// 0x0008 (0x0200 - 0x01F8)
class UAfflictionInstanceDisableJump : public UAfflictionInstanceBool
{
public:
	bool                                               bDisableJumping;                                          // 0x01F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceDisableJump"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceDisableMovement
// 0x0008 (0x0200 - 0x01F8)
class UAfflictionInstanceDisableMovement : public UAfflictionInstanceBool
{
public:
	bool                                               bDisableActionsModifier;                                  // 0x01F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceDisableMovement"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceDisableRotate
// 0x0008 (0x0200 - 0x01F8)
class UAfflictionInstanceDisableRotate : public UAfflictionInstanceBool
{
public:
	bool                                               bDisableRotationModifier;                                 // 0x01F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceDisableRotate"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceDisableShields
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceDisableShields : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceDisableShields"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceDisableStamina
// 0x0008 (0x0200 - 0x01F8)
class UAfflictionInstanceDisableStamina : public UAfflictionInstanceBool
{
public:
	bool                                               bDisableStaminaRegen;                                     // 0x01F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceDisableStamina"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceDisableStealth
// 0x0008 (0x0200 - 0x01F8)
class UAfflictionInstanceDisableStealth : public UAfflictionInstanceBool
{
public:
	bool                                               bDisableStealthModifier;                                  // 0x01F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceDisableStealth"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceDisableWaterRunning
// 0x0008 (0x0200 - 0x01F8)
class UAfflictionInstanceDisableWaterRunning : public UAfflictionInstanceBool
{
public:
	bool                                               bDisableWaterRun;                                         // 0x01F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceDisableWaterRunning"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceDisableWeapons
// 0x0008 (0x0200 - 0x01F8)
class UAfflictionInstanceDisableWeapons : public UAfflictionInstanceBool
{
public:
	bool                                               bDisableActionsModifier;                                  // 0x01F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceDisableWeapons"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceDmgVsPVMod
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceDmgVsPVMod : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceDmgVsPVMod"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceDoubleKill
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceDoubleKill : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceDoubleKill"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceExploDmgResist
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceExploDmgResist : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceExploDmgResist"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceExperience
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceExperience : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceExperience"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceFriction
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceFriction : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceFriction"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceGoldenWepAmmo
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceGoldenWepAmmo : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceGoldenWepAmmo"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceGravityScale
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceGravityScale : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceGravityScale"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceGrenadeAOESize
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceGrenadeAOESize : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceGrenadeAOESize"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceGrenadeCount
// 0x0008 (0x0258 - 0x0250)
class UAfflictionInstanceGrenadeCount : public UAfflictionInstanceFloat
{
public:
	bool                                               bRefillAmmo;                                              // 0x0250(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0251(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceGrenadeCount"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceGrenadeDist
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceGrenadeDist : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceGrenadeDist"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceGroundDash
// 0x0008 (0x0200 - 0x01F8)
class UAfflictionInstanceGroundDash : public UAfflictionInstanceBool
{
public:
	bool                                               bDisableGroundedDash;                                     // 0x01F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceGroundDash"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceHealProjector
// 0x0018 (0x0268 - 0x0250)
class UAfflictionInstanceHealProjector : public UAfflictionInstanceCombinedRegen
{
public:
	float                                              HealAmountNotifyThreshold;                                // 0x0250(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0254(0x0004) MISSED OFFSET
	class UClass* /*UProjectXDamageType*/              HealingDamageType;                                        // 0x0258(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0260(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceHealProjector"));
		return ptr;
	}


	void OnOwningCharacterShieldsRepaired(float Amount, float Health, bool bFromPassiveRegen);
	void OnOwningCharacterHealed(float Amount, float Health, bool bFromPassiveRegen);
};


// Class ProjectX.AfflictionInstanceHealthPickUp
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceHealthPickUp : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceHealthPickUp"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceHealthRegen
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceHealthRegen : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceHealthRegen"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceHookShotRange
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceHookShotRange : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceHookShotRange"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceHookshotSpeed
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceHookshotSpeed : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceHookshotSpeed"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceJetpackDrain
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceJetpackDrain : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceJetpackDrain"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceJumpCount
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceJumpCount : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceJumpCount"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceJumpHeight
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceJumpHeight : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceJumpHeight"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceMaxHealth
// 0x0008 (0x0258 - 0x0250)
class UAfflictionInstanceMaxHealth : public UAfflictionInstanceFloat
{
public:
	bool                                               bSetHealthToMaxHealth;                                    // 0x0250(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0251(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceMaxHealth"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceMaxShields
// 0x0008 (0x0258 - 0x0250)
class UAfflictionInstanceMaxShields : public UAfflictionInstanceFloat
{
public:
	bool                                               bSetShieldsToMaxShields;                                  // 0x0250(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0251(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceMaxShields"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceMeleeAtkDmg
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceMeleeAtkDmg : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceMeleeAtkDmg"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceMeleeAtkRange
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceMeleeAtkRange : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceMeleeAtkRange"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceMeleeDamage
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceMeleeDamage : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceMeleeDamage"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceMeleeRange
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceMeleeRange : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceMeleeRange"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceMovement
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceMovement : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceMovement"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceOvercharge
// 0x0008 (0x0200 - 0x01F8)
class UAfflictionInstanceOvercharge : public UAfflictionInstanceBool
{
public:
	bool                                               bAllowOverchargingShields;                                // 0x01F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceOvercharge"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceOvershield
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceOvershield : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceOvershield"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstancePassiveRegen
// 0x0008 (0x0200 - 0x01F8)
class UAfflictionInstancePassiveRegen : public UAfflictionInstanceBool
{
public:
	bool                                               bDisablePassiveRegen;                                     // 0x01F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstancePassiveRegen"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstancePVCooldown
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstancePVCooldown : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstancePVCooldown"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceRedeploySpeed
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceRedeploySpeed : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceRedeploySpeed"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceRepair
// 0x0010 (0x0260 - 0x0250)
class UAfflictionInstanceRepair : public UAfflictionInstanceHealthRegen
{
public:
	float                                              RepairBonusTriggerThreshold;                              // 0x0250(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0254(0x0004) MISSED OFFSET
	class UClass* /*UProjectXDamageType*/              HealingDamageType;                                        // 0x0258(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceRepair"));
		return ptr;
	}


	void AfflictionTargetHealed(float Amount, float Health, bool bFromPassiveRegen);
};


// Class ProjectX.AfflictionInstanceShieldRegBool
// 0x0008 (0x0200 - 0x01F8)
class UAfflictionInstanceShieldRegBool : public UAfflictionInstanceBool
{
public:
	bool                                               bEnablePassiveShieldRegen;                                // 0x01F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceShieldRegBool"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceShieldRegen
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceShieldRegen : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceShieldRegen"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceShieldRgnRate
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceShieldRgnRate : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceShieldRgnRate"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceSpotDistance
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceSpotDistance : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceSpotDistance"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceVisibility
// 0x0008 (0x0200 - 0x01F8)
class UAfflictionInstanceVisibility : public UAfflictionInstanceBool
{
public:
	bool                                               bVisible;                                                 // 0x01F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceVisibility"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceSpotted
// 0x0000 (0x0200 - 0x0200)
class UAfflictionInstanceSpotted : public UAfflictionInstanceVisibility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceSpotted"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceStaminaRegen
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceStaminaRegen : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceStaminaRegen"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceStealth
// 0x01C0 (0x03C0 - 0x0200)
class UAfflictionInstanceStealth : public UAfflictionInstanceVisibility
{
public:
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x0200(0x01B0) MISSED OFFSET
	float                                              UnequipDuration;                                          // 0x03B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0xC];                                       // 0x03B4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceStealth"));
		return ptr;
	}


	void StartUncloakTimer();
	void DisableAffliction();
	void BeginDisableCloak();
};


// Class ProjectX.AfflictionInstanceStrafeSpeed
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceStrafeSpeed : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceStrafeSpeed"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceTicketRewards
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceTicketRewards : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceTicketRewards"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceTripleKill
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceTripleKill : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceTripleKill"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceUltAbilityCD
// 0x0000 (0x0250 - 0x0250)
class UAfflictionInstanceUltAbilityCD : public UAfflictionInstanceFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceUltAbilityCD"));
		return ptr;
	}

};


// Class ProjectX.AfflictionInstanceWeaponFireBlock
// 0x0000 (0x01F8 - 0x01F8)
class UAfflictionInstanceWeaponFireBlock : public UAfflictionInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionInstanceWeaponFireBlock"));
		return ptr;
	}

};


// Class ProjectX.AfflictionOverlapComponent
// 0x00A0 (0x02C0 - 0x0220)
class UAfflictionOverlapComponent : public USceneComponent
{
public:
	int                                                TeamOwner;                                                // 0x0220(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsOverlapActive;                                         // 0x0224(0x0001) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0225(0x0003) MISSED OFFSET
	class UClass* /*UAfflictionInstance*/              AfflictionToApplyFriendlies;                              // 0x0228(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UAfflictionInstance*/              AfflictionToApplyNeutrals;                                // 0x0230(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UAfflictionInstance*/              AfflictionToApplyEnemies;                                 // 0x0238(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bTargetVehicleOccupants;                                  // 0x0240(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bAlsoApplyToVehicle;                                      // 0x0241(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x7E];                                      // 0x0242(0x007E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionOverlapComponent"));
		return ptr;
	}


	void ToggleVolume(bool bToggle);
	void OnRep_TeamOwner();
	void OnRep_IsOverlapActive();
	void OnPendingCharacterPlayerStateReady(class APlayerState* PlayerState, class AProjectXCharacter* Character);
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapedVehiclePassengerChanged(class AProjectXVehicle* Vehicle, class UVehicleSeatComponent* Seat, class AProjectXCharacter* PreviousPassenger);
	void OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	bool GetVolumeActiveState();
};


// Class ProjectX.WeaponInstanceActor
// 0x0020 (0x0250 - 0x0230)
class AWeaponInstanceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0230(0x0010) MISSED OFFSET
	class APlayerState*                                PlayerOwner;                                              // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UWeaponInstance*/                  OwningWeaponClass;                                        // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.WeaponInstanceActor"));
		return ptr;
	}


	bool IsLocallyOwned();
	class APlayerState* GetPlayerOwner();
	class UWeaponComponent* GetOwningWeaponComponent();
	class UClass* /*UWeaponInstance*/ GetOwningWeaponClass();
	class AProjectXCharacter* GetOwningPawn(class AProjectXPlayerController* OverrideController);
};


// Class ProjectX.Deployable
// 0x02C0 (0x0510 - 0x0250)
class ADeployable : public AWeaponInstanceActor
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0250(0x0100) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnDeploymentBegin;                                        // 0x0350(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnDeploymentComplete;                                     // 0x0360(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnDeployableComplete;                                     // 0x0370(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnDeployableLifeTimeStarted;                              // 0x0380(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	EDeployableState                                   DeployState;                                              // 0x0390(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	class UAfflictionComponent*                        AfflictionComponent;                                      // 0x0398(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bTargetable;                                              // 0x03A0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bArmored;                                                 // 0x03A1(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03A2(0x0002) MISSED OFFSET
	float                                              MaxHealth;                                                // 0x03A4(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Health;                                                   // 0x03A8(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LifeTimeDurationStartTime;                                // 0x03AC(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bBlocksExplosionDamage;                                   // 0x03B0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EDeployableCategory                                DeployableCategory;                                       // 0x03B1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAutoDeploy;                                              // 0x03B2(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x1];                                       // 0x03B3(0x0001) MISSED OFFSET
	float                                              DeployTime;                                               // 0x03B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DeployableLifeTime;                                       // 0x03B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	struct FTransform                                  DeployTransform;                                          // 0x03C0(0x0030) (CPF_Net, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bHealthDuringDeploy;                                      // 0x03F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03F1(0x0003) MISSED OFFSET
	float                                              DeployableStartingHealth;                                 // 0x03F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LastDamageTime;                                           // 0x03F8(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UTexture2D>                   DeployableIcon;                                           // 0x0400(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsDead;                                                  // 0x0428(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0429(0x0003) MISSED OFFSET
	float                                              DiedEffectDuration;                                       // 0x042C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FText                                       DeployableName;                                           // 0x0430(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	bool                                               bDestroyImmediatelyOnDeath;                               // 0x0448(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCanBeLockedOn;                                           // 0x0449(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCanBeRepaired;                                           // 0x044A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData08[0x1];                                       // 0x044B(0x0001) MISSED OFFSET
	float                                              MaxLockOnRange;                                           // 0x044C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   LockOnScreenPercentage;                                   // 0x0450(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SpottingZOffset;                                          // 0x0458(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData09[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UTexture2D>                   DeployableMapIcon;                                        // 0x0460(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>                   DeployableHudIcon;                                        // 0x0488(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>                   DeployableRadarIcon;                                      // 0x04B0(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData10[0x38];                                      // 0x04D8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.Deployable"));
		return ptr;
	}


	void UpdateState(EDeployableState NewDeployState);
	void SetDeployTransform(const struct FTransform& Transform);
	void OnTeamsChanged(class AProjectXPlayerState* PlayerState, unsigned char Team);
	void OnRep_StateChanged();
	void OnRep_LifeTimeDurationStart();
	void OnRep_Health(float PreviousHealth);
	void OnRep_DeployTransform();
	void OnDeployStart();
	void OnDeployReActivated();
	void OnDeployDeactivated();
	void OnDeployComplete();
	void OnDeployableDied();
	void Multicast_Reliable_Died(float Damage, const struct FDamageEvent& DamageEvent, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState);
	bool IsDeploying();
	bool IsDeployed();
	void InitializeForTeam(int Team);
	void Init();
	float GetTimeUntilDeploy();
	float GetLifeTimeDurationStartTime();
	EDeployableState GetDeployableState();
	struct FText GetDeployableName();
	TSoftObjectPtr<class UTexture2D> GetDeployableIcon();
	EDeployableCategory GetDeployableCategory();
	static TArray<class ADeployable*> GetAllDeployablesForActor(class AActor* Actor, EDeployableCategory CategoryFilter, class UClass* /*ADeployable*/ DeployableFilter);
	void DeployStart(bool bForce);
	void DeactivateDeployable();
	void ClearDeployable();
	void ActivateDeployable();
};


// Class ProjectX.AfflictionRegion
// 0x0010 (0x0520 - 0x0510)
class AAfflictionRegion : public ADeployable
{
public:
	class UClass* /*UAfflictionInstance*/              AfflictionToApplyFriendlies;                              // 0x0510(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UAfflictionInstance*/              AfflictionToApplyEnemies;                                 // 0x0518(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionRegion"));
		return ptr;
	}

};


// Class ProjectX.AfflictionVolume
// 0x0020 (0x00E8 - 0x00C8)
class UAfflictionVolume : public UActorComponent
{
public:
	float                                              AfflictionRadius;                                         // 0x00C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AfflictionApplicationMaximumHeight;                       // 0x00CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UAfflictionInstance*/              AfflictionToApplyFriendlies;                              // 0x00D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UAfflictionInstance*/              AfflictionToApplyNeutrals;                                // 0x00D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UAfflictionInstance*/              AfflictionToApplyEnemies;                                 // 0x00E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AfflictionVolume"));
		return ptr;
	}

};


// Class ProjectX.AimSphereComponent
// 0x0000 (0x0480 - 0x0480)
class UAimSphereComponent : public USphereComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AimSphereComponent"));
		return ptr;
	}

};


// Class ProjectX.AllOutWarfareObjectiveInterface
// 0x0000 (0x0028 - 0x0028)
class UAllOutWarfareObjectiveInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AllOutWarfareObjectiveInterface"));
		return ptr;
	}


	void SetObjectiveTeam();
	int GetObjectiveTeam();
	int GetObjectiveSortOrder();
	float GetObjectiveMaxHealth();
	float GetObjectiveHealth();
	bool GetIsObjectiveProperlyInitialized();
	bool GetIsObjectiveDead();
};


// Class ProjectX.AmbianceComponent
// 0x0048 (0x0110 - 0x00C8)
class UAmbianceComponent : public UActorComponent
{
public:
	struct FVector2D                                   RandomSoundPlayDistance;                                  // 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   RandomSoundPlayDelay;                                     // 0x00D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USoundBase*                                  AmbianceLooping;                                          // 0x00D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class USoundBase*>                          AmbianceOneShots;                                         // 0x00E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bIgnoreIfSameLoopingSound;                                // 0x00F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bOverrideDefaultAmbiance;                                 // 0x00F1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00F2(0x0006) MISSED OFFSET
	class UAudioComponent*                             AmbianceLoopingComponent;                                 // 0x00F8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
	class APawn*                                       AmbianceCenter;                                           // 0x0108(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AmbianceComponent"));
		return ptr;
	}


	void OnAmbianceRegionExit(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnAmbianceRegionEnter(class AActor* OverlappedActor, class AActor* OtherActor);
};


// Class ProjectX.AnimNotify_CameraShake
// 0x0028 (0x0060 - 0x0038)
class UAnimNotify_CameraShake : public UAnimNotify
{
public:
	class UClass* /*UCameraShakeBase*/                 ShakeConfiguration;                                       // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ShakeMultiplier;                                          // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TightAimShakeMultiplier;                                  // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bWorldShake;                                              // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              ShakeInnerRadius;                                         // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ShakeOuterRadius;                                         // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       ShakeSocket;                                              // 0x0054(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AnimNotify_CameraShake"));
		return ptr;
	}

};


// Class ProjectX.AnimNotify_Footstep
// 0x0010 (0x0048 - 0x0038)
class UAnimNotify_Footstep : public UAnimNotify
{
public:
	struct FName                                       AttachName;                                               // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EFootstepType                                      FootstepType;                                             // 0x0040(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              MaxDrawDistance;                                          // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AnimNotify_Footstep"));
		return ptr;
	}

};


// Class ProjectX.AnimNotify_PlayParticleEffectAny
// 0x0010 (0x00A0 - 0x0090)
class UAnimNotify_PlayParticleEffectAny : public UAnimNotify_PlayParticleEffect
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AnimNotify_PlayParticleEffectAny"));
		return ptr;
	}

};


// Class ProjectX.AnimNotify_PlayWeaponSound
// 0x0010 (0x0068 - 0x0058)
class UAnimNotify_PlayWeaponSound : public UAnimNotify_PlaySound
{
public:
	class UCurveFloat*                                 PitchInfluenceOverHeat;                                   // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              PreviewCurveValue;                                        // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AnimNotify_PlayWeaponSound"));
		return ptr;
	}

};


// Class ProjectX.AnimNotifyState_Melee
// 0x0048 (0x0078 - 0x0030)
class UAnimNotifyState_Melee : public UAnimNotifyState
{
public:
	struct FName                                       HitBoxSocketName;                                         // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     HitBoxOffset;                                             // 0x0038(0x000C) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    HitBoxRotation;                                           // 0x0044(0x000C) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	EHitBoxShape                                       Shape;                                                    // 0x0050(0x0001) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FVector                                     HitBoxExtent;                                             // 0x0054(0x000C) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDebugHitbox;                                             // 0x0060(0x0001) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDebugPersistentLines;                                    // 0x0061(0x0001) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0062(0x0002) MISSED OFFSET
	float                                              NotifyDuration;                                           // 0x0064(0x0004) (CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              NotifyElapsed;                                            // 0x0068(0x0004) (CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0xC];                                       // 0x006C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AnimNotifyState_Melee"));
		return ptr;
	}

};


// Class ProjectX.AnnouncerSoundDataAsset
// 0x0050 (0x0080 - 0x0030)
class UAnnouncerSoundDataAsset : public UDataAsset
{
public:
	TMap<struct FString, struct FVoiceTrackInfo>       AnnouncerMap;                                             // 0x0030(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AnnouncerSoundDataAsset"));
		return ptr;
	}

};


// Class ProjectX.AnnouncerSubsystem
// 0x0070 (0x00A0 - 0x0030)
class UAnnouncerSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FVoiceTrackInfo                             CurrentVoiceInfo;                                         // 0x0040(0x0038) (CPF_Protected, CPF_NativeAccessSpecifierProtected)
	class UAudioComponent*                             ActiveVoiceAudioComponent;                                // 0x0078(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UDialogueWidget*                             UserWidget;                                               // 0x0080(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0088(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AnnouncerSubsystem"));
		return ptr;
	}


	void PlayVoice(const struct FString& VoiceToPlay);
	void PlayNextQueuedVoice();
	void OnStartedTalking(TArray<struct FSubtitleCue> Subtitles, float CueDuration);
};


// Class ProjectX.AssaultPoint
// 0x0190 (0x03C0 - 0x0230)
class AAssaultPoint : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0230(0x0030) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnAssaultPointDestroyedEvent;                             // 0x0260(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnAssaultPointInfoChanged;                                // 0x0270(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnAssaultPointBombTargetChangedEvent;                     // 0x0280(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	int                                                SortOrder;                                                // 0x0290(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                DefaultTeam;                                              // 0x0294(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FAssaultPointInfo                           AssaultPointInfo;                                         // 0x0298(0x0003) (CPF_Net, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x55];                                      // 0x029B(0x0055) MISSED OFFSET
	TMap<EAssaultRole, class AStartPointVolume*>       StartPointVolumes;                                        // 0x02F0(0x0050) (CPF_Edit, CPF_DisableEditOnTemplate, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<EAssaultRole, struct FAssaultPointSoftBoundariesLink> LinkedSoftBoundaries;                                     // 0x0340(0x0050) (CPF_Edit, CPF_DisableEditOnTemplate, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FText                                       PointName;                                                // 0x0390(0x0018) (CPF_Edit, CPF_DisableEditOnTemplate, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	class AAssaultPointDestructible*                   DestroyableTarget;                                        // 0x03A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                AssaultPointPhase;                                        // 0x03B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bLocked;                                                  // 0x03B4(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03B5(0x0003) MISSED OFFSET
	class UCapsuleComponent*                           Capsule;                                                  // 0x03B8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AssaultPoint"));
		return ptr;
	}


	void OnTeamOwnerChanged();
	void OnTargetDestroyed(class AAssaultPointDestructible* ActorDestroyed);
	void OnRep_AssaultPointInfo();
	void OnPhaseUpdated(int NewPhase, int PreviousPhase);
	void OnAssaultPointDestroyed();
	bool IsLocked();
	bool IsDestroyed();
	bool IsActiveTarget();
	int GetSortOrder();
	struct FText GetPointName();
	unsigned char GetPhase();
	class AAssaultPointDestructible* GetDestructionPoint();
	struct FAssaultPointInfo GetAssaultPointInfo();
	void GatherDestructiblePoints();
};


// Class ProjectX.AssaultPointDestructible
// 0x00A8 (0x02D8 - 0x0230)
class AAssaultPointDestructible : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0230(0x0010) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnDestructibleDestroyedEvent;                             // 0x0240(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnDamageTaken;                                            // 0x0250(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnBombStateUpdated;                                       // 0x0260(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UAfflictionInstance*/              InteractionAffliction;                                    // 0x0270(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FText                                       BombPlantText;                                            // 0x0278(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FText                                       BombDisarmText;                                           // 0x0290(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	int                                                TeamOwner;                                                // 0x02A8(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDestroyed;                                               // 0x02AC(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bActive;                                                  // 0x02AD(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x2];                                       // 0x02AE(0x0002) MISSED OFFSET
	float                                              BombFuseTime;                                             // 0x02B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FBombInfo                                   BombInfo;                                                 // 0x02B4(0x0010) (CPF_Net, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0xC];                                       // 0x02C4(0x000C) MISSED OFFSET
	class UInteractableComponent*                      InteractableComponent;                                    // 0x02D0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AssaultPointDestructible"));
		return ptr;
	}


	void OnValidInteractionTargetUpdated(class APlayerController* Sender, bool bValidInteraction);
	void OnTeamUpdated(int NewTeam);
	void OnSelected(class APlayerController* Sender, class UPrimitiveComponent* Component);
	void OnRep_Team();
	void OnRep_Destroyed();
	void OnRep_BombInfo();
	void OnHoldStopped(class APlayerController* Sender, class UPrimitiveComponent* Component);
	void OnHoldStarted(class APlayerController* Sender, class UPrimitiveComponent* Component);
	void OnDestructibleDestroyed();
	void Multicast_DestroyPoint();
	bool IsDestroyed();
	bool IsBombPlanted();
	bool IsActivePoint();
	float GetFuseTime();
	struct FBombInfo GetBombInfo();
};


// Class ProjectX.AutoPanner
// 0x0018 (0x0138 - 0x0120)
class UAutoPanner : public UContentWidget
{
public:
	struct FVector2D                                   PaddingScale;                                             // 0x0120(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0128(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AutoPanner"));
		return ptr;
	}


	struct FVector2D GetNormalizedCursorPosition();
};


// Class ProjectX.AutoPickupVolume
// 0x0028 (0x00F0 - 0x00C8)
class UAutoPickupVolume : public UActorComponent
{
public:
	struct FMulticastScriptDelegate                    OnActiveStatusUpdatedEvent;                               // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	float                                              AutoPickupRadius;                                         // 0x00D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AutoPickupMaximumHeight;                                  // 0x00DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class UClass* /*APickup*/>                  PickupClasses;                                            // 0x00E0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.AutoPickupVolume"));
		return ptr;
	}

};


// Class ProjectX.BISCullDistanceVolume
// 0x0000 (0x0230 - 0x0230)
class ABISCullDistanceVolume : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BISCullDistanceVolume"));
		return ptr;
	}


	static void RemoveRateLimitedParticleSystem(class UFXSystemComponent* ParticleSystem);
	static void RemoveFromIgnoreList(class UFXSystemComponent* ParticleSystem);
	static void AddToIgnoreParticlesList(class UFXSystemComponent* ParticleSystem);
	static void AddRateLimitedParticleSystem(class UFXSystemComponent* ParticleSystem);
};


// Class ProjectX.BISSkeletalMeshComponent
// 0x0010 (0x0F40 - 0x0F30)
class UBISSkeletalMeshComponent : public USkeletalMeshComponentBudgeted
{
public:
	bool                                               bDisableTickOnDeploy;                                     // 0x0F30(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0F31(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BISSkeletalMeshComponent"));
		return ptr;
	}


	void MenuToggled(class UAdvancedUserWidget* Widget, bool bToggle);
};


// Class ProjectX.Broadcaster
// 0x0000 (0x0230 - 0x0230)
class ABroadcaster : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.Broadcaster"));
		return ptr;
	}

};


// Class ProjectX.BroadcastMessage
// 0x0000 (0x0028 - 0x0028)
class UBroadcastMessage : public ULocalMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BroadcastMessage"));
		return ptr;
	}


	static void SendServerMessage(class APlayerController* PlayerController, class UClass* /*ULocalMessage*/ Message, int Data, class APlayerState* PlayerStateA, class APlayerState* PlayerStateB, class UObject* Object);
	void ReceiveMessage(class AProjectXPlayerController* PlayerController, int Data, class APlayerState* PlayerStateA, class APlayerState* PlayerStateB, class UObject* Object);
	void K2_ReceiveMessage(class AProjectXPlayerController* PlayerController, int Data, class APlayerState* PlayerStateA, class APlayerState* PlayerStateB, class UObject* Object);
	static void BroadcastServerMessage(class UObject* WorldContextObject, class UClass* /*ULocalMessage*/ Message, int Data, class APlayerState* PlayerStateA, class APlayerState* PlayerStateB, class UObject* Object);
};


// Class ProjectX.BroadcastMessageAssaultPoint
// 0x0000 (0x0028 - 0x0028)
class UBroadcastMessageAssaultPoint : public UBroadcastMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BroadcastMessageAssaultPoint"));
		return ptr;
	}

};


// Class ProjectX.BroadcastMessageCapturePoint
// 0x0000 (0x0028 - 0x0028)
class UBroadcastMessageCapturePoint : public UBroadcastMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BroadcastMessageCapturePoint"));
		return ptr;
	}

};


// Class ProjectX.BroadcastMessageChallenge
// 0x0000 (0x0028 - 0x0028)
class UBroadcastMessageChallenge : public UBroadcastMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BroadcastMessageChallenge"));
		return ptr;
	}

};


// Class ProjectX.BroadcastMessageComponent
// 0x0008 (0x0030 - 0x0028)
class UBroadcastMessageComponent : public UBroadcastMessage
{
public:
	class UClass* /*UActorComponent*/                  ComponentClass;                                           // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BroadcastMessageComponent"));
		return ptr;
	}

};


// Class ProjectX.BroadcastMessageExperienceEvent
// 0x0000 (0x0028 - 0x0028)
class UBroadcastMessageExperienceEvent : public UBroadcastMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BroadcastMessageExperienceEvent"));
		return ptr;
	}

};


// Class ProjectX.BroadcastMessageFlagEvent
// 0x0000 (0x0030 - 0x0030)
class UBroadcastMessageFlagEvent : public UBroadcastMessageComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BroadcastMessageFlagEvent"));
		return ptr;
	}

};


// Class ProjectX.BroadcastMessageKingOfTheHill
// 0x0000 (0x0028 - 0x0028)
class UBroadcastMessageKingOfTheHill : public UBroadcastMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BroadcastMessageKingOfTheHill"));
		return ptr;
	}

};


// Class ProjectX.BroadcastMessageParticle
// 0x0010 (0x0038 - 0x0028)
class UBroadcastMessageParticle : public UBroadcastMessage
{
public:
	TArray<class UParticleSystem*>                     ParticleSystemList;                                       // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BroadcastMessageParticle"));
		return ptr;
	}

};


// Class ProjectX.BroadcastMessagePlayerKill
// 0x0000 (0x0028 - 0x0028)
class UBroadcastMessagePlayerKill : public UBroadcastMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BroadcastMessagePlayerKill"));
		return ptr;
	}

};


// Class ProjectX.BroadcastMessagePlayerKillHS
// 0x0000 (0x0028 - 0x0028)
class UBroadcastMessagePlayerKillHS : public UBroadcastMessagePlayerKill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BroadcastMessagePlayerKillHS"));
		return ptr;
	}

};


// Class ProjectX.BroadcastMessageQuickChatEvent
// 0x0000 (0x0028 - 0x0028)
class UBroadcastMessageQuickChatEvent : public UBroadcastMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BroadcastMessageQuickChatEvent"));
		return ptr;
	}

};


// Class ProjectX.BroadcastMessageUltimate
// 0x0000 (0x0028 - 0x0028)
class UBroadcastMessageUltimate : public UBroadcastMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BroadcastMessageUltimate"));
		return ptr;
	}

};


// Class ProjectX.BroadcastMessageVIPEvent
// 0x0000 (0x0030 - 0x0030)
class UBroadcastMessageVIPEvent : public UBroadcastMessageComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BroadcastMessageVIPEvent"));
		return ptr;
	}

};


// Class ProjectX.BTDecorator_BlackboardChanged
// 0x0058 (0x00E8 - 0x0090)
class UBTDecorator_BlackboardChanged : public UBTDecorator_BlackboardBase
{
public:
	float                                              ResetTime;                                                // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x54];                                      // 0x0094(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BTDecorator_BlackboardChanged"));
		return ptr;
	}

};


// Class ProjectX.BTDecorator_Tick
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_Tick : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BTDecorator_Tick"));
		return ptr;
	}

};


// Class ProjectX.BTDecorator_BlackboardObjectIsValid
// 0x0028 (0x0090 - 0x0068)
class UBTDecorator_BlackboardObjectIsValid : public UBTDecorator_Tick
{
public:
	struct FBlackboardKeySelector                      BlackboardKeyTargetComparison;                            // 0x0068(0x0028) (CPF_Edit, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BTDecorator_BlackboardObjectIsValid"));
		return ptr;
	}

};


// Class ProjectX.BTDecorator_HasVisibilityInRange
// 0x00B8 (0x0120 - 0x0068)
class UBTDecorator_HasVisibilityInRange : public UBTDecorator_Tick
{
public:
	bool                                               bInvertVisibilityCheck;                                   // 0x0068(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bInvertRangeCheck;                                        // 0x0069(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bSkipMinRangeCheck;                                       // 0x006A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x006B(0x0005) MISSED OFFSET
	struct FBlackboardKeySelector                      BlackboardKeyTargetComparison;                            // 0x0070(0x0028) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BlackboardKeyRangeMin;                                    // 0x0098(0x0028) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BlackboardKeyRangeMax;                                    // 0x00C0(0x0028) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BlackboardKeyVisibilityExtent;                            // 0x00E8(0x0028) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	float                                              Padding;                                                  // 0x0110(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0114(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BTDecorator_HasVisibilityInRange"));
		return ptr;
	}

};


// Class ProjectX.BTDecorator_HasVisibilityInRangeToTarget
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_HasVisibilityInRangeToTarget : public UBTDecorator_Tick
{
public:
	bool                                               bInvertVisibilityCheck;                                   // 0x0068(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bInvertRangeCheck;                                        // 0x0069(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bSkipMinRangeCheck;                                       // 0x006A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x006B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BTDecorator_HasVisibilityInRangeToTarget"));
		return ptr;
	}

};


// Class ProjectX.BTDecorator_IsAlly
// 0x0000 (0x0090 - 0x0090)
class UBTDecorator_IsAlly : public UBTDecorator_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BTDecorator_IsAlly"));
		return ptr;
	}

};


// Class ProjectX.BTDecorator_RandomChance
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_RandomChance : public UBTDecorator
{
public:
	float                                              Chance;                                                   // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BTDecorator_RandomChance"));
		return ptr;
	}

};


// Class ProjectX.BTService_UpdateMoveWaypoint
// 0x0028 (0x0098 - 0x0070)
class UBTService_UpdateMoveWaypoint : public UBTService
{
public:
	struct FBlackboardKeySelector                      BlackboardWaypointTargetLocation;                         // 0x0070(0x0028) (CPF_Edit, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BTService_UpdateMoveWaypoint"));
		return ptr;
	}

};


// Class ProjectX.BTTask_FireWeapon
// 0x0060 (0x00D0 - 0x0070)
class UBTTask_FireWeapon : public UBTTaskNode
{
public:
	bool                                               bAltFire;                                                 // 0x0070(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPrimaryFire;                                             // 0x0071(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHoldFire;                                                // 0x0072(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0073(0x0001) MISSED OFFSET
	struct FVector2D                                   FireDelay;                                                // 0x0074(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x54];                                      // 0x007C(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BTTask_FireWeapon"));
		return ptr;
	}


	void ReloadStop(class UWeaponComponent* WeaponComponent);
	void ReloadStart(class UWeaponComponent* WeaponComponent);
};


// Class ProjectX.BTTask_GetPointBetweenTwoPoints
// 0x0080 (0x00F0 - 0x0070)
class UBTTask_GetPointBetweenTwoPoints : public UBTTaskNode
{
public:
	float                                              InterpPercentage;                                         // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      BlackboardKeyOriginQuery;                                 // 0x0078(0x0028) (CPF_Edit, CPF_NativeAccessSpecifierPrivate)
	struct FBlackboardKeySelector                      BlackboardKeyEndingPointQuery;                            // 0x00A0(0x0028) (CPF_Edit, CPF_NativeAccessSpecifierPrivate)
	struct FBlackboardKeySelector                      BlackboardKeyTargetDestination;                           // 0x00C8(0x0028) (CPF_Edit, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BTTask_GetPointBetweenTwoPoints"));
		return ptr;
	}

};


// Class ProjectX.BTTask_GetPointInFrontOf
// 0x0058 (0x00C8 - 0x0070)
class UBTTask_GetPointInFrontOf : public UBTTaskNode
{
public:
	float                                              Distance;                                                 // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      BlackboardKeyOriginQuery;                                 // 0x0078(0x0028) (CPF_Edit, CPF_NativeAccessSpecifierPrivate)
	struct FBlackboardKeySelector                      BlackboardKeyTargetDestination;                           // 0x00A0(0x0028) (CPF_Edit, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BTTask_GetPointInFrontOf"));
		return ptr;
	}

};


// Class ProjectX.BTTask_GetRandomPointInSphere
// 0x0058 (0x00C8 - 0x0070)
class UBTTask_GetRandomPointInSphere : public UBTTaskNode
{
public:
	float                                              Radius;                                                   // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      BlackboardKeyOriginQuery;                                 // 0x0078(0x0028) (CPF_Edit, CPF_NativeAccessSpecifierPrivate)
	struct FBlackboardKeySelector                      BlackboardKeyTargetDestination;                           // 0x00A0(0x0028) (CPF_Edit, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BTTask_GetRandomPointInSphere"));
		return ptr;
	}

};


// Class ProjectX.BTTask_PickTarget
// 0x0008 (0x0078 - 0x0070)
class UBTTask_PickTarget : public UBTTaskNode
{
public:
	EAcquireTargetType                                 SearchType;                                               // 0x0070(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BTTask_PickTarget"));
		return ptr;
	}

};


// Class ProjectX.BTTask_ProjectXMoveTo
// 0x0008 (0x00B8 - 0x00B0)
class UBTTask_ProjectXMoveTo : public UBTTask_MoveTo
{
public:
	bool                                               bFireWeaponWhileMoving;                                   // 0x00B0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	int                                                GiveUpFailCount;                                          // 0x00B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BTTask_ProjectXMoveTo"));
		return ptr;
	}


	void ReloadStop(class UWeaponComponent* WeaponComponent);
	void ReloadStart(class UWeaponComponent* WeaponComponent);
};


// Class ProjectX.BTTask_SetBlackboardKey
// 0x0030 (0x00A0 - 0x0070)
class UBTTask_SetBlackboardKey : public UBTTaskNode
{
public:
	bool                                               Value;                                                    // 0x0070(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0078(0x0028) (CPF_Edit, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BTTask_SetBlackboardKey"));
		return ptr;
	}

};


// Class ProjectX.BTTask_SwitchWeapons
// 0x0008 (0x0078 - 0x0070)
class UBTTask_SwitchWeapons : public UBTTaskNode
{
public:
	EEquipSlot                                         NewWeapon;                                                // 0x0070(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BTTask_SwitchWeapons"));
		return ptr;
	}

};


// Class ProjectX.BTTask_UpdateMoveWaypoint
// 0x0028 (0x0098 - 0x0070)
class UBTTask_UpdateMoveWaypoint : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BlackboardWaypointTargetLocation;                         // 0x0070(0x0028) (CPF_Edit, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BTTask_UpdateMoveWaypoint"));
		return ptr;
	}

};


// Class ProjectX.CapturePoint
// 0x0280 (0x04B0 - 0x0230)
class ACapturePoint : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0230(0x0030) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnControlPointOwnerChanged;                               // 0x0260(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnCaptureInfoChanged;                                     // 0x0270(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnCapturePointLockChangedEvent;                           // 0x0280(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPointBeingClaimedEvent;                                 // 0x0290(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    StopTrackingCapturePointEvent;                            // 0x02A0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	int                                                DefaultTeam;                                              // 0x02B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02B4(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UTexture2D>                   RadarIcon;                                                // 0x02B8(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RadarIconOpacity;                                         // 0x02E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bRegisterOnBeginPlay;                                     // 0x02E4(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsTrackableWhenLocked;                                   // 0x02E5(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x2];                                       // 0x02E6(0x0002) MISSED OFFSET
	TSet<unsigned char>                                ValidCaptureTeams;                                        // 0x02E8(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              LockedScoringWeight;                                      // 0x0338(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ControlPointDistanceScoringWeight;                        // 0x033C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CaptureDecayRate;                                         // 0x0340(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxSpawnPointSearchDistance;                              // 0x0344(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MinSpawnPointSearchDistance;                              // 0x0348(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                SortOrder;                                                // 0x034C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x0350(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<class AStartPointVolume*>                   StartPointVolumes;                                        // 0x0358(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FText                                       PointName;                                                // 0x0368(0x0018) (CPF_Edit, CPF_DisableEditOnTemplate, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class UClass* /*UAfflictionInstance*/>      InvalidAfflictionClasses;                                 // 0x0380(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_UObjectWrapper, CPF_NativeAccessSpecifierProtected)
	bool                                               bIgnoreTeamWhenSpawning;                                  // 0x0390(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bResetOnLocked;                                           // 0x0391(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0392(0x0002) MISSED OFFSET
	float                                              DelayActivationTime;                                      // 0x0394(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TMap<EXPEventType, class UClass* /*UExperienceEvent*/> ExperienceEventOverrides;                                 // 0x0398(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_UObjectWrapper, CPF_NativeAccessSpecifierProtected)
	bool                                               bLocked;                                                  // 0x03E8(0x0001) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03E9(0x0003) MISSED OFFSET
	int                                                TeamOwner;                                                // 0x03EC(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FCaptureInfo                                CaptureInfo;                                              // 0x03F0(0x0014) (CPF_Net, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	TArray<TWeakObjectPtr<class AProjectXCharacter>>   PlayerOccupants;                                          // 0x0408(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_UObjectWrapper, CPF_NativeAccessSpecifierProtected)
	TArray<class AActor*>                              PlayerStartList;                                          // 0x0418(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData06[0x88];                                      // 0x0428(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.CapturePoint"));
		return ptr;
	}


	void UpdateProcessedOccupants();
	void SetLocked(bool bNewLocked);
	void ResetPoint();
	void OnVehiclePassengerChanged(class AProjectXVehicle* Vehicle, class UVehicleSeatComponent* Seat, class AProjectXCharacter* PreviousPassenger);
	void OnRep_TeamOwner();
	void OnRep_Locked();
	void OnRep_CaptureInfo();
	void OnPointOwnerChanged();
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnCapturePointLockChanged(bool bIsLock);
	void OnCaptureComplete();
	int GetSortOrder();
	struct FText GetPointName();
	bool GetIsLocked();
	float GetCaptureRadius();
	struct FCaptureInfo GetCaptureInfo();
	static void GetBaseControlEventTableRow(const struct FBaseControlEventTableRow& TableRow, struct FString* AllySound, struct FString* EnemySound);
	static void GetAllControlPoints(class UObject* WorldContextObject, TArray<class ACapturePoint*>* CapturePointList);
	void CollectInitialOverlaps();
};


// Class ProjectX.ChallengeEvent
// 0x0018 (0x0040 - 0x0028)
class UChallengeEvent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ChallengeEvent"));
		return ptr;
	}

};


// Class ProjectX.CharacterVolume
// 0x0078 (0x02A8 - 0x0230)
class ACharacterVolume : public AActor
{
public:
	struct FMulticastScriptDelegate                    CharacterEnteredVolumeEvent;                              // 0x0230(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    CharacterLeftVolumeEvent;                                 // 0x0240(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	bool                                               bActiveVolume;                                            // 0x0250(0x0001) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      TriggerConditions;                                        // 0x0251(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x56];                                      // 0x0252(0x0056) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.CharacterVolume"));
		return ptr;
	}


	void ToggleActive(bool bNewActiveState);
	void OnToggleActivation(bool bActive);
	void OnRep_Active();
	void OnCharacterOverlapStart(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnCharacterOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnCharacterLeftVolume(class AProjectXCharacter* Character);
	void OnCharacterInVolume(class AProjectXCharacter* Character);
	void OnCharacterEnteredVolume(class AProjectXCharacter* Character);
	bool IsActive();
};


// Class ProjectX.ChatBoxWidget
// 0x0008 (0x02F0 - 0x02E8)
class UChatBoxWidget : public UAdvancedUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ChatBoxWidget"));
		return ptr;
	}


	void OnMessageTypeSet(EMessageType ChatMode);
	void OnChatToggled(TEnumAsByte<EWindowToggleCommand> ToggleCommand);
	void OnChatCollapsed();
	bool GetIsUserTyping();
};


// Class ProjectX.WeaponInstance
// 0x0780 (0x0848 - 0x00C8)
class UWeaponInstance : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET
	float                                              MaxMagazineAmmo;                                          // 0x00D8(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CoolDown;                                                 // 0x00DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BaseDamage;                                               // 0x00E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    ChargeStartEvent;                                         // 0x00E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    ChargeFinishedEvent;                                      // 0x00F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    WeaponToggleEvent;                                        // 0x0108(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    WeaponCancelledEvent;                                     // 0x0118(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    ONWeaponOverheatStart;                                    // 0x0128(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    ONWeaponOverheatEnd;                                      // 0x0138(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnWeaponEquipped;                                         // 0x0148(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnWeaponStopActions;                                      // 0x0158(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnCoolDownStarted;                                        // 0x0168(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnCoolDownFinished;                                       // 0x0178(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnWeaponAmmoChanged;                                      // 0x0188(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnValidDesignatorTargetEvent;                             // 0x0198(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsManagedByWeaponComponent;                              // 0x01A8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bBlocksUnmanagedWeapons;                                  // 0x01A9(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bBlockWeaponComponentWhileEquipped;                       // 0x01AA(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bRespectWeaponComponentFireLock;                          // 0x01AB(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCancelCurrentEquippedWeaponActions;                      // 0x01AC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCanEquipWhileSharedWeaponIsEquipping;                    // 0x01AD(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCanEquipWhileSharedWeaponIsUnequipping;                  // 0x01AE(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x1];                                       // 0x01AF(0x0001) MISSED OFFSET
	TMap<class UClass* /*UWeaponInstance*/, struct FMontageList> FireAnimsPerWeapon1P;                                     // 0x01B0(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TMap<class UClass* /*UWeaponInstance*/, struct FMontageList> FireAnimsPerWeapon3P;                                     // 0x0200(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	bool                                               bFallBackToFireAnim;                                      // 0x0250(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bInterpolateToUnmanagedOffset;                            // 0x0251(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0252(0x0002) MISSED OFFSET
	float                                              UnmanagedOffsetInterpolateToTime;                         // 0x0254(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              UnmanagedOffsetInterpolateFromTime;                       // 0x0258(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUsesCoolDown;                                            // 0x025C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECoolDownTrigger                                   CoolDownTriggerState;                                     // 0x025D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDebug;                                                   // 0x025E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bFireChargeOnRelease;                                     // 0x025F(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ChargeRate;                                               // 0x0260(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FireRate;                                                 // 0x0264(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DamageForce;                                              // 0x0268(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FireRateMin;                                              // 0x026C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FireRateRampUp;                                           // 0x0270(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ReloadRate;                                               // 0x0274(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ActiveTime;                                               // 0x0278(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	struct FString                                     WeaponID;                                                 // 0x0280(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveFloat*                                 AimAssistDistanceFalloffCurve;                            // 0x0290(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveFloat*                                 TightAimedAimAssistDistanceFalloffCurve;                  // 0x0298(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   AimAssistFalloffAngle;                                    // 0x02A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   TightAimedAimAssistFalloffAngle;                          // 0x02A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCanWeaponOverheat;                                       // 0x02B0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCanHoldBreathWhileADSing;                                // 0x02B1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCanUnequipWhileOverheating;                              // 0x02B2(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x5];                                       // 0x02B3(0x0005) MISSED OFFSET
	TArray<struct FFireModeToFloat>                    HeatGeneratedPerShot;                                     // 0x02B8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	float                                              HeatDissipationRate;                                      // 0x02C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              OverheatThreshold;                                        // 0x02CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TimeToFullyCoolDown;                                      // 0x02D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              EquipRate;                                                // 0x02D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              UnequipRate;                                              // 0x02D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCanQuickSwitchTo;                                        // 0x02DC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUnequipsOnToggle;                                        // 0x02DD(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCanBePreviousWeapon;                                     // 0x02DE(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bFireOnEquip;                                             // 0x02DF(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAltFireOnEquip;                                          // 0x02E0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUnEquipAfterFire;                                        // 0x02E1(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUnEquipOnEmpty;                                          // 0x02E2(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDropWeaponWhenEmpty;                                     // 0x02E3(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCanEquipWhenEmpty;                                       // 0x02E4(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bExclusiveWeapon;                                         // 0x02E5(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      FireModeFlags;                                            // 0x02E6(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x1];                                       // 0x02E7(0x0001) MISSED OFFSET
	class UClass* /*UAfflictionInstance*/              EquippedAffliction;                                       // 0x02E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TMap<class UPhysicalMaterial*, float>              DamageMultipliers;                                        // 0x02F0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	float                                              MinimumChargeValue;                                       // 0x0340(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EFireType                                          WeaponFireType;                                           // 0x0344(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHeldToCharge;                                            // 0x0345(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0346(0x0002) MISSED OFFSET
	class UCurveFloat*                                 DamageScalingCurve;                                       // 0x0348(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUsesAmmo;                                                // 0x0350(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EReloadType                                        ReloadType;                                               // 0x0351(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bConsumeOnFire;                                           // 0x0352(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bReloadWhenEmptied;                                       // 0x0353(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bInfiniteReserveAmmo;                                     // 0x0354(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	float                                              MaxTotalAmmo;                                             // 0x0358(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AmmoConsumedPerShot;                                      // 0x035C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bGlobalAmmo;                                              // 0x0360(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0361(0x0003) MISSED OFFSET
	float                                              RestockTime;                                              // 0x0364(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RestockAmount;                                            // 0x0368(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bProgressiveRestock;                                      // 0x036C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bResetAmmoOnSpawn;                                        // 0x036D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCanTightAim;                                             // 0x036E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHasSwayOnTightAim;                                       // 0x036F(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SwayIntensityMultiplier;                                  // 0x0370(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EFireMode                                          TightAimFireMode;                                         // 0x0374(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0375(0x0003) MISSED OFFSET
	float                                              TightAimRate;                                             // 0x0378(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TightAimFOV;                                              // 0x037C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TightAimFocalDistance;                                    // 0x0380(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TightAimFStop;                                            // 0x0384(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     TightAimRelativeWeaponOffset;                             // 0x0388(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    TightAimRelativeWeaponRotationOffset;                     // 0x0394(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bTightAimInterruptsReload;                                // 0x03A0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData11[0x3];                                       // 0x03A1(0x0003) MISSED OFFSET
	struct FVector2D                                   TightAimSpreadModifier;                                   // 0x03A4(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData12[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	class UClass* /*UUserWidget*/                      TightAimWidget;                                           // 0x03B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTexture*                                    TightAimReticleTexture;                                   // 0x03B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   TightAimReticleTextureScale;                              // 0x03C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                TightAimReticleTextureTint;                               // 0x03C8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UDamageType*/                      BaseDamageType;                                           // 0x03D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableWeaponMovement;                                    // 0x03E0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData13[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET
	class UClass* /*UAfflictionInstance*/              WeaponMovementAfflictionClass;                            // 0x03E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WeaponMovementVelocity;                                   // 0x03F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxWeaponMovementDuration;                                // 0x03F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ECompressedFlags                                   WeaponMovementFlag;                                       // 0x03F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bLooksTowardsDashMovement;                                // 0x03F9(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bBreakAfterDashing;                                       // 0x03FA(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EFireMode                                          WeaponMovementFireMode;                                   // 0x03FB(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsChildWeapon;                                           // 0x03FC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData14[0x3];                                       // 0x03FD(0x0003) MISSED OFFSET
	class UClass* /*UWeaponInstance*/                  ChildWeaponClass;                                         // 0x0400(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EFireMode                                          ChildWeaponFireMode;                                      // 0x0408(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0409(0x0003) MISSED OFFSET
	struct FName                                       KeyChainSocketName;                                       // 0x040C(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     KeyChainScale;                                            // 0x0414(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EDesignatorTeamView                                DesignatorTeamView;                                       // 0x0420(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData16[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	class UClass* /*ADesignatorMarker*/                DesignatorMarkerClass;                                    // 0x0428(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDesignatorRequiresTarget;                                // 0x0430(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	float                                              WeaponMeshRecoilTime;                                     // 0x0434(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WeaponMeshRecoilDistance;                                 // 0x0438(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WeaponMeshRecoilDistanceTightAimed;                       // 0x043C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveFloat*                                 WeaponMeshRecoilCurve;                                    // 0x0440(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>                DisplayMesh1P;                                            // 0x0448(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>                DisplayMesh3P;                                            // 0x0470(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FWeaponAttachment>                   Attachments;                                              // 0x0498(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FName                                       SocketAttach1P;                                           // 0x04A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       SocketAttach3P;                                           // 0x04B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Mesh3PScale;                                              // 0x04B8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData18[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
	class UClass* /*UAnimInstance*/                    AnimationClass1P;                                         // 0x04C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                FireAnimation1P;                                          // 0x04D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                TightAimFireAnimation1P;                                  // 0x04D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                ReloadAnimation1P;                                        // 0x04E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                ReloadAnimation1PStart;                                   // 0x04E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                ReloadAnimation1PEnd;                                     // 0x04F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPlayFireAnimationImmediately;                            // 0x04F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData19[0x7];                                       // 0x04F9(0x0007) MISSED OFFSET
	class UAnimMontage*                                SwapWeaponIn1P;                                           // 0x0500(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                SwapWeaponOut1P;                                          // 0x0508(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UAnimInstance*/                    WeaponAnimationClass;                                     // 0x0510(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UAnimInstance*/                    WeaponAnimationClass3P;                                   // 0x0518(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                WeaponFireAnimation;                                      // 0x0520(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                WeaponFireAnimation3P;                                    // 0x0528(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                WeaponReloadAnimation1P;                                  // 0x0530(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                WeaponReloadAnimation1PStart;                             // 0x0538(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                WeaponReloadAnimation1PEnd;                               // 0x0540(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                WeaponEquipAnimation;                                     // 0x0548(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UAnimInstance*/                    AnimationClass3P;                                         // 0x0550(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                FireAnimation3P;                                          // 0x0558(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                TightAimFireAnimation3P;                                  // 0x0560(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                ReloadAnimation3P;                                        // 0x0568(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                SwapWeaponIn3P;                                           // 0x0570(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                SwapWeaponOut3P;                                          // 0x0578(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                WeaponReloadAnimation3P;                                  // 0x0580(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USoundBase*                                  FireSingleSound;                                          // 0x0588(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USoundBase*                                  FireAutoSound;                                            // 0x0590(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USoundBase*                                  FireAutoLoopSound;                                        // 0x0598(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USoundBase*                                  FireAutoLoopTail;                                         // 0x05A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USoundBase*                                  WeaponMagEmptySound;                                      // 0x05A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AutoFireClipShotsPerSec;                                  // 0x05B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPlaySingleSoundForBursts;                                // 0x05B4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bStartLoopingSoundOnFirstShotRemote;                      // 0x05B5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bStartLoopingSoundOnFirstShotLocal;                       // 0x05B6(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bSyncLoopingSoundToFireRate;                              // 0x05B7(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Mesh1PScale;                                              // 0x05B8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Mesh1PScaleMultiplier;                                    // 0x05C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     RelativePositionOffset;                                   // 0x05C8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    RelativeRotationOffset;                                   // 0x05D4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FText                                       WeaponName;                                               // 0x05E0(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FText                                       WeaponDescription;                                        // 0x05F8(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	float                                              ReticleSpreadMultiplier;                                  // 0x0610(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData20[0x4];                                       // 0x0614(0x0004) MISSED OFFSET
	class UClass* /*UReticleWidget*/                   ReticleWidget;                                            // 0x0618(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UUserWidget*/                      AmmoCounterWidget;                                        // 0x0620(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       AmmoCounterSocket;                                        // 0x0628(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>                   WeaponIcon;                                               // 0x0630(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>                   WeaponKillFeedIcon;                                       // 0x0658(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UAfflictionInstance*/              WeaponAffliction;                                         // 0x0680(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<EPerkType>                                  PerkSlots;                                                // 0x0688(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	bool                                               bAppliesUltimateDamageMultiplier;                         // 0x0698(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData21[0x3];                                       // 0x0699(0x0003) MISSED OFFSET
	struct FName                                       DisplaySocketName;                                        // 0x069C(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DisplayFocalDistance;                                     // 0x06A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EWeaponState                                       WeaponState;                                              // 0x06A8(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData22[0x7];                                       // 0x06A9(0x0007) MISSED OFFSET
	class UWeaponInstance*                             ParentWeapon;                                             // 0x06B0(0x0008) (CPF_ExportObject, CPF_Net, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      FireCounter;                                              // 0x06B8(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHoldingFire;                                             // 0x06B9(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCharging;                                                // 0x06BA(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsOverheating;                                           // 0x06BB(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bTightAiming;                                             // 0x06BC(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData23[0x3];                                       // 0x06BD(0x0003) MISSED OFFSET
	class UWeaponInstance*                             ChildWeapon;                                              // 0x06C0(0x0008) (CPF_ExportObject, CPF_Net, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TotalAmmo;                                                // 0x06C8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData24[0x4];                                       // 0x06CC(0x0004) MISSED OFFSET
	bool                                               bAwaitingUnEquip;                                         // 0x06D0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData25[0x7];                                       // 0x06D1(0x0007) MISSED OFFSET
	class AProjectXCharacter*                          OwningCharacter;                                          // 0x06D8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UWeaponComponent*                            OwningComponent;                                          // 0x06E0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TMap<unsigned char, class UMaterialInstance*>      WeaponSkin;                                               // 0x06E8(0x0050) (CPF_NativeAccessSpecifierPublic)
	class UParticleSystem*                             WeaponSkinParticle;                                       // 0x0738(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData26[0x18];                                      // 0x0740(0x0018) MISSED OFFSET
	class UGlobalAmmoComponent*                        GlobalAmmoComponent;                                      // 0x0758(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TMap<class UPhysicalMaterial*, struct FImpactEffects> ImpactEffectMap;                                          // 0x0760(0x0050) (CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData27[0x38];                                      // 0x07B0(0x0038) MISSED OFFSET
	class UAudioComponent*                             ActiveLoopingAudioComponent;                              // 0x07E8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData28[0x58];                                      // 0x07F0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.WeaponInstance"));
		return ptr;
	}


	bool UsesGlobalAmmo();
	bool UsesCoolDown();
	bool UsesAmmo();
	static TArray<EPerkType> StaticGetPerkSlots(class UClass* /*UWeaponInstance*/ Class);
	static unsigned char StaticGetNumberOfPerksSlots(class UClass* /*UWeaponInstance*/ Class);
	bool ShouldUnequipOnToggle();
	bool ShouldUnEquipOnEmpty();
	bool ShouldUnEquipAfterFire();
	static bool ShouldDisplayHitConfirm(class AActor* Target, class AActor* Instigator);
	void SetFireAnimMontage(class UAnimMontage* NewFireAnimation1P, class UAnimMontage* NewFireAnimation3P);
	void Server_Reliable_UnEquip();
	void Server_Reliable_TightAim(bool bEnable);
	void Server_Reliable_ReloadCancel();
	void Server_Reliable_Reload(float WorldTimeSeconds);
	void Server_Reliable_FireReleased(unsigned char Mode);
	void Server_Reliable_Fire(unsigned char Mode, float WorldTimeOverride);
	void Server_Reliable_ChargeStart(float ChargeStartTime, unsigned char Mode, float WorldTimeOverride);
	void Server_Reliable_CancelFire();
	void OnWeaponParticleLoaded(class UParticleSystem* Particle);
	void OnRep_WeaponState(EWeaponState PreviousState);
	void OnRep_TightAiming();
	void OnRep_ParentWeapon();
	void OnRep_IsOverheating();
	void OnRep_HoldingFire();
	void OnRep_FireCounter();
	void OnRep_ChargeIsReady();
	void OnChargeValueUpdated(float Charge);
	void Multicast_ChargeFinished(float ChargeVal);
	void K2_WeaponStateChanged(EWeaponState NewWeaponState);
	void K2_UnEquipComplete();
	void K2_UnEquip();
	void K2_ToggleDesignatorMarker(class AActor* NewDesignatorMarker);
	void K2_ReloadComplete();
	void K2_ReloadCancel();
	void K2_Reload();
	void K2_OwnerDied();
	void K2_FireReleased(unsigned char Mode);
	void K2_FireComplete(unsigned char Mode);
	void K2_Fire(unsigned char Mode);
	void K2_EquipComplete();
	void K2_Equip();
	bool IsWaitingToUnEquip();
	bool IsUnEquipping();
	bool IsTightAiming();
	bool IsTightAimFireMode(unsigned char Mode);
	bool IsSimulatedOnly();
	bool IsSemiAutomatic();
	bool IsReloading();
	bool IsReady();
	bool IsProgressiveGlobalAmmoRestock();
	bool IsOverheated();
	bool IsNonOwningAuthority();
	bool IsLocallyOwnedRemote();
	bool IsLocallyOwned();
	bool IsInitialized();
	bool IsHoldingPrimary();
	static bool IsHeadshotStatic(const struct FHitResult& HitResult, class UClass* /*UDamageType*/ DamageType);
	bool IsHeadshot(const struct FHitResult& HitResult);
	bool IsFiring();
	bool IsExclusiveWeapon();
	bool IsEquipping();
	bool IsEquipped();
	bool IsDown();
	bool IsDebugging();
	bool IsCurrentViewTarget();
	bool IsCoolingDown();
	bool IsCharged();
	bool IsAutomatic();
	bool IsAuthority();
	bool HasSwayOnTightAim();
	bool HasInfiniteReserveAmmo();
	EWeaponState GetWeaponState();
	float GetWeaponSpread();
	class UParticleSystem* GetWeaponSkinParticle();
	static struct FText GetWeaponNameFromClass(class UClass* /*UWeaponInstance*/ Class);
	struct FText GetWeaponName();
	static TSoftObjectPtr<class UTexture2D> GetWeaponKillFeedIconFromClass(class UClass* /*UWeaponInstance*/ Class);
	TSoftObjectPtr<class UTexture2D> GetWeaponKillFeedIcon();
	static struct FName GetWeaponKeyChainSocket(class UClass* /*UWeaponInstance*/ Class);
	static struct FString GetWeaponIDFromClass(class UClass* /*UWeaponInstance*/ Class);
	struct FString GetWeaponID();
	static TSoftObjectPtr<class UTexture2D> GetWeaponIconFromClass(class UClass* /*UWeaponInstance*/ Class);
	TSoftObjectPtr<class UTexture2D> GetWeaponIcon();
	static struct FText GetWeaponDescriptionFromClass(class UClass* /*UWeaponInstance*/ Class);
	struct FText GetWeaponDescription();
	class UClass* /*UUserWidget*/ GetTightAimWidget();
	float GetTightAimSpreadModifier();
	float GetTightAimPercent();
	bool GetTargetTransform(struct FTransform* Transform);
	float GetSwayIntensityMultiplier();
	class UReticleWidget* GetReticle();
	float GetReserveAmmo();
	TArray<EPerkType> GetPerkSlots();
	class AProjectXPlayerController* GetOwningPlayerController();
	class AController* GetOwningController();
	class UWeaponComponent* GetOwningComponent();
	class AProjectXCharacter* GetOwningCharacter();
	float GetOverheatThreshold();
	float GetMovementSpreadModifier();
	float GetMaxReserveAmmo();
	float GetMaxMagAmmo();
	static float GetMagCapacityFromClass(class UClass* /*UWeaponInstance*/ Class);
	float GetMagAmmo();
	struct FName GetKeyChainSocket();
	static struct FVector GetKeyChainScaleStatic(class UClass* /*UWeaponInstance*/ Class);
	struct FVector GetKeyChainScale();
	class AProjectXHUD* GetHUD();
	float GetHeatAsPercentage();
	static float GetGlobalRestockTimeFromClass(class UClass* /*UWeaponInstance*/ Class);
	float GetGlobalRestockTime();
	static float GetGlobalRestockAmountFromClass(class UClass* /*UWeaponInstance*/ Class);
	float GetGlobalRestockAmount();
	class UGlobalAmmoComponent* GetGlobalAmmoComponent();
	EFireType GetFireType();
	float GetFireRatePercentage();
	float GetFireRate();
	struct FName GetDisplaySocketName();
	float GetDisplayFireRate();
	float GetDisplayDamage();
	float GetDisplayCameraFocalDistance();
	struct FTransform GetDesignatorTransform();
	class UClass* /*UDamageType*/ GetDamageType();
	float GetDamageScalingMultiplier(float Value);
	float GetDamageMultiplier(const struct FHitResult& HitResult, float DamageModifer, class UWeaponComponent* WeaponComponent);
	float GetDamageForce();
	float GetDamage(const struct FHitResult& HitResult, float DamageModifer, class UWeaponComponent* WeaponComponent);
	float GetCurrentHeat();
	float GetCoolDownDuration();
	float GetChargeValue();
	static TSoftObjectPtr<class USkeletalMesh> Get3rdPersonDisplayMeshFromClass(class UClass* /*UWeaponInstance*/ Class);
	bool DoesWeaponSupportTightAiming();
	void DeferredReload();
	void CoolDownFinished();
	float CoolDownDurationRemaining();
	void Client_Reliable_TotalAmmoChanged(float NewTotalAmmo);
	void Client_Reliable_SetMagazineAmmo(float NewMagAmmo);
	void Client_Reliable_ReloadComplete(float ReloadAmount);
	void Client_Reliable_HeatCooldownComplete(unsigned char Mode);
	void Client_Reliable_BroadcastWeaponError(EWeaponError Error);
	void ChargeTimeComplete(unsigned char Mode, bool bExecuteFire);
	bool CanWeaponOverheat();
	bool CanTightAim();
	bool CanQuickSwitchTo();
	bool CanHoldBreathWhileADSing();
	bool CanBePreviousWeapon();
	void AddAmmo(float InAmmo);
};


// Class ProjectX.WeaponInstanceRanged
// 0x0090 (0x08D8 - 0x0848)
class UWeaponInstanceRanged : public UWeaponInstance
{
public:
	class UCurveFloat*                                 DamageFalloffCurve;                                       // 0x0848(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      FireValidationCount;                                      // 0x0850(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      ValidationsPerFire;                                       // 0x0851(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0852(0x0002) MISSED OFFSET
	uint32_t                                           SpreadInterpolationID;                                    // 0x0854(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bHasRecoil;                                               // 0x0858(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0859(0x0003) MISSED OFFSET
	struct FVector2D                                   Recoil;                                                   // 0x085C(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RecoilRate;                                               // 0x0864(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TEnumAsByte<EEasingFunc>                           RecoilEaseType;                                           // 0x0868(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0869(0x0003) MISSED OFFSET
	struct FVector2D                                   TightAimRecoilModifier;                                   // 0x086C(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              TightAimRecoilRateModifier;                               // 0x0874(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              TightAimSpreadPerShotMultiplier;                          // 0x0878(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              TightAimSpreadDecayRateMultiplier;                        // 0x087C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bHasSpread;                                               // 0x0880(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bRandomSpread;                                            // 0x0881(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bHasMovementBasedSpread;                                  // 0x0882(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	EMovementSpreadType                                MovementSpreadType;                                       // 0x0883(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bApplyMovementSpreadWhenTightAiming;                      // 0x0884(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0885(0x0003) MISSED OFFSET
	float                                              MovementSpreadTightAimingMultiplier;                      // 0x0888(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MovementSpreadMultiplier;                                 // 0x088C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              TimeToReachMaxMovementSpreadMultiplier;                   // 0x0890(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              TimeToRecoveryFromMovementSpreadMultiplier;               // 0x0894(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CrouchConeSpreadMultiplier;                               // 0x0898(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x4];                                       // 0x089C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 VelocityBasedSpreadCurve;                                 // 0x08A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UWeaponSpreadDataAsset*                      BakedSpreadConfigDataAsset;                               // 0x08A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector2D                                   SpreadRange;                                              // 0x08B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SpreadPerShot;                                            // 0x08B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SpreadDecayRate;                                          // 0x08BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x10];                                      // 0x08C0(0x0010) MISSED OFFSET
	bool                                               bBurstFire;                                               // 0x08D0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      BurstCount;                                               // 0x08D1(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x2];                                       // 0x08D2(0x0002) MISSED OFFSET
	float                                              BurstRate;                                                // 0x08D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.WeaponInstanceRanged"));
		return ptr;
	}

};


// Class ProjectX.WeaponInstanceProjectile
// 0x0108 (0x09E0 - 0x08D8)
class UWeaponInstanceProjectile : public UWeaponInstanceRanged
{
public:
	class UClass* /*AActor*/                           ProjectileClass;                                          // 0x08D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ProjectileSpeed;                                          // 0x08E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ProjectileCount;                                          // 0x08E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       ClientProjectileTransformSocket;                          // 0x08E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUnmanagedSearchProjectileSocketOnWeapon;                 // 0x08F0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x17];                                      // 0x08F1(0x0017) MISSED OFFSET
	bool                                               bUseCharacterSpeed;                                       // 0x0908(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	EProjectileMagnetismType                           ProjectileMagnetismType;                                  // 0x0909(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x2];                                       // 0x090A(0x0002) MISSED OFFSET
	struct FVector2D                                   ProjectileMagnetismFalloffAngle;                          // 0x090C(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector2D                                   ProjectileMagnetismFalloffAngleGamepad;                   // 0x0914(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector2D                                   TightAimedProjectileMagnetismFalloffAngle;                // 0x091C(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector2D                                   TightAimedProjectileMagnetismFalloffAngleGamepad;         // 0x0924(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x4];                                       // 0x092C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 ProjectileMagnetismDistanceFalloffCurve;                  // 0x0930(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCurveFloat*                                 ProjectileMagnetismDistanceFalloffCurveGamepad;           // 0x0938(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCurveFloat*                                 TightAimedProjectileMagnetismDistanceFalloffCurve;        // 0x0940(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCurveFloat*                                 TightAimedProjectileMagnetismDistanceFalloffCurveGamepad; // 0x0948(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ELockOnType                                        LockOn;                                                   // 0x0950(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bShouldProjectilesNotifyTarget;                           // 0x0951(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0952(0x0002) MISSED OFFSET
	float                                              TimeBeforeNotifyingHomingTargetLost;                      // 0x0954(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              LockOnRange;                                              // 0x0958(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              LockOnRadius;                                             // 0x095C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              LockOnTime;                                               // 0x0960(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MinLockOnPercent;                                         // 0x0964(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxLockOnAngle;                                           // 0x0968(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bUsePlaneIntersectionForLock;                             // 0x096C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x3];                                       // 0x096D(0x0003) MISSED OFFSET
	float                                              MinDotProduct;                                            // 0x0970(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0974(0x0004) MISSED OFFSET
	class UClass* /*UAdvancedWidgetComponent*/         LockOnWidgetComponentClass;                               // 0x0978(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UAdvancedWidgetComponent>     LockOnWidgetComponent;                                    // 0x0980(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AActor>                       TentativeLockOnTarget;                                    // 0x0988(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AActor>                       LockOnTarget;                                             // 0x0990(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AActor>                       AimTarget;                                                // 0x0998(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MagnetismFalloff;                                         // 0x09A0(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData06[0x3C];                                      // 0x09A4(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.WeaponInstanceProjectile"));
		return ptr;
	}


	void UpdateLockOnWidget(class AActor* Target, class UClass* /*UAdvancedWidgetComponent*/ WidgetComponentClass);
	void Server_SetTentativeLockOn(class AActor* Target);
	void Server_LockOn(class AActor* Target);
	void Server_AuthenticateTicket(TArray<int> ProjectileIDs, class UClass* /*AProjectile*/ UsedProjectileClass, const struct FVector_NetQuantize& Origin, class AActor* PlayerAimTarget, float PlayerMagnetismFalloff);
	void OnRep_TentativeLockOnTarget();
	void OnRep_LockOnTarget();
	bool IsWeaponMagnetismEnabled();
	float GetWeaponMagnetismConeSize();
	bool GetProjectileTransform(struct FTransform* Transform, struct FTransform* CosmeticTransform);
	int GetProjectileID();
	class UClass* /*AActor*/ GetProjectileClass();
	float GetLockOnStrength();
	class AActor* GetHomingTarget();
	bool CanLockOn();
	float CalculateMagnetismFalloff();
};


// Class ProjectX.ChildWeaponInstanceShotgunMortar
// 0x0008 (0x09E8 - 0x09E0)
class UChildWeaponInstanceShotgunMortar : public UWeaponInstanceProjectile
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x09E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ChildWeaponInstanceShotgunMortar"));
		return ptr;
	}

};


// Class ProjectX.TeamDeathmatchSpawnPoint
// 0x0108 (0x0338 - 0x0230)
class ATeamDeathmatchSpawnPoint : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0230(0x0018) MISSED OFFSET
	int                                                DefaultTeam;                                              // 0x0248(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x024C(0x0004) MISSED OFFSET
	TArray<class AStartPointVolume*>                   GamePlayStartPointVolumes;                                // 0x0250(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<unsigned char, class AStartPointVolume*>      MatchStartPointVolumes;                                   // 0x0260(0x0050) (CPF_Edit, CPF_DisableEditOnTemplate, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x60];                                      // 0x02B0(0x0060) MISSED OFFSET
	struct FText                                       PointName;                                                // 0x0310(0x0018) (CPF_Edit, CPF_DisableEditOnTemplate, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0328(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.TeamDeathmatchSpawnPoint"));
		return ptr;
	}


	struct FText GetPointName();
};


// Class ProjectX.CommandCenter
// 0x0090 (0x03C8 - 0x0338)
class ACommandCenter : public ATeamDeathmatchSpawnPoint
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnCommandCenterDestroyed;                                 // 0x0340(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnCommandCenterUnderAttack;                               // 0x0350(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnCommandCenterHealthChanged;                             // 0x0360(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnDefensesDepleted;                                       // 0x0370(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnCommandCenterProperlyInitialized;                       // 0x0380(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	TArray<class ADestroyableObjective*>               DestroyableParts;                                         // 0x0390(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class ADeployableAutonomousTurret*>         DefensiveTurrets;                                         // 0x03A0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	int                                                SortOrder;                                                // 0x03B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x14];                                      // 0x03B4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.CommandCenter"));
		return ptr;
	}


	void OnPartDestroyed(class ADestroyableObjective* Objective, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState);
	void OnPartDamageTaken(class ADestroyableObjective* Objective, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState);
	void OnPartActivationChanged(class ADestroyableObjective* Objective);
	void OnHealthChanged(float Delta);
	void OnCommandCenterInitialized();
	bool HasDefensesUp();
	void CheckForInitialization();
};


// Class ProjectX.ContextMenuWidget
// 0x0040 (0x0328 - 0x02E8)
class UContextMenuWidget : public UAdvancedUserWidget
{
public:
	TArray<struct FContextMenuOption>                  ContextMenuItems;                                         // 0x02E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_NativeAccessSpecifierPublic)
	struct FText                                       Title;                                                    // 0x02F8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_NativeAccessSpecifierPublic)
	struct FText                                       Message;                                                  // 0x0310(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ContextMenuWidget"));
		return ptr;
	}


	void SetTitle(const struct FText& NewMessage);
	void SetText(const struct FText& NewMessage);
	void Populate();
	static struct FContextMenuOption MakeContextMenuOption(const struct FText& Text, const struct FScriptDelegate& EventOnSelected);
	void ChooseContextMenuOption(unsigned char ChosenOption, bool bCloseWindow);
};


// Class ProjectX.CosmeticAssetBase
// 0x0040 (0x0070 - 0x0030)
class UCosmeticAssetBase : public UDataAsset
{
public:
	TSoftObjectPtr<class UTexture2D>                   ItemIcon;                                                 // 0x0030(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDefaultEquipped;                                         // 0x0058(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0059(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.CosmeticAssetBase"));
		return ptr;
	}

};


// Class ProjectX.CosmeticBodyMeshAsset
// 0x0050 (0x00C0 - 0x0070)
class UCosmeticBodyMeshAsset : public UCosmeticAssetBase
{
public:
	struct FBodyMeshStruct                             BodyMesh;                                                 // 0x0070(0x0050) (CPF_Edit, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.CosmeticBodyMeshAsset"));
		return ptr;
	}

};


// Class ProjectX.CosmeticHeadAsset
// 0x0038 (0x00A8 - 0x0070)
class UCosmeticHeadAsset : public UCosmeticAssetBase
{
public:
	TSoftObjectPtr<class USkeletalMesh>                HeadMesh;                                                 // 0x0070(0x0028) (CPF_Edit, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UMaterialInstance>>    HeadMaterials;                                            // 0x0098(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.CosmeticHeadAsset"));
		return ptr;
	}

};


// Class ProjectX.CosmeticPlayerSkinAsset
// 0x00E0 (0x0150 - 0x0070)
class UCosmeticPlayerSkinAsset : public UCosmeticAssetBase
{
public:
	TSoftObjectPtr<class USkeletalMesh>                HeadMesh;                                                 // 0x0070(0x0028) (CPF_Edit, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>                BodyMesh3P;                                               // 0x0098(0x0028) (CPF_Edit, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>                BodyMesh1P;                                               // 0x00C0(0x0028) (CPF_Edit, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>                Equipment;                                                // 0x00E8(0x0028) (CPF_Edit, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UMaterialInstance>>    HeadMaterials;                                            // 0x0110(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UMaterialInstance>>    BodyMaterials;                                            // 0x0120(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UMaterialInstance>>    Body1PMaterials;                                          // 0x0130(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UMaterialInstance>>    EquipmentMaterials;                                       // 0x0140(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.CosmeticPlayerSkinAsset"));
		return ptr;
	}

};


// Class ProjectX.LoadoutAssetWeapon
// 0x0008 (0x0078 - 0x0070)
class ULoadoutAssetWeapon : public UCosmeticAssetBase
{
public:
	class UClass* /*UWeaponInstance*/                  Weapon;                                                   // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.LoadoutAssetWeapon"));
		return ptr;
	}

};


// Class ProjectX.CosmeticColourAsset
// 0x0018 (0x0088 - 0x0070)
class UCosmeticColourAsset : public UCosmeticAssetBase
{
public:
	struct FLinearColor                                Color;                                                    // 0x0070(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      ColorFlags;                                               // 0x0080(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.CosmeticColourAsset"));
		return ptr;
	}


	void GetColor(struct FLinearColor* ColorOut);
};


// Class ProjectX.CosmeticWeaponMeshAsset
// 0x0028 (0x0098 - 0x0070)
class UCosmeticWeaponMeshAsset : public UCosmeticAssetBase
{
public:
	TSoftObjectPtr<class USkeletalMesh>                WeaponMesh;                                               // 0x0070(0x0028) (CPF_Edit, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.CosmeticWeaponMeshAsset"));
		return ptr;
	}

};


// Class ProjectX.CosmeticTextureAsset
// 0x0028 (0x0098 - 0x0070)
class UCosmeticTextureAsset : public UCosmeticAssetBase
{
public:
	TSoftObjectPtr<class UTexture>                     Texture;                                                  // 0x0070(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.CosmeticTextureAsset"));
		return ptr;
	}

};


// Class ProjectX.CosmeticMaterialAsset
// 0x0028 (0x0098 - 0x0070)
class UCosmeticMaterialAsset : public UCosmeticAssetBase
{
public:
	TSoftObjectPtr<class UMaterialInstance>            Material;                                                 // 0x0070(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.CosmeticMaterialAsset"));
		return ptr;
	}

};


// Class ProjectX.CosmeticVehicleSkinAsset
// 0x0060 (0x00D0 - 0x0070)
class UCosmeticVehicleSkinAsset : public UCosmeticAssetBase
{
public:
	TArray<TSoftObjectPtr<class UMaterialInstance>>    VehicleSkinMaterials;                                     // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UParticleSystem>              Particle;                                                 // 0x0080(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>                VehicleSkinMesh;                                          // 0x00A8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.CosmeticVehicleSkinAsset"));
		return ptr;
	}

};


// Class ProjectX.CosmeticWeaponSkinAsset
// 0x0088 (0x00F8 - 0x0070)
class UCosmeticWeaponSkinAsset : public UCosmeticAssetBase
{
public:
	TArray<TSoftObjectPtr<class UMaterialInstance>>    WeaponSkinMaterials;                                      // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UParticleSystem>              Particle;                                                 // 0x0080(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>                WeaponSkinMesh1P;                                         // 0x00A8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>                WeaponSkinMesh3P;                                         // 0x00D0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.CosmeticWeaponSkinAsset"));
		return ptr;
	}

};


// Class ProjectX.CosmeticKeyChainAsset
// 0x0038 (0x00A8 - 0x0070)
class UCosmeticKeyChainAsset : public UCosmeticAssetBase
{
public:
	TSoftObjectPtr<class USkeletalMesh>                KeyChainMesh;                                             // 0x0070(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UMaterialInstance>>    KeyChainMaterials;                                        // 0x0098(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.CosmeticKeyChainAsset"));
		return ptr;
	}

};


// Class ProjectX.CosmeticTauntAsset
// 0x0008 (0x0078 - 0x0070)
class UCosmeticTauntAsset : public UCosmeticAssetBase
{
public:
	class UAnimMontage*                                TauntMontage;                                             // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.CosmeticTauntAsset"));
		return ptr;
	}

};


// Class ProjectX.CosmeticExplosionAsset
// 0x0050 (0x00C0 - 0x0070)
class UCosmeticExplosionAsset : public UCosmeticAssetBase
{
public:
	TSoftObjectPtr<class UParticleSystem>              Particle;                                                 // 0x0070(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USoundCue>                    Sound;                                                    // 0x0098(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.CosmeticExplosionAsset"));
		return ptr;
	}

};


// Class ProjectX.CosmeticTrailAsset
// 0x0010 (0x0080 - 0x0070)
class UCosmeticTrailAsset : public UCosmeticAssetBase
{
public:
	class UParticleSystem*                             Ally;                                                     // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UParticleSystem*                             Enemy;                                                    // 0x0078(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.CosmeticTrailAsset"));
		return ptr;
	}

};


// Class ProjectX.PerkAssetBase
// 0x0080 (0x00F0 - 0x0070)
class UPerkAssetBase : public UCosmeticAssetBase
{
public:
	TSoftObjectPtr<class UTexture2D>                   PerkIcon;                                                 // 0x0070(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FText                                       PerkInfo;                                                 // 0x0098(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FText                                       PerkName;                                                 // 0x00B0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FPerkInfo                                   PerkStruct;                                               // 0x00C8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	float                                              PerkNumber;                                               // 0x00E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDefaultUnlocked;                                         // 0x00EC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EPerkType                                          Type;                                                     // 0x00ED(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00EE(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.PerkAssetBase"));
		return ptr;
	}

};


// Class ProjectX.CosmeticsComponent
// 0x03B8 (0x0480 - 0x00C8)
class UCosmeticsComponent : public UActorComponent
{
public:
	struct FVector                                     Scale1P;                                                  // 0x00C8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Position1P;                                               // 0x00D4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Rotation1P;                                               // 0x00E0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Position3P;                                               // 0x00EC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation3P;                                               // 0x00F8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bPreview;                                                 // 0x0104(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	class UClass* /*UObject*/                          AnimationBlendTree1P;                                     // 0x0108(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UObject*/                          AnimationBlendTree3P;                                     // 0x0110(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USkeletalMesh*                               BodyMesh1P;                                               // 0x0118(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USkeletalMesh*                               BodyMesh3P;                                               // 0x0120(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USkeletalMesh*                               ClassClothingMesh3P;                                      // 0x0128(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USkeletalMesh*                               HeadVariant3P;                                            // 0x0130(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      Mesh1P;                                                   // 0x0138(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UBISSkeletalMeshComponent*                   Mesh3P;                                                   // 0x0140(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      Gun1P;                                                    // 0x0148(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UParticleSystem*                             AllyPlayerTrailParticle;                                  // 0x0150(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UParticleSystem*                             EnemyPlayerTrailParticle;                                 // 0x0158(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TMap<struct FString, struct FWeaponSkin>           WeaponSkins;                                              // 0x0160(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TMap<struct FString, struct FVehicleSkin>          VehicleSkins;                                             // 0x01B0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TMap<struct FString, struct FKeyChain>             KeyChains;                                                // 0x0200(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	class UBISSkeletalMeshComponent*                   Head3P;                                                   // 0x0250(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UBISSkeletalMeshComponent*                   ClassClothing3P;                                          // 0x0258(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UBISSkeletalMeshComponent*                   Gun3P;                                                    // 0x0260(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x88];                                      // 0x0268(0x0088) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnPlayerSkinLoaded;                                       // 0x02F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPlayerTrailChangedEvent;                                // 0x0300(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    On3PWeaponLoadedEvent;                                    // 0x0310(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPatternLoadedEvent;                                     // 0x0320(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x88];                                      // 0x0330(0x0088) MISSED OFFSET
	TMap<class UCosmeticPlayerSkinAsset*, struct FPlayerSkin> LoadedPlayerSkin;                                         // 0x03B8(0x0050) (CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<ECosmeticType, class UCosmeticAssetBase*>     CachedLoadedCosmetics;                                    // 0x0408(0x0050) (CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0458(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.CosmeticsComponent"));
		return ptr;
	}


	void ToggleView(bool Toggle);
	void ToggleKeyChainVisiblity(bool bHideKeyChain);
	void SetVectorParameterForAllMeshes(const struct FName& ParameterName, const struct FVector& VectorParameter);
	void SetTextureParameterForAllMeshes(const struct FName& ParameterName, class UTexture* TextureParameter);
	void SetScalarParameterForAllMeshes(const struct FName& ParameterName, float ScalarParameter);
	void SetPattern(class UTexture* NewPattern);
	void SetMaterialLayer(class UMaterialInterface* Material);
	void RenderCustomDepth3P(unsigned char StencilValue, bool bUseCustomDepth);
	void PersonalVehicleChanged(class UWeaponInstanceSpawnableVehicle* PVWeapon);
	void OnWeaponChanged(class UWeaponInstance* Weapon);
	void OnVehicleChanged(class AProjectXCharacter* Driver, class AProjectXVehicle* CurrentVehicle, class AProjectXVehicle* PreviousVehicle);
	void OnTightAimStart();
	void OnTightAimEnd();
	void OnPlayerStateUpdated(class APlayerState* PlayerState);
	void OnEquipsUpdated(ECosmeticType Type, const struct FString& ShortCode, const struct FString& Key);
	void LoadWeaponSkins(class UCosmeticWeaponSkinAsset* WeaponSkinAsset, const struct FString& WeaponID);
	void LoadVehicleWeaponSkins(class UCosmeticVehicleSkinAsset* VehicleSkinAsset, const struct FString& WeaponID);
	void LoadTaunt(class UCosmeticTauntAsset* TauntAsset);
	void LoadPlayerSkin(class UCosmeticPlayerSkinAsset* SkinAsset);
	void LoadParticleTrail(class UCosmeticTrailAsset* TrailAsset);
	void LoadKeyChain(class UCosmeticKeyChainAsset* KeyChainAsset, const struct FString& WeaponID);
	void LoadDefaultCosmetics();
	void LoadDeathExplosion(class UCosmeticExplosionAsset* ExplosionAsset);
	void LoadCosmeticsForClass(const struct FEquips& Equips, ECosmeticType Type, class UClass* /*AProjectXCharacter*/ CharacterClass, class UClass* /*UWeaponInstance*/ WeaponClass);
	bool IsLoadedCosmetic(ECosmeticType Type, class UCosmeticAssetBase* Asset);
	void InitializeFromCosmeticComponent(class UCosmeticsComponent* CosmeticComponent);
	class UAnimMontage* GetTauntMontage();
	class UParticleSystem* GetPlayerTrail(bool bIsAlly);
	class UTexture* GetPattern();
	TArray<class UMeshComponent*> Get3pMeshComponents();
	void ClearMaterialLayer();
};


// Class ProjectX.CosmeticsManager
// 0x0460 (0x0528 - 0x00C8)
class UCosmeticsManager : public UActorComponent
{
public:
	struct FMulticastScriptDelegate                    PurchaseResponseEvent;                                    // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnEquippedCosmeticsLoaded;                                // 0x00D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnNewRewardsEarned;                                       // 0x00E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSharedPlayerInfoLoaded;                                 // 0x00F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnGeneralCosmeticsChangedEvent;                           // 0x0108(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnChallengeRewardsReceived;                               // 0x0118(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPlayerInventoryLoaded;                                  // 0x0128(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnItemsInitialized;                                       // 0x0138(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnStoreLoaded;                                            // 0x0148(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnItemEquipped;                                           // 0x0158(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnOtherUserEquipsUpdated;                                 // 0x0168(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3B0];                                     // 0x0178(0x03B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.CosmeticsManager"));
		return ptr;
	}


	void UpdateLocalPlayerInfoFavouriteClass(class UClass* /*AProjectXCharacter*/ CharacterClass);
	void UpdateLocalPlayerInfo(const struct FSharedPlayerInfo& UpdatedPlayerInfo);
	void SavePlayerInventory();
	void SaveLocalPlayerInfo();
	bool PurchaseItemRequest(const struct FString& ItemId);
	void OnNakamaConnected();
	void OnMatchComplete();
	void LoadSharedPlayerInfo(TArray<struct FString> PlayerIDs);
	void LoadEarnedRewards(const struct FString& PlayerID);
	void LoadAllCosmeticData(const struct FString& PlayerID);
	bool IsItemUnlocked(const struct FString& ItemId);
	bool GetPlayerInfo(const struct FString& PlayerID, struct FSharedPlayerInfo* FoundPlayerInfo);
	void GetPlayerEquipItem(TArray<struct FPlayerEquipRequest> PlayerEquipRequests);
	static class UDataTable* GetPerksList(class UDataTable* PerksTable, class UClass* /*AProjectXCharacter*/ CharacterClass, class UClass* /*UWeaponInstance*/ WeaponInstanceClass, EPerkType Type);
	struct FString GetLocalPlayerID();
	TMap<struct FString, struct FItem> GetItemList();
	struct FItem GetItemByShortCode(const struct FString& ShortCode);
	struct FCosmeticDeals GetFeatureDeal();
	struct FEquips GetEquips();
	class UClass* /*UWeaponInstance*/ GetEquippedWeaponInSlot(EEquipSlot Slot, class UClass* /*AProjectXCharacter*/ CharacterClass, class AProjectXPlayerState* PlayerState);
	static bool GetEquippedItem(const struct FEquips& Equips, ECosmeticType Type, struct FString* Key, struct FString* FoundItem);
	bool GetEarnedRewards(struct FCosmeticRewards* Rewards);
	static class UDataTable* GetDataTableByType(ECosmeticType Type, class UObject* WorldContextObject);
	struct FCosmeticDeals GetDailyDeal();
	static class UCosmeticsManager* GetCosmeticManager(class UObject* WorldContextObject);
	class UClass* /*AProjectXCharacter*/ GetCharacterClassFromID(const struct FString& PlayerID);
	struct FBestWeaponInfos GetBestWeaponInfos();
	void EquipItem(const struct FString& ShortCode, const struct FString& EquipCode);
	void EquipDefaults(bool bPostLoadEquip);
	bool DoesItemExist(const struct FString& ShortCode);
	void ClearEarnedRewards();
	static struct FString BuildCosmeticKeyFromString(ECosmeticType Type, const struct FString& ClassID, const struct FString& WeaponClassID, unsigned char SlotID, EPerkType PerkType);
	static struct FString BuildCosmeticKeyFromClass(ECosmeticType Type, class UClass* /*AProjectXCharacter*/ CharacterClass, class UClass* /*UWeaponInstance*/ WeaponClass, unsigned char SlotID, EPerkType PerkType);
	void AddItemToUnlockList(const struct FString& ShortCode, bool bMaxOne);
};


// Class ProjectX.DamageHistoryComponent
// 0x0078 (0x0140 - 0x00C8)
class UDamageHistoryComponent : public UActorComponent
{
public:
	TArray<struct FHistoryEntry>                       DamageHistory;                                            // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00D8(0x0018) MISSED OFFSET
	TArray<struct FKillHistory>                        KillHistory;                                              // 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              KillHistoryDuration;                                      // 0x0100(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ParticipationDuration;                                    // 0x0104(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SaviourMaxDuration;                                       // 0x0108(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x34];                                      // 0x010C(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DamageHistoryComponent"));
		return ptr;
	}


	void TakeDamage(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState);
	float GetKillHistoryDuration();
	void Die(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bFromHeadshot);
	void DamageDone(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
	void ClearKillHistory();
};


// Class ProjectX.ProjectXDamageType
// 0x0120 (0x0160 - 0x0040)
class UProjectXDamageType : public UDamageType
{
public:
	class UClass* /*UAfflictionInstance*/              Affliction;                                               // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UAfflictionInstance*/              AllyAffliction;                                           // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPredictedHit;                                            // 0x0050(0x0001) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FDeathEffectInfo                            DeathEffectInfo;                                          // 0x0058(0x00B0) (CPF_Edit, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture>                     KillFeedIcon;                                             // 0x0108(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USoundBase>                   RecieverImpactSound;                                      // 0x0130(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UWeaponInstance*/                  WeaponClass;                                              // 0x0158(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXDamageType"));
		return ptr;
	}


	static class UClass* /*UDamageType*/ GetDamageType(const struct FDamageEvent& DamageEvent);
};


// Class ProjectX.DamageType_DeployableRocketTurret
// 0x0000 (0x0160 - 0x0160)
class UDamageType_DeployableRocketTurret : public UProjectXDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DamageType_DeployableRocketTurret"));
		return ptr;
	}

};


// Class ProjectX.DamageType_DeployableTurret
// 0x0000 (0x0160 - 0x0160)
class UDamageType_DeployableTurret : public UProjectXDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DamageType_DeployableTurret"));
		return ptr;
	}

};


// Class ProjectX.DamageType_EMP
// 0x0000 (0x0160 - 0x0160)
class UDamageType_EMP : public UProjectXDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DamageType_EMP"));
		return ptr;
	}

};


// Class ProjectX.DamageType_Environmental
// 0x0000 (0x0160 - 0x0160)
class UDamageType_Environmental : public UProjectXDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DamageType_Environmental"));
		return ptr;
	}

};


// Class ProjectX.DamageType_Fire
// 0x0000 (0x0160 - 0x0160)
class UDamageType_Fire : public UProjectXDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DamageType_Fire"));
		return ptr;
	}

};


// Class ProjectX.DamageType_God
// 0x0000 (0x0160 - 0x0160)
class UDamageType_God : public UProjectXDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DamageType_God"));
		return ptr;
	}

};


// Class ProjectX.DamageType_Grenade
// 0x0000 (0x0160 - 0x0160)
class UDamageType_Grenade : public UProjectXDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DamageType_Grenade"));
		return ptr;
	}

};


// Class ProjectX.DamageType_Physical
// 0x0000 (0x0160 - 0x0160)
class UDamageType_Physical : public UProjectXDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DamageType_Physical"));
		return ptr;
	}

};


// Class ProjectX.DamageType_Suicide
// 0x0000 (0x0160 - 0x0160)
class UDamageType_Suicide : public UProjectXDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DamageType_Suicide"));
		return ptr;
	}

};


// Class ProjectX.DashComponent
// 0x0020 (0x00F8 - 0x00D8)
class UDashComponent : public UProxyMovementComponent
{
public:
	float                                              DashForce;                                                // 0x00D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DashTime;                                                 // 0x00DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DashStaminaCost;                                          // 0x00E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x14];                                      // 0x00E4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DashComponent"));
		return ptr;
	}

};


// Class ProjectX.DataManager
// 0x0000 (0x0028 - 0x0028)
class UDataManager : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DataManager"));
		return ptr;
	}


	static bool DoesAssetExist(TSoftObjectPtr<class UObject> Asset);
};


// Class ProjectX.DeathInfoWidget
// 0x0008 (0x02F0 - 0x02E8)
class UDeathInfoWidget : public UAdvancedUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DeathInfoWidget"));
		return ptr;
	}


	bool GetWasShown();
};


// Class ProjectX.DeployableTurret
// 0x0020 (0x0530 - 0x0510)
class ADeployableTurret : public ADeployable
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0510(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCapsuleComponent*                           Collider;                                                 // 0x0518(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UTurretComponent*                            Turret;                                                   // 0x0520(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0528(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DeployableTurret"));
		return ptr;
	}

};


// Class ProjectX.DeployableAutonomousTurret
// 0x0000 (0x0530 - 0x0530)
class ADeployableAutonomousTurret : public ADeployableTurret
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DeployableAutonomousTurret"));
		return ptr;
	}

};


// Class ProjectX.DeployableControllable
// 0x0030 (0x0540 - 0x0510)
class ADeployableControllable : public ADeployable
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0510(0x0008) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnControlLost;                                            // 0x0518(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0528(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DeployableControllable"));
		return ptr;
	}


	void Server_MoveDeployable_Unreliable(EDeployableMovementDirection Acceleration);
	void K2_OnControlLost();
	void K2_OnControlAssumed();
	class UStaticMeshComponent* GetControlledMesh();
};


// Class ProjectX.DeployableControlledDrone
// 0x0060 (0x05A0 - 0x0540)
class ADeployableControlledDrone : public ADeployableControllable
{
public:
	struct FVector                                     LaunchVelocity;                                           // 0x0540(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              YawBreakingRate;                                          // 0x054C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              PitchAccelerationRate;                                    // 0x0550(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector2D                                   MinMaxYawRotationAcceleration;                            // 0x0554(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              LocationInterpolationSpeed;                               // 0x055C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RotationInterpolationSpeed;                               // 0x0560(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DroneAcceleration;                                        // 0x0564(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0568(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DeployableControlledDrone"));
		return ptr;
	}


	void Multicast_Explosion_PlayExplosionEffects_Unreliable(const struct FVector& ExplosionLocation);
	void K2_PlayExplosionEffects(const struct FVector& ExplosionLocation);
	void K2_OnYawRotation(float YawValue);
	void K2_OnPitchRotation(float PitchValue);
	struct FVector GetAcceleration();
};


// Class ProjectX.DeployableControlledRocket
// 0x00A0 (0x05E0 - 0x0540)
class ADeployableControlledRocket : public ADeployableControllable
{
public:
	float                                              DistanceCheckForWarningTargets;                           // 0x0540(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RadiusForWarningTargets;                                  // 0x0544(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              TargetWarningMinDot;                                      // 0x0548(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bApplyLaunchVelocityAfterDeploy;                          // 0x054C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x054D(0x0003) MISSED OFFSET
	struct FVector                                     LaunchVelocity;                                           // 0x0550(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxSpeed;                                                 // 0x055C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SpeedIncreasePerSecond;                                   // 0x0560(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              LocationInterpolationSpeed;                               // 0x0564(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RotationInterpolationSpeed;                               // 0x0568(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              YawBreakingRate;                                          // 0x056C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              PitchAccelerationRate;                                    // 0x0570(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector2D                                   MinMaxYawRotationAcceleration;                            // 0x0574(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    RocketMeshRotationOffset;                                 // 0x057C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UDamageType*/                      ExplosionDamageType;                                      // 0x0588(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ImpactDepenetrationAmount;                                // 0x0590(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bUseWeaponDamageAsImpactdamage;                           // 0x0594(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0595(0x0003) MISSED OFFSET
	float                                              ExplosionRadius;                                          // 0x0598(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ExplosionDamageMin;                                       // 0x059C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ExplosionDamageMax;                                       // 0x05A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ExplosionDamageFallOff;                                   // 0x05A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxLifetimeForDamageMultiplication;                       // 0x05A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x4];                                       // 0x05AC(0x0004) MISSED OFFSET
	class UCurveFloat*                                 LifetimeBasedDamageMultiplierCurve;                       // 0x05B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x28];                                      // 0x05B8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DeployableControlledRocket"));
		return ptr;
	}


	void SetWarningState(bool bNewState);
	void Server_Reliable_Fire();
	void OnRocketHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void Multicast_Explosion_PlayExplosionEffects_Unreliable(const struct FVector& ExplosionLocation);
	void K2_PlayExplosionEffects(const struct FVector& ExplosionLocation);
};


// Class ProjectX.DeployableHealProjector
// 0x0000 (0x0510 - 0x0510)
class ADeployableHealProjector : public ADeployable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DeployableHealProjector"));
		return ptr;
	}

};


// Class ProjectX.DeployableMarker
// 0x0018 (0x0248 - 0x0230)
class ADeployableMarker : public AActor
{
public:
	unsigned char                                      PlacementFlags;                                           // 0x0230(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0231(0x0003) MISSED OFFSET
	float                                              DeployRadius;                                             // 0x0234(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                RadialTestPoints;                                         // 0x0238(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxDeploySlope;                                           // 0x023C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxDeployVerticalDelta;                                   // 0x0240(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDebug;                                                   // 0x0244(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      PlacementTestsToRun;                                      // 0x0245(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0246(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DeployableMarker"));
		return ptr;
	}


	bool ShouldTestBeRun(EPlacementTests DataType);
	void OnMarkerSuccess();
	void OnMarkerFailed(EPlacementFailureReason reason);
	bool IsValidPlacement();
	bool IsTooMuchZDifference();
	bool IsTooHighSlope();
	bool IsSkyObstructed();
	bool IsNotGrounded();
	float GetMaxVerticalDelta();
	float GetDeployRadius();
};


// Class ProjectX.DeployableMine
// 0x0070 (0x0580 - 0x0510)
class ADeployableMine : public ADeployable
{
public:
	class USphereComponent*                            Sphere;                                                   // 0x0510(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UDamageType*/                      DamageType;                                               // 0x0518(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MotionSensorRadius;                                       // 0x0520(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              LaunchTime;                                               // 0x0524(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              TriggerDelay;                                             // 0x0528(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ExplosionDamageMax;                                       // 0x052C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ExplosionDamageMin;                                       // 0x0530(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DamageFalloff;                                            // 0x0534(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ExplosionRadius;                                          // 0x0538(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              TriggeredLaunchHeight;                                    // 0x053C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UAfflictionInstance*/              ProximityWarningAfflictionClass;                          // 0x0540(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<TEnumAsByte<ECollisionChannel>>             AllowableBounceProfiles;                                  // 0x0548(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0558(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DeployableMine"));
		return ptr;
	}


	void OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnMineTriggered();
	void OnMineStopMoving(const struct FHitResult& ImpactResult);
	void OnMineBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void OnMineArmed(const struct FHitResult& ImpactResult);
	void OnExplosion();
	void Multicast_MineTriggered_PlayTriggerEffects_Unrealiable();
	void Multicast_Explosion_PlayExplosionEffects_Unreliable();
	float GetTriggerDelayTime();
	float GetMotionSensorSize();
	float GetLaunchTime();
	float GetLaunchHeight();
	float GetExplosionRadius();
	void Explosion();
};


// Class ProjectX.DeployableScoutingDrone
// 0x0040 (0x0550 - 0x0510)
class ADeployableScoutingDrone : public ADeployable
{
public:
	bool                                               bScanWhenTargetMet;                                       // 0x0510(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0511(0x0003) MISSED OFFSET
	float                                              FinalScanRange;                                           // 0x0514(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bFinalScanRevealsInvisibleTargets;                        // 0x0518(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bFinalScanIgnoresObstacles;                               // 0x0519(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x36];                                      // 0x051A(0x0036) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DeployableScoutingDrone"));
		return ptr;
	}


	void OnDroneSpotted();
	void OnDroneMovementStopped(const struct FHitResult& ImpactResult);
	void OnDroneEnd();
	void K2_StopScan();
	void K2_StartScan();
};


// Class ProjectX.DeployableSpawnPoint
// 0x0000 (0x0510 - 0x0510)
class ADeployableSpawnPoint : public ADeployable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DeployableSpawnPoint"));
		return ptr;
	}

};


// Class ProjectX.DeployableStasisTrap
// 0x0060 (0x0570 - 0x0510)
class ADeployableStasisTrap : public ADeployable
{
public:
	float                                              GatherDuration;                                           // 0x0510(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RaiseDuration;                                            // 0x0514(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              AffectDuration;                                           // 0x0518(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x051C(0x0004) MISSED OFFSET
	class UClass* /*UAfflictionInstance*/              StasisAffliction;                                         // 0x0520(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UWeaponInstance*/                  WeaponInstance;                                           // 0x0528(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0530(0x0030) MISSED OFFSET
	class UStaticMeshComponent*                        RootMeshComponent;                                        // 0x0560(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0568(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DeployableStasisTrap"));
		return ptr;
	}


	void TriggerTrap();
	void Server_TriggerTrap();
	void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnComponentOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	float GetGatheringDuration();
};


// Class ProjectX.DeployScreenWidget
// 0x0020 (0x0308 - 0x02E8)
class UDeployScreenWidget : public UAdvancedUserWidget
{
public:
	struct FString                                     FirstDeployVoice;                                         // 0x02E8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x10];                                      // 0x02F8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DeployScreenWidget"));
		return ptr;
	}


	void K2_OnPlayerDeployed();
};


// Class ProjectX.DesignatorMarker
// 0x0060 (0x0290 - 0x0230)
class ADesignatorMarker : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0230(0x0010) MISSED OFFSET
	class APlayerState*                                PlayerOwner;                                              // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class USphereComponent*                            SceneComponent;                                           // 0x0248(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UShapeComponent*                             ShapeComponent;                                           // 0x0250(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DesignatorRadius;                                         // 0x0258(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DesignatorLocationLerpSpeed;                              // 0x025C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0260(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DesignatorMarker"));
		return ptr;
	}


	void ToggleValidDesignator(bool bValid);
	void StartCharge(float TotalTime, float ElapsedTime);
	void K2_UpdateValidDesignator(bool bValidDesignator);
	void K2_StartCharge(float TotalTime, float ElapsedTime);
	void K2_EndCharge(float TotalTime, float ElapsedTime);
	bool IsLocallyOwned();
	void InitializeForTeam(int Team);
	float GetDesignatorRadius();
	void EndCharge(float TotalTime, float ElapsedTime);
	void Complete();
};


// Class ProjectX.DestroyableObjective
// 0x0128 (0x0358 - 0x0230)
class ADestroyableObjective : public AActor
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0230(0x0080) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnObjectiveDamaged;                                       // 0x02B0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnObjectiveDestroyed;                                     // 0x02C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnObjectiveOwnerChanged;                                  // 0x02D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnObjectiveActivationChanged;                             // 0x02E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnObjectiveProperlyInitialized;                           // 0x02F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnTeamChangedEvent;                                       // 0x0300(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	float                                              MaxHealth;                                                // 0x0310(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bUsePassiveHealthRegen;                                   // 0x0314(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0315(0x0003) MISSED OFFSET
	float                                              PassiveHealthRegenDelay;                                  // 0x0318(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              PassiveHealthRegenRate;                                   // 0x031C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bUserOwnerTeam;                                           // 0x0320(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	EXPEventType                                       OnDamageTakenXPEvent;                                     // 0x0321(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	EXPEventType                                       OnDeathXPEvent;                                           // 0x0322(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bRegisterTargetOnBeginPlay;                               // 0x0323(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x24];                                      // 0x0324(0x0024) MISSED OFFSET
	float                                              Health;                                                   // 0x0348(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	int                                                Team;                                                     // 0x034C(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	bool                                               bIsActive;                                                // 0x0350(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0351(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DestroyableObjective"));
		return ptr;
	}


	void OnRep_Team();
	void OnRep_Health(float PreviousHealth);
	void OnRep_Activation();
	void OnObjectiveInitialized();
	void Multicast_Die(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, const struct FHitResult& Hit, class APlayerState* InstigatorPlayerState);
	bool IsObjectiveProperlyInitialized();
	bool IsObjectiveActive();
};


// Class ProjectX.DevastatorTurret
// 0x0010 (0x0240 - 0x0230)
class ADevastatorTurret : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0230(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DevastatorTurret"));
		return ptr;
	}

};


// Class ProjectX.HUDBasicUserWidget
// 0x0008 (0x0278 - 0x0270)
class UHUDBasicUserWidget : public UBasicUserWidget
{
public:
	bool                                               bCanBeDestroyed;                                          // 0x0270(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bCanBeHidden;                                             // 0x0271(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bUseVisibilityCount;                                      // 0x0272(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0273(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.HUDBasicUserWidget"));
		return ptr;
	}


	void RemoveHUDBasicUserWidgetFromWidgetList();
	bool CanBeHidden();
	bool CanBeDestroyed();
	void AddHUDBasicUserWidgetToWidgetList();
	void AddChildWidget(class UUserWidget* ChildWidget);
};


// Class ProjectX.DialogueWidget
// 0x0000 (0x0278 - 0x0278)
class UDialogueWidget : public UHUDBasicUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DialogueWidget"));
		return ptr;
	}


	void OnStopTalking();
	void OnStartTalking(const struct FText& Dialogue, float DurationSeconds);
};


// Class ProjectX.ManagedStateActor
// 0x0008 (0x0238 - 0x0230)
class AManagedStateActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0230(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ManagedStateActor"));
		return ptr;
	}


	void SetState(class AController* Sender, unsigned char NewState, bool bIsFromInit);
	void RequestStateChange(class AController* Sender, unsigned char NewState);
	void OnStateChanged(bool bIsFromInit);
	unsigned char GetStateCount();
	unsigned char GetState();
	unsigned char GetLastState();
	unsigned char GetAutoIncrementState();
};


// Class ProjectX.Door
// 0x0080 (0x02B8 - 0x0238)
class ADoor : public AManagedStateActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET
	class UStaticMeshComponent*                        DoorMesh;                                                 // 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UBoxComponent*                               Inside;                                                   // 0x0248(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UBoxComponent*                               DoorCollisionAndNavigationBlocker;                        // 0x0250(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UBoxComponent*                               Outside;                                                  // 0x0258(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class USceneComponent*                             DoorHinge;                                                // 0x0260(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class USceneComponent*                             DoorRoot;                                                 // 0x0268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UInteractableComponent*                      Interactable;                                             // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FText                                       OpenDoorText;                                             // 0x0278(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FText                                       CloseDoorText;                                            // 0x0290(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	float                                              InsideDegreesOpen;                                        // 0x02A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              OutsideDegreesOpen;                                       // 0x02AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EDoorState                                         InitialState;                                             // 0x02B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EEasingFunc>                           DoorAnimationEaseType;                                    // 0x02B1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x02B2(0x0002) MISSED OFFSET
	float                                              DoorOpenInterpolationTime;                                // 0x02B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.Door"));
		return ptr;
	}


	void OnSelected(class APlayerController* Sender, class UPrimitiveComponent* Component);
	void OnOutsideOfDoor(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnInsideOfDoor(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void AnimateDoor(float InterpDegrees, bool bIsFromInit);
};


// Class ProjectX.DriverCameraManager
// 0x0000 (0x27C0 - 0x27C0)
class ADriverCameraManager : public APlayerCameraManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DriverCameraManager"));
		return ptr;
	}

};


// Class ProjectX.DropsComponent
// 0x0020 (0x00E8 - 0x00C8)
class UDropsComponent : public UActorComponent
{
public:
	float                                              XLocationDeviation;                                       // 0x00C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              YLocationDeviation;                                       // 0x00CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DepenetrationAmount;                                      // 0x00D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RayDistance;                                              // 0x00D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<struct FDropData>                           ListOfDrop;                                               // 0x00D8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.DropsComponent"));
		return ptr;
	}


	void SpawnDrops(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState);
};


// Class ProjectX.EditorUtilities
// 0x0000 (0x0028 - 0x0028)
class UEditorUtilities : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.EditorUtilities"));
		return ptr;
	}


	static void SpawnObjects(class UClass* /*UObject*/ ActorToSpawn, class AActor* BoundsVolume, int Count, bool bGroundSpawnedActors, bool bConformToSlopes, bool bRandomRotation, const struct FVector& Offset, bool bAvoidOverlappingActors, bool bAllowStaticMesh, bool bAllowLandscapes, bool bLimitToSurfaceTypes, TArray<TEnumAsByte<EPhysicalSurface>> SurfaceTypes);
	static void ReplaceObjects(class UObject* WorldContextObject, const struct FString& PartialMatch, class UClass* /*AActor*/ Replacement);
};


// Class ProjectX.EnvQueryContext_Target
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_Target : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.EnvQueryContext_Target"));
		return ptr;
	}

};


// Class ProjectX.EnvQueryContext_TargetViewpoint
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_TargetViewpoint : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.EnvQueryContext_TargetViewpoint"));
		return ptr;
	}

};


// Class ProjectX.ExperienceConfiguration
// 0x00A0 (0x00C8 - 0x0028)
class UExperienceConfiguration : public UObject
{
public:
	TMap<EXPEventType, class UClass* /*UExperienceEvent*/> NotificationMap;                                          // 0x0028(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_UObjectWrapper, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0078(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ExperienceConfiguration"));
		return ptr;
	}


	static int GetExperienceForEvent(class UObject* WorldContextObject, EXPEventType Type);
	static EXPEventType GetExperienceEventType(class UObject* WorldContextObject, class UClass* /*UExperienceEvent*/ Event);
	class UClass* /*UExperienceEvent*/ GetExperienceEventClass(EXPEventType Type);
	static class UExperienceConfiguration* Get(class UObject* WorldContextObject);
};


// Class ProjectX.ExperienceEvent
// 0x0030 (0x0058 - 0x0028)
class UExperienceEvent : public UObject
{
public:
	struct FText                                       Message;                                                  // 0x0028(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	int                                                Experience;                                               // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	EDisplayType                                       DisplayType;                                              // 0x0044(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	class USoundBase*                                  Sound;                                                    // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bShowOverheadNotification;                                // 0x0050(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              OverheadNotificationDuration;                             // 0x0054(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ExperienceEvent"));
		return ptr;
	}


	class USoundBase* GetSound();
	bool GetShowOverheadNotification();
	float GetOverheadNotificationDuration();
	struct FText GetMessage();
	int GetExperience();
	EDisplayType GetDisplayType();
};


// Class ProjectX.Explodables
// 0x0168 (0x0398 - 0x0230)
class AExplodables : public AActor
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0230(0x0088) MISSED OFFSET
	class UClass* /*UDamageType*/                      DamageType;                                               // 0x02B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // 0x02C0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              MaxHealth;                                                // 0x02D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	class UClass* /*UWeaponInstance*/                  OwningWeaponInstanceClass;                                // 0x02D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDelayExplosion;                                          // 0x02E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02E1(0x0003) MISSED OFFSET
	float                                              ExplosionDelay;                                           // 0x02E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ExplosionDamageMax;                                       // 0x02E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ExplosionDamageMin;                                       // 0x02EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DamageFalloff;                                            // 0x02F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ExplosionRadius;                                          // 0x02F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0xA0];                                      // 0x02F8(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.Explodables"));
		return ptr;
	}


	void OnExplosionTriggered();
	void Multicast_Reliable_Died(float Damage, const struct FDamageEvent& DamageEvent, class AActor* DamageCauser);
	float GetDamageMax();
};


// Class ProjectX.Flag
// 0x0110 (0x0340 - 0x0230)
class AFlag : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0230(0x0020) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnFlagPickedUp;                                           // 0x0250(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFlagReturned;                                           // 0x0260(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFlagCaptured;                                           // 0x0270(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFlagDropped;                                            // 0x0280(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFlagStateUpdated;                                       // 0x0290(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnCarrierCharacterUpdatedEvent;                           // 0x02A0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>                   RadarIcon;                                                // 0x02B0(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RadarIconOpacity;                                         // 0x02D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RadarIconOpacityWhenCarried;                              // 0x02DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RadarIconOpacityWhenDropped;                              // 0x02E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FFlagInfo                                   FlagInfo;                                                 // 0x02E4(0x0014) (CPF_Net, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	int                                                Team;                                                     // 0x02F8(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bCanBePickedUp;                                           // 0x02FC(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02FD(0x0003) MISSED OFFSET
	float                                              PickupRadius;                                             // 0x0300(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0304(0x0004) MISSED OFFSET
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x0308(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UAfflictionInstance*/              FlagCarrierAfflictionInstance;                            // 0x0310(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              PickupDelay;                                              // 0x0318(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDoesFlagResetOnCapture;                                  // 0x031C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x3];                                       // 0x031D(0x0003) MISSED OFFSET
	TArray<class UClass* /*AActor*/>                   ActorClassesToTriggerReset;                               // 0x0320(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_UObjectWrapper, CPF_NativeAccessSpecifierProtected)
	class USphereComponent*                            Sphere;                                                   // 0x0330(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0338(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.Flag"));
		return ptr;
	}


	void OnRep_FlagInfo();
	void OnRep_CanBePickedUp();
	void OnOverlap(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnCarrierEnterSoftBoundary(class AActor* Actor, class ASoftBoundaryVolume* TargetSoftBoundaryVolume);
	float GetPickupRadius();
	struct FFlagInfo GetFlagInfo();
	class UClass* /*UAfflictionInstance*/ GetFlagCarrierAffliction();
	class AProjectXCharacter* GetCharacter();
	class UCapsuleComponent* GetCapsuleComponent();
	void FlagStatUpdated();
	void FlagPickupUpdated();
	void FlagAfflictionEnded();
	void CarrierDied(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState);
	bool CanBePickedUp();
};


// Class ProjectX.FlagSpawn
// 0x00E0 (0x0310 - 0x0230)
class AFlagSpawn : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0230(0x0030) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnFlagUpdatedEvent;                                       // 0x0260(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFlagCapturedEvent;                                      // 0x0270(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFlagStateUpdatedEvent;                                  // 0x0280(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	TArray<class AActor*>                              PlayerStartList;                                          // 0x0290(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	bool                                               bFlagIsHome;                                              // 0x02A0(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02A1(0x0007) MISSED OFFSET
	class AFlag*                                       Flag;                                                     // 0x02A8(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UTexture2D>                   RadarIcon;                                                // 0x02B0(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RadarIconOpacity;                                         // 0x02D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              FlagSpawnDistanceScoringWeight;                           // 0x02DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*AFlag*/                            FlagClass;                                                // 0x02E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<class AStartPointVolume*>                   StartPointVolumes;                                        // 0x02E8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	int                                                Team;                                                     // 0x02F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02FC(0x0004) MISSED OFFSET
	class USphereComponent*                            Sphere;                                                   // 0x0300(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDoesFlagResetIfCaptured;                                 // 0x0308(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bCanFlagBeCapturedWhenNotHome;                            // 0x0309(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	EFlagSpawnBehaviour                                FlagBehaviour;                                            // 0x030A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x5];                                       // 0x030B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.FlagSpawn"));
		return ptr;
	}


	void ResetFlag(class AFlag* FlagReset, class AProjectXCharacter* Character, int FlagTeam);
	void OnRep_FlagState();
	void OnRep_Flag();
	void OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnFlagReset();
	void OnFlagPickedUp(class AFlag* FlagPickedUp, class AProjectXCharacter* Character, int FlagTeam);
	void OnFlagCaptured();
	void Multicast_OnFlagCaptured();
	bool IsFlagHome();
	class AFlag* GetFlag();
};


// Class ProjectX.FOVCameraModifier
// 0x0008 (0x0050 - 0x0048)
class UFOVCameraModifier : public UCameraModifier
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.FOVCameraModifier"));
		return ptr;
	}

};


// Class ProjectX.GameGlobals
// 0x00C0 (0x00F8 - 0x0038)
class UGameGlobals : public UDeveloperSettings
{
public:
	struct FRuntimeFloatCurve                          AnalogCursorAccelerationCurve;                            // 0x0038(0x0088) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPrivate)
	float                                              MaxAnalogCursorSpeed;                                     // 0x00C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              MaxAnalogCursorSpeedWhenHovered;                          // 0x00C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              AnalogCursorDragCoefficient;                              // 0x00C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              AnalogCursorDragCoefficientWhenHovered;                   // 0x00CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              MinAnalogCursorSpeed;                                     // 0x00D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              AnalogCursorDeadZone;                                     // 0x00D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              AnalogCursorAccelerationMultiplier;                       // 0x00D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              AnalogCursorSize;                                         // 0x00DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	bool                                               bUseEngineAnalogCursor;                                   // 0x00E0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	bool                                               bAnalogCursorNoAcceleration;                              // 0x00E1(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x16];                                      // 0x00E2(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.GameGlobals"));
		return ptr;
	}

};


// Class ProjectX.VivoxGameInstance
// 0x01A0 (0x0800 - 0x0660)
class UVivoxGameInstance : public USteamBeaconGameInstance
{
public:
	struct FMulticastScriptDelegate                    OnParticipantUpdated;                                     // 0x0660(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x190];                                     // 0x0670(0x0190) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.VivoxGameInstance"));
		return ptr;
	}


	void UpdatePushToTalk(bool bNewPushToTalk);
	void UpdateParticipantVolume(float Volume);
	bool IsUsingPushToTalk();
	static struct FString GetVivoxSafePlayerName(const struct FString& BaseName);
	static struct FString GetVivoxSafeName(const struct FString& BaseName);
	static class APlayerState* GetPlayerStateByVivoxName(class UObject* WorldContextObject, struct FString* ID);
	float GetParticipantVolume();
};


// Class ProjectX.GameInstanceLoadingScreen
// 0x0608 (0x0E08 - 0x0800)
class UGameInstanceLoadingScreen : public UVivoxGameInstance
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0800(0x0010) MISSED OFFSET
	struct FSlateBrush                                 LoadingScreenBackground;                                  // 0x0810(0x0088) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FSlateBrush                                 LoadingScreenForeground;                                  // 0x0898(0x0088) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FSlateBrush                                 LoadingScreenLoadIcon;                                    // 0x0920(0x0088) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FSlateBrush                                 MiddleGroundTitleBrush;                                   // 0x09A8(0x0088) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FSlateBrush                                 LoadingScreenFrame;                                       // 0x0A30(0x0088) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FSlateBrush                                 MapTitleBackground;                                       // 0x0AB8(0x0088) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FSlateFontInfo                              LoadingScreenLevelNameFont;                               // 0x0B40(0x0058) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FSlateFontInfo                              LoadingScreenLevelSizeFont;                               // 0x0B98(0x0058) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FSlateFontInfo                              LoadingScreenAuthorNameFont;                              // 0x0BF0(0x0058) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FSlateFontInfo                              LoadingScreenDescriptionFont;                             // 0x0C48(0x0058) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FSlateFontInfo                              MapDescriptionFont;                                       // 0x0CA0(0x0058) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FSlateColor                                 LevelNameColor;                                           // 0x0CF8(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FSlateColor                                 ModeColor;                                                // 0x0D20(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FSlateColor                                 DescriptionColor;                                         // 0x0D48(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FText                                       DefaultLevelName;                                         // 0x0D70(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FText                                       DefaultAuthorName;                                        // 0x0D88(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FText                                       DefaultDescription;                                       // 0x0DA0(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FText                                       DefaultMapDescription;                                    // 0x0DB8(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FText                                       DefaultLevelSize;                                         // 0x0DD0(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FTimerHandle                                RemoveLoadingScreenTimer;                                 // 0x0DE8(0x0008) (CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0DF0(0x0008) MISSED OFFSET
	TArray<class ULevelInfo*>                          LevelInfoList;                                            // 0x0DF8(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.GameInstanceLoadingScreen"));
		return ptr;
	}


	void UpdateUseLoadingScreen(bool bNewUseLoadingScreen);
	void RemoveLoadingScreen();
	bool IsFading();
	void FadeScreen(float inFadeDuration, bool bInToBlack, float inFadeDelay, bool bInForceFadeToBlack);
};


// Class ProjectX.GlobalAmmoComponent
// 0x00F8 (0x01C0 - 0x00C8)
class UGlobalAmmoComponent : public UActorComponent
{
public:
	struct FMulticastScriptDelegate                    OnGlobalAmmoChanged;                                      // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnGlobalAmmoRestockTimerChanged;                          // 0x00D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnGlobalAmmoRestockComplete;                              // 0x00E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	TArray<struct FGlobalWeaponAmmo>                   GlobalAmmoList;                                           // 0x00F8(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      Counter;                                                  // 0x0108(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0xB7];                                      // 0x0109(0x00B7) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.GlobalAmmoComponent"));
		return ptr;
	}


	void OnRep_GlobalAmmoList();
	void GlobalWeaponAmmoRestock(class UClass* /*UWeaponInstance*/ Weapon);
	void GlobalWeaponAmmoReset(class UClass* /*UWeaponInstance*/ Weapon);
	float GetTimeUntilNextRestock(class UClass* /*UWeaponInstance*/ Weapon);
	float GetGlobalWeaponAmmo(class UClass* /*UWeaponInstance*/ Weapon);
	struct FGlobalWeaponAmmo GetGlobalAmmoEntry(class UWeaponInstance* Weapon);
	void ForceNetUpdate();
};


// Class ProjectX.GlobalEffectSystem
// 0x0000 (0x0230 - 0x0230)
class AGlobalEffectSystem : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.GlobalEffectSystem"));
		return ptr;
	}


	static void PlaySoundAtLocationForAllPlayers(class UObject* WorldContextObject, class USoundBase* SoundToPlay, const struct FVector& Location);
	void Multicast_PlaySoundAtLocation(class USoundBase* SoundToPlay, const struct FVector_NetQuantize& Location);
};


// Class ProjectX.GroundEffectVolume
// 0x0038 (0x0268 - 0x0230)
class AGroundEffectVolume : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0230(0x0008) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnTeamChangedEvent;                                       // 0x0238(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	class UAfflictionVolume*                           AfflictionVolume;                                         // 0x0248(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                TeamOwner;                                                // 0x0250(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              GroundEffectSpawnRadius;                                  // 0x0254(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              NumberOfGroundEffects;                                    // 0x0258(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Alpha;                                                    // 0x025C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              TestHeight;                                               // 0x0260(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0264(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.GroundEffectVolume"));
		return ptr;
	}


	void SpawnGroundEffects(float AreaRadius, float NumberOfPoints);
	void SpawnGroundEffectAtPosition(const struct FVector& Position);
	void OnRep_TeamOwner();
};


// Class ProjectX.GuidedDesignatorActor
// 0x0010 (0x0260 - 0x0250)
class AGuidedDesignatorActor : public AWeaponInstanceActor
{
public:
	struct FVector                                     DesignatorTargetLocation;                                 // 0x0250(0x000C) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x025C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.GuidedDesignatorActor"));
		return ptr;
	}


	struct FVector GetDesignatorTargetLocation();
};


// Class ProjectX.HealthInterface
// 0x0000 (0x0028 - 0x0028)
class UHealthInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.HealthInterface"));
		return ptr;
	}


	void UnbindShieldsRepairedEvent(const struct FScriptDelegate& Event);
	void UnbindShieldsDepletedEvent(const struct FScriptDelegate& Event);
	void UnbindShieldsChangedEvent(const struct FScriptDelegate& Event);
	void UnbindHealthChangedEvent(const struct FScriptDelegate& Event);
	void UnbindHealedEvent(const struct FScriptDelegate& Event);
	void UnbindDeathEvent(const struct FScriptDelegate& Event);
	void UnbindDamageEvent(const struct FScriptDelegate& Event);
	void SetShields(float InShields);
	void SetShieldRegenRate(float NewRate);
	void SetShieldAndHealthRegenRate(float NewRate);
	void SetOvershield(float NewOvershield);
	void SetMaxShields(float NewMaxHealth);
	void SetMaxHealth(float NewMaxHealth);
	void SetHealthRegenRate(float NewRate);
	void SetHealthPickupModifier(float NewModifier);
	void SetHealth(float InHealth);
	void SetExplosiveDamageResistance(float NewValue);
	void SetDamageResistance(float NewValue);
	void SetCanUsePassiveShieldRegen(bool bNewUsePassiveShieldRegen);
	void SetCanModifyShieldsPastOverchargeMark(bool bNewCanOverchargeShields);
	void RemoveOverchargedShields();
	void ModifyShieldsThenHealth(float Delta);
	void ModifyShields(float Delta, bool bCanOvercharge);
	void ModifyHealth(float Delta);
	bool IsUsingPassiveShieldRegen();
	bool IsHealthWithinGivenPercentage(float TargetPercentage, bool bCheckForLessThanPercentage);
	bool IsHealthFull();
	bool IsDead();
	bool IsArmored();
	bool HasShieldsThatNeedRecharging();
	bool HasShields();
	bool HasRecentlyTakenDamage();
	float GetTotalPercentHealth();
	float GetTimeSinceLastDamage();
	struct FMulticastScriptDelegate GetShieldsRepairedEvent();
	struct FMulticastScriptDelegate GetShieldsDepletedEvent();
	struct FMulticastScriptDelegate GetShieldsChangedEvent();
	float GetShields();
	float GetPercentShields();
	float GetPercentOverchargedShields();
	float GetPercentHealth();
	float GetOvershield();
	float GetMaxShieldsWithOvercharge();
	float GetMaxShields();
	float GetMaxHealth();
	float GetHealthPickupModifier();
	struct FMulticastScriptDelegate GetHealthChangedEvent();
	float GetHealth();
	struct FMulticastScriptDelegate GetHealedEvent();
	float GetExplosiveDamageResistance();
	struct FMulticastScriptDelegate GetDeathEvent();
	float GetDamageResistance();
	struct FMulticastScriptDelegate GetDamageEvent();
	bool GetCachedUsesPassiveShieldRegen();
	float GetCachedOvershield();
	float GetCachedMaxShields();
	float GetCachedMaxHealth();
	class UAfflictionComponent* GetAfflictionComponent();
	void ClearAllToDeathEvents();
	void ClearAllShieldsRepairedEvents();
	void ClearAllShieldsDepletedEvents();
	void ClearAllShieldsChangedEvents();
	void ClearAllHealthChangedEvents();
	void ClearAllHealedEvents();
	void ClearAllDamageEvents();
	bool CanModifyShieldsPastOverchargeMark();
	bool CanBeRepaired(class AActor* RepairInstigator);
	bool BlocksExplosions();
	void BindToShieldsRepairedEvent(const struct FScriptDelegate& Event);
	void BindToShieldsDepletedEvent(const struct FScriptDelegate& Event);
	void BindToShieldsChangedEvent(const struct FScriptDelegate& Event);
	void BindToHealthChangedEvent(const struct FScriptDelegate& Event);
	void BindToHealedEvent(const struct FScriptDelegate& Event);
	void BindToDeathEvent(const struct FScriptDelegate& Event);
	void BindToDamageEvent(const struct FScriptDelegate& Event);
	bool AreShieldsOvercharged();
	bool AreShieldsFull();
};


// Class ProjectX.HookshotComponent
// 0x00A8 (0x0170 - 0x00C8)
class UHookshotComponent : public UActorComponent
{
public:
	struct FMulticastScriptDelegate                    OnHookshotStart;                                          // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnHookshotStop;                                           // 0x00D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnHookshotTargetAvailable;                                // 0x00E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnHookshotTargetNotAvailable;                             // 0x00F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0108(0x0004) MISSED OFFSET
	float                                              HookshootInitialCost;                                     // 0x010C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              HookshotLength;                                           // 0x0110(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MinDotAllowedOnHook;                                      // 0x0114(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bShouldHookshotResetJumpCount;                            // 0x0118(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	TArray<float>                                      RangeCheckFailsafes;                                      // 0x0120(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              CooldownInSeconds;                                        // 0x0130(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              HookshotDisengagementDistance;                            // 0x0134(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0138(0x0008) MISSED OFFSET
	class AProjectXCharacter*                          CharacterOwner;                                           // 0x0140(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     HookshotLocation;                                         // 0x0148(0x000C) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x1C];                                      // 0x0154(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.HookshotComponent"));
		return ptr;
	}


	void Server_Unreliable_SetHookedLocation(const struct FVector& HookedLocation);
	void OnRep_HookedLocation();
	void OnComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	struct FVector GetHookshotLocation();
	class UPrimitiveComponent* GetHookedComponent();
	void CheckCustomMovementToggle(ECustomMovementType CustomMovementType, bool bToggledState);
};


// Class ProjectX.HordeModeLandingScreen
// 0x0000 (0x02E8 - 0x02E8)
class UHordeModeLandingScreen : public UAdvancedUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.HordeModeLandingScreen"));
		return ptr;
	}

};


// Class ProjectX.InputRebindingNodes
// 0x0000 (0x0028 - 0x0028)
class UInputRebindingNodes : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.InputRebindingNodes"));
		return ptr;
	}


	static void ResetToDefault(class UDataTable* InActionMapDataTable, class UDataTable* InAxisMapDataTable);
	static void RemoveAxisMapping(const struct FInputAxisMappingStruct& MappingData, bool* ReturnValue);
	static void RemoveActionMapping(const struct FInputActionMappingStruct& MappingData, bool* ReturnValue);
	static void RebindAxisMapping(const struct FInputAxisMappingStruct& AxisMapping, const struct FInputAxisMappingStruct& NewData, bool* ReturnValue);
	static void RebindActionMapping(const struct FInputActionMappingStruct& ActionMapping, const struct FInputActionMappingStruct& NewData, bool* ReturnValue);
	static struct FKey GetMouseButtonPressed(const struct FPointerEvent& Event, bool* ValidMouseButton);
	static void GetAllAxisMappings(const struct FInputAxisMappingStruct& FilterData, TArray<EAxisMappingFilter> Filters, bool* ReturnValue, TArray<struct FInputAxisMappingStruct>* AxisMappings);
	static void GetAllActionMappings(const struct FInputActionMappingStruct& FilterData, TArray<EActionMappingFilter> Filters, bool* ReturnValue, TArray<struct FInputActionMappingStruct>* ActionMappings);
	static void CreateNewAxisMapping(const struct FInputAxisMappingStruct& MappingData, bool* ReturnValue);
	static void CreateNewActionMapping(const struct FInputActionMappingStruct& MappingData, bool* ReturnValue);
	static bool AxisMappingNotEqualActionMapping(const struct FInputAxisMappingStruct& A, const struct FInputAxisMappingStruct& B);
	static bool AxisMappingEqualActionMapping(const struct FInputAxisMappingStruct& A, const struct FInputAxisMappingStruct& B);
	static bool ActionMappingNotEqualActionMapping(const struct FInputActionMappingStruct& A, const struct FInputActionMappingStruct& B);
	static bool ActionMappingEqualActionMapping(const struct FInputActionMappingStruct& A, const struct FInputActionMappingStruct& B);
};


// Class ProjectX.InteractableComponent
// 0x00F8 (0x01C0 - 0x00C8)
class UInteractableComponent : public UActorComponent
{
public:
	struct FMulticastScriptDelegate                    OnHighlight;                                              // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnHighlightExit;                                          // 0x00D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSelected;                                               // 0x00E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnHoldSelected;                                           // 0x00F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnHoldStarted;                                            // 0x0108(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnHoldExited;                                             // 0x0118(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnValidInteractionUpdatedEvent;                           // 0x0128(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsHighlightable;                                         // 0x0138(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0139(0x0007) MISSED OFFSET
	struct FText                                       HighlightText;                                            // 0x0140(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	EInteractionType                                   InteractionType;                                          // 0x0158(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0159(0x0003) MISSED OFFSET
	float                                              HoldDuration;                                             // 0x015C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0160(0x0008) MISSED OFFSET
	TMap<class UPrimitiveComponent*, struct FHighlightableComponent> PerComponentHighlightText;                                // 0x0168(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x8];                                       // 0x01B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.InteractableComponent"));
		return ptr;
	}


	void SetInteractionType(EInteractionType NewInteractionType);
	void SetHighlightText(const struct FText& NewHighlightText);
	void SetHighlightable(bool bHighlightable);
	bool RequiresHoldInteraction();
	bool HasHoldInteraction();
	float GetHoldTime();
	struct FText GetHighlightText(class UPrimitiveComponent* Component, class APlayerController* EventSender);
	bool CanInteract();
	bool CanHighlight(class UPrimitiveComponent* Component);
};


// Class ProjectX.InteractableInterface
// 0x0000 (0x0028 - 0x0028)
class UInteractableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.InteractableInterface"));
		return ptr;
	}


	struct FText GetHighlightText(class UPrimitiveComponent* Component, class APlayerController* EventSender);
};


// Class ProjectX.InteractionComponent
// 0x0078 (0x0140 - 0x00C8)
class UInteractionComponent : public UActorComponent
{
public:
	float                                              InteractionDistance;                                      // 0x00C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ServerInteractionDistanceAllowableError;                  // 0x00CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnHighlightEnter;                                         // 0x00D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnHighlightExit;                                          // 0x00E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnInteractionError;                                       // 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnHoldInteraction;                                        // 0x0100(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnHoldInteractionStop;                                    // 0x0110(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0120(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.InteractionComponent"));
		return ptr;
	}


	void StopInteract();
	void Server_StopHold();
	void Server_Select(class UInteractableComponent* HitInteractable, class UPrimitiveComponent* HitComponent);
	void Server_Hold(class UInteractableComponent* HitInteractable, class UPrimitiveComponent* HitComponent);
	void Interact();
	void FinishHoldInteract(class UInteractableComponent* HitInteractable, class UPrimitiveComponent* HitComponent);
	void ClearHoldInteract();
};


// Class ProjectX.InteriorVolume
// 0x0008 (0x0238 - 0x0230)
class AInteriorVolume : public AActor
{
public:
	class UBoxComponent*                               BoxComponent;                                             // 0x0230(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.InteriorVolume"));
		return ptr;
	}


	void OnComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class ProjectX.Interpolator
// 0x0000 (0x0230 - 0x0230)
class AInterpolator : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.Interpolator"));
		return ptr;
	}


	static bool IsInterpolationActive(class UObject* Caller, int ID);
	static void InvertInterpolator(class UObject* Caller, int ID);
	static int InterpolateOverTimeSimple(class UObject* WorldContextObject, float TimeTotal, TEnumAsByte<EEasingFunc> EaseType, const struct FScriptDelegate& Event, const struct FScriptDelegate& OnCompleteEvent);
	static int InterpolateOverTimeCustomCurve(class UObject* WorldContextObject, float TimeElapsed, float TimeTotal, float Start, float End, class UCurveFloat* Curve, const struct FScriptDelegate& Event, const struct FScriptDelegate& OnCompleteEvent);
	static int InterpolateOverTime(class UObject* WorldContextObject, float TimeElapsed, float TimeTotal, float Start, float End, TEnumAsByte<EEasingFunc> EaseType, const struct FScriptDelegate& Event, const struct FScriptDelegate& OnCompleteEvent);
	static void CompleteInterpolation(class UObject* Caller, int ID);
	static void ClearInterpolatorsForObject(class UObject* Object);
	static void ClearInterpolation(class UObject* Caller, int ID);
};


// Class ProjectX.ItemSpawner
// 0x0058 (0x0288 - 0x0230)
class AItemSpawner : public AActor
{
public:
	TMap<struct FName, struct FSpawnGroup>             SpawnGroups;                                              // 0x0230(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0280(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ItemSpawner"));
		return ptr;
	}

};


// Class ProjectX.JetPackComponent
// 0x0030 (0x00F8 - 0x00C8)
class UJetPackComponent : public UActorComponent
{
public:
	struct FMulticastScriptDelegate                    OnJetPackStart;                                           // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnJetPackStop;                                            // 0x00D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	class AProjectXCharacter*                          CharacterOwner;                                           // 0x00E8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bJetPackEnabled;                                          // 0x00F0(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.JetPackComponent"));
		return ptr;
	}


	void OnRep_JetPackEnabled();
	bool IsEnabled();
	void CheckCustomMovementToggle(ECustomMovementType CustomMovementType, bool bToggledState);
};


// Class ProjectX.KillCameraActor
// 0x0098 (0x02C8 - 0x0230)
class AKillCameraActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0230(0x0048) MISSED OFFSET
	TArray<class UMeshComponent*>                      KillCamActorMeshes;                                       // 0x0278(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FBoxSphereBounds                            KillerBounds;                                             // 0x0288(0x001C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     ActorPivotPoint;                                          // 0x02A4(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCameraComponent*                            Camera;                                                   // 0x02B0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class USpringArmComponent*                         SpringArm;                                                // 0x02B8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class USceneComponent*                             Root;                                                     // 0x02C0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.KillCameraActor"));
		return ptr;
	}


	void UpdateSpringArmLength(float Length);
	void SetWidgetPlacementPivot(const struct FVector& NewWidgetPlacementPivot);
	void SetKillerPivotPoint(const struct FVector& NewPivotPoint);
	void OnKillerFocused();
	void KillerFocused();
	void InitializeKillCameraActor(class AProjectXCharacter* Killed, class AActor* Killer, class AProjectXPlayerState* KillerState, class UClass* /*UDamageType*/ DamageType);
	class USpringArmComponent* GetSpringArm();
	struct FPoseSnapshot GetSnapShotPose();
	class UCameraComponent* GetCamera();
};


// Class ProjectX.KillCameraComponent
// 0x0090 (0x0158 - 0x00C8)
class UKillCameraComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnKillCamEnd;                                             // 0x00D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnKillCamFocusVictim;                                     // 0x00E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_BlueprintCallable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnKillCamFocusKiller;                                     // 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_BlueprintCallable, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UWidgetComponent*/                 KillCamWidgetComponentClass;                              // 0x0100(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              BlendToBeaconTime;                                        // 0x0108(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              WaitTimeBeforeBlendingToSpawnBecon;                       // 0x010C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0110(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.KillCameraComponent"));
		return ptr;
	}


	void OnSpectatorPawnAvailable(class ASpectatorPawn* SpectatorPawn);
	void OnKillCameraInitialized(class AProjectXCharacter* Killed, class AActor* Killer, class AProjectXPlayerState* KillerState, class UClass* /*UDamageType*/ DamageType);
	void OnKillCamComponentRegistered(class UActorComponent* ObjectRegistered);
	class AProjectXPlayerController* GetPlayerController();
	class AKillCameraActor* GetKillCameraActor();
	void EndKillCamera(bool bFireEndEvent);
	bool CanLookAtKiller();
};


// Class ProjectX.KillCamInterface
// 0x0000 (0x0028 - 0x0028)
class UKillCamInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.KillCamInterface"));
		return ptr;
	}


	void ToggleIsInKillCam(bool bInKillCam);
};


// Class ProjectX.LevelInfo
// 0x03D0 (0x0438 - 0x0068)
class ULevelInfo : public UPrimaryAssetLabel
{
public:
	TSoftObjectPtr<class UWorld>                       Map;                                                      // 0x0068(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UWorld>                       LightingMap;                                              // 0x0090(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FText                                       MapName;                                                  // 0x00B8(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FText                                       MapSize;                                                  // 0x00D0(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FText                                       AuthorName;                                               // 0x00E8(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FText                                       DescriptionText;                                          // 0x0100(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FText                                       MapDescription;                                           // 0x0118(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	class UTexture2D*                                  LoadingScreenTexture;                                     // 0x0130(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bOverrideSlateInformation;                                // 0x0138(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0139(0x0007) MISSED OFFSET
	struct FSlateBrush                                 LoadingScreenBackground;                                  // 0x0140(0x0088) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FSlateBrush                                 LoadingScreenLoadIcon;                                    // 0x01C8(0x0088) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FSlateBrush                                 LoadingScreenFrame;                                       // 0x0250(0x0088) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FSlateFontInfo                              LoadingScreenLevelNameFont;                               // 0x02D8(0x0058) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FSlateFontInfo                              LoadingScreenLevelSizeFont;                               // 0x0330(0x0058) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FSlateFontInfo                              LoadingScreenAuthorNameFont;                              // 0x0388(0x0058) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FSlateFontInfo                              LoadingScreenDescriptionFont;                             // 0x03E0(0x0058) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.LevelInfo"));
		return ptr;
	}

};


// Class ProjectX.LoadingScreenSlate
// 0x0000 (0x0028 - 0x0028)
class ULoadingScreenSlate : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.LoadingScreenSlate"));
		return ptr;
	}

};


// Class ProjectX.LockOnContainerWidget
// 0x0080 (0x02F0 - 0x0270)
class ULockOnContainerWidget : public UBasicUserWidget
{
public:
	class UClass* /*ULockOnNotificationWidget*/        NotificationWidget;                                       // 0x0270(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UUserWidget*/                      IncomingProjectilesNotificationWidget;                    // 0x0278(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0280(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.LockOnContainerWidget"));
		return ptr;
	}


	void OnTentativeLockOn(class UWeaponInstance* WeaponLocker);
	void OnTentativeLockOff(class UWeaponInstance* WeaponLocker);
	void OnPawnChanged(class APawn* NewPawn);
	void OnLockOn(class UWeaponInstance* WeaponLocker);
	void OnLockOff(class UWeaponInstance* WeaponLocker);
	void OnIncomingProjectileStop(class AProjectile* IncomingProjectile);
	void OnIncomingProjectileStart(class AProjectile* IncomingProjectile);
	void OnImminentMissileWarningStart(class AActor* WarningInstigator);
	void OnImminentMissileWarningEnd(class AActor* WarningInstigator);
	void K2_OnImminentWarningToggle(class AActor* WarningInstigator, bool bToggle);
};


// Class ProjectX.LockOnNotificationWidget
// 0x0008 (0x0278 - 0x0270)
class ULockOnNotificationWidget : public UBasicUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0270(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.LockOnNotificationWidget"));
		return ptr;
	}


	void OnNewYawRotation(float YawRotation);
	void OnLockedOnStart();
	void OnLockedOnEnd();
	void OnIncomingLockStrenghtChanged(float NewStrenght);
};


// Class ProjectX.LockOnTargetInterface
// 0x0000 (0x0028 - 0x0028)
class ULockOnTargetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.LockOnTargetInterface"));
		return ptr;
	}


	void IssueImminentMissileWarning(bool bToggleWarning, class AActor* WarningIntigator);
	struct FMulticastScriptDelegate GetLockOnTentativeStartDelegate();
	struct FMulticastScriptDelegate GetLockOnTentativeEndDelegate();
	struct FMulticastScriptDelegate GetLockOnStartDelegate();
	struct FVector2D GetLockOnScreenPercentage();
	float GetLockOnMaxDistance();
	struct FMulticastScriptDelegate GetLockOnEndDelegate();
	struct FMulticastScriptDelegate GetIncomingProjectileStartDelegate();
	struct FMulticastScriptDelegate GetIncomingProjectileEndDelegate();
	struct FMulticastScriptDelegate GetImminentMissileWarningStartDelegate();
	struct FMulticastScriptDelegate GetImminentMissileWarningEndDelegate();
	bool CanHomingReadSignature(class AProjectile* HomingProjectile);
	bool CanBeLockedOn(class AActor* LockInstigator);
};


// Class ProjectX.MainMenuGameMode
// 0x0168 (0x0438 - 0x02D0)
class AMainMenuGameMode : public AGameModeBase
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x02D0(0x00A0) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnDataLoaded;                                             // 0x0370(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnMeshUpdated;                                            // 0x0380(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPurchaseRequest;                                        // 0x0390(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPurchaseResponse;                                       // 0x03A0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnServerInfoLoaded;                                       // 0x03B0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x78];                                      // 0x03C0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.MainMenuGameMode"));
		return ptr;
	}


	void ToggleFavouriteServer(const struct FString& ServerID, bool bFavourited);
	void PurchaseItemRequest(int ItemId);
	void OnStoreTimerExpired();
	void OnStoreLoaded();
	void OnNakamaManagerInitialized();
	void OnNakamaConnected();
	bool IsInHistory(const struct FString& ServerName);
	bool IsFavouriteServer(const struct FString& ServerName);
	void IncrementServerVisits(const struct FString& ServerID);
	class UClass* /*UWeaponInstance*/ GetWeaponClassByName(const struct FString& WeaponID);
	static void GetPlayerID(class UObject* WorldContextObject, class APlayerState* PlayerState, struct FString* ID);
	TSoftObjectPtr<class USkeletalMesh> GetMesh(const struct FString& ID, EStatClassifier Type);
	struct FText GetClassDisplayText(const struct FString& ID, EStatClassifier Type);
	class UClass* /*AProjectXCharacter*/ GetCharacterClassByWeaponName(const struct FString& WeaponID);
};


// Class ProjectX.MapBoundsModifier
// 0x00B0 (0x02E0 - 0x0230)
class AMapBoundsModifier : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0230(0x0008) MISSED OFFSET
	TArray<struct FObjectInterpolation>                ObjectInterpolations;                                     // 0x0238(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	float                                              DamageCharactersInterval;                                 // 0x0248(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DamageCharactersAmount;                                   // 0x024C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class ATriggerBox*                                 RandomConvergenceRegion;                                  // 0x0250(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDebug;                                                   // 0x0258(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0259(0x0007) MISSED OFFSET
	class UBoxComponent*                               BoxComponent;                                             // 0x0260(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnCharacterOutsideBounds;                                 // 0x0268(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnCharacterInsideBounds;                                  // 0x0278(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnBoundsChangeStart;                                      // 0x0288(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnBoundsChangeComplete;                                   // 0x0298(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x38];                                      // 0x02A8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.MapBoundsModifier"));
		return ptr;
	}


	void Multicast_NetCorrectInterpolation(unsigned char Stage, float MovementTimeElapsed, float ScaleTimeElapsed);
	void Multicast_Move(const struct FVector_NetQuantize& MoveLocation, unsigned char InCurrentInterpolationIndex);
	void Multicast_DebugNetCorrections(const struct FVector_NetQuantize& Origin, const struct FVector_NetQuantize& BoxExtent);
};


// Class ProjectX.MapRotationReceiverComponent
// 0x0020 (0x00E8 - 0x00C8)
class UMapRotationReceiverComponent : public UActorComponent
{
public:
	int                                                ChunkSize;                                                // 0x00C8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                CurrentChunk;                                             // 0x00CC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bCompletedReceiving;                                      // 0x00D0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	TArray<struct FString>                             MapList;                                                  // 0x00D8(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.MapRotationReceiverComponent"));
		return ptr;
	}


	void StartMapRotationSend();
	void Server_Reliable_AcknowledgeChunk(int ChunkId);
	void SendNextChunk();
	bool IsReady();
	void GetMapList(TArray<struct FString>* OutMapList);
	void Client_Reliable_SendInitialData(int Size);
	void Client_Reliable_SendChunk(int ChunkId, TArray<struct FString> ChunkInfo);
};


// Class ProjectX.WeaponMovementComponent
// 0x0010 (0x00E8 - 0x00D8)
class UWeaponMovementComponent : public UProxyMovementComponent
{
public:
	class UWeaponInstance*                             Weapon;                                                   // 0x00D8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.WeaponMovementComponent"));
		return ptr;
	}

};


// Class ProjectX.MeleeDashMovementComponent
// 0x0010 (0x00F8 - 0x00E8)
class UMeleeDashMovementComponent : public UWeaponMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.MeleeDashMovementComponent"));
		return ptr;
	}


	void StopMovement();
};


// Class ProjectX.MusicPlayer
// 0x0068 (0x0298 - 0x0230)
class AMusicPlayer : public AActor
{
public:
	class UAudioComponent*                             MusicTrack1;                                              // 0x0230(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAudioComponent*                             MusicTrack2;                                              // 0x0238(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0240(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.MusicPlayer"));
		return ptr;
	}


	void Stop(float FadeOutTime);
	void SetTrackList(TArray<struct FTrackPlayInfo> ListOfTracks, bool bShuffleTracks, bool bPlayTrack, bool bWaitForTrackToCompleteBeforeSwitching);
	void Resume(float FadeInTime);
	void PlayNextTrack();
	void Play(const struct FTrackPlayInfo& Track);
	void OnTrack2PlaybackPercentChanged(class USoundWave* PlayingSoundWave, float PlaybackPercent);
	void OnTrack1PlaybackPercentChanged(class USoundWave* PlayingSoundWave, float PlaybackPercent);
	static class AMusicPlayer* GetMusicPlayer(class UObject* WorldContextObject);
};


// Class ProjectX.NakamaManager
// 0x0088 (0x00B0 - 0x0028)
class UNakamaManager : public UObject
{
public:
	struct FMulticastScriptDelegate                    OnNakamaConnected;                                        // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnNakamaFailedConnection;                                 // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SecretKey;                                                // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0058(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.NakamaManager"));
		return ptr;
	}


	static void Reconnect(class UObject* WorldContextObject);
	static bool IsAvailable(class UObject* WorldContextObject);
	static struct FString GetNakamaUserId(class UObject* WorldContextObject);
	static class UNakamaManager* Get(class UObject* WorldContextObject);
};


// Class ProjectX.NemesisBroadcastMessage
// 0x0020 (0x0048 - 0x0028)
class UNemesisBroadcastMessage : public UBroadcastMessage
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.NemesisBroadcastMessage"));
		return ptr;
	}

};


// Class ProjectX.NetworkEventLocText
// 0x0180 (0x01A8 - 0x0028)
class UNetworkEventLocText : public UObject
{
public:
	unsigned char                                      UnknownData00[0x180];                                     // 0x0028(0x0180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.NetworkEventLocText"));
		return ptr;
	}

};


// Class ProjectX.ObjectInfoInterface
// 0x0000 (0x0028 - 0x0028)
class UObjectInfoInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ObjectInfoInterface"));
		return ptr;
	}


	struct FString GetOwnerName();
	struct FText GetObjectName();
	struct FText GetObjectDescription();
};


// Class ProjectX.ObjectiveCapturePoint
// 0x0028 (0x04D8 - 0x04B0)
class AObjectiveCapturePoint : public ACapturePoint
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04B0(0x0008) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnObjectiveActorSpawnedEvent;                             // 0x04B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	class UClass* /*AActor*/                           SpawnedActorClass;                                        // 0x04C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AActor>                       ObjectiveActor;                                           // 0x04D0(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ObjectiveCapturePoint"));
		return ptr;
	}


	void OnRep_ObjectiveActor();
	void OnActorSpawned(class AActor* SpawnedInActor);
	class AActor* GetObjectiveActor();
};


// Class ProjectX.ObjectiveRandomizer
// 0x0068 (0x0298 - 0x0230)
class AObjectiveRandomizer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0230(0x0030) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnObjectiveCompletedEvent;                                // 0x0260(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnObjectiveSpawnedEvent;                                  // 0x0270(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	TArray<class AProjectXSpawnerObjective*>           ObjectiveList;                                            // 0x0280(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0290(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ObjectiveRandomizer"));
		return ptr;
	}


	void OnObjectiveSpawned(class UObject* Spawner);
	void OnObjectiveCompleted(bool bSuccess);
};


// Class ProjectX.ObjectiveWidget
// 0x0010 (0x0270 - 0x0260)
class UObjectiveWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0260(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ObjectiveWidget"));
		return ptr;
	}


	void IntializeObjectiveOwnedObject(class AProjectXSpawnerObjective* ObjectiveController);
	class AProjectXSpawnerObjective* GetObjectiveOwner();
};


// Class ProjectX.ObjectPool
// 0x0050 (0x0280 - 0x0230)
class AObjectPool : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0230(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ObjectPool"));
		return ptr;
	}

};


// Class ProjectX.ObjectPoolInterface
// 0x0000 (0x0028 - 0x0028)
class UObjectPoolInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ObjectPoolInterface"));
		return ptr;
	}


	void K2_OnSpawnedFromObjectPool();
	void K2_OnReleasedToObjectPool();
};


// Class ProjectX.OrbitalLaser
// 0x0070 (0x02C0 - 0x0250)
class AOrbitalLaser : public AWeaponInstanceActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0250(0x0028) MISSED OFFSET
	float                                              FiringTime;                                               // 0x0278(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ChargeTime;                                               // 0x027C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              FinishDuration;                                           // 0x0280(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0284(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // 0x0288(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              LaserHeight;                                              // 0x0298(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DamageRadius;                                             // 0x029C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              BaseLaserDamage;                                          // 0x02A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MinDamage;                                                // 0x02A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxDamageRadius;                                          // 0x02A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DamageFalloff;                                            // 0x02AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*AActor*/                           ActorToSpawnOnExplosion;                                  // 0x02B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	EOrbitalLaserState                                 State;                                                    // 0x02B8(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02B9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.OrbitalLaser"));
		return ptr;
	}


	void SetExplosionRadius(float NewExplosionRadius);
	void OnRep_State();
	void OnFiringStart();
	void OnFinishingStart();
	void OnChargingStart();
	EOrbitalLaserState GetState();
	float GetFiringTime();
	float GetFinishingTime();
	float GetExplosionRadius();
	float GetDamageRadius();
	float GetChargeTime();
	void Explosion();
};


// Class ProjectX.OwnedInterface
// 0x0000 (0x0028 - 0x0028)
class UOwnedInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.OwnedInterface"));
		return ptr;
	}


	void OnOwnerLeave();
	void OnOwnerDied();
	class AController* GetOwningController();
	class APlayerState* GetOwnedPlayerState();
};


// Class ProjectX.OwnedInterfaceHelper
// 0x0000 (0x0028 - 0x0028)
class UOwnedInterfaceHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.OwnedInterfaceHelper"));
		return ptr;
	}


	static class APlayerState* GetPlayerStateFromActor(class AActor* Actor);
};


// Class ProjectX.PainCausingComponent
// 0x0020 (0x04B0 - 0x0490)
class UPainCausingComponent : public UBoxComponent
{
public:
	bool                                               bDamageInstantly;                                         // 0x0490(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0491(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.PainCausingComponent"));
		return ptr;
	}


	void RemovePainActor(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void AddPainActor(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class ProjectX.PawnHealthMutator
// 0x0068 (0x0148 - 0x00E0)
class UPawnHealthMutator : public UMutatorComponent
{
public:
	bool                                               bEnableMutator;                                           // 0x00E0(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET
	TArray<struct FPawnConfig>                         PawnConfig;                                               // 0x00E8(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<class UClass* /*APawn*/, float>               PawnMap;                                                  // 0x00F8(0x0050) (CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.PawnHealthMutator"));
		return ptr;
	}

};


// Class ProjectX.Pickup
// 0x0080 (0x02B0 - 0x0230)
class APickup : public AActor
{
public:
	float                                              MaxPickupDistance;                                        // 0x0230(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SpawnTorqueIntensity;                                     // 0x0234(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                MaxNumberOfCorrections;                                   // 0x0238(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                MaxAllowedTimeToReachPickupRadius;                        // 0x023C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              HelpingForceIntensity;                                    // 0x0240(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              OutOfBoundsCorrectionIntensity;                           // 0x0244(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              OutOfBoundsRandomRotationIntensity;                       // 0x0248(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              InterpToRadiusSpeed;                                      // 0x024C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                MinDistanceFromTargetToStopFinalCorrection;               // 0x0250(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector2D                                   SettleForcesCheck;                                        // 0x0254(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x025C(0x0004) MISSED OFFSET
	class USphereComponent*                            OverlapComponent;                                         // 0x0260(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x0268(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0270(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.Pickup"));
		return ptr;
	}


	void OnWaitingToReachRadiusExpired();
	void OnItemPickedUp(class AActor* OtherActor);
	void OnComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	bool CanPickup(class AProjectXCharacter* Player);
};


// Class ProjectX.PickupReviveBeacon
// 0x00A0 (0x05B0 - 0x0510)
class APickupReviveBeacon : public ADeployable
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0510(0x0008) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnHelpRequested;                                          // 0x0518(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnReviveStatusUpdated;                                    // 0x0528(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	float                                              ReviveStartTime;                                          // 0x0538(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x053C(0x0004) MISSED OFFSET
	class UInteractableComponent*                      InteractableComponent;                                    // 0x0540(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class USceneComponent*                             Root;                                                     // 0x0548(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FText                                       HighlightText;                                            // 0x0550(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              HoverHeight;                                              // 0x0568(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x4];                                       // 0x056C(0x0004) MISSED OFFSET
	class UClass* /*ULocalMessage*/                    ReviveBroadcastMessage;                                   // 0x0570(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UProjectXDamageType*/              ReviveDamageType;                                         // 0x0578(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCameraComponent*                            PawnCameraComponent;                                      // 0x0580(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class USpringArmComponent*                         CameraBoom;                                               // 0x0588(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0590(0x0001) MISSED OFFSET
	bool                                               bCanInteract;                                             // 0x0591(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0592(0x0002) MISSED OFFSET
	struct FReviveStatus                               ReviveStatus;                                             // 0x0594(0x000C) (CPF_Net, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	bool                                               bDeadPlayerCanRedeploy;                                   // 0x05A0(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0xF];                                       // 0x05A1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.PickupReviveBeacon"));
		return ptr;
	}


	void Server_Reliable_RequestHelp();
	void OnSelected(class APlayerController* Sender, class UPrimitiveComponent* Component);
	void OnReviveStartTimeReplicated(float InReviveStartTime);
	void OnReviveRespawnActive();
	void OnRequestHelp();
	void OnRep_ReviveStartTime();
	void OnRep_ReviveRespawnActive();
	void OnRep_DeadPlayerCanRedeploy();
	void OnNextRespawnTimeChanged();
	void OnHoldStarted();
	void OnHoldExited();
	void OnFocusBeacon();
	void OnDeadPlayerCanRedeploy();
	void MultiCast_Reliable_RequestHelp();
	bool IsReviveRespawnActive();
	void HoldStarted(class APlayerController* Sender, class UPrimitiveComponent* Component);
	void HoldExited(class APlayerController* Sender, class UPrimitiveComponent* Component);
	class AProjectXPlayerState* GetReviveTriggerPlayerState();
	float GetReviveStartTime();
	class UClass* /*ULocalMessage*/ GetReviveBroadcastMessage();
	float GetHoverHeight();
};


// Class ProjectX.PlatformDependentEngagement
// 0x0000 (0x0028 - 0x0028)
class UPlatformDependentEngagement : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.PlatformDependentEngagement"));
		return ptr;
	}


	static void EngageUser(class UObject* WorldContextObject, const struct FScriptDelegate& Callback, const struct FInputEvent& InputEvent);
};


// Class ProjectX.PlatformDependentTextBlock
// 0x0030 (0x02D8 - 0x02A8)
class UPlatformDependentTextBlock : public UTextBlock
{
public:
	struct FText                                       PS4Text;                                                  // 0x02A8(0x0018) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FText                                       XB1Text;                                                  // 0x02C0(0x0018) (CPF_Edit, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.PlatformDependentTextBlock"));
		return ptr;
	}

};


// Class ProjectX.PlatformInputSymbols
// 0x00F0 (0x0118 - 0x0028)
class UPlatformInputSymbols : public UObject
{
public:
	TMap<struct FName, TSoftObjectPtr<class UTexture2D>> PS4InputSymbolMap;                                        // 0x0028(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TMap<struct FName, TSoftObjectPtr<class UTexture2D>> PCInputSymbolMap;                                         // 0x0078(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TMap<struct FName, TSoftObjectPtr<class UTexture2D>> XB1InputSymbolMap;                                        // 0x00C8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.PlatformInputSymbols"));
		return ptr;
	}

};


// Class ProjectX.PlayerProgressionManager
// 0x0068 (0x0090 - 0x0028)
class UPlayerProgressionManager : public UObject
{
public:
	struct FMulticastScriptDelegate                    OnProgressionInfoLoaded;                                  // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.PlayerProgressionManager"));
		return ptr;
	}


	static void SortWeaponsByUnlockLevel(TMap<class UClass* /*UWeaponInstance*/, unsigned char> MapIn, TArray<class UClass* /*UWeaponInstance*/>* SortedWeaponList);
	void OnNakamaConnected();
	bool GetProgressionUnlocks(const struct FString& ClassID, int CurrentLevel, TArray<class UCosmeticAssetBase*>* Unlocks, int* Currency);
	bool GetProgresisonInfo(const struct FString& ClassID, int Level, struct FProgressionInfo* ProgressionInfo);
	static class UPlayerProgressionManager* GetPlayerProgression(class UObject* WorldContextObject);
	int GetMaxLevel(const struct FString& ClassID);
	int GetMatchBonusExperience();
};


// Class ProjectX.PostGameScreen
// 0x0010 (0x0240 - 0x0230)
class APostGameScreen : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0230(0x0008) MISSED OFFSET
	int                                                NumberOfTopPlayers;                                       // 0x0238(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x023C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.PostGameScreen"));
		return ptr;
	}


	void PlayerSpawned(TArray<struct FPodiumPawn> PodiumPawns);
	void K2_InitPostGameScreen(float Duration);
	void InitPostGameScreen(float Duration);
};


// Class ProjectX.Projectile
// 0x01C0 (0x0410 - 0x0250)
class AProjectile : public AWeaponInstanceActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0250(0x0008) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnImpact;                                                 // 0x0258(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0268(0x0038) MISSED OFFSET
	float                                              LingerTime3P;                                             // 0x02A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              LingerTime1P;                                             // 0x02A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              StartingCosmeticScaleMultiplier3P;                        // 0x02A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SmoothInterpSpeed3P;                                      // 0x02AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ScaleLerpSpeed3P;                                         // 0x02B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              StartingCosmeticScaleMultiplier1P;                        // 0x02B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SmoothInterpSpeed1P;                                      // 0x02B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ScaleLerpSpeed1P;                                         // 0x02BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                MaxBounces;                                               // 0x02C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bSpawnedActorMatchesProjectileOrientation;                // 0x02C4(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bSpawnActorOnHit;                                         // 0x02C5(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x2];                                       // 0x02C6(0x0002) MISSED OFFSET
	class UMovementComponent*                          ProjectileMovement;                                       // 0x02C8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              PathPointRate;                                            // 0x02D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	class UDataTable*                                  ImpactEffectTable;                                        // 0x02D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UParticleSystem*                             TrailParticle;                                            // 0x02E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    TrailRotation;                                            // 0x02E8(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     TrailLocation;                                            // 0x02F4(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*AActor*/                           ActorClassToSpawn;                                        // 0x0300(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x108];                                     // 0x0308(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.Projectile"));
		return ptr;
	}


	void UpdateProjectilePath();
	void OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnAccelerationTowardsHomingTargetNotify(bool bIsAccelerating);
	void Multicast_OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void InitializeMovementComponent();
	int GetTicketUsageCount();
	struct FVector GetStartLocation();
	TArray<struct FVector_NetQuantize> GetProjectilePath();
	int GetProjectileID();
	float GetDamageModifier();
	class UClass* /*AActor*/ GetActorToSpawnOnHit();
	void GenerateHitRequest(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit, const struct FRotator& CustomRotator, TArray<class AActor*> DamagedActors);
};


// Class ProjectX.ProjectileExplosive
// 0x00C0 (0x04D0 - 0x0410)
class AProjectileExplosive : public AProjectile
{
public:
	float                                              ExplosiveDamage;                                          // 0x0410(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ExplosiveMinDamage;                                       // 0x0414(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ExplosiveInnerRadius;                                     // 0x0418(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ExplosiveOuterRadius;                                     // 0x041C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ExplosiveFalloffExponent;                                 // 0x0420(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	class UClass* /*UDamageType*/                      ExplosiveDamageType;                                      // 0x0428(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bFinalBounceOnly;                                         // 0x0430(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bCanBounceOffPawn;                                        // 0x0431(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0432(0x0002) MISSED OFFSET
	float                                              DelayedExplosionTime;                                     // 0x0434(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x98];                                      // 0x0438(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectileExplosive"));
		return ptr;
	}


	float GetExplosiveDamage();
};


// Class ProjectX.ProjectileReflectionInterface
// 0x0000 (0x0028 - 0x0028)
class UProjectileReflectionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectileReflectionInterface"));
		return ptr;
	}


	bool IsReflectionActive(class UClass* /*AProjectile*/ ProjectileClass, class UClass* /*UWeaponInstanceRanged*/ Weapon, const struct FHitResult& HitResult);
	bool HandleProjectileReflection(class UClass* /*AProjectile*/ ProjectileClass, class UClass* /*UWeaponInstanceRanged*/ Weapon, const struct FHitResult& HitResult);
};


// Class ProjectX.ProjectX
// 0x0000 (0x0028 - 0x0028)
class UProjectX : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectX"));
		return ptr;
	}

};


// Class ProjectX.ProjectXAIController
// 0x00F8 (0x0430 - 0x0338)
class AProjectXAIController : public ADetourCrowdAIController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x0340(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	int                                                AllowableSimultaneousFailures;                            // 0x0358(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bSelectTargetOnPosssess;                                  // 0x035C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAllowHeadshots;                                          // 0x035D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bTargetAttackers;                                         // 0x035E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCanTargetAllies;                                         // 0x035F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDropAllyTargetsIfThreatIsZero;                           // 0x0360(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CanLoseTarget;                                            // 0x0361(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0362(0x0002) MISSED OFFSET
	float                                              AttentionSpan;                                            // 0x0364(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TMap<ESetTargetEvent, float>                       TargetSwitchDelay;                                        // 0x0368(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	float                                              ThreatDecayRate;                                          // 0x03B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxFiringDistance;                                        // 0x03BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   EngagementDistance;                                       // 0x03C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              VisibilityExtentTrace;                                    // 0x03C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              EngagementRangePadding;                                   // 0x03CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UProjectXAIPerception*                       PerceptionSystem;                                         // 0x03D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x58];                                      // 0x03D8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXAIController"));
		return ptr;
	}


	void SetTarget(class AActor* Target, ESetTargetEvent Context, bool bAllowDelays, float TargetThreatLevel);
	bool SelectTarget(bool bDontReselectSameTarget, EAcquireTargetType SearchType);
	void OnTargetVehicleExit(class AProjectXVehicle* Vehicle, class UVehicleSeatComponent* Seat, class AProjectXCharacter* PreviousPassenger);
	void OnTargetVehicleEnter(class AProjectXCharacter* Driver, class AProjectXVehicle* CurrentVehicle, class AProjectXVehicle* PreviousVehicle);
	void OnTargetKilled(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState);
	void OnPerceptionUpdated(TArray<struct FProjectXPerceptionInfo> Perceptions);
	void OnPawnDeath(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState);
	bool IsWithinFiringRangeOfTarget();
	bool IsWithinEngagementRangeOfTarget();
	bool IsWithinEngagementMaxRangeOfTarget();
	bool HasTarget();
	float GetTargetThreatLevel();
	class UObject* GetTarget();
	float GetSquareFiringDistance();
	struct FVector2D GetSquareEngagementDistance();
	class AProjectXCharacter* GetProjectXAI();
	class AActor* GetMoveActor();
	bool CanSeeTarget();
};


// Class ProjectX.ProjectXAIMovement
// 0x0000 (0x0B50 - 0x0B50)
class UProjectXAIMovement : public UCharacterMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXAIMovement"));
		return ptr;
	}

};


// Class ProjectX.ProjectXAIPerception
// 0x0060 (0x0128 - 0x00C8)
class UProjectXAIPerception : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00C8(0x0020) MISSED OFFSET
	float                                              VisionRange;                                              // 0x00E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ArmorMaxStrength;                                         // 0x00EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TargetDamagedMaxStrength;                                 // 0x00F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SightMaxStrength;                                         // 0x00F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SightMaxStrengthAlly;                                     // 0x00F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PeripheralVisionAngleDegrees;                             // 0x00FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxVisionTargets;                                         // 0x0100(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HearingRange;                                             // 0x0104(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HearingMaxStrength;                                       // 0x0108(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HearingMaxStrengthAlly;                                   // 0x010C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DamageMaxStrength;                                        // 0x0110(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnPerceptionUpdated;                                      // 0x0118(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXAIPerception"));
		return ptr;
	}


	void ReportDamageEvent(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState);
	void OnPawnPosessed(class APawn* InPawn);
};


// Class ProjectX.ProjectXAISpawner
// 0x00B8 (0x02E8 - 0x0230)
class AProjectXAISpawner : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0230(0x0030) MISSED OFFSET
	bool                                               bExecuteOnMatchStart;                                     // 0x0260(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bExecuteImmediately;                                      // 0x0261(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0262(0x0002) MISSED OFFSET
	int                                                Team;                                                     // 0x0264(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*AProjectXCharacter*/               AIToSpawn;                                                // 0x0268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SpawnDelay;                                               // 0x0270(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LifeTime;                                                 // 0x0274(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bRespawn;                                                 // 0x0278(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0279(0x0003) MISSED OFFSET
	float                                              RespawnTime;                                              // 0x027C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RequiredPlayerCount;                                      // 0x0280(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAutoDestroy;                                             // 0x0284(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDespawnAIWhenStopSpawningCalled;                         // 0x0285(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0286(0x0002) MISSED OFFSET
	TMap<int, float>                                   PlayerCountHealthMultipliers;                             // 0x0288(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x10];                                      // 0x02D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXAISpawner"));
		return ptr;
	}


	void OnAISpawned(class AProjectXCharacter* SpawnedActor);
	void OnAIDeath(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState);
};


// Class ProjectX.ProjectXAITask_MoveTo
// 0x0010 (0x0120 - 0x0110)
class UProjectXAITask_MoveTo : public UAITask_MoveTo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0110(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXAITask_MoveTo"));
		return ptr;
	}

};


// Class ProjectX.ProjectXBlueprintAsyncAction
// 0x0000 (0x0030 - 0x0030)
class UProjectXBlueprintAsyncAction : public UBlueprintAsyncActionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXBlueprintAsyncAction"));
		return ptr;
	}


	void EvaluateRequest();
};


// Class ProjectX.BlueprintAsyncActionGetPawn
// 0x0018 (0x0048 - 0x0030)
class UBlueprintAsyncActionGetPawn : public UProjectXBlueprintAsyncAction
{
public:
	struct FMulticastScriptDelegate                    OnPawnAcquired;                                           // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	class AController*                                 CachedController;                                         // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BlueprintAsyncActionGetPawn"));
		return ptr;
	}


	static class UBlueprintAsyncActionGetPawn* AsyncGetPawn(class AController* Controller);
};


// Class ProjectX.BlueprintAsyncActionGetPlayerState
// 0x0018 (0x0048 - 0x0030)
class UBlueprintAsyncActionGetPlayerState : public UProjectXBlueprintAsyncAction
{
public:
	struct FMulticastScriptDelegate                    OnPlayerStateAcquired;                                    // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	class AController*                                 CachedController;                                         // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BlueprintAsyncActionGetPlayerState"));
		return ptr;
	}


	static class UBlueprintAsyncActionGetPlayerState* AsyncGetPlayerState(class AController* Controller);
};


// Class ProjectX.BlueprintAsyncActionGetGameState
// 0x0018 (0x0048 - 0x0030)
class UBlueprintAsyncActionGetGameState : public UProjectXBlueprintAsyncAction
{
public:
	struct FMulticastScriptDelegate                    OnGameStateAcquired;                                      // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	class AController*                                 CachedController;                                         // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BlueprintAsyncActionGetGameState"));
		return ptr;
	}


	static class UBlueprintAsyncActionGetGameState* AsyncGetGameState(class AController* Controller);
};


// Class ProjectX.BlueprintAsyncActionGeneric
// 0x0028 (0x0058 - 0x0030)
class UBlueprintAsyncActionGeneric : public UProjectXBlueprintAsyncAction
{
public:
	struct FMulticastScriptDelegate                    OnTaskComplete;                                           // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             CurrentTask;                                              // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	class UObject*                                     CachedOwner;                                              // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.BlueprintAsyncActionGeneric"));
		return ptr;
	}


	static class UBlueprintAsyncActionGeneric* BeginAsyncTask(class UObject* Owner, const struct FScriptDelegate& Task);
};


// Class ProjectX.ProjectXCharacter
// 0x07C0 (0x0D20 - 0x0560)
class AProjectXCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x0560(0x0130) MISSED OFFSET
	int                                                MaxNumberOfDashCharges;                                   // 0x0690(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              StrafeMovementSpeedMultiplier;                            // 0x0694(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnStaminaChanged;                                         // 0x0698(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnStatModificationOverTimeStarted;                        // 0x06A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnCrouchChanged;                                          // 0x06B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnBoostingChanged;                                        // 0x06C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnHoldingBreathChanged;                                   // 0x06D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnDashingChanged;                                         // 0x06E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPerspectiveChanged;                                     // 0x06F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnHitNotification;                                        // 0x0708(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnLand;                                                   // 0x0718(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnInputDisabled;                                          // 0x0728(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnNotEnoughEnergy;                                        // 0x0738(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnLockOnTentativeStart;                                   // 0x0748(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnLockOnTentativeEnd;                                     // 0x0758(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnLockOnStart;                                            // 0x0768(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnLockOnEnd;                                              // 0x0778(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnIncomingProjectileStart;                                // 0x0788(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnIncomingProjectileEnd;                                  // 0x0798(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnImminentMissileWarningStart;                            // 0x07A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnImminentMissileWarningEnd;                              // 0x07B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSoftBoundaryEnterEvent;                                 // 0x07C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnVehicleChanged;                                         // 0x07D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnCharacterHitAtLocation;                                 // 0x07E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPlayerStateChangedEvent;                                // 0x07F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnCharacterPlayerStateChangedEvent;                       // 0x0808(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFootstep;                                               // 0x0818(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnDashChargesUpdatedEvent;                                // 0x0828(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnMaxDashChargeCountUpdatedEvent;                         // 0x0838(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnDashRechargingEvent;                                    // 0x0848(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnVisibilityChanged;                                      // 0x0858(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0868(0x0010) MISSED OFFSET
	bool                                               bWeaponPositionDebug;                                     // 0x0878(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0879(0x0007) MISSED OFFSET
	struct FInventory                                  PlayerInventory;                                          // 0x0880(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	float                                              DashForce;                                                // 0x08D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x18];                                      // 0x08D4(0x0018) MISSED OFFSET
	float                                              BaseTurnRate;                                             // 0x08EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BaseLookUpRate;                                           // 0x08F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShouldCameraFadeGrassWhenInVehicle;                      // 0x08F4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x3];                                       // 0x08F5(0x0003) MISSED OFFSET
	float                                              CameraFadesGrassRange;                                    // 0x08F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x4];                                       // 0x08FC(0x0004) MISSED OFFSET
	class UMaterialParameterCollection*                VisualsMaterialParameterCollection;                       // 0x0900(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FirstJumpForgivenessTime;                                 // 0x0908(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TeamOverride;                                             // 0x090C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseFallDamage;                                           // 0x0910(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0911(0x0003) MISSED OFFSET
	struct FVector2D                                   FallingDamageVelocityThreshold;                           // 0x0914(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   FallingDamageAmount;                                      // 0x091C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   FallingStaminaDamageAmount;                               // 0x0924(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RunSpeedMultiplier;                                       // 0x092C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RunCrouchSpeedMultiplier;                                 // 0x0930(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Crouch1PCameraVerticalOffset;                             // 0x0934(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RagdollProjectileForceMultiplier;                         // 0x0938(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              XPReward;                                                 // 0x093C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxStamina;                                               // 0x0940(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCanRecoverStamina;                                       // 0x0944(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0945(0x0003) MISSED OFFSET
	float                                              StaminaRecoveryRate;                                      // 0x0948(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              StaminaRecoveryDelay;                                     // 0x094C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              StaminaDrainRate;                                         // 0x0950(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WaterRunStaminaDrainRate;                                 // 0x0954(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BoostingStaminaDrainRate;                                 // 0x0958(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HoldingBreathStaminaDrainRate;                            // 0x095C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              StaminaInitialCost;                                       // 0x0960(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BoostingInitialStaminaCost;                               // 0x0964(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<float>                                      JumpStaminaCosts;                                         // 0x0968(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TArray<struct FDamageTypeResistance>               DamageTypeResistances;                                    // 0x0978(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>                   CharacterMapIcon;                                         // 0x0988(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>                   CharacterHudIcon;                                         // 0x09B0(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>                   CharacterRadarIcon;                                       // 0x09D8(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DashDuration;                                             // 0x0A00(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DashCoolDownDuration;                                     // 0x0A04(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AProjectXVehicle>             Vehicle;                                                  // 0x0A08(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AProjectXVehicle>             PreviousVehicle;                                          // 0x0A10(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData08[0x8];                                       // 0x0A18(0x0008) MISSED OFFSET
	class UClass* /*AKillCameraActor*/                 KillCamActorClass;                                        // 0x0A20(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              KillCameraDistance;                                       // 0x0A28(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0A2C(0x0004) MISSED OFFSET
	TArray<EPerkType>                                  PerkSlots;                                                // 0x0A30(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	class UClass* /*APickupReviveBeacon*/              ReviveBeaconClass;                                        // 0x0A40(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxUltimateCharge;                                        // 0x0A48(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PersonalVehicleHoldTriggerTime;                           // 0x0A4C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PassiveHealthRegenDelay;                                  // 0x0A50(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PassiveHealthRegenRate;                                   // 0x0A54(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUsePassiveHealthRegen;                                   // 0x0A58(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0A59(0x0003) MISSED OFFSET
	float                                              PassiveShieldRegenDelay;                                  // 0x0A5C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PassiveShieldRegenRate;                                   // 0x0A60(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUsePassiveShieldRegen;                                   // 0x0A64(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0A65(0x0003) MISSED OFFSET
	float                                              SquadmateScoringWeight;                                   // 0x0A68(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CharacterDistanceScoringWeight;                           // 0x0A6C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FText                                       ClassName;                                                // 0x0A70(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FText                                       ClassDescription;                                         // 0x0A88(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClassID;                                                  // 0x0AA0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     GraffitiSize;                                             // 0x0AB0(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              GraffitiSprayDistance;                                    // 0x0ABC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstance>            ClassIcon;                                                // 0x0AC0(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Health;                                                   // 0x0AE8(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxHealth;                                                // 0x0AEC(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bArmored;                                                 // 0x0AF0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0AF1(0x0003) MISSED OFFSET
	float                                              Shields;                                                  // 0x0AF4(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxShieldsWithOvercharge;                                 // 0x0AF8(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxShields;                                               // 0x0AFC(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCanBoost;                                                // 0x0B00(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0B01(0x0003) MISSED OFFSET
	struct FTimeStampedBool                            Visible;                                                  // 0x0B04(0x0008) (CPF_Net, CPF_RepNotify, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bCanRagdoll;                                              // 0x0B0C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      PackedInput;                                              // 0x0B0D(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData14[0x2];                                       // 0x0B0E(0x0002) MISSED OFFSET
	uint32_t                                           PackedPitchYaw;                                           // 0x0B10(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0B14(0x0004) MISSED OFFSET
	TMap<EXPEventType, float>                          HealthOnExpEvent;                                         // 0x0B18(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	float                                              MaxLockOnRange;                                           // 0x0B68(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   LockOnScreenPercentage;                                   // 0x0B6C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0B74(0x0004) MISSED OFFSET
	class UAfflictionComponent*                        AfflictionComponent;                                      // 0x0B78(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UDamageHistoryComponent*                     DamageHistoryComponent;                                   // 0x0B80(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UJetPackComponent*                           JetPackComponent;                                         // 0x0B88(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData17[0x50];                                      // 0x0B90(0x0050) MISSED OFFSET
	float                                              Stamina;                                                  // 0x0BE0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	bool                                               bIsRunning;                                               // 0x0BE4(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	bool                                               bIsBoosting;                                              // 0x0BE5(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	bool                                               bIsHoldingBreath;                                         // 0x0BE6(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	bool                                               bIsDashing;                                               // 0x0BE7(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	bool                                               bCanMove;                                                 // 0x0BE8(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	bool                                               bCanRotate;                                               // 0x0BE9(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	bool                                               bCanJump;                                                 // 0x0BEA(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	bool                                               bCanStealth;                                              // 0x0BEB(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              LowHealthVOThreshold;                                     // 0x0BEC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              LowHealthVODelay;                                         // 0x0BF0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData18[0x13];                                      // 0x0BF4(0x0013) MISSED OFFSET
	bool                                               bDropItemsOnDeath;                                        // 0x0C07(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              RagdollLifeSpan;                                          // 0x0C08(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData19[0x4];                                       // 0x0C0C(0x0004) MISSED OFFSET
	class UAmbianceComponent*                          AmbianceComponent;                                        // 0x0C10(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UCosmeticsComponent*                         CosmeticsComponent;                                       // 0x0C18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UWeaponComponent*                            WeaponComponent;                                          // 0x0C20(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UHookshotComponent*                          HookshotComponent;                                        // 0x0C28(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UInteractionComponent*                       InteractionComponent;                                     // 0x0C30(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UAimSphereComponent*                         AimSphereComponent;                                       // 0x0C38(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class USpringArmComponent*                         CameraBoom;                                               // 0x0C40(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UCameraComponent*                            FollowCamera;                                             // 0x0C48(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UCameraComponent*                            FirstPersonCameraComponent;                               // 0x0C50(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class USceneComponent*                             FirstPersonFollowComponent;                               // 0x0C58(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData20[0xC0];                                      // 0x0C60(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXCharacter"));
		return ptr;
	}


	void UpdateVehicleSpeedModifier(float NewVehicleSpeedModifier);
	void UpdateDashCoolDown();
	void TriggerDash();
	void ToggleView(bool bIsFirstPerson);
	void ToggleMeshes(bool bIsFirstPerson);
	void StopCosmeticDash();
	void StopContextualInteract();
	static TArray<class UClass* /*UWeaponInstance*/> StaticGetWeaponList(class UClass* /*AProjectXCharacter*/ Class, EEquipSlot Slot);
	static TArray<EPerkType> StaticGetPerkSlots(class UClass* /*AProjectXCharacter*/ Class);
	static unsigned char StaticGetNumberOfPerksSlots(class UClass* /*AProjectXCharacter*/ Class);
	static int StaticGetMaxShields(class UClass* /*AProjectXCharacter*/ Class);
	static int StaticGetMaxJumps(class UClass* /*AProjectXCharacter*/ Class);
	static int StaticGetMaxHealth(class UClass* /*AProjectXCharacter*/ Class);
	static float StaticGetGroundSpeed(class UClass* /*AProjectXCharacter*/ Class);
	static class UCosmeticsComponent* StaticGetDefaultCosmeticComponent(class UClass* /*AProjectXCharacter*/ Class);
	static struct FText StaticGetClassName(class UClass* /*AProjectXCharacter*/ Class);
	static struct FString StaticGetClassID(class UClass* /*AProjectXCharacter*/ Class);
	static TSoftObjectPtr<class UMaterialInstance> StaticGetClassIcon(class UClass* /*AProjectXCharacter*/ Class);
	bool ShouldResetDashesOnKill();
	void SetOwnedPlayerState(class APlayerState* NewOwnedPlayerState);
	void SetHealthRegenRate(float NewRate);
	void SetClassID(const struct FString& NewID);
	void Server_UpdateBaseEyeHeightCache(float InBaseEyeHeight);
	void Server_Unreliable_SendYawValue(uint16_t NewPawnPitchValue);
	void Server_Unreliable_SendPitchValue(uint16_t NewPawnPitchValue);
	void Server_Unreliable_SendPackedInput(unsigned char NewInput);
	void Server_ToggleRun(bool bToggle);
	void Server_ToggleHoldingBreath(bool bToggle);
	void Server_ToggleFastFall(bool bToggle);
	void Server_ToggleBoosting(bool bToggle);
	void Server_SpawnGraffiti(const struct FHitResult& Hit);
	void Server_Reliable_StartDashMovement();
	void Server_Reliable_EnterVehicle(class AProjectXVehicle* InVehicle, class UVehicleSeatComponent* PreferredSeat);
	void ResetPlayerMovement();
	void PlayTaunt(unsigned char TauntNumber);
	void OnWeaponAdded(class UWeaponInstance* Weapon);
	void OnTightAimingStop();
	void OnTauntToggled(bool bTauntOn);
	void OnRep_YawPitch();
	void OnRep_Visibility();
	void OnRep_Vehicle();
	void OnRep_Stamina();
	void OnRep_Shields(float PreviousShields);
	void OnRep_IsHoldingBreath();
	void OnRep_IsDashing();
	void OnRep_IsBoosting();
	void OnRep_Health(float PreviousHealth);
	void OnRep_CanStealth();
	void OnRep_CanRotate();
	void OnEnterVehicle(class AProjectXVehicle* InVehicle, class UVehicleSeatComponent* Seat);
	void Multicast_SpawnGraffiti(const struct FHitResult& Hit);
	void Multicast_PlayMontage(class UAnimMontage* Montage);
	void Multicast_Die(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, const struct FHitResult& Hit, class APlayerState* InstigatorPlayerState);
	void ModifyStatOverTime(ECharacterStat StatType, float StatDelta, float Time);
	void ModifyStamina(float StaminaDelta);
	void MenuToggled(class UAdvancedUserWidget* Widget, bool bToggle);
	bool LeaveCurrentVehicle(bool bForce, bool bEject);
	bool IsValidTarget();
	bool IsRunning();
	bool IsProvidingInput(EInputDirection Direction);
	bool IsMovingForward();
	bool IsMoving();
	bool IsLocallyPlayerControlled();
	bool IsInVehicle();
	bool IsInPersonalVehicle();
	bool IsHoldingBreath();
	bool IsFastFalling();
	bool IsDriving();
	bool IsDeferingDashChargesInAir();
	bool IsBoosting();
	bool IsAllowedToStealth();
	bool IsAllowedToJump();
	void HandleDeathEffects(const struct FDeathEffectInfo& DeathEffectInfo);
	TArray<class UClass* /*UWeaponInstance*/> GetWeaponList(EEquipSlot Slot);
	class UWeaponComponent* GetWeaponComponent();
	float GetVisibilityChangedTimeStamp();
	float GetVehicleSpeedModifier();
	class AProjectXVehicle* GetVehicle();
	float GetTimeSinceLostGroundedness();
	float GetTicketPickupMultiplier();
	int GetTeam();
	float GetStamina();
	float GetRunMultiplier();
	class UClass* /*APickupReviveBeacon*/ GetReviveBeaconClass();
	class UProjectXCharacterMovement* GetProjectXCharacterMovement();
	class AProjectXPlayerController* GetPlayerController();
	struct FText GetPlayerClassName();
	TArray<EPerkType> GetPerkSlots();
	int GetMaxDashes();
	struct FVector GetKillCamWidgetPlacementPivot();
	TArray<class UMeshComponent*> GetKillCamMeshes();
	float GetJumpStaminaCost();
	class UInteractionComponent* GetInteractionComponent();
	TSoftObjectPtr<class UMaterialInstance> GetIcon();
	class UHookshotComponent* GetHookshotComponent();
	float GetHealthReturnOnExpEvent(EXPEventType Event);
	class UCameraComponent* GetFollowCamera();
	class USceneComponent* GetFirstPersonFollowComponent();
	class UCameraComponent* GetFirstPersonCamera();
	void GetEquippedWeaponList(class AProjectXPlayerState* OwningPlayerState, TMap<EEquipSlot, class UClass* /*UWeaponInstance*/>* FoundEquippedWeapons);
	class UDamageHistoryComponent* GetDamageHistoryComponent();
	float GetCrouchedRunMultiplier();
	class UCosmeticsComponent* GetCosmeticsComponent();
	struct FString GetClassID();
	class USpringArmComponent* GetCameraBoom();
	class UAmbianceComponent* GetAmbianceComponent();
	class AActor* GetActorUnderControl();
	void FindCameraFollowTarget();
	void ContextualInteract();
	void Client_ToggleRun(bool bToggle);
	void Client_ToggleFastFall(bool bToggle);
	void Client_StatOverTimeStarted(ECharacterStat StatType, float StatDelta, float Time);
	void Client_HitNotification(float Damage, bool bHeadshot, class UClass* /*UDamageType*/ DamageType, class AActor* DamagingActor, float RadialDamageLerp);
	bool CanWaterRun();
	bool CanRagdoll();
	bool CanEnterVehicle(class AProjectXVehicle* InVehicle);
	bool CanDash();
	float ApplyDamageTypeResistance(float InDamage, class UClass* /*UDamageType*/ InDamageType);
};


// Class ProjectX.ProjectXCharacterAnimInstance3P
// 0x0100 (0x03C0 - 0x02C0)
class UProjectXCharacterAnimInstance3P : public UAnimInstance
{
public:
	float                                              MaxLean;                                                  // 0x02C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    LookDirection;                                            // 0x02C4(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     TargetVelocity;                                           // 0x02D0(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     DirectionIntentVector;                                    // 0x02DC(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     SmoothedDirectionIntentVector;                            // 0x02E8(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     Velocity;                                                 // 0x02F4(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     JetPackRootDeviation;                                     // 0x0300(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector2D                                   JetpackLateralAndForwardSpeed;                            // 0x030C(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Speed;                                                    // 0x0314(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsDiving;                                                // 0x0318(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsDead;                                                  // 0x0319(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bCanUseIKSolver;                                          // 0x031A(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bUseLeftHandIK;                                           // 0x031B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsInAir;                                                 // 0x031C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bHookshotting;                                            // 0x031D(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bHasJetPack;                                              // 0x031E(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bCrouching;                                               // 0x031F(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsInVehicle;                                             // 0x0320(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsTightAiming;                                           // 0x0321(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0322(0x0002) MISSED OFFSET
	float                                              CharacterHeight;                                          // 0x0324(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              TargetPitchLean;                                          // 0x0328(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CurrentGroundDeviationAmount;                             // 0x032C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    PitchLean;                                                // 0x0330(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    DivingAdjustedPitch;                                      // 0x033C(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     ProjectedGroundDeviationOnLean;                           // 0x0348(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SmoothedDirectionIntentVectorInterpSpeed;                 // 0x0354(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              JetpackIntentVectorScale;                                 // 0x0358(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	class UAnimSequence*                               InVehicleIdleSequence;                                    // 0x0360(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              VehicleLeanInterpSpeed;                                   // 0x0368(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ExplicitIdleTime;                                         // 0x036C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              VehicleMaxYawDistanceToDriveLean;                         // 0x0370(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     TargetVehicleAcceleration;                                // 0x0374(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     LerpedVehicleAcceleration;                                // 0x0380(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              VehicleYawDifferenceFromAim;                              // 0x038C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              VehicleRotationTiltAmount;                                // 0x0390(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              LateralAccelerationBS;                                    // 0x0394(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bAlsoConsiderVehicleTiltOnPoses;                          // 0x0398(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bUseDynamicDrivingGraph;                                  // 0x0399(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bUsePersonalVehicleLeans;                                 // 0x039A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bBlendArmsSlot;                                           // 0x039B(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsHookshottingOrHasJetPack;                              // 0x039C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsInAirOrHookshotting;                                   // 0x039D(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bActivelyDrivingVehicle;                                  // 0x039E(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x1];                                       // 0x039F(0x0001) MISSED OFFSET
	struct FRotator                                    SpineRotationAdjustment;                                  // 0x03A0(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              AnimationPlayRate;                                        // 0x03AC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x10];                                      // 0x03B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXCharacterAnimInstance3P"));
		return ptr;
	}


	void TightAimStop();
	void TightAimStart();
	void OnVehicleChanged(class AProjectXCharacter* Driver, class AProjectXVehicle* CurrentVehicle, class AProjectXVehicle* PreviousVehicle);
	void HookshotStop(class UHookshotComponent* HookshotComponent);
	void HookshotStart(class UHookshotComponent* HookshotComponent);
	void CrouchChanged(bool bToggle);
};


// Class ProjectX.ProjectXCharacterMovement
// 0x0190 (0x0CE0 - 0x0B50)
class UProjectXCharacterMovement : public UCharacterMovementComponent
{
public:
	struct FMulticastScriptDelegate                    OnClamberStart;                                           // 0x0B50(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnClamberEnd;                                             // 0x0B60(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnWaterRunningStart;                                      // 0x0B70(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnWaterRunningEnd;                                        // 0x0B80(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnCustomMovementToggled;                                  // 0x0B90(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	float                                              CrouchSpeedModifier;                                      // 0x0BA0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              FastFallSpeed;                                            // 0x0BA4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CurrentSlopeInstance;                                     // 0x0BA8(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              UpwardSlopePenalty;                                       // 0x0BAC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SlopeDecay;                                               // 0x0BB0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              WaterRunningSlopeRate;                                    // 0x0BB4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              BoostSlopeRate;                                           // 0x0BB8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxDeltaSlope;                                            // 0x0BBC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxSlopeInstance;                                         // 0x0BC0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SlopeSpeedDivisor;                                        // 0x0BC4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCurveFloat*                                 SlopeSpeedCurve;                                          // 0x0BC8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxSlopeSpeedDifference;                                  // 0x0BD0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SlopeResetSpeed;                                          // 0x0BD4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RampPredictionDistance;                                   // 0x0BD8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RampDownwardPredictionDistance;                           // 0x0BDC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MinRampAngle;                                             // 0x0BE0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bUseSlopes;                                               // 0x0BE4(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0BE5(0x0003) MISSED OFFSET
	float                                              FlatBoostMultiplier;                                      // 0x0BE8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bHasJetPack;                                              // 0x0BEC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0BED(0x0003) MISSED OFFSET
	float                                              JetpackForce;                                             // 0x0BF0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              JetpackMaxZ;                                              // 0x0BF4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCurveFloat*                                 JetpackIncreaseDrainCurve;                                // 0x0BF8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bCanDash;                                                 // 0x0C00(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bCanHookshot;                                             // 0x0C01(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0C02(0x0002) MISSED OFFSET
	float                                              HookshotCostPerSecond;                                    // 0x0C04(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              HookshotLength;                                           // 0x0C08(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              HookshotSpeed;                                            // 0x0C0C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCurveFloat*                                 IncreaseSpeedCurve;                                       // 0x0C10(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SpringStiffness;                                          // 0x0C18(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              HookshotLatchTime;                                        // 0x0C1C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SpringFriction;                                           // 0x0C20(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              HookshotDeceleration;                                     // 0x0C24(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              HookshotDisengagementDistance;                            // 0x0C28(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ClamberMaxDistance;                                       // 0x0C2C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ClamberMaxAccelerationAngleDeviation;                     // 0x0C30(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ClamberSurfaceMaxSlope;                                   // 0x0C34(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ClamberMaxCameraDirectionAngleDeviation;                  // 0x0C38(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ClamberMaxHeight;                                         // 0x0C3C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ClamberForce;                                             // 0x0C40(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxUpwardsClamberForce;                                   // 0x0C44(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0C48(0x0008) MISSED OFFSET
	class AProjectXCharacter*                          PXCharacterOwner;                                         // 0x0C50(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData04[0x88];                                      // 0x0C58(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXCharacterMovement"));
		return ptr;
	}


	void SetSlopeInstanceMultiplierFromSpeed(float Speed);
	void OnLanded(const struct FHitResult& HitResult);
	void OnCharacterInputDisabled();
	bool IsRunningOnWater();
	float GetTimeMovementStoppedAt();
	float GetTimeMovementStartedAt();
	float GetSlopeInstanceMultiplier();
	float GetSlopeInstance();
	float GetMaxPossibleSpeed();
	float GetHookShotLength();
	float GetGroundFrictionCache();
	float GetDeltaSlope();
	float GetCrouchSpeedModifier();
	void Client_Reliable_JetPackShutdown(float WorldTime);
	void Client_Reliable_HookshotShutdown();
};


// Class ProjectX.ProjectXCheatManager
// 0x0000 (0x0078 - 0x0078)
class UProjectXCheatManager : public UCheatManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXCheatManager"));
		return ptr;
	}

};


// Class ProjectX.ProjectXGameInstance
// 0x0A00 (0x1808 - 0x0E08)
class UProjectXGameInstance : public UGameInstanceLoadingScreen
{
public:
	struct FMulticastScriptDelegate                    WorldOriginChangedEvent;                                  // 0x0E08(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    SessionSearchCompleteEvent;                               // 0x0E18(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSessionsListUpdatedEvent;                               // 0x0E28(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    SessionJoinCompleteEvent;                                 // 0x0E38(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    SessionDestroyCompleteEvent;                              // 0x0E48(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSessionStateUpdatedEvent;                               // 0x0E58(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSessionMatchmakingUpdated;                              // 0x0E68(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnServerRestartPending;                                   // 0x0E78(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnShowFoundersPrompt;                                     // 0x0E88(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnShowcaseUnlockedItems;                                  // 0x0E98(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnTwitchIntegrationVerified;                              // 0x0EA8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnTwitchIntegrationRemoved;                               // 0x0EB8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnMenuStateChanged;                                       // 0x0EC8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnNakamaUsersFoundEvent;                                  // 0x0ED8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnNakamaUserIDFoundEvent;                                 // 0x0EE8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnNakamaManagerInitializedEvent;                          // 0x0EF8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnDailyLoginEvent;                                        // 0x0F08(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFOVSettingChanged;                                      // 0x0F18(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_BlueprintCallable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnUserInfoReceivedEvent;                                  // 0x0F28(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0F38(0x0010) MISSED OFFSET
	class USoundAttenuation*                           ShooterSoundAttenuation;                                  // 0x0F48(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USoundConcurrency*                           HitConcurrency;                                           // 0x0F50(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x190];                                     // 0x0F58(0x0190) MISSED OFFSET
	TArray<struct FLanguageDefinition>                 SupportedLanguages;                                       // 0x10E8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TMap<EGameType, struct FText>                      GameModeNames;                                            // 0x10F8(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TMap<struct FString, struct FText>                 EnumStringMap;                                            // 0x1148(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TMap<struct FName, struct FLinearColor>            AllyColours;                                              // 0x1198(0x0050) (CPF_Edit, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_NativeAccessSpecifierPublic)
	TMap<struct FName, struct FLinearColor>            EnemyColours;                                             // 0x11E8(0x0050) (CPF_Edit, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_NativeAccessSpecifierPublic)
	TMap<ERarity, struct FLinearColor>                 RarityColours;                                            // 0x1238(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                NeutralColor;                                             // 0x1288(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                SquadmateColour;                                          // 0x1298(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FText>                               TeamNames;                                                // 0x12A8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             AchievementMapNameList;                                   // 0x12B8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_NativeAccessSpecifierPublic)
	TArray<class UClass* /*AProjectXCharacter*/>       PlayerClassList;                                          // 0x12C8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TArray<class UClass* /*AProjectXVehicle*/>         VehicleClassList;                                         // 0x12D8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	class UClass* /*AProjectXMapCamera*/               MapCameraClass;                                           // 0x12E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableAntiCheatForServer;                                // 0x12F0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x12F1(0x0007) MISSED OFFSET
	TArray<int>                                        ModIds;                                                   // 0x12F8(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             WhitelistedAdmins;                                        // 0x1308(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             WhitelistedPlayers;                                       // 0x1318(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDataTable>                   MatureWordsDatabase;                                      // 0x1328(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UPlatformInputSymbols*/            PlatformInputSymbols;                                     // 0x1350(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnnouncerSoundDataAsset*                    AnnouncementDataSet;                                      // 0x1358(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnnouncerSoundDataAsset*                    GeneralAnnouncementDataSet;                               // 0x1360(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*               HelmetRadioEffect;                                        // 0x1368(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USoundClass*                                 LocalWeaponSoundClass;                                    // 0x1370(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                      FrameBufferAsRenderTexture;                               // 0x1378(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveFloat*                                 NavLinkApproachCurve;                                     // 0x1380(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AcceptablePingRange;                                      // 0x1388(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaximumPingRange;                                         // 0x138C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SessionEventDelayLength;                                  // 0x1390(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PartyHostSessionJoinDelay;                                // 0x1394(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*AProjectXCharacter*/               DefaultFavouriteCharacter;                                // 0x1398(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UAfflictionInstance*/              DefaultMarkRemainingEnemiesAffliction;                    // 0x13A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsFoundersEdition;                                       // 0x13A8(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x7];                                       // 0x13A9(0x0007) MISSED OFFSET
	struct FText                                       CancelText;                                               // 0x13B0(0x0018) (CPF_NativeAccessSpecifierPublic)
	struct FText                                       OkText;                                                   // 0x13C8(0x0018) (CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x50];                                      // 0x13E0(0x0050) MISSED OFFSET
	class UPlayerProgressionManager*                   PlayerProgression;                                        // 0x1430(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0xA0];                                      // 0x1438(0x00A0) MISSED OFFSET
	TArray<class UClass* /*ULevelInfo*/>               MapList;                                                  // 0x14D8(0x0010) (CPF_ZeroConstructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPrivate)
	TArray<TSoftClassPtr<class UClass>>                MapListConfig;                                            // 0x14E8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPrivate)
	class UDataTable*                                  MasterCosmeticTable;                                      // 0x14F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UDataTable*                                  PerksTable;                                               // 0x1500(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UDataTable*                                  ChallengeTable;                                           // 0x1508(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UDataTable*                                  RarityWeightTable;                                        // 0x1510(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FString                                     KickReason;                                               // 0x1518(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData06[0x20];                                      // 0x1528(0x0020) MISSED OFFSET
	class UStatsTrackingManager*                       StatsTracker;                                             // 0x1548(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UNakamaManager*                              NakamaManager;                                            // 0x1550(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCosmeticsManager*                           CosmeticManager;                                          // 0x1558(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class URemoteConsole*                              RemoteConsole;                                            // 0x1560(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UUGCRegistry*                                UGCRegistry;                                              // 0x1568(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData07[0x248];                                     // 0x1570(0x0248) MISSED OFFSET
	TMap<EAchievementData, int>                        AchievementMap;                                           // 0x17B8(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXGameInstance"));
		return ptr;
	}


	static void UpdateSortParameters(ESortParameter SortParamater, bool bSortDescending, TArray<struct FServerInfo> Info, TArray<struct FServerInfo>* SortedInfos);
	void UpdateClientPassword(struct FString* NewPassword);
	void UnlinkTwitchAccount();
	bool ShowFoundersPrompt();
	void SetKickReason(const struct FString& InKickReason);
	void SetCaptureBackBuffer(bool bCaptureBackBuffer);
	void RequestUserInfo(const struct FString& PlayerID);
	void OverrideAuthoritativeStat(const struct FString& StatKey, int Value);
	void OnSearchSessionsComplete(bool bWasSuccessful);
	void OnReadFriendListCompleteResponse(int LocalUserNum, bool bWasSuccessful, const struct FString& ListName, const struct FString& ErrorStr);
	void OnPostWorldOriginOffset(class UWorld* InWorld, const struct FIntVector& PreviousOriginLocation, const struct FIntVector& NewOriginLocation);
	void OnPlatformDependentEngagementCompleted();
	void OnNakamaConnected();
	void OnFriendsChanged();
	void LoadNakamaUsers(TArray<struct FString> NakamaIds);
	void LinkTwitchAccount();
	void LevelToTarget(const struct FString& StatKey, int Value);
	void LeaveSession();
	void JoinSession(const struct FServerInfo& SessionInfo);
	void JoinBestSession(TArray<struct FServerInfo> ServerInfos);
	bool IsMatchmaking();
	bool IsLoginBonusAvailable();
	void InitTwitch();
	bool HasValidTwitchAccountLinked();
	void HasOnlinePermissions(EProjectXPrivileges PrivelegeToCheck, const struct FScriptDelegate& Callback);
	void GetWeaponList(EEquipSlot Slot, TArray<class UClass* /*UWeaponInstance*/>* WeaponList);
	TArray<class UClass* /*AProjectXVehicle*/> GetVehicleClassList();
	bool GetUnlockedItemsPlayerMayHaveMissed(ERewardType Type, struct FRewardShowcase* FoundReward);
	void GetTwitchAccountInfo(struct FString* Username, struct FString* Avatar);
	TArray<struct FText> GetSupportedLanguages();
	class UStatsTrackingManager* GetStatsTrackingManager();
	struct FLinearColor GetSquadmateColour();
	ESessionState GetSessionState();
	TArray<struct FServerInfo> GetServerInfos();
	class UDataTable* GetRarityWeightTable();
	struct FLinearColor GetRarityColour(ERarity Rarity);
	TArray<class UClass* /*AProjectXCharacter*/> GetPlayerClassList();
	class UDataTable* GetPerkTable();
	class UNakamaManager* GetNakamaManager();
	class UClass* /*AProjectXMapCamera*/ GetMapCameraClass();
	struct FIntVector GetLastOriginShiftDelta();
	float GetInstanceUptime();
	TArray<struct FString> GetFriendsList();
	void GetFoundersDLC();
	struct FLinearColor GetEnemyColour(const struct FName& ColourName);
	static void GetCurrentLevelNameForClients(struct FString* LevelName);
	static void GetCurrentLevelName(struct FString* LevelName);
	struct FName GetCurrentCulture();
	class UDataTable* GetCosmeticsTable();
	class UCosmeticsManager* GetCosmeticsManager();
	class UDataTable* GetChallengeTable();
	struct FLinearColor GetAllyColour(const struct FName& ColourName);
	TArray<struct FString> GetAchievementMapNameList();
	void FindAndJoinBestSessionForTypes(TArray<EGameType> GameTypes, TArray<EDifficultyLevel> Difficultylevels, bool bShouldSearchFreshServersOnly);
	void FindAndJoinBestSession(EGameType GameType);
	void FindAllSessionsResponse(TArray<struct FServerInfo> ServerInfos);
	void FindAllSessions(bool bLan);
	bool DoesServerOnlyAllowWhitelistedPlayers();
	void ConsumeLoginBonus(const struct FScriptDelegate& OnLoginBonusFound);
	void ConsumeKickReason(struct FString* OutKickReason);
	void CheckReferAFriend();
	void CheckLoginBonus();
	void ChangeCulture(const struct FName& LanguageCode, bool bPromptRestart, bool bForce);
	bool CanUpdateSessionState();
	void CancelJoinSession();
	void AskForNakamaIdFromSteamID(const struct FString& SteamID, const struct FScriptDelegate& Callback);
};


// Class ProjectX.ProjectXGameMode
// 0x01E0 (0x04F8 - 0x0318)
class AProjectXGameMode : public AGameMode
{
public:
	float                                              RestartMatchTime;                                         // 0x0318(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxPlayers;                                               // 0x031C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxSpectators;                                            // 0x0320(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxTeamImbalance;                                         // 0x0324(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MatchStartTime;                                           // 0x0328(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MatchStartTimeEditor;                                     // 0x032C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MatchLength;                                              // 0x0330(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bLoadoutsEnabled;                                         // 0x0334(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0335(0x0003) MISSED OFFSET
	float                                              RedeployRespawnTime;                                      // 0x0338(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCanSwapTeams;                                            // 0x033C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x033D(0x0003) MISSED OFFSET
	int                                                MaxPlayerDeployables;                                     // 0x0340(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ReviveDuration;                                           // 0x0344(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPreventIdleKickWhileDead;                                // 0x0348(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0349(0x0007) MISSED OFFSET
	class UClass* /*AHUD*/                             SpectatorHUDClass;                                        // 0x0350(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FActorSpawnInfo>                     WorldDropsOverride;                                       // 0x0358(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	class UClass* /*ULocalMessage*/                    GameModeBroadcastMessage;                                 // 0x0368(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*ULocalMessage*/                    KillBroadcastMessage;                                     // 0x0370(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*ULocalMessage*/                    HeadshotKillBroadcastMessage;                             // 0x0378(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*ULocalMessage*/                    MatchStartRequestMessage;                                 // 0x0380(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UExperienceConfiguration*/         ExperienceConfigurationClass;                             // 0x0388(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*ULocalMessage*/                    ExperienceEventMessageClass;                              // 0x0390(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TMap<unsigned char, struct FTeamInfo>              TeamStartingConfig;                                       // 0x0398(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03E8(0x0004) MISSED OFFSET
	int                                                TeamKillsToWarning;                                       // 0x03EC(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TeamKillsToKick;                                          // 0x03F0(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TeamKillsToSessionKick;                                   // 0x03F4(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MatchLengthOverride;                                      // 0x03F8(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxPlayersOverride;                                       // 0x03FC(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxPlayerDeployablesOverride;                             // 0x0400(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	TArray<int>                                        StartingTicketCountOverride;                              // 0x0408(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_NativeAccessSpecifierPublic)
	class UCurveFloat*                                 ChargeRateCurve;                                          // 0x0418(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*ULocalMessage*/                    TeamGameBroadcastMessage;                                 // 0x0420(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x30];                                      // 0x0428(0x0030) MISSED OFFSET
	bool                                               bUseMapRotation;                                          // 0x0458(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0459(0x0007) MISSED OFFSET
	class UClass* /*AActor*/                           PodiumClass;                                              // 0x0460(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FVector                                     PodiumSpawnLocation;                                      // 0x0468(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData07[0x84];                                      // 0x0474(0x0084) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXGameMode"));
		return ptr;
	}


	bool RequestServerTravel(const struct FString& URL);
	static class AProjectXGameMode* GetGameModeDefaultObject(class UObject* WorldContextObject);
	void EndMatchTimer();
	bool ConsumeTicket(int Team, int Amount);
	bool AreLoadoutsEnabled();
};


// Class ProjectX.ProjectXGameModeAllOutWarfare
// 0x0008 (0x0500 - 0x04F8)
class AProjectXGameModeAllOutWarfare : public AProjectXGameMode
{
public:
	unsigned char                                      NumberOfCapturePointCheckpoints;                          // 0x04F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04F9(0x0003) MISSED OFFSET
	float                                              PerPlayerCaptureRate;                                     // 0x04FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXGameModeAllOutWarfare"));
		return ptr;
	}


	void OnShieldGeneratorDestroyed(class AShieldGenerator* ShieldGenerator);
	void OnCommandCenterDestroyed(class ACommandCenter* CommandCenter);
	void OnCapturePointOwnerChanged(int NewOwner, class ACapturePoint* Point);
	void OnCapturePointAttacked(int TeamTakingPoint, class ACapturePoint* Point);
};


// Class ProjectX.ProjectXGameModeAssault
// 0x0060 (0x0558 - 0x04F8)
class AProjectXGameModeAssault : public AProjectXGameMode
{
public:
	class UClass* /*ULocalMessage*/                    AssaultBroadcastMessage;                                  // 0x04F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              PointDefenseMaxDistance;                                  // 0x0500(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0504(0x0004) MISSED OFFSET
	TMap<EAssaultRole, unsigned char>                  TeamRoles;                                                // 0x0508(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXGameModeAssault"));
		return ptr;
	}


	void OnDeath(class AController* Killed, class AController* Killer, class UClass* /*UProjectXDamageType*/ DamageType, bool bWasHeadshot);
	void OnAssaultPointDestroyed(class AAssaultPoint* AssaultPoint);
	unsigned char GetTeam(EAssaultRole AssaultRole);
};


// Class ProjectX.ProjectXGameModeBaseControl
// 0x0030 (0x0528 - 0x04F8)
class AProjectXGameModeBaseControl : public AProjectXGameMode
{
public:
	float                                              BaseTicketLossInterval;                                   // 0x04F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              BaseTicketLossIntervalOverride;                           // 0x04FC(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      NumberOfCapturePointCheckpoints;                          // 0x0500(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0501(0x0003) MISSED OFFSET
	float                                              PerPlayerCaptureRate;                                     // 0x0504(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	int                                                TicketsLostPerBase;                                       // 0x0508(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	int                                                TicketsLostPerBaseOverride;                               // 0x050C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UClass* /*ULocalMessage*/                    CapturePointBroadcastMessage;                             // 0x0510(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class AProjectXGameStateBaseControl*               BaseControlGameState;                                     // 0x0518(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FTimerHandle                                TicketConsumeTimerHandle;                                 // 0x0520(0x0008) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXGameModeBaseControl"));
		return ptr;
	}


	void TicketConsumeTimer();
	void OnCapturePointOwnerChanged(int NewOwner, class ACapturePoint* Point);
	void OnCapturePointAttacked(int TeamTakingPoint, class ACapturePoint* Point);
	int GetTicketsLostPerBase();
};


// Class ProjectX.ProjectXGameModeHorde
// 0x0058 (0x0550 - 0x04F8)
class AProjectXGameModeHorde : public AProjectXGameMode
{
public:
	int                                                MaximumSpawnRange;                                        // 0x04F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                MinimumSpawnRange;                                        // 0x04FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TMap<EHordeModeRoles, unsigned char>               TeamRoles;                                                // 0x0500(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXGameModeHorde"));
		return ptr;
	}


	void OnWaveSpawnerGameOver(class AWaveSpawner* WaveSpawner, bool bSuccess);
	void OnWavesCompleted(class AWaveSpawner* WaveSpawner, bool bSuccess);
	void OnDeath(class AController* Killed, class AController* Killer, class UClass* /*UProjectXDamageType*/ DamageType, bool bWasHeadshot);
	static unsigned char GetTeamByHordeRoleStatic(EHordeModeRoles HordeRole, class UObject* WorldContextObject);
};


// Class ProjectX.ProjectXGameModeKingofTheHill
// 0x0050 (0x0548 - 0x04F8)
class AProjectXGameModeKingofTheHill : public AProjectXGameMode
{
public:
	float                                              BaseTicketLossInterval;                                   // 0x04F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              BaseTicketLossIntervalOverride;                           // 0x04FC(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      NumberOfCapturePointCheckpoints;                          // 0x0500(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0501(0x0003) MISSED OFFSET
	float                                              PerPlayerCaptureRate;                                     // 0x0504(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              BaseActiveRate;                                           // 0x0508(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              BaseWarmupRate;                                           // 0x050C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	int                                                TicketsLostPerBase;                                       // 0x0510(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	int                                                NumberOfActiveBases;                                      // 0x0514(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UClass* /*ULocalMessage*/                    KingEventBroadcastMessage;                                // 0x0518(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	int                                                TicketsLostPerBaseOverride;                               // 0x0520(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0524(0x0004) MISSED OFFSET
	class AProjectXGameStateBaseControl*               BaseControlGameState;                                     // 0x0528(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FTimerHandle                                TicketConsumeTimerHandle;                                 // 0x0530(0x0008) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FTimerHandle                                BaseActiveTimerHandle;                                    // 0x0538(0x0008) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FTimerHandle                                BaseWarmupTimerHandle;                                    // 0x0540(0x0008) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXGameModeKingofTheHill"));
		return ptr;
	}


	void UpdatePhase();
	void TicketConsumeTimer();
	void OnCapturePointOwnerChanged(int NewOwner, class ACapturePoint* Point);
	void OnCapturePointAttacked(int TeamOwner, class ACapturePoint* Point);
};


// Class ProjectX.ProjectXGameModeTDCapFlag
// 0x0010 (0x0508 - 0x04F8)
class AProjectXGameModeTDCapFlag : public AProjectXGameMode
{
public:
	class UClass* /*ULocalMessage*/                    FlagEventBroadcastMessage;                                // 0x04F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxTicketCount;                                           // 0x0500(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0504(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXGameModeTDCapFlag"));
		return ptr;
	}


	void OnFlagUpdated(class AFlag* Flag, bool bNewFlag);
	void FlagReturned(class AFlag* Flag, class AProjectXCharacter* PickingUpActor, int Team);
	void FlagPickedUp(class AFlag* Flag, class AProjectXCharacter* PickingUpActor, int Team);
	void FlagDropped(class AFlag* Flag, class AProjectXCharacter* PickingUpActor, int Team);
	void FlagCaptured(class AFlag* Flag, class AProjectXCharacter* PickingUpActor, int Team);
};


// Class ProjectX.ProjectXGameModeTeamDeathmatch
// 0x0008 (0x0500 - 0x04F8)
class AProjectXGameModeTeamDeathmatch : public AProjectXGameMode
{
public:
	int                                                MaximumSpawnRange;                                        // 0x04F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                MinimumSpawnRange;                                        // 0x04FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXGameModeTeamDeathmatch"));
		return ptr;
	}


	void OnDeath(class AController* Killed, class AController* Killer, class UClass* /*UProjectXDamageType*/ DamageType, bool bWasHeadshot);
};


// Class ProjectX.ProjectXGameModeTutorial
// 0x0000 (0x04F8 - 0x04F8)
class AProjectXGameModeTutorial : public AProjectXGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXGameModeTutorial"));
		return ptr;
	}

};


// Class ProjectX.ProjectXGameModeVIP
// 0x0038 (0x0530 - 0x04F8)
class AProjectXGameModeVIP : public AProjectXGameMode
{
public:
	class UClass* /*ULocalMessage*/                    VIPBroadcastMessage;                                      // 0x04F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UAfflictionInstance*/              VIPAffliction;                                            // 0x0500(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                MaximumSpawnRange;                                        // 0x0508(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                MinimumSpawnRange;                                        // 0x050C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                NumberOfVIPs;                                             // 0x0510(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              NewVIPSpawnRadius;                                        // 0x0514(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              NewVIPDelay;                                              // 0x0518(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x14];                                      // 0x051C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXGameModeVIP"));
		return ptr;
	}


	void UpdateVIPTeamList(unsigned char Team, unsigned char VIPID);
	void OnVIPCharacterSpawned(class APawn* NewPawn);
	bool IsValidVIPID(unsigned char VIPID);
	int GetNumberOfVIPS();
};


// Class ProjectX.ProjectXGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UProjectXGameplayStatics : public UGameplayStatics
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXGameplayStatics"));
		return ptr;
	}


	static struct FVector2D VRandRange2D(const struct FVector2D& A, const struct FVector2D& B);
	static struct FVector VRandRange(const struct FVector& A, const struct FVector& B);
	static void SpaceText(struct FText* Text);
	static void SortObjects(TArray<class UObject*> InObjectArray, const struct FScriptDelegate& Condition, TArray<class UObject*>* ObjectArray);
	static float SmoothStep(float A, float B, float X);
	static void SetPostProcessTextureParameter(class UPostProcessComponent* PostProcess, int Index, const struct FName& ParamName, class UTexture* Texture);
	static void SetPostProcessMaterialVectorParameter(class UPostProcessComponent* PostProcess, int Index, const struct FName& ParamName, const struct FLinearColor& Value);
	static void SetPostProcessMaterialScalarParameter(class UPostProcessComponent* PostProcess, int Index, const struct FName& ParamName, float Value);
	static bool SetFocusOnFirstFocuseableChild(class UUserWidget* Widget);
	static void ScaleAnimationToTime(float Time, class UAnimMontage** Montage);
	static void RemoveBlendableOnTarget(class AActor* Target, const TScriptInterface<class UBlendableInterface>& InBlendableObject);
	static struct FString PXTimeSecondsToString(float InSeconds);
	static float PXApplyRadialDamageWithFalloff(class UObject* WorldContextObject, class UWeaponInstance* WeaponInstance, float BaseDamage, float MinimumDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, class UClass* /*UDamageType*/ DamageTypeClass, TArray<class AActor*> IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, bool bActorsInRadiusAsIgnoredActors, bool bIgnoreAllies, TArray<class AActor*>* OutHitActors);
	static bool ProjectPointToNavigation(class UObject* WorldContextObject, class UClass* /*AActor*/ NavAgentClass, const struct FVector& Extents, struct FVector* Point);
	static void PlayLocalSound(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, class AActor* OwningActor);
	static void PlayAnnouncerVoice(class UObject* WorldContextObject, const struct FString& VoiceToPlay);
	static void ModifyAmbientCubemapTint(class APostProcessVolume* PostProcess, const struct FLinearColor& NewColor);
	static void ModifyAmbientCubemapIntensity(class APostProcessVolume* PostProcess, float NewValue);
	static struct FDamageEvent MakeDamageEventFromClass(class UClass* /*UDamageType*/ DamageType);
	static bool KeyMatchesAction(class UObject* WorldContextObject, const struct FName& ActionName, const struct FKeyEvent& KeyEvent);
	static bool IsXboxOne();
	static bool IsValidVersion(int VersionNumberIn, int BranchNumberIn);
	static bool IsUsingGamePad(class UObject* WorldContextObject);
	static bool IsShippingBuild();
	static bool IsReleaseBuild();
	static bool IsPS4();
	static bool IsPathable(class UObject* WorldContextObject, const struct FVector& EndPosition, const struct FVector& StartPosition, class UClass* /*AActor*/ NavAgentClass);
	static bool IsPatchBuild();
	static bool IsEditor();
	static bool IsDevBuild();
	static bool IsConsolePlatform();
	static bool IsCDO(class UObject* Object);
	static bool IsAnnouncerSpeaking(class UObject* WorldContextObject);
	static float InverseLerp(float A, float B, float X, bool bClamped);
	static struct FString GetWidgetPath(class UWidget* Widget);
	static int64_t GetUniqueID(class UObject* Object);
	static void GetTargetsInRadius(class UObject* WorldContextObject, const struct FVector& StartLocation, float Radius, TArray<class AActor*>* Targets);
	static void GetSocketTransformRelativeToRoot(const struct FName& Socket, class USkeletalMeshComponent* SkeletalMesh, struct FTransform* OutTransform);
	static float GetScaledAnimationTime(class UAnimMontage* Montage, float Time);
	static struct FVector GetRandomPointInActorBounds(class AActor* Actor);
	static struct FLinearColor GetPostProcessMaterialVectorParameter(class UPostProcessComponent* PostProcess, int Index, const struct FName& ParamName);
	static float GetPostProcessMaterialScalarParameter(class UPostProcessComponent* PostProcess, int Index, const struct FName& ParamName);
	static class UMaterialInstanceDynamic* GetPostProcessMaterialDynamic(class UPostProcessComponent* PostProcess, int Index);
	static class UMaterialInstance* GetPostProcessMaterial(class UPostProcessComponent* PostProcess, int Index);
	static struct FString GetPlayerID(struct FUniqueNetIdRepl* NetID);
	static class UTexture2D* GetPlayerAvatar(const struct FString& PlayerID);
	static class UTexture2D* GetPlatformKeyIcon(class UObject* WorldContextObject, const struct FName& KeyName);
	static bool GetPenetrationAdjustment(class UWorld* World, class AActor* TestActor, class UPrimitiveComponent* PrimComp, const struct FTransform& TestWorldTransform, TArray<class AActor*> IgnoreActors, struct FVector* OutProposedAdjustment);
	static class UAdvancedUserWidget* GetLoadoutMenuWidget(class UObject* WorldContextObject);
	static void GetKeysForAction(class UObject* WorldContextObject, const struct FName& ActionName, TArray<struct FInputActionKeyMapping>* Bindings);
	static class UTexture2D* GetGamepadPlatformKeyIcon(class UObject* WorldContextObject, const struct FName& KeyName);
	static struct FBox GetFBoxFromActorBounds(class AActor* Actor);
	static class UAdvancedUserWidget* GetDeployScreenWidget(class UObject* WorldContextObject);
	static class UObject* GetDefaultObject(class UClass* /*UObject*/ Class);
	static class UAdvancedUserWidget* GetCurrentlyOpenAdvancedUserWidget(class UObject* WorldContextObject);
	static bool GetClosestPointOnCollision(class AActor* Actor, const struct FVector& Point, TEnumAsByte<ECollisionChannel> Channel, struct FVector* ClosestPoint);
	static TArray<struct FVector> GetCameraFrustumPoints(class UCameraComponent* Camera);
	static int GetBuildVersion();
	static EBuildType GetBranchVersion();
	static float GetAudioComponentFloatParam(class UAudioComponent* Component, const struct FName& ParamName);
	static void GetAllObjectsImplementingInterface(class UObject* WorldContextObject, class UClass* /*UInterface*/ Interface, TArray<class UObject*>* Objects);
	static void GetAllAliveTargets(class UObject* WorldContextObject, bool bTargetAllies, TArray<class AActor*>* TargetableActors);
	static struct FVector2D GetActorSizeOnScreenProjection(class APlayerController* PlayerController, class AActor* Actor, bool bOnlyCollidingComponents, bool bIgnoreQueryOnlyComponents);
	static struct FVector2D GetActorSizeOnScreen(class APlayerController* PlayerController, class AActor* Actor, bool bOnlyCollidingComponents, bool bIgnoreQueryOnlyComponents);
	static struct FVector2D GetActorScreenPercentage(class APlayerController* PlayerController, class AActor* Actor, bool bOnlyCollidingComponents, bool bIgnoreQueryOnlyComponents);
	static void GetActorComponents(class UObject* WorldContextObject, class UClass* /*UActorComponent*/ TypeFilter, TArray<class UActorComponent*>* Components);
	static struct FName GetActionNameForKey(const struct FKey& Key);
	static struct FName GetActionKeyName(class UObject* WorldContextObject, const struct FName& ActionName, float BindScale);
	static struct FName GetActionForKey(class UObject* WorldContextObject, const struct FKeyEvent& KeyEvent);
	static class UAdvancedUserWidget* FindOrCreateAdvancedUserWidget(class UObject* WorldContextObject, class UClass* /*UAdvancedUserWidget*/ AdvancedUserWidget, int ZOrder);
	static void CreatePoseableMeshFromMeshComponent(class AActor* Owner, class USceneComponent* RootComponent, EAttachmentRule AttachmentRules, TArray<class UMeshComponent*> MeshComponents);
	static void CopyToClipboard(const struct FString& ToCopy);
	static void ClearAllTimersForObject(class UObject* Object);
	static float ApplyRadialDamageSingle(class AActor* Target, float BaseDamage, float MinimumDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, class UClass* /*UDamageType*/ DamageTypeClass, class AActor* DamageCauser, class AController* InstigatedByController);
	static void AddOrUpdateBlendableOnTarget(class AActor* Target, const TScriptInterface<class UBlendableInterface>& InBlendableObject, float InWeight);
};


// Class ProjectX.ProjectXGameSession
// 0x0178 (0x04D0 - 0x0358)
class AProjectXGameSession : public ASteamBeaconGameSession
{
public:
	TArray<struct FString>                             BannedPlayerID;                                           // 0x0358(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             BannedPlayerIP;                                           // 0x0368(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             SessionKickedPlayerID;                                    // 0x0378(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ServerPassword;                                           // 0x0388(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     OfficialServerSessionPassword;                            // 0x0398(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ServerName;                                               // 0x03A8(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ServerRegion;                                             // 0x03B8(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x108];                                     // 0x03C8(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXGameSession"));
		return ptr;
	}

};


// Class ProjectX.ProjectXGameState
// 0x02E0 (0x05C8 - 0x02E8)
class AProjectXGameState : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02E8(0x0010) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnWinningTeamSetEvent;                                    // 0x02F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnServerBroadcastMarkedLocationRecieved;                  // 0x0308(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnServerBroadcastMarkedLocationRemoved;                   // 0x0318(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnKilled;                                                 // 0x0328(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnMatchStarted;                                           // 0x0338(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPlayerStateAdded;                                       // 0x0348(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPlayerStateRemoved;                                     // 0x0358(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnMatchStateChanged;                                      // 0x0368(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnKillFeedUpdate;                                         // 0x0378(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnTeamScoresChanged;                                      // 0x0388(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnTeamTicketsChanged;                                     // 0x0398(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnUltimateEvent;                                          // 0x03A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnTrackableActorAdded;                                    // 0x03B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnWelcomeMessageChanged;                                  // 0x03C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnBotSpawned;                                             // 0x03D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnBotKilled;                                              // 0x03E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnTimerStart;                                             // 0x03F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	TArray<class UClass* /*AProjectXCharacter*/>       PlayerClassListOverride;                                  // 0x0408(0x0010) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	float                                              RespawnDelayOverride;                                     // 0x0418(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RedeployRespawnDelayOverride;                             // 0x041C(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShouldOpenMapOnPlayerStart;                              // 0x0420(0x0001) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAllowExplosiveDamageOnSelf;                              // 0x0421(0x0001) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseSpectatorCamOnDeath;                                  // 0x0422(0x0001) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0423(0x0001) MISSED OFFSET
	float                                              FriendlyFirePercent;                                      // 0x0424(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDisableBulletMagnetism;                                  // 0x0428(0x0001) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0429(0x0003) MISSED OFFSET
	float                                              UltimateDamageMultiplier;                                 // 0x042C(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ExplosiveDamageMultiplier;                                // 0x0430(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HeadshotDamageMultiplier;                                 // 0x0434(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WeaponDamageMultiplier;                                   // 0x0438(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AbilityCooldownMultiplier;                                // 0x043C(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HookshotDistanceMultiplier;                               // 0x0440(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HookshotSpeedMultiplier;                                  // 0x0444(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              UltimateChargeRateMultiplier;                             // 0x0448(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              GrenadeCountModifier;                                     // 0x044C(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DashChargeModifier;                                       // 0x0450(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsAmmoLimited;                                           // 0x0454(0x0001) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0455(0x0003) MISSED OFFSET
	float                                              AltitudeLimitMultiplier;                                  // 0x0458(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WeaponSpreadMultiplier;                                   // 0x045C(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              GravityMultiplier;                                        // 0x0460(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              GroundSpeedMultiplier;                                    // 0x0464(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCanSpawnInCombat;                                        // 0x0468(0x0001) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowDeployScreen;                                        // 0x0469(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseLandingScreen;                                        // 0x046A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCanSpawnInPV;                                            // 0x046B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	class UClass* /*APickupReviveBeacon*/              GlobalReviveBeaconOverride;                               // 0x0470(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              EXPMultiplier;                                            // 0x0478(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x4];                                       // 0x047C(0x0004) MISSED OFFSET
	class UVehicleRespawnManager*                      VehicleRespawnManager;                                    // 0x0480(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class USquadComponent*                             SquadComponent;                                           // 0x0488(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TMap<int, struct FWorldPickupInfo>                 WorldPickups;                                             // 0x0490(0x0050) (CPF_Protected, CPF_NativeAccessSpecifierProtected)
	int                                                WorldPickupID;                                            // 0x04E0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData06[0x14];                                      // 0x04E4(0x0014) MISSED OFFSET
	TArray<struct FTeamTicketInfo>                     TeamTicketList;                                           // 0x04F8(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_RepNotify, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FGenericTimerInfo                           GenericTimer;                                             // 0x0508(0x0008) (CPF_Net, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData07[0x70];                                      // 0x0510(0x0070) MISSED OFFSET
	float                                              MatchStartTime;                                           // 0x0580(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              MatchLength;                                              // 0x0584(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              MatchEndTimestamp;                                        // 0x0588(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      MaxPlayers;                                               // 0x058C(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData08[0x3];                                       // 0x058D(0x0003) MISSED OFFSET
	TArray<int>                                        StartingTicketCount;                                      // 0x0590(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
	int                                                WinningTeam;                                              // 0x05A0(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData09[0x4];                                       // 0x05A4(0x0004) MISSED OFFSET
	struct FString                                     WelcomeMessage;                                           // 0x05A8(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_RepNotify, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData10[0x10];                                      // 0x05B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXGameState"));
		return ptr;
	}


	void UpdateGameTimer();
	static void StopBroadcastedTimerStatic(class UObject* WorldContextObject);
	void OnRep_WinningTeam();
	void OnRep_WelcomeMessage();
	void OnRep_TeamTicketList();
	void OnRep_GenericTimer();
	void OnPlayerPawnSpawned(class AProjectXCharacter* Character);
	static bool IsSquadMate(class UObject* WorldContextObject, class AActor* Target, class AActor* EventInstigator);
	static bool IsNeutralByTeam(int Team);
	static bool IsNeutral(class UObject* WorldContextObject, class AActor* Target);
	bool IsMatchInProgress();
	bool IsInWarmUp();
	static bool IsEnemy(class UObject* WorldContextObject, class AActor* Target, class AActor* EventInstigator);
	static bool IsAllyByTeam(class UObject* WorldContextObject, int Team, class AActor* EventInstigator);
	static bool IsAlly(class UObject* WorldContextObject, class AActor* Target, class AActor* EventInstigator);
	static bool HasMatchStartedStatic(class UObject* WorldContextObject);
	int GetWinningTeam();
	class UVehicleRespawnManager* GetVehicleRespawnManager();
	float GetTimeUntilMatchStart();
	int GetTicketCount(unsigned char Team);
	static int GetTeamStatic(class AActor* Target);
	void GetTeamScores(TArray<struct FTeamScoreInfo>* OutTeamScores);
	static struct FText GetTeamNameStatic(class AActor* Target);
	static struct FText GetTeamNameByTeamStatic(class UObject* WorldContextObject, int Team);
	static void GetTargetColourByTeam(int Team, const struct FName& ColourName, class AActor* EventInstigator, struct FLinearColor* LinearColor);
	static void GetTargetColour(class AActor* Target, const struct FName& ColourName, class AActor* EventInstigator, struct FLinearColor* LinearColor);
	int GetStartingTicketCount(unsigned char Team);
	class USquadComponent* GetSquadComponent();
	static float GetServerWorldTimeSecondsStatic(class UObject* WorldContextObject);
	float GetReviveDuration();
	class UClass* /*APickupReviveBeacon*/ GetReviveBeaconGlobalOverride();
	float GetRedeployRespawnDelay();
	float GetPostGameLength();
	EMatchResult GetPlayerResult(class AProjectXPlayerState* PlayerState);
	static TArray<class UClass* /*AProjectXCharacter*/> GetPlayerClassListStatic(class UClass* /*AProjectXGameState*/ GameStateClass);
	TArray<class UClass* /*AProjectXCharacter*/> GetPlayerClassList();
	int GetNumberOfTeams();
	float GetMaxPlayers();
	float GetMatchTimeRemaining();
	float GetMatchStartTime();
	static float GetMatchLengthStatic(class UObject* WorldContextObject);
	float GetMatchLength();
	float GetMatchEndTimestamp();
	float GetMatchEndTime();
	static float GetMatchElapsedTimeStatic(class UObject* WorldContextObject);
	float GetMatchElapsedTime();
	static struct FText GetGameTypeTextStatic(class UObject* WorldContextObject, EGameType InGameType);
	EGameType GetGameType();
	static class AGameStateBase* GetGameStateNoAutoWorldContext(class UObject* WorldContextObject);
	struct FLinearColor GetEnemyColour(const struct FName& ColourName);
	struct FLinearColor GetAllyColour(const struct FName& ColourName);
	bool CanSpawnInPV();
	bool CanShowDeployScreen();
	static void BroadcastTimerStatic(class UObject* WorldContextObject, float TimerDuration, unsigned char Type);
};


// Class ProjectX.ProjectXGameStateAllOutWarfare
// 0x00A0 (0x0668 - 0x05C8)
class AProjectXGameStateAllOutWarfare : public AProjectXGameState
{
public:
	struct FMulticastScriptDelegate                    OnTeamsPercentageChanged;                                 // 0x05C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnObjectivesChanged;                                      // 0x05D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTeamObjective>                      Objectives;                                               // 0x05E8(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_RepNotify, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FTeamPercentage>                     TeamPercentages;                                          // 0x05F8(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_RepNotify, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0608(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXGameStateAllOutWarfare"));
		return ptr;
	}


	void OnShieldIsUnderAttack(class AShieldGenerator* ShieldUnderAttack);
	void OnShieldHealthChanged(class AShieldGenerator* ShieldUnderAttack, float Delta);
	void OnRep_TeamPercentages();
	void OnRep_Objectives();
	void OnCommandCenterUnderAttack(class ACommandCenter* CommandCenterUnderAttack);
	void OnCommandCenterHealthChanged(class ACommandCenter* CommandCenterUnderAttack, float Delta);
	TArray<struct FTeamPercentage> GetTeamPercentages();
	bool GetShieldGeneratorsByTeam(unsigned char Team, TArray<class AShieldGenerator*>* FoundShieldGenerators);
	bool GetObjectivesForTeam(unsigned char Team, TArray<class AActor*>* FoundObjectives);
	TArray<struct FTeamObjective> GetObjectives();
	class ACommandCenter* GetCommandCenterByTeam(unsigned char Team);
};


// Class ProjectX.ProjectXGameStateAssault
// 0x0090 (0x0658 - 0x05C8)
class AProjectXGameStateAssault : public AProjectXGameState
{
public:
	struct FMulticastScriptDelegate                    OnAssaultPointsChanged;                                   // 0x05C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnTeamRolesChanged;                                       // 0x05D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnAssaultPointEvent;                                      // 0x05E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPhaseChangedEvent;                                      // 0x05F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	TArray<class AAssaultPoint*>                       AssaultPoints;                                            // 0x0608(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_RepNotify, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	int                                                AssaultPhase;                                             // 0x0618(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x061C(0x0004) MISSED OFFSET
	TArray<struct FAssaultTeamInfo>                    TeamInfos;                                                // 0x0620(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_RepNotify, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0630(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXGameStateAssault"));
		return ptr;
	}


	void OnRep_Phase(int PreviousAssaultPhase);
	void OnRep_AssaultRoles();
	void OnRep_AssaultPoints();
	static EAssaultRole GetTeamRoleStatic(class AActor* Target);
	int GetTeamByRole(EAssaultRole AssaultRole);
	static EAssaultRole GetRoleFromTeamStatic(class UObject* WorldContextObject, unsigned char TeamID);
	unsigned char GetPreviousAssaultPhase();
	TArray<class AAssaultPoint*> GetAssaultPoints();
	unsigned char GetAssaultPhase();
	void GetActiveAssaultPoints(TArray<class AAssaultPoint*>* ActivePoints);
};


// Class ProjectX.ProjectXGameStateBaseControl
// 0x0048 (0x0610 - 0x05C8)
class AProjectXGameStateBaseControl : public AProjectXGameState
{
public:
	struct FMulticastScriptDelegate                    OnCapturePointEvent;                                      // 0x05C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnControlPointsChanged;                                   // 0x05D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	TArray<class ACapturePoint*>                       CapturePoints;                                            // 0x05E8(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_RepNotify, CPF_NativeAccessSpecifierPrivate)
	struct FTimerHandle                                TicketConsumeTimerHandle;                                 // 0x05F8(0x0008) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0600(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXGameStateBaseControl"));
		return ptr;
	}


	void OnRep_CapturePoints();
	TArray<class ACapturePoint*> GetControlPoints();
	int GetBaseCount(unsigned char Team);
};


// Class ProjectX.ProjectXGameStateHorde
// 0x0148 (0x0710 - 0x05C8)
class AProjectXGameStateHorde : public AProjectXGameState
{
public:
	TMap<EDifficultyLevel, struct FDifficultyInfo>     Difficultylevels;                                         // 0x05C8(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TMap<unsigned char, struct FWaveTimerTextInfo>     WaveTimerTextOverrides;                                   // 0x0618(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPrimarySpawnerUpdatedEvent;                             // 0x0668(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnMobKilledEvent;                                         // 0x0678(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnWaveKillsUpdatedEvent;                                  // 0x0688(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnDifficultyUpdateEvent;                                  // 0x0698(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x58];                                      // 0x06A8(0x0058) MISSED OFFSET
	struct FWaveInfo                                   CurrentWaveInfo;                                          // 0x0700(0x0008) (CPF_Net, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      CurrentWave;                                              // 0x0708(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	EDifficultyLevel                                   DifficultyLevel;                                          // 0x0709(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x6];                                       // 0x070A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXGameStateHorde"));
		return ptr;
	}


	void UpdateWaveProgress(class AWaveSpawner* WaveSpawner, int WaveSize, int WaveKills);
	void UpdateCurrentWave(class AWaveSpawner* Spawner);
	void ShowKillCounter();
	void SetDifficultyLevel(EDifficultyLevel NewDifficultyLevel);
	void OnTimedWaveComplete(class AWaveSpawner* WaveSpawner, bool bSuccess);
	void OnRep_WaveInfo();
	void OnRep_DifficultyLevel();
	void Multicast_DisplayKillCounter();
	class AWaveSpawner* K2_GetPrimaryWaveSpawner();
	struct FWaveInfo GetCurrentWaveInfo();
	EDifficultyLevel GetCurrentDifficultyLevel();
};


// Class ProjectX.ProjectXGameStateKingofTheHill
// 0x0068 (0x0678 - 0x0610)
class AProjectXGameStateKingofTheHill : public AProjectXGameStateBaseControl
{
public:
	struct FMulticastScriptDelegate                    OnPhaseUpdatedEvent;                                      // 0x0610(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnKingofTheHillEvent;                                     // 0x0620(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FKingOfTheHillPhaseInfo                     PhaseInfo;                                                // 0x0630(0x0020) (CPF_Net, CPF_RepNotify, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0650(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXGameStateKingofTheHill"));
		return ptr;
	}


	void OnRep_KingOfTHeHillPhaseInfo();
	struct FKingOfTheHillPhaseInfo GetPhaseInfo();
};


// Class ProjectX.ProjectXGameStateTDCapFlag
// 0x0080 (0x0648 - 0x05C8)
class AProjectXGameStateTDCapFlag : public AProjectXGameState
{
public:
	struct FMulticastScriptDelegate                    OnFlagSpawnsChangedEvent;                                 // 0x05C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFlagSpawnedEvent;                                       // 0x05D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFlagEvent;                                              // 0x05E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	int                                                MaxTicketCount;                                           // 0x05F8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05FC(0x0004) MISSED OFFSET
	class UClass* /*AFlag*/                            FlagClass;                                                // 0x0600(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<class AFlagSpawn*>                          FlagSpawns;                                               // 0x0608(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_RepNotify, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class AFlag*>                               Flags;                                                    // 0x0618(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_RepNotify, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0628(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXGameStateTDCapFlag"));
		return ptr;
	}


	void UpdateFlags(class AFlag* Flag, bool bNewFlag);
	void OnRep_FlagSpawns();
	void OnRep_Flags(TArray<class AFlag*> PreviousFlags);
	TArray<class AFlagSpawn*> GetFlagSpawns();
	class UClass* /*AFlag*/ GetFlagClass();
	class AFlag* GetFlagbyCharacter(class AProjectXCharacter* Character);
};


// Class ProjectX.ProjectXGameStateVIP
// 0x0040 (0x0608 - 0x05C8)
class AProjectXGameStateVIP : public AProjectXGameState
{
public:
	struct FMulticastScriptDelegate                    OnVipsUpdatedEvent;                                       // 0x05C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    VIPEvent;                                                 // 0x05D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTeamVIP>                            VIPS;                                                     // 0x05E8(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_RepNotify, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x10];                                      // 0x05F8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXGameStateVIP"));
		return ptr;
	}


	void VIPDefeated(class AProjectXPlayerState* PlayerState);
	void OnRep_VIPInfo();
	bool GetVIPsByTeam(unsigned char Team, TArray<struct FVIP>* FoundPlayerStates);
	void GetVIPS(TArray<struct FTeamVIP>* FoundVIPs);
	bool GetVIPByPlayerState(class AProjectXPlayerState* PlayerState, struct FVIP* FoundVIP);
	int GetNumberOfVIPS();
};


// Class ProjectX.ProjectXGameViewportClient
// 0x00C0 (0x0420 - 0x0360)
class UProjectXGameViewportClient : public UGameViewportClient
{
public:
	struct FMulticastScriptDelegate                    OnHighestActiveWidgetChanged;                             // 0x0360(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnDisplayMeshVisibilityChangedEvent;                      // 0x0370(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnGamepadStateChanged;                                    // 0x0380(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnViewportKeybindUpdatedEvent;                            // 0x0390(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UUserWidget*/                      TooltipWidgetClass;                                       // 0x03A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x20];                                      // 0x03A8(0x0020) MISSED OFFSET
	struct FTimerHandle                                MapOpenTimer;                                             // 0x03C8(0x0008) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x28];                                      // 0x03D0(0x0028) MISSED OFFSET
	class UUserWidget*                                 TooltipWidgetObject;                                      // 0x03F8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0400(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXGameViewportClient"));
		return ptr;
	}


	void ToggleDisplayMesh(bool bToggled);
	static class UAdvancedUserWidget* ToggleAdvancedUserWidgetByClass(class UObject* WorldContextObject, class UClass* /*UAdvancedUserWidget*/ AdvancedUserWidgetClass, TEnumAsByte<EWindowToggleCommand> ToggleCommand);
	static void ToggleAdvancedUserWidget(class UObject* WorldContextObject, class UAdvancedUserWidget* AdvancedUserWidgetClass, TEnumAsByte<EWindowToggleCommand> ToggleCommand);
	static void ReleaseUserWidgetFromPool(class UObject* WorldContextObject, class UUserWidget* UserWidget);
	void KeysRebound();
	bool IsDisplayMeshVisible();
	static bool IsAdvancedUserWidgetActiveByClass(class UObject* WorldContextObject, class UClass* /*UAdvancedUserWidget*/ AdvancedUserWidgetClass);
	static class UProjectXGameViewportClient* GetViewportClient(class UObject* WorldContextObject);
	class UUserWidget* GetTooltipWidget();
	class UClass* /*UAdvancedUserWidget*/ GetHighestActiveWidget();
	class AActor* GetDisplayMesh();
	static class UUserWidget* CreateUserWidgetFromPool(class UObject* WorldContextObject, class UClass* /*UUserWidget*/ UserWidget);
	static class UAdvancedUserWidget* CreateAdvancedUserWidget(class UObject* WorldContextObject, class UClass* /*UAdvancedUserWidget*/ AdvancedUserWidgetClass, int ZOrder);
	static void BuildWidgetPoolForWidget(class UObject* WorldContextObject, class UClass* /*UUserWidget*/ UserWidget, int PoolSize);
};


// Class ProjectX.ProjectXHUD
// 0x00C8 (0x03E8 - 0x0320)
class AProjectXHUD : public AHUD
{
public:
	struct FMulticastScriptDelegate                    OnHUDVisibilityChanged;                                   // 0x0320(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UAdvancedUserWidget*/              GameSettingsWidgetClass;                                  // 0x0330(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UClass* /*UAdvancedUserWidget*/              MapWidgetClass;                                           // 0x0338(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UClass* /*UAdvancedUserWidget*/              MainMenuWidgetClass;                                      // 0x0340(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UClass* /*UAdvancedUserWidget*/              EscMenuWidgetClass;                                       // 0x0348(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UClass* /*UAdvancedUserWidget*/              ContextMenuWidgetClass;                                   // 0x0350(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UClass* /*UAdvancedUserWidget*/              GlobalMessageDialogueWidgetClass;                         // 0x0358(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UClass* /*UAdvancedUserWidget*/              ScoreboardWidgetClass;                                    // 0x0360(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UClass* /*UAdvancedUserWidget*/              PostGameWidgetClass;                                      // 0x0368(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UClass* /*UAdvancedUserWidget*/              KickVoteWidgetClass;                                      // 0x0370(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UClass* /*UAdvancedUserWidget*/              MapVoteWidgetClass;                                       // 0x0378(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UClass* /*UAdvancedUserWidget*/              QuickChatWidgetClass;                                     // 0x0380(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UClass* /*UUserWidget*/                      GameModeWidgetClass;                                      // 0x0388(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UClass* /*UAdvancedUserWidget*/              MissionResultWidgetClass;                                 // 0x0390(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UClass* /*UAdvancedUserWidget*/              LoadoutWidgetClass;                                       // 0x0398(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UClass* /*UAdvancedUserWidget*/              DeathWidgetClass;                                         // 0x03A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UClass* /*UAdvancedUserWidget*/              LandingScreenWidgetClass;                                 // 0x03A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UClass* /*UUserWidget*/                      FollowWidgetClass;                                        // 0x03B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UClass* /*AActor*/                           InGameLoadoutDisplayClass;                                // 0x03B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET
	class UProjectXGameViewportClient*                 ViewportClient;                                           // 0x03C8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UFont*                                       DebugFont;                                                // 0x03D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              PostGameUIDelay;                                          // 0x03D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              PodiumDuration;                                           // 0x03DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              TimeBeforeShowingMapOnDeath;                              // 0x03E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXHUD"));
		return ptr;
	}


	class UReticleWidget* UpdateReticleWidget(class UClass* /*UReticleWidget*/ WidgetClass);
	void ToggleWidgetByClass(class UClass* /*UAdvancedUserWidget*/ WidgetClass, TEnumAsByte<EWindowToggleCommand> ToggleCommand);
	void ShowPodium();
	void ShowMatchResultWidget();
	void RemoveHUDUserWidget(class UUserWidget* Widget);
	void OpenPostGameMenu();
	void OpenFollowScreen();
	void OnPlayerDeath();
	class UUserWidget* GetWidgetByType(class UClass* /*UUserWidget*/ WidgetClass);
	class UReticleWidget* GetReticleWidget();
	class UUserWidget* GetMapWidget();
	static class AProjectXHUD* GetHUD(class UObject* WorldContextObject, int Slot);
	class UHUDBasicUserWidget* GetGameplayWidget();
	void DrawProjectileDebug();
	void DeferredOpenMap(float Delay);
	class UAdvancedUserWidget* CreateMenuWidget(class UClass* /*UAdvancedUserWidget*/ WidgetClass, int ZOrder);
	class UHUDBasicUserWidget* CreateHUDUserWidget(class UClass* /*UObject*/ WidgetClass, int ZOrder);
	static class UContextMenuWidget* CreateGlobalMessageDialogue(class UObject* WorldContextObject, const struct FContextMenuOption& ContextMenuOption1, const struct FContextMenuOption& ContextMenuOption2, const struct FText& Title, const struct FText& Message, bool bIsDismissable, class UObject* ContextObject);
	static class UContextMenuWidget* CreateContextMenu(class UObject* WorldContextObject, TArray<struct FContextMenuOption> ContextMenuOptions, const struct FText& Title, bool bIsDismissable, class UObject* ContextObject);
	void CloseQuickChat();
};


// Class ProjectX.ProjectXLocalPlayer
// 0x0000 (0x0258 - 0x0258)
class UProjectXLocalPlayer : public ULocalPlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXLocalPlayer"));
		return ptr;
	}

};


// Class ProjectX.ProjectXMapCamera
// 0x0020 (0x07D0 - 0x07B0)
class AProjectXMapCamera : public ACameraActor
{
public:
	float                                              CameraHeight;                                             // 0x07B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CameraSpeed;                                              // 0x07B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   MinMaxZoomHeight;                                         // 0x07B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x07C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXMapCamera"));
		return ptr;
	}

};


// Class ProjectX.ProjectXNavLinkProxy
// 0x0010 (0x0290 - 0x0280)
class AProjectXNavLinkProxy : public ANavLinkProxy
{
public:
	class UCurveFloat*                                 ApproachCurve;                                            // 0x0280(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TransitionTime;                                           // 0x0288(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x028C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXNavLinkProxy"));
		return ptr;
	}


	void InternalSmartLinkReached(class AActor* MovingActor, const struct FVector& DestinationPoint);
};


// Class ProjectX.ProjectXSpawnerObjective
// 0x0128 (0x0358 - 0x0230)
class AProjectXSpawnerObjective : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0230(0x0030) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnObjectiveCompletedEvent;                                // 0x0260(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnObjectiveSpawnedEvent;                                  // 0x0270(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnObjectiveStatusUpdatedEvent;                            // 0x0280(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FObjectiveStatus                            ObjectiveStatus;                                          // 0x0290(0x0008) (CPF_Net, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              WarmupDuration;                                           // 0x0298(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CleanUpDuration;                                          // 0x029C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDestroyWhenFinishedSpawning;                             // 0x02A0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDebug;                                                   // 0x02A1(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x6];                                       // 0x02A2(0x0006) MISSED OFFSET
	TMap<EWaveSpawnerState, struct FWaveStateInfo>     WaveInfoOverride;                                         // 0x02A8(0x0050) (CPF_Edit, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class AProjectXSpawnerObjective*>           LinkedObjectives;                                         // 0x02F8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UUserWidget*/                      ObjectiveWidgetClass;                                     // 0x0308(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              PlayerScalingValue;                                       // 0x0310(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UUserWidget>                  ObjectiveWidget;                                          // 0x0314(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x3C];                                      // 0x031C(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXSpawnerObjective"));
		return ptr;
	}


	void WarmupStarted();
	void RequestObjectiveStatusUpdateDelayed();
	void RequestObjectiveStatusUpdate();
	void OnWarmupStarted();
	void OnRep_ObjectiveStatus();
	void OnObjectiveWidgetToggled(class UUserWidget* ObjectiveOwnedWidget, bool bToggled);
	void OnObjectiveStarted();
	void OnObjectiveComplete();
	void OnCleanupCompleted();
	void ObjectiveStarted();
	void ObjectiveComplete();
	bool GetWaveInfoOverride(EWaveSpawnerState State, struct FWaveStateInfo* FoundInfo);
	class UUserWidget* GetObjectiveWidget();
	EObjectiveState GetObjectiveStat();
	void CleanupComplete();
};


// Class ProjectX.ProjectXObjectiveCapturePoint
// 0x0070 (0x03C8 - 0x0358)
class AProjectXObjectiveCapturePoint : public AProjectXSpawnerObjective
{
public:
	struct FMulticastScriptDelegate                    OnPhaseNumberUpdatedEvent;                                // 0x0358(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnCapturePointsUpdatedEvent;                              // 0x0368(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	TArray<struct FCapturePointPhaseInfo>              PhaseInfo;                                                // 0x0378(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class AObjectiveCapturePoint*>              AvailableCapturePoints;                                   // 0x0388(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              CapturePointActivationDelay;                              // 0x0398(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      NumberOfCapturePointCheckpoints;                          // 0x039C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x039D(0x0003) MISSED OFFSET
	float                                              PerPlayerCaptureRate;                                     // 0x03A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDestroyPointsOnComplete;                                 // 0x03A4(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0xB];                                       // 0x03A5(0x000B) MISSED OFFSET
	unsigned char                                      CurrentCapturePhase;                                      // 0x03B0(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	TArray<struct FCapturePointActivePhaseInfo>        ChosenCapturePoints;                                      // 0x03B8(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_RepNotify, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXObjectiveCapturePoint"));
		return ptr;
	}


	void OnRep_PhaseNumber();
	void OnRep_ChosenCapturePoints();
	void OnObjectiveActorSpawned(class AActor* SpawnedActor);
	void OnCapturePointClaimed(int TeamOwner, class ACapturePoint* Point);
	float GetPlayerCaptureRate();
	unsigned char GetPhaseNumber();
	int GetNumberOfCheckPoints();
	bool GetCapturePoints(unsigned char PhaseNumber, TArray<class AObjectiveCapturePoint*>* FoundCapturePoints);
	void GetAllCapturePoints(TArray<class AObjectiveCapturePoint*>* FoundCapturePoints);
};


// Class ProjectX.ProjectXObjectiveDefendPoints
// 0x0038 (0x0390 - 0x0358)
class AProjectXObjectiveDefendPoints : public AProjectXSpawnerObjective
{
public:
	struct FMulticastScriptDelegate                    OnDefensePointsUpdatedEvent;                              // 0x0358(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class ADestroyableObjective>> ActiveDefensePoints;                                      // 0x0368(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_RepNotify, CPF_Protected, CPF_UObjectWrapper, CPF_NativeAccessSpecifierProtected)
	TArray<class ADestroyableObjective*>               WorldSpawnedDefensePoints;                                // 0x0378(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	int                                                NumberOfPointsToDestroy;                                  // 0x0388(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	EDestructionObjectiveRole                          ObjectiveRole;                                            // 0x038C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x038D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXObjectiveDefendPoints"));
		return ptr;
	}


	void OnRep_DefensePoints();
	void OnDefensePointDestroyed(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState);
};


// Class ProjectX.ProjectXObjectiveVIP
// 0x00F8 (0x0450 - 0x0358)
class AProjectXObjectiveVIP : public AProjectXSpawnerObjective
{
public:
	struct FMulticastScriptDelegate                    OnPhaseNumberUpdatedEvent;                                // 0x0358(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnVipsUpdatedEvent;                                       // 0x0368(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	TMap<int, struct FVIPPhaseInfo>                    PhaseInfo;                                                // 0x0378(0x0050) (CPF_Edit, CPF_DisableEditOnTemplate, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              VIPPhaseDelay;                                            // 0x03C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	class UClass* /*UAfflictionInstance*/              VIPAffliction;                                            // 0x03D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      CurrentPhase;                                             // 0x03D8(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	TArray<struct FActiveVIPInfo>                      ChosenVIPS;                                               // 0x03E0(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_RepNotify, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x60];                                      // 0x03F0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXObjectiveVIP"));
		return ptr;
	}


	void OnVIPKilled(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState);
	void OnRep_VIPS();
	void OnRep_PhaseNumber();
	void OnMobSpawned(class AProjectXCharacter* SpawnedPlayerState);
	unsigned char GetPhaseNumber();
};


// Class ProjectX.ProjectXOnlineSessionClient
// 0x0000 (0x01E0 - 0x01E0)
class UProjectXOnlineSessionClient : public UOnlineSessionClient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXOnlineSessionClient"));
		return ptr;
	}

};


// Class ProjectX.ProjectXPlayerController
// 0x05F0 (0x0B70 - 0x0580)
class AProjectXPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0580(0x0010) MISSED OFFSET
	bool                                               bTravelIfGameOverInEditor;                                // 0x0590(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0591(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnPlayerStartedSpeaking;                                  // 0x0598(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPlayerStoppedSpeaking;                                  // 0x05A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPlayerVictory;                                          // 0x05B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnInteract;                                               // 0x05C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnInteractComplete;                                       // 0x05D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnIdlePlayerWarning;                                      // 0x05E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnTeamChangeResponseReceived;                             // 0x05F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnIdlePlayerStopWarning;                                  // 0x0608(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnGamepadStateChanged;                                    // 0x0618(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPawnChanged;                                            // 0x0628(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnBadConnectionDetected;                                  // 0x0638(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnGoodConnectionDetected;                                 // 0x0648(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnServerNotRespondingDetected;                            // 0x0658(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnServerRespondingDetected;                               // 0x0668(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnNewHUDCreatedAndReady;                                  // 0x0678(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPlayerError;                                            // 0x0688(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnServerRestartPlayerFailure;                             // 0x0698(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPlayerRestartRequested;                                 // 0x06A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPlayerTargetedStartedEvent;                             // 0x06B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPlayerTargetedStoppedEvent;                             // 0x06C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnKeybindUpdatedEvent;                                    // 0x06D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x18];                                      // 0x06E8(0x0018) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnClientHitPrediction;                                    // 0x0700(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnRadarSizeMultiplierUpdated;                             // 0x0710(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnServerRequestedRedeploy;                                // 0x0720(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPlayerKicked;                                           // 0x0730(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFollowPlayerUpdatedEvent;                               // 0x0740(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnWarnPlayerIdle;                                         // 0x0750(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	bool                                               bClientIdleWarned;                                        // 0x0760(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0761(0x0003) MISSED OFFSET
	float                                              RadarSizeMultiplier;                                      // 0x0764(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDebug;                                                   // 0x0768(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0xF];                                       // 0x0769(0x000F) MISSED OFFSET
	class UMapRotationReceiverComponent*               MapRotationReceiverComponent;                             // 0x0778(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UKillCameraComponent*                        KillCameraComponent;                                      // 0x0780(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UKillCameraComponent*/             KillCameraClass;                                          // 0x0788(0x0008) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UDamageType*/                      SuicideDamageType;                                        // 0x0790(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UKillCameraComponent*/             KillCameraClassOverride;                                  // 0x0798(0x0008) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                IdleTimeoutTime;                                          // 0x07A0(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MapOpenDelay;                                             // 0x07A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UVivoxPlayerComponent*                       VivoxPlayerComponent;                                     // 0x07A8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bWaitingToPlayMatchStart;                                 // 0x07B0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x3];                                       // 0x07B1(0x0003) MISSED OFFSET
	float                                              AimAssistFriction;                                        // 0x07B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              AimAssistAdhesion;                                        // 0x07B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              TurnRateAccelerationRate;                                 // 0x07BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              TurnRateDeccelerationRate;                                // 0x07C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              TurnRateAccelerationMax;                                  // 0x07C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RequestHelpDelay;                                         // 0x07C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData06[0x4];                                       // 0x07CC(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DefaultAutoAimFalloffCurve;                               // 0x07D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UAdvancedUserWidget*/              ChatBoxWidgetClass;                                       // 0x07D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UProjectXDamageType*/              ReviveDamageType;                                         // 0x07E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData07[0x370];                                     // 0x07E8(0x0370) MISSED OFFSET
	float                                              InputADSYawScale;                                         // 0x0B58(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InputADSPitchScale;                                       // 0x0B5C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UProjectXDamageType*/              GrenadeDamageType;                                        // 0x0B60(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData08[0x8];                                       // 0x0B68(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXPlayerController"));
		return ptr;
	}


	void WarnIdlePlayerToggle(bool bWarning);
	bool WaitingToPlayMatchStart();
	void WaitForInitialHud();
	void VoteYes();
	void VoteNo();
	void UpdateReviveTimeMultiplier(float NewMultiplier);
	void UpdateRadarSizeMultiplier(float NewRadarSize);
	void ToggleReadyStatus(bool bReady);
	void ToggleMeshes();
	void ToggleMap();
	void SwitchToPreviousPlayer();
	void SwitchToNextPlayer();
	void StartMatch();
	void SpawnContextPing(const struct FVector& SpawnVector);
	void SmoothCam(float NewSmoothCamSpeed);
	void SkipWave();
	void SkipMap();
	void SetWelcomeMessage(const struct FString& NewWelcomeMessage);
	void SetPlayerBindingNewButton(bool bIsPlayerCurrentlyBinding);
	void SessionKickPlayer(const struct FString& PlayerNameOrID, const struct FString& reason);
	void Server_ResetIdleTimer();
	void Server_RequestActorStateInfo();
	void Server_Reliable_SelectTeam(unsigned char Team);
	void Server_Reliable_SelectSquad(int Squad);
	void Server_Reliable_SelectSpawnTarget(class AActor* SpawnTarget);
	void Server_Reliable_SelectPlayerClass(class UClass* /*AProjectXCharacter*/ PlayerClass);
	void Server_Reliable_RespawnFromReviveBeacon();
	void Server_Reliable_RequestCosmeticFromPlayer(class APlayerState* RequestedPlayerState);
	void Server_Reliable_ReadyStatusUpdated(bool bReady);
	void Server_Reliable_PossessRecordingPawn(class AProjectXCharacter* TargetedCharacter, class AProjectXCharacter* OriginalCharacter);
	void Server_Reliable_PossessOriginalCharacter(class AProjectXCharacter* OriginalCharacter);
	void Server_Reliable_MatchStartRequest();
	void Server_Reliable_LeaveVehicle();
	void Server_Reliable_ClearSpawnTarget();
	void Server_Reliable_AutoAssignSquad();
	void Server_RedeployCharacter();
	void Server_AntiCheatMessage(TArray<unsigned char> Message);
	static void SendHitConfirm(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bHealing);
	bool SelectSpawnTarget(class AActor* SpawnTarget);
	void SelectPlayerClass(class UClass* /*AProjectXCharacter*/ PlayerClass);
	bool SelectBestSpawnTarget(const struct FVector& TargetLocation, bool bUseTargetLocation);
	void ResetIdleTimerUI();
	void ResetIdleTimer();
	void ReportPlayer(const struct FString& PlayerNameOrID, const struct FString& reason);
	void PermanentInvisibility();
	void OnRep_KillCameraClass();
	void MenuToggled(class UAdvancedUserWidget* Widget, bool bToggle);
	void MatchStartRequest();
	void KickPlayer(const struct FString& PlayerNameOrID, const struct FString& reason);
	void KeysRebound();
	void K2_ServerRestartPlayer();
	bool K2_CanRestartPlayer();
	bool IsPlayerHoldingControllerContextChangeButton();
	bool IsPlayerBindingNewButton();
	void IncrementPlayerStat(int8_t EnumElement, int NumToAdd, int DebugMapType, const struct FString& MapName);
	void IdlePlayerTimeout();
	class UVivoxPlayerComponent* GetVivoxComponent();
	class AProjectXVehicle* GetVehicle();
	static TArray<struct FHitResult> GetTargetingHitResult(class UObject* WorldContextObject);
	static TArray<class AActor*> GetTargetedActors(class UObject* WorldContextObject);
	float GetReviveTimeMultiplier();
	static struct FHitResult GetPlayerViewHitResult(class UObject* WorldContextObject);
	static struct FHitResult GetPlayerAimAssistHitResult(class UObject* WorldContextObject);
	void GetMusicTrack();
	class UMapRotationReceiverComponent* GetMapRotationReceiverComponent();
	class UKillCameraComponent* GetKillCameraComponent();
	class AProjectXPlayerState* GetFollowPlayer();
	class AProjectXCharacter* GetCharacter();
	void FocusReviveBeacon(float BlendTime);
	void FlySpeed(float NewFlySpeed);
	void EnableSpectatorMode();
	void DumpChat();
	void Client_WarnIdlePlayerToggle(bool bWarn);
	void Client_ServerRestartPlayerFailed(ESpawnError ErrorType);
	void Client_RequestRedeploy();
	void Client_Reliable_ViewPlayer(class AProjectXPlayerState* TargetPlayerState);
	void Client_Reliable_TeamChangeResponse(ETeamJoinResponse ResponseMessage);
	void Client_PlayerEquipRequest(class AProjectXPlayerState* PXPlayerState, TArray<struct FEquipInfo> Equips);
	void Client_EarlyWarnIdlePlayer();
	void Client_ConfirmHitActor(class AActor* Victim, class UClass* /*UObject*/ Weapon, bool bHeadshot, float Damage, bool bHealing);
	void Client_AntiCheatMessage(TArray<unsigned char> Message);
	void ClearSpawnTarget();
	bool ChangeTeam(unsigned char Team);
	bool ChangeSquad(int Squad);
	void BanPlayer(const struct FString& PlayerNameOrID, const struct FString& reason);
};


// Class ProjectX.ProjectXPlayerControllerMainMenu
// 0x0088 (0x0630 - 0x05A8)
class AProjectXPlayerControllerMainMenu : public ASteamBeaconPlayerController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x05A8(0x0008) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnCosmeticSelectedEvent;                                  // 0x05B0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnCosmeticDeselectedEvent;                                // 0x05C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnWeaponSelectedEvent;                                    // 0x05D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnCharacterSelectedEvent;                                 // 0x05E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnCosmeticTypeSelectedEvent;                              // 0x05F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnIsAllySelectedEvent;                                    // 0x0600(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPushToTalkPressed;                                      // 0x0610(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPushToTalkReleased;                                     // 0x0620(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXPlayerControllerMainMenu"));
		return ptr;
	}


	void SelectWeapon(const struct FString& WeaponID, bool bChangeCamera);
	void SelectIsAlly(bool bIsAlly, bool bChangeCamera);
	void SelectCosmeticType(ECosmeticType CosmeticType, bool bChangeCamera);
	void SelectCosmetic(ECosmeticType CosmeticType, const struct FString& WeaponID, class UCosmeticAssetBase* CosmeticAsset, bool bChangeCamera);
	void SelectCharacterClass(class UClass* /*AProjectXCharacter*/ CharacterClass, bool bChangeCamera);
	void OnWeaponSelected(class UClass* /*UWeaponInstance*/ WeaponClass);
	void OnIsAllySelected(bool bIsAlly, bool bChangeCamera);
	void OnCosmeticTypeSelected(ECosmeticType Type, bool bChangeCamera);
	void OnCosmeticSelected(ECosmeticType CosmeticType, class UClass* /*UWeaponInstance*/ WeaponClass, class UCosmeticAssetBase* CosmeticAsset, bool bChangeCamera);
	void OnCharacterClassSelected(class UClass* /*AProjectXCharacter*/ CharacterClass, bool bChangeCamera);
	void DeselectCosmetic(ECosmeticType CosmeticType, const struct FString& WeaponID, class UCosmeticAssetBase* CosmeticAsset);
	bool CanUsePlayButton();
};


// Class ProjectX.ProjectXPlayerState
// 0x0630 (0x0960 - 0x0330)
class AProjectXPlayerState : public APlayerState
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0330(0x0020) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnPlayerStatsChanged;                                     // 0x0350(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnXPChanged;                                              // 0x0360(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnUltimateChargeChanged;                                  // 0x0370(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnTotalXPChanged;                                         // 0x0380(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnCurrencyGained;                                         // 0x0390(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPlayerScoreChanged;                                     // 0x03A0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPlayerLevelChanged;                                     // 0x03B0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnExpGained;                                              // 0x03C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPlayerClassChanged;                                     // 0x03D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnReviveTimerReceived;                                    // 0x03E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPlayerStateNextRespawnTimeChanged;                      // 0x03F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPlayerChangedTeam;                                      // 0x0400(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSpawnPointChanged;                                      // 0x0410(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnTeamChangeCoolDownStart;                                // 0x0420(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnTeamChangeCoolDownFinish;                               // 0x0430(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnAvatarChangeDelegateEvent;                              // 0x0440(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnCurrencyUpdated;                                        // 0x0450(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnMessageReceieved;                                       // 0x0460(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSquadLeaderChanged;                                     // 0x0470(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnQuickChatMessageReceived;                               // 0x0480(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnUltimateTriggered;                                      // 0x0490(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnUltimateUsed;                                           // 0x04A0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnCosmeticsUpdated;                                       // 0x04B0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPlayerKillEvent;                                        // 0x04C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnEquipsUpdated;                                          // 0x04D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnGameXPFromMultiplierReceived;                           // 0x04E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPlayerStateReadyEvent;                                  // 0x04F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPlayerProgressionRewardedEvent;                         // 0x0500(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	uint16_t                                           Kills;                                                    // 0x0510(0x0002) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	uint16_t                                           Deaths;                                                   // 0x0512(0x0002) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	uint16_t                                           Assists;                                                  // 0x0514(0x0002) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	uint16_t                                           Level;                                                    // 0x0516(0x0002) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	uint16_t                                           GameXP;                                                   // 0x0518(0x0002) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	uint16_t                                           UltimateCharge;                                           // 0x051A(0x0002) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      Team;                                                     // 0x051C(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bCanChangeTeam;                                           // 0x051D(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x2];                                       // 0x051E(0x0002) MISSED OFFSET
	class UClass* /*AProjectXCharacter*/               PreferredPlayerClass;                                     // 0x0520(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bSquadLeader;                                             // 0x0528(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0529(0x0003) MISSED OFFSET
	struct FSquadOrder                                 CurrentSquadOrder;                                        // 0x052C(0x000C) (CPF_Net, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              NextRespawnTime;                                          // 0x0538(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bReady;                                                   // 0x053C(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsAdmin;                                                 // 0x053D(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x2];                                       // 0x053E(0x0002) MISSED OFFSET
	TWeakObjectPtr<class APickupReviveBeacon>          ReviveBeacon;                                             // 0x0540(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*AProjectXCharacter*/               PawnPlayerClass;                                          // 0x0548(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AActor>                       SpawnTarget;                                              // 0x0550(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0558(0x0008) MISSED OFFSET
	struct FGeneralEquips                              GeneralEquips;                                            // 0x0560(0x0018) (CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              SpawnWorldTime;                                           // 0x0578(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x4];                                       // 0x057C(0x0004) MISSED OFFSET
	TMap<int, struct FAuthWeaponTicket>                AuthenticatedTicketMap;                                   // 0x0580(0x0050) (CPF_Protected, CPF_NativeAccessSpecifierProtected)
	class UCosmeticExplosionAsset*                     KillExplosionAsset;                                       // 0x05D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData06[0x50];                                      // 0x05D8(0x0050) MISSED OFFSET
	class UTexture2D*                                  AvatarReference;                                          // 0x0628(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UGlobalAmmoComponent*                        GlobalAmmoComponent;                                      // 0x0630(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              TeamSwitchCoolDownDuration;                               // 0x0638(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                MaxUltimateCharge;                                        // 0x063C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              HealBonusBufferCheckTime;                                 // 0x0640(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              HealBonusThreshold;                                       // 0x0644(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RepairBonusBufferCheckTime;                               // 0x0648(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RepairBonusThreshold;                                     // 0x064C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData07[0x310];                                     // 0x0650(0x0310) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXPlayerState"));
		return ptr;
	}


	void UpdatePlayerPerkUsage(class APawn* InPawn);
	void UpdatePassiveUltimateCharge();
	void UpdateKillExplosion(class UCosmeticExplosionAsset* CosmeticAsset);
	void UltimateStarted(class UWeaponInstance* Weapon);
	void UltimateFinished();
	static void SortPlayerStates(TArray<class AProjectXPlayerState*> InPlayerStateList, TArray<class AProjectXPlayerState*>* OutPlayerStateList);
	int SetTeam(int NewTeam);
	void SetPreferredPlayerClass(class UClass* /*AProjectXCharacter*/ NewPlayerClass);
	void SetNextRespawnTime(float NewRespawnTime);
	void Server_UpdateStat(EStatNames StatToUpdate, int Value, class UObject* InObject, EStatUpdateBehaviour StatUpdateBehaviour, int InDebugMapType, const struct FString& InDebugMapName);
	void Server_SendQuickChat(const struct FQuickChatInfo& QuickChatData);
	void Server_SendNakamaUserId(const struct FString& InNakamaUserId);
	void Server_SendMessage(const struct FString& Message, class AProjectXPlayerState* To, EMessageType MessageType);
	void Server_Reliable_UpdateSessionLockedCosmetics(uint16_t CosmeticIDNumber);
	void Server_Reliable_ToggleReviveBeacon(bool bActive);
	void Server_Reliable_PlayTaunt(unsigned char TauntID);
	void Server_Reliable_EquipItem(ECosmeticType Type, uint16_t ShortCodeIndex, uint16_t EquipCodeIndex);
	void Server_ProcessProjectileHit(unsigned char ShotID, int ProjectileID, const struct FHitResult& HitResult, class UClass* /*UWeaponInstanceRanged*/ Weapon, TArray<struct FVector_NetQuantize> FlightPath, class UTelekenesisComponent* TelekenesisComponent, const struct FRotator& CustomRotation);
	void Server_ProcessExplosiveProjectileHit(int ProjectileID, const struct FHitResult& HitResult, class UClass* /*UWeaponInstanceRanged*/ Weapon, TArray<struct FVector_NetQuantize> FlightPath, TArray<class AActor*> RadialDamagedActors);
	void Server_PickupItem(int PickupID, class AActor* OverlappedActor);
	void SendQuickChat(class AProjectXPlayerState* To, const struct FString& Message, EMessageType MessageType, class AActor* SquadOrderActor);
	void SendMessage(const struct FString& Message, class AProjectXPlayerState* To, EMessageType MessageType);
	void PlayTaunt(unsigned char TauntID);
	void PlayAnnouncerSpawnSound();
	void OnStatsLoaded();
	void OnRep_UltimateCharge();
	void OnRep_Team();
	void OnRep_SquadLeader();
	void OnRep_Ready();
	void OnRep_PlayerClass();
	void OnRep_NextRespawnTime();
	void OnRep_Level(uint16_t PreviousLevel);
	void OnRep_Kills(uint16_t LastKills);
	void OnRep_GameXP(uint16_t LastXP);
	void OnRep_Deaths(uint16_t LastDeaths);
	void OnRep_CanSwitchTeams();
	void OnRep_Assists(uint16_t LastAssists);
	void OnPlayerStateRemovedFromGameState(class APlayerState* RemovedPlayerState);
	void OnItemEquipped(ECosmeticType Type, const struct FString& ShortCode, const struct FString& EquipCode);
	void OnEquipsLoaded(bool bSuccess);
	void MutePlayerText(class APlayerState* Player, bool bToggle);
	void Multicast_Unreliable_PlayTaunt(unsigned char TauntID);
	void MultiCast_SpawnContextObject(const struct FVector_NetQuantize& SpawnLocation, class AProjectXPlayerState* SendingPlayerState);
	void Multicast_Reliable_EquipCosmeticItem(ECosmeticType Type, uint16_t ShortCodeIndex, uint16_t EquipCodeIndex);
	void MultiCast_PickupSpawned(const struct FWorldPickupInfo& PickUpInfo);
	void MultiCast_DestroyPickup(int PickupID);
	void ModifyXP(EXPEventType Type, class APlayerState* TargetState, class UObject* Object, float Alpha, class UClass* /*UExperienceEvent*/ ExpereienceEventOverride);
	void ModifyUltimateCharge(int Delta);
	void ModifyTeamKills(int Delta);
	void ModifyLevel(int Delta);
	void ModifyKills(class AProjectXPlayerState* Killed, class UClass* /*UProjectXDamageType*/ DamageType);
	void ModifyDeployablesDestructed(class ADeployable* DeployableDestructed, class UClass* /*UProjectXDamageType*/ DamageType);
	void ModifyDeaths(int Delta, class AProjectXPlayerState* KillerState);
	void ModifyAssists(int Delta, class APlayerState* PlayerState, float MaxHealth, float Damage);
	void LoadGeneralCosmetics(ECosmeticType Type, const struct FEquips& LoadingEquips, const struct FString& EquipCode);
	bool IsUltimateCharged();
	bool IsTeamChangeOnCoolDown();
	bool IsSquadLeader();
	bool IsReady();
	bool IsMatchBonusAvailable();
	bool IsLocalPlayerState();
	bool HasSpawnTarget();
	bool HasLoadedCosmetics();
	struct FString GetXPString();
	float GetXP();
	int GetUnpackedPing();
	struct FString GetUltimateChargeString();
	int GetUltimateCharge();
	float GetTimeUntilRespawn();
	static float GetTimeFromUsage(const struct FPlayerClassUsage& ClassUsage);
	float GetTeamSwitchingCoolDownRemaining();
	struct FString GetTeamKillsString();
	int GetTeamKills();
	class UAnimMontage* GetTaunt(unsigned char TauntNumber);
	TScriptInterface<class USpawnTargetInterface> GetSpawnTarget();
	static int GetSpawnCountFromUsage(const struct FPlayerClassUsage& ClassUsage);
	class APickupReviveBeacon* GetReviveBeacon();
	class UClass* /*AProjectXCharacter*/ GetPreferredPlayerClass();
	static class AProjectXPlayerState* GetPlayerStateByPlayerID(class UObject* WorldContextObject, int ID);
	static class APlayerState* GetPlayerStateByName(class UObject* WorldContextObject, const struct FString& Name);
	static class AProjectXPlayerState* GetPlayerStateByNakamaPlayerID(class UObject* WorldContextObject, const struct FString& ID);
	static class AProjectXPlayerState* GetPlayerStateByID(class UObject* WorldContextObject, const struct FString& ID);
	struct FPlayerProgressionUpdates GetPlayerProgression();
	struct FString GetPlayerID();
	struct FEquips GetPlayerEquips();
	struct FString GetPingString();
	float GetNextRespawnTime();
	struct FPlayerClassUsage GetMostUsedClass();
	int GetMaxUltimateCharge();
	struct FString GetLevelString();
	int GetLevel();
	struct FString GetKillsString();
	int GetKills();
	bool GetKillExplosion(TSoftObjectPtr<class UParticleSystem>* Particle, TSoftObjectPtr<class USoundCue>* Sound);
	bool GetIsSpawningOnReviveBeacon();
	class UGlobalAmmoComponent* GetGlobalAmmoComponent();
	float GetGameXPFromMultiplier();
	float GetExpMulitplier();
	struct FString GetEliminationsString();
	int GetEliminations();
	struct FString GetDeathsString();
	int GetDeaths();
	struct FSquadOrder GetCurrentSquadOrder();
	struct FPlayerClassUsage GetClassUsageByClass(class UClass* /*AProjectXCharacter*/ PlayerClass);
	static class UClass* /*AProjectXCharacter*/ GetClassFromUsage(const struct FPlayerClassUsage& ClassUsage);
	class UTexture2D* GetAvatarImage();
	struct FString GetAssistsString();
	int GetAssists();
	void DoRepairBonusXPBufferCheck();
	void DoHealBonusXPBufferCheck();
	void DestroyInvalidDeployables(bool bForce);
	void Client_UnlockAchievement(EAchievementData AchievementToUnlock);
	void Client_SendQuickChat(const struct FQuickChatInfo& QuickChatData);
	void Client_SendMessage(const struct FString& Message, class AProjectXPlayerState* To, EMessageType MessageType);
	void Client_RequestSpawnTarget();
	void Client_Reliable_UpdateExperienceGains(const struct FPlayerProgressionUpdates& NewExperienceGains);
	void Client_Reliable_SendGameXPFromMultiplier(uint16_t BonusEXP);
	void Client_QueryAchievements();
	void Client_PlayAnnouncer(const struct FString& VoiceToPlay);
	bool CanRestartPlayer();
	void BroadcastReviveTimeReceived(float ReviveStartTime);
};


// Class ProjectX.ProjectXPlayerStateHorde
// 0x0000 (0x0960 - 0x0960)
class AProjectXPlayerStateHorde : public AProjectXPlayerState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXPlayerStateHorde"));
		return ptr;
	}


	void Server_Reliable_UpdateHordeModeDifficulty(EDifficultyLevel NewDifficultyLevel);
	void Server_Reliable_RequestMatchStateUpdate();
	void RequestMatchStateUpdateDelayed();
	void RequestMatchStateUpdate();
	void Client_DisplayKillCounter();
};


// Class ProjectX.ProjectXPlayerStateMainMenu
// 0x0000 (0x0320 - 0x0320)
class AProjectXPlayerStateMainMenu : public ASteamBeaconPlayerState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXPlayerStateMainMenu"));
		return ptr;
	}

};


// Class ProjectX.ProjectXPracticeRangeGameMode
// 0x0000 (0x0528 - 0x0528)
class AProjectXPracticeRangeGameMode : public AProjectXGameModeBaseControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXPracticeRangeGameMode"));
		return ptr;
	}

};


// Class ProjectX.ProjectXQuickChatDataAsset
// 0x0010 (0x0040 - 0x0030)
class UProjectXQuickChatDataAsset : public UDataAsset
{
public:
	TArray<struct FQuickChatData>                      QuickChatDataArray;                                       // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXQuickChatDataAsset"));
		return ptr;
	}

};


// Class ProjectX.ProjectXRecordingPawn
// 0x0020 (0x02B0 - 0x0290)
class AProjectXRecordingPawn : public APawn
{
public:
	class UCameraComponent*                            PawnCameraComponent;                                      // 0x0290(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class USpringArmComponent*                         CameraBoom;                                               // 0x0298(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class AProjectXCharacter*                          OriginalActor;                                            // 0x02A0(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class AProjectXCharacter*                          ViewingActor;                                             // 0x02A8(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXRecordingPawn"));
		return ptr;
	}


	void OnViewingActorDeath(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState);
};


// Class ProjectX.ProjectXSaveGame
// 0x00E8 (0x0110 - 0x0028)
class UProjectXSaveGame : public USaveGame
{
public:
	bool                                               bCameraAnimations;                                        // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bVisualHitmarkersEnabled;                                 // 0x0029(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bInputLookInversion;                                      // 0x002A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x002B(0x0001) MISSED OFFSET
	float                                              InputHorizontalScale;                                     // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InputVerticalScale;                                       // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InputADSHorizontalScale;                                  // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InputADSVerticalScale;                                    // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ADSSensitivityMultiplier;                                 // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Gamma;                                                    // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DLSS;                                                     // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FOV;                                                      // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bMotionBlurEnabled;                                       // 0x004C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHoldForVehicleSpawn;                                     // 0x004D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableMouseSmoothing;                                    // 0x004E(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableFOVScaling;                                        // 0x004F(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableBloom;                                             // 0x0050(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableCameraMotionEffects;                               // 0x0051(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	float                                              MasterVolume;                                             // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MusicVolume;                                              // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              VOIPVolume;                                               // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              EffectsVolume;                                            // 0x0060(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AmbientVolume;                                            // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InterfaceVolume;                                          // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AnnouncerVolume;                                          // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHideEmptyServer;                                         // 0x0070(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHideCustomServer;                                        // 0x0071(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHideFullServer;                                          // 0x0072(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHideOfficialServer;                                      // 0x0073(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHideVersionMismatch;                                     // 0x0074(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHideModServer;                                           // 0x0075(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHidePasswordProtectedServer;                             // 0x0076(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0077(0x0001) MISSED OFFSET
	struct FString                                     RegionFilter;                                             // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      SortParameter;                                            // 0x0088(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDescendingSort;                                          // 0x0089(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bSpawnInPV;                                               // 0x008A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDamageTextEnabled;                                       // 0x008B(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               SavedInputVersion;                                        // 0x008C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsFirstRun;                                              // 0x008D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIncomingDamageIndicatorIs3D;                             // 0x008E(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPVCameraSmoothing;                                       // 0x008F(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPushToTalkEnabled;                                       // 0x0090(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bMaturityFilter;                                          // 0x0091(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bSubtitlesEnabled;                                        // 0x0092(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x5];                                       // 0x0093(0x0005) MISSED OFFSET
	TArray<struct FString>                             MutelistText;                                             // 0x0098(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             UninspectedNewItemsShortCodes;                            // 0x00A8(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int                                                CultureIndex;                                             // 0x00B8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	TMap<struct FString, struct FString>               SteamToNakamaIDs;                                         // 0x00C0(0x0050) (CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXSaveGame"));
		return ptr;
	}

};


// Class ProjectX.ProjectXSpawnTarget
// 0x0008 (0x0238 - 0x0230)
class AProjectXSpawnTarget : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0230(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXSpawnTarget"));
		return ptr;
	}

};


// Class ProjectX.ProjectXSpectatorPawn
// 0x0018 (0x02D0 - 0x02B8)
class AProjectXSpectatorPawn : public ASpectatorPawn
{
public:
	class UCameraComponent*                            PawnCameraComponent;                                      // 0x02B8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class USpringArmComponent*                         CameraBoom;                                               // 0x02C0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXSpectatorPawn"));
		return ptr;
	}


	void OnFollowTargetDied(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState);
};


// Class ProjectX.ProjectXTransportObjective
// 0x0038 (0x0390 - 0x0358)
class AProjectXTransportObjective : public AProjectXSpawnerObjective
{
public:
	int                                                NumberOfItemsToTransport;                                 // 0x0358(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	TArray<class ATransportObjectiveSpawnPoint*>       PickupLocations;                                          // 0x0360(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class ATransportObjectiveSpawnPoint*>       DropOffLocations;                                         // 0x0370(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UAfflictionInstance*/              CarrierAffliction;                                        // 0x0380(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXTransportObjective"));
		return ptr;
	}


	void OnFlagUpdated(class AFlag* Flag, bool NewFlag);
	void FlagPickedUp(class AFlag* Flag, class AProjectXCharacter* PickingUpActor, int Team);
	void FlagDropped(class AFlag* Flag, class AProjectXCharacter* DroppedCharacter, int Team);
	void FlagCaptured(class AFlag* Flag, class AProjectXCharacter* PickingUpActor, int Team);
};


// Class ProjectX.ProjectXTutorialTarget
// 0x0080 (0x02B0 - 0x0230)
class AProjectXTutorialTarget : public AActor
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0230(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXTutorialTarget"));
		return ptr;
	}


	void TargetDeath(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState);
};


// Class ProjectX.ProjectXTutorialTextDataAsset
// 0x0010 (0x0040 - 0x0030)
class UProjectXTutorialTextDataAsset : public UDataAsset
{
public:
	struct FTutorialTextData                           TutorialData;                                             // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXTutorialTextDataAsset"));
		return ptr;
	}

};


// Class ProjectX.ProjectXVehicle
// 0x0590 (0x0AF0 - 0x0560)
class AProjectXVehicle : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0560(0x0118) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnDriverChanged;                                          // 0x0678(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnBoostingChanged;                                        // 0x0688(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPassengerChanged;                                       // 0x0698(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnLand;                                                   // 0x06A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnLockOnTentativeStart;                                   // 0x06B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnLockOnTentativeEnd;                                     // 0x06C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnLockOnStart;                                            // 0x06D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnLockOnEnd;                                              // 0x06E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnImminentMissileWarningStart;                            // 0x06F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnImminentMissileWarningEnd;                              // 0x0708(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnIncomingProjectileStart;                                // 0x0718(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnIncomingProjectileEnd;                                  // 0x0728(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnVehicleDied;                                            // 0x0738(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnVehicleBoostChanged;                                    // 0x0748(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnVehicleStartedBoosting;                                 // 0x0758(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnVehicleStoppedBoosting;                                 // 0x0768(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FText                                       VehicleName;                                              // 0x0778(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<struct FName>                               FiringSockets;                                            // 0x0790(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	bool                                               bAlignCameraOnVehicleEnter;                               // 0x07A0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x7];                                       // 0x07A1(0x0007) MISSED OFFSET
	class UClass* /*AKillCameraActor*/                 KillCamActorClass;                                        // 0x07A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              KillCameraDistance;                                       // 0x07B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector2D                                   MaxTerrainConformAngle;                                   // 0x07B4(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bCollisionDamagesVehicle;                                 // 0x07BC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07BD(0x0003) MISSED OFFSET
	class UClass* /*UDamageType*/                      VehicleCollisionDamageTakenType;                          // 0x07C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              VehicleDamageOnCollisionAmount;                           // 0x07C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MinSpeedRequiredForTakingDamage;                          // 0x07CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CollisionAngleDamageMultiplier;                           // 0x07D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bCollisionDamagesOthers;                                  // 0x07D4(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x3];                                       // 0x07D5(0x0003) MISSED OFFSET
	class UClass* /*UDamageType*/                      VehicleCollisionDamageInflictedType;                      // 0x07D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CharactersDamageOnCollisionAmount;                        // 0x07E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MinSpeedRequiredForApplyingDamage;                        // 0x07E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bCollisionPushesCharacters;                               // 0x07E8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x3];                                       // 0x07E9(0x0003) MISSED OFFSET
	float                                              CharactersImpulseOnCollisionAmount;                       // 0x07EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CharactersImpulseOnCollisionMaxAmount;                    // 0x07F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CharactersImpulseOnCollisionVerticalOffset;               // 0x07F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ConstantForwardAmount;                                    // 0x07F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              BoostMultiplier;                                          // 0x07FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              VerticalSensitivity;                                      // 0x0800(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              HorizontalSensitivity;                                    // 0x0804(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ForwardSpeedMultiplier;                                   // 0x0808(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SidewaysSpeedMultiplier;                                  // 0x080C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ThrottleUpMultiplier;                                     // 0x0810(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ThrottleDownMultiplier;                                   // 0x0814(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bAllowCosmeticTilts;                                      // 0x0818(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0819(0x0003) MISSED OFFSET
	float                                              MaxHoverTilt;                                             // 0x081C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxHoverPitch;                                            // 0x0820(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bHasGravityInFlyingMode;                                  // 0x0824(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0825(0x0003) MISSED OFFSET
	float                                              TerrainConformSpeed;                                      // 0x0828(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              FallingForwardTilt;                                       // 0x082C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               IgnoreTerrainPitch;                                       // 0x0830(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0831(0x0003) MISSED OFFSET
	float                                              VehicleMeshSmoothingSpeed;                                // 0x0834(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              TerrainConformSpeedFalling;                               // 0x0838(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              HoverAdjustmentSpeed;                                     // 0x083C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxFloorAngleToAlignInput;                                // 0x0840(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bMoveVehicleRelative;                                     // 0x0844(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bRotateMeshToVelocityDirection;                           // 0x0845(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0846(0x0002) MISSED OFFSET
	float                                              RotateMeshToStrafeDirectionSpeed;                         // 0x0848(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData09[0x4];                                       // 0x084C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 BoostDrainCurve;                                          // 0x0850(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bCanRespawn;                                              // 0x0858(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bVehicleCanBeUsedForSpawn;                                // 0x0859(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bPlayerCanSpawnInside;                                    // 0x085A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bPlayerCanSpawnNearby;                                    // 0x085B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RespawnTime;                                              // 0x085C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              PostLifeDuration;                                         // 0x0860(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DeathImpulseForce;                                        // 0x0864(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bRetainLastKnownZeroingWhenNoHit;                         // 0x0868(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0869(0x0003) MISSED OFFSET
	float                                              AimMinDistanceForZeroing;                                 // 0x086C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              AimDefaultZeroing;                                        // 0x0870(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxAimAngleDeviation;                                     // 0x0874(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UTexture2D>                   VehicleSeatsHUDIcon;                                      // 0x0878(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UTexture2D>                   VehicleMapIcon;                                           // 0x08A0(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UTexture2D>                   VehicleHudIcon;                                           // 0x08C8(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UTexture2D>                   VehicleRadarIcon;                                         // 0x08F0(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              VehicleDownBobSpeed;                                      // 0x0918(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              VehicleUpBobSpeed;                                        // 0x091C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              VehicleBobDistance;                                       // 0x0920(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDisplayOnly;                                             // 0x0924(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0925(0x0003) MISSED OFFSET
	int                                                CachedTeam;                                               // 0x0928(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bVehicleCanBoost;                                         // 0x092C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData12[0x3];                                       // 0x092D(0x0003) MISSED OFFSET
	float                                              MinimumVehicleExplosionDamage;                            // 0x0930(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              BaseVehicleExplosionDamage;                               // 0x0934(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ExplosionInnerRadius;                                     // 0x0938(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ExplosionOuterRadius;                                     // 0x093C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ExplosionDamageFallOff;                                   // 0x0940(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bCanBeInteractedWith;                                     // 0x0944(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0945(0x0003) MISSED OFFSET
	float                                              DriverVelocityTransferRate;                               // 0x0948(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ExitTime;                                                 // 0x094C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DamageTransferMultiplier;                                 // 0x0950(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxLockOnRange;                                           // 0x0954(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector2D                                   LockOnScreenPercentage;                                   // 0x0958(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class USceneComponent*                             MeshPivotPoint;                                           // 0x0960(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCameraComponent*                            Camera;                                                   // 0x0968(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class USpringArmComponent*                         SpringArm;                                                // 0x0970(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UDamageHistoryComponent*                     DamageHistoryComponent;                                   // 0x0978(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UVehicleSeatComponent*                       DriverSeat;                                               // 0x0980(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UInteractableComponent*                      InteractableComponent;                                    // 0x0988(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAfflictionComponent*                        AfflictionComponent;                                      // 0x0990(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Health;                                                   // 0x0998(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxHealth;                                                // 0x099C(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bArmored;                                                 // 0x09A0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData14[0x3];                                       // 0x09A1(0x0003) MISSED OFFSET
	struct FVector                                     CameraLocation;                                           // 0x09A4(0x000C) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AProjectXCharacter>           Driver;                                                   // 0x09B0(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UWeaponComponent*                            VehicleWeaponComponent;                                   // 0x09B8(0x0008) (CPF_ExportObject, CPF_Net, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              LastDamageTime;                                           // 0x09C0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsBoosting;                                              // 0x09C4(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData15[0x3];                                       // 0x09C5(0x0003) MISSED OFFSET
	float                                              Boost;                                                    // 0x09C8(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      PackedAcceleration;                                       // 0x09CC(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData16[0x3];                                       // 0x09CD(0x0003) MISSED OFFSET
	float                                              MaxBoost;                                                 // 0x09D0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              BoostRegenRate;                                           // 0x09D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              BoostDrainRate;                                           // 0x09D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData17[0x4];                                       // 0x09DC(0x0004) MISSED OFFSET
	struct FString                                     VehicleID;                                                // 0x09E0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bVisible;                                                 // 0x09F0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData18[0x3];                                       // 0x09F1(0x0003) MISSED OFFSET
	float                                              UnoccupiedLifeDuration;                                   // 0x09F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SelfDestructionMinDistance;                               // 0x09F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MinimumDriverDurationTime;                                // 0x09FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UCameraModifier*/                  BoostCameraModifierClass;                                 // 0x0A00(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              BoostFOVModifier;                                         // 0x0A08(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              BoostAlphaBlend;                                          // 0x0A0C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              BoostDepthOfFieldFStop;                                   // 0x0A10(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              BoostDepthOfFieldFocalDistance;                           // 0x0A14(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bInitializeVehicleHealth;                                 // 0x0A18(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData19[0x7];                                       // 0x0A19(0x0007) MISSED OFFSET
	class UClass* /*UWeaponInstance*/                  VehicleExplosionWeaponInstanceClass;                      // 0x0A20(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UDamageType*/                      VehicleExplosionDamageTypeClass;                          // 0x0A28(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData20[0xC0];                                      // 0x0A30(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXVehicle"));
		return ptr;
	}


	void UpdateCanInteractWith(bool bCanInteract);
	void SetDisplayDriver(class AProjectXCharacter* CosmeticDriver);
	void SetAsDisplayOnly();
	void Server_Unreliable_SendYawValue(uint16_t NewPawnPitchValue);
	void Server_Unreliable_SendPitchValue(uint16_t NewPawnPitchValue);
	void Server_Unreliable_SendCameraLocation(const struct FVector_NetQuantize10& CameraPosition);
	void Server_ToggleBoost(bool bToggle);
	void Server_ProcessHit(const struct FHitResult& Hit);
	void PlayWeaponFireEffects(class UWeaponInstanceVehicle* Weapon);
	void OnVehicleHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnVehicleEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnVehicleBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnSelected(class APlayerController* Sender, class UPrimitiveComponent* Component);
	void OnRep_WeaponComponent();
	void OnRep_IsBoosting();
	void OnRep_Health(float PreviousHealth);
	void OnRep_Driver();
	void OnRep_Boost();
	void OnMoveUp();
	void OnHighlighted(class APlayerController* Sender, class UPrimitiveComponent* Component);
	void OnDeathEvent();
	void Multicast_Unreliable_SendYawValue(uint16_t NewPawnYawValue);
	void Multicast_Unreliable_SendPitchValue(uint16_t NewPawnYawValue);
	void Multicast_Unreliable_CameraPosition(const struct FVector_NetQuantize10& CameraPosition);
	bool LeaveVehicle(class AProjectXCharacter* Character, bool bForceLeave, bool bEject);
	void K2_VehicleSetAsDisplay();
	TArray<class UVehicleSeatComponent*> K2_GetSeats();
	bool IsVisible();
	bool IsVehicleInHierarchy(class AProjectXVehicle* Vehicle);
	bool IsOccupant(class AProjectXCharacter* Character);
	bool IsMovingForward();
	bool IsMovingBackwards();
	bool IsMoving();
	bool IsInteractionDisabled();
	bool IsHoverVehicle();
	bool IsBoosting();
	bool IsAPersonalVehicle();
	bool IsAccelerating(EAccelerationDirection Direction);
	bool HasOwnerVehicle();
	bool HasAvailableSeat();
	bool HasAnyOccupants();
	struct FRotator GetWeaponInterpolatedRotation(float DeltaTime, const struct FRotator& CurrentRotation, const struct FRotator& TargetRotation, class UVehicleSeatComponent* Seat);
	class UWeaponComponent* GetVehicleWeaponComponent();
	struct FVector GetVehicleRelativeAcceleration();
	struct FText GetVehicleName();
	static struct FString GetVehicleIDStatic(class UClass* /*AProjectXVehicle*/ VehicleClass);
	struct FString GetVehicleID();
	TSoftObjectPtr<class UTexture2D> GetSeatsHUDIcon();
	class UVehicleSeatComponent* GetSeatByOccupant(class AProjectXCharacter* Character);
	bool GetProjectileTransform(class UVehicleSeatComponent* Seat, bool CosmeticOnly, struct FTransform* Transform, struct FName* SocketName);
	bool GetPlayerCanSpawnNearby();
	bool GetPlayerCanSpawnInside();
	class AProjectXVehicle* GetOwnerVehicle();
	TArray<class AProjectXCharacter*> GetOccupants();
	float GetMaxBoost();
	struct FVector GetKillCamWidgetPlacementPivot();
	bool GetIsDisplayOnly();
	float GetExitTime();
	class UVehicleSeatComponent* GetDriverSeat();
	class AProjectXCharacter* GetDriver();
	float GetCurrentBoost();
	class UVehicleSeatComponent* GetClosestEntryLocation(class AProjectXCharacter* Character, struct FVector* Location);
	struct FRotator GetClampedAimRotationToVehicleForward(const struct FRotator& ForwardRotation, const struct FVector& ForwardLocation);
	float GetBoostRegenRate();
	float GetBoostMultiplier();
	class UVehicleSeatComponent* GetBestAvailableSeat(class AProjectXCharacter* Character);
	struct FVector GetAimTargetPoint();
	struct FVector GetAimStartPoint();
	bool FindExitDestination(class AProjectXCharacter* Character, struct FTransform* Transform);
	void ExitPersonalVehicle();
	bool EnterVehicle(class AProjectXCharacter* Character, class UVehicleSeatComponent* PreferredSeat);
	void DriverChangedEvent(class AProjectXCharacter* PreviousDriver, class AProjectXCharacter* NewDriver);
	bool DoesVehicleMoveRelativeToSelf();
	void Client_StopJumping();
	bool CanExitVehicle();
	bool CanEnterVehicle(class AProjectXCharacter* Character);
	bool AttemptToBecomeDriver(class AProjectXCharacter* Character);
	void AddComponentForCollisionComputations(class UPrimitiveComponent* PrimitiveComponent);
};


// Class ProjectX.PXGameModeBaseControlTesting
// 0x0000 (0x0528 - 0x0528)
class APXGameModeBaseControlTesting : public AProjectXGameModeBaseControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.PXGameModeBaseControlTesting"));
		return ptr;
	}

};


// Class ProjectX.PXPlayerStateBaseControlTesting
// 0x0000 (0x0960 - 0x0960)
class APXPlayerStateBaseControlTesting : public AProjectXPlayerState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.PXPlayerStateBaseControlTesting"));
		return ptr;
	}

};


// Class ProjectX.PXProjectileMovementComponent
// 0x00F8 (0x0200 - 0x0108)
class UPXProjectileMovementComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
	float                                              Speed;                                                    // 0x0110(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxSpeed;                                                 // 0x0114(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDebug;                                                   // 0x0118(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	float                                              GravityScale;                                             // 0x011C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ProjectileExtent;                                         // 0x0120(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	class USoundBase*                                  BulletWhipSound;                                          // 0x0128(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              BulletWhipSoundDistance;                                  // 0x0130(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bHasPlayedBulletWhip;                                     // 0x0134(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bUseExtentTrace;                                          // 0x0135(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bCanBounce;                                               // 0x0136(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bStopOnDamageableHit;                                     // 0x0137(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              BounceSpeedMultiplier;                                    // 0x0138(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsHomingProjectile;                                      // 0x013C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	float                                              HomingAccelerationMagnitude;                              // 0x0140(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxHomingDotDeviation;                                    // 0x0144(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x24];                                      // 0x0148(0x0024) MISSED OFFSET
	bool                                               bIsLocallyControlled;                                     // 0x016C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	EQualityMode                                       QualityMode;                                              // 0x016D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x2];                                       // 0x016E(0x0002) MISSED OFFSET
	class UClass* /*UWeaponInstanceRanged*/            OwningWeapon;                                             // 0x0170(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData06[0x88];                                      // 0x0178(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.PXProjectileMovementComponent"));
		return ptr;
	}


	bool UseExtentTrace();
	void SetMaxSpeed(float InMaxSpeed);
	void SetHomingTarget(class USceneComponent* Target);
	void SetAimTarget(class USceneComponent* Target, float Falloff);
	bool IsHomingProjectile();
	bool IsDebug();
	float GetSpeed();
	EQualityMode GetQualityMode();
	float CanBounce();
};


// Class ProjectX.QuickChatButtonWidget
// 0x0050 (0x02C0 - 0x0270)
class UQuickChatButtonWidget : public UBasicUserWidget
{
public:
	struct FQuickChatData                              QuickChatData;                                            // 0x0270(0x0040) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	class UTextBlock*                                  RequestTextBlock;                                         // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class AActor*                                      SquadOrderActor;                                          // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.QuickChatButtonWidget"));
		return ptr;
	}


	bool ShouldSetVisible();
	void SetButtonColorAndOpacity(const struct FLinearColor& NewColor);
	void SendButtonMessage();
	void InitQuickChatButton(const struct FQuickChatData& InQuickChatData, class AActor* InSquadOrderActor);
};


// Class ProjectX.QuickChatWidget
// 0x0028 (0x0310 - 0x02E8)
class UQuickChatWidget : public UAdvancedUserWidget
{
public:
	class UProjectXQuickChatDataAsset*                 SocialQuickChatData;                                      // 0x02E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UProjectXQuickChatDataAsset*                 OnFootRequestData;                                        // 0x02F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UProjectXQuickChatDataAsset*                 InVehicleRequestData;                                     // 0x02F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UProjectXQuickChatDataAsset*                 SquadLeaderOrders;                                        // 0x0300(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UProjectXQuickChatDataAsset*                 TauntOptions;                                             // 0x0308(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.QuickChatWidget"));
		return ptr;
	}


	void ShowAllWidgetOptions();
	void HideAllWidgetOptions();
	void CloseWidget();
};


// Class ProjectX.RadarIconWidget
// 0x00A8 (0x0308 - 0x0260)
class URadarIconWidget : public UUserWidget
{
public:
	class UImage*                                      Blip;                                                     // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UImage*                                      UpArrow;                                                  // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UImage*                                      DownArrow;                                                // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTextBlock*                                  Label;                                                    // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       TrackedActor;                                             // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TWeakObjectPtr<class URadarWidget>                 Radar;                                                    // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsTrackedActorDead;                                      // 0x0290(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0291(0x0003) MISSED OFFSET
	float                                              ZDistance;                                                // 0x0294(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                SelfColour;                                               // 0x0298(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x60];                                      // 0x02A8(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.RadarIconWidget"));
		return ptr;
	}


	void UpdateVisibility();
	void UpdateIconBasedOnTeam();
	void UpdateIconBasedOnSquad();
	void RemoveIcon();
	void OnActorStopTracking(class AActor* Actor);
	void Init();
	class AActor* GetReferenceActor();
	void EvaluateVisibilityAsSelfOrEnemy(class AProjectXCharacter* TrackedCharacter);
};


// Class ProjectX.RadarWidget
// 0x0020 (0x0280 - 0x0260)
class URadarWidget : public UUserWidget
{
public:
	class UCanvasPanel*                                RadarCanvas;                                              // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCanvasPanel*                                RadarIconContainer;                                       // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UImage*                                      img_Background;                                           // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RadarRadius;                                              // 0x0278(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x027C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.RadarWidget"));
		return ptr;
	}


	void RemoveTrackedActor(class AActor* Actor);
	struct FVector2D GetRadarSize();
	float GetRadarRadius();
};


// Class ProjectX.ReactsToActorPruner
// 0x0000 (0x0028 - 0x0028)
class UReactsToActorPruner : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ReactsToActorPruner"));
		return ptr;
	}


	void OnActorEnabled();
	void OnActorDisabled();
	void ActorEnabled();
	void ActorDisabled();
};


// Class ProjectX.ReactsToGameplayVolumes
// 0x0000 (0x0028 - 0x0028)
class UReactsToGameplayVolumes : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ReactsToGameplayVolumes"));
		return ptr;
	}


	bool WasInside();
	void SetOutsideVolume();
	void SetInsideVolume();
	void OnOutside();
	void OnInside();
	bool IsInside();
	struct FMulticastScriptDelegate GetOnSoftBoundaryEnterEvent();
};


// Class ProjectX.ReactsToMatchEvents
// 0x0000 (0x0028 - 0x0028)
class UReactsToMatchEvents : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ReactsToMatchEvents"));
		return ptr;
	}


	void OnMatchStarted();
	void OnMatchEnded();
	void MatchStarted();
	void MatchEnded();
};


// Class ProjectX.ReactsToObjectiveInterface
// 0x0000 (0x0028 - 0x0028)
class UReactsToObjectiveInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ReactsToObjectiveInterface"));
		return ptr;
	}


	void OnObjectiveStateUpdated(class AProjectXSpawnerObjective* ObjectiveManager, const struct FObjectiveStatus& State);
	void OnIntializeObjectiveOwnedObject(class AProjectXSpawnerObjective* ObjectiveManager);
	void ObjectiveStateUpdated(class AProjectXSpawnerObjective* ObjectiveController, const struct FObjectiveStatus& State);
	void IntializeObjectiveOwnedObject(class AProjectXSpawnerObjective* ObjectiveController);
};


// Class ProjectX.ReactsToWorldEvents
// 0x0000 (0x0028 - 0x0028)
class UReactsToWorldEvents : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ReactsToWorldEvents"));
		return ptr;
	}


	void OnWorldOriginShifted();
};


// Class ProjectX.RemoteConsole
// 0x0038 (0x0060 - 0x0028)
class URemoteConsole : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	uint32_t                                           WebServerPort;                                            // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     WebServerUsername;                                        // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FString                                     WebServerPass;                                            // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.RemoteConsole"));
		return ptr;
	}


	void Login(class UObject* ConnectionUObject);
	void GetServerInfo(class UObject* ConnectionUObject);
	void ExecuteAdminCommand(class UObject* ConnectionUObject);
};


// Class ProjectX.ReticleWidget
// 0x0000 (0x0278 - 0x0278)
class UReticleWidget : public UHUDBasicUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ReticleWidget"));
		return ptr;
	}


	void OnTightAimToggled(bool bToggle);
	void MenuToggled(class UAdvancedUserWidget* Widget, bool bToggle);
};


// Class ProjectX.RichTextKeyDecorator
// 0x0000 (0x0030 - 0x0030)
class URichTextKeyDecorator : public URichTextBlockImageDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.RichTextKeyDecorator"));
		return ptr;
	}

};


// Class ProjectX.SaveManager
// 0x00F0 (0x0210 - 0x0120)
class USaveManager : public UGameUserSettings
{
public:
	bool                                               bIncomingDamageIndicatorIs3D;                             // 0x0120(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDamageTextEnabled;                                       // 0x0121(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bMotionBlurEnabled;                                       // 0x0122(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bCameraAnimations;                                        // 0x0123(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bVisualHitmarkersEnabled;                                 // 0x0124(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bInputLookInversion;                                      // 0x0125(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0126(0x0002) MISSED OFFSET
	float                                              InputHorizontalScale;                                     // 0x0128(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              InputVerticalScale;                                       // 0x012C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              InputADSHorizontalScale;                                  // 0x0130(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              InputADSVerticalScale;                                    // 0x0134(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ADSSensitivityMultiplier;                                 // 0x0138(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              FOV;                                                      // 0x013C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Gamma;                                                    // 0x0140(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               Bloom;                                                    // 0x0144(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               CameraMotionEffects;                                      // 0x0145(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0146(0x0002) MISSED OFFSET
	float                                              DLSS;                                                     // 0x0148(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MasterVolume;                                             // 0x014C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MusicVolume;                                              // 0x0150(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              VOIPVolume;                                               // 0x0154(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              EffectsVolume;                                            // 0x0158(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              AmbientVolume;                                            // 0x015C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              InterfaceVolume;                                          // 0x0160(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              AnnouncerVolume;                                          // 0x0164(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bHideEmptyServer;                                         // 0x0168(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bHideCustomServer;                                        // 0x0169(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bHideFullServer;                                          // 0x016A(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bHideOfficialServer;                                      // 0x016B(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bHideVersionMismatch;                                     // 0x016C(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bHideAntiCheat;                                           // 0x016D(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bHideModServer;                                           // 0x016E(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bHidePasswordProtectedServer;                             // 0x016F(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bSpawnInPV;                                               // 0x0170(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0171(0x0007) MISSED OFFSET
	struct FString                                     RegionFilter;                                             // 0x0178(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      SortParameter;                                            // 0x0188(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDescendingSort;                                          // 0x0189(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bHoldForVehicleSpawn;                                     // 0x018A(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bPushToTalkEnabled;                                       // 0x018B(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                SavedInputVersion;                                        // 0x018C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsFirstRun;                                              // 0x0190(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0191(0x0003) MISSED OFFSET
	int                                                CultureIndex;                                             // 0x0194(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bMaturityFilter;                                          // 0x0198(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bSubtitlesEnabled;                                        // 0x0199(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bEnableMouseSmoothing;                                    // 0x019A(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bEnableFOVScaling;                                        // 0x019B(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bPVCameraSmoothing;                                       // 0x019C(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	TArray<struct FString>                             MutelistText;                                             // 0x01A0(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<struct FString>                             UninspectedNewItemsShortCodes;                            // 0x01B0(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<struct FString, struct FString>               SteamToNakamaIDs;                                         // 0x01C0(0x0050) (CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.SaveManager"));
		return ptr;
	}


	static bool ShouldIncrementSavedInputVersion();
	static void SetVOIPVolume(float Volume);
	static void SetVisualHitmarkersEnabled(bool bNewVisualHitmarkerstEnabled);
	static void SetUninspectedNewItemsShortCodes(TArray<struct FString> NewUninspectedNewItemsShortCodes);
	static void SetSubtitles(bool bInSubtitles);
	static void SetSpawnInPersonalVehicle(bool bNewSpawnInPV);
	static void SetSortParameter(ESortParameter SortParameter);
	static void SetSavedInputVersion(int NewSavedInputVersion);
	static void SetRegionFilter(const struct FString& RegionFilter);
	static void SetPVCameraSmoothing(bool bInPVCameraSmoothing);
	static void SetPushToTalk(bool bInPushToTalk);
	static void SetMuteListText(TArray<struct FString> MutelistText);
	static void SetMusicVolume(float Volume);
	static void SetMouseSmoothing(bool bInEnableMouseSmoothing);
	static void SetMotionBlurEnabled(bool bEnabled);
	static void SetMaturityFilter(bool bInMaturityFilter);
	static void SetMasterVolume(float Volume);
	static void SetIsFirstRun(bool bFirstRun);
	static void SetInterfaceVolume(float Volume);
	static void SetInputVerticalScale(float InputVerticalScale);
	static void SetInputLookInversion(bool bInputLookInversion);
	static void SetInputHorizontalScale(float InputHorizontalScale);
	static void SetInputADSVerticalScale(float InputADSVerticalScale);
	static void SetInputADSHorizontalScale(float InputADSHorizontalScale);
	static void SetIncomingDamageIndicatorIs3D(bool bNewIncomingDamageIndicatorIs3D);
	static void SetHoldToSpawnVehicle(bool bHoldToSpawnVehicle);
	static void SetHideVersionMismatch(bool bHideVersionMismatchServers);
	static void SetHidePasswordProtectedServer(bool bHidePasswordProtectedServer);
	static void SetHideOfficialServer(bool bHideOfficialServers);
	static void SetHideModServer(bool bHideModeServer);
	static void SetHideFullServer(bool bHideFullServers);
	static void SetHideEmptyServer(bool bHideEmptyServers);
	static void SetHideCustomServer(bool bHideCustomServers);
	static void SetHideAntiCheat(bool bHideAntiCheat);
	static void SetGamma(float Gamma);
	static void SetGameSettingsToDefaults();
	static void SetFOVScaling(bool bInEnableFOVScaling);
	static void SetFOV(float DesiredFOV);
	static void SetEffectsVolume(float Volume);
	static void SetDLSS(float DLSS);
	static void SetDescendingSort(bool bDescending);
	static void SetDamageTextEnabled(bool bNewDamageTextEnabled);
	static void SetCultureIndex(int CultureIndex);
	static void SetCameraMotionEffects(bool bInCameraMotionEffects);
	static void SetCameraAnimationToggleState(bool bToggle);
	static void SetBloom(bool bInEnableBloom);
	static void SetAnnouncerVolume(float Volume);
	static void SetAmbientVolume(float Volume);
	static void SetADSMultiplier(float ADSMultiplier);
	static void RemoveUninspectedNewItem(const struct FString& ItemShortCode, class UObject* WorldContextObject);
	static void ReadAllUninspectedNewItemsShortCodes();
	static bool IsItemUninspected(const struct FString& ItemShortCode);
	static bool IsFirstRun();
	static float GetVOIPVolume();
	static bool GetVisualHitmarkersEnabled();
	static void GetUninspectedNewItemsShortCodes(TArray<struct FString>* OutArray);
	static bool GetSubtitles();
	static TMap<struct FString, struct FString> GetSteamToNakamaIDMap();
	static bool GetSpawnInPersonalVehicle();
	static ESortParameter GetSortParameter();
	static int GetSavedInputVersion();
	static class UProjectXSaveGame* GetSaveData();
	static struct FString GetRegionFilter();
	static bool GetPVCameraSmoothing();
	static bool GetPushToTalk();
	static class USaveManager* GetProjectXGameUserSettings();
	static bool GetNakamaIDFromSteamID(const struct FString& SteamID, struct FString* FoundNakamaID);
	static void GetMuteListText(TArray<struct FString>* OutArray);
	static float GetMusicVolume();
	static bool GetMouseSmoothing();
	static bool GetMotionBlurEnabled();
	static struct FVector2D GetMinMaxInputScale();
	static struct FVector2D GetMinMaxGamma();
	static struct FVector2D GetMinMaxFOV();
	static bool GetMaturityFilter();
	static float GetMasterVolume();
	static float GetInterfaceVolume();
	static float GetInputVerticalScale();
	static bool GetInputLookInversion();
	static float GetInputHorizontalScale();
	static float GetInputADSVerticalScale();
	static float GetInputADSHorizontalScale();
	static bool GetIncomingDamageIndicatorIs3D();
	static bool GetHoldToSpawnVehicle();
	static bool GetHideVersionMismatch();
	static bool GetHidePasswordProtectedServer();
	static bool GetHideOfficialServer();
	static bool GetHideModeServer();
	static bool GetHideFullServer();
	static bool GetHideEmptyServer();
	static bool GetHideCustomServer();
	static bool GetHideAntiCheat();
	static float GetGamma();
	static bool GetFOVScaling();
	static float GetFOV();
	static float GetEffectsVolume();
	static float GetDLSS();
	static bool GetDescendingSort();
	static struct FVector2D GetDefaultInputScale();
	static float GetDefaultGamma();
	static bool GetDamageTextEnabled();
	static int GetCultureIndex();
	static bool GetCameraMotionEffects();
	static bool GetCameraAnimationToggleState();
	static bool GetBloom();
	static float GetAnnouncerVolume();
	static float GetAmbientVolume();
	static float GetADSMultiplier();
	static void ApplyGammaSetting(class UObject* WorldContextObject);
	static void ApplyGameSettings(bool bCheckForCommandLineOverrides, class UObject* WorldContextObject, bool bCalledFromSettingsMenu);
	static void ApplyDLSS(class UObject* WorldContextObject);
	static void ApplyCultureSetting(class UObject* WorldContextObject, bool bReload);
	static void AddNewSteamToNakamaID(const struct FString& SteamID, const struct FString& NakamaID);
};


// Class ProjectX.ScoreboardWidget
// 0x00B0 (0x0398 - 0x02E8)
class UScoreboardWidget : public UAdvancedUserWidget
{
public:
	TMap<uint32_t, TWeakObjectPtr<class AProjectXPlayerState>> PlayerStateMap;                                           // 0x02E8(0x0050) (CPF_Protected, CPF_UObjectWrapper, CPF_NativeAccessSpecifierProtected)
	TMap<uint32_t, TWeakObjectPtr<class UUserWidget>>  ScoreboardEntryMap;                                       // 0x0338(0x0050) (CPF_ExportObject, CPF_ContainsInstancedReference, CPF_Protected, CPF_UObjectWrapper, CPF_NativeAccessSpecifierProtected)
	float                                              SortTime;                                                 // 0x0388(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0xC];                                       // 0x038C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ScoreboardWidget"));
		return ptr;
	}


	void UpdateScoreboard(bool bSort, bool bCleanUp);
	void UpdatePlayerStateLists();
	void SortScoreboardLists(bool bForce);
	void PlayerStateRemoved(class APlayerState* PlayerState);
	void PlayerStateAdded(class APlayerState* PlayerState);
	class UAdvancedVerticalBox* GetTeamEntryContainer(unsigned char Team);
	class UUserWidget* AddScoreboardEntry(class AProjectXPlayerState* PlayerState);
};


// Class ProjectX.ShieldGenerator
// 0x0088 (0x0538 - 0x04B0)
class AShieldGenerator : public ACapturePoint
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04B0(0x0008) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnShieldGeneratorDestroyed;                               // 0x04B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnShieldUnderAttack;                                      // 0x04C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnShieldHealthChanged;                                    // 0x04D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnShieldProperlyInitialized;                              // 0x04E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	TArray<class ADestroyableObjective*>               ShieldParts;                                              // 0x04F8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	bool                                               bTurnIntoCapturePoint;                                    // 0x0508(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0509(0x0007) MISSED OFFSET
	TArray<class ADeployableAutonomousTurret*>         DefensiveTurrets;                                         // 0x0510(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0520(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ShieldGenerator"));
		return ptr;
	}


	void OnShieldPartTakeDamage(class ADestroyableObjective* Objective, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState);
	void OnShieldPartDestroyed(class ADestroyableObjective* Objective, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState);
	void OnShieldGeneratorInitialized();
	void OnShieldGeneratorHealthChanged(float Delta);
	bool IsDead();
	bool GetTurnsIntoCapturePoint();
	int GetShieldTeam();
	void CheckForInitialization();
};


// Class ProjectX.SkeletalMeshGhostActor
// 0x0008 (0x02C0 - 0x02B8)
class ASkeletalMeshGhostActor : public ASkeletalMeshActor
{
public:
	class USkeletalMeshComponent*                      OwningMesh;                                               // 0x02B8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.SkeletalMeshGhostActor"));
		return ptr;
	}


	void K2_SetupSkeletalMeshGhost(class USkeletalMeshComponent* ReferenceMesh);
};


// Class ProjectX.SoftBoundaryVolume
// 0x0088 (0x02B8 - 0x0230)
class ASoftBoundaryVolume : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0230(0x0028) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnBoundaryTeamOwnerChanged;                               // 0x0258(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnBoundaryActiveStateChanged;                             // 0x0268(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	int                                                TeamOwner;                                                // 0x0278(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDeactivateOnTeamNone;                                    // 0x027C(0x0001) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsBoundaryActive;                                        // 0x027D(0x0001) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x2];                                       // 0x027E(0x0002) MISSED OFFSET
	class UAfflictionOverlapComponent*                 BoundaryZone;                                             // 0x0280(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UTexture2D>                   RadarIcon;                                                // 0x0288(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RadarIconOpacity;                                         // 0x02B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RadarIconEnemyOpacity;                                    // 0x02B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.SoftBoundaryVolume"));
		return ptr;
	}


	void ToggleVolume(bool bToggle);
	void OnRep_TeamOwner();
	void OnRep_IsBoundaryActive();
	void OnActivationToggledForActor(class AActor* TargetActor, bool bIsActivated);
	bool GetVolumeActiveState();
	float GetSoftBoundaryRadius();
};


// Class ProjectX.SpatialSoundComponent
// 0x0050 (0x0118 - 0x00C8)
class USpatialSoundComponent : public UActorComponent
{
public:
	class USoundBase*                                  Sound;                                                    // 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USoundAttenuation*                           AttenuationSettings;                                      // 0x00D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InactiveTickInterval;                                     // 0x00D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ActiveTickInterval;                                       // 0x00DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ActivationFadeInTime;                                     // 0x00E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bInvert;                                                  // 0x00E4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsDynamic;                                               // 0x00E5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowDebug;                                               // 0x00E6(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00E7(0x0001) MISSED OFFSET
	class UAudioComponent*                             AudioComponent;                                           // 0x00E8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UBoxComponent*                               BoxComponent;                                             // 0x00F0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x20];                                      // 0x00F8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.SpatialSoundComponent"));
		return ptr;
	}

};


// Class ProjectX.SpawnedEventActor
// 0x0020 (0x0250 - 0x0230)
class ASpawnedEventActor : public AActor
{
public:
	float                                              SpawnTimeDelayStart;                                      // 0x0230(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SpawnDelayDuration;                                       // 0x0234(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*AActor*/                           SpawnedActorClass;                                        // 0x0238(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UBroadcastMessage*/                SpawningBroadcastMessage;                                 // 0x0240(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0248(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.SpawnedEventActor"));
		return ptr;
	}


	void SpawnActor();
	void OnSpawnStarted(float SpawnStartTime);
	void OnSpawnedActorDestroyed(class AActor* DestroyedActor);
	void OnRep_SpawnTime();
	void OnDriverChanged(class AProjectXVehicle* Vehicle, class AProjectXCharacter* OldDriver);
	float GetSpawnDelayDuration();
};


// Class ProjectX.SpawnInterface
// 0x0000 (0x0028 - 0x0028)
class USpawnInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.SpawnInterface"));
		return ptr;
	}


	void StopSpawning();
	void K2_BeginSpawning(TArray<class UClass* /*AActor*/> SpawnOverrideList);
	TArray<TScriptInterface<class USpawnInterface>> GetSpawnChildren();
	void BeginSpawning();
};


// Class ProjectX.SpawnTargetInterface
// 0x0000 (0x0028 - 0x0028)
class USpawnTargetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.SpawnTargetInterface"));
		return ptr;
	}


	float GetSpawnScoreForInstigator(class AActor* QueryInstigator, bool bUseDistanceToTargetLocation, struct FVector* TargetLocation);
	bool GetSpawnLocation(class AProjectXPlayerState* Instigator, struct FTransform* Transform);
	bool GetCanSpawnOnCombatTarget();
	bool CanSpawnPlayer(class AProjectXPlayerState* Instigator);
};


// Class ProjectX.SplineSoundComponent
// 0x0038 (0x0100 - 0x00C8)
class USplineSoundComponent : public UActorComponent
{
public:
	class USoundBase*                                  Sound;                                                    // 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USoundAttenuation*                           AttenuationSettings;                                      // 0x00D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InactiveTickInterval;                                     // 0x00D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ActiveTickInterval;                                       // 0x00DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ActivationFadeInTime;                                     // 0x00E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowDebug;                                               // 0x00E4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET
	class UAudioComponent*                             AudioComponent;                                           // 0x00E8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class USplineComponent*                            SplineComponent;                                          // 0x00F0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.SplineSoundComponent"));
		return ptr;
	}

};


// Class ProjectX.SpottableInterface
// 0x0000 (0x0028 - 0x0028)
class USpottableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.SpottableInterface"));
		return ptr;
	}


	void UnBindToSpottedEvent(const struct FScriptDelegate& Event);
	void UnBindToSpottedEndEvent(const struct FScriptDelegate& Event);
	struct FVector GetSpottingTraceOffset();
	struct FMulticastScriptDelegate GetSpottedStopEvent();
	struct FMulticastScriptDelegate GetSpottedStartEvent();
	void ClearAllSpottedEvents();
	void ClearAllSpottedEndEvents();
	ESpotReply CanBeSpotted(class AActor* SpotInstigator, ESpotType SpotType);
	void BroadcastSpottedEvent();
	void BroadcastSpottedEndEvent();
	void BindToSpottedEvent(const struct FScriptDelegate& Event);
	void BindToSpottedEndEvent(const struct FScriptDelegate& Event);
};


// Class ProjectX.SpottingComponent
// 0x0068 (0x0130 - 0x00C8)
class USpottingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00C8(0x0028) MISSED OFFSET
	class UClass* /*UAfflictionInstance*/              SpottedAffliction;                                        // 0x00F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SpottingRequiredTime;                                     // 0x00F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SpottingRange;                                            // 0x00FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCurveFloat*                                 MaxDotPerDistanceCurve;                                   // 0x0100(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxDotMultiplier;                                         // 0x0108(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bTickTargetFinderOnServer;                                // 0x010C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bRevealInvisibleTargets;                                  // 0x010D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bCanMultispot;                                            // 0x010E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x9];                                       // 0x010F(0x0009) MISSED OFFSET
	class ACharacter*                                  OwningCharacter;                                          // 0x0118(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SpottingTime;                                             // 0x0120(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0124(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.SpottingComponent"));
		return ptr;
	}


	void UpdateUseDotProductCheck(bool bNewCheckDotProduct);
	void UpdateSpottingRange(float NewRange);
	void SetOwningCharacter(class ACharacter* InOwningCharacter);
	void SetDotMultiplier(float NewMultipler);
	void Server_SpotTarget(class AActor* SpottedActor);
	void PerformRadialScan(float ScanRange, bool bIgnoreObstacles, bool bRevealStealthTargets);
	void GetSpottingViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation);
	class AController* GetOwningController();
	class ACharacter* GetOwningCharacter();
};


// Class ProjectX.SquadComponent
// 0x00D0 (0x0198 - 0x00C8)
class USquadComponent : public UActorComponent
{
public:
	struct FMulticastScriptDelegate                    OnSquadListChanged;                                       // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSquadChanged;                                           // 0x00D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSquadMemberAdded;                                       // 0x00E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnSquadMemberRemoved;                                     // 0x00F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	TArray<struct FSquadInstance>                      SquadList;                                                // 0x0108(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_RepNotify, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0118(0x0078) MISSED OFFSET
	unsigned char                                      MaxSquadSize;                                             // 0x0190(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      SquadCount;                                               // 0x0191(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0192(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.SquadComponent"));
		return ptr;
	}


	void PlayerJoinGame(class AProjectXPlayerState* Player, const struct FString& JoinTarget);
	void OnRep_SquadList();
	void OnPlayerStateRemoved(class APlayerState* PlayerState);
	bool K2_GetSquadByPlayer(class AProjectXPlayerState* Player, struct FSquadInstance* Squad);
	void K2_GetSquadByID(int SquadID, struct FSquadInstance* Squad);
	bool K2_CanJoinSquad(class AProjectXPlayerState* Player, int SquadID);
	bool JoinSquad(class AProjectXPlayerState* Player, int SquadID);
	bool IsInSameSquad(class AProjectXPlayerState* PlayerStateA, class AProjectXPlayerState* PlayerStateB);
	void GetSquadListForTeam(unsigned char Team, TArray<struct FSquadInstance>* OutSquadList);
	void GetSquadList(TArray<struct FSquadInstance>* OutSquadList);
	class AProjectXPlayerState* GetSquadLeaderByID(int SquadID);
	static bool GetSquadInfo(const struct FSquadInstance& Squad, unsigned char* Team, int* ID, TArray<class AProjectXPlayerState*>* PlayerList);
	int GetSquadCount();
	static class USquadComponent* GetSquadComponent(class UObject* WorldContextObject);
	int GetMaxSquadSize();
	static bool AreSquadsEqual(const struct FSquadInstance& OldSquad, const struct FSquadInstance& NewSquad);
};


// Class ProjectX.StartPointVolume
// 0x0000 (0x0268 - 0x0268)
class AStartPointVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.StartPointVolume"));
		return ptr;
	}

};


// Class ProjectX.StatsTrackingManager
// 0x0330 (0x0358 - 0x0028)
class UStatsTrackingManager : public UObject
{
public:
	struct FMulticastScriptDelegate                    OnChallengesLoadedEvent;                                  // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnChallengeClaimedEvent;                                  // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnChallengeProgressUpdated;                               // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnLeaderBoardLoaded;                                      // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnLocalLeaderboardUpdatedEvent;                           // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnStatsLoaded;                                            // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnStatsFinishedLoading;                                   // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnAuthoritativeStastLoaded;                               // 0x0098(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPlayerLeveledUp;                                        // 0x00A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnStatsTrackingManagerInitialized;                        // 0x00B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	TMap<struct FString, class UStatTrackingSave*>     StatSaves;                                                // 0x00C8(0x0050) (CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x240];                                     // 0x0118(0x0240) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.StatsTrackingManager"));
		return ptr;
	}


	void SaveInstance(const struct FString& PlayerID, bool bChallengesOnly);
	void SaveAllInstances();
	void RerollChallenge(const struct FString& ChallengeID);
	void OnPurchaseEvent(bool bPurchaseSucess, const struct FString& ItemId);
	void OnNakamaConnected();
	void MarkStatSaveForReload(const struct FString& PlayerID, bool bAuthorityOnly);
	class UStatTrackingSave* LoadStatInstance(const struct FString& PlayerID);
	void LoadRequestedPlayerStats(const struct FString& PlayerID, TArray<struct FString> StatNames, bool bForceReload);
	void LoadLeaderBoardForStat(EStatNames Name, EStatClassifier Type, const struct FString& Class, int NumberOfEntries, int PageNumber, bool bFriendsOnly);
	void LoadChallenges(const struct FString& PlayerID);
	bool IsValidStatCheck(EStatClassifier Class, EStatNames Name);
	bool IsValidLeaderboardPage(int PageNumber, int Entries);
	bool HasChallengeReroll();
	static class UStatsTrackingManager* GetStatTrackingManager(class UObject* WorldContextObject);
	class UStatTrackingSave* GetStatInstance(const struct FString& PlayerID);
	int GetStatDelta(const struct FString& PlayerID, EStatClassifier StatType, EStatNames StatName, const struct FString& StatClassName);
	int GetStat(const struct FString& PlayerID, EStatClassifier StatType, EStatNames StatName, const struct FString& StatClassName);
	int GetPlayerLevelFromPlayerID(const struct FString& PlayerID);
	struct FString GetNakamaLocalPlayerID();
	struct FLeaderBoardLocalEntry GetLocalLeaderboardEntry();
	TMap<int, struct FLeaderBoardEntry> GetLeaderboard();
	void GetChallenges(const struct FString& PlayerID, struct FTimedChallenges* Challenges);
	void ClaimChallenge(const struct FString& ChallengeID);
	void BPUpdateStat(class AProjectXPlayerState* PlayerState, EStatNames InStatName);
	bool AreStatsSynced(const struct FString& PlayerID);
};


// Class ProjectX.StatTrackingSave
// 0x02D0 (0x02F8 - 0x0028)
class UStatTrackingSave : public UObject
{
public:
	struct FPlayerStat                                 PlayerStats;                                              // 0x0028(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FString                                     PlayerID;                                                 // 0x0078(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x270];                                     // 0x0088(0x0270) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.StatTrackingSave"));
		return ptr;
	}


	bool TrackProjectile(uint16_t ID);
	void ClearProjectileID(uint16_t ID);
};


// Class ProjectX.SubMenuWidget
// 0x0058 (0x0340 - 0x02E8)
class USubMenuWidget : public UAdvancedUserWidget
{
public:
	TMap<struct FName, class UUserWidget*>             SubMenus;                                                 // 0x02E8(0x0050) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.SubMenuWidget"));
		return ptr;
	}


	void SwitchMenuState(const struct FName& Type);
	bool SetSubMenus();
	void AddSubMenu(const struct FName& NameId, class UUserWidget* SubMenu);
};


// Class ProjectX.TeamInterface
// 0x0000 (0x0028 - 0x0028)
class UTeamInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.TeamInterface"));
		return ptr;
	}


	int SetTeam(int NewTeam);
	int GetTeam();
};


// Class ProjectX.TelekenesisActor
// 0x0080 (0x02B0 - 0x0230)
class ATelekenesisActor : public AActor
{
public:
	float                                              ProjectileFollowSpeed;                                    // 0x0230(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PlayerPullSpeed;                                          // 0x0234(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     PlayerPullOffset;                                         // 0x0238(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              VelocityOffsetMultiplier;                                 // 0x0244(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHideSelectedActor;                                       // 0x0248(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	class USoundBase*                                  PullSound;                                                // 0x0250(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USoundBase*                                  PushSound;                                                // 0x0258(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UParticleSystem*                             DebrisEffect;                                             // 0x0260(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UParticleSystem*                             SecondaryEffect;                                          // 0x0268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UParticleSystem*                             DestroyedEffect;                                          // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UParticleSystem*                             TakeDamageEffect;                                         // 0x0278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0280(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.TelekenesisActor"));
		return ptr;
	}


	void SetCollisionComponent(class UPrimitiveComponent* InCollisionComponent);
	void OnImpact(const struct FHitResult& Hit);
	void K2_OnImpact(const struct FHitResult& Hit);
	void K2_OnFollowProjectile(class AProjectile* Actor);
	void K2_OnActorContextInfo(class AActor* Actor, class UPrimitiveComponent* Component, int InstanceId);
	void K2_Die();
	bool HasTarget();
};


// Class ProjectX.TelekenesisComponent
// 0x00A8 (0x0170 - 0x00C8)
class UTelekenesisComponent : public UActorComponent
{
public:
	float                                              InitialEnergyCost;                                        // 0x00C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HoldEnergyDrainRate;                                      // 0x00CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TMap<class UPhysicalMaterial*, struct FTelekenesisInfo> TelekenesisData;                                          // 0x00D0(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	class USoundBase*                                  PullSound;                                                // 0x0120(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USoundBase*                                  PushSound;                                                // 0x0128(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDebugShielding;                                          // 0x0130(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	TArray<class UClass* /*UAfflictionInstance*/>      InvalidAfflictions;                                       // 0x0138(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0148(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.TelekenesisComponent"));
		return ptr;
	}


	void TakeDamage(const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, float* Damage);
	void Server_Release(bool bForce);
	void Server_Pull(const struct FHitResult& HitResult);
	void Multicast_TakeDamage(float Damage);
	void Multicast_Release(bool bForce);
	void Multicast_Pull(const struct FHitResult& HitResult);
	void Multicast_Die(float Damage);
};


// Class ProjectX.TightAimCameraModifier
// 0x0008 (0x0058 - 0x0050)
class UTightAimCameraModifier : public UFOVCameraModifier
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.TightAimCameraModifier"));
		return ptr;
	}

};


// Class ProjectX.TightAimWeaponBillboard
// 0x0010 (0x0480 - 0x0470)
class UTightAimWeaponBillboard : public UMaterialBillboardComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0470(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.TightAimWeaponBillboard"));
		return ptr;
	}

};


// Class ProjectX.TrackableInterface
// 0x0000 (0x0028 - 0x0028)
class UTrackableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.TrackableInterface"));
		return ptr;
	}


	void SetRadarIconOpacity(float Opacity);
	bool RegisterOnStart();
	bool IsCloaked();
	class AActor* GetTrackableInterfaceActor();
	struct FText GetRadarLabel();
	float GetRadarIconSize();
	float GetRadarIconOpacity();
	float GetRadarIconEnemyOpacity();
	bool GetRadarIconCompensantesRotation();
	TSoftObjectPtr<class UTexture2D> GetRadarIcon();
	TSoftObjectPtr<class UTexture2D> GetMapIcon();
	TSoftObjectPtr<class UTexture2D> GetHudIcon();
	bool GetAllyVisibilityResponse();
};


// Class ProjectX.TransportObjectiveSpawnPoint
// 0x0010 (0x0320 - 0x0310)
class ATransportObjectiveSpawnPoint : public AFlagSpawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0310(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.TransportObjectiveSpawnPoint"));
		return ptr;
	}

};


// Class ProjectX.TurretComponent
// 0x00E0 (0x01A8 - 0x00C8)
class UTurretComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	struct FVector                                     ProjectileOffset;                                         // 0x00D0(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnTargetAcquired;                                         // 0x00E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FMulticastScriptDelegate                    OnTargetKilled;                                           // 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FMulticastScriptDelegate                    OnFired;                                                  // 0x0100(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0110(0x0010) MISSED OFFSET
	TArray<class AActor*>                              PotentialTargets;                                         // 0x0120(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0130(0x0018) MISSED OFFSET
	class UClass* /*UWeaponInstanceProjectile*/        WeaponInstanceClass;                                      // 0x0148(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UTurretOverlayWidget*/             TurretWidgetClass;                                        // 0x0150(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              TargetAcquiredFireDelay;                                  // 0x0158(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              Range;                                                    // 0x015C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              TargetingAngle;                                           // 0x0160(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // 0x0168(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FVector2D                                   RandomTargetingRotationPitch;                             // 0x0178(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector2D                                   RandomTargetingRotationYaw;                               // 0x0180(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              RandomTargetingRotationDelay;                             // 0x0188(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x1C];                                      // 0x018C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.TurretComponent"));
		return ptr;
	}


	void Multicast_OnFired();
	struct FRotator GetTargetingRotation();
	class AActor* GetTarget();
	struct FTransform GetProjectileTransform();
	void FireProjectile(const struct FTransform& TransformStart, bool bRequiresValidTarget);
};


// Class ProjectX.TurretOverlayWidget
// 0x0000 (0x0260 - 0x0260)
class UTurretOverlayWidget : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.TurretOverlayWidget"));
		return ptr;
	}


	void OnTargetAcquired(class AActor* Target);
	void OnFire(float CoolDown);
};


// Class ProjectX.ProjectXVehicleMovementComponent
// 0x0090 (0x0BE0 - 0x0B50)
class UProjectXVehicleMovementComponent : public UCharacterMovementComponent
{
public:
	float                                              SteeringRate;                                             // 0x0B50(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FlightDownwardsMultiplier;                                // 0x0B54(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B58(0x0004) MISSED OFFSET
	float                                              SmoothRotationRate;                                       // 0x0B5C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0B60(0x0018) MISSED OFFSET
	TArray<class UPrimitiveComponent*>                 CollisionComponents;                                      // 0x0B78(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0B88(0x000C) MISSED OFFSET
	float                                              LateralAirControl;                                        // 0x0B94(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ForwardAirControl;                                        // 0x0B98(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              FluidFrictionOverride;                                    // 0x0B9C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bBoostWhileFalling;                                       // 0x0BA0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0BA1(0x0003) MISSED OFFSET
	float                                              UpwardsBoostForce;                                        // 0x0BA4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              UpwardsBoostMaxZ;                                         // 0x0BA8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x34];                                      // 0x0BAC(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.ProjectXVehicleMovementComponent"));
		return ptr;
	}


	bool IsGroundedInFlyingMode();
	unsigned char GetPackedAcceleration();
	float GetFlySpeedCache();
};


// Class ProjectX.VehicleRespawnManager
// 0x0058 (0x0120 - 0x00C8)
class UVehicleRespawnManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x00C8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.VehicleRespawnManager"));
		return ptr;
	}

};


// Class ProjectX.VehicleSeatComponent
// 0x00E8 (0x01B0 - 0x00C8)
class UVehicleSeatComponent : public UActorComponent
{
public:
	struct FMulticastScriptDelegate                    OnOccupantChangedSignature;                               // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	class AProjectXVehicle*                            VehicleOwner;                                             // 0x00D8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AProjectXCharacter>           Occupant;                                                 // 0x00E0(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AProjectXCharacter>           PreviousOccupant;                                         // 0x00E8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDriverSeat;                                              // 0x00F0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	struct FName                                       SeatName;                                                 // 0x00F4(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FName                                       SeatSocket;                                               // 0x00FC(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bUseSocketFromParentVehicle;                              // 0x0104(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	struct FVector                                     SeatOffset;                                               // 0x0108(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    SeatRotation;                                             // 0x0114(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UAnimInstance*/                    AnimationClass3P;                                         // 0x0120(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bUseEnterLocationAsExitLocation;                          // 0x0128(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
	struct FVector                                     ExitOffset;                                               // 0x012C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     EjectLaunchVelocity;                                      // 0x0138(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              LaunchVelocityExchangeRate;                               // 0x0144(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<class UClass* /*UWeaponInstanceVehicle*/>   WeaponClasses;                                            // 0x0148(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_UObjectWrapper, CPF_NativeAccessSpecifierProtected)
	struct FName                                       ProjectileSocket;                                         // 0x0158(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FName                                       MeshRotationSocket;                                       // 0x0160(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bHideOccupant;                                            // 0x0168(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bUseCharacterMeshBoundsWhenVisible;                       // 0x0169(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x6];                                       // 0x016A(0x0006) MISSED OFFSET
	TArray<class UClass* /*UAfflictionInstance*/>      InvalidSeatAfflictions;                                   // 0x0170(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_UObjectWrapper, CPF_NativeAccessSpecifierProtected)
	TArray<class UClass* /*UAfflictionInstance*/>      SeatOccupantAfflictions;                                  // 0x0180(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_UObjectWrapper, CPF_NativeAccessSpecifierProtected)
	bool                                               bOnlyTickWhenOccupied;                                    // 0x0190(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x1F];                                      // 0x0191(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.VehicleSeatComponent"));
		return ptr;
	}


	void ToggleSeatAttachment(bool bNewToggle);
	void TickWeapon(float DeltaTime);
	void TickOccupant(float DeltaTime);
	bool ShouldOccupantBeHidden();
	void SetManualSeatOffset(const struct FVector& NewOffset);
	void ResetSeatOffset();
	void OnRep_Occupant();
	bool LeaveSeat(bool bForced, bool bEject);
	bool IsDriverSeat();
	bool HasOccupant();
	class UWeaponComponent* GetWeaponComponent();
	class AProjectXVehicle* GetVehicle();
	bool GetUseCharacterBoundsWhenVisible();
	struct FTransform GetSeatTransform();
	struct FRotator GetSeatRotation();
	struct FName GetSeatName();
	struct FVector GetSeatLocation();
	class AProjectXCharacter* GetOccupant();
	struct FRotator GetLookDirection();
	struct FTransform GetExitTransform();
	float GetDistanceFromPlayer(class AProjectXCharacter* Character);
	bool EnterSeat(class AProjectXCharacter* Character);
	bool CanEnterSeat(class AProjectXCharacter* Character);
};


// Class ProjectX.VirtualCursorFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UVirtualCursorFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.VirtualCursorFunctionLibrary"));
		return ptr;
	}


	static void SetVirtualCursorSensitivity(float Multiplier);
	static bool IsVirtualCursorActive();
	static bool IsCursorOverInteractableWidget();
	static void EnableVirtualCursor(class APlayerController* PC);
	static void DisableVirtualCursor(class APlayerController* PC);
};


// Class ProjectX.VivoxPlayerComponent
// 0x0038 (0x0100 - 0x00C8)
class UVivoxPlayerComponent : public UActorComponent
{
public:
	struct FMulticastScriptDelegate                    OnPushToTalkPressed;                                      // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPushToTalkReleased;                                     // 0x00D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00E8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.VivoxPlayerComponent"));
		return ptr;
	}


	bool IsUsingPushToTalk();
	void Client_Login();
	void Client_JoinSquadVoiceChannel(const struct FString& SessionName, int SquadID, bool bForceLeaveChannels);
};


// Class ProjectX.VivoxSteamBeaconClient
// 0x0018 (0x0390 - 0x0378)
class AVivoxSteamBeaconClient : public ASteamBeaconClient
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0378(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.VivoxSteamBeaconClient"));
		return ptr;
	}


	void Client_Reliable_SendVoiceSessionID(const struct FString& VoiceSessionID);
};


// Class ProjectX.VivoxSteamBeaconHost
// 0x0010 (0x02A8 - 0x0298)
class AVivoxSteamBeaconHost : public ASteamBeaconHost
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0298(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.VivoxSteamBeaconHost"));
		return ptr;
	}

};


// Class ProjectX.VoteInstanceKick
// 0x0020 (0x0180 - 0x0160)
class UVoteInstanceKick : public UVoteInstance
{
public:
	bool                                               bReceiveInitialRep;                                       // 0x0160(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0161(0x0003) MISSED OFFSET
	struct FName                                       KickTargetID;                                             // 0x0164(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	class APlayerState*                                KickTarget;                                               // 0x0170(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UAdvancedUserWidget*/              KickVoteWidget;                                           // 0x0178(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.VoteInstanceKick"));
		return ptr;
	}


	void OnRep_KickTargetID();
	struct FName GetKickTargetID();
	class APlayerState* GetKickTarget();
};


// Class ProjectX.VoteInstanceMap
// 0x0008 (0x0168 - 0x0160)
class UVoteInstanceMap : public UVoteInstance
{
public:
	bool                                               bTravelOnVoteEnd;                                         // 0x0160(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bTravelToBestVotedMap;                                    // 0x0161(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0162(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.VoteInstanceMap"));
		return ptr;
	}


	void GetMapList(TArray<struct FString>* OutMapList);
};


// Class ProjectX.WaveSpawner
// 0x0140 (0x0370 - 0x0230)
class AWaveSpawner : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0230(0x0030) MISSED OFFSET
	bool                                               bExecuteOnMatchStart;                                     // 0x0260(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bExecutesOnBeginPlay;                                     // 0x0261(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0262(0x0002) MISSED OFFSET
	float                                              StartTimeDelay;                                           // 0x0264(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WaveCooldownTime;                                         // 0x0268(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEndGameWithVictoryIfAllWavesCompleted;                   // 0x026C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x026D(0x0003) MISSED OFFSET
	class UClass* /*AActor*/                           RespawnActor;                                             // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                EnemyTeam;                                                // 0x0278(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDebug;                                                   // 0x027C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bVerboseDebug;                                            // 0x027D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x2];                                       // 0x027E(0x0002) MISSED OFFSET
	TArray<struct FWaveSpawnInfo>                      Waves;                                                    // 0x0280(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bPrimarySpawner;                                          // 0x0290(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0291(0x0003) MISSED OFFSET
	float                                              SurviveTimeMultiplier;                                    // 0x0294(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WaveFailureTimeMultiplier;                                // 0x0298(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x4];                                       // 0x029C(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnWaveSpawnerEventsCompletedEvent;                        // 0x02A0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnWaveCompletedEvent;                                     // 0x02B0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnWaveStartedEvent;                                       // 0x02C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnMobsDefeatedEvent;                                      // 0x02D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnTimedWaveCompletedEvent;                                // 0x02E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnMobCountUpdatedSignature;                               // 0x02F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnWaveProgress;                                           // 0x0300(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UAfflictionInstance*/              SpawnedCharacterAffliction;                               // 0x0310(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CharacterAfflictionTriggerPercentage;                     // 0x0318(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData06[0x54];                                      // 0x031C(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.WaveSpawner"));
		return ptr;
	}


	void SpawnWave();
	void RespawnerFinsished(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnSpawnerCompleted(class UObject* Spawner);
	void OnMobSpawned(class AProjectXCharacter* SpawnedPlayerState);
	void OnMobDestroyed(class AProjectXCharacter* SpawnedPlayerState, const struct FVector& SpawnLocation);
	bool IsADefeatEnemyWave(int Wave);
	static void GetWaveSpawnerStateFromPackedInt(int Data, int* Wave, EWaveSpawnerState* State);
	EWaveSpawnerState GetWaveSpawnerState();
	float GetWaveProgress();
	int GetTotalWaves();
	int GetTotalKills();
	int GetNumberOfEnemiesNeededToProgress(int Wave);
	int GetCurrentWave();
	void EventComplete(bool bSuccess);
	void EndWave();
};


// Class ProjectX.WeaponComponent
// 0x0258 (0x0320 - 0x00C8)
class UWeaponComponent : public UActorComponent
{
public:
	struct FMulticastScriptDelegate                    OnWeaponAdded;                                            // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnWeaponRemoved;                                          // 0x00D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnWeaponEquipped;                                         // 0x00E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnWeaponSkinsChanged;                                     // 0x00F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnWeaponError;                                            // 0x0108(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnTightAimStart;                                          // 0x0118(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnTightAimStop;                                           // 0x0128(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnAmmoChanged;                                            // 0x0138(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnAmmoReserveChanged;                                     // 0x0148(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnReloadStart;                                            // 0x0158(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnReloadStop;                                             // 0x0168(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFiringStart;                                            // 0x0178(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFiringStop;                                             // 0x0188(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnDeployableSpawned;                                      // 0x0198(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnDeployableDestroyed;                                    // 0x01A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnLockOnStart;                                            // 0x01B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnLockedOn;                                               // 0x01C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnLockOnLost;                                             // 0x01D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnLockOnStopped;                                          // 0x01E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnLockOnStrengthChanged;                                  // 0x01F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnWeaponStartFire;                                        // 0x0208(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnWeaponAutoFire;                                         // 0x0218(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnWeaponStopFire;                                         // 0x0228(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnWeaponChargedFire;                                      // 0x0238(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnWeaponShotFired;                                        // 0x0248(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnWeaponReload;                                           // 0x0258(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPersonalVehicleInputEvent;                              // 0x0268(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	float                                              PersonalVehicleHoldTriggerTimeDefault;                    // 0x0278(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 FOVOffsetControlCurve;                                    // 0x0280(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0288(0x0004) MISSED OFFSET
	TWeakObjectPtr<class UWeaponInstance>              EquippedWeapon;                                           // 0x028C(0x0008) (CPF_ExportObject, CPF_Net, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UWeaponInstance>              PendingWeapon;                                            // 0x0294(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UWeaponInstance>              PreviousWeapon;                                           // 0x029C(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02A4(0x0004) MISSED OFFSET
	TArray<TWeakObjectPtr<class UWeaponInstance>>      WeaponInventory;                                          // 0x02A8(0x0010) (CPF_ExportObject, CPF_Net, CPF_ZeroConstructor, CPF_RepNotify, CPF_ContainsInstancedReference, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x10];                                      // 0x02B8(0x0010) MISSED OFFSET
	class USkeletalMeshComponent*                      Mesh1P;                                                   // 0x02C8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      Mesh3P;                                                   // 0x02D0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      WeaponMesh1P;                                             // 0x02D8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      WeaponMesh3P;                                             // 0x02E0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCameraComponent*                            FPCamera;                                                 // 0x02E8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DamageModifier;                                           // 0x02F0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AmmoPickupMultiplier;                                     // 0x02F4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WeaponSpreadMultiplier;                                   // 0x02F8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x1C];                                      // 0x02FC(0x001C) MISSED OFFSET
	bool                                               bCanFire;                                                 // 0x0318(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0319(0x0002) MISSED OFFSET
	unsigned char                                      InputBlockSemaphore;                                      // 0x031B(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData06[0x4];                                       // 0x031C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.WeaponComponent"));
		return ptr;
	}


	void WeaponAutoFire();
	void UseVehicleAbility();
	bool UsesAmmo();
	void UnEquipComplete();
	void StopVehicleAbility();
	void StartVehicleAbility();
	void Server_Reliable_SetPendingWeapon(class UWeaponInstance* Weapon);
	void Server_Reliable_EquipWeapon(class UWeaponInstance* Weapon, bool bCanUnequipExclusive);
	void QuickWeaponSwitchPrevious();
	void QuickWeaponSwitch();
	void OwnerDied();
	void OnRep_WeaponInventory();
	void OnRep_EquippedWeapon();
	void OnFOVSettingChanged(float Delta);
	bool IsSwitchingWeapons();
	bool IsLocallyControlled();
	bool IsHoldingFire();
	bool IsHoldingAltFire();
	bool IsCurrentWeaponByClass(class UClass* /*UWeaponInstance*/ Weapon);
	bool IsCurrentWeapon(class UWeaponInstance* Weapon);
	float GetWeaponSpread();
	class USkeletalMeshComponent* GetWeaponMesh3P();
	class USkeletalMeshComponent* GetWeaponMesh1P();
	TArray<class UWeaponInstance*> GetWeaponInventory();
	int GetWeaponIndex(class UWeaponInstance* Weapon);
	class UWeaponInstance* GetWeaponFromSlot(EEquipSlot Slot);
	class UWeaponInstance* GetWeaponFromIndex(int Index);
	class UWeaponInstance* GetWeaponFromClass(class UClass* /*UWeaponInstance*/ WeaponClass);
	EEquipSlot GetSlotFromWeapon(class UWeaponInstance* Weapon);
	float GetReticleSpreadMultiplier();
	float GetReserveAmmo();
	class USkeletalMeshComponent* GetMesh3P();
	class USkeletalMeshComponent* GetMesh1P();
	float GetMagAmmo();
	class UCameraComponent* GetFirstPersonCamera();
	float GetDamageModifier();
	class UWeaponInstance* GetCurrentWeapon();
	float GetAmmoPickupMultiplier();
	void EquipWeapon(class UWeaponInstance* Weapon, bool bCanUnequipExclusive, bool bForce);
	void EquipPreviousWeapon(bool bCanUnequipExclusive);
	void CycleWeapon(bool bReverse);
	void CosmeticPrimaryFire();
	void CancelWeaponActions();
	void CancelInputConstrainedWeaponActions();
	class UWeaponInstance* AddWeapon(class UClass* /*UWeaponInstance*/ WeaponClass, EEquipSlot Slot, bool bIsPartOfBatch);
};


// Class ProjectX.WeaponDamageMutator
// 0x0068 (0x0148 - 0x00E0)
class UWeaponDamageMutator : public UMutatorComponent
{
public:
	bool                                               bEnableMutator;                                           // 0x00E0(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET
	TArray<struct FDamageConfig>                       DamageConfig;                                             // 0x00E8(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TMap<class UClass* /*UDamageType*/, float>         DamageMap;                                                // 0x00F8(0x0050) (CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.WeaponDamageMutator"));
		return ptr;
	}

};


// Class ProjectX.WeaponInstanceBeam
// 0x0160 (0x0A38 - 0x08D8)
class UWeaponInstanceBeam : public UWeaponInstanceRanged
{
public:
	class UClass* /*UAfflictionInstance*/              AfflictionToApplyFriendlies;                              // 0x08D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UAfflictionInstance*/              AfflictionToApplyNeutral;                                 // 0x08E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UAfflictionInstance*/              AfflictionToApplyEnemies;                                 // 0x08E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bUsesTargetActor;                                         // 0x08F0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08F1(0x0003) MISSED OFFSET
	float                                              MaxEnemyBeamAngle;                                        // 0x08F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxFriendlyBeamAngle;                                     // 0x08F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bLineOfSightBreaksEnemyBeam;                              // 0x08FC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bLineOfSightBreaksFriendlyBeam;                           // 0x08FD(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsBeaming;                                               // 0x08FE(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x1];                                       // 0x08FF(0x0001) MISSED OFFSET
	float                                              TargetAcquireMaxRange;                                    // 0x0900(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              EnemyTargetAcquireMaxRange;                               // 0x0904(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<class UClass* /*AActor*/>                   ValidTargetingActors;                                     // 0x0908(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_UObjectWrapper, CPF_NativeAccessSpecifierProtected)
	float                                              TargetMaintainMaxRange;                                   // 0x0918(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              EnemyTargetMaintainMaxRange;                              // 0x091C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AActor>                       BeamTargetActor;                                          // 0x0920(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0xA8];                                      // 0x0928(0x00A8) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnBeamStart;                                              // 0x09D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FMulticastScriptDelegate                    OnBeamEnd;                                                // 0x09E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FMulticastScriptDelegate                    OnBeamTargetInRange;                                      // 0x09F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FMulticastScriptDelegate                    OnBeamTargetInRangeLost;                                  // 0x0A00(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FMulticastScriptDelegate                    OnBeamTargetAcquired;                                     // 0x0A10(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FMulticastScriptDelegate                    OnBeamTargetTeamChanged;                                  // 0x0A20(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0A30(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.WeaponInstanceBeam"));
		return ptr;
	}


	void Server_BeamToTargetStop(unsigned char Mode);
	void Server_BeamToTargetStart(unsigned char Mode, class AActor* Target, const struct FHitResult& TargetHitResult);
	void OnRep_IsBeaming();
	void OnRep_BeamTargetActor();
	void K2_SearchingForTarget();
	class AActor* FindBeamHoveringActor();
};


// Class ProjectX.WeaponInstanceSpawnable
// 0x0068 (0x08B0 - 0x0848)
class UWeaponInstanceSpawnable : public UWeaponInstance
{
public:
	struct FMulticastScriptDelegate                    ActiveSpawnableEvent;                                     // 0x0848(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	TArray<class ADeployable*>                         Deployables;                                              // 0x0858(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bFireValidated;                                           // 0x0868(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0869(0x0003) MISSED OFFSET
	float                                              GroundCheckDistance;                                      // 0x086C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DeployableForwardOffset;                                  // 0x0870(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0874(0x0004) MISSED OFFSET
	class ADeployableMarker*                           DeployableMarker;                                         // 0x0878(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*ADeployableMarker*/                DeployableMarkerClass;                                    // 0x0880(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*ADeployable*/                      DeployableClass;                                          // 0x0888(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseWorldBasedDeployment;                                 // 0x0890(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseProjectileBasedDeployment;                            // 0x0891(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0892(0x0002) MISSED OFFSET
	struct FVector                                     RelativeOffset;                                           // 0x0894(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DeployDistanceLeniency;                                   // 0x08A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bFireAndForgetDeployables;                                // 0x08A4(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0xB];                                       // 0x08A5(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.WeaponInstanceSpawnable"));
		return ptr;
	}


	bool ValidateDeploy(struct FTransform* Transform);
	void Server_SpawnActor(const struct FTransform& DeployTransform);
	void OnDeployableSpawned(class ADeployable* DeployedActor);
	void OnDeployableDestroyed(class ADeployable* DeployedActor);
	void GetSpawnTransform(struct FTransform* SpawnTransform);
	class UClass* /*ADeployable*/ GetDeployableClass();
	void DestroyOldestDeployable();
	bool CanInteractWithActiveDeployables();
};


// Class ProjectX.WeaponInstanceControlled
// 0x0060 (0x0910 - 0x08B0)
class UWeaponInstanceControlled : public UWeaponInstanceSpawnable
{
public:
	TArray<class UClass* /*UAfflictionInstance*/>      AfflictionsToApplyToOwner;                                // 0x08B0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_UObjectWrapper, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UUserWidget*/                      DeployableOverlayWidgetClass;                             // 0x08C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CameraBlendInTime;                                        // 0x08C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              CameraBlendOutTime;                                       // 0x08CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DeathAnimationDuration;                                   // 0x08D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bStopControllingOnRefire;                                 // 0x08D4(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bCanUnequipWhileDeploying;                                // 0x08D5(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x26];                                      // 0x08D6(0x0026) MISSED OFFSET
	bool                                               bIsControllingDeployable;                                 // 0x08FC(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x13];                                      // 0x08FD(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.WeaponInstanceControlled"));
		return ptr;
	}


	void OnDeployableDeploymentComplete(class ADeployable* Deployable);
	void K2_OnDeployableControlStopFinished();
	void K2_OnDeployableControlStop();
	void K2_OnDeployableControlStarted(class ADeployable* Deployable);
	bool IsWaitingForControlStop();
	bool IsControllingDeployable();
	class UUserWidget* GetDeployableOverlayWidget();
	class ADeployableControllable* GetCurrentlyControlledDeployable();
	void FinishDeathAnimation();
};


// Class ProjectX.WeaponInstanceDesignator
// 0x0040 (0x0888 - 0x0848)
class UWeaponInstanceDesignator : public UWeaponInstance
{
public:
	struct FVector                                     DesignatorLocation;                                       // 0x0848(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DesignationStartTime;                                     // 0x0854(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*AWeaponInstanceActor*/             SpawnedActorClass;                                        // 0x0858(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DesignatorRange;                                          // 0x0860(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bMatchPlayerYaw;                                          // 0x0864(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0865(0x0003) MISSED OFFSET
	class UParticleSystem*                             TraceEmitter;                                             // 0x0868(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FName                                       TraceEmitterSocket;                                       // 0x0870(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TEnumAsByte<ECollisionChannel>                     DesignatorTraceChannel;                                   // 0x0878(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bTestVertically;                                          // 0x0879(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x2];                                       // 0x087A(0x0002) MISSED OFFSET
	float                                              TraceHeight;                                              // 0x087C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UParticleSystemComponent*                    TraceParticleSystem;                                      // 0x0880(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.WeaponInstanceDesignator"));
		return ptr;
	}


	void Server_Unreliable_UpdateDesignation(const struct FVector& NewDesignatorLocation);
	void Server_Reliable_StartDesignation(const struct FVector& InitialDesignatorLocation);
	void Multicast_Unreliable_UpdateDesignation(const struct FVector& NewDesignatorLocation);
	void K2_OnDesignatorMarkerToggled();
	bool IsValidDesignator();
	class UParticleSystemComponent* GetTraceParticleSystem();
	float GetDesignatorProgress();
};


// Class ProjectX.WeaponInstanceDesignatorGuided
// 0x0020 (0x08A8 - 0x0888)
class UWeaponInstanceDesignatorGuided : public UWeaponInstanceDesignator
{
public:
	bool                                               bReconnectOnBeginPlay;                                    // 0x0888(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0889(0x0003) MISSED OFFSET
	TWeakObjectPtr<class AGuidedDesignatorActor>       CurrentDesignatorActor;                                   // 0x088C(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     TargetLocation;                                           // 0x0894(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      CachedFireMode;                                           // 0x08A0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x7];                                       // 0x08A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.WeaponInstanceDesignatorGuided"));
		return ptr;
	}


	void Server_Reliable_UpdateTargetLocation(const struct FVector& NewTargetLocation);
	void GuidedActorDestroyed(class AActor* Actor);
	void Client_Reliable_NotifyGuidedActorDestroyed(class AActor* Actor);
};


// Class ProjectX.WeaponInstanceToggleable
// 0x0018 (0x0860 - 0x0848)
class UWeaponInstanceToggleable : public UWeaponInstance
{
public:
	float                                              LastEnableTime;                                           // 0x0848(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bIsEnabled;                                               // 0x084C(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	EToggleTrigger                                     InitialToggleTrigger;                                     // 0x084D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bToggleOffOnOtherWeaponFire;                              // 0x084E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bToggleOffOnInteraction;                                  // 0x084F(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bCanToggleOffManually;                                    // 0x0850(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bTickWhenActive;                                          // 0x0851(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bConsumeOnTick;                                           // 0x0852(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0853(0x0005) MISSED OFFSET
	class UClass* /*UAfflictionInstance*/              EnabledAffliction;                                        // 0x0858(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.WeaponInstanceToggleable"));
		return ptr;
	}


	void ToggleWeapon(bool bEnable);
	void Server_Reliable_ForceToggle(bool bEnable);
	void OnWeaponFire(unsigned char Mode);
	void OnRep_Enabled();
	void OnHoldInteraction(class UInteractableComponent* Interactable, class UPrimitiveComponent* Component, float HoldTime, class APlayerController* Sender);
	void OnEnabledAfflictionEnded();
	void K2_ToggleOn();
	void K2_ToggleOff();
	void Client_Reliable_ToggleOff(float FailWorldTime);
	void Client_Reliable_OnEnabledAfflictionEnded();
};


// Class ProjectX.WeaponInstanceDevastatorMode
// 0x0010 (0x0870 - 0x0860)
class UWeaponInstanceDevastatorMode : public UWeaponInstanceToggleable
{
public:
	class UClass* /*AActor*/                           TurretClass;                                              // 0x0860(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0868(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.WeaponInstanceDevastatorMode"));
		return ptr;
	}

};


// Class ProjectX.WeaponInstanceMelee
// 0x0050 (0x0898 - 0x0848)
class UWeaponInstanceMelee : public UWeaponInstance
{
public:
	float                                              Range;                                                    // 0x0848(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x084C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              ClientHitBoxIgnoreList;                                   // 0x0850(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class AActor*>                              ServerHitBoxIgnoreList;                                   // 0x0860(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              AmmoRegenRate;                                            // 0x0870(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0874(0x0004) MISSED OFFSET
	class UDataTable*                                  ImpactEffectTable;                                        // 0x0878(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UPhysicalMaterial*                           PlayerPhysicalMaterial;                                   // 0x0880(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UPhysicalMaterial*                           DeployablePhysicalMaterial;                               // 0x0888(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bFireValidated;                                           // 0x0890(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDashValidated;                                           // 0x0891(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0892(0x0002) MISSED OFFSET
	int                                                CachedFireMode;                                           // 0x0894(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.WeaponInstanceMelee"));
		return ptr;
	}


	void Server_Reliable_NotifyHitActors(TArray<struct FHitResult> HitList);
	void Multicast_Unreliable_SpawnImpactEffect(const struct FHitResult& Hit);
	void Client_Unreliable_UpdateMagazineAmmo(float MagAmmo);
};


// Class ProjectX.WeaponInstanceGroundPound
// 0x0080 (0x0918 - 0x0898)
class UWeaponInstanceGroundPound : public UWeaponInstanceMelee
{
public:
	class UAnimMontage*                                DashCompleteAnimation1P;                                  // 0x0898(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAnimMontage*                                DashCompleteAnimation3P;                                  // 0x08A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAnimMontage*                                DashStartAnimation1P;                                     // 0x08A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAnimMontage*                                DashStartAnimation3P;                                     // 0x08B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UAfflictionInstance*/              GroundPoundAfflictionClass;                               // 0x08B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UAfflictionInstance*/              FlagAfflictionToRemove;                                   // 0x08C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MinimumHeight;                                            // 0x08C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaximumHeight;                                            // 0x08CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaximumAngle;                                             // 0x08D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxDuration;                                              // 0x08D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              LandingDuration;                                          // 0x08D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxDistanceForDamageMultiplication;                       // 0x08DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UCurveFloat*                                 DistanceBasedDamageMultiplierCurve;                       // 0x08E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MinDamage;                                                // 0x08E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxDamage;                                                // 0x08EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              MaxDamageRadius;                                          // 0x08F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DamageRadius;                                             // 0x08F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DamageFalloff;                                            // 0x08F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ImpactDepenetrationAmount;                                // 0x08FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0900(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.WeaponInstanceGroundPound"));
		return ptr;
	}


	void OnLandedGround(const struct FHitResult& Hit);
	void Multicast_PlayLandingEffects(const struct FHitResult& Hit);
	void Multicast_PlayAttackEffect();
	void LandedOnGround(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	bool IsMinimumHeightReached();
	float GetCurrentHeight();
	void Client_LandedOnGround(const struct FHitResult& Hit);
};


// Class ProjectX.WeaponInstanceMeleeDash
// 0x0068 (0x0900 - 0x0898)
class UWeaponInstanceMeleeDash : public UWeaponInstanceMelee
{
public:
	struct FMulticastScriptDelegate                    OnSwordDashAvailable;                                     // 0x0898(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FMulticastScriptDelegate                    OnSwordDashNotAvailable;                                  // 0x08A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	uint32_t                                           AltFireCounter;                                           // 0x08B8(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08BC(0x0004) MISSED OFFSET
	float                                              DashStaminaCost;                                          // 0x08C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bRequiresTarget;                                          // 0x08C4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08C5(0x0003) MISSED OFFSET
	float                                              AltFireRate;                                              // 0x08C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              AltDashDistance;                                          // 0x08CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              AmmoConsumedPerAltFire;                                   // 0x08D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              AltBaseDamage;                                            // 0x08D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UClass* /*UDamageType*/                      AltDamageType;                                            // 0x08D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAnimMontage*                                AltFireAnimation1P;                                       // 0x08E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAnimMontage*                                WeaponAltFireAnimation1P;                                 // 0x08E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UAnimMontage*                                AltFireAnimation3P;                                       // 0x08F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x8];                                       // 0x08F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.WeaponInstanceMeleeDash"));
		return ptr;
	}


	void OnRep_AltFireCounter();
	void OnHitDuringWeaponMovement(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};


// Class ProjectX.WeaponInstancePowerSword
// 0x0078 (0x0910 - 0x0898)
class UWeaponInstancePowerSword : public UWeaponInstanceMelee
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0898(0x0008) MISSED OFFSET
	float                                              MeleeRange;                                               // 0x08A0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     MeleeExtents;                                             // 0x08A4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ReflectionAngle;                                          // 0x08B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ReflectionStanceStaminaCost;                              // 0x08B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              ReflectionStanceStaminaCostPerSecond;                     // 0x08B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08BC(0x0004) MISSED OFFSET
	TArray<class UAnimMontage*>                        ReflectMontages1P;                                        // 0x08C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<class UAnimMontage*>                        ReflectMontages3P;                                        // 0x08D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FMulticastScriptDelegate                    OnReflectionToggled;                                      // 0x08E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FMulticastScriptDelegate                    OnTargetInSwordRange;                                     // 0x08F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	bool                                               bReflectionModeActive;                                    // 0x0900(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0901(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.WeaponInstancePowerSword"));
		return ptr;
	}


	void Server_ToggleReflection(bool bToggle);
	void OnRep_ReflectionActive();
	void Multicast_BlockEffect();
	int GetAnimState();
};


// Class ProjectX.WeaponInstanceRadar
// 0x0030 (0x0878 - 0x0848)
class UWeaponInstanceRadar : public UWeaponInstance
{
public:
	struct FMulticastScriptDelegate                    OnRadarTriggeredEvent;                                    // 0x0848(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	float                                              Range;                                                    // 0x0858(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x085C(0x0004) MISSED OFFSET
	class UClass* /*UAfflictionInstance*/              VisibleAfflction;                                         // 0x0860(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // 0x0868(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.WeaponInstanceRadar"));
		return ptr;
	}


	float GetRange();
};


// Class ProjectX.WeaponInstanceSpawnableVehicle
// 0x0060 (0x08A8 - 0x0848)
class UWeaponInstanceSpawnableVehicle : public UWeaponInstance
{
public:
	struct FMulticastScriptDelegate                    ActiveSpawnableEvent;                                     // 0x0848(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AProjectXVehicle>             Vehicle;                                                  // 0x0858(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DeployableForwardOffset;                                  // 0x0860(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0864(0x0004) MISSED OFFSET
	class UClass* /*AProjectXVehicle*/                 VehicleClass;                                             // 0x0868(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DeployDistanceLeniency;                                   // 0x0870(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                MaxInstances;                                             // 0x0874(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              VehicleDeathDelay;                                        // 0x0878(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FVector                                     DisplayScale;                                             // 0x087C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0888(0x0018) MISSED OFFSET
	bool                                               bFireValidated;                                           // 0x08A0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bPersonalVehicle;                                         // 0x08A1(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDisabledVehicle;                                         // 0x08A2(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x5];                                       // 0x08A3(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.WeaponInstanceSpawnableVehicle"));
		return ptr;
	}


	void VehicleDestroyed();
	void Server_Toggle_SpawnActor(const struct FTransform& DeployTransform, bool OverrideValidation);
	void OnVehicleDestroyed();
	void OnRep_Vehicle();
	void OnExitedVehicle(class AProjectXVehicle* PreviousVehicle, class AProjectXCharacter* OldDriver);
	void OnDriverDied(class AActor* Victim, float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APlayerState* InstigatorPlayerState);
	void LeaveVehicle(bool bHold, float Duration);
	class UClass* /*AProjectXVehicle*/ GetVehicleClass();
	class AProjectXVehicle* GetVehicle();
	void GetSpawnTransform(struct FTransform* SpawnTransform);
	struct FVector GetDisplayScale();
	void DestroyVehicle(class AProjectXVehicle* PreviousVehicle);
};


// Class ProjectX.WeaponInstanceStatics
// 0x0000 (0x0028 - 0x0028)
class UWeaponInstanceStatics : public UGameplayStatics
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.WeaponInstanceStatics"));
		return ptr;
	}


	static struct FVector GetDirectionAroundCone(const struct FVector& Direction, float HorizontalConeHalfAngleRad, float VerticalConeHalfAngleRad, float Degrees);
	static class AActor* GetClosestTargetInCone(class AActor* Owner, const struct FTransform& ViewTransform, const struct FTransform& Origin, float Angle, float Range, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes);
	static class AActor* GetClosestTarget(class AActor* Owner, const struct FTransform& Origin, float Range, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes);
	static class UTightAimWeaponBillboard* CreateTightAimBillboard(class UObject* WorldContextObject, class UClass* /*UTightAimWeaponBillboard*/ TightAimBillboardClass, class UWeaponInstance* Weapon, TArray<struct FMaterialSpriteElement> NewElements, const struct FName& Socket);
};


// Class ProjectX.WeaponInstanceStealth
// 0x0000 (0x0860 - 0x0860)
class UWeaponInstanceStealth : public UWeaponInstanceToggleable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.WeaponInstanceStealth"));
		return ptr;
	}

};


// Class ProjectX.WeaponInstanceTrace
// 0x0030 (0x0908 - 0x08D8)
class UWeaponInstanceTrace : public UWeaponInstanceRanged
{
public:
	float                                              TraceRange;                                               // 0x08D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bPenetratingTrace;                                        // 0x08DC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08DD(0x0003) MISSED OFFSET
	int                                                TraceCount;                                               // 0x08E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bExtentTrace;                                             // 0x08E4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08E5(0x0003) MISSED OFFSET
	float                                              TraceExtent;                                              // 0x08E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bUseZeroExtentForWorldCollision;                          // 0x08EC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x3];                                       // 0x08ED(0x0003) MISSED OFFSET
	class UParticleSystem*                             TraceEmitter;                                             // 0x08F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FName                                       TraceEmitterSocket;                                       // 0x08F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UDataTable*                                  ImpactEffectTable;                                        // 0x0900(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.WeaponInstanceTrace"));
		return ptr;
	}


	void Server_Reliabe_TraceHit(TArray<struct FHitResult> HitResults);
};


// Class ProjectX.WeaponInstanceVehicle
// 0x0050 (0x0A30 - 0x09E0)
class UWeaponInstanceVehicle : public UWeaponInstanceProjectile
{
public:
	class AProjectXVehicle*                            VehicleOwner;                                             // 0x09E0(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	class UVehicleSeatComponent*                       SeatOwner;                                                // 0x09E8(0x0008) (CPF_ExportObject, CPF_Net, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bLockRotation;                                            // 0x09F0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x09F1(0x0003) MISSED OFFSET
	float                                              YawClamp;                                                 // 0x09F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              PitchClampUp;                                             // 0x09F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              PitchClampDown;                                           // 0x09FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bRotationToRate;                                          // 0x0A00(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bUseSmoothRotation;                                       // 0x0A01(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0A02(0x0002) MISSED OFFSET
	float                                              RotationRate;                                             // 0x0A04(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SmoothRotationRate;                                       // 0x0A08(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              SmoothThresholdDot;                                       // 0x0A0C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FRotator                                    RelativeRotation;                                         // 0x0A10(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	float                                              PitchRotationRate;                                        // 0x0A1C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              YawRotationRate;                                          // 0x0A20(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0A24(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.WeaponInstanceVehicle"));
		return ptr;
	}


	bool ShouldProcessViewRotation();
	class AProjectXVehicle* GetVehicle();
	class UVehicleSeatComponent* GetSeat();
};


// Class ProjectX.WeaponSpreadDataAsset
// 0x0010 (0x0040 - 0x0030)
class UWeaponSpreadDataAsset : public UPrimaryDataAsset
{
public:
	TArray<struct FBulletSpreadInfo>                   SpreadData;                                               // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ProjectX.WeaponSpreadDataAsset"));
		return ptr;
	}


	bool SaveDataToDisk(class UObject* Outer, const struct FString& SaveName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
