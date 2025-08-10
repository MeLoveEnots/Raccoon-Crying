
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ApexDestruction
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InputCore
/// dependency: Slate
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/VictoryBPLibrary.ESpeedUnit
/// Size: 0x01 (1 bytes)
enum class ESpeedUnit : uint8_t
{
	CentimeterPerSecond                                                              = 0,
	FootPerSecond                                                                    = 1,
	MeterPerSecond                                                                   = 2,
	MeterPerMinute                                                                   = 3,
	KilometerPerSecond                                                               = 4,
	KilometerPerMinute                                                               = 5,
	KilometerPerHour                                                                 = 6,
	MilePerHour                                                                      = 7,
	Knot                                                                             = 8,
	Mach                                                                             = 9,
	SpeedOfLight                                                                     = 10,
	YardPerSecond                                                                    = 11
};

/// Enum /Script/VictoryBPLibrary.EJoyGraphicsFullScreen
/// Size: 0x01 (1 bytes)
enum class EJoyGraphicsFullScreen : uint8_t
{
	EJoyGraphicsFullScreen__FullScreen                                               = 0,
	EJoyGraphicsFullScreen__WindowedFullScreen                                       = 1,
	EJoyGraphicsFullScreen__WindowedFullScreenPerformance                            = 2,
	EJoyGraphicsFullScreen__EJoyGraphicsFullScreen_Max                               = 3
};

/// Enum /Script/VictoryBPLibrary.EVictoryHMDDevice
/// Size: 0x01 (1 bytes)
enum class EVictoryHMDDevice : uint8_t
{
	EVictoryHMDDevice__None                                                          = 0,
	EVictoryHMDDevice__OculusRift                                                    = 1,
	EVictoryHMDDevice__Morpheus                                                      = 2,
	EVictoryHMDDevice__ES2GenericStereoMesh                                          = 3,
	EVictoryHMDDevice__SteamVR                                                       = 4,
	EVictoryHMDDevice__GearVR                                                        = 5
};

/// Enum /Script/VictoryBPLibrary.EJoyImageFormats
/// Size: 0x01 (1 bytes)
enum class EJoyImageFormats : uint8_t
{
	EJoyImageFormats__JPG                                                            = 0,
	EJoyImageFormats__PNG                                                            = 1,
	EJoyImageFormats__BMP                                                            = 2,
	EJoyImageFormats__ICO                                                            = 3,
	EJoyImageFormats__EXR                                                            = 4,
	EJoyImageFormats__ICNS                                                           = 5
};

