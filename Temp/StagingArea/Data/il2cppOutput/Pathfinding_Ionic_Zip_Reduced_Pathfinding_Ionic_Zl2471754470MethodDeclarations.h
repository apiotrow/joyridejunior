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

// Pathfinding.Ionic.Zlib.DeflateStream
struct DeflateStream_t2471754470;
// System.IO.Stream
struct Stream_t219029575;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl3811158916.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl1823839577.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zli211972692.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.Void Pathfinding.Ionic.Zlib.DeflateStream::.ctor(System.IO.Stream,Pathfinding.Ionic.Zlib.CompressionMode,System.Boolean)
extern "C"  void DeflateStream__ctor_m1798983988 (DeflateStream_t2471754470 * __this, Stream_t219029575 * ___stream0, int32_t ___mode1, bool ___leaveOpen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::.ctor(System.IO.Stream,Pathfinding.Ionic.Zlib.CompressionMode,Pathfinding.Ionic.Zlib.CompressionLevel,System.Boolean)
extern "C"  void DeflateStream__ctor_m988269011 (DeflateStream_t2471754470 * __this, Stream_t219029575 * ___stream0, int32_t ___mode1, int32_t ___level2, bool ___leaveOpen3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::set_BufferSize(System.Int32)
extern "C"  void DeflateStream_set_BufferSize_m2796534153 (DeflateStream_t2471754470 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::set_Strategy(Pathfinding.Ionic.Zlib.CompressionStrategy)
extern "C"  void DeflateStream_set_Strategy_m3832524606 (DeflateStream_t2471754470 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::Dispose(System.Boolean)
extern "C"  void DeflateStream_Dispose_m3169047646 (DeflateStream_t2471754470 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.DeflateStream::get_CanRead()
extern "C"  bool DeflateStream_get_CanRead_m2124422775 (DeflateStream_t2471754470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.DeflateStream::get_CanSeek()
extern "C"  bool DeflateStream_get_CanSeek_m2153177817 (DeflateStream_t2471754470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.DeflateStream::get_CanWrite()
extern "C"  bool DeflateStream_get_CanWrite_m1955250112 (DeflateStream_t2471754470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::Flush()
extern "C"  void DeflateStream_Flush_m3603358860 (DeflateStream_t2471754470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zlib.DeflateStream::get_Length()
extern "C"  int64_t DeflateStream_get_Length_m2321386578 (DeflateStream_t2471754470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zlib.DeflateStream::get_Position()
extern "C"  int64_t DeflateStream_get_Position_m1985976085 (DeflateStream_t2471754470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::set_Position(System.Int64)
extern "C"  void DeflateStream_set_Position_m1291003218 (DeflateStream_t2471754470 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.DeflateStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t DeflateStream_Read_m3204668721 (DeflateStream_t2471754470 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zlib.DeflateStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t DeflateStream_Seek_m1231461458 (DeflateStream_t2471754470 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::SetLength(System.Int64)
extern "C"  void DeflateStream_SetLength_m3715485634 (DeflateStream_t2471754470 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void DeflateStream_Write_m4245907298 (DeflateStream_t2471754470 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
