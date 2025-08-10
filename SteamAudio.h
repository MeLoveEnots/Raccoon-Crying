
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioExtensions
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/SteamAudio.EIplAudioEngine
/// Size: 0x01 (1 bytes)
enum class EIplAudioEngine : uint8_t
{
	EIplAudioEngine__UNREAL                                                          = 0
};

/// Enum /Script/SteamAudio.EIplRayTracerType
/// Size: 0x01 (1 bytes)
enum class EIplRayTracerType : uint8_t
{
	EIplRayTracerType__PHONON                                                        = 0,
	EIplRayTracerType__EMBREE                                                        = 1,
	EIplRayTracerType__RADEONRAYS                                                    = 2
};

/// Enum /Script/SteamAudio.EIplConvolutionType
/// Size: 0x01 (1 bytes)
enum class EIplConvolutionType : uint8_t
{
	EIplConvolutionType__PHONON                                                      = 0,
	EIplConvolutionType__TRUEAUDIONEXT                                               = 1
};

/// Enum /Script/SteamAudio.EIplSimulationType
/// Size: 0x01 (1 bytes)
enum class EIplSimulationType : uint8_t
{
	EIplSimulationType__REALTIME                                                     = 0,
	EIplSimulationType__BAKED                                                        = 1,
	EIplSimulationType__DISABLED                                                     = 2
};

/// Enum /Script/SteamAudio.EIplDirectOcclusionMode
/// Size: 0x01 (1 bytes)
enum class EIplDirectOcclusionMode : uint8_t
{
	EIplDirectOcclusionMode__NONE                                                    = 0,
	EIplDirectOcclusionMode__DIRECTOCCLUSION_NOTRANSMISSION                          = 1,
	EIplDirectOcclusionMode__DIRECTOCCLUSION_TRANSMISSIONBYVOLUME                    = 2,
	EIplDirectOcclusionMode__DIRECTOCCLUSION_TRANSMISSIONBYFREQUENCY                 = 3
};

/// Enum /Script/SteamAudio.EIplDirectOcclusionMethod
/// Size: 0x01 (1 bytes)
enum class EIplDirectOcclusionMethod : uint8_t
{
	EIplDirectOcclusionMethod__RAYCAST                                               = 0,
	EIplDirectOcclusionMethod__VOLUMETRIC                                            = 1
};

/// Enum /Script/SteamAudio.EIplHrtfInterpolationMethod
/// Size: 0x01 (1 bytes)
enum class EIplHrtfInterpolationMethod : uint8_t
{
	EIplHrtfInterpolationMethod__NEAREST                                             = 0,
	EIplHrtfInterpolationMethod__BILINEAR                                            = 1
};

/// Enum /Script/SteamAudio.EIplSpatializationMethod
/// Size: 0x01 (1 bytes)
enum class EIplSpatializationMethod : uint8_t
{
	EIplSpatializationMethod__PANNING                                                = 0,
	EIplSpatializationMethod__HRTF                                                   = 1
};

/// Enum /Script/SteamAudio.EQualitySettings
/// Size: 0x01 (1 bytes)
enum class EQualitySettings : uint8_t
{
	EQualitySettings__LOW                                                            = 0,
	EQualitySettings__MEDIUM                                                         = 1,
	EQualitySettings__HIGH                                                           = 2,
	EQualitySettings__CUSTOM                                                         = 3
};

/// Enum /Script/SteamAudio.EPhononMaterial
/// Size: 0x01 (1 bytes)
enum class EPhononMaterial : uint8_t
{
	EPhononMaterial__GENERIC                                                         = 0,
	EPhononMaterial__BRICK                                                           = 1,
	EPhononMaterial__CONCRETE                                                        = 2,
	EPhononMaterial__CERAMIC                                                         = 3,
	EPhononMaterial__GRAVEL                                                          = 4,
	EPhononMaterial__CARPET                                                          = 5,
	EPhononMaterial__GLASS                                                           = 6,
	EPhononMaterial__PLASTER                                                         = 7,
	EPhononMaterial__WOOD                                                            = 8,
	EPhononMaterial__METAL                                                           = 9,
	EPhononMaterial__ROCK                                                            = 10,
	EPhononMaterial__CUSTOM                                                          = 11
};

