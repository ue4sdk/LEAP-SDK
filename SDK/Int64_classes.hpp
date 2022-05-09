#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Int64_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Int64.Int64FunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UInt64FunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Int64.Int64FunctionLibrary"));
		return ptr;
	}


	static struct FInt64 MakeInt64(const struct FString& Int64);
	static struct FString Conv_Int64ToString(const struct FInt64& Int64);
	static int Conv_Int64ToInt32(const struct FInt64& Int64);
	static float Conv_Int64ToFloat(const struct FInt64& Int64);
	static struct FInt64 Conv_Int32ToInt64(int Int32);
	static struct FInt64 Conv_FloatToInt64(float Float);
};


// Class Int64.Int64MathLibrary
// 0x0000 (0x0028 - 0x0028)
class UInt64MathLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Int64.Int64MathLibrary"));
		return ptr;
	}


	static struct FInt64 Subtract_Int64Int64(const struct FInt64& A, const struct FInt64& B);
	static float Subtract_Int64Float(const struct FInt64& A, float B);
	static struct FInt64 Percent_Int64Int64(const struct FInt64& A, const struct FInt64& B);
	static bool NotEqual_Int64Int64(const struct FInt64& A, const struct FInt64& B);
	static struct FInt64 Multiply_Int64Int64(const struct FInt64& A, const struct FInt64& B);
	static float Multiply_Int64Float(const struct FInt64& A, float B);
	static struct FInt64 Min(const struct FInt64& A, const struct FInt64& B);
	static struct FInt64 Max(const struct FInt64& A, const struct FInt64& B);
	static bool LessEqual_Int64Int64(const struct FInt64& A, const struct FInt64& B);
	static bool Less_Int64Int64(const struct FInt64& A, const struct FInt64& B);
	static bool GreaterEqual_Int64Int64(const struct FInt64& A, const struct FInt64& B);
	static bool Greater_Int64Int64(const struct FInt64& A, const struct FInt64& B);
	static bool EqualEqual_Int64Int64(const struct FInt64& A, const struct FInt64& B);
	static struct FInt64 Divide_Int64Int64(const struct FInt64& A, const struct FInt64& B);
	static float Divide_Int64Float(const struct FInt64& A, float B);
	static struct FInt64 Add_Int64Int64(const struct FInt64& A, const struct FInt64& B);
	static float Add_Int64Float(const struct FInt64& A, float B);
	static struct FInt64 Abs_Int(const struct FInt64& A);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
