
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

#pragma pack(push, 0x1)

/// Class /Script/ImgMedia.ImgMediaSource
/// Size: 0x00C8 (200 bytes) (0x000088 - 0x0000C8) align 8 MaxSize: 0x00C8
class UImgMediaSource : public UBaseMediaSource
{ 
public:
	bool                                               IsPathRelativeToProjectRoot;                                // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	FFrameRate                                         FrameRateOverride;                                          // 0x008C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	FString                                            ProxyOverride;                                              // 0x0098   (0x0010)  
	FDirectoryPath                                     SequencePath;                                               // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x00B8   (0x0010)  MISSED


	/// Functions
	// Function /Script/ImgMedia.ImgMediaSource.SetSequencePath
	// void SetSequencePath(FString Path);                                                                                      // [0xf23210] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.SetMipLevelDistance
	// void SetMipLevelDistance(float Distance);                                                                                // [0xf23190] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.RemoveTargetObject
	// void RemoveTargetObject(class AActor* InActor);                                                                          // [0xf23100] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.RemoveGlobalCamera
	// void RemoveGlobalCamera(class AActor* InActor);                                                                          // [0xf23070] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.GetSequencePath
	// FString GetSequencePath();                                                                                               // [0xf22fc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ImgMedia.ImgMediaSource.GetProxies
	// void GetProxies(TArray<FString>& OutProxies);                                                                            // [0xf22ef0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ImgMedia.ImgMediaSource.AddTargetObject
	// void AddTargetObject(class AActor* InActor, float Width);                                                                // [0xf22e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.AddGlobalCamera
	// void AddGlobalCamera(class AActor* InActor);                                                                             // [0xf22d90] Final|Native|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UImgMediaSource) == 0x00C8); // 200 bytes (0x000088 - 0x0000C8)
static_assert(offsetof(UImgMediaSource, FrameRateOverride) == 0x008C);
static_assert(offsetof(UImgMediaSource, ProxyOverride) == 0x0098);
static_assert(offsetof(UImgMediaSource, SequencePath) == 0x00A8);
