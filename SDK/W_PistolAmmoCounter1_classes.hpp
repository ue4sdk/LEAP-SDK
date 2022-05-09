#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PistolAmmoCounter1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_PistolAmmoCounter1.W_PistolAmmoCounter1_C
// 0x0010 (0x0270 - 0x0260)
class UW_PistolAmmoCounter1_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UTextBlock*                                  Ammo;                                                     // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_PistolAmmoCounter1.W_PistolAmmoCounter1_C"));
		return ptr;
	}


	void OnPawnAcquired_C5E6EA1848013D10BE2261A5333FD622(class APawn* Pawn);
	void AmmoChanged(int Amount);
	void Construct();
	void ExecuteUbergraph_W_PistolAmmoCounter1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
