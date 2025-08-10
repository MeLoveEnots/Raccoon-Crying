
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

/// Class /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBlueprintFileUtilsBPLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.moveFile
	// bool moveFile(FString DestFilename, FString SrcFilename, bool bReplace, bool bEvenIfReadOnly);                           // [0x914390] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.MakeDirectory
	// bool MakeDirectory(FString Path, bool bCreateTree);                                                                      // [0x9142b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.GetUserDirectory
	// FString GetUserDirectory();                                                                                              // [0x914230] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.FindRecursive
	// bool FindRecursive(FString StartDirectory, TArray<FString>& FoundPaths, FString Wildcard, bool bFindFiles, bool bFindDirectories); // [0x914030] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.FindFiles
	// bool FindFiles(FString Directory, TArray<FString>& FoundFiles, FString FileExtension);                                   // [0x913ea0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.fileExists
	// bool fileExists(FString Filename);                                                                                       // [0x913e00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.directoryExists
	// bool directoryExists(FString Directory);                                                                                 // [0x913d60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.DeleteFile
	// bool DeleteFile(FString Filename, bool bMustExist, bool bEvenIfReadOnly);                                                // [0x913c30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.DeleteDirectory
	// bool DeleteDirectory(FString Directory, bool bMustExist, bool bDeleteRecursively);                                       // [0x913b00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.CopyFile
	// bool CopyFile(FString DestFilename, FString SrcFilename, bool bReplace, bool bEvenIfReadOnly);                           // [0x913980] Final|Native|Static|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UBlueprintFileUtilsBPLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
