
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MagicNodeRuntime

#pragma pack(push, 0x1)

/// Class /Script/VotV.bpCodeLib
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UbpCodeLib : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/VotV.bpCodeLib.weightedRandomV2_lerp
	// void weightedRandomV2_lerp(TArray<float> Weights, float ulerp, int32_t& Index);                                          // [0x10db2a0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/VotV.bpCodeLib.weightedRandomV2_exponent
	// void weightedRandomV2_exponent(TArray<float> Weights, float Exponent, int32_t& Index);                                   // [0x10db130] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/VotV.bpCodeLib.weightedRandomV2
	// void weightedRandomV2(TArray<float> Weights, int32_t& Index);                                                            // [0x10db000] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/VotV.bpCodeLib.vecBoundBox
	// void vecBoundBox(TArray<FVector> vecs, FVector& Min, FVector& Max, FVector& Box, FVector& Origin, FVector& boundingCenter); // [0x10dad90] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VotV.bpCodeLib.triangleNormal
	// void triangleNormal(FVector point1, FVector point2, FVector point3, FVector& Normal);                                    // [0x10dac10] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VotV.bpCodeLib.translateAriral
	// void translateAriral(FString In, FString& Out);                                                                          // [0x10daac0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/VotV.bpCodeLib.tetrahedronVolume
	// float tetrahedronVolume(FVector vecA, FVector vecB, FVector vecC, FVector vecD);                                         // [0x10da930] Final|Native|Static|Private|HasDefaults|BlueprintCallable 
	// Function /Script/VotV.bpCodeLib.stringEquation
	// void stringEquation(FString equation, float& answer);                                                                    // [0x10da800] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/VotV.bpCodeLib.scrapingMath
	// void scrapingMath(class UPrimitiveComponent* Component, FHitResult Hit, class UAudioComponent* Audio, bool& canScrape, float& vol); // [0x10da5c0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/VotV.bpCodeLib.rugGen
	// void rugGen(class AActor* Owner, int32_t size_X, int32_t size_Y, float Size, float Height, float lift, float traceSize, float maxRad, int32_t maxSm, TArray<FVector>& Verts, TArray<int32_t>& tris, TArray<FVector>& normals, TArray<FVector2D>& UVs); // [0x10da190] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/VotV.bpCodeLib.returnMeshTemplateData
	// void returnMeshTemplateData(int32_t indexer, FString& rstring);                                                          // [0x10da0b0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/VotV.bpCodeLib.processPhysImpact
	// void processPhysImpact(class AActor* Object, class UPrimitiveComponent* Component, FHitResult Hit, FVector impact, class USoundBase* impactSound, class USoundBase* damageSound, class USoundBase* destroySound, class USoundAttenuation* Attenuation, class USoundConcurrency* Concurrency, float currentHealth, float ImpactResistance, float ImpactDamage, float damageResistance, float Mass, bool& isHit, float& debugFloat1, bool& debugBool1); // [0x10d9b00] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VotV.bpCodeLib.meshConvexVolume2
	// void meshConvexVolume2(class UStaticMesh* StaticMesh, float& Volume);                                                    // [0x10d9820] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/VotV.bpCodeLib.meshConvexVolume
	// void meshConvexVolume(class UStaticMeshComponent* StaticMesh, int32_t Depth, float& Volume, int32_t& iters, float& minVol, TArray<FVector>& Points); // [0x10d98f0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/VotV.bpCodeLib.getMotion
	// void getMotion(TArray<FColor> pixels_a, TArray<FColor> pixels_b, float& Result);                                         // [0x10d9670] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/VotV.bpCodeLib.getMachineID
	// FString getMachineID();                                                                                                  // [0x10d95f0] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VotV.bpCodeLib.GetAllAttachedActors
	// TArray<AActor*> GetAllAttachedActors(class AActor* ParentActor);                                                         // [0x10d8a40] Final|Native|Private|BlueprintCallable 
	// Function /Script/VotV.bpCodeLib.canBoxFitInBox
	// bool canBoxFitInBox(FVector big, FVector small1);                                                                        // [0x10d9510] Final|Native|Static|Private|HasDefaults|BlueprintCallable 
	// Function /Script/VotV.bpCodeLib.boyoancyForce
	// void boyoancyForce(class UPrimitiveComponent* Component, float boyoancyForce, float surface, float powerDepth, float maxPower, float Damping); // [0x10d9340] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/VotV.bpCodeLib.boyoancy
	// void boyoancy(TArray<AActor*> actorsInWater, TArray<float> actorsSurface, TArray<float> actorsBoyoancy, TArray<FTransform> Boxes, TArray<bool> centerUnderwaterCompare, TArray<bool>& centerUnderwaterCopy, float powerDepth, float maxPower, TArray<USplineComponent*> riverSplines, TArray<float> riversRadiusIn, TArray<float> riversRadiusOut, TArray<float> riversForce, float Damping, TArray<float>& actorsFloatTimers, TArray<float>& actorsFloatTimersReturn); // [0x10d8b20] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/VotV.bpCodeLib.BoundingBox2DPoints
	// void BoundingBox2DPoints(class APlayerController* PlayerController, TArray<FVector> Verts, FVector2D& Min, FVector2D& Max, FVector2D& Origin, FVector2D& Size, bool& clipX, bool& clipY); // [0x10d8750] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VotV.bpCodeLib.BoundingBox2D
	// void BoundingBox2D(class APlayerController* PlayerController, class UPrimitiveComponent* comp, TArray<FVector>& Verts, FVector2D& Min, FVector2D& Max, FVector2D& Origin, FVector2D& Size, bool& clipX, bool& clipY); // [0x10d8450] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/VotV.cppInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UcppInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/VotV.cppInterface.impactSquishCPP
	// void impactSquishCPP(class UPrimitiveComponent* Component);                                                              // [0x10dbb60] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/VotV.cppInterface.impactDamageCPP
	// void impactDamageCPP(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);                                 // [0x10db960] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/VotV.cppInterface.exitTheWater
	// void exitTheWater();                                                                                                     // [0x10db940] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/VotV.cppInterface.enteredTheWater
	// void enteredTheWater();                                                                                                  // [0x10db920] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/VotV.mn_test__CPP
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class Umn_test__CPP : public UMagicNode
{ 
public:


	/// Functions
	// Function /Script/VotV.mn_test__CPP.Execute
	// void Execute(class UObject* Context, float& Out, int32_t Num, int32_t num2);                                             // [0x10dbd80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UbpCodeLib) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UcppInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(Umn_test__CPP) == 0x0048); // 72 bytes (0x000048 - 0x000048)
