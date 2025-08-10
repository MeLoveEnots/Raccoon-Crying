
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: HeadMountedDisplay
/// dependency: NavigationSystem
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/RyRuntime.ERyAsyncLoadingResult
/// Size: 0x01 (1 bytes)
enum class ERyAsyncLoadingResult : uint8_t
{
	ERyAsyncLoadingResult__Failed                                                    = 0,
	ERyAsyncLoadingResult__Succeeded                                                 = 1,
	ERyAsyncLoadingResult__Canceled                                                  = 2
};

/// Enum /Script/RyRuntime.ERyLineBatchDepthPriority
/// Size: 0x01 (1 bytes)
enum class ERyLineBatchDepthPriority : uint8_t
{
	ERyLineBatchDepthPriority__World                                                 = 0,
	ERyLineBatchDepthPriority__Foreground                                            = 1
};

/// Enum /Script/RyRuntime.ERyMathEasingType
/// Size: 0x01 (1 bytes)
enum class ERyMathEasingType : uint8_t
{
	ERyMathEasingType__Linear                                                        = 0,
	ERyMathEasingType__QuadraticEaseIn                                               = 1,
	ERyMathEasingType__QuadraticEaseOut                                              = 2,
	ERyMathEasingType__QuadraticEaseInOut                                            = 3,
	ERyMathEasingType__CubicEaseIn                                                   = 4,
	ERyMathEasingType__CubicEaseOut                                                  = 5,
	ERyMathEasingType__CubicEaseInOut                                                = 6,
	ERyMathEasingType__QuarticEaseIn                                                 = 7,
	ERyMathEasingType__QuarticEaseOut                                                = 8,
	ERyMathEasingType__QuarticEaseInOut                                              = 9,
	ERyMathEasingType__QuinticEaseIn                                                 = 10,
	ERyMathEasingType__QuinticEaseOut                                                = 11,
	ERyMathEasingType__QuinticEaseInOut                                              = 12,
	ERyMathEasingType__SineEaseIn                                                    = 13,
	ERyMathEasingType__SineEaseOut                                                   = 14,
	ERyMathEasingType__SineEaseInOut                                                 = 15,
	ERyMathEasingType__CircularEaseIn                                                = 16,
	ERyMathEasingType__CircularEaseOut                                               = 17,
	ERyMathEasingType__CircularEaseInOut                                             = 18,
	ERyMathEasingType__ExponentialEaseIn                                             = 19,
	ERyMathEasingType__ExponentialEaseOut                                            = 20,
	ERyMathEasingType__ExponentialEaseInOut                                          = 21,
	ERyMathEasingType__ElasticEaseIn                                                 = 22,
	ERyMathEasingType__ElasticEaseOut                                                = 23,
	ERyMathEasingType__ElasticEaseInOut                                              = 24,
	ERyMathEasingType__BackEaseIn                                                    = 25,
	ERyMathEasingType__BackEaseOut                                                   = 26,
	ERyMathEasingType__BackEaseInOut                                                 = 27,
	ERyMathEasingType__BounceEaseIn                                                  = 28,
	ERyMathEasingType__BounceEaseOut                                                 = 29,
	ERyMathEasingType__BounceEaseInOut                                               = 30
};

/// Enum /Script/RyRuntime.ERyComponentCreationMethod
/// Size: 0x01 (1 bytes)
enum class ERyComponentCreationMethod : uint8_t
{
	ERyComponentCreationMethod__Native                                               = 0,
	ERyComponentCreationMethod__SimpleConstructionScript                             = 1,
	ERyComponentCreationMethod__UserConstructionScript                               = 2,
	ERyComponentCreationMethod__Instance                                             = 3
};

/// Enum /Script/RyRuntime.ERyCurrentLevelStreamingState
/// Size: 0x01 (1 bytes)
enum class ERyCurrentLevelStreamingState : uint8_t
{
	ERyCurrentLevelStreamingState__Removed                                           = 0,
	ERyCurrentLevelStreamingState__Unloaded                                          = 1,
	ERyCurrentLevelStreamingState__FailedToLoad                                      = 2,
	ERyCurrentLevelStreamingState__Loading                                           = 3,
	ERyCurrentLevelStreamingState__LoadedNotVisible                                  = 4,
	ERyCurrentLevelStreamingState__MakingVisible                                     = 5,
	ERyCurrentLevelStreamingState__LoadedVisible                                     = 6,
	ERyCurrentLevelStreamingState__MakingInvisible                                   = 7
};

/// Enum /Script/RyRuntime.ERyWorldType
/// Size: 0x01 (1 bytes)
enum class ERyWorldType : uint8_t
{
	ERyWorldType__None                                                               = 0,
	ERyWorldType__Game                                                               = 1,
	ERyWorldType__Editor                                                             = 2,
	ERyWorldType__PIE                                                                = 3,
	ERyWorldType__EditorPreview                                                      = 4,
	ERyWorldType__GamePreview                                                        = 5,
	ERyWorldType__GameRPC                                                            = 6,
	ERyWorldType__Inactive                                                           = 7
};

/// Enum /Script/RyRuntime.ERyRuntimeLogVerbosity
/// Size: 0x01 (1 bytes)
enum class ERyRuntimeLogVerbosity : uint8_t
{
	ERyRuntimeLogVerbosity__NoLogging                                                = 0,
	ERyRuntimeLogVerbosity__Fatal                                                    = 1,
	ERyRuntimeLogVerbosity__Error                                                    = 2,
	ERyRuntimeLogVerbosity__Warning                                                  = 3,
	ERyRuntimeLogVerbosity__Display                                                  = 4,
	ERyRuntimeLogVerbosity__Log                                                      = 5,
	ERyRuntimeLogVerbosity__Verbose                                                  = 6,
	ERyRuntimeLogVerbosity__VeryVerbose                                              = 7
};

/// Enum /Script/RyRuntime.ERyYScreenAnchor
/// Size: 0x01 (1 bytes)
enum class ERyYScreenAnchor : uint8_t
{
	ERyYScreenAnchor__TOP                                                            = 0,
	ERyYScreenAnchor__MIDDLE                                                         = 1,
	ERyYScreenAnchor__BOTTOM                                                         = 2
};

/// Enum /Script/RyRuntime.ERyXScreenAnchor
/// Size: 0x01 (1 bytes)
enum class ERyXScreenAnchor : uint8_t
{
	ERyXScreenAnchor__LEFT                                                           = 0,
	ERyXScreenAnchor__MIDDLE                                                         = 1,
	ERyXScreenAnchor__RIGHT                                                          = 2
};

/// Enum /Script/RyRuntime.ERyScreenAnchor
/// Size: 0x01 (1 bytes)
enum class ERyScreenAnchor : uint8_t
{
	ERyScreenAnchor__TOP_LEFT                                                        = 0,
	ERyScreenAnchor__TOP_MIDDLE                                                      = 1,
	ERyScreenAnchor__TOP_RIGHT                                                       = 2,
	ERyScreenAnchor__MIDDLE_LEFT                                                     = 3,
	ERyScreenAnchor__MIDDLE                                                          = 4,
	ERyScreenAnchor__MIDDLE_RIGHT                                                    = 5,
	ERyScreenAnchor__BOTTOM_LEFT                                                     = 6,
	ERyScreenAnchor__BOTTOM_MIDDLE                                                   = 7,
	ERyScreenAnchor__BOTTOM_RIGHT                                                    = 8
};

/// Enum /Script/RyRuntime.ERyUnit
/// Size: 0x01 (1 bytes)
enum class ERyUnit : uint8_t
{
	ERyUnit__Micrometers                                                             = 0,
	ERyUnit__Millimeters                                                             = 1,
	ERyUnit__Centimeters                                                             = 2,
	ERyUnit__Meters                                                                  = 3,
	ERyUnit__Kilometers                                                              = 4,
	ERyUnit__Inches                                                                  = 5,
	ERyUnit__Feet                                                                    = 6,
	ERyUnit__Yards                                                                   = 7,
	ERyUnit__Miles                                                                   = 8,
	ERyUnit__Lightyears                                                              = 9,
	ERyUnit__Degrees                                                                 = 10,
	ERyUnit__Radians                                                                 = 11,
	ERyUnit__MetersPerSecond                                                         = 12,
	ERyUnit__KilometersPerHour                                                       = 13,
	ERyUnit__MilesPerHour                                                            = 14,
	ERyUnit__Celsius                                                                 = 15,
	ERyUnit__Farenheit                                                               = 16,
	ERyUnit__Kelvin                                                                  = 17,
	ERyUnit__Micrograms                                                              = 18,
	ERyUnit__Milligrams                                                              = 19,
	ERyUnit__Grams                                                                   = 20,
	ERyUnit__Kilograms                                                               = 21,
	ERyUnit__MetricTons                                                              = 22,
	ERyUnit__Ounces                                                                  = 23,
	ERyUnit__Pounds                                                                  = 24,
	ERyUnit__Stones                                                                  = 25,
	ERyUnit__Newtons                                                                 = 26,
	ERyUnit__PoundsForce                                                             = 27,
	ERyUnit__KilogramsForce                                                          = 28,
	ERyUnit__Hertz                                                                   = 29,
	ERyUnit__Kilohertz                                                               = 30,
	ERyUnit__Megahertz                                                               = 31,
	ERyUnit__Gigahertz                                                               = 32,
	ERyUnit__RevolutionsPerMinute                                                    = 33,
	ERyUnit__Bytes                                                                   = 34,
	ERyUnit__Kilobytes                                                               = 35,
	ERyUnit__Megabytes                                                               = 36,
	ERyUnit__Gigabytes                                                               = 37,
	ERyUnit__Terabytes                                                               = 38,
	ERyUnit__Lumens                                                                  = 39,
	ERyUnit__Candela                                                                 = 40,
	ERyUnit__Lux                                                                     = 41,
	ERyUnit__CandelaPerMeter2                                                        = 42,
	ERyUnit__Milliseconds                                                            = 43,
	ERyUnit__Seconds                                                                 = 44,
	ERyUnit__Minutes                                                                 = 45,
	ERyUnit__Hours                                                                   = 46,
	ERyUnit__Days                                                                    = 47,
	ERyUnit__Months                                                                  = 48,
	ERyUnit__Years                                                                   = 49,
	ERyUnit__PixelsPerInch                                                           = 50,
	ERyUnit__Percentage                                                              = 51,
	ERyUnit__Multiplier                                                              = 52,
	ERyUnit__Unspecified                                                             = 53
};

