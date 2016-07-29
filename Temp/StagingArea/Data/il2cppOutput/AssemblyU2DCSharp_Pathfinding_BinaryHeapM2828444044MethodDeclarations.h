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

// Pathfinding.BinaryHeapM
struct BinaryHeapM_t2828444044;
// Pathfinding.PathNode
struct PathNode_t3993763123;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_PathNode3993763123.h"

// System.Void Pathfinding.BinaryHeapM::.ctor(System.Int32)
extern "C"  void BinaryHeapM__ctor_m2128179462 (BinaryHeapM_t2828444044 * __this, int32_t ___numberOfElements0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.BinaryHeapM::Clear()
extern "C"  void BinaryHeapM_Clear_m1615634272 (BinaryHeapM_t2828444044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.PathNode Pathfinding.BinaryHeapM::GetNode(System.Int32)
extern "C"  PathNode_t3993763123 * BinaryHeapM_GetNode_m156172424 (BinaryHeapM_t2828444044 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.BinaryHeapM::SetF(System.Int32,System.UInt32)
extern "C"  void BinaryHeapM_SetF_m3335262872 (BinaryHeapM_t2828444044 * __this, int32_t ___i0, uint32_t ___f1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.BinaryHeapM::Add(Pathfinding.PathNode)
extern "C"  void BinaryHeapM_Add_m52262115 (BinaryHeapM_t2828444044 * __this, PathNode_t3993763123 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.PathNode Pathfinding.BinaryHeapM::Remove()
extern "C"  PathNode_t3993763123 * BinaryHeapM_Remove_m3452314759 (BinaryHeapM_t2828444044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.BinaryHeapM::Validate()
extern "C"  void BinaryHeapM_Validate_m2699449349 (BinaryHeapM_t2828444044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.BinaryHeapM::Rebuild()
extern "C"  void BinaryHeapM_Rebuild_m3683369262 (BinaryHeapM_t2828444044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
