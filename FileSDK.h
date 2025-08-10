
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

/// Enum /Script/FileSDK.EFileSDKFileAnchor
/// Size: 0x01 (1 bytes)
enum class EFileSDKFileAnchor : uint8_t
{
	EFileSDKFileAnchor__Beginning                                                    = 0,
	EFileSDKFileAnchor__Current                                                      = 1,
	EFileSDKFileAnchor__End                                                          = 2
};

/// Enum /Script/FileSDK.EFileSDKEncodingOptions
/// Size: 0x01 (1 bytes)
enum class EFileSDKEncodingOptions : uint8_t
{
	EFileSDKEncodingOptions__AutoDetect                                              = 0,
	EFileSDKEncodingOptions__ForceAnsi                                               = 1,
	EFileSDKEncodingOptions__ForceUnicode                                            = 2,
	EFileSDKEncodingOptions__ForceUTF8                                               = 3,
	EFileSDKEncodingOptions__ForceUTF8WithoutBOM                                     = 4
};

/// Enum /Script/FileSDK.EFileSDKFileType
/// Size: 0x01 (1 bytes)
enum class EFileSDKFileType : uint8_t
{
	EFileSDKFileType__File                                                           = 0,
	EFileSDKFileType__Directory                                                      = 1
};

/// Class /Script/FileSDK.FileSDKBPLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UFileSDKBPLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/FileSDK.FileSDKBPLibrary.WriteStringToFile
	// bool WriteStringToFile(FString Filename, FString Content, bool Append, EFileSDKEncodingOptions Encoding);                // [0x7f8c80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FileSDK.FileSDKBPLibrary.WriteBytesToFile
	// bool WriteBytesToFile(FString Filename, TArray<char> Content);                                                           // [0x7f8b10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FileSDK.FileSDKBPLibrary.RenameFileOrDirectory
	// bool RenameFileOrDirectory(FString Source, FString Destination);                                                         // [0x7f88d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FileSDK.FileSDKBPLibrary.ReadStringFromFile
	// bool ReadStringFromFile(FString Filename, FString& Content);                                                             // [0x7f86b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/FileSDK.FileSDKBPLibrary.ReadLinesFromFile
	// bool ReadLinesFromFile(FString Filename, class UClass* LineReader, TArray<FString>& Lines);                              // [0x7f8400] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/FileSDK.FileSDKBPLibrary.ReadBytesFromFile
	// bool ReadBytesFromFile(FString Filename, TArray<char>& Content);                                                         // [0x7f81e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/FileSDK.FileSDKBPLibrary.OpenFileReader
	// class UFileSDKFileReader* OpenFileReader(FString Filename, bool OpenInBinaryMode);                                       // [0x7f7fb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FileSDK.FileSDKBPLibrary.GetFilesFromDirectory
	// TArray<FString> GetFilesFromDirectory(FString DirectoryToSearch, FString FilterFilesWithExtension, bool SearchSubfolders, EFileSDKFileType fileType); // [0x7f7d00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FileSDK.FileSDKBPLibrary.GetFileOrDirectoryInfo
	// void GetFileOrDirectoryInfo(FString Path, FFileSDKFileInfo& Info);                                                       // [0x7f7ba0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/FileSDK.FileSDKBPLibrary.GetEnvironmentVariable
	// FString GetEnvironmentVariable(FString VariableName);                                                                    // [0x7f7a70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FileSDK.FileSDKBPLibrary.GetDirectoryContentsWithFileInfo
	// TArray<FFileSDKFileInfo> GetDirectoryContentsWithFileInfo(FString Directory, bool SearchSubfolders);                     // [0x7f7890] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FileSDK.FileSDKBPLibrary.GetCurrentUsername
	// FString GetCurrentUsername();                                                                                            // [0x7f7810] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FileSDK.FileSDKBPLibrary.GetCurrentUserHomeDirectory
	// FString GetCurrentUserHomeDirectory();                                                                                   // [0x7f7790] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FileSDK.FileSDKBPLibrary.DeleteFile
	// bool DeleteFile(FString Filename);                                                                                       // [0x7f75f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FileSDK.FileSDKBPLibrary.DeleteDirectory
	// bool DeleteDirectory(FString DirectoryName, bool Recursive);                                                             // [0x7f74c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FileSDK.FileSDKBPLibrary.CreateFile
	// void CreateFile(FString Filename, bool ClearContentsIfExists, bool CreateDirectoryTree);                                 // [0x7f7340] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FileSDK.FileSDKBPLibrary.CreateDirectory
	// bool CreateDirectory(FString DirectoryName, bool CreateDirectoryTree);                                                   // [0x7f7210] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FileSDK.FileSDKBPLibrary.CopyFileAsync
	// void CopyFileAsync(FString Source, FString Destination, FDelegateProperty& ProgressCallback, FFileSDKDelegatePreInfo PreInfo, int32_t ChunkSizeInKilobytes); // [0x7f6d30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FileSDK.FileSDKBPLibrary.CopyFile
	// bool CopyFile(FString Source, FString Destination, FDelegateProperty& ProgressCallback, FFileSDKDelegatePreInfo PreInfo, int32_t ChunkSizeInKilobytes, bool OverwriteDestination); // [0x7f6a90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FileSDK.FileSDKBPLibrary.CopyDirectoryAsync
	// void CopyDirectoryAsync(FString Source, FString Destination, FDelegateProperty& ProgressCallback, bool OverwriteDestination, int32_t ChunkSizeInKilobytes); // [0x7f6830] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FileSDK.FileSDKBPLibrary.CopyDirectory
	// bool CopyDirectory(FString Source, FString Destination, FDelegateProperty& ProgressCallback, bool OverwriteDestination, int32_t ChunkSizeInKilobytes); // [0x7f65d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FileSDK.FileSDKCopyFileAsync
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UFileSDKCopyFileAsync : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,368) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x38];                                      // 0x0040   (0x0038)  MISSED


	/// Functions
	// Function /Script/FileSDK.FileSDKCopyFileAsync.CopyFileAsync
	// class UFileSDKCopyFileAsync* CopyFileAsync(class UObject* WorldContextObject, FString Source, FString Destination, FDelegateProperty& ProgressCallback, bool OverwriteDestination, int32_t ChunkSizeInKilobytes); // [0x7f6f70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FileSDK.FileSDKFileReader
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UFileSDKFileReader : public UObject
{ 
public:
	FString                                            Filename;                                                   // 0x0028   (0x0010)  
	bool                                               BinaryMode;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x0039   (0x000F)  MISSED


	/// Functions
	// Function /Script/FileSDK.FileSDKFileReader.SeekFilePosition
	// bool SeekFilePosition(EFileSDKFileAnchor Anchor, int32_t Offset);                                                        // [0x7f8a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/FileSDK.FileSDKFileReader.ReadStringToEnd
	// int32_t ReadStringToEnd(FString& Content);                                                                               // [0x7f8810] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FileSDK.FileSDKFileReader.ReadString
	// int32_t ReadString(int32_t Num, FString& Content);                                                                       // [0x7f85b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FileSDK.FileSDKFileReader.ReadBytesToEnd
	// int32_t ReadBytesToEnd(TArray<char>& Content);                                                                           // [0x7f8340] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FileSDK.FileSDKFileReader.ReadBytes
	// int32_t ReadBytes(int32_t Num, TArray<char>& Content);                                                                   // [0x7f80e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FileSDK.FileSDKFileReader.IsGood
	// bool IsGood();                                                                                                           // [0x7f7f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/FileSDK.FileSDKFileReader.Close
	// void Close();                                                                                                            // [0x7f65b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FileSDK.FileSDKLineReader
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UFileSDKLineReader : public UObject
{ 
public:


	/// Functions
	// Function /Script/FileSDK.FileSDKLineReader.FilterLine
	// bool FilterLine(FString Line);                                                                                           // [0x7f76e0] Native|Event|Public|BlueprintEvent 
};

/// Struct /Script/FileSDK.FileSDKDelegatePreInfo
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FFileSDKDelegatePreInfo
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/FileSDK.FileSDKFileInfo
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FFileSDKFileInfo
{ 
	FString                                            AbsolutePath;                                               // 0x0000   (0x0010)  
	FString                                            Filename;                                                   // 0x0010   (0x0010)  
	FDateTime                                          CreationTime;                                               // 0x0020   (0x0008)  
	FDateTime                                          AccessTime;                                                 // 0x0028   (0x0008)  
	FDateTime                                          ModificationTime;                                           // 0x0030   (0x0008)  
	int64_t                                            fileSize;                                                   // 0x0038   (0x0008)  
	bool                                               bIsDirectory;                                               // 0x0040   (0x0001)  
	bool                                               bIsReadOnly;                                                // 0x0041   (0x0001)  
	bool                                               bIsValid;                                                   // 0x0042   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x0043   (0x0005)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UFileSDKBPLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UFileSDKCopyFileAsync) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UFileSDKFileReader) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UFileSDKLineReader) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FFileSDKDelegatePreInfo) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FFileSDKFileInfo) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(offsetof(UFileSDKFileReader, Filename) == 0x0028);
static_assert(offsetof(FFileSDKFileInfo, AbsolutePath) == 0x0000);
static_assert(offsetof(FFileSDKFileInfo, Filename) == 0x0010);
static_assert(offsetof(FFileSDKFileInfo, CreationTime) == 0x0020);
static_assert(offsetof(FFileSDKFileInfo, AccessTime) == 0x0028);
static_assert(offsetof(FFileSDKFileInfo, ModificationTime) == 0x0030);
