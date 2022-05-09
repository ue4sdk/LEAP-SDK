#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_SettingsEntry_Gamma_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_SettingsEntry_Gamma.W_SettingsEntry_Gamma_C
// 0x0008 (0x03E8 - 0x03E0)
class UW_SettingsEntry_Gamma_C : public UW_SettingsEntry_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_SettingsEntry_Gamma.W_SettingsEntry_Gamma_C"));
		return ptr;
	}


	void SliderUpdated(float Amount);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_SettingsEntry_Gamma(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
