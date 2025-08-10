
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

/// Enum /Script/RealTimeImport.ERTITextureType
/// Size: 0x01 (1 bytes)
enum class ERTITextureType : uint8_t
{
	ERTITextureType__E_none                                                          = 0,
	ERTITextureType__E_un                                                            = 1,
	ERTITextureType__E_Kd                                                            = 2,
	ERTITextureType__E_Ks                                                            = 3,
	ERTITextureType__E_Ns                                                            = 4,
	ERTITextureType__E_d                                                             = 5,
	ERTITextureType__E_bump                                                          = 6,
	ERTITextureType__E_disp                                                          = 7,
	ERTITextureType__E_decal                                                         = 8,
	ERTITextureType__E_refl                                                          = 9,
	ERTITextureType__E_Pr                                                            = 10,
	ERTITextureType__E_Pm                                                            = 11,
	ERTITextureType__E_Ps                                                            = 12,
	ERTITextureType__E_Pc                                                            = 13,
	ERTITextureType__E_Pcr                                                           = 14,
	ERTITextureType__E_Ke                                                            = 15,
	ERTITextureType__E_aniso                                                         = 16,
	ERTITextureType__E_anisor                                                        = 17,
	ERTITextureType__E_norm                                                          = 18,
	ERTITextureType__E_RMA                                                           = 19
};

/// Enum /Script/RealTimeImport.ERTISoundFileType
/// Size: 0x01 (1 bytes)
enum class ERTISoundFileType : uint8_t
{
	ERTISoundFileType__E_wav                                                         = 0,
	ERTISoundFileType__E_ogg                                                         = 1
};

/// Enum /Script/RealTimeImport.ERTIDirectoryType
/// Size: 0x01 (1 bytes)
enum class ERTIDirectoryType : uint8_t
{
	ERTIDirectoryType__E_gd                                                          = 0,
	ERTIDirectoryType__E_ad                                                          = 1
};

/// Enum /Script/RealTimeImport.ERTIFileType
/// Size: 0x01 (1 bytes)
enum class ERTIFileType : uint8_t
{
	ERTIFileType__E_wav                                                              = 0,
	ERTIFileType__E_ogg                                                              = 1,
	ERTIFileType__E_png                                                              = 2,
	ERTIFileType__E_bmp                                                              = 3,
	ERTIFileType__E_jpg                                                              = 4,
	ERTIFileType__E_exr                                                              = 5,
	ERTIFileType__E_obj                                                              = 6,
	ERTIFileType__E_fbx                                                              = 7,
	ERTIFileType__E_stl                                                              = 8,
	ERTIFileType__E_all                                                              = 9
};

/// Enum /Script/RealTimeImport.ERTIERGBFormat
/// Size: 0x01 (1 bytes)
enum class ERTIERGBFormat : uint8_t
{
	ERTIERGBFormat__E_auto                                                           = 0,
	ERTIERGBFormat__E_RGBA                                                           = 1,
	ERTIERGBFormat__E_BGRA                                                           = 2,
	ERTIERGBFormat__E_Gray                                                           = 3
};

/// Enum /Script/RealTimeImport.ERTICoordinateSystem
/// Size: 0x01 (1 bytes)
enum class ERTICoordinateSystem : uint8_t
{
	ERTICoordinateSystem__E_RightHanded                                              = 0,
	ERTICoordinateSystem__E_LeftHanded                                               = 1
};

/// Enum /Script/RealTimeImport.ERTIMeshType
/// Size: 0x01 (1 bytes)
enum class ERTIMeshType : uint8_t
{
	ERTIMeshType__E_obj                                                              = 0,
	ERTIMeshType__E_fbx                                                              = 1,
	ERTIMeshType__E_fbxUV                                                            = 2,
	ERTIMeshType__E_stl                                                              = 3
};

/// Enum /Script/RealTimeImport.ERTIExportImageType
/// Size: 0x01 (1 bytes)
enum class ERTIExportImageType : uint8_t
{
	ERTIExportImageType__E_png                                                       = 0,
	ERTIExportImageType__E_bmp                                                       = 1,
	ERTIExportImageType__E_jpg                                                       = 2,
	ERTIExportImageType__E_exr                                                       = 3
};

/// Enum /Script/RealTimeImport.ERTIMeshExportType
/// Size: 0x01 (1 bytes)
enum class ERTIMeshExportType : uint8_t
{
	ERTIMeshExportType__E_obj                                                        = 0
};

/// Enum /Script/RealTimeImport.ERTIReferenceInformationType
/// Size: 0x01 (1 bytes)
enum class ERTIReferenceInformationType : uint8_t
{
	ERTIReferenceInformationType__E_none                                             = 0,
	ERTIReferenceInformationType__E_Direct                                           = 1,
	ERTIReferenceInformationType__E_IndexToDirect                                    = 2
};

/// Enum /Script/RealTimeImport.ERTIInformationType
/// Size: 0x01 (1 bytes)
enum class ERTIInformationType : uint8_t
{
	ERTIInformationType__E_none                                                      = 0,
	ERTIInformationType__E_ByPolygonVertex                                           = 1,
	ERTIInformationType__E_ByVertex                                                  = 2,
	ERTIInformationType__E_ByPolygon                                                 = 3,
	ERTIInformationType__E_ByEdge                                                    = 4,
	ERTIInformationType__E_AllSame                                                   = 5
};

