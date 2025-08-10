
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

/// Class /Script/LowEntryEncryption.LowEntryEncryptionAesFastEngine
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class ULowEntryEncryptionAesFastEngine : public UObject
{ 
public:
	int32_t                                            ROUNDS;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x24];                                      // 0x002C   (0x0024)  MISSED
	int32_t                                            C0;                                                         // 0x0050   (0x0004)  
	int32_t                                            C1;                                                         // 0x0054   (0x0004)  
	int32_t                                            C2;                                                         // 0x0058   (0x0004)  
	int32_t                                            C3;                                                         // 0x005C   (0x0004)  
	int32_t                                            C0store1;                                                   // 0x0060   (0x0004)  
	int32_t                                            C1store1;                                                   // 0x0064   (0x0004)  
	int32_t                                            C2store1;                                                   // 0x0068   (0x0004)  
	int32_t                                            C3store1;                                                   // 0x006C   (0x0004)  
	int32_t                                            C0store2;                                                   // 0x0070   (0x0004)  
	int32_t                                            C1store2;                                                   // 0x0074   (0x0004)  
	int32_t                                            C2store2;                                                   // 0x0078   (0x0004)  
	int32_t                                            C3store2;                                                   // 0x007C   (0x0004)  
};

/// Class /Script/LowEntryEncryption.LowEntryEncryptionAesFastEngine1D
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class ULowEntryEncryptionAesFastEngine1D : public UObject
{ 
public:
	int32_t                                            ROUNDS;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<int32_t>                                    EW;                                                         // 0x0030   (0x0010)  
	TArray<int32_t>                                    DW;                                                         // 0x0040   (0x0010)  
	int32_t                                            C0;                                                         // 0x0050   (0x0004)  
	int32_t                                            C1;                                                         // 0x0054   (0x0004)  
	int32_t                                            C2;                                                         // 0x0058   (0x0004)  
	int32_t                                            C3;                                                         // 0x005C   (0x0004)  
	int32_t                                            C0store1;                                                   // 0x0060   (0x0004)  
	int32_t                                            C1store1;                                                   // 0x0064   (0x0004)  
	int32_t                                            C2store1;                                                   // 0x0068   (0x0004)  
	int32_t                                            C3store1;                                                   // 0x006C   (0x0004)  
	int32_t                                            C0store2;                                                   // 0x0070   (0x0004)  
	int32_t                                            C1store2;                                                   // 0x0074   (0x0004)  
	int32_t                                            C2store2;                                                   // 0x0078   (0x0004)  
	int32_t                                            C3store2;                                                   // 0x007C   (0x0004)  
};

/// Class /Script/LowEntryEncryption.LowEntryEncryptionAesKey
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class ULowEntryEncryptionAesKey : public UObject
{ 
public:
	int32_t                                            ROUNDS;                                                     // 0x0028   (0x0004)  
	bool                                               encryptionWSet;                                             // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x13];                                      // 0x002D   (0x0013)  MISSED
	bool                                               decryptionWSet;                                             // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_7[0x17];                                      // 0x0041   (0x0017)  MISSED
};

/// Class /Script/LowEntryEncryption.LowEntryEncryptionAesKey1D
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class ULowEntryEncryptionAesKey1D : public UObject
{ 
public:
	int32_t                                            ROUNDS;                                                     // 0x0028   (0x0004)  
	bool                                               encryptionWSet;                                             // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
	TArray<int32_t>                                    encryptionW;                                                // 0x0030   (0x0010)  
	bool                                               decryptionWSet;                                             // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	TArray<int32_t>                                    decryptionW;                                                // 0x0048   (0x0010)  
};

