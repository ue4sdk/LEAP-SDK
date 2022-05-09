#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_DummyCharacter_ShootingRange_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DummyCharacter_ShootingRange.BP_DummyCharacter_ShootingRange_C
// 0x000C (0x0FB0 - 0x0FA4)
class ABP_DummyCharacter_ShootingRange_C : public ABP_TutorialTarget_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0FA4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FA8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DummyCharacter_ShootingRange.BP_DummyCharacter_ShootingRange_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo);
	void ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
	void ServerPointDamage(float Damage, const struct FVector& Location, const struct FVector& Normal, const struct FName& BoneName, class UPrimitiveComponent* HitComp);
	void ServerRadialDamage(float Damage, const struct FHitResult& HitInfo);
	void ExecuteUbergraph_BP_DummyCharacter_ShootingRange(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
