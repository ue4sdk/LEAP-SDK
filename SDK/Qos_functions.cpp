// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Qos_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Qos.QosBeaconClient.ServerQosRequest
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FString                 InSessionId                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AQosBeaconClient::ServerQosRequest(const struct FString& InSessionId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Qos.QosBeaconClient.ServerQosRequest"));

	struct
	{
		struct FString                 InSessionId;
	} params = {};

	params.InSessionId = InSessionId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Qos.QosBeaconClient.ClientQosResponse
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// EQosResponseType               Response                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AQosBeaconClient::ClientQosResponse(EQosResponseType Response)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Qos.QosBeaconClient.ClientQosResponse"));

	struct
	{
		EQosResponseType               Response;
	} params = {};

	params.Response = Response;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
