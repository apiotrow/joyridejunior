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

// Pathfinding.Ionic.Zip.OffsetStream
struct OffsetStream_t1311671356;
// System.IO.Stream
struct Stream_t219029575;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.Void Pathfinding.Ionic.Zip.OffsetStream::.ctor(System.IO.Stream)
extern "C"  void OffsetStream__ctor_m1511971209 (OffsetStream_t1311671356 * __this, Stream_t219029575 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.OffsetStream::System.IDisposable.Dispose()
extern "C"  void OffsetStream_System_IDisposable_Dispose_m3779806189 (OffsetStream_t1311671356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.OffsetStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t OffsetStream_Read_m2834552505 (OffsetStream_t1311671356 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.OffsetStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void OffsetStream_Write_m3464723674 (OffsetStream_t1311671356 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.OffsetStream::get_CanRead()
extern "C"  bool OffsetStream_get_CanRead_m2416584319 (OffsetStream_t1311671356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.OffsetStream::get_CanSeek()
extern "C"  bool OffsetStream_get_CanSeek_m2445339361 (OffsetStream_t1311671356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.OffsetStream::get_CanWrite()
extern "C"  bool OffsetStream_get_CanWrite_m2422323384 (OffsetStream_t1311671356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.OffsetStream::Flush()
extern "C"  void OffsetStream_Flush_m232236564 (OffsetStream_t1311671356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.OffsetStream::get_Length()
extern "C"  int64_t OffsetStream_get_Length_m1580924426 (OffsetStream_t1311671356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.OffsetStream::get_Position()
extern "C"  int64_t OffsetStream_get_Position_m3366419149 (OffsetStream_t1311671356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.OffsetStream::set_Position(System.Int64)
extern "C"  void OffsetStream_set_Position_m746235594 (OffsetStream_t1311671356 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.OffsetStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t OffsetStream_Seek_m1307039642 (OffsetStream_t1311671356 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.OffsetStream::SetLength(System.Int64)
extern "C"  void OffsetStream_SetLength_m3743580490 (OffsetStream_t1311671356 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.OffsetStream::Close()
extern "C"  void OffsetStream_Close_m1859148808 (OffsetStream_t1311671356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