/// Class /Script/LowEntryEncryption.LowEntryEncryptionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULowEntryEncryptionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/LowEntryEncryption.LowEntryEncryptionLibrary.VerifySignatureRsa
	// bool VerifySignatureRsa(TArray<char>& Signature, TArray<char>& ExpectedHash, class ULowEntryRsaPublicKey* PublicKey);    // [0xd2dbe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryEncryption.LowEntryEncryptionLibrary.SignRsa
	// TArray<char> SignRsa(TArray<char>& Hash, class ULowEntryRsaPrivateKey* PrivateKey);                                      // [0xd2daa0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryEncryption.LowEntryEncryptionLibrary.RsaPublicKeyToBytes
	// TArray<char> RsaPublicKeyToBytes(class ULowEntryRsaPublicKey* PublicKey);                                                // [0xd2d9d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryEncryption.LowEntryEncryptionLibrary.RsaPrivateKeyToBytes
	// TArray<char> RsaPrivateKeyToBytes(class ULowEntryRsaPrivateKey* PrivateKey);                                             // [0xd2d900] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryEncryption.LowEntryEncryptionLibrary.GenerateSecureRandomBytesRandomLength
	// TArray<char> GenerateSecureRandomBytesRandomLength(int32_t MinLength, int32_t MaxLength);                                // [0xd2d7f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryEncryption.LowEntryEncryptionLibrary.GenerateSecureRandomBytes
	// TArray<char> GenerateSecureRandomBytes(int32_t Length);                                                                  // [0xd2d720] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryEncryption.LowEntryEncryptionLibrary.GenerateKeysRsa
	// void GenerateKeysRsa(class ULowEntryRsaPublicKey*& PublicKey, class ULowEntryRsaPrivateKey*& PrivateKey, int32_t Bits);  // [0xd2d600] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryEncryption.LowEntryEncryptionLibrary.EncryptRsa
	// TArray<char> EncryptRsa(TArray<char>& Data, class ULowEntryRsaPublicKey* PublicKey);                                     // [0xd2d4c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryEncryption.LowEntryEncryptionLibrary.EncryptAes
	// TArray<char> EncryptAes(TArray<char>& Data, TArray<char>& Key, bool AddHash);                                            // [0xd2d320] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryEncryption.LowEntryEncryptionLibrary.DecryptRsa
	// TArray<char> DecryptRsa(TArray<char>& EncryptedData, class ULowEntryRsaPrivateKey* PrivateKey);                          // [0xd2d1e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryEncryption.LowEntryEncryptionLibrary.DecryptAes
	// TArray<char> DecryptAes(TArray<char>& EncryptedData, TArray<char>& Key, bool AddedHash);                                 // [0xd2d040] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LowEntryEncryption.LowEntryEncryptionLibrary.BytesToRsaPublicKey
	// void BytesToRsaPublicKey(bool& success, class ULowEntryRsaPublicKey*& PublicKey, TArray<char>& ByteArray, int32_t Index, int32_t Length); // [0xd2ce60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LowEntryEncryption.LowEntryEncryptionLibrary.BytesToRsaPrivateKey
	// void BytesToRsaPrivateKey(bool& success, class ULowEntryRsaPrivateKey*& PrivateKey, TArray<char>& ByteArray, int32_t Index, int32_t Length); // [0xd2cc80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LowEntryEncryption.LowEntryRsaKeys
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class ULowEntryRsaKeys : public UObject
{ 
public:
	class ULowEntryRsaPublicKey*                       PublicKey;                                                  // 0x0028   (0x0008)  
	class ULowEntryRsaPrivateKey*                      PrivateKey;                                                 // 0x0030   (0x0008)  
};

/// Class /Script/LowEntryEncryption.LowEntryRsaPrivateKey
/// Size: 0x0098 (152 bytes) (0x000028 - 0x000098) align 8 MaxSize: 0x0098
class ULowEntryRsaPrivateKey : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0028   (0x0070)  MISSED
};

/// Class /Script/LowEntryEncryption.LowEntryRsaPublicKey
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class ULowEntryRsaPublicKey : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(ULowEntryEncryptionAesFastEngine) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(ULowEntryEncryptionAesFastEngine1D) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(ULowEntryEncryptionAesKey) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(ULowEntryEncryptionAesKey1D) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(ULowEntryEncryptionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULowEntryRsaKeys) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(ULowEntryRsaPrivateKey) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(ULowEntryRsaPublicKey) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(offsetof(ULowEntryEncryptionAesFastEngine1D, EW) == 0x0030);
static_assert(offsetof(ULowEntryEncryptionAesFastEngine1D, DW) == 0x0040);
static_assert(offsetof(ULowEntryEncryptionAesKey1D, encryptionW) == 0x0030);
static_assert(offsetof(ULowEntryEncryptionAesKey1D, decryptionW) == 0x0048);
static_assert(offsetof(ULowEntryRsaKeys, PublicKey) == 0x0028);
static_assert(offsetof(ULowEntryRsaKeys, PrivateKey) == 0x0030);
