#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Qos.EQosResponseType
enum class EQosResponseType : uint8_t
{
	EQosResponseType__NoResponse   = 0,
	EQosResponseType__Success      = 1,
	EQosResponseType__Failure      = 2,
	EQosResponseType__EQosResponseType_MAX = 3
};


// Enum Qos.EQosCompletionResult
enum class EQosCompletionResult : uint8_t
{
	EQosCompletionResult__Invalid  = 0,
	EQosCompletionResult__Success  = 1,
	EQosCompletionResult__Failure  = 2,
	EQosCompletionResult__Canceled = 3,
	EQosCompletionResult__EQosCompletionResult_MAX = 4
};


// Enum Qos.EQosDatacenterResult
enum class EQosDatacenterResult : uint8_t
{
	EQosDatacenterResult__Invalid  = 0,
	EQosDatacenterResult__Success  = 1,
	EQosDatacenterResult__Incomplete = 2,
	EQosDatacenterResult__EQosDatacenterResult_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