/// Enum /Script/RyRuntime.ERyNavLinkDirection
/// Size: 0x01 (1 bytes)
enum class ERyNavLinkDirection : uint8_t
{
	ERyNavLinkDirection__BothWays                                                    = 0,
	ERyNavLinkDirection__LeftToRight                                                 = 1,
	ERyNavLinkDirection__RightToLeft                                                 = 2
};

/// Enum /Script/RyRuntime.ERyRunNotifyCompletionState
/// Size: 0x01 (1 bytes)
enum class ERyRunNotifyCompletionState : uint8_t
{
	ERyRunNotifyCompletionState__None                                                = 0,
	ERyRunNotifyCompletionState__Pending                                             = 1,
	ERyRunNotifyCompletionState__Success                                             = 2,
	ERyRunNotifyCompletionState__Fail                                                = 3
};

/// Enum /Script/RyRuntime.ERyDeviceScreenOrientation
/// Size: 0x01 (1 bytes)
enum class ERyDeviceScreenOrientation : uint8_t
{
	ERyDeviceScreenOrientation__Unknown                                              = 0,
	ERyDeviceScreenOrientation__Portrait                                             = 1,
	ERyDeviceScreenOrientation__PortraitUpsideDown                                   = 2,
	ERyDeviceScreenOrientation__LandscapeLeft                                        = 3,
	ERyDeviceScreenOrientation__LandscapeRight                                       = 4,
	ERyDeviceScreenOrientation__FaceUp                                               = 5,
	ERyDeviceScreenOrientation__FaceDown                                             = 6
};

/// Enum /Script/RyRuntime.ERyNetworkConnectionType
/// Size: 0x01 (1 bytes)
enum class ERyNetworkConnectionType : uint8_t
{
	ERyNetworkConnectionType__Unknown                                                = 0,
	ERyNetworkConnectionType__None                                                   = 1,
	ERyNetworkConnectionType__AirplaneMode                                           = 2,
	ERyNetworkConnectionType__Cell                                                   = 3,
	ERyNetworkConnectionType__WiFi                                                   = 4,
	ERyNetworkConnectionType__WiMAX                                                  = 5,
	ERyNetworkConnectionType__Bluetooth                                              = 6,
	ERyNetworkConnectionType__Ethernet                                               = 7
};

/// Enum /Script/RyRuntime.ERyIterateDirectoryOut
/// Size: 0x01 (1 bytes)
enum class ERyIterateDirectoryOut : uint8_t
{
	ERyIterateDirectoryOut__FilesAndDirectories                                      = 0,
	ERyIterateDirectoryOut__FilesOnly                                                = 1,
	ERyIterateDirectoryOut__DirectoriesOnly                                          = 2
};

/// Enum /Script/RyRuntime.ERyBatchMode
/// Size: 0x01 (1 bytes)
enum class ERyBatchMode : uint8_t
{
	ERyBatchMode__Background                                                         = 0,
	ERyBatchMode__Fast                                                               = 1,
	ERyBatchMode__Precompile                                                         = 2
};

/// Enum /Script/RyRuntime.ERyScreenShotMode
/// Size: 0x01 (1 bytes)
enum class ERyScreenShotMode : uint8_t
{
	ERyScreenShotMode__Game                                                          = 0,
	ERyScreenShotMode__EditorActiveWindow                                            = 1,
	ERyScreenShotMode__EditorLevelViewport                                           = 2
};

/// Enum /Script/RyRuntime.ERyShadingPath
/// Size: 0x01 (1 bytes)
enum class ERyShadingPath : uint8_t
{
	ERyShadingPath__Invalid                                                          = 0,
	ERyShadingPath__Mobile                                                           = 1,
	ERyShadingPath__Deferred                                                         = 2
};

/// Enum /Script/RyRuntime.ERyRenderingFeatureLevel
/// Size: 0x01 (1 bytes)
enum class ERyRenderingFeatureLevel : uint8_t
{
	ERyRenderingFeatureLevel__INVALID                                                = 0,
	ERyRenderingFeatureLevel__ES3                                                    = 1,
	ERyRenderingFeatureLevel__SM5                                                    = 2
};

/// Enum /Script/RyRuntime.ERyShaderPlatform
/// Size: 0x01 (1 bytes)
enum class ERyShaderPlatform : uint8_t
{
	ERyShaderPlatform__SP_INVALID                                                    = 0,
	ERyShaderPlatform__SP_PCD3D_SM5                                                  = 1,
	ERyShaderPlatform__SP_METAL                                                      = 2,
	ERyShaderPlatform__SP_METAL_MRT                                                  = 3,
	ERyShaderPlatform__SP_PCD3D_ES3                                                  = 4,
	ERyShaderPlatform__SP_OPENGL_PCES3                                               = 5,
	ERyShaderPlatform__SP_METAL_SM5                                                  = 6,
	ERyShaderPlatform__SP_VULKAN_PCES3                                               = 7,
	ERyShaderPlatform__SP_VULKAN_SM5                                                 = 9,
	ERyShaderPlatform__SP_VULKAN_ES3_1_ANDROID                                       = 10,
	ERyShaderPlatform__SP_METAL_MACES3                                               = 11,
	ERyShaderPlatform__SP_OPENGL_ES3_1_ANDROID                                       = 12,
	ERyShaderPlatform__SP_METAL_MRT_MAC                                              = 13,
	ERyShaderPlatform__SP_METAL_TVOS                                                 = 16,
	ERyShaderPlatform__SP_METAL_MRT_TVOS                                             = 17,
	ERyShaderPlatform__SP_VULKAN_SM5_ANDROID                                         = 18
};

/// Enum /Script/RyRuntime.ERyTextureResourceResult
/// Size: 0x01 (1 bytes)
enum class ERyTextureResourceResult : uint8_t
{
	ERyTextureResourceResult__Success                                                = 0,
	ERyTextureResourceResult__Failure                                                = 1
};

/// Enum /Script/RyRuntime.ERyTickUntilStopOutExecs
/// Size: 0x01 (1 bytes)
enum class ERyTickUntilStopOutExecs : uint8_t
{
	ERyTickUntilStopOutExecs__Tick                                                   = 0,
	ERyTickUntilStopOutExecs__Stopped                                                = 1
};

/// Enum /Script/RyRuntime.ERyTickUntilStopInExecs
/// Size: 0x01 (1 bytes)
enum class ERyTickUntilStopInExecs : uint8_t
{
	ERyTickUntilStopInExecs__Start                                                   = 0,
	ERyTickUntilStopInExecs__Stop                                                    = 1
};

/// Enum /Script/RyRuntime.ERySteamVRButtonIds
/// Size: 0x01 (1 bytes)
enum class ERySteamVRButtonIds : uint8_t
{
	ERySteamVRButtonIds__Button_System                                               = 0,
	ERySteamVRButtonIds__Button_ApplicationMenu                                      = 1,
	ERySteamVRButtonIds__Button_Grip                                                 = 2,
	ERySteamVRButtonIds__Button_DPad_Left                                            = 3,
	ERySteamVRButtonIds__Button_DPad_Up                                              = 4,
	ERySteamVRButtonIds__Button_DPad_Right                                           = 5,
	ERySteamVRButtonIds__Button_DPad_Down                                            = 6,
	ERySteamVRButtonIds__Button_A                                                    = 7,
	ERySteamVRButtonIds__Button_ProximitySensor                                      = 31,
	ERySteamVRButtonIds__Button_Axis0                                                = 32,
	ERySteamVRButtonIds__Button_Axis1                                                = 33,
	ERySteamVRButtonIds__Button_Axis2                                                = 34,
	ERySteamVRButtonIds__Button_Axis3                                                = 35,
	ERySteamVRButtonIds__Button_Axis4                                                = 36,
	ERySteamVRButtonIds__Button_Max                                                  = 64
};

/// Class /Script/RyRuntime.RyLineBatchComponent
/// Size: 0x0490 (1168 bytes) (0x000490 - 0x000490) align 16 MaxSize: 0x0490
class URyLineBatchComponent : public ULineBatchComponent
{ 
public:


