
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

/// Class /Script/PakLoader.AsyncPakDownloader
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UAsyncPakDownloader : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,584) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,585) /* FMulticastInlineDelegate */ __um(OnFail);                                             // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,586) /* FMulticastInlineDelegate */ __um(OnProgress);                                         // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0060   (0x0010)  MISSED


	/// Functions
	// Function /Script/PakLoader.AsyncPakDownloader.DownloadPak
	// class UAsyncPakDownloader* DownloadPak(FString URL, FString SavePath);                                                   // [0xd4bdc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PakLoader.PakLoaderLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPakLoaderLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PakLoader.PakLoaderLibrary.UnRegisterMountPoint
	// void UnRegisterMountPoint(FString RootPath, FString ContentPath);                                                        // [0xd4d290] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PakLoader.PakLoaderLibrary.UnmountPakFile
	// bool UnmountPakFile(FString PakFilename);                                                                                // [0xd4d380] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PakLoader.PakLoaderLibrary.TryConvertFilenameToLongPackageName
	// bool TryConvertFilenameToLongPackageName(FString Filename, FString& PackageName);                                        // [0xd4d190] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.SHA1SUM
	// FString SHA1SUM(FString Filename);                                                                                       // [0xd4d0b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.RuntimeLog
	// void RuntimeLog(FString Text);                                                                                           // [0xd4d020] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PakLoader.PakLoaderLibrary.RegisterMountPoint
	// void RegisterMountPoint(FString RootPath, FString ContentPath);                                                          // [0xd4cf30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PakLoader.PakLoaderLibrary.RegisterEncryptionKey
	// bool RegisterEncryptionKey(FString Guid, FString AesKey);                                                                // [0xd4ce40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PakLoader.PakLoaderLibrary.ProjectPersistentDownloadDir
	// FString ProjectPersistentDownloadDir();                                                                                  // [0xd4cdc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.MountPakFileEasy
	// bool MountPakFileEasy(FString PakFilename);                                                                              // [0xd4cd20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PakLoader.PakLoaderLibrary.MountPakFile
	// bool MountPakFile(FString PakFilename, FString MountPath);                                                               // [0xd4cc30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PakLoader.PakLoaderLibrary.LoadPakAssetRegistryFile
	// void LoadPakAssetRegistryFile(FString AssetRegistryFile);                                                                // [0xd4cba0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PakLoader.PakLoaderLibrary.IsValidPakFile
	// bool IsValidPakFile(FString PakFilename, int64_t& PakSize);                                                              // [0xd4cab0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PakLoader.PakLoaderLibrary.IsPackagedBuild
	// bool IsPackagedBuild();                                                                                                  // [0xd4ca80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetShortName
	// FString GetShortName(FString LongName);                                                                                  // [0xd4c9a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetProjectName
	// FString GetProjectName();                                                                                                // [0xd4c920] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetPakFileTexture2D
	// class UTexture2D* GetPakFileTexture2D(FString Filename);                                                                 // [0xd4c880] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetPakFileText
	// bool GetPakFileText(FString Filename, FString& String);                                                                  // [0xd4c780] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetPakFileStaticMesh
	// class UStaticMesh* GetPakFileStaticMesh(FString Filename);                                                               // [0xd4c6e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetPakFileSound
	// class USoundBase* GetPakFileSound(FString Filename);                                                                     // [0xd4c640] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetPakFileSkeletalMesh
	// class USkeletalMesh* GetPakFileSkeletalMesh(FString Filename);                                                           // [0xd4c5a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetPakFileObject
	// class UObject* GetPakFileObject(FString Filename);                                                                       // [0xd4c500] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetPakFileMaterialInstanceConstant
	// class UMaterialInstanceConstant* GetPakFileMaterialInstanceConstant(FString Filename);                                   // [0xd4c460] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetPakFileMaterial
	// class UMaterial* GetPakFileMaterial(FString Filename);                                                                   // [0xd4c3c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetPakFileClass
	// class UClass* GetPakFileClass(FString Filename);                                                                         // [0xd4c320] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetPakFileAnimSequence
	// class UAnimSequence* GetPakFileAnimSequence(FString Filename);                                                           // [0xd4c280] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetMountedPakFilenames
	// TArray<FString> GetMountedPakFilenames();                                                                                // [0xd4c200] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetFilesInPakDirectory
	// TArray<FString> GetFilesInPakDirectory(FString PakDirectory, bool bRecursively);                                         // [0xd4c0d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PakLoader.PakLoaderLibrary.GetFilesInPak
	// TArray<FString> GetFilesInPak(FString PakFilename, bool bUAssetOnly);                                                    // [0xd4bfa0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.EnableRuntimeLog
	// void EnableRuntimeLog(bool bEnable, FString NewLogPath);                                                                 // [0xd4bec0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PakLoader.PakLoaderLibrary.DoesPakDirectoryExist
	// bool DoesPakDirectoryExist(FString PakDirectory);                                                                        // [0xd4bd20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

#pragma pack(pop)


static_assert(sizeof(UAsyncPakDownloader) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UPakLoaderLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
