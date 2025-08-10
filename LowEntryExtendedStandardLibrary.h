
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MediaAssets
/// dependency: SlateCore

#pragma pack(push, 0x1)

/// Enum /Script/LowEntryExtendedStandardLibrary.ELowEntryBatteryState
/// Size: 0x01 (1 bytes)
enum class ELowEntryBatteryState : uint8_t
{
	ELowEntryBatteryState__Charging                                                  = 0,
	ELowEntryBatteryState__Discharging                                               = 1,
	ELowEntryBatteryState__Full                                                      = 2,
	ELowEntryBatteryState__NotCharging                                               = 3,
	ELowEntryBatteryState__Unknown                                                   = 4
};

/// Enum /Script/LowEntryExtendedStandardLibrary.ELowEntryExtendedStandardLibrary0to9
/// Size: 0x01 (1 bytes)
enum class ELowEntryExtendedStandardLibrary0to9 : uint8_t
{
	ELowEntryExtendedStandardLibrary0to9___0_                                        = 0,
	ELowEntryExtendedStandardLibrary0to9___1_                                        = 1,
	ELowEntryExtendedStandardLibrary0to9___2_                                        = 2,
	ELowEntryExtendedStandardLibrary0to9___3_                                        = 3,
	ELowEntryExtendedStandardLibrary0to9___4_                                        = 4,
	ELowEntryExtendedStandardLibrary0to9___5_                                        = 5,
	ELowEntryExtendedStandardLibrary0to9___6_                                        = 6,
	ELowEntryExtendedStandardLibrary0to9___7_                                        = 7,
	ELowEntryExtendedStandardLibrary0to9___8_                                        = 8,
	ELowEntryExtendedStandardLibrary0to9___9_                                        = 9
};

/// Enum /Script/LowEntryExtendedStandardLibrary.ELowEntryExtendedStandardLibrary1to10other
/// Size: 0x01 (1 bytes)
enum class ELowEntryExtendedStandardLibrary1to10other : uint8_t
{
	ELowEntryExtendedStandardLibrary1to10other___1_                                  = 1,
	ELowEntryExtendedStandardLibrary1to10other___2_                                  = 2,
	ELowEntryExtendedStandardLibrary1to10other___3_                                  = 3,
	ELowEntryExtendedStandardLibrary1to10other___4_                                  = 4,
	ELowEntryExtendedStandardLibrary1to10other___5_                                  = 5,
	ELowEntryExtendedStandardLibrary1to10other___6_                                  = 6,
	ELowEntryExtendedStandardLibrary1to10other___7_                                  = 7,
	ELowEntryExtendedStandardLibrary1to10other___8_                                  = 8,
	ELowEntryExtendedStandardLibrary1to10other___9_                                  = 9,
	ELowEntryExtendedStandardLibrary1to10other___10_                                 = 10,
	ELowEntryExtendedStandardLibrary1to10other__Other                                = 0
};

/// Enum /Script/LowEntryExtendedStandardLibrary.ELowEntryExtendedStandardLibraryTrueOrFalse
/// Size: 0x01 (1 bytes)
enum class ELowEntryExtendedStandardLibraryTrueOrFalse : uint8_t
{
	ELowEntryExtendedStandardLibraryTrueOrFalse___True_                              = 0,
	ELowEntryExtendedStandardLibraryTrueOrFalse___False_                             = 1
};

/// Enum /Script/LowEntryExtendedStandardLibrary.ELowEntryHmacAlgorithm
/// Size: 0x01 (1 bytes)
enum class ELowEntryHmacAlgorithm : uint8_t
{
	ELowEntryHmacAlgorithm__MD5                                                      = 0,
	ELowEntryHmacAlgorithm__SHA1                                                     = 1,
	ELowEntryHmacAlgorithm__SHA256                                                   = 2,
	ELowEntryHmacAlgorithm__SHA512                                                   = 3
};

/// Enum /Script/LowEntryExtendedStandardLibrary.ELowEntryImageFormat
/// Size: 0x01 (1 bytes)
enum class ELowEntryImageFormat : uint8_t
{
	ELowEntryImageFormat__Invalid                                                    = 0,
	ELowEntryImageFormat__PNG                                                        = 1,
	ELowEntryImageFormat__JPEG                                                       = 2,
	ELowEntryImageFormat__GrayscaleJPEG                                              = 3,
	ELowEntryImageFormat__BMP                                                        = 4,
	ELowEntryImageFormat__ICO                                                        = 5,
	ELowEntryImageFormat__EXR                                                        = 6,
	ELowEntryImageFormat__ICNS                                                       = 7
};

/// Enum /Script/LowEntryExtendedStandardLibrary.ELowEntryRGBFormat
/// Size: 0x01 (1 bytes)
enum class ELowEntryRGBFormat : uint8_t
{
	ELowEntryRGBFormat__Invalid                                                      = 0,
	ELowEntryRGBFormat__RGBA                                                         = 1,
	ELowEntryRGBFormat__BGRA                                                         = 2,
	ELowEntryRGBFormat__Gray                                                         = 3
};

/// Enum /Script/LowEntryExtendedStandardLibrary.ELowEntrySplitScreenType
/// Size: 0x01 (1 bytes)
enum class ELowEntrySplitScreenType : uint8_t
{
	ELowEntrySplitScreenType__None                                                   = 0,
	ELowEntrySplitScreenType__TwoPlayer_Horizontal                                   = 1,
	ELowEntrySplitScreenType__TwoPlayer_Vertical                                     = 2,
	ELowEntrySplitScreenType__ThreePlayer_FavorTop                                   = 3,
	ELowEntrySplitScreenType__ThreePlayer_FavorBottom                                = 4,
	ELowEntrySplitScreenType__ThreePlayer_Vertical                                   = 5,
	ELowEntrySplitScreenType__FourPlayer_Grid                                        = 6,
	ELowEntrySplitScreenType__FourPlayer_Vertical                                    = 7
};

/// Enum /Script/LowEntryExtendedStandardLibrary.ELowEntrySplitScreenTypeThreePlayers
/// Size: 0x01 (1 bytes)
enum class ELowEntrySplitScreenTypeThreePlayers : uint8_t
{
	ELowEntrySplitScreenTypeThreePlayers__FavorTop                                   = 0,
	ELowEntrySplitScreenTypeThreePlayers__FavorBottom                                = 1
};

/// Enum /Script/LowEntryExtendedStandardLibrary.ELowEntrySplitScreenTypeTwoPlayers
/// Size: 0x01 (1 bytes)
enum class ELowEntrySplitScreenTypeTwoPlayers : uint8_t
{
	ELowEntrySplitScreenTypeTwoPlayers__Horizontal                                   = 0,
	ELowEntrySplitScreenTypeTwoPlayers__Vertical                                     = 1
};

/// Class /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataEntry
/// Size: 0x00E8 (232 bytes) (0x000028 - 0x0000E8) align 8 MaxSize: 0x00E8
class ULowEntryBitDataEntry : public UObject
{ 
public:
	char                                               Type;                                                       // 0x0028   (0x0001)  
	char                                               ByteValue;                                                  // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            IntegerValue;                                               // 0x002C   (0x0004)  
	int64_t                                            LongValue;                                                  // 0x0030   (0x0008)  
	class ULowEntryLong*                               LongBytesValue;                                             // 0x0038   (0x0008)  
	float                                              FloatValue;                                                 // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	class ULowEntryDouble*                             DoubleBytesValue;                                           // 0x0048   (0x0008)  
	bool                                               BooleanValue;                                               // 0x0050   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0051   (0x0007)  MISSED
	FString                                            StringUtf8Value;                                            // 0x0058   (0x0010)  
	TArray<char>                                       ByteArrayValue;                                             // 0x0068   (0x0010)  
	TArray<int32_t>                                    IntegerArrayValue;                                          // 0x0078   (0x0010)  
	TArray<int64_t>                                    LongArrayValue;                                             // 0x0088   (0x0010)  
	TArray<class ULowEntryLong*>                       LongBytesArrayValue;                                        // 0x0098   (0x0010)  
	TArray<float>                                      FloatArrayValue;                                            // 0x00A8   (0x0010)  
	TArray<class ULowEntryDouble*>                     DoubleBytesArrayValue;                                      // 0x00B8   (0x0010)  
	TArray<bool>                                       BooleanArrayValue;                                          // 0x00C8   (0x0010)  
	TArray<FString>                                    StringUtf8ArrayValue;                                       // 0x00D8   (0x0010)  
};