	/// Functions
	// Function /Script/RyRuntime.RyLineBatchComponent.ClearLineBatches
	// void ClearLineBatches();                                                                                                 // [0xd9ef10] Final|Native|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyLineBatchComponent.AddSphere
	// void AddSphere(FVector& Center, float Radius, int32_t Segments, FLinearColor LineColor, float LifeTime, float Thickness, ERyLineBatchDepthPriority DepthPriority); // [0xd9ecd0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyLineBatchComponent.AddSolidBox
	// void AddSolidBox(FBox& Box, FTransform& BoxToWorld, FLinearColor Color, float LifeTime, ERyLineBatchDepthPriority DepthPriority); // [0xd9eaa0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyLineBatchComponent.AddQuad
	// void AddQuad(FPlane& PlaneCoordinates, FVector Location, FVector2D Extents, FLinearColor PlaneColor, float LifeTime, ERyLineBatchDepthPriority DepthPriority); // [0xd9e8a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyLineBatchComponent.AddPoint
	// void AddPoint(FVector& Position, FLinearColor Color, float PointSize, float LifeTime, ERyLineBatchDepthPriority DepthPriority); // [0xd9e6d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyLineBatchComponent.AddPlane
	// void AddPlane(FPlane& PlaneCoordinates, FVector Location, float Size, FLinearColor PlaneColor, float LifeTime, ERyLineBatchDepthPriority DepthPriority); // [0xd9e4d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyLineBatchComponent.AddMesh
	// void AddMesh(TArray<FVector>& Verts, TArray<int32_t>& Indices, FLinearColor Color, float LifeTime, ERyLineBatchDepthPriority DepthPriority); // [0xd9e2f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyLineBatchComponent.AddLine
	// void AddLine(FVector& Start, FVector& End, FLinearColor Color, float LifeTime, float Thickness, ERyLineBatchDepthPriority DepthPriority); // [0xd9e0c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyLineBatchComponent.AddFrustum
	// void AddFrustum(FTransform& FrustumTransform, FLinearColor FrustumColor, float LifeTime, float Thickness, ERyLineBatchDepthPriority DepthPriority); // [0xd9deb0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyLineBatchComponent.AddCylinder
	// void AddCylinder(FVector& Start, FVector& End, float Radius, int32_t Segments, FLinearColor LineColor, float LifeTime, float Thickness, ERyLineBatchDepthPriority DepthPriority); // [0xd9da80] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyLineBatchComponent.AddCoordinateSystem
	// void AddCoordinateSystem(FVector& AxisLoc, FRotator& AxisRot, float Scale, float LifeTime, float Thickness, ERyLineBatchDepthPriority DepthPriority); // [0xd9d860] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyLineBatchComponent.AddCone
	// void AddCone(FVector Origin, FVector Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, FLinearColor LineColor, float LifeTime, float Thickness, ERyLineBatchDepthPriority DepthPriority); // [0xd9d540] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyLineBatchComponent.AddCapsule
	// void AddCapsule(FVector& Center, float HalfHeight, float Radius, FRotator& Rotation, FLinearColor LineColor, float LifeTime, float Thickness, ERyLineBatchDepthPriority DepthPriority); // [0xd9d2c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyLineBatchComponent.AddCamera
	// void AddCamera(class ACameraActor* CameraActor, FLinearColor CameraColor, float LifeTime, ERyLineBatchDepthPriority DepthPriority); // [0xd9d150] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyLineBatchComponent.AddBox
	// void AddBox(FVector& Center, FVector& Extent, FLinearColor LineColor, FRotator Rotation, float LifeTime, float Thickness, ERyLineBatchDepthPriority DepthPriority); // [0xd9cf00] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyLineBatchComponent.AddArrow
	// void AddArrow(FVector& LineStart, FVector& LineEnd, float ArrowSize, FLinearColor LineColor, float LifeTime, float Thickness, ERyLineBatchDepthPriority DepthPriority); // [0xd9ccc0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/RyRuntime.RyMathEasing
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URyMathEasing : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RyRuntime.RyMathEasing.EaseVector
	// FVector EaseVector(ERyMathEasingType Easing, FVector& Start, FVector& Target, float Alpha);                              // [0xd9f990] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyMathEasing.EaseRotator
	// FRotator EaseRotator(ERyMathEasingType Easing, FRotator& Start, FRotator& Target, float Alpha);                          // [0xd9f7f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyMathEasing.EaseFloat
	// float EaseFloat(ERyMathEasingType Easing, float Alpha);                                                                  // [0xd9f720] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/RyRuntime.RyRuntimeAnimationHelpers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URyRuntimeAnimationHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RyRuntime.RyRuntimeAnimationHelpers.MontageHasSection
	// bool MontageHasSection(class UAnimMontage* MontageIn, FName SectionName);                                                // [0xda03f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeAnimationHelpers.GetMontageSectionTimeLeftFromPos
	// float GetMontageSectionTimeLeftFromPos(class UAnimMontage* MontageIn, FName SectionName, float Position);                // [0xda00b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeAnimationHelpers.GetMontageSectionStartAndEndTime
	// void GetMontageSectionStartAndEndTime(class UAnimMontage* MontageIn, FName SectionName, float& OutStartTime, float& OutEndTime); // [0xd9ff50] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeAnimationHelpers.GetMontageSectionNames
	// void GetMontageSectionNames(class UAnimMontage* MontageIn, TArray<FName>& NamesOut);                                     // [0xd9fe70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeAnimationHelpers.GetMontageSectionNameFromPosition
	// FName GetMontageSectionNameFromPosition(class UAnimMontage* MontageIn, float Position);                                  // [0xd9fda0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeAnimationHelpers.GetAllMontages
	// void GetAllMontages(class UAnimInstance* AnimInstance, TArray<UAnimMontage*>& montagesOut);                              // [0xd9fb30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeAnimationHelpers.CreateDynamicMontageOfSequences
	// class UAnimMontage* CreateDynamicMontageOfSequences(TArray<UAnimSequence*>& SequencesIn, TArray<FName>& PerSequenceSectionNames, TArray<int32_t>& LoopTimes, FName AnimSlot, float BlendIn, float BlendOut, float BlendOutTriggerTime, bool EnableAutoBlendOut); // [0xd9f2f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeAnimationHelpers.CreateDynamicMontageFromMontage
	// class UAnimMontage* CreateDynamicMontageFromMontage(class UAnimMontage* MontageIn, FName SlotOverride, float OverrideBlendIn, float OverrideBlendOut, float OverrideBlendOutTriggerTime); // [0xd9f160] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeAnimationHelpers.CreateAnimMetaDataInstance
	// class UAnimMetaData* CreateAnimMetaDataInstance(class UClass* MetaDataClass);                                            // [0xd9f0d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/RyRuntime.RyRuntimeAudioHelpers
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class URyRuntimeAudioHelpers : public UBlueprintFunctionLibrary
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED


