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

// Pathfinding.Ionic.Zip.CountingStream
struct CountingStream_t706717724;
// System.IO.Stream
struct Stream_t219029575;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.Void Pathfinding.Ionic.Zip.CountingStream::.ctor(System.IO.Stream)
extern "C"  void CountingStream__ctor_m1477480745 (CountingStream_t706717724 * __this, Stream_t219029575 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.CountingStream::get_WrappedStream()
extern "C"  Stream_t219029575 * CountingStream_get_WrappedStream_m434619486 (CountingStream_t706717724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.CountingStream::get_BytesWritten()
extern "C"  int64_t CountingStream_get_BytesWritten_m4236932016 (CountingStream_t706717724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.CountingStream::get_BytesRead()
extern "C"  int64_t CountingStream_get_BytesRead_m193337535 (CountingStream_t706717724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.CountingStream::Adjust(System.Int64)
extern "C"  void CountingStream_Adjust_m22225747 (CountingStream_t706717724 * __this, int64_t ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.CountingStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t CountingStream_Read_m62715993 (CountingStream_t706717724 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.CountingStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void CountingStream_Write_m1334653242 (CountingStream_t706717724 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.CountingStream::get_CanRead()
extern "C"  bool CountingStream_get_CanRead_m558913951 (CountingStream_t706717724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.CountingStream::get_CanSeek()
extern "C"  bool CountingStream_get_CanSeek_m587668993 (CountingStream_t706717724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.CountingStream::get_CanWrite()
extern "C"  bool CountingStream_get_CanWrite_m669116824 (CountingStream_t706717724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.CountingStream::Flush()
extern "C"  void CountingStream_Flush_m1684839860 (CountingStream_t706717724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.CountingStream::get_Length()
extern "C"  int64_t CountingStream_get_Length_m2963622954 (CountingStream_t706717724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.CountingStream::get_ComputedPosition()
extern "C"  int64_t CountingStream_get_ComputedPosition_m3167796442 (CountingStream_t706717724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.CountingStream::get_Position()
extern "C"  int64_t CountingStream_get_Position_m699842797 (CountingStream_t706717724 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.CountingStream::set_Position(System.Int64)
extern "C"  void CountingStream_set_Position_m4032973610 (CountingStream_t706717724 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.CountingStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t CountingStream_Seek_m2476586362 (CountingStream_t706717724 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.CountingStream::SetLength(System.Int64)
extern "C"  void CountingStream_SetLength_m3709090026 (CountingStream_t706717724 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