/// Class /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class ULowEntryBitDataReader : public UObject
{ 
public:
	TArray<char>                                       bytes;                                                      // 0x0028   (0x0010)  
	int32_t                                            Position;                                                   // 0x0038   (0x0004)  
	char                                               CurrentByte;                                                // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x003D   (0x0003)  MISSED
	int32_t                                            CurrentBytePosition;                                        // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0044   (0x0004)  MISSED


	/// Functions
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.SetPosition
	// void SetPosition(int32_t Position_);                                                                                     // [0x81d8f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Reset
	// void Reset();                                                                                                            // [0x81d8d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Remaining
	// int32_t Remaining();                                                                                                     // [0x81d8a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetStringUtf8Array
	// TArray<FString> GetStringUtf8Array();                                                                                    // [0x81d7c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetStringUtf8
	// FString GetStringUtf8();                                                                                                 // [0x81d740] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger3Array
	// TArray<int32_t> GetPositiveInteger3Array();                                                                              // [0x81d6c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger3
	// int32_t GetPositiveInteger3();                                                                                           // [0x81d690] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger2Array
	// TArray<int32_t> GetPositiveInteger2Array();                                                                              // [0x81d610] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger2
	// int32_t GetPositiveInteger2();                                                                                           // [0x81d5e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger1Array
	// TArray<int32_t> GetPositiveInteger1Array();                                                                              // [0x81d560] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger1
	// int32_t GetPositiveInteger1();                                                                                           // [0x81d530] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPosition
	// int32_t GetPosition();                                                                                                   // [0x81d500] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongBytesArray
	// TArray<ULowEntryLong*> GetLongBytesArray();                                                                              // [0x81d480] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongBytes
	// class ULowEntryLong* GetLongBytes();                                                                                     // [0x81d450] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongArray
	// TArray<int64_t> GetLongArray();                                                                                          // [0x81d3d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLong
	// int64_t GetLong();                                                                                                       // [0x81d3a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerMostSignificantBits
	// int32_t GetIntegerMostSignificantBits(int32_t BitCount);                                                                 // [0x81d300] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerLeastSignificantBits
	// int32_t GetIntegerLeastSignificantBits(int32_t BitCount);                                                                // [0x81d260] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArrayMostSignificantBits
	// TArray<int32_t> GetIntegerArrayMostSignificantBits(int32_t BitCount);                                                    // [0x81d180] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArrayLeastSignificantBits
	// TArray<int32_t> GetIntegerArrayLeastSignificantBits(int32_t BitCount);                                                   // [0x81d0a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArray
	// TArray<int32_t> GetIntegerArray();                                                                                       // [0x81cff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetInteger
	// int32_t GetInteger();                                                                                                    // [0x81d070] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetFloatArray
	// TArray<float> GetFloatArray();                                                                                           // [0x81cff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetFloat
	// float GetFloat();                                                                                                        // [0x81cfc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleBytesArray
	// TArray<ULowEntryDouble*> GetDoubleBytesArray();                                                                          // [0x81cf40] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleBytes
	// class ULowEntryDouble* GetDoubleBytes();                                                                                 // [0x81cf10] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetClone
	// class ULowEntryBitDataReader* GetClone();                                                                                // [0x81cee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteMostSignificantBits
	// char GetByteMostSignificantBits(int32_t BitCount);                                                                       // [0x81ce40] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteLeastSignificantBits
	// char GetByteLeastSignificantBits(int32_t BitCount);                                                                      // [0x81cda0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArrayMostSignificantBits
	// TArray<char> GetByteArrayMostSignificantBits(int32_t BitCount);                                                          // [0x81ccc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArrayLeastSignificantBits
	// TArray<char> GetByteArrayLeastSignificantBits(int32_t BitCount);                                                         // [0x81cbe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArray
	// TArray<char> GetByteArray();                                                                                             // [0x81cb60] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByte
	// char GetByte();                                                                                                          // [0x81cb30] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBooleanArray
	// TArray<bool> GetBooleanArray();                                                                                          // [0x81cab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBoolean
	// bool GetBoolean();                                                                                                       // [0x81ca80] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBitArray
	// TArray<bool> GetBitArray();                                                                                              // [0x81cab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBit
	// bool GetBit();                                                                                                           // [0x81ca80] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Empty
	// void Empty();                                                                                                            // [0x81ca60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class ULowEntryBitDataWriter : public UObject
{ 
public:
	TArray<char>                                       bytes;                                                      // 0x0028   (0x0010)  
	char                                               CurrentByte;                                                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            CurrentBytePosition;                                        // 0x003C   (0x0004)  


	/// Functions
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddStringUtf8Array
	// void AddStringUtf8Array(TArray<FString>& Value);                                                                         // [0x81c990] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddStringUtf8
	// void AddStringUtf8(FString Value);                                                                                       // [0x81c8f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger3Array
	// void AddPositiveInteger3Array(TArray<int32_t>& Value);                                                                   // [0x81c840] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger3
	// void AddPositiveInteger3(int32_t Value);                                                                                 // [0x81c7b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger2Array
	// void AddPositiveInteger2Array(TArray<int32_t>& Value);                                                                   // [0x81c700] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger2
	// void AddPositiveInteger2(int32_t Value);                                                                                 // [0x81c670] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger1Array
	// void AddPositiveInteger1Array(TArray<int32_t>& Value);                                                                   // [0x81c5c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger1
	// void AddPositiveInteger1(int32_t Value);                                                                                 // [0x81c530] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongBytesArray
	// void AddLongBytesArray(TArray<ULowEntryLong*>& Value);                                                                   // [0x81bd30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongBytes
	// void AddLongBytes(class ULowEntryLong* Value);                                                                           // [0x81bca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongArray
	// void AddLongArray(TArray<int64_t>& Value);                                                                               // [0x81c480] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLong
	// void AddLong(int64_t Value);                                                                                             // [0x81c3f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerMostSignificantBits
	// void AddIntegerMostSignificantBits(int32_t Value, int32_t BitCount);                                                     // [0x81c320] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerLeastSignificantBits
	// void AddIntegerLeastSignificantBits(int32_t Value, int32_t BitCount);                                                    // [0x81c250] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArrayMostSignificantBits
	// void AddIntegerArrayMostSignificantBits(TArray<int32_t>& Value, int32_t BitCount);                                       // [0x81c150] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArrayLeastSignificantBits
	// void AddIntegerArrayLeastSignificantBits(TArray<int32_t>& Value, int32_t BitCount);                                      // [0x81c050] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArray
	// void AddIntegerArray(TArray<int32_t>& Value);                                                                            // [0x81bfa0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddInteger
	// void AddInteger(int32_t Value);                                                                                          // [0x81bf10] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddFloatArray
	// void AddFloatArray(TArray<float>& Value);                                                                                // [0x81be60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddFloat
	// void AddFloat(float Value);                                                                                              // [0x81bde0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleBytesArray
	// void AddDoubleBytesArray(TArray<ULowEntryDouble*>& Value);                                                               // [0x81bd30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleBytes
	// void AddDoubleBytes(class ULowEntryDouble* Value);                                                                       // [0x81bca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteMostSignificantBits
	// void AddByteMostSignificantBits(char Value, int32_t BitCount);                                                           // [0x81bbd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteLeastSignificantBits
	// void AddByteLeastSignificantBits(char Value, int32_t BitCount);                                                          // [0x81bb00] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArrayMostSignificantBits
	// void AddByteArrayMostSignificantBits(TArray<char>& Value, int32_t BitCount);                                             // [0x81ba00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArrayLeastSignificantBits
	// void AddByteArrayLeastSignificantBits(TArray<char>& Value, int32_t BitCount);                                            // [0x81b900] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArray
	// void AddByteArray(TArray<char>& Value);                                                                                  // [0x81b850] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByte
	// void AddByte(char Value);                                                                                                // [0x81b7d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBooleanArray
	// void AddBooleanArray(TArray<bool>& Value);                                                                               // [0x81b720] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBoolean
	// void AddBoolean(bool Value);                                                                                             // [0x81b690] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBitArray
	// void AddBitArray(TArray<bool>& Value);                                                                                   // [0x81b720] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBit
	// void AddBit(bool Value);                                                                                                 // [0x81b690] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LowEntryExtendedStandardLibrary.LowEntryByteArray
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class ULowEntryByteArray : public UObject
{ 
public:
	TArray<char>                                       ByteArray;                                                  // 0x0028   (0x0010)  
};

/// Class /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataEntry
/// Size: 0x00E8 (232 bytes) (0x000028 - 0x0000E8) align 8 MaxSize: 0x00E8
class ULowEntryByteDataEntry : public UObject
{ 
public:
	char                                               Type;                                                       // 0x0028   (0x0001)  
	char                                               ByteValue;                                                  // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            IntegerValue;                                               // 0x002C   (0x0004)  
	int64_t                                            LongValue;                                                  // 0x0030   (0x0008)  
	class ULowEntryLong*                               LongBytesValue;                                             // 0x0038   (0x0008)  
	float                                              FloatValue;                                                 // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	class ULowEntryDouble*                             DoubleBytesValue;                                           // 0x0048   (0x0008)  
	bool                                               BooleanValue;                                               // 0x0050   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0051   (0x0007)  MISSED
	FString                                            StringUtf8Value;                                            // 0x0058   (0x0010)  
	TArray<char>                                       ByteArrayValue;                                             // 0x0068   (0x0010)  
	TArray<int32_t>                                    IntegerArrayValue;                                          // 0x0078   (0x0010)  
	TArray<int64_t>                                    LongArrayValue;                                             // 0x0088   (0x0010)  
	TArray<class ULowEntryLong*>                       LongBytesArrayValue;                                        // 0x0098   (0x0010)  
	TArray<float>                                      FloatArrayValue;                                            // 0x00A8   (0x0010)  
	TArray<class ULowEntryDouble*>                     DoubleBytesArrayValue;                                      // 0x00B8   (0x0010)  
	TArray<bool>                                       BooleanArrayValue;                                          // 0x00C8   (0x0010)  
	TArray<FString>                                    StringUtf8ArrayValue;                                       // 0x00D8   (0x0010)  
};

/// Class /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class ULowEntryByteDataReader : public UObject
{ 
public:
	TArray<char>                                       bytes;                                                      // 0x0028   (0x0010)  
	int32_t                                            Position;                                                   // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED


	/// Functions
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.SetPosition
	// void SetPosition(int32_t Position_);                                                                                     // [0x834090] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Reset
	// void Reset();                                                                                                            // [0x832d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Remaining
	// int32_t Remaining();                                                                                                     // [0x8328b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetStringUtf8Array
	// TArray<FString> GetStringUtf8Array();                                                                                    // [0x82ce00] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetStringUtf8
	// FString GetStringUtf8();                                                                                                 // [0x82cd80] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger3Array
	// TArray<int32_t> GetPositiveInteger3Array();                                                                              // [0x82c920] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger3
	// int32_t GetPositiveInteger3();                                                                                           // [0x82c8f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger2Array
	// TArray<int32_t> GetPositiveInteger2Array();                                                                              // [0x82c870] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger2
	// int32_t GetPositiveInteger2();                                                                                           // [0x82c840] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger1Array
	// TArray<int32_t> GetPositiveInteger1Array();                                                                              // [0x82c7c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger1
	// int32_t GetPositiveInteger1();                                                                                           // [0x82c790] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPosition
	// int32_t GetPosition();                                                                                                   // [0x82c760] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongBytesArray
	// TArray<ULowEntryLong*> GetLongBytesArray();                                                                              // [0x82c480] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongBytes
	// class ULowEntryLong* GetLongBytes();                                                                                     // [0x82c450] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongArray
	// TArray<int64_t> GetLongArray();                                                                                          // [0x82c3d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLong
	// int64_t GetLong();                                                                                                       // [0x82c3a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetIntegerArray
	// TArray<int32_t> GetIntegerArray();                                                                                       // [0x82c220] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetInteger
	// int32_t GetInteger();                                                                                                    // [0x82c1f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetFloatArray
	// TArray<float> GetFloatArray();                                                                                           // [0x82c0a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetFloat
	// float GetFloat();                                                                                                        // [0x82c070] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleBytesArray
	// TArray<ULowEntryDouble*> GetDoubleBytesArray();                                                                          // [0x82bff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleBytes
	// class ULowEntryDouble* GetDoubleBytes();                                                                                 // [0x82bfc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetClone
	// class ULowEntryByteDataReader* GetClone();                                                                               // [0x82bf90] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetByteArray
	// TArray<char> GetByteArray();                                                                                             // [0x82bc50] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetByte
	// char GetByte();                                                                                                          // [0x82bc20] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetBooleanArray
	// TArray<bool> GetBooleanArray();                                                                                          // [0x82bba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetBoolean
	// bool GetBoolean();                                                                                                       // [0x82bb70] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Empty
	// void Empty();                                                                                                            // [0x82ac90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataWriter
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class ULowEntryByteDataWriter : public UObject
{ 
public:
	TArray<char>                                       bytes;                                                      // 0x0028   (0x0010)  


	/// Functions
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddStringUtf8Array
	// void AddStringUtf8Array(TArray<FString>& Value);                                                                         // [0x823880] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddStringUtf8
	// void AddStringUtf8(FString Value);                                                                                       // [0x8237e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger3Array
	// void AddPositiveInteger3Array(TArray<int32_t>& Value);                                                                   // [0x823730] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger3
	// void AddPositiveInteger3(int32_t Value);                                                                                 // [0x8236a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger2Array
	// void AddPositiveInteger2Array(TArray<int32_t>& Value);                                                                   // [0x8235f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger2
	// void AddPositiveInteger2(int32_t Value);                                                                                 // [0x823560] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger1Array
	// void AddPositiveInteger1Array(TArray<int32_t>& Value);                                                                   // [0x8234b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger1
	// void AddPositiveInteger1(int32_t Value);                                                                                 // [0x823420] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongBytesArray
	// void AddLongBytesArray(TArray<ULowEntryLong*>& Value);                                                                   // [0x822fc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongBytes
	// void AddLongBytes(class ULowEntryLong* Value);                                                                           // [0x822f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongArray
	// void AddLongArray(TArray<int64_t>& Value);                                                                               // [0x823370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLong
	// void AddLong(int64_t Value);                                                                                             // [0x8232e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddIntegerArray
	// void AddIntegerArray(TArray<int32_t>& Value);                                                                            // [0x823230] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddInteger
	// void AddInteger(int32_t Value);                                                                                          // [0x8231a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddFloatArray
	// void AddFloatArray(TArray<float>& Value);                                                                                // [0x8230f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddFloat
	// void AddFloat(float Value);                                                                                              // [0x823070] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleBytesArray
	// void AddDoubleBytesArray(TArray<ULowEntryDouble*>& Value);                                                               // [0x822fc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleBytes
	// void AddDoubleBytes(class ULowEntryDouble* Value);                                                                       // [0x822f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddByteArray
	// void AddByteArray(TArray<char>& Value);                                                                                  // [0x822e80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddByte
	// void AddByte(char Value);                                                                                                // [0x822e00] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddBooleanArray
	// void AddBooleanArray(TArray<bool>& Value);                                                                               // [0x822d50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddBoolean
	// void AddBoolean(bool Value);                                                                                             // [0x822cc0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LowEntryExtendedStandardLibrary.LowEntryDouble
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class ULowEntryDouble : public UObject
{ 
public:
	TArray<char>                                       bytes;                                                      // 0x0028   (0x0010)  


	/// Functions
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryDouble.SetBytes
	// void SetBytes(TArray<char>& ByteArray, int32_t Index, int32_t Length);                                                   // [0x833ca0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryDouble.LongBytes_LessThan
	// bool LongBytes_LessThan(class ULowEntryLong* Value);                                                                     // [0x8304d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryDouble.LongBytes_GreaterThan
	// bool LongBytes_GreaterThan(class ULowEntryLong* Value);                                                                  // [0x830430] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryDouble.Integer_LessThan
	// bool Integer_LessThan(int32_t Value);                                                                                    // [0x82f0e0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryDouble.Integer_GreaterThan
	// bool Integer_GreaterThan(int32_t Value);                                                                                 // [0x82f040] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryDouble.GetBytes
	// TArray<char> GetBytes();                                                                                                 // [0x82bdd0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Subtract
	// void Float_Subtract(float Value);                                                                                        // [0x82b2d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryDouble.Float_LessThan
	// bool Float_LessThan(float Value);                                                                                        // [0x82b240] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryDouble.Float_GreaterThan
	// bool Float_GreaterThan(float Value);                                                                                     // [0x82b1b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Equals
	// bool Float_Equals(float Value);                                                                                          // [0x82b120] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Add
	// void Float_Add(float Value);                                                                                             // [0x82b0a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Subtract
	// void DoubleBytes_Subtract(class ULowEntryDouble* Value);                                                                 // [0x82abd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_LessThan
	// bool DoubleBytes_LessThan(class ULowEntryDouble* Value);                                                                 // [0x82ab30] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_GreaterThan
	// bool DoubleBytes_GreaterThan(class ULowEntryDouble* Value);                                                              // [0x82aa90] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Equals
	// bool DoubleBytes_Equals(class ULowEntryDouble* Value);                                                                   // [0x82a9f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Add
	// void DoubleBytes_Add(class ULowEntryDouble* Value);                                                                      // [0x82a960] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryDouble.CreateClone
	// class ULowEntryDouble* CreateClone();                                                                                    // [0x82a120] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryDouble.CastToString
	// FString CastToString(int32_t MinFractionalDigits);                                                                       // [0x829a70] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryDouble.CastToLongBytes
	// class ULowEntryLong* CastToLongBytes();                                                                                  // [0x829a40] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/LowEntryExtendedStandardLibrary.LowEntryExecutionQueue
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class ULowEntryExecutionQueue : public UObject
{ 
public:
	int32_t                                            Count;                                                      // 0x0028   (0x0004)  
	bool                                               Next;                                                       // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Class /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULowEntryExtendedStandardLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.XboxOnePlatform
	// bool XboxOnePlatform();                                                                                                  // [0x823950] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WithEditor
	// bool WithEditor();                                                                                                       // [0x823950] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsRtPlatform
	// bool WindowsRtPlatform();                                                                                                // [0x823950] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsRtArmPlatform
	// bool WindowsRtArmPlatform();                                                                                             // [0x823950] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsPlatform
	// bool WindowsPlatform();                                                                                                  // [0x82a850] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsNewlineCharacter
	// FString WindowsNewlineCharacter();                                                                                       // [0x836890] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Windows64Platform
	// bool Windows64Platform();                                                                                                // [0x82a850] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Windows32Platform
	// bool Windows32Platform();                                                                                                // [0x823950] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TickSeconds
	// void TickSeconds(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, int32_t ticks, float SecondsInterval, int32_t& Tick); // [0x8366d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TickFrames
	// void TickFrames(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, int32_t ticks, int32_t FramesInterval, int32_t& Tick); // [0x836520] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TextureUpdateResource
	// void TextureUpdateResource(class UTexture* Texture);                                                                     // [0x8364a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TextureRenderTarget2DToPixels
	// void TextureRenderTarget2DToPixels(class UTextureRenderTarget2D* TextureRenderTarget2D, int32_t& Width, int32_t& Height, TArray<FColor>& Pixels); // [0x836320] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TextureRenderTarget2DToBytes
	// void TextureRenderTarget2DToBytes(class UTextureRenderTarget2D* TextureRenderTarget2D, ELowEntryImageFormat ImageFormat, TArray<char>& ByteArray, int32_t CompressionQuality); // [0x8361b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Texture2DToPixels
	// void Texture2DToPixels(class UTexture2D* Texture2D, int32_t& Width, int32_t& Height, TArray<FColor>& Pixels);            // [0x836030] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Texture2DToBytes
	// void Texture2DToBytes(class UTexture2D* Texture2D, ELowEntryImageFormat ImageFormat, TArray<char>& ByteArray, int32_t CompressionQuality); // [0x835ec0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TestBuild
	// bool TestBuild();                                                                                                        // [0x823950] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TabCharacter
	// FString TabCharacter();                                                                                                  // [0x835e40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SwitchPlatform
	// bool SwitchPlatform();                                                                                                   // [0x823950] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.StringToBytesUtf8
	// TArray<char> StringToBytesUtf8(FString String);                                                                          // [0x835d60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SplitBytes
	// void SplitBytes(TArray<char>& ByteArray, int32_t LengthA, TArray<char>& A, TArray<char>& B);                             // [0x835bc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_SetVolume
	// void SoundClass_SetVolume(class USoundClass* SoundClass, float Volume);                                                  // [0x835b00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_SetPitch
	// void SoundClass_SetPitch(class USoundClass* SoundClass, float Pitch);                                                    // [0x835a40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_GetVolume
	// float SoundClass_GetVolume(class USoundClass* SoundClass);                                                               // [0x8359b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_GetPitch
	// float SoundClass_GetPitch(class USoundClass* SoundClass);                                                                // [0x835920] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortTimespanArrayDirectly
	// void SortTimespanArrayDirectly(TArray<FTimespan>& TimespanArray, bool Reversed);                                         // [0x834e60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortTimespanArray
	// TArray<FTimespan> SortTimespanArray(TArray<FTimespan>& TimespanArray, bool Reversed);                                    // [0x834d20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortStringArrayDirectly
	// void SortStringArrayDirectly(TArray<FString>& StringArray, bool Reversed);                                               // [0x835810] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortStringArray
	// TArray<FString> SortStringArray(TArray<FString>& StringArray, bool Reversed);                                            // [0x8356a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortObjectArrayDirectly
	// void SortObjectArrayDirectly(TArray<UObject*>& ObjectArray, FDelegateProperty Comparator, bool Reversed);                // [0x835550] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortObjectArray
	// TArray<UObject*> SortObjectArray(TArray<UObject*>& ObjectArray, FDelegateProperty Comparator, bool Reversed);            // [0x8353b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortIntegerArrayDirectly
	// void SortIntegerArrayDirectly(TArray<int32_t>& IntegerArray, bool Reversed);                                             // [0x8352c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortIntegerArray
	// TArray<int32_t> SortIntegerArray(TArray<int32_t>& IntegerArray, bool Reversed);                                          // [0x835180] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortFloatArrayDirectly
	// void SortFloatArrayDirectly(TArray<float>& FloatArray, bool Reversed);                                                   // [0x835090] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortFloatArray
	// TArray<float> SortFloatArray(TArray<float>& FloatArray, bool Reversed);                                                  // [0x834f50] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortDateTimeArrayDirectly
	// void SortDateTimeArrayDirectly(TArray<FDateTime>& DateTimeArray, bool Reversed);                                         // [0x834e60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortDateTimeArray
	// TArray<FDateTime> SortDateTimeArray(TArray<FDateTime>& DateTimeArray, bool Reversed);                                    // [0x834d20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortByteArrayDirectly
	// void SortByteArrayDirectly(TArray<char>& ByteArray, bool Reversed);                                                      // [0x834c30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortByteArray
	// TArray<char> SortByteArray(TArray<char>& ByteArray, bool Reversed);                                                      // [0x834af0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SimpleKismetSystemLibraryPrintString
	// void SimpleKismetSystemLibraryPrintString(FString inString);                                                             // [0x834a60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ShippingBuild
	// bool ShippingBuild();                                                                                                    // [0x82a850] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Sha512
	// TArray<char> Sha512(TArray<char>& ByteArray, int32_t Index, int32_t Length);                                             // [0x8348f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Sha256
	// TArray<char> Sha256(TArray<char>& ByteArray, int32_t Index, int32_t Length);                                             // [0x834780] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Sha1
	// TArray<char> Sha1(TArray<char>& ByteArray, int32_t Index, int32_t Length);                                               // [0x834610] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWorldRenderingEnabled
	// void SetWorldRenderingEnabled(bool Enabled);                                                                             // [0x834590] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowSize
	// void SetWindowSize(int32_t Width, int32_t Height);                                                                       // [0x8344d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowPosition
	// void SetWindowPosition(int32_t X, int32_t Y);                                                                            // [0x834410] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowPositiomInPercentagesCentered
	// void SetWindowPositiomInPercentagesCentered(float X, float Y);                                                           // [0x834350] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowMode
	// void SetWindowMode(bool Fullscreen, bool IsFullscreenWindowed);                                                          // [0x834280] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetSplitScreenType_TwoPlayers
	// void SetSplitScreenType_TwoPlayers(ELowEntrySplitScreenTypeTwoPlayers Type);                                             // [0x834210] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetSplitScreenType_ThreePlayers
	// void SetSplitScreenType_ThreePlayers(ELowEntrySplitScreenTypeThreePlayers Type);                                         // [0x8341a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetSplitScreenEnabled
	// void SetSplitScreenEnabled(bool Enabled);                                                                                // [0x834120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetMousePositionInPercentages
	// void SetMousePositionInPercentages(float X, float Y);                                                                    // [0x833fd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetMousePosition
	// void SetMousePosition(int32_t X, int32_t Y);                                                                             // [0x833f10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetMouseLockedToViewport
	// void SetMouseLockedToViewport(bool Locked);                                                                              // [0x833e90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetGenericTeamId
	// void SetGenericTeamId(class AActor* Target, char TeamID);                                                                // [0x833dd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ServerChangeMap
	// void ServerChangeMap(class UObject* WorldContextObject, FString Map, FString Args, class APlayerController* SpecificPlayer); // [0x833b30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2DToPixels
	// void SceneCaptureComponent2DToPixels(class USceneCaptureComponent2D* SceneCaptureComponent2D, int32_t& Width, int32_t& Height, TArray<FColor>& Pixels); // [0x833820] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2DToBytes
	// void SceneCaptureComponent2DToBytes(class USceneCaptureComponent2D* SceneCaptureComponent2D, ELowEntryImageFormat ImageFormat, TArray<char>& ByteArray, int32_t CompressionQuality); // [0x8336b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2D_SetFov
	// void SceneCaptureComponent2D_SetFov(class USceneCaptureComponent2D* SceneCaptureComponent2D, float FOV);                 // [0x833a70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2D_GetFov
	// void SceneCaptureComponent2D_GetFov(class USceneCaptureComponent2D* SceneCaptureComponent2D, float& FOV);                // [0x8339a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2DToPixels
	// void SceneCapture2DToPixels(class ASceneCapture2D* SceneCapture2D, int32_t& Width, int32_t& Height, TArray<FColor>& Pixels); // [0x8333a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2DToBytes
	// void SceneCapture2DToBytes(class ASceneCapture2D* SceneCapture2D, ELowEntryImageFormat ImageFormat, TArray<char>& ByteArray, int32_t CompressionQuality); // [0x833230] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2D_SetFov
	// void SceneCapture2D_SetFov(class ASceneCapture2D* SceneCapture2D, float FOV);                                            // [0x8335f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2D_GetFov
	// void SceneCapture2D_GetFov(class ASceneCapture2D* SceneCapture2D, float& FOV);                                           // [0x833520] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RoundDecimals
	// float RoundDecimals(float Number, int32_t Decimals);                                                                     // [0x833160] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RetriggerableRandomDelayFrames
	// void RetriggerableRandomDelayFrames(class UObject* WorldContextObject, int32_t MinFrames, int32_t MaxFrames, FLatentActionInfo LatentInfo); // [0x833000] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RetriggerableRandomDelay
	// void RetriggerableRandomDelay(class UObject* WorldContextObject, float MinDuration, float MaxDuration, FLatentActionInfo LatentInfo); // [0x832ea0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RetriggerableDelayFrames
	// void RetriggerableDelayFrames(class UObject* WorldContextObject, int32_t Frames, FLatentActionInfo LatentInfo);          // [0x832d70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ReplaceCharactersExcept
	// FString ReplaceCharactersExcept(FString String, FString ReplacementCharacter, bool KeepLowercaseAZ, bool KeepUppercaseAZ, bool KeepNumbers, FString OtherCharactersToKeep); // [0x832af0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RemoveCharactersExcept
	// FString RemoveCharactersExcept(FString String, bool KeepLowercaseAZ, bool KeepUppercaseAZ, bool KeepNumbers, FString OtherCharactersToKeep); // [0x8328e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexReplace
	// FString RegexReplace(FString String, FString Pattern, FString Replacement);                                              // [0x832720] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexMatch
	// bool RegexMatch(FString String, FString Pattern);                                                                        // [0x832630] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexGetMatches
	// TArray<FLowEntryRegexMatch> RegexGetMatches(FString String, FString Pattern);                                            // [0x832400] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexCount
	// int32_t RegexCount(FString String, FString Pattern);                                                                     // [0x832310] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RandomDelayFrames
	// void RandomDelayFrames(class UObject* WorldContextObject, int32_t MinFrames, int32_t MaxFrames, FLatentActionInfo LatentInfo); // [0x8321b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RandomDelay
	// void RandomDelay(class UObject* WorldContextObject, float MinDuration, float MaxDuration, FLatentActionInfo LatentInfo); // [0x832050] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.QueueExecutions
	// void QueueExecutions(class UObject* WorldContextObject, class ULowEntryExecutionQueue*& Queue, FLatentActionInfo LatentInfo); // [0x831f00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Ps4Platform
	// bool Ps4Platform();                                                                                                      // [0x823950] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PlayerControllerGetLocalPlayer
	// void PlayerControllerGetLocalPlayer(class APlayerController* PlayerController, bool& success, class ULocalPlayer*& LocalPlayer); // [0x831de0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PixelsToTexture2D
	// class UTexture2D* PixelsToTexture2D(int32_t Width, int32_t Height, TArray<FColor>& Pixels);                              // [0x831cb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PixelsToExistingTexture2D
	// class UTexture2D* PixelsToExistingTexture2D(bool& ReusedGivenTexture2D, class UTexture2D* Texture2D, int32_t Width, int32_t Height, TArray<FColor>& Pixels); // [0x831ad0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PixelsToBytes
	// void PixelsToBytes(int32_t Width, int32_t Height, TArray<FColor>& Pixels, ELowEntryImageFormat ImageFormat, TArray<char>& ByteArray, int32_t CompressionQuality); // [0x8318c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Pearson
	// TArray<char> Pearson(TArray<char>& ByteArray, int32_t HashLength, int32_t Index, int32_t Length);                        // [0x8316f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ParseStringIntoLongBytes
	// class ULowEntryLong* ParseStringIntoLongBytes(FString String);                                                           // [0x8315c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ParseStringIntoLong
	// int64_t ParseStringIntoLong(FString String);                                                                             // [0x831520] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ParseStringIntoDoubleBytes
	// class ULowEntryDouble* ParseStringIntoDoubleBytes(FString String);                                                       // [0x831480] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ParsedHashcashIsValid
	// bool ParsedHashcashIsValid(class ULowEntryParsedHashcash* Target);                                                       // [0x831660] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.NextQueueExecution
	// void NextQueueExecution(class ULowEntryExecutionQueue* Queue);                                                           // [0x831400] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.NewlineCharacter
	// FString NewlineCharacter();                                                                                              // [0x831380] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinString
	// FString MinString(FString A, FString B);                                                                                 // [0x8311d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinOfTimespanArray
	// void MinOfTimespanArray(TArray<FTimespan>& TimespanArray, int32_t& IndexOfMinValue, FTimespan& MinValue);                // [0x830f00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinOfStringArray
	// void MinOfStringArray(TArray<FString>& StringArray, int32_t& IndexOfMinValue, FString& MinValue);                        // [0x831040] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinOfDateTimeArray
	// void MinOfDateTimeArray(TArray<FDateTime>& DateTimeArray, int32_t& IndexOfMinValue, FDateTime& MinValue);                // [0x830f00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MergeEncapsulatedByteArrays
	// TArray<char> MergeEncapsulatedByteArrays(TArray<ULowEntryByteArray*>& ByteArrays);                                       // [0x830e10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MergeBytes
	// TArray<char> MergeBytes(TArray<char> A, TArray<char> B);                                                                 // [0x830c60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Md5
	// TArray<char> Md5(TArray<char>& ByteArray, int32_t Index, int32_t Length);                                                // [0x830af0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxString
	// FString MaxString(FString A, FString B);                                                                                 // [0x830940] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxOfTimespanArray
	// void MaxOfTimespanArray(TArray<FTimespan>& TimespanArray, int32_t& IndexOfMaxValue, FTimespan& MaxValue);                // [0x830670] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxOfStringArray
	// void MaxOfStringArray(TArray<FString>& StringArray, int32_t& IndexOfMaxValue, FString& MaxValue);                        // [0x8307b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxOfDateTimeArray
	// void MaxOfDateTimeArray(TArray<FDateTime>& DateTimeArray, int32_t& IndexOfMaxValue, FDateTime& MaxValue);                // [0x830670] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MacPlatform
	// bool MacPlatform();                                                                                                      // [0x823950] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LongToBytes
	// TArray<char> LongToBytes(int64_t Value);                                                                                 // [0x830570] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Long_CreateZero
	// class ULowEntryLong* Long_CreateZero();                                                                                  // [0x830640] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Long_Create
	// class ULowEntryLong* Long_Create(TArray<char>& ByteArray, int32_t Index, int32_t Length);                                // [0x828980] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LoadVideo
	// void LoadVideo(class UMediaSoundComponent* MediaSoundComponent, FString URL, bool& success, class UMediaPlayer*& MediaPlayer, class UMediaTexture*& MediaTexture, bool PlayOnOpen, bool loop); // [0x8301d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LinuxPlatform
	// bool LinuxPlatform();                                                                                                    // [0x823950] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessStringString
	// bool LessStringString(FString A, FString B);                                                                             // [0x8300e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessIntegerFloat
	// bool LessIntegerFloat(int32_t A, float B);                                                                               // [0x830010] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessIntegerByte
	// bool LessIntegerByte(int32_t A, char B);                                                                                 // [0x82ff40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessFloatInteger
	// bool LessFloatInteger(float A, int32_t B);                                                                               // [0x82fe70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessFloatByte
	// bool LessFloatByte(float A, char B);                                                                                     // [0x82fda0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualStringString
	// bool LessEqualStringString(FString A, FString B);                                                                        // [0x82fcb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualIntegerFloat
	// bool LessEqualIntegerFloat(int32_t A, float B);                                                                          // [0x82fbe0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualIntegerByte
	// bool LessEqualIntegerByte(int32_t A, char B);                                                                            // [0x82fb10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualFloatInteger
	// bool LessEqualFloatInteger(float A, int32_t B);                                                                          // [0x82fa40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualFloatByte
	// bool LessEqualFloatByte(float A, char B);                                                                                // [0x82f970] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualByteInteger
	// bool LessEqualByteInteger(char A, int32_t B);                                                                            // [0x82f8a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualByteFloat
	// bool LessEqualByteFloat(char A, float B);                                                                                // [0x82f7d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessByteInteger
	// bool LessByteInteger(char A, int32_t B);                                                                                 // [0x82f700] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessByteFloat
	// bool LessByteFloat(char A, float B);                                                                                     // [0x82f630] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_String
	// void LatentAction_Create_String(class ULowEntryLatentActionString*& LatentAction);                                       // [0x82f5b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Object
	// void LatentAction_Create_Object(class ULowEntryLatentActionObject*& LatentAction);                                       // [0x82f530] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_None
	// void LatentAction_Create_None(class ULowEntryLatentActionNone*& LatentAction);                                           // [0x82f4b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Integer
	// void LatentAction_Create_Integer(class ULowEntryLatentActionInteger*& LatentAction);                                     // [0x82f430] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Float
	// void LatentAction_Create_Float(class ULowEntryLatentActionFloat*& LatentAction);                                         // [0x82f3b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Boolean
	// void LatentAction_Create_Boolean(class ULowEntryLatentActionBoolean*& LatentAction);                                     // [0x82f330] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.JoinGame
	// void JoinGame(class UObject* WorldContextObject, FString ServerAddress, FString Args, class APlayerController* SpecificPlayer); // [0x829c20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IsWorldRenderingEnabled
	// void IsWorldRenderingEnabled(bool& success, bool& Enabled);                                                              // [0x82f250] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IsBitSet
	// bool IsBitSet(char B, int32_t Bit);                                                                                      // [0x82f180] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IsAndroidDaydreamApplication
	// bool IsAndroidDaydreamApplication();                                                                                     // [0x823950] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IosPlatform
	// bool IosPlatform();                                                                                                      // [0x823950] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IntegerToBytes
	// TArray<char> IntegerToBytes(int32_t Value);                                                                              // [0x82ef70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Html5Platform
	// bool Html5Platform();                                                                                                    // [0x823950] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HostGame
	// void HostGame(class UObject* WorldContextObject, FString Map, FString Args, class APlayerController* SpecificPlayer);    // [0x82ee00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HMAC
	// TArray<char> HMAC(TArray<char>& ByteArray, TArray<char>& Key, ELowEntryHmacAlgorithm Algorithm, int32_t Index, int32_t Length); // [0x82e3b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HexToBytes
	// TArray<char> HexToBytes(FString Hex);                                                                                    // [0x82ed20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashParseArray
	// TArray<ULowEntryParsedHashcash*> HashcashParseArray(TArray<FString>& Hashes);                                            // [0x82ec10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashParse
	// class ULowEntryParsedHashcash* HashcashParse(FString Hash);                                                              // [0x82eb70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashCustomCreationDate
	// FString HashcashCustomCreationDate(FString Resource, FDateTime& UtcDate, int32_t Bits);                                  // [0x82ea00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashArrayCustomCreationDate
	// TArray<FString> HashcashArrayCustomCreationDate(TArray<FString>& Resources, FDateTime& UtcDate, int32_t Bits);           // [0x82e850] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashArray
	// TArray<FString> HashcashArray(TArray<FString>& Resources, int32_t Bits);                                                 // [0x82e6e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Hashcash
	// FString Hashcash(FString Resource, int32_t Bits);                                                                        // [0x82e5c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterStringString
	// bool GreaterStringString(FString A, FString B);                                                                          // [0x82e2c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterIntegerFloat
	// bool GreaterIntegerFloat(int32_t A, float B);                                                                            // [0x82e1f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterIntegerByte
	// bool GreaterIntegerByte(int32_t A, char B);                                                                              // [0x82e120] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterFloatInteger
	// bool GreaterFloatInteger(float A, int32_t B);                                                                            // [0x82e050] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterFloatByte
	// bool GreaterFloatByte(float A, char B);                                                                                  // [0x82df80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualStringString
	// bool GreaterEqualStringString(FString A, FString B);                                                                     // [0x82de90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualIntegerFloat
	// bool GreaterEqualIntegerFloat(int32_t A, float B);                                                                       // [0x82ddc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualIntegerByte
	// bool GreaterEqualIntegerByte(int32_t A, char B);                                                                         // [0x82dcf0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualFloatInteger
	// bool GreaterEqualFloatInteger(float A, int32_t B);                                                                       // [0x82dc20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualFloatByte
	// bool GreaterEqualFloatByte(float A, char B);                                                                             // [0x82db50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualByteInteger
	// bool GreaterEqualByteInteger(char A, int32_t B);                                                                         // [0x82da80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualByteFloat
	// bool GreaterEqualByteFloat(char A, float B);                                                                             // [0x82d9b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterByteInteger
	// bool GreaterByteInteger(char A, int32_t B);                                                                              // [0x82d8e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterByteFloat
	// bool GreaterByteFloat(char A, float B);                                                                                  // [0x82d810] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GrayscalePixels
	// TArray<FColor> GrayscalePixels(TArray<FColor>& pixel);                                                                   // [0x82d720] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GrayscalePixel
	// FColor GrayscalePixel(FColor& pixel);                                                                                    // [0x82d690] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowSize
	// void GetWindowSize(bool& success, int32_t& Width, int32_t& Height);                                                      // [0x82d560] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowPosition
	// void GetWindowPosition(bool& success, int32_t& X, int32_t& Y);                                                           // [0x82d430] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowPositiomInPercentagesCentered
	// void GetWindowPositiomInPercentagesCentered(bool& success, float& X, float& Y);                                          // [0x82d300] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowMode
	// void GetWindowMode(bool& success, bool& Fullscreen, bool& IsFullscreenWindowed);                                         // [0x82d1d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowBounds
	// void GetWindowBounds(bool& success, int32_t& X, int32_t& Y, int32_t& Width, int32_t& Height);                            // [0x82cff0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowBorderSize
	// void GetWindowBorderSize(bool& success, FMargin& Margin);                                                                // [0x82cf10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetUserFocusedWidgetType
	// FName GetUserFocusedWidgetType(int32_t UserIndex);                                                                       // [0x82ce80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetSplitScreenType
	// void GetSplitScreenType(ELowEntrySplitScreenType& Type);                                                                 // [0x82cd00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetProjectVersion
	// FString GetProjectVersion();                                                                                             // [0x82cc80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetProjectName
	// FString GetProjectName();                                                                                                // [0x82cc00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetPrimaryMonitorWorkArea
	// void GetPrimaryMonitorWorkArea(int32_t& X, int32_t& Y, int32_t& Width, int32_t& Height);                                 // [0x82ca80] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetPrimaryMonitorResolution
	// void GetPrimaryMonitorResolution(int32_t& Width, int32_t& Height);                                                       // [0x82c9a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetMousePositionInPercentages
	// void GetMousePositionInPercentages(bool& success, float& X, float& Y);                                                   // [0x82c630] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetMousePosition
	// void GetMousePosition(bool& success, int32_t& X, int32_t& Y);                                                            // [0x82c500] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetMaximumVolume
	// void GetMaximumVolume(int32_t& Volume, bool& success);                                                                   // [0x82b8d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetLocalToAbsoluteScale
	// FVector2D GetLocalToAbsoluteScale(FGeometry& Geometry);                                                                  // [0x82c2e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetKeyboardFocusedWidgetType
	// FName GetKeyboardFocusedWidgetType();                                                                                    // [0x82c2a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetGenericTeamId
	// void GetGenericTeamId(class AActor* Target, char& TeamID);                                                               // [0x82c120] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetCurrentVolumePercentage
	// void GetCurrentVolumePercentage(float& Percentage, bool& success);                                                       // [0x82ba90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetCurrentVolume
	// void GetCurrentVolume(int32_t& Volume, bool& success);                                                                   // [0x82b8d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetClassWithName
	// void GetClassWithName(FString ClassName, class UClass*& Class_, bool& success);                                          // [0x82be50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetByteWithBitSet
	// char GetByteWithBitSet(char Byte, int32_t Bit, bool Value);                                                              // [0x82bcd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetBatteryTemperature
	// void GetBatteryTemperature(float& Celsius, bool& success);                                                               // [0x82ba90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetBatteryState
	// void GetBatteryState(ELowEntryBatteryState& State, bool& success);                                                       // [0x82b9b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetBatteryCharge
	// void GetBatteryCharge(int32_t& Percentage, bool& success);                                                               // [0x82b8d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidVolume
	// void GetAndroidVolume(int32_t& Volume);                                                                                  // [0x82b850] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidVersion
	// FString GetAndroidVersion();                                                                                             // [0x82b7d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidOsLanguage
	// FString GetAndroidOsLanguage();                                                                                          // [0x82b7d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidNumberOfCores
	// int32_t GetAndroidNumberOfCores();                                                                                       // [0x82b7a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidGpuFamily
	// FString GetAndroidGpuFamily();                                                                                           // [0x82b7d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidGlVersion
	// FString GetAndroidGlVersion();                                                                                           // [0x82b7d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidDeviceModel
	// FString GetAndroidDeviceModel();                                                                                         // [0x82b7d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidDeviceMake
	// FString GetAndroidDeviceMake();                                                                                          // [0x82b7d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidDefaultLocale
	// FString GetAndroidDefaultLocale();                                                                                       // [0x82b7d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidBuildVersion
	// int32_t GetAndroidBuildVersion();                                                                                        // [0x82b7a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAbsoluteToLocalScale
	// FVector2D GetAbsoluteToLocalScale(FGeometry& Geometry);                                                                  // [0x82b6e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAbsoluteSize
	// FVector2D GetAbsoluteSize(FGeometry& Geometry);                                                                          // [0x82b620] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GenerateRandomBytesRandomLength
	// void GenerateRandomBytesRandomLength(int32_t MinLength, int32_t MaxLength, TArray<char>& ByteArray);                     // [0x82b500] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GenerateRandomBytes
	// void GenerateRandomBytes(int32_t Length, TArray<char>& ByteArray);                                                       // [0x82b420] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.FloorDecimals
	// float FloorDecimals(float Number, int32_t Decimals);                                                                     // [0x82b350] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.FloatToBytes
	// TArray<char> FloatToBytes(float Value);                                                                                  // [0x82afd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ExecToInteger
	// void ExecToInteger(ELowEntryExtendedStandardLibrary0to9 Branch, int32_t& Value);                                         // [0x82af00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ExecToByte
	// void ExecToByte(ELowEntryExtendedStandardLibrary0to9 Branch, char& Value);                                               // [0x82ae30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ExecToBoolean
	// void ExecToBoolean(ELowEntryExtendedStandardLibraryTrueOrFalse Branch, bool& Value);                                     // [0x82ad60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.EncapsulateByteArray
	// class ULowEntryByteArray* EncapsulateByteArray(TArray<char>& ByteArray);                                                 // [0x82acb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Double_CreateZero
	// class ULowEntryDouble* Double_CreateZero();                                                                              // [0x82ac60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Double_Create
	// class ULowEntryDouble* Double_Create(TArray<char>& ByteArray, int32_t Index, int32_t Length);                            // [0x827f70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Divide_Vector2dVector2d
	// FVector2D Divide_Vector2dVector2d(FVector2D& A, FVector2D& B);                                                           // [0x82a880] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DevelopmentBuild
	// bool DevelopmentBuild();                                                                                                 // [0x823950] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DesktopPlatform
	// bool DesktopPlatform();                                                                                                  // [0x82a850] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DelayFrames
	// void DelayFrames(class UObject* WorldContextObject, int32_t Frames, FLatentActionInfo LatentInfo);                       // [0x82a720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DebugBuild
	// bool DebugBuild();                                                                                                       // [0x823950] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_ToUnixTimestamp
	// void DateTime_ToUnixTimestamp(FDateTime& DateTime, class ULowEntryLong*& Timestamp);                                     // [0x82a640] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_ToString
	// void DateTime_ToString(FDateTime& DateTime, FString& String, FString Format);                                            // [0x82a4f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_ToIso8601
	// void DateTime_ToIso8601(FDateTime& DateTime, FString& String);                                                           // [0x82a400] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_FromUnixTimestamp
	// void DateTime_FromUnixTimestamp(class ULowEntryLong* Timestamp, FDateTime& DateTime);                                    // [0x82a340] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CreateString
	// FString CreateString(int32_t Length, FString Filler);                                                                    // [0x82a220] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CreateObject
	// void CreateObject(class UClass* Class, class UObject*& Object);                                                          // [0x82a150] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Crash
	// void Crash();                                                                                                            // [0x82a100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ConvertUtcDateToLocalDate
	// void ConvertUtcDateToLocalDate(FDateTime& Utc, FDateTime& Local);                                                        // [0x82a030] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ConvertLocalDateToUtcDate
	// void ConvertLocalDateToUtcDate(FDateTime& Local, FDateTime& Utc);                                                        // [0x829f60] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClipboardSet
	// void ClipboardSet(FString Value);                                                                                        // [0x829ed0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClipboardGet
	// FString ClipboardGet();                                                                                                  // [0x829e50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClearUserFocus
	// void ClearUserFocus(int32_t UserIndex);                                                                                  // [0x829dd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClearKeyboardFocus
	// void ClearKeyboardFocus();                                                                                               // [0x829db0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClearAllUserFocus
	// void ClearAllUserFocus();                                                                                                // [0x829d90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ChangeMap
	// void ChangeMap(class UObject* WorldContextObject, FString Map, FString Args, class APlayerController* SpecificPlayer);   // [0x829c20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CeilDecimals
	// float CeilDecimals(float Number, int32_t Decimals);                                                                      // [0x829b50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CaseSwitchObject
	// void CaseSwitchObject(int32_t OnlyCheckFirstX, class UObject* Value, class UObject* _1__, class UObject* _2__, class UObject* _3__, class UObject* _4__, class UObject* _5__, class UObject* _6__, class UObject* _7__, class UObject* _8__, class UObject* _9__, class UObject* _10__, ELowEntryExtendedStandardLibrary1to10other& Branch); // [0x829680] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CaseSwitchInteger
	// void CaseSwitchInteger(int32_t OnlyCheckFirstX, int32_t Value, int32_t _1__, int32_t _2__, int32_t _3__, int32_t _4__, int32_t _5__, int32_t _6__, int32_t _7__, int32_t _8__, int32_t _9__, int32_t _10__, ELowEntryExtendedStandardLibrary1to10other& Branch); // [0x8292d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CaseSwitchByte
	// void CaseSwitchByte(int32_t OnlyCheckFirstX, char Value, char _1__, char _2__, char _3__, char _4__, char _5__, char _6__, char _7__, char _8__, char _9__, char _10__, ELowEntryExtendedStandardLibrary1to10other& Branch); // [0x828f10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CarriageReturnCharacter
	// FString CarriageReturnCharacter();                                                                                       // [0x828e90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteToBytes
	// TArray<char> ByteToBytes(char Value);                                                                                    // [0x827430] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteToBoolean
	// bool ByteToBoolean(char Byte);                                                                                           // [0x8273b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteToBits
	// void ByteToBits(char Byte, bool& Bit1, bool& Bit2, bool& Bit3, bool& Bit4, bool& Bit5, bool& Bit6, bool& Bit7, bool& Bit8); // [0x8270a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToStringUtf8
	// FString BytesToStringUtf8(TArray<char>& ByteArray, int32_t Index, int32_t Length);                                       // [0x828d20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToPixels
	// void BytesToPixels(TArray<char>& ByteArray, ELowEntryImageFormat ImageFormat, int32_t& Width, int32_t& Height, TArray<FColor>& Pixels, int32_t Index, int32_t Length); // [0x828ab0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToLongBytes
	// class ULowEntryLong* BytesToLongBytes(TArray<char>& ByteArray, int32_t Index, int32_t Length);                           // [0x828980] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToLong
	// int64_t BytesToLong(TArray<char>& ByteArray, int32_t Index, int32_t Length);                                             // [0x828850] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToInteger
	// int32_t BytesToInteger(TArray<char>& ByteArray, int32_t Index, int32_t Length);                                          // [0x828720] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToImage
	// class UTexture2D* BytesToImage(TArray<char>& ByteArray, ELowEntryImageFormat ImageFormat, int32_t Index, int32_t Length); // [0x8285b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToHex
	// FString BytesToHex(TArray<char>& ByteArray, bool AddSpaces, int32_t Index, int32_t Length);                              // [0x8283d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToFloat
	// float BytesToFloat(TArray<char>& ByteArray, int32_t Index, int32_t Length);                                              // [0x8282a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToExistingImage
	// class UTexture2D* BytesToExistingImage(bool& ReusedGivenTexture2D, class UTexture2D* Texture2D, TArray<char>& ByteArray, ELowEntryImageFormat ImageFormat, int32_t Index, int32_t Length); // [0x8280a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToDoubleBytes
	// class ULowEntryDouble* BytesToDoubleBytes(TArray<char>& ByteArray, int32_t Index, int32_t Length);                       // [0x827f70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToByte
	// char BytesToByte(TArray<char>& ByteArray, int32_t Index, int32_t Length);                                                // [0x827e40] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBoolean
	// bool BytesToBoolean(TArray<char>& ByteArray, int32_t Index, int32_t Length);                                             // [0x827d10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBitString
	// FString BytesToBitString(TArray<char>& ByteArray, bool AddSpaces, int32_t Index, int32_t Length);                        // [0x827b30] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBinary
	// FString BytesToBinary(TArray<char>& ByteArray, bool AddSpaces, int32_t Index, int32_t Length);                           // [0x827950] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBase64Url
	// FString BytesToBase64Url(TArray<char>& ByteArray, int32_t Index, int32_t Length);                                        // [0x8277e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBase64
	// FString BytesToBase64(TArray<char>& ByteArray, int32_t Index, int32_t Length);                                           // [0x827670] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesSubArray
	// TArray<char> BytesSubArray(TArray<char>& ByteArray, int32_t Index, int32_t Length);                                      // [0x827500] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataWriter_GetBytes
	// TArray<char> ByteDataWriter_GetBytes(class ULowEntryByteDataWriter* ByteDataWriter);                                     // [0x826fd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataWriter_CreateFromEntryArrayPure
	// class ULowEntryByteDataWriter* ByteDataWriter_CreateFromEntryArrayPure(TArray<ULowEntryByteDataEntry*>& Array);          // [0x826f20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataWriter_CreateFromEntryArray
	// class ULowEntryByteDataWriter* ByteDataWriter_CreateFromEntryArray(TArray<ULowEntryByteDataEntry*>& Array);              // [0x826f20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataReader_Create
	// class ULowEntryByteDataReader* ByteDataReader_Create(TArray<char>& bytes, int32_t Index, int32_t Length);                // [0x826df0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromStringUtf8Array
	// class ULowEntryByteDataEntry* ByteDataEntry_CreateFromStringUtf8Array(TArray<FString>& Value);                           // [0x826d20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromStringUtf8
	// class ULowEntryByteDataEntry* ByteDataEntry_CreateFromStringUtf8(FString Value);                                         // [0x826c80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger3Array
	// class ULowEntryByteDataEntry* ByteDataEntry_CreateFromPositiveInteger3Array(TArray<int32_t>& Value);                     // [0x826bd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger3
	// class ULowEntryByteDataEntry* ByteDataEntry_CreateFromPositiveInteger3(int32_t Value);                                   // [0x826b40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger2Array
	// class ULowEntryByteDataEntry* ByteDataEntry_CreateFromPositiveInteger2Array(TArray<int32_t>& Value);                     // [0x826a90] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger2
	// class ULowEntryByteDataEntry* ByteDataEntry_CreateFromPositiveInteger2(int32_t Value);                                   // [0x826a00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger1Array
	// class ULowEntryByteDataEntry* ByteDataEntry_CreateFromPositiveInteger1Array(TArray<int32_t>& Value);                     // [0x826950] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger1
	// class ULowEntryByteDataEntry* ByteDataEntry_CreateFromPositiveInteger1(int32_t Value);                                   // [0x8268c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromLongBytesArray
	// class ULowEntryByteDataEntry* ByteDataEntry_CreateFromLongBytesArray(TArray<ULowEntryLong*>& Value);                     // [0x826810] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromLongBytes
	// class ULowEntryByteDataEntry* ByteDataEntry_CreateFromLongBytes(class ULowEntryLong* Value);                             // [0x826780] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromLongArray
	// class ULowEntryByteDataEntry* ByteDataEntry_CreateFromLongArray(TArray<int64_t>& Value);                                 // [0x8266d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromLong
	// class ULowEntryByteDataEntry* ByteDataEntry_CreateFromLong(int64_t Value);                                               // [0x826640] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromIntegerArray
	// class ULowEntryByteDataEntry* ByteDataEntry_CreateFromIntegerArray(TArray<int32_t>& Value);                              // [0x826590] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromInteger
	// class ULowEntryByteDataEntry* ByteDataEntry_CreateFromInteger(int32_t Value);                                            // [0x826500] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromFloatArray
	// class ULowEntryByteDataEntry* ByteDataEntry_CreateFromFloatArray(TArray<float>& Value);                                  // [0x826450] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromFloat
	// class ULowEntryByteDataEntry* ByteDataEntry_CreateFromFloat(float Value);                                                // [0x8263d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromDoubleBytesArray
	// class ULowEntryByteDataEntry* ByteDataEntry_CreateFromDoubleBytesArray(TArray<ULowEntryDouble*>& Value);                 // [0x826320] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromDoubleBytes
	// class ULowEntryByteDataEntry* ByteDataEntry_CreateFromDoubleBytes(class ULowEntryDouble* Value);                         // [0x826290] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromByteArray
	// class ULowEntryByteDataEntry* ByteDataEntry_CreateFromByteArray(TArray<char>& Value);                                    // [0x8261e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromByte
	// class ULowEntryByteDataEntry* ByteDataEntry_CreateFromByte(char Value);                                                  // [0x826160] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromBooleanArray
	// class ULowEntryByteDataEntry* ByteDataEntry_CreateFromBooleanArray(TArray<bool>& Value);                                 // [0x8260b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromBoolean
	// class ULowEntryByteDataEntry* ByteDataEntry_CreateFromBoolean(bool Value);                                               // [0x826020] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BooleanToBytes
	// TArray<char> BooleanToBytes(bool Value);                                                                                 // [0x825f50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BooleanToByte
	// char BooleanToByte(bool Value);                                                                                          // [0x825ec0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitStringToBytes
	// TArray<char> BitStringToBytes(FString Bits);                                                                             // [0x825b00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitsToByte
	// void BitsToByte(bool Bit1, bool Bit2, bool Bit3, bool Bit4, bool Bit5, bool Bit6, bool Bit7, bool Bit8, char& Byte);     // [0x825be0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataWriter_GetBytes
	// TArray<char> BitDataWriter_GetBytes(class ULowEntryBitDataWriter* BitDataWriter);                                        // [0x825a30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataWriter_CreateFromEntryArrayPure
	// class ULowEntryBitDataWriter* BitDataWriter_CreateFromEntryArrayPure(TArray<ULowEntryBitDataEntry*>& Array);             // [0x825980] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataWriter_CreateFromEntryArray
	// class ULowEntryBitDataWriter* BitDataWriter_CreateFromEntryArray(TArray<ULowEntryBitDataEntry*>& Array);                 // [0x825980] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataReader_Create
	// class ULowEntryBitDataReader* BitDataReader_Create(TArray<char>& bytes, int32_t Index, int32_t Length);                  // [0x825850] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromStringUtf8Array
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromStringUtf8Array(TArray<FString>& Value);                             // [0x825780] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromStringUtf8
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromStringUtf8(FString Value);                                           // [0x8256e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger3Array
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromPositiveInteger3Array(TArray<int32_t>& Value);                       // [0x825630] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger3
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromPositiveInteger3(int32_t Value);                                     // [0x8255a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger2Array
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromPositiveInteger2Array(TArray<int32_t>& Value);                       // [0x8254f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger2
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromPositiveInteger2(int32_t Value);                                     // [0x825460] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger1Array
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromPositiveInteger1Array(TArray<int32_t>& Value);                       // [0x8253b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger1
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromPositiveInteger1(int32_t Value);                                     // [0x825320] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromLongBytesArray
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromLongBytesArray(TArray<ULowEntryLong*>& Value);                       // [0x825270] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromLongBytes
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromLongBytes(class ULowEntryLong* Value);                               // [0x8251e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromLongArray
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromLongArray(TArray<int64_t>& Value);                                   // [0x825130] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromLong
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromLong(int64_t Value);                                                 // [0x8250a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerMostSignificantBits
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromIntegerMostSignificantBits(int32_t Value, int32_t BitCount);         // [0x824fd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerLeastSignificantBits
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromIntegerLeastSignificantBits(int32_t Value, int32_t BitCount);        // [0x824f00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerArrayMostSignificantBits
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromIntegerArrayMostSignificantBits(TArray<int32_t>& Value, int32_t BitCount); // [0x824e00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerArrayLeastSignificantBits
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromIntegerArrayLeastSignificantBits(TArray<int32_t>& Value, int32_t BitCount); // [0x824d00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerArray
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromIntegerArray(TArray<int32_t>& Value);                                // [0x824c50] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromInteger
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromInteger(int32_t Value);                                              // [0x824bc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromFloatArray
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromFloatArray(TArray<float>& Value);                                    // [0x824b10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromFloat
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromFloat(float Value);                                                  // [0x824a90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromDoubleBytesArray
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromDoubleBytesArray(TArray<ULowEntryDouble*>& Value);                   // [0x8249e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromDoubleBytes
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromDoubleBytes(class ULowEntryDouble* Value);                           // [0x824950] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteMostSignificantBits
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromByteMostSignificantBits(char Value, int32_t BitCount);               // [0x824880] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteLeastSignificantBits
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromByteLeastSignificantBits(char Value, int32_t BitCount);              // [0x8247b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteArrayMostSignificantBits
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromByteArrayMostSignificantBits(TArray<char>& Value, int32_t BitCount); // [0x8246b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteArrayLeastSignificantBits
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromByteArrayLeastSignificantBits(TArray<char>& Value, int32_t BitCount); // [0x8245b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteArray
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromByteArray(TArray<char>& Value);                                      // [0x824500] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByte
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromByte(char Value);                                                    // [0x824480] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBooleanArray
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromBooleanArray(TArray<bool>& Value);                                   // [0x8243d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBoolean
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromBoolean(bool Value);                                                 // [0x824340] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBitArray
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromBitArray(TArray<bool>& Value);                                       // [0x824290] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBit
	// class ULowEntryBitDataEntry* BitDataEntry_CreateFromBit(bool Value);                                                     // [0x824200] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BinaryToBytes
	// TArray<char> BinaryToBytes(FString Binary);                                                                              // [0x824120] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BCrypt
	// TArray<char> BCrypt(TArray<char>& ByteArray, TArray<char>& Salt, int32_t Strength, int32_t Index, int32_t Length);       // [0x823b90] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64UrlToBytes
	// TArray<char> Base64UrlToBytes(FString Base64Url);                                                                        // [0x824040] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64UrlToBase64
	// FString Base64UrlToBase64(FString Base64Url);                                                                            // [0x823f60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64ToBytes
	// TArray<char> Base64ToBytes(FString Base64);                                                                              // [0x823e80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64ToBase64Url
	// FString Base64ToBase64Url(FString Base64);                                                                               // [0x823da0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.AreBytesEqual
	// bool AreBytesEqual(TArray<char>& A, TArray<char>& B, int32_t IndexA, int32_t LengthA, int32_t IndexB, int32_t LengthB);  // [0x823980] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.AreAndroidHeadphonesPluggedIn
	// bool AreAndroidHeadphonesPluggedIn();                                                                                    // [0x823950] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.AndroidPlatform
	// bool AndroidPlatform();                                                                                                  // [0x823950] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class ULowEntryLatentActionBoolean : public UObject
{ 
public:
	bool                                               Finished;                                                   // 0x0028   (0x0001)  
	bool                                               Result;                                                     // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            KeepAliveCount;                                             // 0x002C   (0x0004)  


	/// Functions
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.WaitTillDone
	// void WaitTillDone(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, bool& Result_);                       // [0x838df0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.IsDone
	// bool IsDone();                                                                                                           // [0x8389b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.GetResult
	// void GetResult(bool& Result_);                                                                                           // [0x8383b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.Done
	// void Done(bool Result_);                                                                                                 // [0x837cf0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class ULowEntryLatentActionFloat : public UObject
{ 
public:
	bool                                               Finished;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              Result;                                                     // 0x002C   (0x0004)  
	int32_t                                            KeepAliveCount;                                             // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0034   (0x0004)  MISSED


	/// Functions
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.WaitTillDone
	// void WaitTillDone(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, float& Result_);                      // [0x838f40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.IsDone
	// bool IsDone();                                                                                                           // [0x8389b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.GetResult
	// void GetResult(float& Result_);                                                                                          // [0x838440] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.Done
	// void Done(float Result_);                                                                                                // [0x837d80] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class ULowEntryLatentActionInteger : public UObject
{ 
public:
	bool                                               Finished;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            Result;                                                     // 0x002C   (0x0004)  
	int32_t                                            KeepAliveCount;                                             // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0034   (0x0004)  MISSED


	/// Functions
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.WaitTillDone
	// void WaitTillDone(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, int32_t& Result_);                    // [0x839090] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.IsDone
	// bool IsDone();                                                                                                           // [0x8389b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.GetResult
	// void GetResult(int32_t& Result_);                                                                                        // [0x8384e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.Done
	// void Done(int32_t Result_);                                                                                              // [0x837e00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionNone
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class ULowEntryLatentActionNone : public UObject
{ 
public:
	bool                                               Finished;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            KeepAliveCount;                                             // 0x002C   (0x0004)  


	/// Functions
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.WaitTillDone
	// void WaitTillDone(class UObject* WorldContextObject, FLatentActionInfo LatentInfo);                                      // [0x8391e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.IsDone
	// bool IsDone();                                                                                                           // [0x8389b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.Done
	// void Done();                                                                                                             // [0x837e90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionObject
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class ULowEntryLatentActionObject : public UObject
{ 
public:
	bool                                               Finished;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	class UObject*                                     Result;                                                     // 0x0030   (0x0008)  
	int32_t                                            KeepAliveCount;                                             // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED


	/// Functions
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.WaitTillDone
	// void WaitTillDone(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class UObject*& Result_);             // [0x8392d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.IsDone
	// bool IsDone();                                                                                                           // [0x8389b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.GetResult
	// void GetResult(class UObject*& Result_);                                                                                 // [0x838570] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.Done
	// void Done(class UObject* Result_);                                                                                       // [0x837eb0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionString
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class ULowEntryLatentActionString : public UObject
{ 
public:
	bool                                               Finished;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FString                                            Result;                                                     // 0x0030   (0x0010)  
	int32_t                                            KeepAliveCount;                                             // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0044   (0x0004)  MISSED


	/// Functions
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionString.WaitTillDone
	// void WaitTillDone(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString& Result_);                    // [0x839420] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionString.IsDone
	// bool IsDone();                                                                                                           // [0x8389b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionString.GetResult
	// void GetResult(FString& Result_);                                                                                        // [0x838600] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLatentActionString.Done
	// void Done(FString Result_);                                                                                              // [0x837f40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LowEntryExtendedStandardLibrary.LowEntryLong
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class ULowEntryLong : public UObject
{ 
public:
	TArray<char>                                       bytes;                                                      // 0x0028   (0x0010)  


	/// Functions
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLong.SetLong
	// void SetLong(int64_t Value);                                                                                             // [0x838ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLong.SetBytes
	// void SetBytes(TArray<char>& ByteArray, int32_t Index, int32_t Length);                                                   // [0x833ca0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Subtract
	// void LongBytes_Subtract(class ULowEntryLong* Value);                                                                     // [0x838c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_LessThan
	// bool LongBytes_LessThan(class ULowEntryLong* Value);                                                                     // [0x838bb0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_GreaterThan
	// bool LongBytes_GreaterThan(class ULowEntryLong* Value);                                                                  // [0x838b10] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Equals
	// bool LongBytes_Equals(class ULowEntryLong* Value);                                                                       // [0x838a70] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Add
	// void LongBytes_Add(class ULowEntryLong* Value);                                                                          // [0x8389e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Subtract
	// void Integer_Subtract(int32_t Value);                                                                                    // [0x838920] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLong.Integer_LessThan
	// bool Integer_LessThan(int32_t Value);                                                                                    // [0x838880] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLong.Integer_GreaterThan
	// bool Integer_GreaterThan(int32_t Value);                                                                                 // [0x8387e0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Equals
	// bool Integer_Equals(int32_t Value);                                                                                      // [0x838740] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Add
	// void Integer_Add(int32_t Value);                                                                                         // [0x8386b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLong.GetLong
	// int64_t GetLong();                                                                                                       // [0x838300] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLong.GetBytes
	// TArray<char> GetBytes();                                                                                                 // [0x82bdd0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLong.Float_LessThan
	// bool Float_LessThan(float Value);                                                                                        // [0x838200] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLong.Float_GreaterThan
	// bool Float_GreaterThan(float Value);                                                                                     // [0x838170] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLong.DoubleBytes_LessThan
	// bool DoubleBytes_LessThan(class ULowEntryDouble* Value);                                                                 // [0x8380d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLong.DoubleBytes_GreaterThan
	// bool DoubleBytes_GreaterThan(class ULowEntryDouble* Value);                                                              // [0x838030] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLong.CreateClone
	// class ULowEntryLong* CreateClone();                                                                                      // [0x837cc0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLong.CastToString
	// FString CastToString();                                                                                                  // [0x837c40] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryLong.CastToDoubleBytes
	// class ULowEntryDouble* CastToDoubleBytes();                                                                              // [0x837c10] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/LowEntryExtendedStandardLibrary.LowEntryParsedHashcash
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class ULowEntryParsedHashcash : public UObject
{ 
public:
	bool                                               Valid;                                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FString                                            Resource;                                                   // 0x0030   (0x0010)  
	FDateTime                                          Date;                                                       // 0x0040   (0x0008)  
	int32_t                                            Bits;                                                       // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED


	/// Functions
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.ToString
	// FString ToString();                                                                                                      // [0x838d70] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetResource
	// FString GetResource();                                                                                                   // [0x838330] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetDate
	// FDateTime GetDate();                                                                                                     // [0x8382c0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetBits
	// int32_t GetBits();                                                                                                       // [0x838290] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/LowEntryExtendedStandardLibrary.LowEntryRegexCaptureGroup
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FLowEntryRegexCaptureGroup
{ 
	int32_t                                            CaptureGroupNumber;                                         // 0x0000   (0x0004)  
	int32_t                                            BeginIndex;                                                 // 0x0004   (0x0004)  
	int32_t                                            EndIndex;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Match;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/LowEntryExtendedStandardLibrary.LowEntryRegexMatch
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FLowEntryRegexMatch
{ 
	int32_t                                            MatchNumber;                                                // 0x0000   (0x0004)  
	int32_t                                            BeginIndex;                                                 // 0x0004   (0x0004)  
	int32_t                                            EndIndex;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Match;                                                      // 0x0010   (0x0010)  
	TArray<FLowEntryRegexCaptureGroup>                 CaptureGroups;                                              // 0x0020   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(ULowEntryBitDataEntry) == 0x00E8); // 232 bytes (0x000028 - 0x0000E8)
static_assert(sizeof(ULowEntryBitDataReader) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(ULowEntryBitDataWriter) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(ULowEntryByteArray) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(ULowEntryByteDataEntry) == 0x00E8); // 232 bytes (0x000028 - 0x0000E8)
static_assert(sizeof(ULowEntryByteDataReader) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(ULowEntryByteDataWriter) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(ULowEntryDouble) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(ULowEntryExecutionQueue) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(ULowEntryExtendedStandardLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULowEntryLatentActionBoolean) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(ULowEntryLatentActionFloat) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(ULowEntryLatentActionInteger) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(ULowEntryLatentActionNone) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(ULowEntryLatentActionObject) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(ULowEntryLatentActionString) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(ULowEntryLong) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(ULowEntryParsedHashcash) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(FLowEntryRegexCaptureGroup) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FLowEntryRegexMatch) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(ULowEntryBitDataEntry, LongBytesValue) == 0x0038);
static_assert(offsetof(ULowEntryBitDataEntry, DoubleBytesValue) == 0x0048);
static_assert(offsetof(ULowEntryBitDataEntry, StringUtf8Value) == 0x0058);
static_assert(offsetof(ULowEntryBitDataEntry, ByteArrayValue) == 0x0068);
static_assert(offsetof(ULowEntryBitDataEntry, IntegerArrayValue) == 0x0078);
static_assert(offsetof(ULowEntryBitDataEntry, LongArrayValue) == 0x0088);
static_assert(offsetof(ULowEntryBitDataEntry, LongBytesArrayValue) == 0x0098);
static_assert(offsetof(ULowEntryBitDataEntry, FloatArrayValue) == 0x00A8);
static_assert(offsetof(ULowEntryBitDataEntry, DoubleBytesArrayValue) == 0x00B8);
static_assert(offsetof(ULowEntryBitDataEntry, BooleanArrayValue) == 0x00C8);
static_assert(offsetof(ULowEntryBitDataEntry, StringUtf8ArrayValue) == 0x00D8);
static_assert(offsetof(ULowEntryBitDataReader, bytes) == 0x0028);
static_assert(offsetof(ULowEntryBitDataWriter, bytes) == 0x0028);
static_assert(offsetof(ULowEntryByteArray, ByteArray) == 0x0028);
static_assert(offsetof(ULowEntryByteDataEntry, LongBytesValue) == 0x0038);
static_assert(offsetof(ULowEntryByteDataEntry, DoubleBytesValue) == 0x0048);
static_assert(offsetof(ULowEntryByteDataEntry, StringUtf8Value) == 0x0058);
static_assert(offsetof(ULowEntryByteDataEntry, ByteArrayValue) == 0x0068);
static_assert(offsetof(ULowEntryByteDataEntry, IntegerArrayValue) == 0x0078);
static_assert(offsetof(ULowEntryByteDataEntry, LongArrayValue) == 0x0088);
static_assert(offsetof(ULowEntryByteDataEntry, LongBytesArrayValue) == 0x0098);
static_assert(offsetof(ULowEntryByteDataEntry, FloatArrayValue) == 0x00A8);
static_assert(offsetof(ULowEntryByteDataEntry, DoubleBytesArrayValue) == 0x00B8);
static_assert(offsetof(ULowEntryByteDataEntry, BooleanArrayValue) == 0x00C8);
static_assert(offsetof(ULowEntryByteDataEntry, StringUtf8ArrayValue) == 0x00D8);
static_assert(offsetof(ULowEntryByteDataReader, bytes) == 0x0028);
static_assert(offsetof(ULowEntryByteDataWriter, bytes) == 0x0028);
static_assert(offsetof(ULowEntryDouble, bytes) == 0x0028);
static_assert(offsetof(ULowEntryLatentActionObject, Result) == 0x0030);
static_assert(offsetof(ULowEntryLatentActionString, Result) == 0x0030);
static_assert(offsetof(ULowEntryLong, bytes) == 0x0028);
static_assert(offsetof(ULowEntryParsedHashcash, Resource) == 0x0030);
static_assert(offsetof(ULowEntryParsedHashcash, Date) == 0x0040);
static_assert(offsetof(FLowEntryRegexCaptureGroup, Match) == 0x0010);
static_assert(offsetof(FLowEntryRegexMatch, Match) == 0x0010);
static_assert(offsetof(FLowEntryRegexMatch, CaptureGroups) == 0x0020);
