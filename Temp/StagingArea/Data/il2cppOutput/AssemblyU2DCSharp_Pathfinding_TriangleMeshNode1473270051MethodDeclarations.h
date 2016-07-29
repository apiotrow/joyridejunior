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

// Pathfinding.TriangleMeshNode
struct TriangleMeshNode_t1473270051;
// AstarPath
struct AstarPath_t4090270936;
// Pathfinding.INavmeshHolder
struct INavmeshHolder_t1805983455;
// Pathfinding.Path
struct Path_t2697364881;
// Pathfinding.PathNode
struct PathNode_t3993763123;
// Pathfinding.PathHandler
struct PathHandler_t2800540817;
// Pathfinding.GraphNode
struct GraphNode_t3525007772;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;
// Pathfinding.Serialization.GraphSerializationContext
struct GraphSerializationContext_t387880975;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_AstarPath4090270936.h"
#include "AssemblyU2DCSharp_Pathfinding_Int32697168784.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_Pathfinding_Path2697364881.h"
#include "AssemblyU2DCSharp_Pathfinding_PathNode3993763123.h"
#include "AssemblyU2DCSharp_Pathfinding_PathHandler2800540817.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"
#include "AssemblyU2DCSharp_Pathfinding_Serialization_GraphSe387880975.h"

// System.Void Pathfinding.TriangleMeshNode::.ctor(AstarPath)
extern "C"  void TriangleMeshNode__ctor_m1224193728 (TriangleMeshNode_t1473270051 * __this, AstarPath_t4090270936 * ___astar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.TriangleMeshNode::.cctor()
extern "C"  void TriangleMeshNode__cctor_m3871891475 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.INavmeshHolder Pathfinding.TriangleMeshNode::GetNavmeshHolder(System.UInt32)
extern "C"  Il2CppObject * TriangleMeshNode_GetNavmeshHolder_m2714066730 (Il2CppObject * __this /* static, unused */, uint32_t ___graphIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.TriangleMeshNode::SetNavmeshHolder(System.Int32,Pathfinding.INavmeshHolder)
extern "C"  void TriangleMeshNode_SetNavmeshHolder_m194817812 (Il2CppObject * __this /* static, unused */, int32_t ___graphIndex0, Il2CppObject * ___graph1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.TriangleMeshNode::UpdatePositionFromVertices()
extern "C"  void TriangleMeshNode_UpdatePositionFromVertices_m2583905567 (TriangleMeshNode_t1473270051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.TriangleMeshNode::GetVertexIndex(System.Int32)
extern "C"  int32_t TriangleMeshNode_GetVertexIndex_m1543174433 (TriangleMeshNode_t1473270051 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.TriangleMeshNode::GetVertexArrayIndex(System.Int32)
extern "C"  int32_t TriangleMeshNode_GetVertexArrayIndex_m3654786606 (TriangleMeshNode_t1473270051 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.TriangleMeshNode::GetVertex(System.Int32)
extern "C"  Int3_t2697168784  TriangleMeshNode_GetVertex_m1703326996 (TriangleMeshNode_t1473270051 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.TriangleMeshNode::GetVertexCount()
extern "C"  int32_t TriangleMeshNode_GetVertexCount_m3491465421 (TriangleMeshNode_t1473270051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.TriangleMeshNode::ClosestPointOnNode(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  TriangleMeshNode_ClosestPointOnNode_m1674333149 (TriangleMeshNode_t1473270051 * __this, Vector3_t3525329789  ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.TriangleMeshNode::ClosestPointOnNodeXZ(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  TriangleMeshNode_ClosestPointOnNodeXZ_m1420591323 (TriangleMeshNode_t1473270051 * __this, Vector3_t3525329789  ____p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.TriangleMeshNode::ContainsPoint(Pathfinding.Int3)
extern "C"  bool TriangleMeshNode_ContainsPoint_m1166966951 (TriangleMeshNode_t1473270051 * __this, Int3_t2697168784  ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.TriangleMeshNode::UpdateRecursiveG(Pathfinding.Path,Pathfinding.PathNode,Pathfinding.PathHandler)
extern "C"  void TriangleMeshNode_UpdateRecursiveG_m925150637 (TriangleMeshNode_t1473270051 * __this, Path_t2697364881 * ___path0, PathNode_t3993763123 * ___pathNode1, PathHandler_t2800540817 * ___handler2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.TriangleMeshNode::Open(Pathfinding.Path,Pathfinding.PathNode,Pathfinding.PathHandler)
extern "C"  void TriangleMeshNode_Open_m3967449185 (TriangleMeshNode_t1473270051 * __this, Path_t2697364881 * ___path0, PathNode_t3993763123 * ___pathNode1, PathHandler_t2800540817 * ___handler2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.TriangleMeshNode::SharedEdge(Pathfinding.GraphNode)
extern "C"  int32_t TriangleMeshNode_SharedEdge_m2694339314 (TriangleMeshNode_t1473270051 * __this, GraphNode_t3525007772 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.TriangleMeshNode::GetPortal(Pathfinding.GraphNode,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Boolean)
extern "C"  bool TriangleMeshNode_GetPortal_m1193990423 (TriangleMeshNode_t1473270051 * __this, GraphNode_t3525007772 * ____other0, List_1_t27321462 * ___left1, List_1_t27321462 * ___right2, bool ___backwards3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.TriangleMeshNode::GetPortal(Pathfinding.GraphNode,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Boolean,System.Int32&,System.Int32&)
extern "C"  bool TriangleMeshNode_GetPortal_m1408926593 (TriangleMeshNode_t1473270051 * __this, GraphNode_t3525007772 * ____other0, List_1_t27321462 * ___left1, List_1_t27321462 * ___right2, bool ___backwards3, int32_t* ___aIndex4, int32_t* ___bIndex5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.TriangleMeshNode::SerializeNode(Pathfinding.Serialization.GraphSerializationContext)
extern "C"  void TriangleMeshNode_SerializeNode_m521791187 (TriangleMeshNode_t1473270051 * __this, GraphSerializationContext_t387880975 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.TriangleMeshNode::DeserializeNode(Pathfinding.Serialization.GraphSerializationContext)
extern "C"  void TriangleMeshNode_DeserializeNode_m3225176276 (TriangleMeshNode_t1473270051 * __this, GraphSerializationContext_t387880975 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
