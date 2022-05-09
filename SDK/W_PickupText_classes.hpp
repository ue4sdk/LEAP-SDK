#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_PickupText_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_PickupText.W_PickupText_C
// 0x0008 (0x0330 - 0x0328)
class UW_PickupText_C : public UW_TextElement_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_PickupText.W_PickupText_C"));
		return ptr;
	}


	void Init();
	void Interp(float Value);
	void Complete(float Value);
	void ExecuteUbergraph_W_PickupText(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
