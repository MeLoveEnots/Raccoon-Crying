
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

/// Enum /Script/JSONParser.EJSONJsonStructMapSetting
/// Size: 0x01 (1 bytes)
enum class EJSONJsonStructMapSetting : uint8_t
{
	EJSONJsonStructMapSetting__E_object                                              = 0,
	EJSONJsonStructMapSetting__E_array                                               = 1
};

/// Enum /Script/JSONParser.EJSONDirectoryType
/// Size: 0x01 (1 bytes)
enum class EJSONDirectoryType : uint8_t
{
	EJSONDirectoryType__E_gd                                                         = 0,
	EJSONDirectoryType__E_ad                                                         = 1
};

/// Enum /Script/JSONParser.EJsonDataType
/// Size: 0x01 (1 bytes)
enum class EJsonDataType : uint8_t
{
	EJsonDataType__E_String                                                          = 0,
	EJsonDataType__E_Number                                                          = 1,
	EJsonDataType__E_Bool                                                            = 2,
	EJsonDataType__E_Object                                                          = 3
};

/// Enum /Script/JSONParser.EJsonCompressFormat
/// Size: 0x01 (1 bytes)
enum class EJsonCompressFormat : uint8_t
{
	EJsonCompressFormat__E_Zlib                                                      = 0,
	EJsonCompressFormat__E_Gzip                                                      = 1,
	EJsonCompressFormat__E_LZ4                                                       = 2
};

/// Class /Script/JSONParser.JSONParserAsyncObjectToString
/// Size: 0x0120 (288 bytes) (0x000030 - 0x000120) align 8 MaxSize: 0x0120
class UJSONParserAsyncObjectToString : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,410) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,411) /* FMulticastInlineDelegate */ __um(OnFail);                                             // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0xD0];                                      // 0x0050   (0x00D0)  MISSED


	/// Functions
	// Function /Script/JSONParser.JSONParserAsyncObjectToString.JsonObjectToStringAsync
	// class UJSONParserAsyncObjectToString* JsonObjectToStringAsync(FSJsonObject mainObject, bool removeLineBreaks, bool addPadding); // [0xd69de0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserAsyncObjectToString.JsonObjectToFileAsync
	// class UJSONParserAsyncObjectToString* JsonObjectToFileAsync(FSJsonObject mainObject, EJSONDirectoryType directoryType, FString FilePath, bool removeLineBreaks, bool addPadding); // [0xd69820] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/JSONParser.JSONParserAsyncStringToObject
/// Size: 0x0120 (288 bytes) (0x000030 - 0x000120) align 8 MaxSize: 0x0120
class UJSONParserAsyncStringToObject : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,412) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,413) /* FMulticastInlineDelegate */ __um(OnFail);                                             // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0xD0];                                      // 0x0050   (0x00D0)  MISSED


	/// Functions
	// Function /Script/JSONParser.JSONParserAsyncStringToObject.JsonStringToObjectAsync
	// class UJSONParserAsyncStringToObject* JsonStringToObjectAsync(FString Json, bool removeAndSavePadding);                  // [0xd6a330] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserAsyncStringToObject.JsonFileToObjectAsync
	// class UJSONParserAsyncStringToObject* JsonFileToObjectAsync(EJSONDirectoryType directoryType, FString FilePath, bool removeAndSavePadding); // [0xd696b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/JSONParser.JSONParserBPLibrary
/// Size: 0x00D0 (208 bytes) (0x000028 - 0x0000D0) align 8 MaxSize: 0x00D0
class UJSONParserBPLibrary : public UBlueprintFunctionLibrary
{ 
public:
	unsigned char                                      UnknownData00_1[0xA8];                                      // 0x0028   (0x00A8)  MISSED


