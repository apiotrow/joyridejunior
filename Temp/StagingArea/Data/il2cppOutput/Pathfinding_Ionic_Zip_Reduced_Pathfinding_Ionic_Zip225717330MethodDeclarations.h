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

// Pathfinding.Ionic.Zip.ZipInputStream
struct ZipInputStream_t225717330;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t219029575;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.String Pathfinding.Ionic.Zip.ZipInputStream::ToString()
extern "C"  String_t* ZipInputStream_ToString_m2639836663 (ZipInputStream_t225717330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipInputStream::get_CodecBufferSize()
extern "C"  int32_t ZipInputStream_get_CodecBufferSize_m1695111456 (ZipInputStream_t225717330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipInputStream::SetupStream()
extern "C"  void ZipInputStream_SetupStream_m3022331543 (ZipInputStream_t225717330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.ZipInputStream::get_ReadStream()
extern "C"  Stream_t219029575 * ZipInputStream_get_ReadStream_m1736232373 (ZipInputStream_t225717330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ZipInputStream_Read_m2317228387 (ZipInputStream_t225717330 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipInputStream::Dispose(System.Boolean)
extern "C"  void ZipInputStream_Dispose_m4066492944 (ZipInputStream_t225717330 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipInputStream::get_CanRead()
extern "C"  bool ZipInputStream_get_CanRead_m1990730409 (ZipInputStream_t225717330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipInputStream::get_CanSeek()
extern "C"  bool ZipInputStream_get_CanSeek_m2019485451 (ZipInputStream_t225717330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipInputStream::get_CanWrite()
extern "C"  bool ZipInputStream_get_CanWrite_m2105754062 (ZipInputStream_t225717330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipInputStream::get_Length()
extern "C"  int64_t ZipInputStream_get_Length_m1208695264 (ZipInputStream_t225717330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipInputStream::get_Position()
extern "C"  int64_t ZipInputStream_get_Position_m2136480035 (ZipInputStream_t225717330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipInputStream::set_Position(System.Int64)
extern "C"  void ZipInputStream_set_Position_m912458336 (ZipInputStream_t225717330 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipInputStream::Flush()
extern "C"  void ZipInputStream_Flush_m1701475902 (ZipInputStream_t225717330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipInputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void ZipInputStream_Write_m2505060720 (ZipInputStream_t225717330 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipInputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t ZipInputStream_Seek_m1032250884 (ZipInputStream_t225717330 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipInputStream::SetLength(System.Int64)
extern "C"  void ZipInputStream_SetLength_m317963636 (ZipInputStream_t225717330 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
