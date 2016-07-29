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

// Pathfinding.Ionic.Zip.ZipSegmentedStream
struct ZipSegmentedStream_t2657727002;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t219029575;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::.ctor()
extern "C"  void ZipSegmentedStream__ctor_m3870548308 (ZipSegmentedStream_t2657727002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipSegmentedStream Pathfinding.Ionic.Zip.ZipSegmentedStream::ForReading(System.String,System.UInt32,System.UInt32)
extern "C"  ZipSegmentedStream_t2657727002 * ZipSegmentedStream_ForReading_m2273044788 (Il2CppObject * __this /* static, unused */, String_t* ___name0, uint32_t ___initialDiskNumber1, uint32_t ___maxDiskNumber2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipSegmentedStream Pathfinding.Ionic.Zip.ZipSegmentedStream::ForWriting(System.String,System.Int32)
extern "C"  ZipSegmentedStream_t2657727002 * ZipSegmentedStream_ForWriting_m1365618907 (Il2CppObject * __this /* static, unused */, String_t* ___name0, int32_t ___maxSegmentSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.ZipSegmentedStream::ForUpdate(System.String,System.UInt32)
extern "C"  Stream_t219029575 * ZipSegmentedStream_ForUpdate_m3652690848 (Il2CppObject * __this /* static, unused */, String_t* ___name0, uint32_t ___diskNumber1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipSegmentedStream::get_ContiguousWrite()
extern "C"  bool ZipSegmentedStream_get_ContiguousWrite_m4223565906 (ZipSegmentedStream_t2657727002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::set_ContiguousWrite(System.Boolean)
extern "C"  void ZipSegmentedStream_set_ContiguousWrite_m1440684803 (ZipSegmentedStream_t2657727002 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.Ionic.Zip.ZipSegmentedStream::get_CurrentSegment()
extern "C"  uint32_t ZipSegmentedStream_get_CurrentSegment_m131326990 (ZipSegmentedStream_t2657727002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::set_CurrentSegment(System.UInt32)
extern "C"  void ZipSegmentedStream_set_CurrentSegment_m565612019 (ZipSegmentedStream_t2657727002 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipSegmentedStream::get_CurrentName()
extern "C"  String_t* ZipSegmentedStream_get_CurrentName_m4210920298 (ZipSegmentedStream_t2657727002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipSegmentedStream::get_CurrentTempName()
extern "C"  String_t* ZipSegmentedStream_get_CurrentTempName_m1977945438 (ZipSegmentedStream_t2657727002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipSegmentedStream::_NameForSegment(System.UInt32)
extern "C"  String_t* ZipSegmentedStream__NameForSegment_m3598552951 (ZipSegmentedStream_t2657727002 * __this, uint32_t ___diskNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.Ionic.Zip.ZipSegmentedStream::ComputeSegment(System.Int32)
extern "C"  uint32_t ZipSegmentedStream_ComputeSegment_m159370520 (ZipSegmentedStream_t2657727002 * __this, int32_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipSegmentedStream::ToString()
extern "C"  String_t* ZipSegmentedStream_ToString_m1008281407 (ZipSegmentedStream_t2657727002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::_SetReadStream()
extern "C"  void ZipSegmentedStream__SetReadStream_m4037501161 (ZipSegmentedStream_t2657727002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipSegmentedStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ZipSegmentedStream_Read_m3836693915 (ZipSegmentedStream_t2657727002 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::_SetWriteStream(System.UInt32)
extern "C"  void ZipSegmentedStream__SetWriteStream_m2320172204 (ZipSegmentedStream_t2657727002 * __this, uint32_t ___increment0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void ZipSegmentedStream_Write_m2231453752 (ZipSegmentedStream_t2657727002 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipSegmentedStream::TruncateBackward(System.UInt32,System.Int64)
extern "C"  int64_t ZipSegmentedStream_TruncateBackward_m2641168448 (ZipSegmentedStream_t2657727002 * __this, uint32_t ___diskNumber0, int64_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipSegmentedStream::get_CanRead()
extern "C"  bool ZipSegmentedStream_get_CanRead_m2926721505 (ZipSegmentedStream_t2657727002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipSegmentedStream::get_CanSeek()
extern "C"  bool ZipSegmentedStream_get_CanSeek_m2955476547 (ZipSegmentedStream_t2657727002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipSegmentedStream::get_CanWrite()
extern "C"  bool ZipSegmentedStream_get_CanWrite_m1056706966 (ZipSegmentedStream_t2657727002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::Flush()
extern "C"  void ZipSegmentedStream_Flush_m3954495606 (ZipSegmentedStream_t2657727002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipSegmentedStream::get_Length()
extern "C"  int64_t ZipSegmentedStream_get_Length_m1798518312 (ZipSegmentedStream_t2657727002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipSegmentedStream::get_Position()
extern "C"  int64_t ZipSegmentedStream_get_Position_m2020746091 (ZipSegmentedStream_t2657727002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::set_Position(System.Int64)
extern "C"  void ZipSegmentedStream_set_Position_m2023574824 (ZipSegmentedStream_t2657727002 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipSegmentedStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t ZipSegmentedStream_Seek_m3624631484 (ZipSegmentedStream_t2657727002 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::SetLength(System.Int64)
extern "C"  void ZipSegmentedStream_SetLength_m577939372 (ZipSegmentedStream_t2657727002 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::Dispose(System.Boolean)
extern "C"  void ZipSegmentedStream_Dispose_m31501384 (ZipSegmentedStream_t2657727002 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