/// Class /Script/RealTimeImport.FileFunctionsRealTimeImport
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UFileFunctionsRealTimeImport : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED


	/// Functions
	// Function /Script/RealTimeImport.FileFunctionsRealTimeImport.WriteStringToFile
	// void WriteStringToFile(ERTIDirectoryType directoryType, FString Data, FString FilePath, bool& success);                  // [0x906850] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RealTimeImport.FileFunctionsRealTimeImport.WriteBytesToFile
	// void WriteBytesToFile(ERTIDirectoryType directoryType, FString FilePath, TArray<char> bytes, bool& success);             // [0x906660] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RealTimeImport.FileFunctionsRealTimeImport.setTimeStamp
	// void setTimeStamp(ERTIDirectoryType directoryType, FString FilePath, FDateTime DateTime);                                // [0x906500] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/RealTimeImport.FileFunctionsRealTimeImport.setReadOnly
	// bool setReadOnly(ERTIDirectoryType directoryType, FString FilePath, bool bNewReadOnlyValue);                             // [0x906390] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.FileFunctionsRealTimeImport.ReadStringFromFile
	// void ReadStringFromFile(ERTIDirectoryType directoryType, FString FilePath, bool& success, FString& Data);                // [0x9061d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RealTimeImport.FileFunctionsRealTimeImport.ReadBytesFromFile
	// TArray<char> ReadBytesFromFile(ERTIDirectoryType directoryType, FString FilePath, bool& success);                        // [0x906020] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RealTimeImport.FileFunctionsRealTimeImport.moveFile
	// bool moveFile(ERTIDirectoryType directoryTypeTo, FString FilePathTo, ERTIDirectoryType directoryTypeFrom, FString FilePathFrom); // [0x905e30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.FileFunctionsRealTimeImport.isReadOnly
	// bool isReadOnly(ERTIDirectoryType directoryType, FString FilePath);                                                      // [0x905d00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.FileFunctionsRealTimeImport.getTimeStamp
	// FDateTime getTimeStamp(ERTIDirectoryType directoryType, FString FilePath);                                               // [0x905bd0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/RealTimeImport.FileFunctionsRealTimeImport.getMD5FromFile
	// void getMD5FromFile(ERTIDirectoryType directoryType, FString FilePath, bool& success, FString& Md5);                     // [0x905a10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RealTimeImport.FileFunctionsRealTimeImport.getFilenameOnDisk
	// FString getFilenameOnDisk(ERTIDirectoryType directoryType, FString FilePath);                                            // [0x9058a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.FileFunctionsRealTimeImport.getFileFunctionsRealTimeImport
	// class UFileFunctionsRealTimeImport* getFileFunctionsRealTimeImport();                                                    // [0x905870] Final|Native|Static|Public 
	// Function /Script/RealTimeImport.FileFunctionsRealTimeImport.getAccessTimeStamp
	// FDateTime getAccessTimeStamp(ERTIDirectoryType directoryType, FString FilePath);                                         // [0x905740] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/RealTimeImport.FileFunctionsRealTimeImport.fileToBase64String
	// void fileToBase64String(ERTIDirectoryType directoryType, FString FilePath, bool& success, FString& base64String, FString& Filename); // [0x905510] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RealTimeImport.FileFunctionsRealTimeImport.fileSize
	// int64_t fileSize(ERTIDirectoryType directoryType, FString FilePath);                                                     // [0x9053e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.FileFunctionsRealTimeImport.fileExists
	// bool fileExists(ERTIDirectoryType directoryType, FString FilePath);                                                      // [0x9052b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.FileFunctionsRealTimeImport.directoryExists
	// bool directoryExists(ERTIDirectoryType directoryType, FString Path);                                                     // [0x905180] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.FileFunctionsRealTimeImport.DeleteFile
	// bool DeleteFile(ERTIDirectoryType directoryType, FString FilePath);                                                      // [0x905050] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.FileFunctionsRealTimeImport.DeleteDirectory
	// bool DeleteDirectory(ERTIDirectoryType directoryType, FString FilePath);                                                 // [0x904f20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.FileFunctionsRealTimeImport.CreateDirectory
	// bool CreateDirectory(ERTIDirectoryType directoryType, FString Path);                                                     // [0x904df0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.FileFunctionsRealTimeImport.bytesToBase64String
	// void bytesToBase64String(TArray<char> bytes, FString& base64String);                                                     // [0x904cb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RealTimeImport.FileFunctionsRealTimeImport.base64StringToBytes
	// TArray<char> base64StringToBytes(ERTIDirectoryType directoryType, FString base64String, bool& success);                  // [0x904b00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RealTimeImport.FileFunctionsRealTimeImport.Base64Encode
	// FString Base64Encode(TArray<char> bytes);                                                                                // [0x9037f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.FileFunctionsRealTimeImport.Base64Decode
	// TArray<char> Base64Decode(FString base64EncodedString);                                                                  // [0x9036c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.FileFunctionsRealTimeImport.addBytesToFile
	// void addBytesToFile(ERTIDirectoryType directoryType, FString FilePath, TArray<char> bytes, bool& success);               // [0x904910] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/RealTimeImport.RealTimeImportAsyncNodeLoadMesh
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class URealTimeImportAsyncNodeLoadMesh : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,588) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,589) /* FMulticastInlineDelegate */ __um(OnFail);                                             // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0050   (0x0008)  MISSED


	/// Functions
	// Function /Script/RealTimeImport.RealTimeImportAsyncNodeLoadMesh.LoadMeshFileAsyncNode
	// class URealTimeImportAsyncNodeLoadMesh* LoadMeshFileAsyncNode(ERTIMeshType fileType, ERTIDirectoryType directoryType, FString FilePath, ERTICoordinateSystem coordinateSystem, bool autoDetectionNormalMap, bool useSRGB, bool createMipMaps, ERTIERGBFormat rgbFormat); // [0x904410] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportAsyncNodeLoadMesh.LoadMeshCompleteDelegate__DelegateSignature
	// void LoadMeshCompleteDelegate__DelegateSignature(TArray<FRTIModelStruct>& modelStructs, FString errorMessage);           // [0x1414700] MulticastDelegate|Public|Delegate|HasOutParms 
};

