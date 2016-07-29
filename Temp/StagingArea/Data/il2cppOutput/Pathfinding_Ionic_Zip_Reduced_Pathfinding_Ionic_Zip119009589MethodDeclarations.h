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

// Pathfinding.Ionic.Zip.ZipCipherStream
struct ZipCipherStream_t119009589;
// System.IO.Stream
struct Stream_t219029575;
// Pathfinding.Ionic.Zip.ZipCrypto
struct ZipCrypto_t2077278539;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi2077278539.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip585481293.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.Void Pathfinding.Ionic.Zip.ZipCipherStream::.ctor(System.IO.Stream,Pathfinding.Ionic.Zip.ZipCrypto,Pathfinding.Ionic.Zip.CryptoMode)
extern "C"  void ZipCipherStream__ctor_m2923854054 (ZipCipherStream_t119009589 * __this, Stream_t219029575 * ___s0, ZipCrypto_t2077278539 * ___cipher1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipCipherStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ZipCipherStream_Read_m514646828 (ZipCipherStream_t119009589 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipCipherStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void ZipCipherStream_Write_m1999049175 (ZipCipherStream_t119009589 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipCipherStream::get_CanRead()
extern "C"  bool ZipCipherStream_get_CanRead_m2767311358 (ZipCipherStream_t119009589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipCipherStream::get_CanSeek()
extern "C"  bool ZipCipherStream_get_CanSeek_m2796066400 (ZipCipherStream_t119009589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipCipherStream::get_CanWrite()
extern "C"  bool ZipCipherStream_get_CanWrite_m409959705 (ZipCipherStream_t119009589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipCipherStream::Flush()
extern "C"  void ZipCipherStream_Flush_m1665683383 (ZipCipherStream_t119009589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipCipherStream::get_Length()
extern "C"  int64_t ZipCipherStream_get_Length_m3374335125 (ZipCipherStream_t119009589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipCipherStream::get_Position()
extern "C"  int64_t ZipCipherStream_get_Position_m257247896 (ZipCipherStream_t119009589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipCipherStream::set_Position(System.Int64)
extern "C"  void ZipCipherStream_set_Position_m3550141511 (ZipCipherStream_t119009589 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipCipherStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t ZipCipherStream_Seek_m627429935 (ZipCipherStream_t119009589 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipCipherStream::SetLength(System.Int64)
extern "C"  void ZipCipherStream_SetLength_m3561587949 (ZipCipherStream_t119009589 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
