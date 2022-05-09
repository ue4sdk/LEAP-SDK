#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_DeployableList_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_DeployableList.W_DeployableList_C
// 0x0028 (0x0288 - 0x0260)
class UW_DeployableList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UW_DeployableList_Icon_C*                    BP_DeployableList_Icon;                                   // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                DeployableList;                                           // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    DeployableDestroyed;                                      // 0x0278(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_DeployableList.W_DeployableList_C"));
		return ptr;
	}


	void OnPawnAcquired_3CF34D584BC1E44117B31B84B02C8153(class APawn* Pawn);
	void Construct();
	void OnDeployableSpawned(class ADeployable* Deployable);
	void OnDeployableDestroyed(class ADeployable* Deployable);
	void AddDeployableIcon(class ADeployable* Deployable);
	void RemoveDeployableIcon(class ADeployable* Deployable);
	void OnRemovedFromViewport();
	void ExecuteUbergraph_W_DeployableList(int EntryPoint);
	void DeployableDestroyed__DelegateSignature(class ADeployable* Deployable);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