/// Class /Script/RealTimeImport.RealTimeImportAsyncNodeLoadFile
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class URealTimeImportAsyncNodeLoadFile : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,590) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,591) /* FMulticastInlineDelegate */ __um(OnFail);                                             // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0050   (0x0008)  MISSED


	/// Functions
	// Function /Script/RealTimeImport.RealTimeImportAsyncNodeLoadFile.LoadFileCompleteDelegate__DelegateSignature
	// void LoadFileCompleteDelegate__DelegateSignature(FString Filename, TArray<char>& bytes, int32_t errorCode, FString errorMessage); // [0x1414700] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/RealTimeImport.RealTimeImportAsyncNodeLoadFile.LoadFileAsyncNode
	// class URealTimeImportAsyncNodeLoadFile* LoadFileAsyncNode(ERTIDirectoryType directoryType, FString FilePath);            // [0x903e30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/RealTimeImport.RealTimeImportAsyncNodeSaveFile
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class URealTimeImportAsyncNodeSaveFile : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,592) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,593) /* FMulticastInlineDelegate */ __um(OnFail);                                             // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0050   (0x0008)  MISSED


	/// Functions
	// Function /Script/RealTimeImport.RealTimeImportAsyncNodeSaveFile.SaveFileCompleteDelegate__DelegateSignature
	// void SaveFileCompleteDelegate__DelegateSignature(FString Filename, FString fullPath, int32_t errorCode, FString errorMessage); // [0x1414700] MulticastDelegate|Public|Delegate 
	// Function /Script/RealTimeImport.RealTimeImportAsyncNodeSaveFile.SaveFileAsyncNode
	// class URealTimeImportAsyncNodeSaveFile* SaveFileAsyncNode(ERTIDirectoryType directoryType, FString FilePath, TArray<char> bytes, bool createDirectories, bool overwriteFile); // [0x9046e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/RealTimeImport.RealTimeImportAsyncNodeLoadAllFilesFromDirectory
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class URealTimeImportAsyncNodeLoadAllFilesFromDirectory : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,594) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,595) /* FMulticastInlineDelegate */ __um(OnFail);                                             // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0050   (0x0008)  MISSED


	/// Functions
	// Function /Script/RealTimeImport.RealTimeImportAsyncNodeLoadAllFilesFromDirectory.LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature
	// void LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature(int32_t& Count, TArray<FString>& files, TArray<FString>& filePaths); // [0x1414700] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/RealTimeImport.RealTimeImportAsyncNodeLoadAllFilesFromDirectory.LoadAllFilesFromDirectoryAsyncNode
	// class URealTimeImportAsyncNodeLoadAllFilesFromDirectory* LoadAllFilesFromDirectoryAsyncNode(ERTIDirectoryType directoryType, ERTIFileType fileType, FString dirPath, bool recursiveSearch); // [0x903c90] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/RealTimeImport.RealTimeImportAsyncNodeCreateSoundWaveFromFile
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class URealTimeImportAsyncNodeCreateSoundWaveFromFile : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,596) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,597) /* FMulticastInlineDelegate */ __um(OnFail);                                             // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0050   (0x0008)  MISSED


	/// Functions
	// Function /Script/RealTimeImport.RealTimeImportAsyncNodeCreateSoundWaveFromFile.CreateSoundWaveFromFileCompleteDelegate__DelegateSignature
	// void CreateSoundWaveFromFileCompleteDelegate__DelegateSignature(FString fileID, class USoundWaveProcedural* SoundWave, FString Filename, int32_t errorCode, FString errorMessage); // [0x1414700] MulticastDelegate|Public|Delegate 
	// Function /Script/RealTimeImport.RealTimeImportAsyncNodeCreateSoundWaveFromFile.CreateSoundWaveFromFileAsyncNode
	// class URealTimeImportAsyncNodeCreateSoundWaveFromFile* CreateSoundWaveFromFileAsyncNode(ERTIDirectoryType directoryType, FString FilePath, float maxFileSize, ERTISoundFileType soundFileType); // [0x903b00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/RealTimeImport.RealTimeImportAsyncNodeCreateSoundWaveFromBytes
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class URealTimeImportAsyncNodeCreateSoundWaveFromBytes : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,598) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,599) /* FMulticastInlineDelegate */ __um(OnFail);                                             // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0050   (0x0008)  MISSED


	/// Functions
	// Function /Script/RealTimeImport.RealTimeImportAsyncNodeCreateSoundWaveFromBytes.CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature
	// void CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature(class USoundWaveProcedural* SoundWave, int32_t errorCode, FString errorMessage); // [0x1414700] MulticastDelegate|Public|Delegate 
	// Function /Script/RealTimeImport.RealTimeImportAsyncNodeCreateSoundWaveFromBytes.CreateSoundWaveFromBytesAsyncNode
	// class URealTimeImportAsyncNodeCreateSoundWaveFromBytes* CreateSoundWaveFromBytesAsyncNode(FString Name, TArray<char> bytes, float maxFileSize, ERTISoundFileType soundFileType); // [0x903910] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/RealTimeImport.RealTimeImportAsyncNodeLoadImageFile
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class URealTimeImportAsyncNodeLoadImageFile : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,600) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,601) /* FMulticastInlineDelegate */ __um(OnFail);                                             // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0050   (0x0008)  MISSED


	/// Functions
	// Function /Script/RealTimeImport.RealTimeImportAsyncNodeLoadImageFile.LoadImageFromFileCompleteDelegate__DelegateSignature
	// void LoadImageFromFileCompleteDelegate__DelegateSignature(class UTexture2D* Texture, FString Filename, int32_t errorCode, FString errorMessage); // [0x1414700] MulticastDelegate|Public|Delegate 
	// Function /Script/RealTimeImport.RealTimeImportAsyncNodeLoadImageFile.LoadImageFileAsyncNode
	// class URealTimeImportAsyncNodeLoadImageFile* LoadImageFileAsyncNode(ERTIDirectoryType directoryType, FString FilePath, TEnumAsByte<TextureCompressionSettings> CompressionSettings, bool sRGB, bool createMipMaps, ERTIERGBFormat rgbFormat); // [0x9041e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/RealTimeImport.RealTimeImportAsyncNodeLoadImageBytes
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class URealTimeImportAsyncNodeLoadImageBytes : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,602) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,603) /* FMulticastInlineDelegate */ __um(OnFail);                                             // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0050   (0x0008)  MISSED


	/// Functions
	// Function /Script/RealTimeImport.RealTimeImportAsyncNodeLoadImageBytes.LoadImageFromBytesCompleteDelegate__DelegateSignature
	// void LoadImageFromBytesCompleteDelegate__DelegateSignature(class UTexture2D* Texture, int32_t errorCode, FString errorMessage); // [0x1414700] MulticastDelegate|Public|Delegate 
	// Function /Script/RealTimeImport.RealTimeImportAsyncNodeLoadImageBytes.LoadImageBytesAsyncNode
	// class URealTimeImportAsyncNodeLoadImageBytes* LoadImageBytesAsyncNode(FString Name, TArray<char> bytes, TEnumAsByte<TextureCompressionSettings> CompressionSettings, bool sRGB, bool createMipMaps, ERTIERGBFormat rgbFormat); // [0x903f60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/RealTimeImport.RealTimeImportBPLibrary
