// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "W_GroundPoundAltitude_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_GroundPoundAltitude.W_GroundPoundAltitude_C.Finished_B0707F3D4F24EFAD3C3EF78414AB9DCD
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_GroundPoundAltitude_C::Finished_B0707F3D4F24EFAD3C3EF78414AB9DCD()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GroundPoundAltitude.W_GroundPoundAltitude_C.Finished_B0707F3D4F24EFAD3C3EF78414AB9DCD"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GroundPoundAltitude.W_GroundPoundAltitude_C.Finished_BFDF02264390385A1548D8BEF53596AC
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_GroundPoundAltitude_C::Finished_BFDF02264390385A1548D8BEF53596AC()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GroundPoundAltitude.W_GroundPoundAltitude_C.Finished_BFDF02264390385A1548D8BEF53596AC"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GroundPoundAltitude.W_GroundPoundAltitude_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UW_GroundPoundAltitude_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GroundPoundAltitude.W_GroundPoundAltitude_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GroundPoundAltitude.W_GroundPoundAltitude_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_GroundPoundAltitude_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GroundPoundAltitude.W_GroundPoundAltitude_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GroundPoundAltitude.W_GroundPoundAltitude_C.Cleanup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_GroundPoundAltitude_C::Cleanup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GroundPoundAltitude.W_GroundPoundAltitude_C.Cleanup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GroundPoundAltitude.W_GroundPoundAltitude_C.TogglePowerBar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UW_GroundPoundAltitude_C::TogglePowerBar(bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GroundPoundAltitude.W_GroundPoundAltitude_C.TogglePowerBar"));

	struct
	{
		bool                           bToggle;
	} params = {};

	params.bToggle = bToggle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function W_GroundPoundAltitude.W_GroundPoundAltitude_C.ExecuteUbergraph_W_GroundPoundAltitude
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UW_GroundPoundAltitude_C::ExecuteUbergraph_W_GroundPoundAltitude(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function W_GroundPoundAltitude.W_GroundPoundAltitude_C.ExecuteUbergraph_W_GroundPoundAltitude"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
