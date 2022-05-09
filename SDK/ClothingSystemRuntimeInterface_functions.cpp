// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ClothingSystemRuntimeInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InStiffness                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UClothingSimulationInteractor::SetAnimDriveSpringStiffness(float InStiffness)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness"));

	struct
	{
		float                          InStiffness;
	} params = {};

	params.InStiffness = InStiffness;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UClothingSimulationInteractor::PhysicsAssetUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UClothingSimulationInteractor::GetSimulationTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UClothingSimulationInteractor::GetNumSubsteps()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UClothingSimulationInteractor::GetNumKinematicParticles()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UClothingSimulationInteractor::GetNumIterations()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UClothingSimulationInteractor::GetNumDynamicParticles()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UClothingSimulationInteractor::GetNumCloths()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 InVector                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UClothingSimulationInteractor::EnableGravityOverride(const struct FVector& InVector)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride"));

	struct
	{
		struct FVector                 InVector;
	} params = {};

	params.InVector = InVector;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UClothingSimulationInteractor::DisableGravityOverride()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UClothingSimulationInteractor::ClothConfigUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
