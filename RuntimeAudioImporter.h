
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

/// Enum /Script/RuntimeAudioImporter.ETranscodingStatus
/// Size: 0x01 (1 bytes)
enum class ETranscodingStatus : uint8_t
{
	ETranscodingStatus__SuccessfulImport                                             = 0,
	ETranscodingStatus__FailedToReadAudioDataArray                                   = 1,
	ETranscodingStatus__SoundWaveDeclarationError                                    = 2,
	ETranscodingStatus__InvalidAudioFormat                                           = 3,
	ETranscodingStatus__AudioDoesNotExist                                            = 4,
	ETranscodingStatus__LoadFileToArrayError                                         = 5
};

/// Enum /Script/RuntimeAudioImporter.ERAWAudioFormat
/// Size: 0x01 (1 bytes)
enum class ERAWAudioFormat : uint8_t
{
	ERAWAudioFormat__Int16                                                           = 0,
	ERAWAudioFormat__Int32                                                           = 1,
	ERAWAudioFormat__UInt8                                                           = 2,
	ERAWAudioFormat__Float32                                                         = 3
};

/// Enum /Script/RuntimeAudioImporter.EAudioFormat
/// Size: 0x01 (1 bytes)
enum class EAudioFormat : uint8_t
{
	EAudioFormat__Auto                                                               = 0,
	EAudioFormat__Mp3                                                                = 1,
	EAudioFormat__Wav                                                                = 2,
	EAudioFormat__Flac                                                               = 3,
	EAudioFormat__OggVorbis                                                          = 4,
	EAudioFormat__Invalid                                                            = 5
};

/// Enum /Script/RuntimeAudioImporter.EWAVEncodingFormat
/// Size: 0x01 (1 bytes)
enum class EWAVEncodingFormat : uint8_t
{
	EWAVEncodingFormat__FORMAT_PCM                                                   = 0,
	EWAVEncodingFormat__FORMAT_ADPCM                                                 = 1,
	EWAVEncodingFormat__FORMAT_IEEE_FLOAT                                            = 2,
	EWAVEncodingFormat__FORMAT_ALAW                                                  = 3,
	EWAVEncodingFormat__FORMAT_MULAW                                                 = 4,
	EWAVEncodingFormat__FORMAT_DVI_ADPCM                                             = 5,
	EWAVEncodingFormat__FORMAT_EXTENSIBLE                                            = 6
};

/// Struct /Script/RuntimeAudioImporter.PCMStruct
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FPCMStruct
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Class /Script/RuntimeAudioImporter.ImportedSoundWave
/// Size: 0x0410 (1040 bytes) (0x0003C0 - 0x000410) align 16 MaxSize: 0x0410
class UImportedSoundWave : public USoundWaveProcedural
{ 
public:
	int32_t                                            SamplingRate;                                               // 0x03C0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x03C4   (0x0004)  MISSED
	SDK_UNDEFINED(16,415) /* FMulticastInlineDelegate */ __um(OnAudioPlaybackFinished);                            // 0x03C8   (0x0010)  
	SDK_UNDEFINED(16,416) /* FMulticastInlineDelegate */ __um(OnGeneratePCMData);                                  // 0x03D8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x03E8   (0x0004)  MISSED
	int32_t                                            CurrentNumOfFrames;                                         // 0x03EC   (0x0004)  
	FPCMStruct                                         PCMBufferInfo;                                              // 0x03F0   (0x0018)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0408   (0x0008)  MISSED


	/// Functions
	// Function /Script/RuntimeAudioImporter.ImportedSoundWave.RewindPlaybackTime
	// bool RewindPlaybackTime(float PlaybackTime);                                                                             // [0x8c9440] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.ImportedSoundWave.ReleaseMemory
	// void ReleaseMemory();                                                                                                    // [0x8c9420] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.ImportedSoundWave.IsPlaybackFinished
	// bool IsPlaybackFinished();                                                                                               // [0x8c93f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.ImportedSoundWave.GetPlaybackTime
	// float GetPlaybackTime();                                                                                                 // [0x8c8e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeAudioImporter.ImportedSoundWave.GetPlaybackPercentage
	// float GetPlaybackPercentage();                                                                                           // [0x8c8de0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeAudioImporter.ImportedSoundWave.GetDurationConst
	// float GetDurationConst();                                                                                                // [0x8c8db0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeAudioImporter.ImportedSoundWave.GetDuration
	// float GetDuration();                                                                                                     // [0x8c8d70] Native|Public|BlueprintCallable 
};