/// Enum /Script/SteamAudio.EPhononProbeMobility
/// Size: 0x01 (1 bytes)
enum class EPhononProbeMobility : uint8_t
{
	EPhononProbeMobility__STATIC                                                     = 0,
	EPhononProbeMobility__DYNAMIC                                                    = 1
};

/// Enum /Script/SteamAudio.EPhononProbePlacementStrategy
/// Size: 0x01 (1 bytes)
enum class EPhononProbePlacementStrategy : uint8_t
{
	EPhononProbePlacementStrategy__CENTROID                                          = 0,
	EPhononProbePlacementStrategy__UNIFORM_FLOOR                                     = 1
};

/// Class /Script/SteamAudio.PhononGeometryComponent
/// Size: 0x0220 (544 bytes) (0x0001F8 - 0x000220) align 16 MaxSize: 0x0220
class UPhononGeometryComponent : public USceneComponent
{ 
public:
	bool                                               ExportAllChildren;                                          // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01F9   (0x0003)  MISSED
	uint32_t                                           NumVertices;                                                // 0x01FC   (0x0004)  
	uint32_t                                           NumTriangles;                                               // 0x0200   (0x0004)  
	unsigned char                                      UnknownData01_7[0x1C];                                      // 0x0204   (0x001C)  MISSED
};

/// Class /Script/SteamAudio.PhononMaterialComponent
/// Size: 0x00D8 (216 bytes) (0x0000B0 - 0x0000D8) align 8 MaxSize: 0x00D8
class UPhononMaterialComponent : public UActorComponent
{ 
public:
	int32_t                                            MaterialIndex;                                              // 0x00B0   (0x0004)  
	EPhononMaterial                                    MaterialPreset;                                             // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
	float                                              LowFreqAbsorption;                                          // 0x00B8   (0x0004)  
	float                                              MidFreqAbsorption;                                          // 0x00BC   (0x0004)  
	float                                              HighFreqAbsorption;                                         // 0x00C0   (0x0004)  
	float                                              LowFreqTransmission;                                        // 0x00C4   (0x0004)  
	float                                              MidFreqTransmission;                                        // 0x00C8   (0x0004)  
	float                                              HighFreqTransmission;                                       // 0x00CC   (0x0004)  
	float                                              Scattering;                                                 // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00D4   (0x0004)  MISSED
};

/// Class /Script/SteamAudio.PhononOcclusionSourceSettings
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UPhononOcclusionSourceSettings : public UOcclusionPluginSourceSettingsBase
{ 
public:
	EIplDirectOcclusionMode                            DirectOcclusionMode;                                        // 0x0028   (0x0001)  
	EIplDirectOcclusionMethod                          DirectOcclusionMethod;                                      // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	float                                              DirectOcclusionSourceRadius;                                // 0x002C   (0x0004)  
	bool                                               DirectAttenuation;                                          // 0x0030   (0x0001)  
	bool                                               AirAbsorption;                                              // 0x0031   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x0032   (0x0006)  MISSED
};

/// Class /Script/SteamAudio.PhononProbeComponent
/// Size: 0x0230 (560 bytes) (0x0001F8 - 0x000230) align 16 MaxSize: 0x0230
class UPhononProbeComponent : public USceneComponent
{ 
public:
	TArray<FVector>                                    ProbeLocations;                                             // 0x01F8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0208   (0x0028)  MISSED
};

/// Struct /Script/SteamAudio.BakedDataInfo
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FBakedDataInfo
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	int32_t                                            Size;                                                       // 0x0008   (0x0004)  
};

