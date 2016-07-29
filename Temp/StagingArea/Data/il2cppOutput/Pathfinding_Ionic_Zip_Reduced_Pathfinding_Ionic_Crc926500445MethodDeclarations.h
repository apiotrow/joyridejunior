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

// Pathfinding.Ionic.Crc.CRC32
struct CRC32_t926500445;
// System.IO.Stream
struct Stream_t219029575;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.UInt32[]
struct UInt32U5BU5D_t2133601851;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"

// System.Void Pathfinding.Ionic.Crc.CRC32::.ctor()
extern "C"  void CRC32__ctor_m84834011 (CRC32_t926500445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CRC32::.ctor(System.Boolean)
extern "C"  void CRC32__ctor_m413307154 (CRC32_t926500445 * __this, bool ___reverseBits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CRC32::.ctor(System.Int32,System.Boolean)
extern "C"  void CRC32__ctor_m2290240081 (CRC32_t926500445 * __this, int32_t ___polynomial0, bool ___reverseBits1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Crc.CRC32::get_TotalBytesRead()
extern "C"  int64_t CRC32_get_TotalBytesRead_m3862663142 (CRC32_t926500445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Crc.CRC32::get_Crc32Result()
extern "C"  int32_t CRC32_get_Crc32Result_m1195487496 (CRC32_t926500445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Crc.CRC32::GetCrc32(System.IO.Stream)
extern "C"  int32_t CRC32_GetCrc32_m647486933 (CRC32_t926500445 * __this, Stream_t219029575 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Crc.CRC32::GetCrc32AndCopy(System.IO.Stream,System.IO.Stream)
extern "C"  int32_t CRC32_GetCrc32AndCopy_m3249904758 (CRC32_t926500445 * __this, Stream_t219029575 * ___input0, Stream_t219029575 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Crc.CRC32::ComputeCrc32(System.Int32,System.Byte)
extern "C"  int32_t CRC32_ComputeCrc32_m884727603 (CRC32_t926500445 * __this, int32_t ___W0, uint8_t ___B1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Crc.CRC32::_InternalComputeCrc32(System.UInt32,System.Byte)
extern "C"  int32_t CRC32__InternalComputeCrc32_m3862360198 (CRC32_t926500445 * __this, uint32_t ___W0, uint8_t ___B1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CRC32::SlurpBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  void CRC32_SlurpBlock_m1735048173 (CRC32_t926500445 * __this, ByteU5BU5D_t58506160* ___block0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.Ionic.Crc.CRC32::ReverseBits(System.UInt32)
extern "C"  uint32_t CRC32_ReverseBits_m303921630 (Il2CppObject * __this /* static, unused */, uint32_t ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Pathfinding.Ionic.Crc.CRC32::ReverseBits(System.Byte)
extern "C"  uint8_t CRC32_ReverseBits_m1417466430 (Il2CppObject * __this /* static, unused */, uint8_t ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CRC32::GenerateLookupTable()
extern "C"  void CRC32_GenerateLookupTable_m1430084600 (CRC32_t926500445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.Ionic.Crc.CRC32::gf2_matrix_times(System.UInt32[],System.UInt32)
extern "C"  uint32_t CRC32_gf2_matrix_times_m3134878986 (CRC32_t926500445 * __this, UInt32U5BU5D_t2133601851* ___matrix0, uint32_t ___vec1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CRC32::gf2_matrix_square(System.UInt32[],System.UInt32[])
extern "C"  void CRC32_gf2_matrix_square_m1752627522 (CRC32_t926500445 * __this, UInt32U5BU5D_t2133601851* ___square0, UInt32U5BU5D_t2133601851* ___mat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CRC32::Combine(System.Int32,System.Int32)
extern "C"  void CRC32_Combine_m2729083566 (CRC32_t926500445 * __this, int32_t ___crc0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