	/// Functions
	// Function /Script/RyRuntime.RyRuntimeAudioHelpers.GetAudioDeviceList
	// void GetAudioDeviceList(TArray<FString>& OutAudioDeviceNames);                                                           // [0xd9fce0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeAudioHelpers.GetAudioCaptureDeviceList
	// void GetAudioCaptureDeviceList(TArray<FRyCaptureDeviceInfo>& OutAudioCaptureDevices);                                    // [0xd9fc10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/RyRuntime.RyRuntimeComponentHelpers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URyRuntimeComponentHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RyRuntime.RyRuntimeComponentHelpers.InvalidateLightingCacheDetailed
	// void InvalidateLightingCacheDetailed(class UActorComponent* Component, bool invalidateBuildEnqueuedLighting, bool translationOnly); // [0xda02e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeComponentHelpers.GetWorldComponentsByClass
	// void GetWorldComponentsByClass(class UWorld* World, class UClass* ComponentClass, TArray<UActorComponent*>& componentsOut); // [0xda01c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeComponentHelpers.DistributePointsToSpline
	// void DistributePointsToSpline(class USplineComponent* SplineComponent, TArray<FVector>& Points, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool UpdateSpline); // [0xd9f5b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeComponentHelpers.CopyMaterials
	// void CopyMaterials(class UPrimitiveComponent* sourceMesh, class UPrimitiveComponent* destMesh);                          // [0xd9f010] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeComponentHelpers.CopyCollisionProperties
	// void CopyCollisionProperties(class UPrimitiveComponent* sourceMesh, class UPrimitiveComponent* destMesh);                // [0xd9ef50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeComponentHelpers.AddForceAtLocationToAllBodiesBelow
	// void AddForceAtLocationToAllBodiesBelow(class USkeletalMeshComponent* skelMesh, FVector Force, FVector Location, FName BoneName, bool bIncludeSelf); // [0xd9dd00] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/RyRuntime.RyFileHandle
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class URyFileHandle : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/RyRuntime.RyFileHandle.Write
	// bool Write(TArray<char>& bytesOut);                                                                                      // [0xda0cb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyFileHandle.Size
	// int64_t Size();                                                                                                          // [0xda0c80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RyRuntime.RyFileHandle.SeekToStart
	// bool SeekToStart();                                                                                                      // [0xda0c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyFileHandle.SeekToEnd
	// bool SeekToEnd();                                                                                                        // [0xda0c20] Final|Native|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyFileHandle.SeekFromEnd
	// bool SeekFromEnd(int64_t numBytes);                                                                                      // [0xda0b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyFileHandle.Seek
	// bool Seek(int64_t NewPosition);                                                                                          // [0xda0ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyFileHandle.Read
	// bool Read(TArray<char>& bytesTo, int64_t numBytes);                                                                      // [0xda06c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyFileHandle.Close
	// void Close();                                                                                                            // [0xd9ef30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/RyRuntime.RyRuntimeFileHelpers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URyRuntimeFileHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RyRuntime.RyRuntimeFileHelpers.WriteBytesToFile
	// bool WriteBytesToFile(FString FilePath, bool allowOverwrite, TArray<char>& bytesOut);                                    // [0xda0d70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeFileHelpers.ReadBytesFromFile
	// bool ReadBytesFromFile(FString FilePath, TArray<char>& bytesIn, int64_t Offset, int64_t numBytes);                       // [0xda0920] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeFileHelpers.ReadAllBytesFromFile
	// bool ReadAllBytesFromFile(FString FilePath, TArray<char>& bytesIn);                                                      // [0xda07c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeFileHelpers.OpenFileHandle
	// class URyFileHandle* OpenFileHandle(class UObject* Outer, FString FilePath, bool forRead, bool forWrite, bool& success); // [0xda04c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/RyRuntime.RyRuntimeLevelHelpers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URyRuntimeLevelHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RyRuntime.RyRuntimeLevelHelpers.TeleportToAdvanced
	// bool TeleportToAdvanced(class AActor* ActorToTeleport, FVector& DestLocation, FRotator& DestRotation, bool IsATest, bool NoCheck); // [0xda9090] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeLevelHelpers.SpawnActorAdvanced
	// class AActor* SpawnActorAdvanced(class UObject* WorldContextObject, class UClass* ActorClass, FTransform& Transform, ESpawnActorCollisionHandlingMethod spawnHandling, FName Name, class AActor* actorTemplate, class AActor* actorOwner, class APawn* actorInstigator, class ULevel* overrideLevel, bool deferConstruction, bool allowDuringConstructionScript, bool absoluteTransform, bool useDefaultScale); // [0xda8c70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeLevelHelpers.SetAllowAnyoneToDestroyMe
	// void SetAllowAnyoneToDestroyMe(class UActorComponent* componentToSet, bool can);                                         // [0xda8450] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeLevelHelpers.RegisterComponentForActor
	// void RegisterComponentForActor(class UActorComponent* componentToRegister, class AActor* Actor, class USceneComponent* AttachComponent); // [0xda7e30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeLevelHelpers.LoadLevelInstanceBySoftObjectPtrAdvanced
	// class ULevelStreamingDynamic* LoadLevelInstanceBySoftObjectPtrAdvanced(class UObject* WorldContextObject, TWeakObjectPtr<UWorld*> Level, FVector Location, FRotator Rotation, bool& OutSuccess, FString LevelPrefix, bool ShouldBeLoaded, bool ShouldBeVisible, bool BlockOnLoad, int32_t Priority); // [0xda6ba0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeLevelHelpers.LoadLevelInstanceAdvanced
	// class ULevelStreamingDynamic* LoadLevelInstanceAdvanced(class UObject* WorldContextObject, FString LevelName, FVector Location, FRotator Rotation, bool& OutSuccess, FString LevelPrefix, bool ShouldBeLoaded, bool ShouldBeVisible, bool BlockOnLoad, int32_t Priority); // [0xda6810] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeLevelHelpers.IsLevelPersistentLevel
	// bool IsLevelPersistentLevel(class ULevel* levelIn);                                                                      // [0xda6430] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeLevelHelpers.IsActorInLevel
	// bool IsActorInLevel(class AActor* actorToCheck, class ULevel* levelToCheck);                                             // [0xda60c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeLevelHelpers.GetWorldType
	// ERyWorldType GetWorldType(class UObject* WorldContextObject);                                                            // [0xda5e20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeLevelHelpers.GetWorldSoftReferencePath
	// FString GetWorldSoftReferencePath(TWeakObjectPtr<UWorld*>& worldRef);                                                    // [0xda5d20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeLevelHelpers.GetWorldSoftReferenceFromPath
	// TWeakObjectPtr<UWorld*> GetWorldSoftReferenceFromPath(FString PathToWorld);                                              // [0xda5c50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeLevelHelpers.GetWorldSoftReference
	// TWeakObjectPtr<UWorld*> GetWorldSoftReference(class UWorld* worldIn);                                                    // [0xda5b90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeLevelHelpers.GetWorldOfActor
	// class UWorld* GetWorldOfActor(class AActor* actorIn);                                                                    // [0xda5b00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeLevelHelpers.GetStreamingLevelScriptActor
	// class ALevelScriptActor* GetStreamingLevelScriptActor(class ULevelStreaming* StreamingLevel);                            // [0xda58b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeLevelHelpers.GetLevelPackageString
	// FString GetLevelPackageString(class ULevel* levelIn, bool LongName);                                                     // [0xda52d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeLevelHelpers.GetLevelNameString
	// FString GetLevelNameString(class ULevel* levelIn);                                                                       // [0xda5200] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeLevelHelpers.GetCurrentLevelStreamingState
	// ERyCurrentLevelStreamingState GetCurrentLevelStreamingState(class ULevelStreaming* StreamingLevel);                      // [0xda4fc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeLevelHelpers.GetActorWorldNameString
	// FString GetActorWorldNameString(class AActor* actorIn);                                                                  // [0xda47c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeLevelHelpers.GetActorsOfTypeInLevel
	// void GetActorsOfTypeInLevel(class ULevel* Level, class UClass* ActorClass, TArray<AActor*>& actorsOut);                  // [0xda4890] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeLevelHelpers.GetActorLevelPackageString
	// FString GetActorLevelPackageString(class AActor* actorIn, bool LongName);                                                // [0xda46b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeLevelHelpers.GetActorLevelNameString
	// FString GetActorLevelNameString(class AActor* actorIn);                                                                  // [0xda45e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeLevelHelpers.GetActorLevel
	// class ULevel* GetActorLevel(class AActor* actorIn);                                                                      // [0xda4550] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeLevelHelpers.FireLevelScriptRemoteEvent
	// bool FireLevelScriptRemoteEvent(class UObject* WorldContextObject, FName EventName);                                     // [0xda4480] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeLevelHelpers.FinishSpawnActorAdvanced
	// void FinishSpawnActorAdvanced(class AActor* actorToFinishSpawning, FTransform& NewTransform, bool useNewTransform);      // [0xda4320] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeLevelHelpers.FindObjectInLevelByName
	// class UObject* FindObjectInLevelByName(class ULevel* levelToSearch, FString nameToFind);                                 // [0xda4000] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeLevelHelpers.CreateComponentForActor
	// class UActorComponent* CreateComponentForActor(class AActor* Owner, class UClass* newComponentClass, class USceneComponent* AttachComponent, FName NewName, ERyComponentCreationMethod CreationMethod, bool allowAnyoneToDestroy); // [0xda3480] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/RyRuntime.RyRuntimeLogHelpers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URyRuntimeLogHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RyRuntime.RyRuntimeLogHelpers.PrintLogString
	// void PrintLogString(class UObject* WorldContextObject, FString inString, FString CategoryName, ERyRuntimeLogVerbosity Verbosity, bool PrintToScreen, bool PrintToLog, FLinearColor TextColor, float Duration); // [0xda7b90] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeLogHelpers.CopyCurrentLogFile
	// bool CopyCurrentLogFile(FString destLogFileName, FString& outLogFileName);                                               // [0xda32f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/RyRuntime.RyRuntimeMathHelpers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URyRuntimeMathHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.Xor_ByteByte
	// char Xor_ByteByte(char A, char B);                                                                                       // [0xda95c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.VInterpNormalRotationTo
	// FVector VInterpNormalRotationTo(FVector& Current, FVector& Target, float DeltaTime, float rotationSpeedDegrees);         // [0xda9420] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.TransformBoxBy
	// void TransformBoxBy(FBox& boxToTransform, FTransform& Transform, FBox& transformedBox);                                  // [0xda9270] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.SinH
	// float SinH(float A);                                                                                                     // [0xda8be0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.ShortestRotationPath
	// float ShortestRotationPath(float startRotation, float endRotation);                                                      // [0xda8b10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.ShiftRight_Int64
	// int64_t ShiftRight_Int64(int64_t Val, int32_t Shift);                                                                    // [0xda8970] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.ShiftRight_Int
	// int32_t ShiftRight_Int(int32_t Val, int32_t Shift);                                                                      // [0xda8a40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.ShiftRight_Byte
	// char ShiftRight_Byte(char Val, int32_t Shift);                                                                           // [0xda88a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.ShiftLeft_Int64
	// int64_t ShiftLeft_Int64(int64_t Val, int32_t Shift);                                                                     // [0xda8700] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.ShiftLeft_Int
	// int32_t ShiftLeft_Int(int32_t Val, int32_t Shift);                                                                       // [0xda87d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.ShiftLeft_Byte
	// char ShiftLeft_Byte(char Val, int32_t Shift);                                                                            // [0xda8630] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.ShiftBoxBy
	// void ShiftBoxBy(FBox& Box, FVector& Offset);                                                                             // [0xda8510] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.Rotator_Quat
	// FQuat Rotator_Quat(FRotator& R);                                                                                         // [0xda83b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.RotationsEqual
	// bool RotationsEqual(float rotation1, float rotation2, float ErrorTolerance);                                             // [0xda8280] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.RotationInterpolate
	// void RotationInterpolate(float inCurrentRotation, float inDestinationRotation, float DeltaTime, float Speed, float& NewRotation, bool& atTarget, float checkTolerance); // [0xda8030] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.ResizeBoxToFitInScreenSpace
	// FVector2D ResizeBoxToFitInScreenSpace(FVector2D BoxSize, FVector2D ScreenSize, FVector2D fracOfScreen);                  // [0xda7f30] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.PositionAndScaleBoxIntoScreenSpace
	// void PositionAndScaleBoxIntoScreenSpace(FVector2D BoxSize, FVector2D ScreenSize, FVector2D fracPosOnScreen, FVector2D fracSizeOnScreen, ERyXScreenAnchor anchorX, ERyYScreenAnchor anchorY, FVector2D boxAnchorFrac, FVector2D& boxPosOut, FVector2D& boxSizeOut); // [0xda78f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.Or_ByteByte
	// char Or_ByteByte(char A, char B);                                                                                        // [0xda7830] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.NotEqual_VectorVector2D
	// bool NotEqual_VectorVector2D(FVector A, FVector B, float ErrorTolerance);                                                // [0xda7660] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.Not_Byte
	// char Not_Byte(char A);                                                                                                   // [0xda77b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.MoveBoxTo
	// void MoveBoxTo(FBox& Box, FVector& Destination);                                                                         // [0xda74f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.MakePositiveInline
	// void MakePositiveInline(float& inFloat);                                                                                 // [0xda7460] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.MakePositive
	// float MakePositive(float inFloat);                                                                                       // [0xda73d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.MakeNegativeInline
	// void MakeNegativeInline(float& inFloat);                                                                                 // [0xda7330] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.MakeNegative
	// float MakeNegative(float inFloat);                                                                                       // [0xda72a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.MakeBoxFromPoints
	// void MakeBoxFromPoints(TArray<FVector>& Points, FBox& Box);                                                              // [0xda70e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.MakeBoxFromOriginExtend
	// void MakeBoxFromOriginExtend(FBox& Box, FVector& Origin, FVector& Extent);                                               // [0xda6f50] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.IsPositionInsideOrOnBox
	// bool IsPositionInsideOrOnBox(FVector& In, FBox& Box);                                                                    // [0xda66f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.IsPositionInsideBoxXY
	// bool IsPositionInsideBoxXY(FVector& In, FBox& Box);                                                                      // [0xda65e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.IsPositionInsideBox
	// bool IsPositionInsideBox(FVector& In, FBox& Box);                                                                        // [0xda64c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.IsBoxInsideOtherBoxXY
	// bool IsBoxInsideOtherBoxXY(FBox& Box, FBox& Other);                                                                      // [0xda62f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.IsBoxInsideOtherBox
	// bool IsBoxInsideOtherBox(FBox& Box, FBox& Other);                                                                        // [0xda6190] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.IntSetBit
	// void IntSetBit(int32_t& intIn, char Bit, bool Val);                                                                      // [0xda5fa0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.IntIsBitSet
	// bool IntIsBitSet(int32_t intIn, char Bit);                                                                               // [0xda5ed0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.IndexNone
	// int32_t IndexNone();                                                                                                     // [0xda5eb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.GetUpVector2D
	// FVector GetUpVector2D(FRotator InRot);                                                                                   // [0xda5940] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.GetRotationIncrement
	// float GetRotationIncrement(float inCurrentRotation, float inDestinationRotation, float DeltaTime, float Speed, float checkTolerance); // [0xda5700] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.GetRightVector2D
	// FVector GetRightVector2D(FRotator InRot);                                                                                // [0xda5540] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.GetOverlapBox
	// void GetOverlapBox(FBox& boxA, FBox& boxB, FBox& boxOut);                                                                // [0xda53e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.GetForwardVector2D
	// FVector GetForwardVector2D(FRotator InRot);                                                                              // [0xda5050] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.GetBoxVolume
	// float GetBoxVolume(FBox& Box);                                                                                           // [0xda4f10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.GetBoxSize
	// FVector GetBoxSize(FBox& Box);                                                                                           // [0xda4e50] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.GetBoxExtent
	// FVector GetBoxExtent(FBox& Box);                                                                                         // [0xda4d80] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.GetBoxClosestPointTo
	// FVector GetBoxClosestPointTo(FBox& Box, FVector& Point);                                                                 // [0xda4c20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.GetBoxCenterAndExtents
	// void GetBoxCenterAndExtents(FBox& Box, FVector& Center, FVector& Extents);                                               // [0xda4a80] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.GetBoxCenter
	// FVector GetBoxCenter(FBox& Box);                                                                                         // [0xda49b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.FindScreenEdgeLocationForWorldLocation
	// void FindScreenEdgeLocationForWorldLocation(class UObject* WorldContextObject, FVector& InLocation, float EdgePercent, FVector2D& OutScreenPosition, float& OutRotationAngleDegrees, bool& bIsOnScreen, int32_t playerIndex); // [0xda40e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.FindEdgeOf2DSquare
	// FVector2D FindEdgeOf2DSquare(FVector2D& TheSize, float TheAngle);                                                        // [0xda3f20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.ExtendByBox
	// void ExtendByBox(FBox& Box, FBox& otherBox);                                                                             // [0xda3dc0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.ExtendBoxByPoints
	// void ExtendBoxByPoints(FBox& Box, TArray<FVector>& Points);                                                              // [0xda3c30] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.ExpandBoxByVecDirs
	// void ExpandBoxByVecDirs(FBox& Box, FVector& negativeDir, FVector& positiveDir);                                          // [0xda3ab0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.ExpandBoxByVec
	// void ExpandBoxByVec(FBox& Box, FVector& V);                                                                              // [0xda3990] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.ExpandBoxByAmount
	// void ExpandBoxByAmount(FBox& Box, float Amount);                                                                         // [0xda3870] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.EqualEqual_VectorVector2D
	// bool EqualEqual_VectorVector2D(FVector A, FVector B, float ErrorTolerance);                                              // [0xda3720] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.Dot_VectorVector2D
	// float Dot_VectorVector2D(FVector A, FVector B);                                                                          // [0xda3650] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.CosH
	// float CosH(float A);                                                                                                     // [0xda33f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.ConvertUnit
	// float ConvertUnit(float Value, ERyUnit from, ERyUnit to);                                                                // [0xda31e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.CalculateCatenary
	// float CalculateCatenary(float X, float ScalingFactor);                                                                   // [0xda3110] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.ByteSetBit
	// void ByteSetBit(char& Byte, char Bit, bool Val);                                                                         // [0xda2ff0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.ByteIsBitSet
	// bool ByteIsBitSet(char Byte, char Bit);                                                                                  // [0xda2f30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.BoxToString
	// FString BoxToString(FBox& Box);                                                                                          // [0xda2d70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.BoxIntersectsXY
	// bool BoxIntersectsXY(FBox& Box, FBox& otherBox);                                                                         // [0xda2c60] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.BoxIntersects
	// bool BoxIntersects(FBox& Box, FBox& otherBox);                                                                           // [0xda2b40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMathHelpers.And_ByteByte
	// char And_ByteByte(char A, char B);                                                                                       // [0xda2a80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/RyRuntime.RyRuntimeMetaHelpers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URyRuntimeMetaHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RyRuntime.RyRuntimeMetaHelpers.GetEnumValueFromName
	// bool GetEnumValueFromName(FString enumName, FName EntryName, int64_t& valueOut);                                         // [0xdad680] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMetaHelpers.GetEnumNameByValue
	// bool GetEnumNameByValue(FString enumName, int64_t enumValue, FName& nameOut);                                            // [0xdad500] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMetaHelpers.GetEnumNameByIndex
	// bool GetEnumNameByIndex(FString enumName, char enumIndex, FName& nameOut);                                               // [0xdad380] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeMetaHelpers.GetEnumIndexFromName
	// bool GetEnumIndexFromName(FString enumName, FName EntryName, char& indexOut);                                            // [0xdad200] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/RyRuntime.RyRuntimeNavigationHelpers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URyRuntimeNavigationHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RyRuntime.RyRuntimeNavigationHelpers.SetSmartLinkIsRelevant
	// void SetSmartLinkIsRelevant(class ANavLinkProxy* NavLinkProxy, bool isRelevant);                                         // [0xdb0190] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeNavigationHelpers.SetSmartLinkData
	// void SetSmartLinkData(class ANavLinkProxy* NavLinkProxy, FVector& relativeStart, FVector& relativeEnd, ERyNavLinkDirection Direction); // [0xdb0030] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeNavigationHelpers.SetCanEverAffectNavigation
	// void SetCanEverAffectNavigation(class UActorComponent* ActorComponent, bool canEverAffectNavigation);                    // [0xdafba0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeNavigationHelpers.GetStartPoint
	// FVector GetStartPoint(class UNavLinkCustomComponent* smartLinkComponent);                                                // [0xdae270] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeNavigationHelpers.GetSmartLinkComponent
	// class UNavLinkCustomComponent* GetSmartLinkComponent(class ANavLinkProxy* NavLinkProxy);                                 // [0xdae1e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeNavigationHelpers.GetFailsafeExtent
	// FVector GetFailsafeExtent(class UNavModifierComponent* NavModifierComponent);                                            // [0xdad960] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeNavigationHelpers.GetEndPoint
	// FVector GetEndPoint(class UNavLinkCustomComponent* smartLinkComponent);                                                  // [0xdad160] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeNavigationHelpers.GetCanEverAffectNavigation
	// bool GetCanEverAffectNavigation(class UActorComponent* ActorComponent);                                                  // [0xdacc50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/RyRuntime.RySlowTaskDialog
/// Size: 0x0098 (152 bytes) (0x000028 - 0x000098) align 8 MaxSize: 0x0098
class URySlowTaskDialog : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0028   (0x0070)  MISSED


