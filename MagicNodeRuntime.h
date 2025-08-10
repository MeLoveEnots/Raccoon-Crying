
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/MagicNodeRuntime.EMGCSeverity
/// Size: 0x01 (1 bytes)
enum class EMGCSeverity : uint8_t
{
	EMGCSeverity__Fatal                                                              = 0,
	EMGCSeverity__Error                                                              = 1,
	EMGCSeverity__Warning                                                            = 2,
	EMGCSeverity__Info                                                               = 3
};

/// Class /Script/MagicNodeRuntime.MagicNode
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UMagicNode : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED


	/// Functions
	// Function /Script/MagicNodeRuntime.MagicNode.Finish
	// void Finish();                                                                                                           // [0xdb6690] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MagicNodeRuntime.MagicNodeScript
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UMagicNodeScript : public UObject
{ 
public:
	class UClass*                                      RuntimeScriptClass;                                         // 0x0028   (0x0008)  
};

/// Class /Script/MagicNodeRuntime.MGC_Settings
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMGC_Settings : public UObject
{ 
public:
};

/// Struct /Script/MagicNodeRuntime.MGC_SourceCode
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FMGC_SourceCode
{ 
	FString                                            Header;                                                     // 0x0000   (0x0010)  
	FString                                            Script;                                                     // 0x0010   (0x0010)  
	FString                                            Types;                                                      // 0x0020   (0x0010)  
	TArray<FString>                                    Includes;                                                   // 0x0030   (0x0010)  
	TArray<FString>                                    Macros;                                                     // 0x0040   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UMagicNode) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UMagicNodeScript) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UMGC_Settings) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMGC_SourceCode) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(offsetof(UMagicNodeScript, RuntimeScriptClass) == 0x0028);
static_assert(offsetof(FMGC_SourceCode, Header) == 0x0000);
static_assert(offsetof(FMGC_SourceCode, Script) == 0x0010);
static_assert(offsetof(FMGC_SourceCode, Types) == 0x0020);
static_assert(offsetof(FMGC_SourceCode, Includes) == 0x0030);
static_assert(offsetof(FMGC_SourceCode, Macros) == 0x0040);