/// Size: 0x00E0 (224 bytes) (0x000028 - 0x0000E0) align 8 MaxSize: 0x00E0
class URealTimeImportBPLibrary : public UObject
{ 
public:
	SDK_UNDEFINED(16,604) /* FMulticastInlineDelegate */ __um(onLoadFileEventDelegate);                            // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,605) /* FMulticastInlineDelegate */ __um(onSaveFileEventDelegate);                            // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,606) /* FMulticastInlineDelegate */ __um(onLoadAllFilesFromDirectoryEventDelegate);           // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,607) /* FMulticastInlineDelegate */ __um(onCreateSoundWaveFromFileEventDelegate);             // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,608) /* FMulticastInlineDelegate */ __um(onCreateSoundWaveFromBytesEventDelegate);            // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,609) /* FMulticastInlineDelegate */ __um(onPlaySoundEventDelegate);                           // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,610) /* FMulticastInlineDelegate */ __um(onActiveSoundPositionEventDelegate);                 // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,611) /* FMulticastInlineDelegate */ __um(onActiveSoundEnvelopeValueEventDelegate);            // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,612) /* FMulticastInlineDelegate */ __um(onStopSoundEventDelegate);                           // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,613) /* FMulticastInlineDelegate */ __um(onLoadImageFileEventDelegate);                       // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,614) /* FMulticastInlineDelegate */ __um(onLoadImageBytesEventDelegate);                      // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00D8   (0x0008)  MISSED


