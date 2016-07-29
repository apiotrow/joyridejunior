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

// Pathfinding.GridNode
struct GridNode_t3077417940;
// AstarPath
struct AstarPath_t4090270936;
// Pathfinding.GridGraph
struct GridGraph_t1662136020;
// Pathfinding.GraphNodeDelegate
struct GraphNodeDelegate_t1019366209;
// Pathfinding.GraphNode
struct GraphNode_t3525007772;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;
// System.Collections.Generic.Stack`1<Pathfinding.GraphNode>
struct Stack_1_t1800446511;
// Pathfinding.Path
struct Path_t2697364881;
// Pathfinding.PathNode
struct PathNode_t3993763123;
// Pathfinding.PathHandler
struct PathHandler_t2800540817;
// Pathfinding.Serialization.GraphSerializationContext
struct GraphSerializationContext_t387880975;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_AstarPath4090270936.h"
#include "AssemblyU2DCSharp_Pathfinding_GridGraph1662136020.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNodeDelegate1019366209.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"
#include "AssemblyU2DCSharp_Pathfinding_Path2697364881.h"
#include "AssemblyU2DCSharp_Pathfinding_PathNode3993763123.h"
#include "AssemblyU2DCSharp_Pathfinding_PathHandler2800540817.h"
#include "AssemblyU2DCSharp_Pathfinding_Serialization_GraphSe387880975.h"

// System.Void Pathfinding.GridNode::.ctor(AstarPath)
extern "C"  void GridNode__ctor_m2451552561 (GridNode_t3077417940 * __this, AstarPath_t4090270936 * ___astar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::.cctor()
extern "C"  void GridNode__cctor_m4134429572 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GridGraph Pathfinding.GridNode::GetGridGraph(System.UInt32)
extern "C"  GridGraph_t1662136020 * GridNode_GetGridGraph_m4180775320 (Il2CppObject * __this /* static, unused */, uint32_t ___graphIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::SetGridGraph(System.Int32,Pathfinding.GridGraph)
extern "C"  void GridNode_SetGridGraph_m2443344128 (Il2CppObject * __this /* static, unused */, int32_t ___graphIndex0, GridGraph_t1662136020 * ___graph1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 Pathfinding.GridNode::get_InternalGridFlags()
extern "C"  uint16_t GridNode_get_InternalGridFlags_m3319282861 (GridNode_t3077417940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::set_InternalGridFlags(System.UInt16)
extern "C"  void GridNode_set_InternalGridFlags_m1992524294 (GridNode_t3077417940 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GridNode::GetConnectionInternal(System.Int32)
extern "C"  bool GridNode_GetConnectionInternal_m3099514101 (GridNode_t3077417940 * __this, int32_t ___dir0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::SetConnectionInternal(System.Int32,System.Boolean)
extern "C"  void GridNode_SetConnectionInternal_m3074016424 (GridNode_t3077417940 * __this, int32_t ___dir0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::SetAllConnectionInternal(System.Int32)
extern "C"  void GridNode_SetAllConnectionInternal_m2667382054 (GridNode_t3077417940 * __this, int32_t ___connections0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::ResetConnectionsInternal()
extern "C"  void GridNode_ResetConnectionsInternal_m2859083390 (GridNode_t3077417940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GridNode::get_EdgeNode()
extern "C"  bool GridNode_get_EdgeNode_m550374327 (GridNode_t3077417940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::set_EdgeNode(System.Boolean)
extern "C"  void GridNode_set_EdgeNode_m1694462894 (GridNode_t3077417940 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GridNode::get_WalkableErosion()
extern "C"  bool GridNode_get_WalkableErosion_m434847230 (GridNode_t3077417940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::set_WalkableErosion(System.Boolean)
extern "C"  void GridNode_set_WalkableErosion_m3550316597 (GridNode_t3077417940 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GridNode::get_TmpWalkable()
extern "C"  bool GridNode_get_TmpWalkable_m3773942500 (GridNode_t3077417940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::set_TmpWalkable(System.Boolean)
extern "C"  void GridNode_set_TmpWalkable_m1103571611 (GridNode_t3077417940 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::ClearConnections(System.Boolean)
extern "C"  void GridNode_ClearConnections_m4234178266 (GridNode_t3077417940 * __this, bool ___alsoReverse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::GetConnections(Pathfinding.GraphNodeDelegate)
extern "C"  void GridNode_GetConnections_m2899632749 (GridNode_t3077417940 * __this, GraphNodeDelegate_t1019366209 * ___del0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.GridNode::ClosestPointOnNode(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  GridNode_ClosestPointOnNode_m1738555468 (GridNode_t3077417940 * __this, Vector3_t3525329789  ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GridNode::GetPortal(Pathfinding.GraphNode,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Boolean)
extern "C"  bool GridNode_GetPortal_m17674822 (GridNode_t3077417940 * __this, GraphNode_t3525007772 * ___other0, List_1_t27321462 * ___left1, List_1_t27321462 * ___right2, bool ___backwards3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::FloodFill(System.Collections.Generic.Stack`1<Pathfinding.GraphNode>,System.UInt32)
extern "C"  void GridNode_FloodFill_m1633931732 (GridNode_t3077417940 * __this, Stack_1_t1800446511 * ___stack0, uint32_t ___region1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::AddConnection(Pathfinding.GraphNode,System.UInt32)
extern "C"  void GridNode_AddConnection_m4229684058 (GridNode_t3077417940 * __this, GraphNode_t3525007772 * ___node0, uint32_t ___cost1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::RemoveConnection(Pathfinding.GraphNode)
extern "C"  void GridNode_RemoveConnection_m3015527727 (GridNode_t3077417940 * __this, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::UpdateRecursiveG(Pathfinding.Path,Pathfinding.PathNode,Pathfinding.PathHandler)
extern "C"  void GridNode_UpdateRecursiveG_m4090962204 (GridNode_t3077417940 * __this, Path_t2697364881 * ___path0, PathNode_t3993763123 * ___pathNode1, PathHandler_t2800540817 * ___handler2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::Open(Pathfinding.Path,Pathfinding.PathNode,Pathfinding.PathHandler)
extern "C"  void GridNode_Open_m270752336 (GridNode_t3077417940 * __this, Path_t2697364881 * ___path0, PathNode_t3993763123 * ___pathNode1, PathHandler_t2800540817 * ___handler2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::SerializeNode(Pathfinding.Serialization.GraphSerializationContext)
extern "C"  void GridNode_SerializeNode_m3034942212 (GridNode_t3077417940 * __this, GraphSerializationContext_t387880975 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::DeserializeNode(Pathfinding.Serialization.GraphSerializationContext)
extern "C"  void GridNode_DeserializeNode_m296723653 (GridNode_t3077417940 * __this, GraphSerializationContext_t387880975 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
