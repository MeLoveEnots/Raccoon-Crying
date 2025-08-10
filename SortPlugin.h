
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

/// Class /Script/SortPlugin.SortPluginBPLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USortPluginBPLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SortPlugin.SortPluginBPLibrary.ToVectorSet
	// TSet<FVector> ToVectorSet(TArray<FVector>& Array);                                                                       // [0xd80350] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ToStringSet
	// TSet<FString> ToStringSet(TArray<FString>& Array);                                                                       // [0xd801c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ToObjectSet
	// TSet<UObject*> ToObjectSet(TArray<UObject*>& Array);                                                                     // [0xd7fb80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ToNameSet
	// TSet<FName> ToNameSet(TArray<FName>& Array);                                                                             // [0xd80030] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ToIntegerSet
	// TSet<int32_t> ToIntegerSet(TArray<int32_t>& Array);                                                                      // [0xd7fea0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ToFloatSet
	// TSet<float> ToFloatSet(TArray<float>& Array);                                                                            // [0xd7fd10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ToActorSet
	// TSet<AActor*> ToActorSet(TArray<AActor*>& Array);                                                                        // [0xd7fb80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.SplitString
	// TArray<FString> SplitString(FString String, FString Separator, TEnumAsByte<ESearchCase> SearchCase, bool RemoveEmptyString); // [0xd7f980] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SortPlugin.SortPluginBPLibrary.SortVectorRef
	// void SortVectorRef(TArray<FVector>& Array, FVector Origin, bool bIsAscending);                                           // [0xd7f840] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.SortVector
	// TArray<FVector> SortVector(TArray<FVector> Array, FVector Origin, bool bIsAscending);                                    // [0xd7f680] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.SortStringRef
	// void SortStringRef(TArray<FString>& Array, bool bIsAscending);                                                           // [0xd7f570] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.SortString
	// TArray<FString> SortString(TArray<FString> Array, bool bIsAscending);                                                    // [0xd7f380] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.SortNameRef
	// void SortNameRef(TArray<FName>& Array, bool bIsAscending);                                                               // [0xd7f290] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.SortName
	// TArray<FName> SortName(TArray<FName> Array, bool bIsAscending);                                                          // [0xd7f110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.SortIntegerRef
	// void SortIntegerRef(TArray<int32_t>& Array, bool bIsAscending);                                                          // [0xd7f020] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.SortInteger
	// TArray<int32_t> SortInteger(TArray<int32_t> Array, bool bIsAscending);                                                   // [0xd7eea0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.SortFloatRef
	// void SortFloatRef(TArray<float>& Array, bool bIsAscending);                                                              // [0xd7edb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.SortFloat
	// TArray<float> SortFloat(TArray<float> Array, bool bIsAscending);                                                         // [0xd7ec30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.SortActorRef
	// void SortActorRef(TArray<AActor*>& Array, class AActor*& Actor, bool bIsAscending);                                      // [0xd7eaf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.SortActor
	// TArray<AActor*> SortActor(TArray<AActor*> Array, class AActor*& Actor, bool bIsAscending);                               // [0xd7e930] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ReverseVector
	// TArray<FVector> ReverseVector(TArray<FVector>& Array);                                                                   // [0xd7e840] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ReverseString
	// TArray<FString> ReverseString(TArray<FString>& Array);                                                                   // [0xd7e730] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ReverseObject
	// TArray<UObject*> ReverseObject(TArray<UObject*>& Array);                                                                 // [0xd7e640] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ReverseName
	// TArray<FName> ReverseName(TArray<FName>& Array);                                                                         // [0xd7e460] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ReverseInteger
	// TArray<int32_t> ReverseInteger(TArray<int32_t>& Array);                                                                  // [0xd7e550] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ReverseFloat
	// TArray<float> ReverseFloat(TArray<float>& Array);                                                                        // [0xd7e550] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ReverseActor
	// TArray<AActor*> ReverseActor(TArray<AActor*>& Array);                                                                    // [0xd7e460] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.RandomVector
	// TArray<FVector> RandomVector(int32_t Size, FVector MinValue, FVector MaxValue);                                          // [0xd7e2e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/SortPlugin.SortPluginBPLibrary.RandomInteger
	// TArray<int32_t> RandomInteger(int32_t Size, int32_t MinValue, int32_t MaxValue);                                         // [0xd7e1a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SortPlugin.SortPluginBPLibrary.RandomFloat
	// TArray<float> RandomFloat(int32_t Size, float MinValue, float MaxValue);                                                 // [0xd7e060] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SortPlugin.SortPluginBPLibrary.PredicateSortVectorRef
	// void PredicateSortVectorRef(TArray<FVector>& Array, FDelegateProperty& PredicateFunction, bool InvertResult);            // [0xd7df00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.PredicateSortVector
	// TArray<FVector> PredicateSortVector(TArray<FVector> Array, FDelegateProperty& PredicateFunction, bool InvertResult);     // [0xd7dd30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.PredicateSortStringRef
	// void PredicateSortStringRef(TArray<FString>& Array, FDelegateProperty& PredicateFunction, bool InvertResult);            // [0xd7dbb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.PredicateSortString
	// TArray<FString> PredicateSortString(TArray<FString> Array, FDelegateProperty& PredicateFunction, bool InvertResult);     // [0xd7d960] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.PredicateSortObjectRef
	// void PredicateSortObjectRef(TArray<UObject*>& Array, FDelegateProperty& PredicateFunction, bool InvertResult);           // [0xd7ce70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.PredicateSortObject
	// TArray<UObject*> PredicateSortObject(TArray<UObject*> Array, FDelegateProperty& PredicateFunction, bool InvertResult);   // [0xd7cca0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.PredicateSortNameRef
	// void PredicateSortNameRef(TArray<FName>& Array, FDelegateProperty& PredicateFunction, bool InvertResult);                // [0xd7d800] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.PredicateSortName
	// TArray<FName> PredicateSortName(TArray<FName> Array, FDelegateProperty& PredicateFunction, bool InvertResult);           // [0xd7d630] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.PredicateSortIntegerRef
	// void PredicateSortIntegerRef(TArray<int32_t>& Array, FDelegateProperty& PredicateFunction, bool InvertResult);           // [0xd7d4d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.PredicateSortInteger
	// TArray<int32_t> PredicateSortInteger(TArray<int32_t> Array, FDelegateProperty& PredicateFunction, bool InvertResult);    // [0xd7d300] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.PredicateSortFloatRef
	// void PredicateSortFloatRef(TArray<float>& Array, FDelegateProperty& PredicateFunction, bool InvertResult);               // [0xd7d1a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.PredicateSortFloat
	// TArray<float> PredicateSortFloat(TArray<float> Array, FDelegateProperty& PredicateFunction, bool InvertResult);          // [0xd7cfd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.PredicateSortActorRef
	// void PredicateSortActorRef(TArray<AActor*>& Array, FDelegateProperty& PredicateFunction, bool InvertResult);             // [0xd7ce70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.PredicateSortActor
	// TArray<AActor*> PredicateSortActor(TArray<AActor*> Array, FDelegateProperty& PredicateFunction, bool InvertResult);      // [0xd7cca0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.PredicateFilterVector
	// TArray<FVector> PredicateFilterVector(TArray<FVector>& Array, FDelegateProperty& PredicateFunction, bool InvertResult);  // [0xd7caf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.PredicateFilterString
	// TArray<FString> PredicateFilterString(TArray<FString>& Array, FDelegateProperty& PredicateFunction, bool InvertResult);  // [0xd7c920] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.PredicateFilterObject
	// TArray<UObject*> PredicateFilterObject(TArray<UObject*>& Array, FDelegateProperty& PredicateFunction, bool InvertResult); // [0xd7c770] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.PredicateFilterName
	// TArray<FName> PredicateFilterName(TArray<FName>& Array, FDelegateProperty& PredicateFunction, bool InvertResult);        // [0xd7c5c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.PredicateFilterInteger
	// TArray<int32_t> PredicateFilterInteger(TArray<int32_t>& Array, FDelegateProperty& PredicateFunction, bool InvertResult); // [0xd7c410] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.PredicateFilterFloat
	// TArray<float> PredicateFilterFloat(TArray<float>& Array, FDelegateProperty& PredicateFunction, bool InvertResult);       // [0xd7c260] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.PredicateFilterActor
	// TArray<AActor*> PredicateFilterActor(TArray<AActor*>& Array, FDelegateProperty& PredicateFunction, bool InvertResult);   // [0xd7c0b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.MinMaxIntegerNormalization
	// TArray<int32_t> MinMaxIntegerNormalization(TArray<int32_t>& Array, int32_t Min, int32_t Max);                            // [0xd7bde0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.MinMaxFloatNormalization
	// TArray<float> MinMaxFloatNormalization(TArray<float>& Array, float Min, float Max);                                      // [0xd7bc70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.MinimumIntegerIndex
	// int32_t MinimumIntegerIndex(TArray<int32_t>& Array);                                                                     // [0xd7c000] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.MinimumFloatIndex
	// int32_t MinimumFloatIndex(TArray<float>& Array);                                                                         // [0xd7bf50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.MaximumIntegerIndex
	// int32_t MaximumIntegerIndex(TArray<int32_t>& Array);                                                                     // [0xd7bbc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.MaximumFloatIndex
	// int32_t MaximumFloatIndex(TArray<float>& Array);                                                                         // [0xd7bb10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.FilterMatches
	// TArray<FString> FilterMatches(TArray<FString>& Array, FString Pattern, bool& bFound, TArray<int32_t>& Indexes);          // [0xd7b8e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.FilterMatch
	// FString FilterMatch(TArray<FString>& Array, FString Pattern, bool& bFound, int32_t& Index);                              // [0xd7b6e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.FarthestLocation
	// void FarthestLocation(TArray<FVector>& Array, FVector Origin, FVector& Farthest, float& Distance, int32_t& Index);       // [0xd7b500] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.FarthestActor
	// void FarthestActor(TArray<AActor*>& Array, class AActor*& Origin, class AActor*& Farthest, float& Distance, int32_t& Index); // [0xd7b2f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ExtractVector
	// TArray<FVector> ExtractVector(TArray<FVector>& Array, int32_t StartIndex, int32_t EndIndex);                             // [0xd7b180] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ExtractString
	// TArray<FString> ExtractString(TArray<FString>& Array, int32_t StartIndex, int32_t EndIndex);                             // [0xd7afe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ExtractObject
	// TArray<UObject*> ExtractObject(TArray<UObject*>& Array, int32_t StartIndex, int32_t EndIndex);                           // [0xd7ae70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ExtractName
	// TArray<FName> ExtractName(TArray<FName>& Array, int32_t StartIndex, int32_t EndIndex);                                   // [0xd7ab90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ExtractInteger
	// TArray<int32_t> ExtractInteger(TArray<int32_t>& Array, int32_t StartIndex, int32_t EndIndex);                            // [0xd7ad00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ExtractFloat
	// TArray<float> ExtractFloat(TArray<float>& Array, int32_t StartIndex, int32_t EndIndex);                                  // [0xd7ad00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ExtractActor
	// TArray<AActor*> ExtractActor(TArray<AActor*>& Array, int32_t StartIndex, int32_t EndIndex);                              // [0xd7ab90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ClosestLocation
	// void ClosestLocation(TArray<FVector>& Array, FVector Origin, FVector& Closest, float& Distance, int32_t& Index);         // [0xd7a9b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ClosestActor
	// void ClosestActor(TArray<AActor*>& Array, class AActor*& Origin, class AActor*& Closest, float& Distance, int32_t& Index); // [0xd7a7a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ClampVectorSizeRef
	// void ClampVectorSizeRef(TArray<FVector>& Array, float MinSize, float MaxSize, bool bOnly2D);                             // [0xd7a630] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ClampVectorSize
	// TArray<FVector> ClampVectorSize(TArray<FVector> Array, float MinSize, float MaxSize, bool bOnly2D);                      // [0xd7a440] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ClampIntegerRef
	// void ClampIntegerRef(TArray<int32_t>& Array, int32_t Min, int32_t Max);                                                  // [0xd7a310] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ClampInteger
	// TArray<int32_t> ClampInteger(TArray<int32_t> Array, int32_t Min, int32_t Max);                                           // [0xd7a170] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ClampFloatRef
	// void ClampFloatRef(TArray<float>& Array, float Min, float Max);                                                          // [0xd7a040] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.ClampFloat
	// TArray<float> ClampFloat(TArray<float> Array, float Min, float Max);                                                     // [0xd79ea0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.AverageInteger
	// float AverageInteger(TArray<int32_t>& Array);                                                                            // [0xd79df0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SortPlugin.SortPluginBPLibrary.AverageFloat
	// float AverageFloat(TArray<float>& Array);                                                                                // [0xd79d40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(USortPluginBPLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