/// Class /Script/VictoryBPLibrary.TKMathFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTKMathFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.VectorRadiansToDegrees
	// FVector VectorRadiansToDegrees(FVector RadVector);                                                                       // [0x86d4e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.VectorDegreesToRadians
	// FVector VectorDegreesToRadians(FVector DegVector);                                                                       // [0x86d440] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.SphereBoxIntersection
	// bool SphereBoxIntersection(FVector SphereOrigin, float SphereRadius, FVector BoxOrigin, FVector BoxExtent);              // [0x86b2f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.SignedDistancePlanePoint
	// float SignedDistancePlanePoint(FVector PlaneNormal, FVector PlanePoint, FVector Point);                                  // [0x86afc0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.SetVectorLength
	// FVector SetVectorLength(FVector A, float Size);                                                                          // [0x86aed0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.SetCenterOfMassOffset
	// void SetCenterOfMassOffset(class UPrimitiveComponent* Target, FVector Offset, FName BoneName);                           // [0x86acf0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.RoundToUpperMultiple
	// int32_t RoundToUpperMultiple(int32_t A, int32_t Multiple, bool skipSelf);                                                // [0x86a450] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.RoundToNearestMultiple
	// int32_t RoundToNearestMultiple(int32_t A, int32_t Multiple);                                                             // [0x86a380] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.RoundToLowerMultiple
	// int32_t RoundToLowerMultiple(int32_t A, int32_t Multiple, bool skipSelf);                                                // [0x86a280] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.ProjectPointOnLine
	// FVector ProjectPointOnLine(FVector LineOrigin, FVector LineDirection, FVector Point);                                    // [0x8691e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.PointOnWhichSideOfLineSegment
	// int32_t PointOnWhichSideOfLineSegment(FVector LinePoint1, FVector LinePoint2, FVector Point);                            // [0x8690a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.NegateVector2D
	// FVector2D NegateVector2D(FVector2D A);                                                                                   // [0x867a10] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.NegateInt
	// int32_t NegateInt(int32_t A);                                                                                            // [0x867980] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.NegateFloat
	// float NegateFloat(float A);                                                                                              // [0x8678f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.LineToLineIntersection
	// bool LineToLineIntersection(FVector& IntersectionPoint, FVector LinePoint1, FVector LineDir1, FVector LinePoint2, FVector LineDir2); // [0x8668d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.LineExtentBoxIntersection
	// bool LineExtentBoxIntersection(FBox InBox, FVector Start, FVector End, FVector Extent, FVector& HitLocation, FVector& HitNormal, float& HitTime); // [0x866640] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.IsPowerOfTwo
	// bool IsPowerOfTwo(int32_t X);                                                                                            // [0x865a30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.IsPointInsideBox
	// bool IsPointInsideBox(FVector Point, FVector BoxOrigin, FVector BoxExtent);                                              // [0x8657a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.IsMultipleOf
	// bool IsMultipleOf(int32_t A, int32_t Multiple);                                                                          // [0x8656d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.IsLineInsideSphere
	// bool IsLineInsideSphere(FVector LineStart, FVector LineDir, float LineLength, FVector SphereOrigin, float SphereRadius); // [0x865500] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.IsEvenNumber
	// bool IsEvenNumber(float A);                                                                                              // [0x865480] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.GridSnap
	// FVector GridSnap(FVector A, float Grid);                                                                                 // [0x864f20] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.GetVelocityAtPoint
	// FVector GetVelocityAtPoint(class UPrimitiveComponent* Target, FVector Point, FName BoneName, bool DrawDebugInfo);        // [0x864900] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.GetConsoleVariableInt
	// int32_t GetConsoleVariableInt(FString VariableName);                                                                     // [0x863690] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.GetConsoleVariableFloat
	// float GetConsoleVariableFloat(FString VariableName);                                                                     // [0x8635a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.ConvertPhysicsLinearVelocity
	// float ConvertPhysicsLinearVelocity(FVector Velocity, TEnumAsByte<ESpeedUnit> SpeedUnit);                                 // [0x860ab0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.ConvertAnchorToAnchor
	// void ConvertAnchorToAnchor(class UObject* WorldContextObject, FAnchors CurrentAnchor, FMargin Offsets, FAnchors TargetAnchor, FMargin& ConvertedOffsets); // [0x8608e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointsOnTwoLines
	// bool ClosestPointsOnTwoLines(FVector& closestPointLine1, FVector& closestPointLine2, FVector LinePoint1, FVector lineVec1, FVector LinePoint2, FVector lineVec2); // [0x85fda0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointsOfLineSegments
	// void ClosestPointsOfLineSegments(FVector Line1Start, FVector Line1End, FVector Line2Start, FVector Line2End, FVector& LinePoint1, FVector& LinePoint2); // [0x85fb80] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointOnSphereToLine
	// FVector ClosestPointOnSphereToLine(FVector SphereOrigin, float SphereRadius, FVector LineOrigin, FVector LineDir);       // [0x85f9f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointOnLineSeqment
	// FVector ClosestPointOnLineSeqment(FVector Point, FVector LineStart, FVector LineEnd);                                    // [0x85f8a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.AreLineSegmentsCrossing
	// bool AreLineSegmentsCrossing(FVector pointA1, FVector pointA2, FVector pointB1, FVector pointB2);                        // [0x85ead0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/VictoryBPLibrary.RamaVictoryPluginCreateProcessPipe
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class URamaVictoryPluginCreateProcessPipe : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/VictoryBPLibrary.RamaVictoryPluginCreateProcessPipe.ReadFromPipe
	// bool ReadFromPipe(FString& PipeContents);                                                                                // [0x8698d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.RamaVictoryPluginCreateProcessPipe.PipeIsValid
	// bool PipeIsValid();                                                                                                      // [0x868820] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.RamaVictoryPluginCreateProcessPipe.CreatePipe
	// bool CreatePipe();                                                                                                       // [0x860fa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.RamaVictoryPluginCreateProcessPipe.ClosePipe
	// void ClosePipe();                                                                                                        // [0x85f880] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/VictoryBPLibrary.VictoryBPFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UVictoryBPFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InPIEWorld
	// bool WorldType__InPIEWorld(class UObject* WorldContextObject);                                                           // [0x873a10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InGameInstanceWorld
	// bool WorldType__InGameInstanceWorld(class UObject* WorldContextObject);                                                  // [0x873980] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InEditorWorld
	// bool WorldType__InEditorWorld(class UObject* WorldContextObject);                                                        // [0x8738f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetIsChildOf
	// bool WidgetIsChildOf(class UWidget* ChildWidget, class UWidget* PossibleParent);                                         // [0x873820] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetParentOfClass
	// class UUserWidget* WidgetGetParentOfClass(class UWidget* ChildWidget, class UClass* WidgetClass);                        // [0x873750] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetChildrenOfClass
	// void WidgetGetChildrenOfClass(class UWidget* ParentWidget, TArray<UUserWidget*>& ChildWidgets, class UClass* WidgetClass, bool bImmediateOnly); // [0x8735e0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Visibility__GetRenderedActors
	// void Visibility__GetRenderedActors(class UObject* WorldContextObject, TArray<AActor*>& CurrentlyRenderedActors, float MinRecentTime); // [0x8734b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Visibility__GetNotRenderedActors
	// void Visibility__GetNotRenderedActors(class UObject* WorldContextObject, TArray<AActor*>& CurrentlyNotRenderedActors, float MinRecentTime); // [0x873380] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.ViewportPositionDeproject
	// bool ViewportPositionDeproject(class UObject* WorldContextObject, FVector2D& ViewportPosition, FVector& OutWorldOrigin, FVector& OutWorldDirection); // [0x872de0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__SetMousePosition
	// bool Viewport__SetMousePosition(class APlayerController* ThePC, float& PosX, float& PosY);                               // [0x873260] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetMousePosition
	// bool Viewport__GetMousePosition(class APlayerController* ThePC, float& PosX, float& PosY);                               // [0x873140] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetCenterOfViewport
	// bool Viewport__GetCenterOfViewport(class APlayerController* ThePC, float& PosX, float& PosY);                            // [0x873020] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__EnableWorldRendering
	// bool Viewport__EnableWorldRendering(class APlayerController* ThePC, bool RenderTheWorld);                                // [0x872f50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySoundVolumeChange
	// bool VictorySoundVolumeChange(class USoundClass* SoundClassObject, float NewVolume);                                     // [0x871b00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortIntArray
	// void VictorySortIntArray(TArray<int32_t>& IntArray, TArray<int32_t>& IntArrayRef);                                       // [0x8719f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortFloatArray
	// void VictorySortFloatArray(TArray<float>& FloatArray, TArray<float>& FloatArrayRef);                                     // [0x8718e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateMouseWheel
	// void VictorySimulateMouseWheel(float& Delta);                                                                            // [0x871850] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateKeyPress
	// void VictorySimulateKeyPress(class APlayerController* ThePC, FKey Key, TEnumAsByte<EInputEvent> EventType);              // [0x8716f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector2D
	// void VictorySetCustomConfigVar_Vector2D(FString SectionName, FString VariableName, FVector2D Value);                     // [0x871390] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector
	// void VictorySetCustomConfigVar_Vector(FString SectionName, FString VariableName, FVector Value);                         // [0x871530] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_String
	// void VictorySetCustomConfigVar_String(FString SectionName, FString VariableName, FString Value);                         // [0x8711a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Rotator
	// void VictorySetCustomConfigVar_Rotator(FString SectionName, FString VariableName, FRotator Value);                       // [0x870fe0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Int
	// void VictorySetCustomConfigVar_Int(FString SectionName, FString VariableName, int32_t Value);                            // [0x870e40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Float
	// void VictorySetCustomConfigVar_Float(FString SectionName, FString VariableName, float Value);                            // [0x870c90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Color
	// void VictorySetCustomConfigVar_Color(FString SectionName, FString VariableName, FLinearColor Value);                     // [0x870ae0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Bool
	// void VictorySetCustomConfigVar_Bool(FString SectionName, FString VariableName, bool Value);                              // [0x870930] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryRemoveAxisKeyBind
	// void VictoryRemoveAxisKeyBind(FVictoryInputAxis ToRemove);                                                               // [0x8707f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryRemoveActionKeyBind
	// void VictoryRemoveActionKeyBind(FVictoryInput ToRemove);                                                                 // [0x8706c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryReBindAxisKey
	// bool VictoryReBindAxisKey(FVictoryInputAxis Original, FVictoryInputAxis NewBinding);                                     // [0x870470] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryReBindActionKey
	// bool VictoryReBindActionKey(FVictoryInput Original, FVictoryInput NewBinding);                                           // [0x870220] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPhysics_UpdateAngularDamping
	// bool VictoryPhysics_UpdateAngularDamping(class UPrimitiveComponent* CompToUpdate, float NewAngularDamping);              // [0x870150] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__WindowsNoEditorDir
	// FString VictoryPaths__WindowsNoEditorDir();                                                                              // [0x8700d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__Win64Dir_BinaryLocation
	// FString VictoryPaths__Win64Dir_BinaryLocation();                                                                         // [0x870050] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__ScreenShotsDir
	// FString VictoryPaths__ScreenShotsDir();                                                                                  // [0x86ffd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__SavedDir
	// FString VictoryPaths__SavedDir();                                                                                        // [0x86ff50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__LogsDir
	// FString VictoryPaths__LogsDir();                                                                                         // [0x86fed0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__GameRootDirectory
	// FString VictoryPaths__GameRootDirectory();                                                                               // [0x86fe50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__ConfigDir
	// FString VictoryPaths__ConfigDir();                                                                                       // [0x86fdd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryLoadLevelInstance
	// class ULevelStreaming* VictoryLoadLevelInstance(class UObject* WorldContextObject, FString MapFolderOffOfContent, FString LevelName, int32_t InstanceNumber, FVector Location, FRotator Rotation, bool& success); // [0x86faf0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryISM_GetAllVictoryISMActors
	// void VictoryISM_GetAllVictoryISMActors(class UObject* WorldContextObject, TArray<AVictoryISM*>& Out);                    // [0x86f740] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryISM_ConvertToVictoryISMActors
	// void VictoryISM_ConvertToVictoryISMActors(class UObject* WorldContextObject, class UClass* ActorClass, TArray<AVictoryISM*>& CreatedISMActors, bool DestroyOriginalActors, int32_t MinCountToCreateISM); // [0x86f580] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIsApplicationRunning
	// bool VictoryIsApplicationRunning(int32_t ProcessId);                                                                     // [0x86fa60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntPlusEquals
	// void VictoryIntPlusEquals(int32_t& Int, int32_t Add, int32_t& IntOut);                                                   // [0x86f940] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntMinusEquals
	// void VictoryIntMinusEquals(int32_t& Int, int32_t Sub, int32_t& IntOut);                                                  // [0x86f820] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetVictoryInputAxis
	// FVictoryInputAxis VictoryGetVictoryInputAxis(FKeyEvent& KeyEvent);                                                       // [0x86f3b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetVictoryInput
	// FVictoryInput VictoryGetVictoryInput(FKeyEvent& KeyEvent);                                                               // [0x86f1b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetSoundVolume
	// float VictoryGetSoundVolume(class USoundClass* SoundClassObject);                                                        // [0x86f120] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector2D
	// FVector2D VictoryGetCustomConfigVar_Vector2D(FString SectionName, FString VariableName, bool& IsValid);                  // [0x86ed90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector
	// FVector VictoryGetCustomConfigVar_Vector(FString SectionName, FString VariableName, bool& IsValid);                      // [0x86ef50] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_String
	// FString VictoryGetCustomConfigVar_String(FString SectionName, FString VariableName, bool& IsValid);                      // [0x86eb90] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Rotator
	// FRotator VictoryGetCustomConfigVar_Rotator(FString SectionName, FString VariableName, bool& IsValid);                    // [0x86e9c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Int
	// int32_t VictoryGetCustomConfigVar_Int(FString SectionName, FString VariableName, bool& IsValid);                         // [0x86e800] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Float
	// float VictoryGetCustomConfigVar_Float(FString SectionName, FString VariableName, bool& IsValid);                         // [0x86e640] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Color
	// FLinearColor VictoryGetCustomConfigVar_Color(FString SectionName, FString VariableName, bool& IsValid);                  // [0x86e470] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Bool
	// bool VictoryGetCustomConfigVar_Bool(FString SectionName, FString VariableName, bool& IsValid);                           // [0x86e2b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetApplicationName
	// FString VictoryGetApplicationName(int32_t ProcessId);                                                                    // [0x86e1d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllAxisKeyBindings
	// void VictoryGetAllAxisKeyBindings(TArray<FVictoryInputAxis>& Bindings);                                                  // [0x86e140] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllAxisAndActionMappingsForKey
	// void VictoryGetAllAxisAndActionMappingsForKey(FKey Key, TArray<FVictoryInput>& ActionBindings, TArray<FVictoryInputAxis>& AxisBindings); // [0x86dfb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllActionKeyBindings
	// void VictoryGetAllActionKeyBindings(TArray<FVictoryInput>& Bindings);                                                    // [0x86df20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatPlusEquals
	// void VictoryFloatPlusEquals(float& Float, float Add, float& FloatOut);                                                   // [0x86de00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatMinusEquals
	// void VictoryFloatMinusEquals(float& Float, float Sub, float& FloatOut);                                                  // [0x86dce0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryDestructible_DestroyChunk
	// bool VictoryDestructible_DestroyChunk(class UDestructibleComponent* DestructibleComp, int32_t HitItem);                  // [0x86dc10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryCreateProc
	// void VictoryCreateProc(int32_t& ProcessId, FString FullPathOfProgramToRun, TArray<FString> CommandlineArgs, bool Detach, bool Hidden, int32_t Priority, FString OptionalWorkingDirectory, class URamaVictoryPluginCreateProcessPipe* ReadPipeObject); // [0x86d830] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryAppendInline
	// void VictoryAppendInline(FString& String, FString ToAppend, FString& Result, bool AppendNewline);                        // [0x86d650] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SecondsToHoursMinutesSeconds
	// FString Victory_SecondsToHoursMinutesSeconds(float Seconds, bool TrimZeroes);                                            // [0x872cc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SaveStringToOSClipboard
	// void Victory_SaveStringToOSClipboard(FString ToClipboard);                                                               // [0x829ed0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SavePixels
	// bool Victory_SavePixels(FString FullFilePath, int32_t Width, int32_t Height, TArray<FLinearColor>& ImagePixels, bool SaveAsBMP, bool sRGB, FString& ErrorString); // [0x872a50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile_Pixels
	// class UTexture2D* Victory_LoadTexture2D_FromFile_Pixels(FString FullFilePath, EJoyImageFormats ImageFormat, bool& IsValid, int32_t& Width, int32_t& Height, TArray<FLinearColor>& OutPixels); // [0x872830] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile
	// class UTexture2D* Victory_LoadTexture2D_FromFile(FString FullFilePath, EJoyImageFormats ImageFormat, bool& IsValid, int32_t& Width, int32_t& Height); // [0x872640] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetStringFromOSClipboard
	// void Victory_GetStringFromOSClipboard(FString& FromClipboard);                                                           // [0x8723d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelsArrayFromT2D
	// bool Victory_GetPixelsArrayFromT2D(class UTexture2D* T2D, int32_t& TextureWidth, int32_t& TextureHeight, TArray<FLinearColor>& PixelArray); // [0x872250] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelFromT2D
	// bool Victory_GetPixelFromT2D(class UTexture2D* T2D, int32_t X, int32_t Y, FLinearColor& PixelColor);                     // [0x872100] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGRHIAdapterName
	// FString Victory_GetGRHIAdapterName();                                                                                    // [0x872040] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGPUInfo
	// void Victory_GetGPUInfo(FString& DeviceDescription, FString& Provider, FString& DriverVersion, FString& DriverDate);     // [0x871e70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGPUBrand
	// FString Victory_GetGPUBrand();                                                                                           // [0x871e00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_Get_Pixel
	// bool Victory_Get_Pixel(TArray<FLinearColor>& Pixels, int32_t ImageHeight, int32_t X, int32_t Y, FLinearColor& FoundColor); // [0x872470] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_AI_MoveToWithFilter
	// TEnumAsByte<EPathFollowingRequestResult> Victory_AI_MoveToWithFilter(class APawn* Pawn, FVector& Dest, class UClass* FilterClass, float AcceptanceRadius, bool bProjectDestinationToNavigation, bool bStopOnOverlap, bool bCanStrafe); // [0x871bd0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VerticalFOV
	// float VerticalFOV(float HorizontalFOV, float AspectRatio);                                                               // [0x86d580] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Vector2DInterpTo_Constant
	// FVector2D Vector2DInterpTo_Constant(FVector2D Current, FVector2D Target, float DeltaTime, float InterpSpeed);            // [0x86d2e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Vector2DInterpTo
	// FVector2D Vector2DInterpTo(FVector2D Current, FVector2D Target, float DeltaTime, float InterpSpeed);                     // [0x86d180] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.UTCToLocal
	// void UTCToLocal(FDateTime& UTCTime, FDateTime& LocalTime);                                                               // [0x86d010] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.UnloadStreamingLevel
	// void UnloadStreamingLevel(class ULevelStreamingDynamic* LevelInstance);                                                  // [0x86d100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.TransformVectorToActorSpaceAngle
	// FRotator TransformVectorToActorSpaceAngle(class AActor* Actor, FVector& InVector);                                       // [0x86cf20] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.TransformVectorToActorSpace
	// FVector TransformVectorToActorSpace(class AActor* Actor, FVector& InVector);                                             // [0x86ce30] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Traces__CharacterMeshTrace___ClosestSocket
	// class AActor* Traces__CharacterMeshTrace___ClosestSocket(class UObject* WorldContextObject, class AActor* TraceOwner, FVector& TraceStart, FVector& TraceEnd, FVector& OutImpactPoint, FVector& OutImpactNormal, FName& ClosestSocketName, FVector& SocketLocation, bool& IsValid); // [0x86cb30] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Traces__CharacterMeshTrace___ClosestBone
	// class AActor* Traces__CharacterMeshTrace___ClosestBone(class AActor* TraceOwner, FVector& TraceStart, FVector& TraceEnd, FVector& OutImpactPoint, FVector& OutImpactNormal, FName& ClosestBoneName, FVector& ClosestBoneLocation, bool& IsValid); // [0x86c870] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.TraceData__GetTraceDataFromSkeletalMeshSocket
	// bool TraceData__GetTraceDataFromSkeletalMeshSocket(FVector& TraceStart, FVector& TraceEnd, class USkeletalMeshComponent* Mesh, FRotator& TraceRotation, float TraceLength, FName Socket, bool DrawTraceData, FLinearColor TraceDataColor, float TraceDataThickness); // [0x86c590] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.TraceData__GetTraceDataFromCharacterSocket
	// bool TraceData__GetTraceDataFromCharacterSocket(FVector& TraceStart, FVector& TraceEnd, class AActor* TheCharacter, FRotator& TraceRotation, float TraceLength, FName Socket, bool DrawTraceData, FLinearColor TraceDataColor, float TraceDataThickness); // [0x86c2b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToInt
	// int32_t Text_ToInt(FText& Text, bool UseDotForThousands);                                                                // [0x86c0e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToFloat
	// float Text_ToFloat(FText& Text, bool UseDotForThousands);                                                                // [0x86bef0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Text_IsNumeric
	// bool Text_IsNumeric(FText& Text);                                                                                        // [0x86be20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.StringIsEmpty
	// bool StringIsEmpty(FString Target);                                                                                      // [0x86b5f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.StringConversion__GetFloatAsStringWithPrecision
	// void StringConversion__GetFloatAsStringWithPrecision(float TheFloat, FString& TheString, int32_t Precision, bool IncludeLeadingZero); // [0x86b470] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.String__ExplodeString
	// void String__ExplodeString(TArray<FString>& OutputStrings, FString InputString, FString Separator, int32_t Limit, bool bTrimElements); // [0x86bbb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings_Multi
	// FString String__CombineStrings_Multi(FString A, FString B);                                                              // [0x86ba00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings
	// FString String__CombineStrings(FString StringFirst, FString StringSecond, FString Separator, FString StringFirstLabel, FString StringSecondLabel); // [0x86b690] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.SpawnActorIntoLevel
	// class AActor* SpawnActorIntoLevel(class UObject* WorldContextObject, class UClass* ActorClass, FName Level, FVector Location, FRotator Rotation, bool SpawnEvenIfColliding); // [0x86b100] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.SetGenericTeamId
	// void SetGenericTeamId(class AActor* Target, char NewTeamId);                                                             // [0x833dd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.SetComponentTickRate
	// void SetComponentTickRate(class UActorComponent* Component, float Seconds);                                              // [0x86ae00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.SetBloomIntensity
	// void SetBloomIntensity(class APostProcessVolume* PostProcessVolume, float Intensity);                                    // [0x86ac30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.ServerTravel
	// void ServerTravel(class UObject* WorldContextObject, FString MapName, bool bSkipNotifyPlayers);                          // [0x86aad0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Selection_SelectionBox
	// void Selection_SelectionBox(class UObject* WorldContextObject, TArray<AActor*>& SelectedActors, FVector2D AnchorPoint, FVector2D DraggedPoint, class UClass* ClassFilter); // [0x86a920] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.seedRandWithTime
	// void seedRandWithTime();                                                                                                 // [0x873b60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.seedRandWithEntropy
	// void seedRandWithEntropy();                                                                                              // [0x873b40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.seedRand
	// void seedRand(int32_t Seed);                                                                                             // [0x873ac0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.ScreenShots_Rename_Move_Most_Recent
	// bool ScreenShots_Rename_Move_Most_Recent(FString& OriginalFileName, FString NewName, FString NewAbsoluteFolderPath, bool HighResolution); // [0x86a700] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.SaveGameObject_GetMostRecentSaveSlotFileName
	// void SaveGameObject_GetMostRecentSaveSlotFileName(FString& Filename, bool& bFound);                                      // [0x86a610] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.SaveGameObject_GetAllSaveSlotFileNames
	// void SaveGameObject_GetAllSaveSlotFileNames(TArray<FString>& FileNames);                                                 // [0x86a550] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Rendering__UnFreezeGameRendering
	// void Rendering__UnFreezeGameRendering();                                                                                 // [0x86a260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Rendering__FreezeGameRendering
	// void Rendering__FreezeGameRendering();                                                                                   // [0x86a240] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RemoveFromStreamingLevels
	// void RemoveFromStreamingLevels(class UObject* WorldContextObject, FLevelStreamInstanceInfo& LevelInstanceInfo);          // [0x86a170] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RemoveAllWidgetsOfClass
	// void RemoveAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass);                              // [0x86a0b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetTimePassedSincePreviousTime
	// void RealWorldTime__GetTimePassedSincePreviousTime(FString PreviousTime, float& MilliSeconds, float& Seconds, float& Minutes, float& Hours); // [0x869ec0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetDifferenceBetweenTimes
	// void RealWorldTime__GetDifferenceBetweenTimes(FString PreviousTime1, FString PreviousTime2, float& MilliSeconds, float& Seconds, float& Minutes, float& Hours); // [0x869ca0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetCurrentOSTime
	// FString RealWorldTime__GetCurrentOSTime(int32_t& MilliSeconds, int32_t& Seconds, int32_t& Minutes, int32_t& Hours12, int32_t& Hours24, int32_t& Day, int32_t& Month, int32_t& Year); // [0x869990] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_uniDis_MT
	// int32_t RandInt_uniDis_MT();                                                                                             // [0x8698a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_uniDis
	// int32_t RandInt_uniDis();                                                                                                // [0x869870] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_MINMAX_uniDis_MT
	// int32_t RandInt_MINMAX_uniDis_MT(int32_t iMin, int32_t iMax);                                                            // [0x8697a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_MINMAX_uniDis
	// int32_t RandInt_MINMAX_uniDis(int32_t iMin, int32_t iMax);                                                               // [0x8696d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_uniDis_MT
	// float RandFloat_uniDis_MT();                                                                                             // [0x8696a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_uniDis
	// float RandFloat_uniDis();                                                                                                // [0x869670] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_MINMAX_uniDis_MT
	// float RandFloat_MINMAX_uniDis_MT(float iMin, float iMax);                                                                // [0x8695a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_MINMAX_uniDis
	// float RandFloat_MINMAX_uniDis(float iMin, float iMax);                                                                   // [0x8694d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandBool_Bernoulli_MT
	// bool RandBool_Bernoulli_MT(float fBias);                                                                                 // [0x869450] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandBool_Bernoulli
	// bool RandBool_Bernoulli(float fBias);                                                                                    // [0x8693d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.ProjectWorldToScreenPosition
	// FVector2D ProjectWorldToScreenPosition(FVector& WorldLocation);                                                          // [0x869330] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.PointDistanceToPlane
	// void PointDistanceToPlane(FPlane& Plane, FVector Point, float& Distance);                                                // [0x868f60] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.PlaySoundAttachedFromFile
	// class UAudioComponent* PlaySoundAttachedFromFile(FString FilePath, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings); // [0x868a90] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.PlaySoundAtLocationFromFile
	// void PlaySoundAtLocationFromFile(class UObject* WorldContextObject, FString FilePath, FVector Location, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings); // [0x868850] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.PlayerState_GetPlayerID
	// bool PlayerState_GetPlayerID(class APlayerController* ThePC, int32_t& PlayerID);                                         // [0x868e80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.PlayerController_GetControllerID
	// bool PlayerController_GetControllerID(class APlayerController* ThePC, int32_t& ControllerId);                            // [0x868da0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__UpdateCharacterCameraToRagdollLocation
	// bool Physics__UpdateCharacterCameraToRagdollLocation(class AActor* TheCharacter, float HeightOffset, float InterpSpeed); // [0x868720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__LeaveRagDoll
	// bool Physics__LeaveRagDoll(class AActor* TheCharacter, bool SetToFallingMovementMode, float HeightAboveRBMesh, FVector& InitLocation, FRotator& InitRotation); // [0x868550] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__IsRagDoll
	// bool Physics__IsRagDoll(class AActor* TheCharacter);                                                                     // [0x8684c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__InitializeVictoryRagDoll
	// bool Physics__InitializeVictoryRagDoll(class AActor* TheCharacter, FVector& InitLocation, FRotator& InitRotation);       // [0x868390] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__GetLocationofRagDoll
	// bool Physics__GetLocationofRagDoll(class AActor* TheCharacter, FVector& RagdollLocation);                                // [0x8682c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__EnterRagDoll
	// bool Physics__EnterRagDoll(class AActor* TheCharacter);                                                                  // [0x868230] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.OptionsMenu__GetDisplayAdapterScreenResolutions
	// bool OptionsMenu__GetDisplayAdapterScreenResolutions(TArray<int32_t>& Widths, TArray<int32_t>& Heights, TArray<int32_t>& RefreshRates, bool IncludeRefreshRates); // [0x868070] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.OperatingSystem__GetCurrentPlatform
	// void OperatingSystem__GetCurrentPlatform(bool& Windows_, bool& Mac, bool& Linux, bool& IOS, bool& Android, bool& Android_ARM, bool& Android_Vulkan, bool& PS4, bool& XboxOne, bool& HTML5, bool& APPLE); // [0x867ca0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Open_URL_In_Web_Browser
	// void Open_URL_In_Web_Browser(FString TheURL);                                                                            // [0x867bc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.NotEqual_Vector2DVector2D
	// bool NotEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance);                                          // [0x867a90] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Mobility__SetSceneCompMobility
	// bool Mobility__SetSceneCompMobility(class USceneComponent* SceneComp, TEnumAsByte<EComponentMobility> NewMobility);      // [0x867820] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.MinOfIntArray
	// void MinOfIntArray(TArray<int32_t>& IntArray, int32_t& IndexOfMinValue, int32_t& MinValue);                              // [0x8676e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.MinOfFloatArray
	// void MinOfFloatArray(TArray<float>& FloatArray, int32_t& IndexOfMinValue, float& MinValue);                              // [0x8675a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.MaxOfIntArray
	// void MaxOfIntArray(TArray<int32_t>& IntArray, int32_t& IndexOfMaxValue, int32_t& MaxValue);                              // [0x867460] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.MaxOfFloatArray
	// void MaxOfFloatArray(TArray<float>& FloatArray, int32_t& IndexOfMaxValue, float& MaxValue);                              // [0x867320] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.MapRangeClamped
	// float MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);                    // [0x867170] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Loops_ResetBPRunawayCounter
	// void Loops_ResetBPRunawayCounter();                                                                                      // [0x867150] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.LoadTexture2D_FromFileByExtension
	// class UTexture2D* LoadTexture2D_FromFileByExtension(FString ImagePath, bool& IsValid, int32_t& OutWidth, int32_t& OutHeight); // [0x866fd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.LoadTexture2D_FromDDSFile
	// class UTexture2D* LoadTexture2D_FromDDSFile(FString FullFilePath);                                                       // [0x866f30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringFromFile
	// bool LoadStringFromFile(FString& Result, FString FullFilePath);                                                          // [0x866dc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringArrayFromFile
	// bool LoadStringArrayFromFile(TArray<FString>& StringArray, int32_t& ArraySize, FString FullFilePath, bool ExcludeEmptyLines); // [0x866bc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.LoadObjectFromAssetPath
	// class UObject* LoadObjectFromAssetPath(class UClass* objectClass, FName Path, bool& IsValid);                            // [0x866ab0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.LensFlare__GetLensFlareOffsets
	// bool LensFlare__GetLensFlareOffsets(class APlayerController* PlayerController, class AActor* LightSource, float& PitchOffset, float& YawOffset, float& RollOffset); // [0x866470] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.JoyIsKey
	// void JoyIsKey(FKeyEvent& KeyEvent, FKey Key, bool& Ctrl, bool& Shift, bool& Alt, bool& Cmd, bool& Match);                // [0x8660f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.JoyGraphicsSettings__FullScreen_Set
	// void JoyGraphicsSettings__FullScreen_Set(TEnumAsByte<EJoyGraphicsFullScreen> NewSetting);                                // [0x866080] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.JoyGraphicsSettings__FullScreen_Get
	// TEnumAsByte<EJoyGraphicsFullScreen> JoyGraphicsSettings__FullScreen_Get();                                               // [0x866040] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.JoyFileIO_GetFilesInRootAndAllSubFolders
	// bool JoyFileIO_GetFilesInRootAndAllSubFolders(TArray<FString>& files, FString RootFolderFullPath, FString Ext);          // [0x865e40] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.JoyFileIO_GetFiles
	// bool JoyFileIO_GetFiles(TArray<FString>& files, FString RootFolderFullPath, FString Ext);                                // [0x865c40] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.IsWidgetOfClassInViewport
	// bool IsWidgetOfClassInViewport(class UObject* WorldContextObject, class UClass* WidgetClass);                            // [0x865b70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.IsStandAlone
	// bool IsStandAlone(class UObject* WorldContextObject);                                                                    // [0x865ac0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.IsPointOnPlane
	// bool IsPointOnPlane(FPlane& Plane, FVector Point, float Tolerance);                                                      // [0x8658e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.IsAlphaNumeric
	// bool IsAlphaNumeric(FString String);                                                                                     // [0x8653e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.InsertChildAt
	// class UPanelSlot* InsertChildAt(class UWidget* Parent, int32_t Index, class UWidget* Content);                           // [0x8652e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.HorizontalFOV
	// float HorizontalFOV(float VerticalFOV, float AspectRatio);                                                               // [0x865210] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.HideStreamingLevel
	// void HideStreamingLevel(class ULevelStreamingDynamic* LevelInstance);                                                    // [0x865190] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.HasSubstring
	// bool HasSubstring(FString SearchIn, FString SubString, TEnumAsByte<ESearchCase> SearchCase, TEnumAsByte<ESearchDir> SearchDir); // [0x865010] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GraphicsSettings__SetFrameRateToBeUnbound
	// void GraphicsSettings__SetFrameRateToBeUnbound();                                                                        // [0x864f00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GraphicsSettings__SetFrameRateCap
	// void GraphicsSettings__SetFrameRateCap(float NewValue);                                                                  // [0x864e80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetWidgetFromName
	// class UWidget* GetWidgetFromName(class UUserWidget* ParentUserWidget, FName& Name);                                      // [0x864da0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetViewportPositionHitResultByChannel
	// bool GetViewportPositionHitResultByChannel(class UObject* WorldContextObject, FVector2D& ViewportPosition, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, FHitResult& OutHitResult); // [0x864bb0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetViewportPosition
	// bool GetViewportPosition(class UObject* WorldContextObject, FVector2D& ScreenPosition, FVector2D& OutViewportPosition);  // [0x864a90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetVectorRelativeLocation
	// FVector GetVectorRelativeLocation(FVector ParentLocation, FRotator ParentRotation, FVector ChildLocation);               // [0x8647b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetUTCFromUnixTimeStamp
	// void GetUTCFromUnixTimeStamp(int64_t UnixTimeStamp, FDateTime& UTCTime);                                                 // [0x864400] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetUserDisplayAdapterBrand
	// void GetUserDisplayAdapterBrand(bool& IsAMD, bool& IsNvidia, bool& IsIntel, bool& IsUnknown, int32_t& UnknownId);        // [0x8645d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetUnixTimeStamp
	// int64_t GetUnixTimeStamp(FDateTime& UTCTime);                                                                            // [0x864500] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetTimeInPlay
	// float GetTimeInPlay(class AActor* Actor);                                                                                // [0x864330] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetTimeAlive
	// float GetTimeAlive(class AActor* Target);                                                                                // [0x8642a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetStaticMeshVertexLocations
	// bool GetStaticMeshVertexLocations(class UStaticMeshComponent* comp, TArray<FVector>& VertexPositions);                   // [0x8641b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetSoundWaveFromFile
	// class USoundWave* GetSoundWaveFromFile(FString FilePath);                                                                // [0x864110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetRotatorRelativeRotation
	// FRotator GetRotatorRelativeRotation(FRotator ParentRotation, FRotator ChildRotation);                                    // [0x864010] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetPlayerUniqueNetID
	// int32_t GetPlayerUniqueNetID();                                                                                          // [0x863fe0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetPlayerStart
	// class APlayerStart* GetPlayerStart(class UObject* WorldContextObject, FString PlayerStartName);                          // [0x863eb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetObjectPath
	// FName GetObjectPath(class UObject* obj);                                                                                 // [0x863e20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetNamesOfLoadedLevels
	// void GetNamesOfLoadedLevels(class UObject* WorldContextObject, TArray<FString>& NamesOfLoadedLevels);                    // [0x863d10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetLevelInstanceInfo
	// FLevelStreamInstanceInfo GetLevelInstanceInfo(class ULevelStreamingDynamic* LevelInstance);                              // [0x863c70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetHeadMountedDisplayDeviceType
	// FName GetHeadMountedDisplayDeviceType();                                                                                 // [0x863c30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetGenericTeamId
	// char GetGenericTeamId(class AActor* Target);                                                                             // [0x863ba0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetFirstWidgetOfClass
	// class UUserWidget* GetFirstWidgetOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly); // [0x863aa0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetDistanceToCollision
	// float GetDistanceToCollision(class UPrimitiveComponent* CollisionComponent, FVector& Point, FVector& ClosestPointOnCollision); // [0x863970] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetDistanceBetweenComponentSurfaces
	// float GetDistanceBetweenComponentSurfaces(class UPrimitiveComponent* CollisionComponent1, class UPrimitiveComponent* CollisionComponent2, FVector& PointOnSurface1, FVector& PointOnSurface2); // [0x863810] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetCreationTime
	// float GetCreationTime(class AActor* Target);                                                                             // [0x863780] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetComponentRelativeRotation
	// FRotator GetComponentRelativeRotation(class USceneComponent* ParentComponent, class USceneComponent* ChildComponent);    // [0x8634c0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetComponentRelativeLocation
	// FVector GetComponentRelativeLocation(class USceneComponent* ParentComponent, class USceneComponent* ChildComponent);     // [0x8633e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetCommandLine
	// FString GetCommandLine();                                                                                                // [0x863300] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfLocation
	// class AActor* GetClosestActorOfClassInRadiusOfLocation(class UObject* WorldContextObject, class UClass* ActorClass, FVector Center, float Radius, bool& IsValid); // [0x863130] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfActor
	// class AActor* GetClosestActorOfClassInRadiusOfActor(class UObject* WorldContextObject, class UClass* ActorClass, class AActor* ActorCenter, float Radius, bool& IsValid); // [0x862f90] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetBoxContainingWorldPoints
	// void GetBoxContainingWorldPoints(TArray<FVector>& Points, FVector& Center, FVector& Extent);                             // [0x862cf0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetAllWidgetsOfClass
	// void GetAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, TArray<UUserWidget*>& FoundWidgets, bool TopLevelOnly); // [0x862b80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetAllBoneNamesBelowBone
	// int32_t GetAllBoneNamesBelowBone(class USkeletalMeshComponent* SkeletalMeshComp, FName StartingBoneName, TArray<FName>& BoneNames); // [0x862a50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetActorRelativeRotation
	// FRotator GetActorRelativeRotation(class AActor* ParentActor, class AActor* ChildActor);                                  // [0x862970] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetActorRelativeLocation
	// FVector GetActorRelativeLocation(class AActor* ParentActor, class AActor* ChildActor);                                   // [0x862890] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.FlushPressedKeys
	// void FlushPressedKeys(class APlayerController* PlayerController);                                                        // [0x862810] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.FlashGameOnTaskBar
	// void FlashGameOnTaskBar(class APlayerController* PC, bool FlashContinuous, int32_t MaxFlashCount, int32_t FlashFrequencyMilliseconds); // [0x8626c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringTextToFile
	// bool FileIO__SaveStringTextToFile(FString SaveDirectory, FString JoyfulFileName, FString SaveText, bool AllowOverWriting, bool AllowAppend); // [0x862420] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringArrayToFile
	// bool FileIO__SaveStringArrayToFile(FString SaveDirectory, FString JoyfulFileName, TArray<FString> SaveText, bool AllowOverWriting, bool AllowAppend); // [0x862110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.EqualEqual_Vector2DVector2D
	// bool EqualEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance);                                        // [0x861fe0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.DrawCircle
	// void DrawCircle(class UObject* WorldContextObject, FVector Center, float Radius, int32_t NumPoints, float Thickness, FLinearColor LineColor, FVector YAxis, FVector ZAxis, float Duration, bool PersistentLines); // [0x861760] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineFromSocket
	// void Draw__Thick3DLineFromSocket(class USkeletalMeshComponent* Mesh, FVector& EndPoint, FName Socket, FLinearColor LineColor, float Thickness, float Duration); // [0x861e00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineFromCharacterSocket
	// void Draw__Thick3DLineFromCharacterSocket(class AActor* TheCharacter, FVector& EndPoint, FName Socket, FLinearColor LineColor, float Thickness, float Duration); // [0x861c20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineBetweenActors
	// void Draw__Thick3DLineBetweenActors(class AActor* StartActor, class AActor* EndActor, FLinearColor LineColor, float Thickness, float Duration); // [0x861a80] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.DoesMaterialHaveParameter
	// bool DoesMaterialHaveParameter(class UMaterialInterface* Mat, FName Parameter);                                          // [0x861690] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.DistanceToSurface__DistaceOfPointToMeshSurface
	// float DistanceToSurface__DistaceOfPointToMeshSurface(class AStaticMeshActor* TheSMA, FVector& TestPoint, FVector& ClosestSurfacePoint); // [0x861560] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Data__GetCharacterBoneLocations
	// bool Data__GetCharacterBoneLocations(class AActor* TheCharacter, TArray<FVector>& BoneLocations);                        // [0x861470] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CreateTextureRenderTarget2D
	// class UTextureRenderTarget2D* CreateTextureRenderTarget2D(int32_t Width, int32_t Height, FLinearColor ClearColor, float Gamma); // [0x861280] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CreatePrimitiveComponent
	// class UPrimitiveComponent* CreatePrimitiveComponent(class UObject* WorldContextObject, class UClass* CompClass, FName Name, FVector Location, FRotator Rotation); // [0x8610e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CreatePlane
	// FPlane CreatePlane(FVector Center, FVector Normal);                                                                      // [0x860fd0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CreateObject
	// class UObject* CreateObject(class UObject* WorldContextObject, class UClass* TheObjectClass);                            // [0x860ed0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CreateMD5Hash
	// bool CreateMD5Hash(FString FileToHash, FString FileToStoreHashTo);                                                       // [0x860d60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CountOccurrancesOfSubString
	// int32_t CountOccurrancesOfSubString(FString Source, FString SubString, TEnumAsByte<ESearchCase> SearchCase);             // [0x860b80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__VectorToRotator
	// FRotator Conversions__VectorToRotator(FVector& TheVector);                                                               // [0x860840] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToVector
	// void Conversions__StringToVector(FString String, FVector& ConvertedVector, bool& IsValid);                               // [0x860710] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToRotator
	// void Conversions__StringToRotator(FString String, FRotator& ConvertedRotator, bool& IsValid);                            // [0x8605e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToColor
	// void Conversions__StringToColor(FString String, FLinearColor& ConvertedColor, bool& IsValid);                            // [0x8604b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__RotatorToVector
	// FVector Conversions__RotatorToVector(FRotator& TheRotator);                                                              // [0x860410] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__ColorToString
	// void Conversions__ColorToString(FLinearColor& Color, FString& ColorAsString);                                            // [0x860320] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Conversion__FloatToRoundedInteger
	// int32_t Conversion__FloatToRoundedInteger(float IN_Float);                                                               // [0x8602a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.constructRand
	// void constructRand();                                                                                                    // [0x873aa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Component_PrestreamTextures
	// void Component_PrestreamTextures(class UMeshComponent* Target, float Seconds, bool bEnableStreaming, int32_t CinematicTextureGroups); // [0x860140] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CompareMD5Hash
	// bool CompareMD5Hash(FString MD5HashFile1, FString MD5HashFile2);                                                         // [0x85ffd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Clone__StaticMeshActor
	// class AStaticMeshActor* Clone__StaticMeshActor(class UObject* WorldContextObject, bool& IsValid, class AStaticMeshActor* ToClone, FVector LocationOffset, FRotator RotationOffset); // [0x85f6d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.ClientWindow__GameWindowIsForeGroundInOS
	// bool ClientWindow__GameWindowIsForeGroundInOS();                                                                         // [0x85f6a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CharacterMovement__SetMaxMoveSpeed
	// bool CharacterMovement__SetMaxMoveSpeed(class ACharacter* TheCharacter, float NewMaxMoveSpeed);                          // [0x85f530] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Character__GetControllerRotation
	// FRotator Character__GetControllerRotation(class AActor* TheCharacter);                                                   // [0x85f600] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_SaveImage
	// bool CaptureComponent2D_SaveImage(class USceneCaptureComponent2D* Target, FString ImagePath, FLinearColor ClearColour);  // [0x85f3b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_Project
	// bool CaptureComponent2D_Project(class USceneCaptureComponent2D* Target, FVector Location, FVector2D& OutPixelLocation);  // [0x85f290] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_SaveImage
	// bool Capture2D_SaveImage(class ASceneCapture2D* Target, FString ImagePath, FLinearColor ClearColour);                    // [0x85f110] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_Project
	// bool Capture2D_Project(class ASceneCapture2D* Target, FVector Location, FVector2D& OutPixelLocation);                    // [0x85eff0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Calcs__ClosestPointToSourcePoint
	// float Calcs__ClosestPointToSourcePoint(FVector& Source, TArray<FVector>& OtherPoints, FVector& ClosestPoint);            // [0x85ee90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Array_Sort
	// void Array_Sort(TArray<int32_t>& TargetArray, bool bAscendingOrder, FName VariableName);                                 // [0x85ed40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Array_IsValidIndex
	// bool Array_IsValidIndex(TArray<int32_t>& TargetArray, int32_t Index);                                                    // [0x85ec50] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.AppendMultiple
	// FString AppendMultiple(FString A, FString B);                                                                            // [0x85e920] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsetsFromRotation
	// bool Animation__GetAimOffsetsFromRotation(class AActor* AnimBPOwner, FRotator& TheRotation, float& Pitch, float& Yaw);   // [0x85e7b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsets
	// bool Animation__GetAimOffsets(class AActor* AnimBPOwner, float& Pitch, float& Yaw);                                      // [0x85e690] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.AddToStreamingLevels
	// void AddToStreamingLevels(class UObject* WorldContextObject, FLevelStreamInstanceInfo& LevelInstanceInfo);               // [0x85e5c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.AddToActorRotation
	// void AddToActorRotation(class AActor* TheActor, FRotator AddRot);                                                        // [0x85e4f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Actor_PrestreamTextures
	// void Actor_PrestreamTextures(class AActor* Target, float Seconds, bool bEnableStreaming, int32_t CinematicTextureGroups); // [0x85e1e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Actor__TeleportToActor
	// bool Actor__TeleportToActor(class AActor* ActorToTeleport, class AActor* DestinationActor);                              // [0x85e420] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Actor__GetAttachedActors
	// void Actor__GetAttachedActors(class AActor* ParentActor, TArray<AActor*>& ActorsArray);                                  // [0x85e340] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetPlayerController
	// class APlayerController* Accessor__GetPlayerController(class AActor* TheCharacter, bool& IsValid);                       // [0x85e100] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetNameAsString
	// FString Accessor__GetNameAsString(class UObject* TheObject);                                                             // [0x85e030] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetCharacterSkeletalMesh
	// class USkeletalMeshComponent* Accessor__GetCharacterSkeletalMesh(class AActor* TheCharacter, bool& IsValid);             // [0x85df50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/VictoryBPLibrary.VictoryBPHTML
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UVictoryBPHTML : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/VictoryBPLibrary.VictoryISM
/// Size: 0x0228 (552 bytes) (0x000220 - 0x000228) align 8 MaxSize: 0x0228
class AVictoryISM : public AActor
{ 
public:
	class UInstancedStaticMeshComponent*               Mesh;                                                       // 0x0220   (0x0008)  
};