	/// Functions
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.textureRenderTarget2D_ToByteArray
	// TArray<char> textureRenderTarget2D_ToByteArray(bool& success, FString& errorMessage, class UTextureRenderTarget2D* TextureRenderTarget2D, ERTIExportImageType Type, int32_t quality); // [0x90de40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.texture2DToTexture2DDynamic
	// class UTexture2DDynamic* texture2DToTexture2DDynamic(class UTexture2D* Texture2D, bool destroyTexture2D);                // [0x90dc30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.texture2dToByteArray
	// TArray<char> texture2dToByteArray(class UTexture2D* Texture2D, ERTIExportImageType Type, int32_t quality);               // [0x90dd00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.streamWavFile
	// void streamWavFile(bool& success, FString& errorMessage, class UObject* WorldContextObject, ERTIDirectoryType directoryType, FString FilePath, float VolumeMultiplier, int32_t startTimeInSeconds, bool persistAcrossLevelTransition); // [0x90d940] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.StopSoundEventDelegate__DelegateSignature
	// void StopSoundEventDelegate__DelegateSignature(FString fileID);                                                          // [0x1414700] MulticastDelegate|Public|Delegate 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.StopSoundEventDelegate
	// void StopSoundEventDelegate(FString fileID);                                                                             // [0x90b640] Final|Native|Public  
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.stopSound
	// void stopSound(FString fileID, bool removeFromCache);                                                                    // [0x90d810] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.stopAllSounds
	// void stopAllSounds(bool removeFromCache);                                                                                // [0x90d790] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.seekWavFileStream
	// void seekWavFileStream(FString fileID, float positionInSeconds);                                                         // [0x90d670] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.SaveFileEventDelegate__DelegateSignature
	// void SaveFileEventDelegate__DelegateSignature(int32_t errorCode, FString eventID, FString Filename, FString fullPath, FString errorMessage); // [0x1414700] MulticastDelegate|Public|Delegate 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.SaveFileEventDelegate
	// void SaveFileEventDelegate(int32_t errorCode, FString eventID, FString Filename, FString fullPath, FString errorMessage); // [0x90b370] Final|Native|Public  
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.SaveFileAsync
	// class URealTimeImportBPLibrary* SaveFileAsync(ERTIDirectoryType directoryType, FString FilePath, bool createDirectories, bool overwriteFile, TArray<char> bytes, FString eventID); // [0x90b090] Final|Native|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.SaveFile
	// void SaveFile(ERTIDirectoryType directoryType, FString FilePath, bool createDirectories, bool overwriteFile, TArray<char> bytes, FString& Filename, FString& fullPath, int32_t& errorCode, FString& errorMessage); // [0x90acd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.resumeSound
	// void resumeSound(FString fileID);                                                                                        // [0x90d590] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.removeTextureFromCacheAndDestroyTexture
	// void removeTextureFromCacheAndDestroyTexture(class UTexture* Texture, bool emptyTextureBeforeDeleting);                  // [0x90d4d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.removeSoundFromCache
	// void removeSoundFromCache(FString fileID);                                                                               // [0x90d3f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.PlaySoundEventDelegate__DelegateSignature
	// void PlaySoundEventDelegate__DelegateSignature(int32_t errorCode, FString fileID, FString errorMessage, float durationInSeconds); // [0x1414700] MulticastDelegate|Public|Delegate 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.PlaySoundEventDelegate
	// void PlaySoundEventDelegate(int32_t errorCode, FString fileID, FString errorMessage, float durationInSeconds);           // [0x90aae0] Final|Native|Public  
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.pauseSound
	// void pauseSound(FString fileID);                                                                                         // [0x90d310] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.Multiply_VectorArrayFloat
	// TArray<FVector> Multiply_VectorArrayFloat(TArray<FVector> A, float B);                                                   // [0x90a970] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.LoadMeshFile
	// void LoadMeshFile(ERTIMeshType fileType, ERTIDirectoryType directoryType, FString FilePath, bool& success, FString& successMessage, TArray<FRTIModelStruct>& modelStructs, ERTICoordinateSystem coordinateSystem, bool autoDetectionNormalMap, bool useSRGB, bool createMipMaps, ERTIERGBFormat rgbFormat); // [0x90a560] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.LoadImageFileEventDelegate__DelegateSignature
	// void LoadImageFileEventDelegate__DelegateSignature(int32_t errorCode, FString eventID, class UTexture2D* Texture, FString Filename, FString errorMessage); // [0x1414700] MulticastDelegate|Public|Delegate 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.LoadImageFileEventDelegate
	// void LoadImageFileEventDelegate(int32_t errorCode, FString eventID, class UTexture2D* Texture, FString Filename, FString errorMessage); // [0x908740] Final|Native|Public  
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.LoadImageFileAsync
	// class URealTimeImportBPLibrary* LoadImageFileAsync(ERTIDirectoryType directoryType, FString FilePath, FString eventID, TEnumAsByte<TextureCompressionSettings> CompressionSettings, bool sRGB, bool createMipMaps, ERTIERGBFormat rgbFormat); // [0x90a2a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.LoadImageFile
	// void LoadImageFile(ERTIDirectoryType directoryType, FString FilePath, class UTexture2D*& Texture, FString& Filename, int32_t& errorCode, FString& errorMessage, TEnumAsByte<TextureCompressionSettings> CompressionSettings, bool sRGB, bool createMipMaps, ERTIERGBFormat rgbFormat); // [0x909f00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.LoadImageBytesEventDelegate__DelegateSignature
	// void LoadImageBytesEventDelegate__DelegateSignature(int32_t errorCode, FString eventID, class UTexture2D* Texture, FString errorMessage); // [0x1414700] MulticastDelegate|Public|Delegate 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.LoadImageBytesEventDelegate
	// void LoadImageBytesEventDelegate(int32_t errorCode, FString eventID, class UTexture2D* Texture, FString errorMessage);   // [0x907fc0] Final|Native|Public  
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.LoadImageBytesAsync
	// class URealTimeImportBPLibrary* LoadImageBytesAsync(FString Name, TArray<char> bytes, FString eventID, TEnumAsByte<TextureCompressionSettings> CompressionSettings, bool sRGB, bool createMipMaps, ERTIERGBFormat rgbFormat); // [0x909bf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.LoadImageBytes
	// void LoadImageBytes(FString Name, TArray<char> bytes, class UTexture2D*& Texture, int32_t& errorCode, FString& errorMessage, TEnumAsByte<TextureCompressionSettings> CompressionSettings, bool sRGB, bool createMipMaps, ERTIERGBFormat rgbFormat); // [0x909870] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.LoadFileEventDelegate__DelegateSignature
	// void LoadFileEventDelegate__DelegateSignature(int32_t errorCode, FString eventID, TArray<char>& bytes, FString Filename, FString errorMessage); // [0x1414700] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.LoadFileEventDelegate
	// void LoadFileEventDelegate(int32_t errorCode, FString eventID, TArray<char>& bytes, FString Filename, FString errorMessage); // [0x9095c0] Final|Native|Public|HasOutParms 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.LoadFileAsync
	// class URealTimeImportBPLibrary* LoadFileAsync(ERTIDirectoryType directoryType, FString FilePath, FString eventID);       // [0x909400] Final|Native|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.LoadFile
	// void LoadFile(ERTIDirectoryType directoryType, FString FilePath, FString& Filename, TArray<char>& bytes, int32_t& errorCode, FString& errorMessage); // [0x909170] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.loadAndPlaySoundFileAsync
	// void loadAndPlaySoundFileAsync(class UObject* WorldContextObject, ERTIDirectoryType directoryType, FString FilePath, float maxFileSize, float VolumeMultiplier, float playSpeed, int32_t startTimeInSeconds, bool persistAcrossLevelTransition, ERTISoundFileType soundFileType); // [0x90d010] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.loadAndPlaySoundBytesAsync
	// void loadAndPlaySoundBytesAsync(class UObject* WorldContextObject, TArray<char> bytes, float VolumeMultiplier, float playSpeed, int32_t startTimeInSeconds, bool persistAcrossLevelTransition); // [0x90cdf0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.LoadAllFilesFromDirectoryEventDelegate__DelegateSignature
	// void LoadAllFilesFromDirectoryEventDelegate__DelegateSignature(FString eventID, int32_t Count, TArray<FString>& files, TArray<FString>& filePaths); // [0x1414700] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.LoadAllFilesFromDirectoryEventDelegate
	// void LoadAllFilesFromDirectoryEventDelegate(FString eventID, int32_t& Count, TArray<FString>& files, TArray<FString>& filePaths); // [0x908f20] Final|Native|Public|HasOutParms 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.LoadAllFilesFromDirectoryAsync
	// class URealTimeImportBPLibrary* LoadAllFilesFromDirectoryAsync(ERTIDirectoryType directoryType, ERTIFileType fileType, FString dirPath, bool recursiveSearch, FString eventID); // [0x908ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.LoadAllFilesFromDirectory
	// bool LoadAllFilesFromDirectory(ERTIDirectoryType directoryType, ERTIFileType fileType, FString dirPath, bool recursiveSearch, int32_t& Count, TArray<FString>& files, TArray<FString>& filePaths); // [0x9089d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.isSoundActive
	// bool isSoundActive(FString fileID);                                                                                      // [0x90cd00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.getSoundInfo
	// void getSoundInfo(ERTIDirectoryType directoryType, FString FilePath, FString& Name, FString& fileNameExtension, int64_t& fileSize, float& Duration, int64_t& NumChannels, int32_t& quality, int64_t& sampleDataSize, int64_t& SampleRate); // [0x90c920] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.getRealTimeImportTarget
	// class URealTimeImportBPLibrary* getRealTimeImportTarget();                                                               // [0x90c8f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.emptyTextureCacheAndDestroyTextures
	// void emptyTextureCacheAndDestroyTextures(bool emptyTexturesBeforeDeleting);                                              // [0x90c870] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.emptySoundCache
	// void emptySoundCache();                                                                                                  // [0x90c850] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.CreateSoundWaveFromFileEventDelegate__DelegateSignature
	// void CreateSoundWaveFromFileEventDelegate__DelegateSignature(int32_t errorCode, FString eventID, class USoundWaveProcedural* Sound, FString Filename, FString errorMessage); // [0x1414700] MulticastDelegate|Public|Delegate 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.CreateSoundWaveFromFileEventDelegate
	// void CreateSoundWaveFromFileEventDelegate(int32_t errorCode, FString eventID, class USoundWaveProcedural* Sound, FString Filename, FString errorMessage); // [0x908740] Final|Native|Public  
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.CreateSoundWaveFromFileAsync
	// class URealTimeImportBPLibrary* CreateSoundWaveFromFileAsync(ERTIDirectoryType directoryType, FString FilePath, float maxFileSize, ERTISoundFileType soundFileType, FString eventID); // [0x908520] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.CreateSoundWaveFromFile
	// void CreateSoundWaveFromFile(ERTIDirectoryType directoryType, FString FilePath, float maxFileSize, FString& fileID, ERTISoundFileType soundFileType, class USoundWaveProcedural*& SoundWave, FString& Filename, int32_t& errorCode, FString& errorMessage); // [0x9081b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.CreateSoundWaveFromBytesEventDelegate__DelegateSignature
	// void CreateSoundWaveFromBytesEventDelegate__DelegateSignature(int32_t errorCode, FString eventID, class USoundWaveProcedural* Sound, FString errorMessage); // [0x1414700] MulticastDelegate|Public|Delegate 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.CreateSoundWaveFromBytesEventDelegate
	// void CreateSoundWaveFromBytesEventDelegate(int32_t errorCode, FString eventID, class USoundWaveProcedural* Sound, FString errorMessage); // [0x907fc0] Final|Native|Public  
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.CreateSoundWaveFromBytesAsync
	// class URealTimeImportBPLibrary* CreateSoundWaveFromBytesAsync(FString Name, TArray<char> bytes, float maxFileSize, ERTISoundFileType soundFileType, FString eventID); // [0x907d40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.CreateSoundWaveFromBytes
	// void CreateSoundWaveFromBytes(FString Name, TArray<char> bytes, float maxFileSize, ERTISoundFileType soundFileType, class USoundWaveProcedural*& Sound, int32_t& errorCode, FString& errorMessage); // [0x907a40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.changeVolumeSound
	// void changeVolumeSound(FString fileID, float VolumeMultiplier);                                                          // [0x90c730] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.changeTexturDestroyThreadSettings
	// void changeTexturDestroyThreadSettings(float threadSleepTimeInSeconds, bool showLogs);                                   // [0x90c660] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.breakTextureStruct
	// void breakTextureStruct(FRTITextureStruct textureData, FString& TextureName, class UTexture2D*& Texture, ERTITextureType& textureType); // [0x90c490] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.breakModelStruct
	// void breakModelStruct(FRTIModelStruct modelStruct, FString& Name, FTransform& relativeTransform, TArray<FRTIMeshStruct>& meshStructs); // [0x90c1c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.breakMeshStruct
	// void breakMeshStruct(FRTIMeshStruct meshStruct, FString& geometryName, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& normals, TArray<FVector2D>& UV0, TArray<FLinearColor>& vertexColors, FRTIMaterialStruct& materialStruct); // [0x90bc30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.breakMaterialStruct
	// void breakMaterialStruct(FRTIMaterialStruct materialData, bool& hasTexture, FString& materialName, FString& TextureName, TArray<FRTITextureStruct>& textures, FColor& ambient, FColor& diffuse, FColor& Specular, float& specularExponent, float& dissolved, float& dissolvedInverted); // [0x90b730] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.ActiveSoundPositionEventDelegate__DelegateSignature
	// void ActiveSoundPositionEventDelegate__DelegateSignature(FString fileID, float positionSecondsStart, float positionSecondsEnd, float positionPercent); // [0x1414700] MulticastDelegate|Public|Delegate 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.ActiveSoundPositionEventDelegate
	// void ActiveSoundPositionEventDelegate(FString fileID, float positionSecondsStart, float positionSecondsEnd, float positionPercent); // [0x907890] Final|Native|Public  
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.ActiveSoundEnvelopeValueEventDelegate__DelegateSignature
	// void ActiveSoundEnvelopeValueEventDelegate__DelegateSignature(float averageEnvelopeValue, float maxEnvelope, int32_t numWaveInstances); // [0x1414700] MulticastDelegate|Public|Delegate 
	// Function /Script/RealTimeImport.RealTimeImportBPLibrary.ActiveSoundEnvelopeValueEventDelegate
	// void ActiveSoundEnvelopeValueEventDelegate(float averageEnvelopeValue, float maxEnvelope, int32_t numWaveInstances);     // [0x907770] Final|Native|Public  
};

