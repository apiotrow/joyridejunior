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

// Pathfinding.Ionic.Zlib.ZlibBaseStream
struct ZlibBaseStream_t2399924087;
// System.IO.Stream
struct Stream_t219029575;
// Pathfinding.Ionic.Zlib.ZlibCodec
struct ZlibCodec_t1793744486;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl3811158916.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl1823839577.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl3760332100.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::.ctor(System.IO.Stream,Pathfinding.Ionic.Zlib.CompressionMode,Pathfinding.Ionic.Zlib.CompressionLevel,Pathfinding.Ionic.Zlib.ZlibStreamFlavor,System.Boolean)
extern "C"  void ZlibBaseStream__ctor_m1696629768 (ZlibBaseStream_t2399924087 * __this, Stream_t219029575 * ___stream0, int32_t ___compressionMode1, int32_t ___level2, int32_t ___flavor3, bool ___leaveOpen4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.ZlibBaseStream::get_Crc32()
extern "C"  int32_t ZlibBaseStream_get_Crc32_m61828101 (ZlibBaseStream_t2399924087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.ZlibBaseStream::get__wantCompress()
extern "C"  bool ZlibBaseStream_get__wantCompress_m2988113353 (ZlibBaseStream_t2399924087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.ZlibCodec Pathfinding.Ionic.Zlib.ZlibBaseStream::get_z()
extern "C"  ZlibCodec_t1793744486 * ZlibBaseStream_get_z_m1784805437 (ZlibBaseStream_t2399924087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Ionic.Zlib.ZlibBaseStream::get_workingBuffer()
extern "C"  ByteU5BU5D_t58506160* ZlibBaseStream_get_workingBuffer_m1316753893 (ZlibBaseStream_t2399924087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void ZlibBaseStream_Write_m3634743319 (ZlibBaseStream_t2399924087 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::finish()
extern "C"  void ZlibBaseStream_finish_m1530466434 (ZlibBaseStream_t2399924087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::end()
extern "C"  void ZlibBaseStream_end_m3229825582 (ZlibBaseStream_t2399924087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::Close()
extern "C"  void ZlibBaseStream_Close_m2740836203 (ZlibBaseStream_t2399924087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::Flush()
extern "C"  void ZlibBaseStream_Flush_m1113923959 (ZlibBaseStream_t2399924087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zlib.ZlibBaseStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t ZlibBaseStream_Seek_m382444527 (ZlibBaseStream_t2399924087 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::SetLength(System.Int64)
extern "C"  void ZlibBaseStream_SetLength_m688576173 (ZlibBaseStream_t2399924087 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zlib.ZlibBaseStream::ReadZeroTerminatedString()
extern "C"  String_t* ZlibBaseStream_ReadZeroTerminatedString_m3325887838 (ZlibBaseStream_t2399924087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.ZlibBaseStream::_ReadAndValidateGzipHeader()
extern "C"  int32_t ZlibBaseStream__ReadAndValidateGzipHeader_m1523628230 (ZlibBaseStream_t2399924087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.ZlibBaseStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ZlibBaseStream_Read_m1398695148 (ZlibBaseStream_t2399924087 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.ZlibBaseStream::get_CanRead()
extern "C"  bool ZlibBaseStream_get_CanRead_m1645892542 (ZlibBaseStream_t2399924087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.ZlibBaseStream::get_CanSeek()
extern "C"  bool ZlibBaseStream_get_CanSeek_m1674647584 (ZlibBaseStream_t2399924087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.ZlibBaseStream::get_CanWrite()
extern "C"  bool ZlibBaseStream_get_CanWrite_m5714777 (ZlibBaseStream_t2399924087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zlib.ZlibBaseStream::get_Length()
extern "C"  int64_t ZlibBaseStream_get_Length_m3892349653 (ZlibBaseStream_t2399924087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zlib.ZlibBaseStream::get_Position()
extern "C"  int64_t ZlibBaseStream_get_Position_m4147970264 (ZlibBaseStream_t2399924087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::set_Position(System.Int64)
extern "C"  void ZlibBaseStream_set_Position_m3764597383 (ZlibBaseStream_t2399924087 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
