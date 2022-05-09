#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AnimationBudgetAllocator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary"));
		return ptr;
	}


	static void SetAnimationBudgetParameters(class UObject* WorldContextObject, const struct FAnimationBudgetAllocatorParameters& InParameters);
	static void EnableAnimationBudget(class UObject* WorldContextObject, bool bEnabled);
};


// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// 0x0030 (0x0F30 - 0x0F00)
class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
{
public:
	unsigned char                                      bAutoRegisterWithBudgetAllocator : 1;                     // 0x0F00(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0F01(0x0027) MISSED OFFSET
	unsigned char                                      bAutoCalculateSignificance : 1;                           // 0x0F28(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      bShouldUseActorRenderedFlag : 1;                          // 0x0F28(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0F29(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted"));
		return ptr;
	}


	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