/// Class /Script/RealTimeImport.RealTimeImportImage
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class URealTimeImportImage : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0028   (0x0068)  MISSED


	/// Functions
	// Function /Script/RealTimeImport.RealTimeImportImage.getRealTimeImportImage
	// class URealTimeImportImage* getRealTimeImportImage();                                                                    // [0x910480] Final|Native|Static|Public 
	// Function /Script/RealTimeImport.RealTimeImportImage.getImageColors
	// TArray<FColor> getImageColors(TArray<char> imageBytes);                                                                  // [0x910360] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/RealTimeImport.RealTimeImportMesh
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class URealTimeImportMesh : public UObject
{ 
public:
	class URealTimeImportMeshSTL*                      importerSTL;                                                // 0x0028   (0x0008)  
	class URealTimeImportMeshOBJ*                      importerOBJ;                                                // 0x0030   (0x0008)  
	class URealTimeImportMeshFBX*                      importerFBX;                                                // 0x0038   (0x0008)  


	/// Functions
	// Function /Script/RealTimeImport.RealTimeImportMesh.getRealTimeImportMesh
	// class URealTimeImportMesh* getRealTimeImportMesh();                                                                      // [0x9104b0] Final|Native|Static|Public 
	// Function /Script/RealTimeImport.RealTimeImportMesh.cleanTest
	// void cleanTest(TArray<FRTIModelStruct> modelStructs);                                                                    // [0x910280] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/RealTimeImport.RealTimeImportMeshFBX
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URealTimeImportMeshFBX : public UObject
{ 
public:
};

/// Class /Script/RealTimeImport.RealTimeImportMeshOBJ
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URealTimeImportMeshOBJ : public UObject
{ 
public:
};

/// Class /Script/RealTimeImport.RealTimeImportMeshSTL
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URealTimeImportMeshSTL : public UObject
{ 
public:
};

/// Class /Script/RealTimeImport.RealTimeImportSound
/// Size: 0x01C8 (456 bytes) (0x000028 - 0x0001C8) align 8 MaxSize: 0x01C8
class URealTimeImportSound : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x1A0];                                     // 0x0028   (0x01A0)  MISSED


	/// Functions
	// Function /Script/RealTimeImport.RealTimeImportSound.getRealTimeImportSound
	// class URealTimeImportSound* getRealTimeImportSound();                                                                    // [0x9104e0] Final|Native|Static|Public 
};

