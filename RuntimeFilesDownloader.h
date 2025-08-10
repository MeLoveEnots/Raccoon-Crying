
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

/// Enum /Script/RuntimeFilesDownloader.EDownloadToMemoryResult
/// Size: 0x01 (1 bytes)
enum class EDownloadToMemoryResult : uint8_t
{
	EDownloadToMemoryResult__SuccessDownloading                                      = 0,
	EDownloadToMemoryResult__DownloadFailed                                          = 1,
	EDownloadToMemoryResult__InvalidURL                                              = 2
};

/// Enum /Script/RuntimeFilesDownloader.EDownloadToStorageResult
/// Size: 0x01 (1 bytes)
enum class EDownloadToStorageResult : uint8_t
{
	EDownloadToStorageResult__SuccessDownloading                                     = 0,
	EDownloadToStorageResult__DownloadFailed                                         = 1,
	EDownloadToStorageResult__SaveFailed                                             = 2,
	EDownloadToStorageResult__DirectoryCreationFailed                                = 3,
	EDownloadToStorageResult__InvalidURL                                             = 4,
	EDownloadToStorageResult__InvalidSavePath                                        = 5
};

/// Class /Script/RuntimeFilesDownloader.RuntimeFilesDownloaderLibrary
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class URuntimeFilesDownloaderLibrary : public UObject
{ 
public:
	SDK_UNDEFINED(16,419) /* FMulticastInlineDelegate */ __um(OnDownloadProgress);                                 // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0038   (0x0018)  MISSED


	/// Functions
	// Function /Script/RuntimeFilesDownloader.RuntimeFilesDownloaderLibrary.SaveStringToFile
	// bool SaveStringToFile(FString String, FString Filename);                                                                 // [0x8cc6f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RuntimeFilesDownloader.RuntimeFilesDownloaderLibrary.SaveArrayToFile
	// bool SaveArrayToFile(TArray<char>& bytes, FString Filename);                                                             // [0x8cc5e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeFilesDownloader.RuntimeFilesDownloaderLibrary.LoadFileToString
	// bool LoadFileToString(FString& Result, FString Filename);                                                                // [0x8cc4d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeFilesDownloader.RuntimeFilesDownloaderLibrary.LoadFileToArray
	// bool LoadFileToArray(TArray<char>& Result, FString Filename);                                                            // [0x8cc3c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeFilesDownloader.RuntimeFilesDownloaderLibrary.CancelDownload
	// bool CancelDownload();                                                                                                   // [0x8cc390] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeFilesDownloader.RuntimeFilesDownloaderLibrary.BytesToTexture
	// class UTexture2D* BytesToTexture(TArray<char>& bytes);                                                                   // [0x8cc2e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RuntimeFilesDownloader.RuntimeFilesDownloaderLibrary.BytesToString
	// FString BytesToString(TArray<char>& bytes);                                                                              // [0x8cc1f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/RuntimeFilesDownloader.FileToMemoryDownloader
/// Size: 0x0070 (112 bytes) (0x000050 - 0x000070) align 8 MaxSize: 0x0070
class UFileToMemoryDownloader : public URuntimeFilesDownloaderLibrary
{ 
public:
	SDK_UNDEFINED(16,420) /* FMulticastInlineDelegate */ __um(OnDownloadComplete);                                 // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0060   (0x0010)  MISSED


	/// Functions
	// Function /Script/RuntimeFilesDownloader.FileToMemoryDownloader.BP_DownloadFileToMemory
	// void BP_DownloadFileToMemory(FString URL, float Timeout, FString ContentType, FDelegateProperty& OnProgress, FDelegateProperty& OnComplete); // [0x8cbd90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/RuntimeFilesDownloader.FileToStorageDownloader
/// Size: 0x0080 (128 bytes) (0x000050 - 0x000080) align 8 MaxSize: 0x0080
class UFileToStorageDownloader : public URuntimeFilesDownloaderLibrary
{ 
public:
	SDK_UNDEFINED(16,421) /* FMulticastInlineDelegate */ __um(OnDownloadComplete);                                 // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0060   (0x0020)  MISSED


	/// Functions
	// Function /Script/RuntimeFilesDownloader.FileToStorageDownloader.BP_DownloadFileToStorage
	// class UFileToStorageDownloader* BP_DownloadFileToStorage(FString URL, FString SavePath, float Timeout, FString ContentType, FDelegateProperty& OnProgress, FDelegateProperty& OnComplete); // [0x8cbf90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(URuntimeFilesDownloaderLibrary) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UFileToMemoryDownloader) == 0x0070); // 112 bytes (0x000050 - 0x000070)
static_assert(sizeof(UFileToStorageDownloader) == 0x0080); // 128 bytes (0x000050 - 0x000080)