	/// Functions
	// Function /Script/JSONParser.JSONParserBPLibrary.WriteStringToFile
	// bool WriteStringToFile(EJSONDirectoryType directoryType, FString JSON_String, FString FilePath);                         // [0xd6d1f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.WriteBytesToFile
	// bool WriteBytesToFile(EJSONDirectoryType directoryType, TArray<char> bytes, FString FilePath);                           // [0xd6d040] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.VectorToJsonObject
	// FSJsonObject VectorToJsonObject(FVector Vector);                                                                         // [0xd6bd00] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.uncompressData
	// void uncompressData(EJsonCompressFormat Format, int32_t uncompressedDataSize, TArray<char> compressedData, TArray<char>& uncompressedData, bool& success); // [0xd6ce40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.TransformToJsonObject
	// FSJsonObject TransformToJsonObject(FTransform Transform);                                                                // [0xd6bbe0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.StructToJsonObject
	// FSJsonObject StructToJsonObject(class UStruct* Struct);                                                                  // [0xd6bb50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.stringToByteArray
	// TArray<char> stringToByteArray(FString String);                                                                          // [0xd6cd10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.setStructJsonSettings
	// void setStructJsonSettings(EJSONJsonStructMapSetting Map);                                                               // [0xd6cca0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.RotatorToJsonObject
	// FSJsonObject RotatorToJsonObject(FRotator Rotator);                                                                      // [0xd6baa0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.ReadStringFromFile
	// bool ReadStringFromFile(EJSONDirectoryType directoryType, FString FilePath, FString& JSON_String);                       // [0xd6cb10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.ReadBytesFromFile
	// void ReadBytesFromFile(EJSONDirectoryType directoryType, FString FilePath, TArray<char>& bytes);                         // [0xd6c990] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.PrepareStructToFillItWithJson
	// FString PrepareStructToFillItWithJson(class UStruct* Struct);                                                            // [0xd6b970] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.MakeString
	// FString MakeString(FString Value);                                                                                       // [0xd6b840] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JSONParser.JSONParserBPLibrary.MakeNumber
	// float MakeNumber(float Value);                                                                                           // [0xd6b7b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JSONParser.JSONParserBPLibrary.MakeMixedJSONArray
	// FSJsonObject MakeMixedJSONArray(FSJsonObject oldJSONMixedArray, EJsonDataType ChooseOneType, FSJsonObject Object, bool Bool, float Number, FString String); // [0xd6b480] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.MakeMapString
	// TMap<FString, FString> MakeMapString(FString Key, FString Value);                                                        // [0xd6b2b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JSONParser.JSONParserBPLibrary.MakeMapObject
	// TMap<FString, FSJsonObject> MakeMapObject(FString Key, FSJsonObject Value);                                              // [0xd6b0b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JSONParser.JSONParserBPLibrary.MakeMapNumber
	// TMap<FString, float> MakeMapNumber(FString Key, float Value);                                                            // [0xd6af20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JSONParser.JSONParserBPLibrary.MakeMapBool
	// TMap<FString, bool> MakeMapBool(FString Key, bool Value);                                                                // [0xd6ad90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JSONParser.JSONParserBPLibrary.MakeJson_Object
	// FSJsonObject MakeJson_Object(TMap<FString, FSJsonObject> ObjectMap, TMap<FString, bool> BoolMap, TMap<FString, float> NumberMap, TMap<FString, FString> StringMap, TArray<FSJsonObject> ObjectArray, TArray<bool> BoolArray, TArray<float> NumberArray, TArray<FString> StringArray); // [0xd6a4f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.MakeBool
	// bool MakeBool(bool Value);                                                                                               // [0xd6a460] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JSONParser.JSONParserBPLibrary.JsonStringToObject
	// FSJsonObject JsonStringToObject(FString Json, bool removeAndSavePadding, bool& Successful);                              // [0xd6a190] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.JsonObjectToVector
	// FVector JsonObjectToVector(FSJsonObject jsonObject);                                                                     // [0xd6a080] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.JsonObjectToTransform
	// FTransform JsonObjectToTransform(FSJsonObject jsonObject);                                                               // [0xd69f60] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.JsonObjectToString
	// FString JsonObjectToString(bool& Successful, FSJsonObject mainObject, bool removeLineBreaks, bool addPadding);           // [0xd69bb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.JsonObjectToRotator
	// FRotator JsonObjectToRotator(FSJsonObject jsonObject);                                                                   // [0xd69aa0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.FillStructWithJson
	// void FillStructWithJson(FString structID, FSJsonObject Json);                                                            // [0xd69520] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.fileToBase64String
	// void fileToBase64String(EJSONDirectoryType directoryType, FString FilePath, FString& base64String, FString& Filename);   // [0xd6c7b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.fileExists
	// bool fileExists(EJSONDirectoryType directoryType, FString FilePath);                                                     // [0xd6c680] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.dirExists
	// bool dirExists(EJSONDirectoryType directoryType, FString FilePath);                                                      // [0xd6c550] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.DeleteFile
	// bool DeleteFile(EJSONDirectoryType directoryType, FString FilePath);                                                     // [0xd6c420] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.CreateFile
	// bool CreateFile(EJSONDirectoryType directoryType, FString FilePath);                                                     // [0xd6c2f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.compressData
	// void compressData(EJsonCompressFormat Format, TArray<char> uncompressedData, TArray<char>& compressedData, int32_t& compressedDataSize, int32_t& uncompressedDataSize, bool& success); // [0xd6c080] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.ChangeMapString
	// TMap<FString, FString> ChangeMapString(TMap<FString, FString> Map, FString Key, FString Value);                          // [0xd69260] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JSONParser.JSONParserBPLibrary.ChangeMapObject
	// TMap<FString, FSJsonObject> ChangeMapObject(TMap<FString, FSJsonObject> Map, FString Key, FSJsonObject Value);           // [0xd68f50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JSONParser.JSONParserBPLibrary.ChangeMapNumber
	// TMap<FString, float> ChangeMapNumber(TMap<FString, float> Map, FString Key, float Value);                                // [0xd68ce0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JSONParser.JSONParserBPLibrary.ChangeMapBool
	// TMap<FString, bool> ChangeMapBool(TMap<FString, bool> Map, FString Key, bool Value);                                     // [0xd68a70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JSONParser.JSONParserBPLibrary.byteArrayToString
	// FString byteArrayToString(TArray<char> ByteArray);                                                                       // [0xd6bf60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.BreakMixedJSONArray
	// void BreakMixedJSONArray(int32_t Index, FSJsonObject jsonObject, int32_t& LastIndex, EJsonDataType& Type, FSJsonObject& Object, bool& Bool, float& Number, FString& String); // [0xd686e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.BreakJson_Object
	// void BreakJson_Object(FSJsonObject jsonObject, TMap<FString, FSJsonObject>& ObjectMap, TMap<FString, bool>& BoolMap, TMap<FString, float>& NumberMap, TMap<FString, FString>& StringMap, TArray<FSJsonObject>& ObjectArray, TArray<bool>& BoolArray, TArray<float>& NumberArray, TArray<FString>& StringArray); // [0xd67fc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.base64StringToFile
	// bool base64StringToFile(EJSONDirectoryType directoryType, FString base64String, FString FilePath);                       // [0xd6bdb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JSONParser.JSONParserBPLibrary.AddMapString
	// TMap<FString, FString> AddMapString(TMap<FString, FString> Map, FString Key, FString Value);                             // [0xd67d00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JSONParser.JSONParserBPLibrary.AddMapObject
	// TMap<FString, FSJsonObject> AddMapObject(TMap<FString, FSJsonObject> Map, FString Key, FSJsonObject Value);              // [0xd679f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JSONParser.JSONParserBPLibrary.AddMapNumber
	// TMap<FString, float> AddMapNumber(TMap<FString, float> Map, FString Key, float Value);                                   // [0xd67780] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JSONParser.JSONParserBPLibrary.AddMapBool
	// TMap<FString, bool> AddMapBool(TMap<FString, bool> Map, FString Key, bool Value);                                        // [0xd67510] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/JSONParser.SJsonObject
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FSJsonObject
{ 
	unsigned char                                      UnknownData00_2[0x80];                                      // 0x0000   (0x0080)  MISSED
};

/// Struct /Script/JSONParser.SFillStructWithJsonContainer
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FSFillStructWithJsonContainer
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UJSONParserAsyncObjectToString) == 0x0120); // 288 bytes (0x000030 - 0x000120)
static_assert(sizeof(UJSONParserAsyncStringToObject) == 0x0120); // 288 bytes (0x000030 - 0x000120)
static_assert(sizeof(UJSONParserBPLibrary) == 0x00D0); // 208 bytes (0x000028 - 0x0000D0)
static_assert(sizeof(FSJsonObject) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FSFillStructWithJsonContainer) == 0x0010); // 16 bytes (0x000000 - 0x000010)
