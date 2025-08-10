
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Game/maps/untitled.untitled_1_C
/// Size: 0x0238 (568 bytes) (0x000228 - 0x000238) align 8 MaxSize: 0x0238
class Auntitled_1_C : public ALevelScriptActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0228   (0x0008)  
	class ACameraActor*                                sleepCam_ExecuteUbergraph_untitled_1_RefProperty;           // 0x0230   (0x0008)  


	/// Functions
	// Function /Game/maps/untitled.untitled_1_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1414700] Event|Protected|BlueprintEvent 
	// Function /Game/maps/untitled.untitled_1_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1414700] Event|Public|BlueprintEvent 
	// Function /Game/maps/untitled.untitled_1_C.ExecuteUbergraph_untitled
	// void ExecuteUbergraph_untitled(int32_t EntryPoint);                                                                      // [0x1414700] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(Auntitled_1_C) == 0x0238); // 568 bytes (0x000228 - 0x000238)
static_assert(offsetof(Auntitled_1_C, UberGraphFrame) == 0x0228);
static_assert(offsetof(Auntitled_1_C, sleepCam_ExecuteUbergraph_untitled_1_RefProperty) == 0x0230);