/// Class /Script/VictoryBPLibrary.VictoryPC
/// Size: 0x0570 (1392 bytes) (0x000570 - 0x000570) align 8 MaxSize: 0x0570
class AVictoryPC : public APlayerController
{ 
public:


	/// Functions
	// Function /Script/VictoryBPLibrary.VictoryPC.VictoryPlaySpeechSound
	// class UAudioComponent* VictoryPlaySpeechSound(class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime); // [0x876670] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryPC.VictoryPC_GetMyIP_SendRequest
	// bool VictoryPC_GetMyIP_SendRequest();                                                                                    // [0x876640] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryPC.VictoryPC_GetMyIP_DataReceived
	// void VictoryPC_GetMyIP_DataReceived(FString YourIP);                                                                     // [0x1414700] Event|Public|BlueprintEvent 
	// Function /Script/VictoryBPLibrary.VictoryPC.Subtitles_CPPDelegate
	// void Subtitles_CPPDelegate(TArray<FSubtitleCue>& VictorySubtitles, float CueDuration);                                   // [0x8764f0] Final|Native|Public|HasOutParms 
	// Function /Script/VictoryBPLibrary.VictoryPC.OnVictorySubtitlesQueued
	// void OnVictorySubtitlesQueued(TArray<FVictorySubtitleCue>& VictorySubtitles, float CueDuration);                         // [0x1414700] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/VictoryBPLibrary.VictoryTMapComp
/// Size: 0x02E0 (736 bytes) (0x0000B0 - 0x0002E0) align 8 MaxSize: 0x02E0
class UVictoryTMapComp : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x230];                                     // 0x00B0   (0x0230)  MISSED


	/// Functions
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Vector__Remove
	// void String_Vector__Remove(FString Key);                                                                                 // [0x876400] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Vector__Get
	// FVector String_Vector__Get(FString Key, bool& IsValid);                                                                  // [0x8762a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Vector__Clear
	// void String_Vector__Clear();                                                                                             // [0x876280] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Vector__AddPair
	// void String_Vector__AddPair(FString Key, FVector Value);                                                                 // [0x876140] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_String__Remove
	// void String_String__Remove(FString Key);                                                                                 // [0x876050] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_String__Get
	// FString String_String__Get(FString Key, bool& IsValid);                                                                  // [0x875ec0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_String__Clear
	// void String_String__Clear();                                                                                             // [0x875ea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_String__AddPair
	// void String_String__AddPair(FString Key, FString Value);                                                                 // [0x875d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Rotator__Remove
	// void String_Rotator__Remove(FString Key);                                                                                // [0x875c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Rotator__Get
	// FRotator String_Rotator__Get(FString Key, bool& IsValid);                                                                // [0x875ad0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Rotator__Clear
	// void String_Rotator__Clear();                                                                                            // [0x875ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Rotator__AddPair
	// void String_Rotator__AddPair(FString Key, FRotator Value);                                                               // [0x875970] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Int__Remove
	// void String_Int__Remove(FString Key);                                                                                    // [0x875880] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Int__Get
	// int32_t String_Int__Get(FString Key, bool& IsValid);                                                                     // [0x875730] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Int__Clear
	// void String_Int__Clear();                                                                                                // [0x875710] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Int__AddPair
	// void String_Int__AddPair(FString Key, int32_t Value);                                                                    // [0x8755e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Actor__Remove
	// void String_Actor__Remove(FString Key);                                                                                  // [0x8754f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Actor__Get
	// class AActor* String_Actor__Get(FString Key, bool& IsValid);                                                             // [0x8753a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Actor__Clear
	// void String_Actor__Clear();                                                                                              // [0x875380] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Actor__AddPair
	// void String_Actor__AddPair(FString Key, class AActor* Value);                                                            // [0x875250] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.Int_Vector__Remove
	// void Int_Vector__Remove(int32_t Key);                                                                                    // [0x8751c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.Int_Vector__Get
	// FVector Int_Vector__Get(int32_t Key, bool& IsValid);                                                                     // [0x8750d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.Int_Vector__Clear
	// void Int_Vector__Clear();                                                                                                // [0x8750b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.Int_Vector__AddPair
	// void Int_Vector__AddPair(int32_t Key, FVector Value);                                                                    // [0x874fd0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.Int_Float__Remove
	// void Int_Float__Remove(int32_t Key, float Value);                                                                        // [0x874f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.Int_Float__Get
	// float Int_Float__Get(int32_t Key, bool& IsValid);                                                                        // [0x874e20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.Int_Float__Clear
	// void Int_Float__Clear();                                                                                                 // [0x874e00] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.Int_Float__AddPair
	// void Int_Float__AddPair(int32_t Key, float Value);                                                                       // [0x874d30] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/VictoryBPLibrary.LevelStreamInstanceInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 MaxSize: 0x0030
