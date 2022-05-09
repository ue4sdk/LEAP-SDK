// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FOVShift_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FOVShift.FOVShift_C.BlueprintModifyCamera
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ViewLocation                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                ViewRotation                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          FOV                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 NewViewLocation                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                NewViewRotation                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          NewFOV                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFOVShift_C::BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FOVShift.FOVShift_C.BlueprintModifyCamera"));

	struct
	{
		float                          DeltaTime;
		struct FVector                 ViewLocation;
		struct FRotator                ViewRotation;
		float                          FOV;
		struct FVector                 NewViewLocation;
		struct FRotator                NewViewRotation;
		float                          NewFOV;
	} params = {};

	params.DeltaTime = DeltaTime;
	params.ViewLocation = ViewLocation;
	params.ViewRotation = ViewRotation;
	params.FOV = FOV;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewViewLocation != nullptr)
		*NewViewLocation = params.NewViewLocation;
	if (NewViewRotation != nullptr)
		*NewViewRotation = params.NewViewRotation;
	if (NewFOV != nullptr)
		*NewFOV = params.NewFOV;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