	/// Functions
	// Function /Script/RyRuntime.RySlowTaskDialog.SetTotalAmountOfWork
	// void SetTotalAmountOfWork(float TotalAmountOfWork);                                                                      // [0xdb0250] Final|Native|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RySlowTaskDialog.SetCurrentFrameScope
	// void SetCurrentFrameScope(float CurrentFrameScope);                                                                      // [0xdafce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RySlowTaskDialog.SetCompletedWork
	// void SetCompletedWork(float CompletedWork);                                                                              // [0xdafc60] Final|Native|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RySlowTaskDialog.MakeDialog
	// void MakeDialog();                                                                                                       // [0xdaeea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RySlowTaskDialog.GetTotalAmountOfWork
	// float GetTotalAmountOfWork();                                                                                            // [0xdae380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RyRuntime.RySlowTaskDialog.GetCurrentFrameScope
	// float GetCurrentFrameScope();                                                                                            // [0xdacec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RyRuntime.RySlowTaskDialog.GetCompletedWork
	// float GetCompletedWork();                                                                                                // [0xdacea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RyRuntime.RySlowTaskDialog.EnterProgressFrame
	// void EnterProgressFrame(float ExpectedWorkThisFrame, FText Text);                                                        // [0xdac750] Final|Native|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RySlowTaskDialog.DestroyDialog
	// void DestroyDialog();                                                                                                    // [0xdac5c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/RyRuntime.RyRuntimeNotificationHelpers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URyRuntimeNotificationHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RyRuntime.RyRuntimeNotificationHelpers.CreateSlowTaskDialog
	// class URySlowTaskDialog* CreateSlowTaskDialog(FText DefaultMessage, FText FrameMessage, float TotalAmountOfWork, float CompletedWork, float CurrentFrameScope, bool MakeDialogImmediately); // [0xdac010] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeNotificationHelpers.CreateNotification
	// void CreateNotification(FText Message, ERyRunNotifyCompletionState notifyType, float fadeInDuration, float expireDuration, float fadeOutDuration, bool useThrobber, bool useSuccessFailIcons, bool useLargeFont); // [0xdabc20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/RyRuntime.RyRuntimeObjectHelpers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URyRuntimeObjectHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.UnRegisterMountPoint
	// void UnRegisterMountPoint(FString RootPath, FString ContentPath);                                                        // [0xdb0540] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.TryConvertFilenameToLongPackageName
	// bool TryConvertFilenameToLongPackageName(FString InFilename, FString& OutPackageName, FString& OutFailureReason);        // [0xdb03d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.SoftObjectToString
	// FString SoftObjectToString(TWeakObjectPtr<UObject*>& SoftObjectReference);                                               // [0xdb02d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.SetObjectPropertyValue
	// bool SetObjectPropertyValue(class UObject* Object, FName PropertyName, FString Value, bool PrintWarnings);               // [0xdafed0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.RemoveLatentActionsForObject
	// void RemoveLatentActionsForObject(class UObject* WorldContextObject, class UObject* Object);                             // [0xdaf880] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.RegisterMountPoint
	// void RegisterMountPoint(FString RootPath, FString ContentPath);                                                          // [0xdaf790] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.OnPackageLoaded__DelegateSignature
	// void OnPackageLoaded__DelegateSignature(class UPackage* LoadedPackage, ERyAsyncLoadingResult Result);                    // [0x1414700] Public|Delegate      
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.OnAssetLoaded__DelegateSignature
	// void OnAssetLoaded__DelegateSignature(class UObject* Loaded);                                                            // [0x1414700] Public|Delegate      
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.ObjectHasFlag_WasLoaded
	// bool ObjectHasFlag_WasLoaded(class UObject* Object);                                                                     // [0xdaf3e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.ObjectHasFlag_FinishDestroyed
	// bool ObjectHasFlag_FinishDestroyed(class UObject* Object);                                                               // [0xdaf350] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.ObjectHasFlag_ClassDefaultObject
	// bool ObjectHasFlag_ClassDefaultObject(class UObject* Object);                                                            // [0xdaf2c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.ObjectHasFlag_BeginDestroyed
	// bool ObjectHasFlag_BeginDestroyed(class UObject* Object);                                                                // [0xdaf230] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.ObjectHasFlag_ArchetypeObject
	// bool ObjectHasFlag_ArchetypeObject(class UObject* Object);                                                               // [0xdaf1a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.MountPointExists
	// bool MountPointExists(FString RootPath);                                                                                 // [0xdaef60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.LoadPackagePriority
	// void LoadPackagePriority(class UObject* WorldContextObject, FString PackagePath, int32_t Priority, bool BlockOnLoad, FDelegateProperty OnLoaded, FLatentActionInfo LatentInfo); // [0xdaebe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.LoadObjectFromPackage
	// class UObject* LoadObjectFromPackage(class UPackage* Package, FString objectName);                                       // [0xdaeb00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.LoadObject
	// class UObject* LoadObject(FString fullObjectPath);                                                                       // [0xdaea60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.LoadAssetPriority
	// void LoadAssetPriority(class UObject* WorldContextObject, TWeakObjectPtr<UObject*> Asset, int32_t Priority, FDelegateProperty OnLoaded, FLatentActionInfo LatentInfo); // [0xdae840] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.IsSoftObjectValid
	// bool IsSoftObjectValid(TWeakObjectPtr<UObject*>& SoftObjectReference);                                                   // [0xdae780] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.IsSoftObjectPending
	// bool IsSoftObjectPending(TWeakObjectPtr<UObject*>& SoftObjectReference);                                                 // [0xdae6c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.IsSoftObjectNull
	// bool IsSoftObjectNull(TWeakObjectPtr<UObject*>& SoftObjectReference);                                                    // [0xdae600] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.IsLiveSoftObjectReference
	// bool IsLiveSoftObjectReference(TWeakObjectPtr<UObject*>& SoftObjectReference);                                           // [0xdae510] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.GetParentClass
	// class UClass* GetParentClass(class UClass* Class);                                                                       // [0xdae150] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.GetPackageOfObject
	// class UPackage* GetPackageOfObject(class UObject* Object);                                                               // [0xdae0c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.GetPackageMountPoint
	// FName GetPackageMountPoint(FString InPackagePath, bool InWithoutSlashes);                                                // [0xdadfd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.GetObjectsInPackage
	// void GetObjectsInPackage(class UPackage* Package, TArray<UObject*>& ObjectsOut);                                         // [0xdadef0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.GetClassHierarchy
	// void GetClassHierarchy(class UClass* Class, TArray<UClass*>& ClassHierarchy, bool includeSelf);                          // [0xdacd70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.GetClassDefaultObject
	// class UObject* GetClassDefaultObject(class UClass* theClass);                                                            // [0xdacce0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.FindOrLoadPackage
	// class UPackage* FindOrLoadPackage(FString PackageName);                                                                  // [0xdac9c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.DuplicateObject
	// void DuplicateObject(class UClass* objectClass, class UObject* Object, class UObject* Outer, class UObject*& objectOut); // [0xdac5e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.CreateObject
	// void CreateObject(class UClass* objectClass, class UObject* Outer, class UObject*& objectOut);                           // [0xdabf00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeObjectHelpers.ClearAllTimersForObject
	// void ClearAllTimersForObject(class UObject* WorldContextObject, class UObject* Object);                                  // [0xdab850] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/RyRuntime.RyRuntimePakHelpers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URyRuntimePakHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RyRuntime.RyRuntimePakHelpers.UnmountPakFile
	// bool UnmountPakFile(FString pakFilePath);                                                                                // [0xdb0630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimePakHelpers.MountPakFile
	// bool MountPakFile(FString pakFilePath);                                                                                  // [0xdaeec0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimePakHelpers.GetMountedPakFilenames
	// void GetMountedPakFilenames(TArray<FString>& mountedPakFilenames);                                                       // [0xdadc90] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/RyRuntime.RyRuntimePlatformHelpers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URyRuntimePlatformHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.SetEnvironmentVariable
	// void SetEnvironmentVariable(FString VariableName, FString ValueToSet);                                                   // [0xdafdd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.SetDeviceOrientation
	// void SetDeviceOrientation(ERyDeviceScreenOrientation NewDeviceOrientation);                                              // [0xdafd60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.RyIterateDirectory
	// bool RyIterateDirectory(FString DirectoryName, bool IterateSubFolders, ERyIterateDirectoryOut OutType, TArray<FString>& PathsOut, FDelegateProperty Visitor, FDelegateProperty filter); // [0xdaf940] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.PlatformRequiresCookedData
	// bool PlatformRequiresCookedData();                                                                                       // [0x82a850] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.PathInfo
	// void PathInfo(FString fileSystemPath, bool& Exists, bool& isFile, bool& IsDirectory, bool& isReadOnly, FDateTime& CreationTime, FDateTime& AccessTime, FDateTime& ModificationTime, int64_t& fileSize); // [0xdaf470] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.NumberOfCoresIncludingHyperthreads
	// int32_t NumberOfCoresIncludingHyperthreads();                                                                            // [0xdaf170] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.NumberOfCores
	// int32_t NumberOfCores();                                                                                                 // [0xdaf140] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.moveFile
	// bool moveFile(FString SourcePath, FString destinationPath, bool updateTimeStamp);                                        // [0xdaf000] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.LowLevelOutputDebugString
	// void LowLevelOutputDebugString(FString Message);                                                                         // [0xdaee00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.IsRunningOnBattery
	// bool IsRunningOnBattery();                                                                                               // [0xdae5d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.IsPlatformDesktop
	// bool IsPlatformDesktop();                                                                                                // [0xdae460] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.IsInLowPowerMode
	// bool IsInLowPowerMode();                                                                                                 // [0xdadd50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.IsDebuggerPresent
	// bool IsDebuggerPresent();                                                                                                // [0xdadd50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.HasPlatformFeature
	// bool HasPlatformFeature(FString FeatureName);                                                                            // [0xdae480] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.HasActiveWiFiConnection
	// bool HasActiveWiFiConnection();                                                                                          // [0xdae460] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.GetValidTargetPlatforms
	// void GetValidTargetPlatforms(TArray<FString>& TargetPlatformNames);                                                      // [0xdae3a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.GetTimeZoneId
	// FString GetTimeZoneId();                                                                                                 // [0xdae310] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.GetPrimaryGPUBrand
	// FString GetPrimaryGPUBrand();                                                                                            // [0x871e00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.GetOSVersions
	// void GetOSVersions(FString& OS_VersionLabel, FString& OS_SubVersionLabel);                                               // [0xdadde0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.GetOSVersion
	// FString GetOSVersion();                                                                                                  // [0xdadd70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.GetNetworkConnectionType
	// ERyNetworkConnectionType GetNetworkConnectionType();                                                                     // [0xdadd50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.GetFileTimeStampText
	// FText GetFileTimeStampText(FString FilePath, bool& IsValid, bool LongName);                                              // [0xdadaf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.GetFileTimeStamp
	// FDateTime GetFileTimeStamp(FString FilePath, bool& IsValid);                                                             // [0xdada00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.GetEnvironmentVariable
	// bool GetEnvironmentVariable(FString VariableName, FString& VariableOut);                                                 // [0xdad800] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.GetDiskTotalAndFreeSpace
	// bool GetDiskTotalAndFreeSpace(FString InPath, int64_t& TotalNumberOfBytes, int64_t& NumberOfFreeBytes);                  // [0xdacfe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.GetDeviceVolume
	// int32_t GetDeviceVolume();                                                                                               // [0xdacfb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.GetDeviceTemperatureLevel
	// float GetDeviceTemperatureLevel();                                                                                       // [0xdacf80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.GetDeviceOrientation
	// ERyDeviceScreenOrientation GetDeviceOrientation();                                                                       // [0xdacf50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.GetDeviceMakeAndModel
	// FString GetDeviceMakeAndModel();                                                                                         // [0xdacee0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.GetCPUVendor
	// FString GetCPUVendor();                                                                                                  // [0xdacbe0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.GetCPUChipset
	// FString GetCPUChipset();                                                                                                 // [0xdacb70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.GetCPUBrand
	// FString GetCPUBrand();                                                                                                   // [0xdacb00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.GetBatteryLevel
	// int32_t GetBatteryLevel();                                                                                               // [0xda5eb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.GetAndroidInternalStoragePath
	// FString GetAndroidInternalStoragePath();                                                                                 // [0x82b7d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.GetAndroidExternalStoragePath
	// FString GetAndroidExternalStoragePath();                                                                                 // [0x82b7d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.FolderExists
	// bool FolderExists(FString DirectoryPath);                                                                                // [0xdaca60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.FileExistsInPlatformPackage
	// bool FileExistsInPlatformPackage(FString RelativePath);                                                                  // [0xdac920] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.fileExists
	// bool fileExists(FString FilePath);                                                                                       // [0xdac880] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.EndProfilerColor
	// void EndProfilerColor();                                                                                                 // [0xdac420] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.EndNamedEvent
	// void EndNamedEvent();                                                                                                    // [0xdac730] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.DeleteFile
	// bool DeleteFile(FString FilePath);                                                                                       // [0xdac520] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.DeleteDirectory
	// bool DeleteDirectory(FString DirectoryPath, bool Recursive);                                                             // [0xdac440] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.DebugBreak
	// void DebugBreak();                                                                                                       // [0xdac420] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.CustomNamedStat
	// void CustomNamedStat(FString Text, float Value, FString Graph, FString Unit);                                            // [0xdac2b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.CreateDirectoryTree
	// bool CreateDirectoryTree(FString directoryTreePath);                                                                     // [0xdabb80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.CopyFile
	// bool CopyFile(FString SourcePath, FString destinationPath, bool updateTimeStamp);                                        // [0xdaba40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.ClipboardPaste
	// void ClipboardPaste(FString& Dest);                                                                                      // [0xdab9a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.ClipboardCopy
	// void ClipboardCopy(FString Str);                                                                                         // [0xdab910] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.BeginProfilerColor
	// void BeginProfilerColor(FColor& Color);                                                                                  // [0xdab7e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimePlatformHelpers.BeginNamedEvent
	// void BeginNamedEvent(FColor& Color, FString Text);                                                                       // [0xdab6f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/RyRuntime.RyRuntimePlayerHelpers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URyRuntimePlayerHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RyRuntime.RyRuntimePlayerHelpers.IsCameraFadingEnabled
	// bool IsCameraFadingEnabled(class APlayerCameraManager* cameraManager);                                                   // [0xdb4750] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlayerHelpers.IsCameraFading
	// bool IsCameraFading(class APlayerCameraManager* cameraManager);                                                          // [0xdb46a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlayerHelpers.IsCameraFaded
	// bool IsCameraFaded(class APlayerCameraManager* cameraManager);                                                           // [0xdb45e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlayerHelpers.GetPawnCameraManager
	// class APlayerCameraManager* GetPawnCameraManager(class APawn* Pawn);                                                     // [0xdb39e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlayerHelpers.GetCameraFadeColor
	// FLinearColor GetCameraFadeColor(class APlayerCameraManager* cameraManager);                                              // [0xdb3100] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimePlayerHelpers.GetCameraFadeAmount
	// float GetCameraFadeAmount(class APlayerCameraManager* cameraManager);                                                    // [0xdb3060] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/RyRuntime.RyRuntimeProjectHelpers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URyRuntimeProjectHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RyRuntime.RyRuntimeProjectHelpers.IsWithEditorOnlyData
	// bool IsWithEditorOnlyData();                                                                                             // [0xdadd50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeProjectHelpers.IsWithEditor
	// bool IsWithEditor();                                                                                                     // [0xdadd50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeProjectHelpers.IsBuildTest
	// bool IsBuildTest();                                                                                                      // [0xdadd50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeProjectHelpers.IsBuildShippingWithEditor
	// bool IsBuildShippingWithEditor();                                                                                        // [0xdadd50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeProjectHelpers.IsBuildShipping
	// bool IsBuildShipping();                                                                                                  // [0xdae460] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeProjectHelpers.IsBuildServer
	// bool IsBuildServer();                                                                                                    // [0xdadd50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeProjectHelpers.IsBuildDevelopment
	// bool IsBuildDevelopment();                                                                                               // [0xdadd50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeProjectHelpers.IsBuildDebug
	// bool IsBuildDebug();                                                                                                     // [0xdadd50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeProjectHelpers.GetProjectVersion
	// FString GetProjectVersion();                                                                                             // [0xdb4090] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeProjectHelpers.GetProjectSupportContact
	// FString GetProjectSupportContact();                                                                                      // [0xdb4010] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeProjectHelpers.GetProjectPrivacyPolicy
	// FString GetProjectPrivacyPolicy();                                                                                       // [0xdb3f90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeProjectHelpers.GetProjectName
	// FString GetProjectName();                                                                                                // [0xdb3f10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeProjectHelpers.GetProjectLicensingTerms
	// FString GetProjectLicensingTerms();                                                                                      // [0xdb3e90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeProjectHelpers.GetProjectID
	// FGuid GetProjectID();                                                                                                    // [0xdb3e50] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeProjectHelpers.GetProjectHomepage
	// FString GetProjectHomepage();                                                                                            // [0xdb3dd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeProjectHelpers.GetProjectDisplayedTitle
	// FText GetProjectDisplayedTitle();                                                                                        // [0xdb3d40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeProjectHelpers.GetProjectDescription
	// FString GetProjectDescription();                                                                                         // [0xdb3cc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeProjectHelpers.GetProjectDebugTitleInfo
	// FText GetProjectDebugTitleInfo();                                                                                        // [0xdb3c30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeProjectHelpers.GetProjectCopyrightNotice
	// FString GetProjectCopyrightNotice();                                                                                     // [0xdb3bb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeProjectHelpers.GetProjectCompanyName
	// FString GetProjectCompanyName();                                                                                         // [0xdb3b30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeProjectHelpers.GetProjectCompanyDistinguishedName
	// FString GetProjectCompanyDistinguishedName();                                                                            // [0xdb3ab0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/RyRuntime.RyRuntimeRenderingHelpers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URyRuntimeRenderingHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RyRuntime.RyRuntimeRenderingHelpers.TakeScreenshot
	// void TakeScreenshot(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString requestedPathOut, ERyScreenShotMode screenshotMode, FString& pathOut, bool& OutSuccess); // [0xdb5330] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeRenderingHelpers.ShaderPipelineCache_SetBatchMode
	// void ShaderPipelineCache_SetBatchMode(ERyBatchMode batchMode);                                                           // [0xdb52c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeRenderingHelpers.ShaderPipelineCache_ResumeBatching
	// void ShaderPipelineCache_ResumeBatching();                                                                               // [0xdb52a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeRenderingHelpers.ShaderPipelineCache_PrecompilesRemaining
	// int32_t ShaderPipelineCache_PrecompilesRemaining();                                                                      // [0xdb5270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeRenderingHelpers.ShaderPipelineCache_PauseBatching
	// void ShaderPipelineCache_PauseBatching();                                                                                // [0xdb5250] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeRenderingHelpers.SetSecondFogData
	// void SetSecondFogData(class UExponentialHeightFogComponent* heightFogComponent, FRyExponentialHeightFogData newFogData); // [0xdb4ce0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeRenderingHelpers.GetShadingPath
	// ERyShadingPath GetShadingPath(class UObject* WorldContextObject);                                                        // [0xdb4230] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeRenderingHelpers.GetShaderPlatform
	// ERyShaderPlatform GetShaderPlatform(class UObject* WorldContextObject);                                                  // [0xdb41a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeRenderingHelpers.GetRenderingFeatureLevel
	// ERyRenderingFeatureLevel GetRenderingFeatureLevel(class UObject* WorldContextObject);                                    // [0xdb4110] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/RyRuntime.RyRuntimeStringHelpers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URyRuntimeStringHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RyRuntime.RyRuntimeStringHelpers.ToTitleStringInline
	// void ToTitleStringInline(FString& inOutString);                                                                          // [0xdb57c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeStringHelpers.ToTitleString
	// FString ToTitleString(FString inString);                                                                                 // [0xdb56e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeStringHelpers.SetReserved
	// void SetReserved(FString& sourceString, int32_t reserveNumChars);                                                        // [0xdb4bf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeStringHelpers.SetChar
	// void SetChar(FString& sourceString, int32_t charIndex, FString charIn);                                                  // [0xdb4a30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeStringHelpers.PushChar
	// void PushChar(FString& sourceString, FString charIn);                                                                    // [0xdb4930] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeStringHelpers.PopChar
	// void PopChar(FString& sourceString);                                                                                     // [0xdb4890] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeStringHelpers.IsNone
	// bool IsNone(FName Name);                                                                                                 // [0xdb4800] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeStringHelpers.IsEmpty
	// bool IsEmpty(FString String);                                                                                            // [0x86b5f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeStringHelpers.GetTextFromStringTableID
	// FText GetTextFromStringTableID(FName tableID, FString Key, bool& IsValid);                                               // [0xdb4450] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeStringHelpers.GetTextFromStringTable
	// FText GetTextFromStringTable(class UStringTable* table, FString Key, bool& IsValid);                                     // [0xdb42c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeStringHelpers.GetChar
	// FString GetChar(FString& sourceString, int32_t charIndex);                                                               // [0xdb3230] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeStringHelpers.FillString
	// void FillString(FString& sourceString, int32_t numChars, FString charIn);                                                // [0xdb2dc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeStringHelpers.Conv_Int64ToString
	// FString Conv_Int64ToString(int64_t InInt64);                                                                             // [0xdb2a90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeStringHelpers.CombineFilePaths
	// FString CombineFilePaths(FString A, FString B);                                                                          // [0xdb28e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeStringHelpers.CharToBytes
	// void CharToBytes(FString sourceString, int32_t charIndex, char& byte1, char& byte2);                                     // [0xdb2760] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeStringHelpers.AppendTo
	// void AppendTo(FString& sourceString, FString appendage);                                                                 // [0xdb2660] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeStringHelpers.AppendStringsTo
	// void AppendStringsTo(FString& sourceString, TArray<FString>& appendages);                                                // [0xdb2530] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/RyRuntime.RyRuntimeTextureHelpers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URyRuntimeTextureHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RyRuntime.RyRuntimeTextureHelpers.UpdateTextureResource
	// void UpdateTextureResource(class UObject* WorldContextObject, class UTexture* Texture, FLatentActionInfo LatentInfo, ERyTextureResourceResult& Result); // [0xdb5860] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/RyRuntime.RyRuntimeWidgetHelpers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URyRuntimeWidgetHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RyRuntime.RyRuntimeWidgetHelpers.SetInputMode_GameOnly_NoMouseDownConsume
	// void SetInputMode_GameOnly_NoMouseDownConsume(class APlayerController* PlayerController);                                // [0xdb4b70] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeWidgetHelpers.ForceOnMouseLeave
	// void ForceOnMouseLeave(class UWidget* Widget, FPointerEvent& MouseEvent);                                                // [0xdb2f00] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/RyRuntime.RyRuntimeWorldHelpers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URyRuntimeWorldHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RyRuntime.RyRuntimeWorldHelpers.TickUntilStop
	// void TickUntilStop(class UObject* WorldContextObject, ERyTickUntilStopInExecs& InExecs, ERyTickUntilStopOutExecs& OutExecs, FLatentActionInfo LatentInfo); // [0xdb5560] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeWorldHelpers.SetTimerByFunctionForWorld
	// FTimerHandle SetTimerByFunctionForWorld(class UObject* WorldContextObject, class UObject* Object, FString FunctionName, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance); // [0xdb4fc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeWorldHelpers.SetTimerByEventForWorld
	// FTimerHandle SetTimerByEventForWorld(class UObject* WorldContextObject, FDelegateProperty Delegate, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance); // [0xdb4dd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeWorldHelpers.GetEngineWorldContexts
	// void GetEngineWorldContexts(TArray<FRyWorldContext>& worldsOut);                                                         // [0xdb3690] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeWorldHelpers.GetEngineWorld
	// class UWorld* GetEngineWorld(class UObject* WorldContextObject, ERyWorldType specificType);                              // [0xdb35c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/RyRuntime.RyRuntimeXRHelpers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URyRuntimeXRHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RyRuntime.RyRuntimeXRHelpers.GetMotionControllerDeviceTypeNames
	// void GetMotionControllerDeviceTypeNames(TArray<FName>& NamesOut);                                                        // [0xdb3940] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeXRHelpers.GetHMDMonitorName
	// FString GetHMDMonitorName();                                                                                             // [0xdb3770] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeXRHelpers.GetHandJointPosition
	// bool GetHandJointPosition(int32_t deviceIndex, FName motionSource, int32_t jointIndex, FVector& OutPosition);            // [0xdb37f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeXRHelpers.GetCustomParameterValue
	// float GetCustomParameterValue(int32_t deviceIndex, FName motionSource, FName ParameterName, bool& bOutValueFound);       // [0xdb3470] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeXRHelpers.GetControllerTrackingStatus
	// ETrackingStatus GetControllerTrackingStatus(int32_t deviceIndex, int32_t ControllerIndex, FName motionSource);           // [0xdb3370] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeXRHelpers.EnumerateTrackedDevices
	// bool EnumerateTrackedDevices(TArray<int32_t>& OutDevices, EXRTrackedDeviceType Type);                                    // [0xdb2cc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/RyRuntime.RyRuntimeXRHelpers.EnumerateSources
	// void EnumerateSources(int32_t deviceIndex, TArray<FName>& sourceNamesOut);                                               // [0xdb2be0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RyRuntime.RyRuntimeXRHelpers.CountTrackedDevices
	// int32_t CountTrackedDevices(EXRTrackedDeviceType Type);                                                                  // [0xdb2b60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/RyRuntime.RyCaptureDeviceInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FRyCaptureDeviceInfo
{ 
	FString                                            DeviceName;                                                 // 0x0000   (0x0010)  
	FString                                            DeviceID;                                                   // 0x0010   (0x0010)  
	int32_t                                            InputChannels;                                              // 0x0020   (0x0004)  
	int32_t                                            PreferredSampleRate;                                        // 0x0024   (0x0004)  
	bool                                               SupportsHardwareAEC;                                        // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/RyRuntime.RyExponentialHeightFogData
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FRyExponentialHeightFogData
{ 
	float                                              FogDensity;                                                 // 0x0000   (0x0004)  
	float                                              FogHeightFalloff;                                           // 0x0004   (0x0004)  
	float                                              FogHeightOffset;                                            // 0x0008   (0x0004)  
};

/// Struct /Script/RyRuntime.RyWorldContext
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FRyWorldContext
{ 
	class UWorld*                                      World;                                                      // 0x0000   (0x0008)  
	ERyWorldType                                       WorldType;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	FName                                              ContextHandle;                                              // 0x000C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            TravelURL;                                                  // 0x0018   (0x0010)  
	char                                               TravelType;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	class UGameInstance*                               OwningGameInstance;                                         // 0x0030   (0x0008)  
	FString                                            PIEPrefix;                                                  // 0x0038   (0x0010)  
	bool                                               RunAsDedicated;                                             // 0x0048   (0x0001)  
	bool                                               bWaitingOnOnlineSubsystem;                                  // 0x0049   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x004A   (0x0006)  MISSED
	FString                                            CustomDescription;                                          // 0x0050   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(URyLineBatchComponent) == 0x0490); // 1168 bytes (0x000490 - 0x000490)
static_assert(sizeof(URyMathEasing) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URyRuntimeAnimationHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URyRuntimeAudioHelpers) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(URyRuntimeComponentHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URyFileHandle) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(URyRuntimeFileHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URyRuntimeLevelHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URyRuntimeLogHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URyRuntimeMathHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URyRuntimeMetaHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URyRuntimeNavigationHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URySlowTaskDialog) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(URyRuntimeNotificationHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URyRuntimeObjectHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URyRuntimePakHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URyRuntimePlatformHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URyRuntimePlayerHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URyRuntimeProjectHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URyRuntimeRenderingHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URyRuntimeStringHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URyRuntimeTextureHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URyRuntimeWidgetHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URyRuntimeWorldHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URyRuntimeXRHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FRyCaptureDeviceInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRyExponentialHeightFogData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRyWorldContext) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(offsetof(FRyCaptureDeviceInfo, DeviceName) == 0x0000);
static_assert(offsetof(FRyCaptureDeviceInfo, DeviceID) == 0x0010);
static_assert(offsetof(FRyWorldContext, World) == 0x0000);
static_assert(offsetof(FRyWorldContext, WorldType) == 0x0008);
static_assert(offsetof(FRyWorldContext, ContextHandle) == 0x000C);
static_assert(offsetof(FRyWorldContext, TravelURL) == 0x0018);
static_assert(offsetof(FRyWorldContext, OwningGameInstance) == 0x0030);
static_assert(offsetof(FRyWorldContext, PIEPrefix) == 0x0038);
static_assert(offsetof(FRyWorldContext, CustomDescription) == 0x0050);