struct FLevelStreamInstanceInfo
{ 
	FName                                              PackageName;                                                // 0x0000   (0x0008)  
	FName                                              PackageNameToLoad;                                          // 0x0008   (0x0008)  
	FVector                                            Location;                                                   // 0x0010   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x001C   (0x000C)  
	bool                                               bShouldBeLoaded : 1;                                        // 0x0028:0 (0x0001)  
	bool                                               bShouldBeVisible : 1;                                       // 0x0028:1 (0x0001)  
	bool                                               bShouldBlockOnLoad : 1;                                     // 0x0028:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            LODIndex;                                                   // 0x002C   (0x0004)  
};

/// Struct /Script/VictoryBPLibrary.VictoryInputAxis
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FVictoryInputAxis
{ 
	FString                                            AxisName;                                                   // 0x0000   (0x0010)  
	FString                                            KeyAsString;                                                // 0x0010   (0x0010)  
	FKey                                               Key;                                                        // 0x0020   (0x0018)  
	float                                              Scale;                                                      // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/VictoryBPLibrary.VictoryInput
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FVictoryInput
{ 
	FString                                            ActionName;                                                 // 0x0000   (0x0010)  
	FKey                                               Key;                                                        // 0x0010   (0x0018)  
	FString                                            KeyAsString;                                                // 0x0028   (0x0010)  
	bool                                               bShift : 1;                                                 // 0x0038:0 (0x0001)  
	bool                                               bCtrl : 1;                                                  // 0x0038:1 (0x0001)  
	bool                                               bAlt : 1;                                                   // 0x0038:2 (0x0001)  
	bool                                               bCmd : 1;                                                   // 0x0038:3 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/VictoryBPLibrary.VictorySubtitleCue
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FVictorySubtitleCue
{ 
	FText                                              SubtitleText;                                               // 0x0000   (0x0018)  
	float                                              Time;                                                       // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UTKMathFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URamaVictoryPluginCreateProcessPipe) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UVictoryBPFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UVictoryBPHTML) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AVictoryISM) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(AVictoryPC) == 0x0570); // 1392 bytes (0x000570 - 0x000570)
static_assert(sizeof(UVictoryTMapComp) == 0x02E0); // 736 bytes (0x0000B0 - 0x0002E0)
static_assert(sizeof(FLevelStreamInstanceInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FVictoryInputAxis) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FVictoryInput) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FVictorySubtitleCue) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(AVictoryISM, Mesh) == 0x0220);
static_assert(offsetof(FLevelStreamInstanceInfo, PackageName) == 0x0000);
static_assert(offsetof(FLevelStreamInstanceInfo, PackageNameToLoad) == 0x0008);
static_assert(offsetof(FLevelStreamInstanceInfo, Location) == 0x0010);
static_assert(offsetof(FLevelStreamInstanceInfo, Rotation) == 0x001C);
static_assert(offsetof(FVictoryInputAxis, AxisName) == 0x0000);
static_assert(offsetof(FVictoryInputAxis, KeyAsString) == 0x0010);
static_assert(offsetof(FVictoryInputAxis, Key) == 0x0020);
static_assert(offsetof(FVictoryInput, ActionName) == 0x0000);
static_assert(offsetof(FVictoryInput, Key) == 0x0010);
static_assert(offsetof(FVictoryInput, KeyAsString) == 0x0028);
static_assert(offsetof(FVictorySubtitleCue, SubtitleText) == 0x0000);
