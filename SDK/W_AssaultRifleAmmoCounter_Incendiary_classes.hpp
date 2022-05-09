#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_AssaultRifleAmmoCounter_Incendiary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_AssaultRifleAmmoCounter_Incendiary.W_AssaultRifleAmmoCounter_Incendiary_C
// 0x0010 (0x0270 - 0x0260)
class UW_AssaultRifleAmmoCounter_Incendiary_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UTextBlock*                                  Ammo;                                                     // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_AssaultRifleAmmoCounter_Incendiary.W_AssaultRifleAmmoCounter_Incendiary_C"));
		return ptr;
	}


	struct FSlateColor Get_Ammo_Color_and_Opacity_0();
	void OnPawnAcquired_02FC813D4A08D66D4E1CF6A4B25601F7(class APawn* Pawn);
	void AmmoChanged(int Amount);
	void Construct();
	void ExecuteUbergraph_W_AssaultRifleAmmoCounter_Incendiary(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
