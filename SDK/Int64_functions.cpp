// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Int64_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Int64.Int64FunctionLibrary.MakeInt64
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 Int64                          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FInt64                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FInt64 UInt64FunctionLibrary::MakeInt64(const struct FString& Int64)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Int64.Int64FunctionLibrary.MakeInt64"));

	struct
	{
		struct FString                 Int64;
		struct FInt64                  ReturnValue;
	} params = {};

	params.Int64 = Int64;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Int64.Int64FunctionLibrary.Conv_Int64ToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FInt64                  Int64                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UInt64FunctionLibrary::Conv_Int64ToString(const struct FInt64& Int64)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Int64.Int64FunctionLibrary.Conv_Int64ToString"));

	struct
	{
		struct FInt64                  Int64;
		struct FString                 ReturnValue;
	} params = {};

	params.Int64 = Int64;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Int64.Int64FunctionLibrary.Conv_Int64ToInt32
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FInt64                  Int64                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UInt64FunctionLibrary::Conv_Int64ToInt32(const struct FInt64& Int64)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Int64.Int64FunctionLibrary.Conv_Int64ToInt32"));

	struct
	{
		struct FInt64                  Int64;
		int                            ReturnValue;
	} params = {};

	params.Int64 = Int64;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Int64.Int64FunctionLibrary.Conv_Int64ToFloat
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FInt64                  Int64                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UInt64FunctionLibrary::Conv_Int64ToFloat(const struct FInt64& Int64)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Int64.Int64FunctionLibrary.Conv_Int64ToFloat"));

	struct
	{
		struct FInt64                  Int64;
		float                          ReturnValue;
	} params = {};

	params.Int64 = Int64;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Int64.Int64FunctionLibrary.Conv_Int32ToInt64
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            Int32                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FInt64                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FInt64 UInt64FunctionLibrary::Conv_Int32ToInt64(int Int32)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Int64.Int64FunctionLibrary.Conv_Int32ToInt64"));

	struct
	{
		int                            Int32;
		struct FInt64                  ReturnValue;
	} params = {};

	params.Int32 = Int32;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Int64.Int64FunctionLibrary.Conv_FloatToInt64
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          Float                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FInt64                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FInt64 UInt64FunctionLibrary::Conv_FloatToInt64(float Float)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Int64.Int64FunctionLibrary.Conv_FloatToInt64"));

	struct
	{
		float                          Float;
		struct FInt64                  ReturnValue;
	} params = {};

	params.Float = Float;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Subtract_Int64Int64
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FInt64                  A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FInt64                  B                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FInt64                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FInt64 UInt64MathLibrary::Subtract_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Int64.Int64MathLibrary.Subtract_Int64Int64"));

	struct
	{
		struct FInt64                  A;
		struct FInt64                  B;
		struct FInt64                  ReturnValue;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Subtract_Int64Float
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FInt64                  A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          B                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UInt64MathLibrary::Subtract_Int64Float(const struct FInt64& A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Int64.Int64MathLibrary.Subtract_Int64Float"));

	struct
	{
		struct FInt64                  A;
		float                          B;
		float                          ReturnValue;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Percent_Int64Int64
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FInt64                  A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FInt64                  B                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FInt64                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FInt64 UInt64MathLibrary::Percent_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Int64.Int64MathLibrary.Percent_Int64Int64"));

	struct
	{
		struct FInt64                  A;
		struct FInt64                  B;
		struct FInt64                  ReturnValue;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.NotEqual_Int64Int64
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FInt64                  A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FInt64                  B                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UInt64MathLibrary::NotEqual_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Int64.Int64MathLibrary.NotEqual_Int64Int64"));

	struct
	{
		struct FInt64                  A;
		struct FInt64                  B;
		bool                           ReturnValue;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Multiply_Int64Int64
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FInt64                  A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FInt64                  B                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FInt64                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FInt64 UInt64MathLibrary::Multiply_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Int64.Int64MathLibrary.Multiply_Int64Int64"));

	struct
	{
		struct FInt64                  A;
		struct FInt64                  B;
		struct FInt64                  ReturnValue;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Multiply_Int64Float
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FInt64                  A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          B                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UInt64MathLibrary::Multiply_Int64Float(const struct FInt64& A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Int64.Int64MathLibrary.Multiply_Int64Float"));

	struct
	{
		struct FInt64                  A;
		float                          B;
		float                          ReturnValue;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Min
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FInt64                  A                              (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FInt64                  B                              (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FInt64                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FInt64 UInt64MathLibrary::Min(const struct FInt64& A, const struct FInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Int64.Int64MathLibrary.Min"));

	struct
	{
		struct FInt64                  A;
		struct FInt64                  B;
		struct FInt64                  ReturnValue;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Max
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FInt64                  A                              (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FInt64                  B                              (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FInt64                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FInt64 UInt64MathLibrary::Max(const struct FInt64& A, const struct FInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Int64.Int64MathLibrary.Max"));

	struct
	{
		struct FInt64                  A;
		struct FInt64                  B;
		struct FInt64                  ReturnValue;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.LessEqual_Int64Int64
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FInt64                  A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FInt64                  B                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UInt64MathLibrary::LessEqual_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Int64.Int64MathLibrary.LessEqual_Int64Int64"));

	struct
	{
		struct FInt64                  A;
		struct FInt64                  B;
		bool                           ReturnValue;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Less_Int64Int64
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FInt64                  A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FInt64                  B                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UInt64MathLibrary::Less_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Int64.Int64MathLibrary.Less_Int64Int64"));

	struct
	{
		struct FInt64                  A;
		struct FInt64                  B;
		bool                           ReturnValue;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.GreaterEqual_Int64Int64
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FInt64                  A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FInt64                  B                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UInt64MathLibrary::GreaterEqual_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Int64.Int64MathLibrary.GreaterEqual_Int64Int64"));

	struct
	{
		struct FInt64                  A;
		struct FInt64                  B;
		bool                           ReturnValue;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Greater_Int64Int64
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FInt64                  A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FInt64                  B                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UInt64MathLibrary::Greater_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Int64.Int64MathLibrary.Greater_Int64Int64"));

	struct
	{
		struct FInt64                  A;
		struct FInt64                  B;
		bool                           ReturnValue;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.EqualEqual_Int64Int64
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FInt64                  A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FInt64                  B                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UInt64MathLibrary::EqualEqual_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Int64.Int64MathLibrary.EqualEqual_Int64Int64"));

	struct
	{
		struct FInt64                  A;
		struct FInt64                  B;
		bool                           ReturnValue;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Divide_Int64Int64
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FInt64                  A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FInt64                  B                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FInt64                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FInt64 UInt64MathLibrary::Divide_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Int64.Int64MathLibrary.Divide_Int64Int64"));

	struct
	{
		struct FInt64                  A;
		struct FInt64                  B;
		struct FInt64                  ReturnValue;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Divide_Int64Float
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FInt64                  A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          B                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UInt64MathLibrary::Divide_Int64Float(const struct FInt64& A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Int64.Int64MathLibrary.Divide_Int64Float"));

	struct
	{
		struct FInt64                  A;
		float                          B;
		float                          ReturnValue;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Add_Int64Int64
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FInt64                  A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FInt64                  B                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FInt64                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FInt64 UInt64MathLibrary::Add_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Int64.Int64MathLibrary.Add_Int64Int64"));

	struct
	{
		struct FInt64                  A;
		struct FInt64                  B;
		struct FInt64                  ReturnValue;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Add_Int64Float
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FInt64                  A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          B                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UInt64MathLibrary::Add_Int64Float(const struct FInt64& A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Int64.Int64MathLibrary.Add_Int64Float"));

	struct
	{
		struct FInt64                  A;
		float                          B;
		float                          ReturnValue;
	} params = {};

	params.A = A;
	params.B = B;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Abs_Int
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FInt64                  A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FInt64                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FInt64 UInt64MathLibrary::Abs_Int(const struct FInt64& A)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Int64.Int64MathLibrary.Abs_Int"));

	struct
	{
		struct FInt64                  A;
		struct FInt64                  ReturnValue;
	} params = {};

	params.A = A;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
