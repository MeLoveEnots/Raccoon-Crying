
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

/// Struct /Script/SoundUtilities.SoundVariation
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSoundVariation
{ 
	class USoundWave*                                  SoundWave;                                                  // 0x0000   (0x0008)  
	float                                              ProbabilityWeight;                                          // 0x0008   (0x0004)  
	FVector2D                                          VolumeRange;                                                // 0x000C   (0x0008)  
	FVector2D                                          PitchRange;                                                 // 0x0014   (0x0008)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Class /Script/SoundUtilities.SoundSimple
/// Size: 0x0188 (392 bytes) (0x000170 - 0x000188) align 8 MaxSize: 0x0188
class USoundSimple : public USoundBase
{ 
public:
	TArray<FSoundVariation>                            Variations;                                                 // 0x0170   (0x0010)  
	class USoundWave*                                  SoundWave;                                                  // 0x0180   (0x0008)  
};

/// Class /Script/SoundUtilities.SoundUtilitiesBPFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USoundUtilitiesBPFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetQFromBandwidth
	// float GetQFromBandwidth(float InBandwidth);                                                                              // [0x911de0] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch
	// float GetPitchScaleFromMIDIPitch(int32_t BaseMidiNote, int32_t TargetMidiNote);                                          // [0x911d10] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency
	// int32_t GetMIDIPitchFromFrequency(float Frequency);                                                                      // [0x911c90] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetLogFrequencyClamped
	// float GetLogFrequencyClamped(float InValue, FVector2D& InDomain, FVector2D& InRange);                                    // [0x911b70] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetLinearFrequencyClamped
	// float GetLinearFrequencyClamped(float InValue, FVector2D& InDomain, FVector2D& InRange);                                 // [0x911a50] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetGainFromMidiVelocity
	// float GetGainFromMidiVelocity(int32_t InVelocity);                                                                       // [0x9119c0] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyMultiplierFromSemitones
	// float GetFrequencyMultiplierFromSemitones(float InPitchSemitones);                                                       // [0x911930] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch
	// float GetFrequencyFromMIDIPitch(int32_t MidiNote);                                                                       // [0x9118a0] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo
	// float GetBeatTempo(float BeatsPerMinute, int32_t BeatMultiplier, int32_t DivisionsOfWholeNote);                          // [0x911790] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBandwidthFromQ
	// float GetBandwidthFromQ(float InQ);                                                                                      // [0x911700] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/SoundUtilities.SoundUtilitiesBPFunctionLibrary.ConvertLinearToDecibels
	// float ConvertLinearToDecibels(float InLinear, float InFloor);                                                            // [0x911630] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/SoundUtilities.SoundUtilitiesBPFunctionLibrary.ConvertDecibelsToLinear
	// float ConvertDecibelsToLinear(float InDecibels);                                                                         // [0x9115a0] Final|Native|Static|Private|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(FSoundVariation) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(USoundSimple) == 0x0188); // 392 bytes (0x000170 - 0x000188)
static_assert(sizeof(USoundUtilitiesBPFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(offsetof(FSoundVariation, SoundWave) == 0x0000);
static_assert(offsetof(FSoundVariation, VolumeRange) == 0x000C);
static_assert(offsetof(FSoundVariation, PitchRange) == 0x0014);
static_assert(offsetof(USoundSimple, Variations) == 0x0170);
static_assert(offsetof(USoundSimple, SoundWave) == 0x0180);
