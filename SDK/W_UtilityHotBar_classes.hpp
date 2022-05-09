#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_UtilityHotBar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_UtilityHotBar.W_UtilityHotBar_C
// 0x0024 (0x0284 - 0x0260)
class UW_UtilityHotBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UHorizontalBox*                              UtilityHotBar;                                            // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_UtilityHotBar_Icon_C*                     W_UtilityHotBar_Icon;                                     // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UW_UtilityHotBar_Icon_C*                     W_UtilityHotBar_Icon_2;                                   // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	float                                              Spacing;                                                  // 0x0280(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_UtilityHotBar.W_UtilityHotBar_C"));
		return ptr;
	}


	void OnPawnAcquired_B7FD5A8249A78BDE54BB78A1A9D9F78A(class APawn* Pawn);
	void OnPawnAcquired_5F7A0DEF497C74775D4B91A9F6EA2512(class APawn* Pawn);
	void Construct();
	void RefreshAbilities(class APawn* Pawn);
	void OnWeaponAdded(class UWeaponInstance* Weapon);
	void OnWeaponRemoved();
	void ExecuteUbergraph_W_UtilityHotBar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
