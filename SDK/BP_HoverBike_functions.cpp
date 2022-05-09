// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_HoverBike_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HoverBike.BP_HoverBike_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_HoverBike_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HoverBike.BP_HoverBike_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HoverBike.BP_HoverBike_C.Engine Start Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_HoverBike_C::Engine_Start_Update(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HoverBike.BP_HoverBike_C.Engine Start Update"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HoverBike.BP_HoverBike_C.Engine Start Done
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_HoverBike_C::Engine_Start_Done(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HoverBike.BP_HoverBike_C.Engine Start Done"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HoverBike.BP_HoverBike_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_HoverBike_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HoverBike.BP_HoverBike_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HoverBike.BP_HoverBike_C.OnJumped
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_HoverBike_C::OnJumped()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HoverBike.BP_HoverBike_C.OnJumped"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HoverBike.BP_HoverBike_C.OnBoostingChangedDelegate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bToggle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_HoverBike_C::OnBoostingChangedDelegate(bool bToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HoverBike.BP_HoverBike_C.OnBoostingChangedDelegate"));

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


// Function BP_HoverBike.BP_HoverBike_C.Play Dash Effect On Driver
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HoverBike_C::Play_Dash_Effect_On_Driver()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HoverBike.BP_HoverBike_C.Play Dash Effect On Driver"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HoverBike.BP_HoverBike_C.On Engine Start
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HoverBike_C::On_Engine_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HoverBike.BP_HoverBike_C.On Engine Start"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HoverBike.BP_HoverBike_C.On Engine Stop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HoverBike_C::On_Engine_Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HoverBike.BP_HoverBike_C.On Engine Stop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HoverBike.BP_HoverBike_C.Set Invalid Team Colour
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HoverBike_C::Set_Invalid_Team_Colour()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HoverBike.BP_HoverBike_C.Set Invalid Team Colour"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HoverBike.BP_HoverBike_C.Set Valid Team Colour
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HoverBike_C::Set_Valid_Team_Colour()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HoverBike.BP_HoverBike_C.Set Valid Team Colour"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HoverBike.BP_HoverBike_C.MULTICAST_JumpEffect
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HoverBike_C::MULTICAST_JumpEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HoverBike.BP_HoverBike_C.MULTICAST_JumpEffect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_HoverBike.BP_HoverBike_C.ExecuteUbergraph_BP_HoverBike
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_HoverBike_C::ExecuteUbergraph_BP_HoverBike(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HoverBike.BP_HoverBike_C.ExecuteUbergraph_BP_HoverBike"));

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
