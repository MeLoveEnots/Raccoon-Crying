
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

/// Class /Script/DriftIslandPlugin.DriftIslandBlueprintFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDriftIslandBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DriftIslandPlugin.DriftIslandBlueprintFunctionLibrary.ReverseSplinesToLookTowardsRoad
	// void ReverseSplinesToLookTowardsRoad(TArray<AActor*>& SplinesToReverse, TArray<AActor*>& SplinesToLookAt, bool ReverseAll); // [0xd87ed0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DriftIslandPlugin.DriftIslandBlueprintFunctionLibrary.ReplaceSplinePoints
	// void ReplaceSplinePoints(class USplineComponent* SplineToCopy, class USplineComponent* SplineToClear, bool bMatchWorldLocation); // [0xd87dd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DriftIslandPlugin.DriftIslandBlueprintFunctionLibrary.IsWithinDistanceOfPositions
	// bool IsWithinDistanceOfPositions(TArray<FVector>& Positions, float Distance, FVector& Location);                         // [0xd87c80] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/DriftIslandPlugin.DriftIslandBlueprintFunctionLibrary.GetDistanceAlongSplineAtWorldLocation
	// float GetDistanceAlongSplineAtWorldLocation(class USplineComponent* InSpline, FVector InWorldLocation);                  // [0xd87ba0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/DriftIslandPlugin.DriftIslandBlueprintFunctionLibrary.FindNearestActorToLocation
	// class AActor* FindNearestActorToLocation(TArray<AActor*>& Actors, FVector& Location);                                    // [0xd87aa0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/DriftIslandPlugin.DriftIslandBlueprintFunctionLibrary.FilterActorsByName
	// TArray<AActor*> FilterActorsByName(TArray<AActor*>& Actors, FString NameToMatch);                                        // [0xd87900] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/DriftIslandPlugin.DriftIslandBlueprintFunctionLibrary.DestroyAllComponentsExcept
	// void DestroyAllComponentsExcept(class AActor* Actor, TArray<USceneComponent*> ComponentsToKeep);                         // [0xd877e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/DriftIslandPlugin.DriftIslandSplineMeshActorCPP
/// Size: 0x0220 (544 bytes) (0x000220 - 0x000220) align 8 MaxSize: 0x0220
class ADriftIslandSplineMeshActorCPP : public AActor
{ 
public:


	/// Functions
	// Function /Script/DriftIslandPlugin.DriftIslandSplineMeshActorCPP.SplitSplineByDistance
	// class USplineComponent* SplitSplineByDistance(TArray<USplineComponent*>& OutSplines, class USplineComponent* Spline, float DistanceF, float SplineStart, float SplineEnd, bool SetPointsToLinear, bool NewSplineForEachSegment, float TangentScale, float RandomRoll, float RandomPositionRadius, class AActor* ParentActor); // [0xd887c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DriftIslandPlugin.DriftIslandSplineMeshActorCPP.CreateSplineMeshes
	// void CreateSplineMeshes(class USplineComponent* InputSpline, class AActor* ParentActor, TArray<UStaticMesh*> MeshesForSplines, TArray<UStaticMesh*> MeshesForPosts, int32_t NumRandomPosts, int32_t CullDistanceMin, int32_t CullDistanceMax, float OffsetSplineTowardsRightVector, float TangentScale, float RandomRoll, float Overlap, float KnockOutWeight, bool StraightenPosts, bool OutputStaticMeshesOnSplines, bool SnapToGround, TArray<UStaticMeshComponent*>& OutStaticMeshesPosts, TArray<USplineMeshComponent*>& OutSplineMeshes); // [0xd88200] Final|Native|Public|HasOutParms|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UDriftIslandBlueprintFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ADriftIslandSplineMeshActorCPP) == 0x0220); // 544 bytes (0x000220 - 0x000220)