/// Class /Script/SteamAudio.PhononProbeVolume
/// Size: 0x02A8 (680 bytes) (0x000258 - 0x0002A8) align 8 MaxSize: 0x02A8
class APhononProbeVolume : public AVolume
{ 
public:
	EPhononProbePlacementStrategy                      PlacementStrategy;                                          // 0x0258   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0259   (0x0003)  MISSED
	float                                              HorizontalSpacing;                                          // 0x025C   (0x0004)  
	float                                              HeightAboveFloor;                                           // 0x0260   (0x0004)  
	int32_t                                            NumProbes;                                                  // 0x0264   (0x0004)  
	int32_t                                            ProbeDataSize;                                              // 0x0268   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x026C   (0x0004)  MISSED
	TArray<FBakedDataInfo>                             BakedDataInfo;                                              // 0x0270   (0x0010)  
	class UPhononProbeComponent*                       PhononProbeComponent;                                       // 0x0280   (0x0008)  
	FString                                            ProbeBoxFileName;                                           // 0x0288   (0x0010)  
	FString                                            ProbeBatchFileName;                                         // 0x0298   (0x0010)  
};

/// Struct /Script/SteamAudio.SubmixEffectReverbPluginSettings
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FSubmixEffectReverbPluginSettings
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Class /Script/SteamAudio.SubmixEffectReverbPluginPreset
/// Size: 0x0098 (152 bytes) (0x000068 - 0x000098) align 8 MaxSize: 0x0098
class USubmixEffectReverbPluginPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x29];                                      // 0x0068   (0x0029)  MISSED
	FSubmixEffectReverbPluginSettings                  Settings;                                                   // 0x0091   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x0092   (0x0006)  MISSED
};

/// Class /Script/SteamAudio.PhononReverbSourceSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPhononReverbSourceSettings : public UReverbPluginSourceSettingsBase
{ 
public:
	EIplSimulationType                                 SourceReverbSimulationType;                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              SourceReverbContribution;                                   // 0x002C   (0x0004)  
};

/// Class /Script/SteamAudio.PhononSourceComponent
/// Size: 0x0210 (528 bytes) (0x0001F8 - 0x000210) align 16 MaxSize: 0x0210
class UPhononSourceComponent : public USceneComponent
{ 
public:
	float                                              BakingRadius;                                               // 0x01F8   (0x0004)  
	FName                                              UniqueIdentifier;                                           // 0x01FC   (0x0008)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0204   (0x000C)  MISSED
};

/// Class /Script/SteamAudio.PhononSpatializationSourceSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPhononSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
{ 
public:
	EIplSpatializationMethod                           SpatializationMethod;                                       // 0x0028   (0x0001)  
	EIplHrtfInterpolationMethod                        HrtfInterpolationMethod;                                    // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x002A   (0x0006)  MISSED
};

