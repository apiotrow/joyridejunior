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

// Pathfinding.Ionic.Zlib.GZipStream
struct GZipStream_t1326187765;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.Void Pathfinding.Ionic.Zlib.GZipStream::.cctor()
extern "C"  void GZipStream__cctor_m2843426038 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zlib.GZipStream::get_Comment()
extern "C"  String_t* GZipStream_get_Comment_m1154306062 (GZipStream_t1326187765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.GZipStream::set_Comment(System.String)
extern "C"  void GZipStream_set_Comment_m1682475435 (GZipStream_t1326187765 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zlib.GZipStream::get_FileName()
extern "C"  String_t* GZipStream_get_FileName_m2165469882 (GZipStream_t1326187765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.GZipStream::set_FileName(System.String)
extern "C"  void GZipStream_set_FileName_m1530017137 (GZipStream_t1326187765 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.GZipStream::Dispose(System.Boolean)
extern "C"  void GZipStream_Dispose_m4156728971 (GZipStream_t1326187765 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.GZipStream::get_CanRead()
extern "C"  bool GZipStream_get_CanRead_m282841216 (GZipStream_t1326187765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.GZipStream::get_CanSeek()
extern "C"  bool GZipStream_get_CanSeek_m311596258 (GZipStream_t1326187765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.GZipStream::get_CanWrite()
extern "C"  bool GZipStream_get_CanWrite_m700796631 (GZipStream_t1326187765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.GZipStream::Flush()
extern "C"  void GZipStream_Flush_m4209094841 (GZipStream_t1326187765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zlib.GZipStream::get_Length()
extern "C"  int64_t GZipStream_get_Length_m41367635 (GZipStream_t1326187765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zlib.GZipStream::get_Position()
extern "C"  int64_t GZipStream_get_Position_m1321092822 (GZipStream_t1326187765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.GZipStream::set_Position(System.Int64)
extern "C"  void GZipStream_set_Position_m484411397 (GZipStream_t1326187765 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.GZipStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t GZipStream_Read_m4023727790 (GZipStream_t1326187765 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zlib.GZipStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t GZipStream_Seek_m3950147505 (GZipStream_t1326187765 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.GZipStream::SetLength(System.Int64)
extern "C"  void GZipStream_SetLength_m408199663 (GZipStream_t1326187765 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.GZipStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void GZipStream_Write_m4226708117 (GZipStream_t1326187765 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.GZipStream::EmitHeader()
extern "C"  int32_t GZipStream_EmitHeader_m3297069573 (GZipStream_t1326187765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
