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

// Pathfinding.Ionic.Crc.CrcCalculatorStream
struct CrcCalculatorStream_t2652117568;
// System.IO.Stream
struct Stream_t219029575;
// Pathfinding.Ionic.Crc.CRC32
struct CRC32_t926500445;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Crc926500445.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::.ctor(System.IO.Stream)
extern "C"  void CrcCalculatorStream__ctor_m3160078767 (CrcCalculatorStream_t2652117568 * __this, Stream_t219029575 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::.ctor(System.IO.Stream,System.Boolean)
extern "C"  void CrcCalculatorStream__ctor_m3811239406 (CrcCalculatorStream_t2652117568 * __this, Stream_t219029575 * ___stream0, bool ___leaveOpen1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::.ctor(System.IO.Stream,System.Int64)
extern "C"  void CrcCalculatorStream__ctor_m3032589065 (CrcCalculatorStream_t2652117568 * __this, Stream_t219029575 * ___stream0, int64_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::.ctor(System.Boolean,System.Int64,System.IO.Stream,Pathfinding.Ionic.Crc.CRC32)
extern "C"  void CrcCalculatorStream__ctor_m1260763133 (CrcCalculatorStream_t2652117568 * __this, bool ___leaveOpen0, int64_t ___length1, Stream_t219029575 * ___stream2, CRC32_t926500445 * ___crc323, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::.cctor()
extern "C"  void CrcCalculatorStream__cctor_m2148289429 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::System.IDisposable.Dispose()
extern "C"  void CrcCalculatorStream_System_IDisposable_Dispose_m1618692999 (CrcCalculatorStream_t2652117568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Crc.CrcCalculatorStream::get_TotalBytesSlurped()
extern "C"  int64_t CrcCalculatorStream_get_TotalBytesSlurped_m2560798376 (CrcCalculatorStream_t2652117568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Crc.CrcCalculatorStream::get_Crc()
extern "C"  int32_t CrcCalculatorStream_get_Crc_m1377705641 (CrcCalculatorStream_t2652117568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Crc.CrcCalculatorStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t CrcCalculatorStream_Read_m3389695855 (CrcCalculatorStream_t2652117568 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void CrcCalculatorStream_Write_m1121882612 (CrcCalculatorStream_t2652117568 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Crc.CrcCalculatorStream::get_CanRead()
extern "C"  bool CrcCalculatorStream_get_CanRead_m3342843713 (CrcCalculatorStream_t2652117568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Crc.CrcCalculatorStream::get_CanSeek()
extern "C"  bool CrcCalculatorStream_get_CanSeek_m3371598755 (CrcCalculatorStream_t2652117568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Crc.CrcCalculatorStream::get_CanWrite()
extern "C"  bool CrcCalculatorStream_get_CanWrite_m1071593526 (CrcCalculatorStream_t2652117568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::Flush()
extern "C"  void CrcCalculatorStream_Flush_m2662650426 (CrcCalculatorStream_t2652117568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Crc.CrcCalculatorStream::get_Length()
extern "C"  int64_t CrcCalculatorStream_get_Length_m513513586 (CrcCalculatorStream_t2652117568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Crc.CrcCalculatorStream::get_Position()
extern "C"  int64_t CrcCalculatorStream_get_Position_m4081785653 (CrcCalculatorStream_t2652117568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::set_Position(System.Int64)
extern "C"  void CrcCalculatorStream_set_Position_m3747335396 (CrcCalculatorStream_t2652117568 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Crc.CrcCalculatorStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t CrcCalculatorStream_Seek_m3840015410 (CrcCalculatorStream_t2652117568 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::SetLength(System.Int64)
extern "C"  void CrcCalculatorStream_SetLength_m1096720752 (CrcCalculatorStream_t2652117568 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::Close()
extern "C"  void CrcCalculatorStream_Close_m4289562670 (CrcCalculatorStream_t2652117568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
