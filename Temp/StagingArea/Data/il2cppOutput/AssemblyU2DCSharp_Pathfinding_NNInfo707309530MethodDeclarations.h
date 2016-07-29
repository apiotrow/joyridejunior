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

// Pathfinding.GraphNode
struct GraphNode_t3525007772;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_NNInfo707309530.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void Pathfinding.NNInfo::.ctor(Pathfinding.GraphNode)
extern "C"  void NNInfo__ctor_m399392585 (NNInfo_t707309530 * __this, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NNInfo::SetConstrained(Pathfinding.GraphNode,UnityEngine.Vector3)
extern "C"  void NNInfo_SetConstrained_m1067764522 (NNInfo_t707309530 * __this, GraphNode_t3525007772 * ___constrainedNode0, Vector3_t3525329789  ___clampedPosition1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NNInfo::UpdateInfo()
extern "C"  void NNInfo_UpdateInfo_m1006310584 (NNInfo_t707309530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.NNInfo::op_Explicit(Pathfinding.NNInfo)
extern "C"  Vector3_t3525329789  NNInfo_op_Explicit_m1042667489 (Il2CppObject * __this /* static, unused */, NNInfo_t707309530  ___ob0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GraphNode Pathfinding.NNInfo::op_Explicit(Pathfinding.NNInfo)
extern "C"  GraphNode_t3525007772 * NNInfo_op_Explicit_m2783312494 (Il2CppObject * __this /* static, unused */, NNInfo_t707309530  ___ob0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.NNInfo::op_Explicit(Pathfinding.GraphNode)
extern "C"  NNInfo_t707309530  NNInfo_op_Explicit_m1026387262 (Il2CppObject * __this /* static, unused */, GraphNode_t3525007772 * ___ob0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