/// Class /Script/SteamAudio.SteamAudioSettings
/// Size: 0x0108 (264 bytes) (0x000028 - 0x000108) align 8 MaxSize: 0x0108
class USteamAudioSettings : public UObject
{ 
public:
	FSoftObjectPath                                    OutputSubmix;                                               // 0x0028   (0x0018)  
	EIplAudioEngine                                    AudioEngine;                                                // 0x0040   (0x0001)  
	EIplRayTracerType                                  RayTracer;                                                  // 0x0041   (0x0001)  
	EIplConvolutionType                                ConvolutionType;                                            // 0x0042   (0x0001)  
	bool                                               ExportBSPGeometry;                                          // 0x0043   (0x0001)  
	bool                                               ExportLandscapeGeometry;                                    // 0x0044   (0x0001)  
	EPhononMaterial                                    StaticMeshMaterialPreset;                                   // 0x0045   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0046   (0x0002)  MISSED
	float                                              StaticMeshLowFreqAbsorption;                                // 0x0048   (0x0004)  
	float                                              StaticMeshMidFreqAbsorption;                                // 0x004C   (0x0004)  
	float                                              StaticMeshHighFreqAbsorption;                               // 0x0050   (0x0004)  
	float                                              StaticMeshLowFreqTransmission;                              // 0x0054   (0x0004)  
	float                                              StaticMeshMidFreqTransmission;                              // 0x0058   (0x0004)  
	float                                              StaticMeshHighFreqTransmission;                             // 0x005C   (0x0004)  
	float                                              StaticMeshScattering;                                       // 0x0060   (0x0004)  
	EPhononMaterial                                    BSPMaterialPreset;                                          // 0x0064   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0065   (0x0003)  MISSED
	float                                              BSPLowFreqAbsorption;                                       // 0x0068   (0x0004)  
	float                                              BSPMidFreqAbsorption;                                       // 0x006C   (0x0004)  
	float                                              BSPHighFreqAbsorption;                                      // 0x0070   (0x0004)  
	float                                              BSPLowFreqTransmission;                                     // 0x0074   (0x0004)  
	float                                              BSPMidFreqTransmission;                                     // 0x0078   (0x0004)  
	float                                              BSPHighFreqTransmission;                                    // 0x007C   (0x0004)  
	float                                              BSPScattering;                                              // 0x0080   (0x0004)  
	EPhononMaterial                                    LandscapeMaterialPreset;                                    // 0x0084   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0085   (0x0003)  MISSED
	float                                              LandscapeLowFreqAbsorption;                                 // 0x0088   (0x0004)  
	float                                              LandscapeMidFreqAbsorption;                                 // 0x008C   (0x0004)  
	float                                              LandscapeHighFreqAbsorption;                                // 0x0090   (0x0004)  
	float                                              LandscapeLowFreqTransmission;                               // 0x0094   (0x0004)  
	float                                              LandscapeMidFreqTransmission;                               // 0x0098   (0x0004)  
	float                                              LandscapeHighFreqTransmission;                              // 0x009C   (0x0004)  
	float                                              LandscapeScattering;                                        // 0x00A0   (0x0004)  
	int32_t                                            OcclusionSampleCount;                                       // 0x00A4   (0x0004)  
	EIplSimulationType                                 ListenerReverbSimulationType;                               // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              ListenerReverbContribution;                                 // 0x00AC   (0x0004)  
	int32_t                                            IndirectImpulseResponseOrder;                               // 0x00B0   (0x0004)  
	float                                              IndirectImpulseResponseDuration;                            // 0x00B4   (0x0004)  
	EIplSpatializationMethod                           IndirectSpatializationMethod;                               // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x00B9   (0x0003)  MISSED
	float                                              IrradianceMinDistance;                                      // 0x00BC   (0x0004)  
	uint32_t                                           MaxSources;                                                 // 0x00C0   (0x0004)  
	EQualitySettings                                   RealtimeQualityPreset;                                      // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x00C5   (0x0003)  MISSED
	int32_t                                            RealTimeCPUCoresPercentage;                                 // 0x00C8   (0x0004)  
	int32_t                                            RealtimeBounces;                                            // 0x00CC   (0x0004)  
	int32_t                                            RealtimeRays;                                               // 0x00D0   (0x0004)  
	int32_t                                            RealtimeSecondaryRays;                                      // 0x00D4   (0x0004)  
	EQualitySettings                                   BakedQualityPreset;                                         // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x00D9   (0x0003)  MISSED
	int32_t                                            BakingCPUCoresPercentage;                                   // 0x00DC   (0x0004)  
	int32_t                                            BakedBounces;                                               // 0x00E0   (0x0004)  
	int32_t                                            BakedRays;                                                  // 0x00E4   (0x0004)  
	int32_t                                            BakedSecondaryRays;                                         // 0x00E8   (0x0004)  
	int32_t                                            MaxComputeUnits;                                            // 0x00EC   (0x0004)  
	float                                              FractionComputeUnitsForIRUpdate;                            // 0x00F0   (0x0004)  
	int32_t                                            TANIndirectImpulseResponseOrder;                            // 0x00F4   (0x0004)  
	float                                              TANIndirectImpulseResponseDuration;                         // 0x00F8   (0x0004)  
	uint32_t                                           TANMaxSources;                                              // 0x00FC   (0x0004)  
	int32_t                                            RadeonRaysBakingBatchSize;                                  // 0x0100   (0x0004)  
	unsigned char                                      UnknownData07_7[0x4];                                       // 0x0104   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UPhononGeometryComponent) == 0x0220); // 544 bytes (0x0001F8 - 0x000220)
static_assert(sizeof(UPhononMaterialComponent) == 0x00D8); // 216 bytes (0x0000B0 - 0x0000D8)
static_assert(sizeof(UPhononOcclusionSourceSettings) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UPhononProbeComponent) == 0x0230); // 560 bytes (0x0001F8 - 0x000230)
static_assert(sizeof(FBakedDataInfo) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(APhononProbeVolume) == 0x02A8); // 680 bytes (0x000258 - 0x0002A8)
static_assert(sizeof(FSubmixEffectReverbPluginSettings) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(USubmixEffectReverbPluginPreset) == 0x0098); // 152 bytes (0x000068 - 0x000098)
static_assert(sizeof(UPhononReverbSourceSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UPhononSourceComponent) == 0x0210); // 528 bytes (0x0001F8 - 0x000210)
static_assert(sizeof(UPhononSpatializationSourceSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(USteamAudioSettings) == 0x0108); // 264 bytes (0x000028 - 0x000108)
static_assert(offsetof(UPhononMaterialComponent, MaterialPreset) == 0x00B4);
static_assert(offsetof(UPhononOcclusionSourceSettings, DirectOcclusionMode) == 0x0028);
static_assert(offsetof(UPhononOcclusionSourceSettings, DirectOcclusionMethod) == 0x0029);
static_assert(offsetof(UPhononProbeComponent, ProbeLocations) == 0x01F8);
static_assert(offsetof(FBakedDataInfo, Name) == 0x0000);
static_assert(offsetof(APhononProbeVolume, PlacementStrategy) == 0x0258);
static_assert(offsetof(APhononProbeVolume, BakedDataInfo) == 0x0270);
static_assert(offsetof(APhononProbeVolume, PhononProbeComponent) == 0x0280);
static_assert(offsetof(APhononProbeVolume, ProbeBoxFileName) == 0x0288);
static_assert(offsetof(APhononProbeVolume, ProbeBatchFileName) == 0x0298);
static_assert(offsetof(USubmixEffectReverbPluginPreset, Settings) == 0x0091);
static_assert(offsetof(UPhononReverbSourceSettings, SourceReverbSimulationType) == 0x0028);
static_assert(offsetof(UPhononSourceComponent, UniqueIdentifier) == 0x01FC);
static_assert(offsetof(UPhononSpatializationSourceSettings, SpatializationMethod) == 0x0028);
static_assert(offsetof(UPhononSpatializationSourceSettings, HrtfInterpolationMethod) == 0x0029);
static_assert(offsetof(USteamAudioSettings, OutputSubmix) == 0x0028);
static_assert(offsetof(USteamAudioSettings, AudioEngine) == 0x0040);
static_assert(offsetof(USteamAudioSettings, RayTracer) == 0x0041);
static_assert(offsetof(USteamAudioSettings, ConvolutionType) == 0x0042);
static_assert(offsetof(USteamAudioSettings, StaticMeshMaterialPreset) == 0x0045);
static_assert(offsetof(USteamAudioSettings, BSPMaterialPreset) == 0x0064);
static_assert(offsetof(USteamAudioSettings, LandscapeMaterialPreset) == 0x0084);
static_assert(offsetof(USteamAudioSettings, ListenerReverbSimulationType) == 0x00A8);
static_assert(offsetof(USteamAudioSettings, IndirectSpatializationMethod) == 0x00B8);
static_assert(offsetof(USteamAudioSettings, RealtimeQualityPreset) == 0x00C4);
static_assert(offsetof(USteamAudioSettings, BakedQualityPreset) == 0x00D8);
