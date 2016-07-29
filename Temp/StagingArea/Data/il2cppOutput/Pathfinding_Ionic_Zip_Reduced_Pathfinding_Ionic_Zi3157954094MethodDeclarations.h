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

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Text.Encoding
struct Encoding_t180559927;
// System.IO.Stream
struct Stream_t219029575;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Text_Encoding180559927.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_DateTime339033936.h"

// System.Void Pathfinding.Ionic.Zip.SharedUtilities::.cctor()
extern "C"  void SharedUtilities__cctor_m2951346033 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.SharedUtilities::GetFileLength(System.String)
extern "C"  int64_t SharedUtilities_GetFileLength_m3431229895 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.SharedUtilities::SimplifyFwdSlashPath(System.String)
extern "C"  String_t* SharedUtilities_SimplifyFwdSlashPath_m2662796325 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.SharedUtilities::NormalizePathForUseInZipFile(System.String)
extern "C"  String_t* SharedUtilities_NormalizePathForUseInZipFile_m3045007061 (Il2CppObject * __this /* static, unused */, String_t* ___pathName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Ionic.Zip.SharedUtilities::StringToByteArray(System.String,System.Text.Encoding)
extern "C"  ByteU5BU5D_t58506160* SharedUtilities_StringToByteArray_m371396600 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Encoding_t180559927 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Ionic.Zip.SharedUtilities::StringToByteArray(System.String)
extern "C"  ByteU5BU5D_t58506160* SharedUtilities_StringToByteArray_m2989235385 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.SharedUtilities::Utf8StringFromBuffer(System.Byte[])
extern "C"  String_t* SharedUtilities_Utf8StringFromBuffer_m866905048 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___buf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.SharedUtilities::StringFromBuffer(System.Byte[],System.Text.Encoding)
extern "C"  String_t* SharedUtilities_StringFromBuffer_m205135656 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___buf0, Encoding_t180559927 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.SharedUtilities::ReadSignature(System.IO.Stream)
extern "C"  int32_t SharedUtilities_ReadSignature_m2349591739 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.SharedUtilities::ReadEntrySignature(System.IO.Stream)
extern "C"  int32_t SharedUtilities_ReadEntrySignature_m851627763 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.SharedUtilities::ReadInt(System.IO.Stream)
extern "C"  int32_t SharedUtilities_ReadInt_m3108935794 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.SharedUtilities::_ReadFourBytes(System.IO.Stream,System.String)
extern "C"  int32_t SharedUtilities__ReadFourBytes_m3610431875 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___s0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.SharedUtilities::FindSignature(System.IO.Stream,System.Int32)
extern "C"  int64_t SharedUtilities_FindSignature_m313137150 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___stream0, int32_t ___SignatureToFind1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Pathfinding.Ionic.Zip.SharedUtilities::AdjustTime_Reverse(System.DateTime)
extern "C"  DateTime_t339033936  SharedUtilities_AdjustTime_Reverse_m123184362 (Il2CppObject * __this /* static, unused */, DateTime_t339033936  ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Pathfinding.Ionic.Zip.SharedUtilities::PackedToDateTime(System.Int32)
extern "C"  DateTime_t339033936  SharedUtilities_PackedToDateTime_m2812407406 (Il2CppObject * __this /* static, unused */, int32_t ___packedDateTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.SharedUtilities::DateTimeToPacked(System.DateTime)
extern "C"  int32_t SharedUtilities_DateTimeToPacked_m1720740074 (Il2CppObject * __this /* static, unused */, DateTime_t339033936  ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.SharedUtilities::CreateAndOpenUniqueTempFile(System.String,System.IO.Stream&,System.String&)
extern "C"  void SharedUtilities_CreateAndOpenUniqueTempFile_m1094360223 (Il2CppObject * __this /* static, unused */, String_t* ___dir0, Stream_t219029575 ** ___fs1, String_t** ___filename2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.SharedUtilities::InternalGetTempFileName()
extern "C"  String_t* SharedUtilities_InternalGetTempFileName_m3604317457 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.SharedUtilities::GenerateRandomStringImpl(System.Int32,System.Int32)
extern "C"  String_t* SharedUtilities_GenerateRandomStringImpl_m3055598360 (Il2CppObject * __this /* static, unused */, int32_t ___length0, int32_t ___delta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.SharedUtilities::ReadWithRetry(System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.String)
extern "C"  int32_t SharedUtilities_ReadWithRetry_m1980239076 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___s0, ByteU5BU5D_t58506160* ___buffer1, int32_t ___offset2, int32_t ___count3, String_t* ___FileName4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
