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

// Pathfinding.Ionic.Zip.ZipOutputStream
struct ZipOutputStream_t3108803499;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t180559927;
// System.IO.Stream
struct Stream_t219029575;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zli211972692.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi3233959165.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi2418825471.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.String Pathfinding.Ionic.Zip.ZipOutputStream::ToString()
extern "C"  String_t* ZipOutputStream_ToString_m3225910510 (ZipOutputStream_t3108803499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipOutputStream::get_CodecBufferSize()
extern "C"  int32_t ZipOutputStream_get_CodecBufferSize_m1221895859 (ZipOutputStream_t3108803499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zip.ZipOutputStream::get_Strategy()
extern "C"  int32_t ZipOutputStream_get_Strategy_m2200970422 (ZipOutputStream_t3108803499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipOutputStream::get_Comment()
extern "C"  String_t* ZipOutputStream_get_Comment_m1558917590 (ZipOutputStream_t3108803499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.Zip64Option Pathfinding.Ionic.Zip.ZipOutputStream::get_EnableZip64()
extern "C"  int32_t ZipOutputStream_get_EnableZip64_m987020850 (ZipOutputStream_t3108803499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipOutputStream::get_AlternateEncoding()
extern "C"  Encoding_t180559927 * ZipOutputStream_get_AlternateEncoding_m3758491907 (ZipOutputStream_t3108803499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipOutputStream::get_AlternateEncodingUsage()
extern "C"  int32_t ZipOutputStream_get_AlternateEncodingUsage_m3888870146 (ZipOutputStream_t3108803499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipOutputStream::get_DefaultEncoding()
extern "C"  Encoding_t180559927 * ZipOutputStream_get_DefaultEncoding_m3902677834 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipOutputStream::get_ParallelDeflateThreshold()
extern "C"  int64_t ZipOutputStream_get_ParallelDeflateThreshold_m1729393932 (ZipOutputStream_t3108803499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipOutputStream::get_ParallelDeflateMaxBufferPairs()
extern "C"  int32_t ZipOutputStream_get_ParallelDeflateMaxBufferPairs_m3264544661 (ZipOutputStream_t3108803499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.ZipOutputStream::get_OutputStream()
extern "C"  Stream_t219029575 * ZipOutputStream_get_OutputStream_m1215484705 (ZipOutputStream_t3108803499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipOutputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void ZipOutputStream_Write_m1312600141 (ZipOutputStream_t3108803499 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipOutputStream::_InitiateCurrentEntry(System.Boolean)
extern "C"  void ZipOutputStream__InitiateCurrentEntry_m1723886469 (ZipOutputStream_t3108803499 * __this, bool ___finishing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipOutputStream::_FinishCurrentEntry()
extern "C"  void ZipOutputStream__FinishCurrentEntry_m393682376 (ZipOutputStream_t3108803499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipOutputStream::Dispose(System.Boolean)
extern "C"  void ZipOutputStream_Dispose_m2227795923 (ZipOutputStream_t3108803499 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipOutputStream::get_CanRead()
extern "C"  bool ZipOutputStream_get_CanRead_m199308488 (ZipOutputStream_t3108803499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipOutputStream::get_CanSeek()
extern "C"  bool ZipOutputStream_get_CanSeek_m228063530 (ZipOutputStream_t3108803499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipOutputStream::get_CanWrite()
extern "C"  bool ZipOutputStream_get_CanWrite_m2406249359 (ZipOutputStream_t3108803499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipOutputStream::get_Length()
extern "C"  int64_t ZipOutputStream_get_Length_m3568590987 (ZipOutputStream_t3108803499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipOutputStream::get_Position()
extern "C"  int64_t ZipOutputStream_get_Position_m2253537550 (ZipOutputStream_t3108803499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipOutputStream::set_Position(System.Int64)
extern "C"  void ZipOutputStream_set_Position_m2302398909 (ZipOutputStream_t3108803499 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipOutputStream::Flush()
extern "C"  void ZipOutputStream_Flush_m4278456833 (ZipOutputStream_t3108803499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipOutputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ZipOutputStream_Read_m3956186614 (ZipOutputStream_t3108803499 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipOutputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t ZipOutputStream_Seek_m4059425913 (ZipOutputStream_t3108803499 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipOutputStream::SetLength(System.Int64)
extern "C"  void ZipOutputStream_SetLength_m2774233911 (ZipOutputStream_t3108803499 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
