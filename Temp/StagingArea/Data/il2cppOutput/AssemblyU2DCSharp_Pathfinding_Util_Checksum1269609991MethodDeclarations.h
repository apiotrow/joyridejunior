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

// Pathfinding.Util.Checksum
struct Checksum_t1269609991;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Util.Checksum::.ctor()
extern "C"  void Checksum__ctor_m2929793830 (Checksum_t1269609991 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Util.Checksum::.cctor()
extern "C"  void Checksum__cctor_m147199303 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.Util.Checksum::GetChecksum(System.Byte[])
extern "C"  uint32_t Checksum_GetChecksum_m1821741105 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___Value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.Util.Checksum::GetChecksum(System.Byte[],System.UInt32)
extern "C"  uint32_t Checksum_GetChecksum_m323608741 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___Value0, uint32_t ___CRCVal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
