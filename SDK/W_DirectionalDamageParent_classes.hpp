#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_DirectionalDamageParent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_DirectionalDamageParent.W_DirectionalDamageParent_C
// 0x0060 (0x02C0 - 0x0260)
class UW_DirectionalDamageParent_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class AProjectXGameState*                          GameState;                                                // 0x0268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<int64_t, class UW_DirectionalDamage3DIcon_C*> _3DArrows;                                                // 0x0270(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_DirectionalDamageParent.W_DirectionalDamageParent_C"));
		return ptr;
	}


	void ResolveShooter(class AActor* DamagingActor, class AActor** Actor);
	void OnPawnAcquired_39E59638420BA37AAF1B7F932C231A6D(class APawn* Pawn);
	void Construct();
	void OnHitNotify2D(float Damage, bool bHeadshot, class UClass* /*UDamageType*/ DamageType, class AActor* DamagingActor, float RadialDamageLerp);
	void OnHitNotify3D(float Damage, bool bHeadshot, class UClass* /*UDamageType*/ DamageType, class AActor* DamagingActor, float RadialDamageLerp);
	void CameraShake(float Damage, bool bHeadshot, class UClass* /*UDamageType*/ DamageType, class AActor* DamagingActor, float RadialDamageLerp);
	void Remove3DWidget(int64_t ID);
	void ExecuteUbergraph_W_DirectionalDamageParent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
