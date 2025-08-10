
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/EasyWebsockets.WebSocket
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UWebSocket : public UObject
{ 
public:
	SDK_UNDEFINED(16,351) /* FMulticastInlineDelegate */ __um(OnWebSocketConnected);                               // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,352) /* FMulticastInlineDelegate */ __um(OnWebSocketConnectionError);                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,353) /* FMulticastInlineDelegate */ __um(OnWebSocketClosed);                                  // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,354) /* FMulticastInlineDelegate */ __um(OnWebSocketMessageReceived);                         // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,355) /* FMulticastInlineDelegate */ __um(OnWebSocketMessageSent);                             // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0078   (0x0010)  MISSED


	/// Functions
	// Function /Script/EasyWebsockets.WebSocket.SendMessage
	// void SendMessage(FString Message);                                                                                       // [0xd442f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EasyWebsockets.WebSocket.OnWebSocketMessageSent_Internal
	// void OnWebSocketMessageSent_Internal(FString Message);                                                                   // [0xd44250] Final|Native|Private 
	// Function /Script/EasyWebsockets.WebSocket.OnWebSocketMessageReceived_Internal
	// void OnWebSocketMessageReceived_Internal(FString Message);                                                               // [0xd441b0] Final|Native|Private 
	// Function /Script/EasyWebsockets.WebSocket.OnWebSocketConnectionError_Internal
	// void OnWebSocketConnectionError_Internal(FString Error);                                                                 // [0xd44110] Final|Native|Private 
	// Function /Script/EasyWebsockets.WebSocket.OnWebSocketConnected_Internal
	// void OnWebSocketConnected_Internal();                                                                                    // [0xd440f0] Final|Native|Private 
	// Function /Script/EasyWebsockets.WebSocket.OnWebSocketClosed_Internal
	// void OnWebSocketClosed_Internal(int32_t StatusCode, FString Reason, bool bWasClean);                                     // [0xd43fc0] Final|Native|Private 
	// Function /Script/EasyWebsockets.WebSocket.IsConnected
	// bool IsConnected();                                                                                                      // [0xd43f90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EasyWebsockets.WebSocket.Connect
	// void Connect();                                                                                                          // [0xd43b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/EasyWebsockets.WebSocket.Close
	// void Close(int32_t StatusCode, FString Reason);                                                                          // [0xd43a90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/EasyWebsockets.WebSocketFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UWebSocketFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/EasyWebsockets.WebSocketFunctionLibrary.CreateWebSocketWithHeaders
	// class UWebSocket* CreateWebSocketWithHeaders(FString ServerUrl, TMap<FString, FString> UpgradeHeaders, FString ServerProtocol); // [0xd43d10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/EasyWebsockets.WebSocketFunctionLibrary.CreateWebSocket
	// class UWebSocket* CreateWebSocket(FString ServerUrl, FString ServerProtocol);                                            // [0xd43b90] Final|Native|Static|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UWebSocket) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(UWebSocketFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
