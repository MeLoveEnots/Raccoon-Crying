
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

/// Class /Script/DiscordMessenger.DiscordMessengerBPLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDiscordMessengerBPLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DiscordMessenger.DiscordMessengerBPLibrary.SendDiscordMessage
	// void SendDiscordMessage(FString Webhook, FString Content, FDiscordEmbed& Embed, TArray<FString>& files);                 // [0xd83690] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Struct /Script/DiscordMessenger.DiscordAuthor
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FDiscordAuthor
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            URL;                                                        // 0x0010   (0x0010)  
	FString                                            IconUrl;                                                    // 0x0020   (0x0010)  
};

/// Struct /Script/DiscordMessenger.DiscordField
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FDiscordField
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            Value;                                                      // 0x0010   (0x0010)  
	bool                                               IsInline;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/DiscordMessenger.DiscordEmbed
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FDiscordEmbed
{ 
	FString                                            Title;                                                      // 0x0000   (0x0010)  
	FString                                            Description;                                                // 0x0010   (0x0010)  
	FLinearColor                                       Color;                                                      // 0x0020   (0x0010)  
	FString                                            URL;                                                        // 0x0030   (0x0010)  
	FDiscordAuthor                                     Author;                                                     // 0x0040   (0x0030)  
	TArray<FDiscordField>                              Fields;                                                     // 0x0070   (0x0010)  
	FString                                            Image;                                                      // 0x0080   (0x0010)  
	FString                                            Footer;                                                     // 0x0090   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UDiscordMessengerBPLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FDiscordAuthor) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FDiscordField) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FDiscordEmbed) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(offsetof(FDiscordAuthor, Name) == 0x0000);
static_assert(offsetof(FDiscordAuthor, URL) == 0x0010);
static_assert(offsetof(FDiscordAuthor, IconUrl) == 0x0020);
static_assert(offsetof(FDiscordField, Name) == 0x0000);
static_assert(offsetof(FDiscordField, Value) == 0x0010);
static_assert(offsetof(FDiscordEmbed, Title) == 0x0000);
static_assert(offsetof(FDiscordEmbed, Description) == 0x0010);
static_assert(offsetof(FDiscordEmbed, Color) == 0x0020);
static_assert(offsetof(FDiscordEmbed, URL) == 0x0030);
static_assert(offsetof(FDiscordEmbed, Author) == 0x0040);
static_assert(offsetof(FDiscordEmbed, Fields) == 0x0070);
static_assert(offsetof(FDiscordEmbed, Image) == 0x0080);
static_assert(offsetof(FDiscordEmbed, Footer) == 0x0090);