/// Struct /Script/RealTimeImport.RTITextureStruct
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FRTITextureStruct
{ 
	FString                                            TextureName;                                                // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
	ERTITextureType                                    textureType;                                                // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0019   (0x0007)  MISSED
	int64_t                                            fbxID;                                                      // 0x0020   (0x0008)  
};

/// Struct /Script/RealTimeImport.RTIMaterialStruct
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FRTIMaterialStruct
{ 
	bool                                               IsEmpty;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            materialName;                                               // 0x0008   (0x0010)  
	FString                                            TextureName;                                                // 0x0018   (0x0010)  
	TMap<FString, FRTITextureStruct>                   textures;                                                   // 0x0028   (0x0050)  
	TArray<FString>                                    texturesFileNames;                                          // 0x0078   (0x0010)  
	FColor                                             ambient;                                                    // 0x0088   (0x0004)  
	FColor                                             diffuse;                                                    // 0x008C   (0x0004)  
	FColor                                             Specular;                                                   // 0x0090   (0x0004)  
	float                                              specularExponent;                                           // 0x0094   (0x0004)  
	float                                              dissolved;                                                  // 0x0098   (0x0004)  
	float                                              dissolvedInverted;                                          // 0x009C   (0x0004)  
	int64_t                                            fbxID;                                                      // 0x00A0   (0x0008)  
};

/// Struct /Script/RealTimeImport.RTIMeshStruct
/// Size: 0x0118 (280 bytes) (0x000000 - 0x000118) align 8 MaxSize: 0x0118
struct FRTIMeshStruct
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	FString                                            geometryName;                                               // 0x0008   (0x0010)  
	TArray<int32_t>                                    Triangles;                                                  // 0x0018   (0x0010)  
	TArray<FVector>                                    Vertices;                                                   // 0x0028   (0x0010)  
	TArray<FVector>                                    normals;                                                    // 0x0038   (0x0010)  
	TArray<FVector2D>                                  UV0;                                                        // 0x0048   (0x0010)  
	TArray<FLinearColor>                               vertexColors;                                               // 0x0058   (0x0010)  
	bool                                               hasMaterialData;                                            // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0069   (0x0007)  MISSED
	FRTIMaterialStruct                                 materialData;                                               // 0x0070   (0x00A8)  
};

/// Struct /Script/RealTimeImport.RTIModelStruct
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 16 MaxSize: 0x0050
struct FRTIModelStruct
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FTransform                                         relativeTransform;                                          // 0x0010   (0x0030)  
	TArray<FRTIMeshStruct>                             meshStructs;                                                // 0x0040   (0x0010)  
};