/// Class /Script/RuntimeAudioImporter.PreImportedSoundAsset
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UPreImportedSoundAsset : public UObject
{ 
public:
	TArray<char>                                       AudioDataArray;                                             // 0x0028   (0x0010)  
	EAudioFormat                                       AudioFormat;                                                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class URuntimeAudioImporterLibrary : public UObject
{ 
public:
	SDK_UNDEFINED(16,417) /* FMulticastInlineDelegate */ __um(OnProgress);                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,418) /* FMulticastInlineDelegate */ __um(OnResult);                                           // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary.TranscodeRAWDataFromFile
	// bool TranscodeRAWDataFromFile(FString FilePathFrom, ERAWAudioFormat FormatFrom, FString FilePathTo, ERAWAudioFormat FormatTo); // [0x8c9690] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary.TranscodeRAWDataFromBuffer
	// void TranscodeRAWDataFromBuffer(TArray<char> RAWData_From, ERAWAudioFormat FormatFrom, TArray<char>& RAWData_To, ERAWAudioFormat FormatTo); // [0x8c94d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromRAWFile
	// void ImportAudioFromRAWFile(FString FilePath, ERAWAudioFormat Format, int32_t SampleRate, int32_t NumOfChannels);        // [0x8c9280] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromRAWBuffer
	// void ImportAudioFromRAWBuffer(TArray<char> RAWBuffer, ERAWAudioFormat Format, int32_t SampleRate, int32_t NumOfChannels); // [0x8c90e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromPreImportedSound
	// void ImportAudioFromPreImportedSound(class UPreImportedSoundAsset* PreImportedSoundAssetRef);                            // [0x8c9050] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromFile
	// void ImportAudioFromFile(FString FilePath, EAudioFormat Format);                                                         // [0x8c8f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromBuffer
	// void ImportAudioFromBuffer(TArray<char> AudioData, EAudioFormat Format);                                                 // [0x8c8e40] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary.GetAudioFormatAdvanced
	// EAudioFormat GetAudioFormatAdvanced(TArray<char>& AudioData);                                                            // [0x8c8cc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary.GetAudioFormat
	// EAudioFormat GetAudioFormat(FString FilePath);                                                                           // [0x8c8c20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary.ExportSoundWaveToFile
	// bool ExportSoundWaveToFile(class UImportedSoundWave* ImporterSoundWave, FString SavePath, EAudioFormat AudioFormat, char quality); // [0x8c8ac0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary.ExportSoundWaveToBuffer
	// bool ExportSoundWaveToBuffer(class UImportedSoundWave* ImporterSoundWave, TArray<char>& AudioData, EAudioFormat AudioFormat, char quality); // [0x8c8950] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary.CreateRuntimeAudioImporter
	// class URuntimeAudioImporterLibrary* CreateRuntimeAudioImporter();                                                        // [0x8c8920] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary.ConvertSecondsToString
	// FString ConvertSecondsToString(int32_t Seconds);                                                                         // [0x8c8850] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RuntimeAudioImporter.RuntimeAudioImporterLibrary.CompressSoundWave
	// void CompressSoundWave(class UImportedSoundWave* ImportedSoundWaveRef, FDelegateProperty OnCompressedResult, FCompressedSoundWaveInfo CompressedSoundWaveInfo, char quality, bool bFillCompressedBuffer, bool bFillPCMBuffer, bool bFillRAWWaveBuffer); // [0x8c85f0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/RuntimeAudioImporter.CompressedSoundWaveInfo
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FCompressedSoundWaveInfo
{ 
	TEnumAsByte<ESoundGroup>                           SoundGroup;                                                 // 0x0000   (0x0001)  
	bool                                               bLooping;                                                   // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              Volume;                                                     // 0x0004   (0x0004)  
	float                                              Pitch;                                                      // 0x0008   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(FPCMStruct) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UImportedSoundWave) == 0x0410); // 1040 bytes (0x0003C0 - 0x000410)
static_assert(sizeof(UPreImportedSoundAsset) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(URuntimeAudioImporterLibrary) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FCompressedSoundWaveInfo) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(offsetof(UImportedSoundWave, PCMBufferInfo) == 0x03F0);
static_assert(offsetof(UPreImportedSoundAsset, AudioDataArray) == 0x0028);
static_assert(offsetof(UPreImportedSoundAsset, AudioFormat) == 0x0038);
static_assert(offsetof(FCompressedSoundWaveInfo, SoundGroup) == 0x0000);
