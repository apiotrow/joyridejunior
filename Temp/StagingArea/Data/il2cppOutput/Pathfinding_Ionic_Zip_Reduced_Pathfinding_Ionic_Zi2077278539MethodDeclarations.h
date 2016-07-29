#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Pathfinding.Ionic.Zip.ZipCrypto
struct ZipCrypto_t2077278539;
// System.String
struct String_t;
// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t495942682;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip495942682.h"

// System.Void Pathfinding.Ionic.Zip.ZipCrypto::.ctor()
extern "C"  void ZipCrypto__ctor_m593844159 (ZipCrypto_t2077278539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipCrypto Pathfinding.Ionic.Zip.ZipCrypto::ForWrite(System.String)
extern "C"  ZipCrypto_t2077278539 * ZipCrypto_ForWrite_m936760155 (Il2CppObject * __this /* static, unused */, String_t* ___password0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipCrypto Pathfinding.Ionic.Zip.ZipCrypto::ForRead(System.String,Pathfinding.Ionic.Zip.ZipEntry)
extern "C"  ZipCrypto_t2077278539 * ZipCrypto_ForRead_m1751313696 (Il2CppObject * __this /* static, unused */, String_t* ___password0, ZipEntry_t495942682 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Pathfinding.Ionic.Zip.ZipCrypto::get_MagicByte()
extern "C"  uint8_t ZipCrypto_get_MagicByte_m66053013 (ZipCrypto_t2077278539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Ionic.Zip.ZipCrypto::DecryptMessage(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t58506160* ZipCrypto_DecryptMessage_m259264099 (ZipCrypto_t2077278539 * __this, ByteU5BU5D_t58506160* ___cipherText0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Ionic.Zip.ZipCrypto::EncryptMessage(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t58506160* ZipCrypto_EncryptMessage_m142263947 (ZipCrypto_t2077278539 * __this, ByteU5BU5D_t58506160* ___plainText0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipCrypto::InitCipher(System.String)
extern "C"  void ZipCrypto_InitCipher_m1003557858 (ZipCrypto_t2077278539 * __this, String_t* ___passphrase0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipCrypto::UpdateKeys(System.Byte)
extern "C"  void ZipCrypto_UpdateKeys_m1248860265 (ZipCrypto_t2077278539 * __this, uint8_t ___byteValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