/// Struct /Script/RealTimeImport.SRealtimeImportThreadJobData
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FSRealtimeImportThreadJobData
{ 
	unsigned char                                      UnknownData00_2[0x90];                                      // 0x0000   (0x0090)  MISSED
};

/// Struct /Script/RealTimeImport.RTISoundDataStruct
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FRTISoundDataStruct
{ 
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/RealTimeImport.RTIWavPlayAsyncStruct
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FRTIWavPlayAsyncStruct
{ 
	unsigned char                                      UnknownData00_2[0x68];                                      // 0x0000   (0x0068)  MISSED
};

/// Struct /Script/RealTimeImport.RTITextureToDeleteStruct
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRTITextureToDeleteStruct
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/RealTimeImport.RTIFBXConnections
/// Size: 0x0190 (400 bytes) (0x000000 - 0x000190) align 8 MaxSize: 0x0190
struct FRTIFBXConnections
{ 
	unsigned char                                      UnknownData00_2[0x190];                                     // 0x0000   (0x0190)  MISSED
};

/// Struct /Script/RealTimeImport.RTIFBXModelStruct
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 16 MaxSize: 0x00B0
struct FRTIFBXModelStruct
{ 
	unsigned char                                      UnknownData00_2[0xB0];                                      // 0x0000   (0x00B0)  MISSED
};

/// Struct /Script/RealTimeImport.RTIFBXArmatureStruct
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FRTIFBXArmatureStruct
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/RealTimeImport.RTIFBXGeometryStruct
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FRTIFBXGeometryStruct
{ 
	unsigned char                                      UnknownData00_2[0xB8];                                      // 0x0000   (0x00B8)  MISSED
};

/// Struct /Script/RealTimeImport.RTIFBXMaterialStruct
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FRTIFBXMaterialStruct
{ 
	unsigned char                                      UnknownData00_2[0x98];                                      // 0x0000   (0x0098)  MISSED
};

/// Struct /Script/RealTimeImport.RTIFBXTextureStruct
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FRTIFBXTextureStruct
{ 
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x0000   (0x0060)  MISSED
};

/// Struct /Script/RealTimeImport.RTIFBXVideoStruct
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FRTIFBXVideoStruct
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UFileFunctionsRealTimeImport) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(URealTimeImportAsyncNodeLoadMesh) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(URealTimeImportAsyncNodeLoadFile) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(URealTimeImportAsyncNodeSaveFile) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(URealTimeImportAsyncNodeLoadAllFilesFromDirectory) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(URealTimeImportAsyncNodeCreateSoundWaveFromFile) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(URealTimeImportAsyncNodeCreateSoundWaveFromBytes) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(URealTimeImportAsyncNodeLoadImageFile) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(URealTimeImportAsyncNodeLoadImageBytes) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(URealTimeImportBPLibrary) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(sizeof(URealTimeImportImage) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(URealTimeImportMesh) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(URealTimeImportMeshFBX) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URealTimeImportMeshOBJ) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URealTimeImportMeshSTL) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URealTimeImportSound) == 0x01C8); // 456 bytes (0x000028 - 0x0001C8)
static_assert(sizeof(FRTITextureStruct) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRTIMaterialStruct) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FRTIMeshStruct) == 0x0118); // 280 bytes (0x000000 - 0x000118)
static_assert(sizeof(FRTIModelStruct) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FSRealtimeImportThreadJobData) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FRTISoundDataStruct) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FRTIWavPlayAsyncStruct) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FRTITextureToDeleteStruct) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRTIFBXConnections) == 0x0190); // 400 bytes (0x000000 - 0x000190)
static_assert(sizeof(FRTIFBXModelStruct) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(FRTIFBXArmatureStruct) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FRTIFBXGeometryStruct) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(sizeof(FRTIFBXMaterialStruct) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FRTIFBXTextureStruct) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FRTIFBXVideoStruct) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(offsetof(URealTimeImportMesh, importerSTL) == 0x0028);
static_assert(offsetof(URealTimeImportMesh, importerOBJ) == 0x0030);
static_assert(offsetof(URealTimeImportMesh, importerFBX) == 0x0038);
static_assert(offsetof(FRTITextureStruct, TextureName) == 0x0000);
static_assert(offsetof(FRTITextureStruct, textureType) == 0x0018);
static_assert(offsetof(FRTIMaterialStruct, materialName) == 0x0008);
static_assert(offsetof(FRTIMaterialStruct, TextureName) == 0x0018);
static_assert(offsetof(FRTIMaterialStruct, textures) == 0x0028);
static_assert(offsetof(FRTIMaterialStruct, texturesFileNames) == 0x0078);
static_assert(offsetof(FRTIMaterialStruct, ambient) == 0x0088);
static_assert(offsetof(FRTIMaterialStruct, diffuse) == 0x008C);
static_assert(offsetof(FRTIMaterialStruct, Specular) == 0x0090);
static_assert(offsetof(FRTIMeshStruct, geometryName) == 0x0008);
static_assert(offsetof(FRTIMeshStruct, Triangles) == 0x0018);
static_assert(offsetof(FRTIMeshStruct, Vertices) == 0x0028);
static_assert(offsetof(FRTIMeshStruct, normals) == 0x0038);
static_assert(offsetof(FRTIMeshStruct, UV0) == 0x0048);
static_assert(offsetof(FRTIMeshStruct, vertexColors) == 0x0058);
static_assert(offsetof(FRTIMeshStruct, materialData) == 0x0070);
static_assert(offsetof(FRTIModelStruct, Name) == 0x0000);
static_assert(offsetof(FRTIModelStruct, relativeTransform) == 0x0010);
static_assert(offsetof(FRTIModelStruct, meshStructs) == 0x0040);
