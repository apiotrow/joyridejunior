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
// AstarPath
struct AstarPath_t4090270936;
// Pathfinding.Path
struct Path_t2697364881;
// Pathfinding.PathNode
struct PathNode_t3993763123;
// Pathfinding.PathHandler
struct PathHandler_t2800540817;
// System.Collections.Generic.Stack`1<Pathfinding.GraphNode>
struct Stack_1_t1800446511;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;
// Pathfinding.Serialization.GraphSerializationContext
struct GraphSerializationContext_t387880975;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_AstarPath4090270936.h"
#include "AssemblyU2DCSharp_Pathfinding_Path2697364881.h"
#include "AssemblyU2DCSharp_Pathfinding_PathNode3993763123.h"
#include "AssemblyU2DCSharp_Pathfinding_PathHandler2800540817.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"
#include "AssemblyU2DCSharp_Pathfinding_Serialization_GraphSe387880975.h"

// System.Void Pathfinding.GraphNode::.ctor(AstarPath)
extern "C"  void GraphNode__ctor_m1268883541 (GraphNode_t3525007772 * __this, AstarPath_t4090270936 * ___astar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::Destroy()
extern "C"  void GraphNode_Destroy_m1054595005 (GraphNode_t3525007772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GraphNode::get_Destroyed()
extern "C"  bool GraphNode_get_Destroyed_m3539410151 (GraphNode_t3525007772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.GraphNode::get_NodeIndex()
extern "C"  int32_t GraphNode_get_NodeIndex_m3623766232 (GraphNode_t3525007772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.GraphNode::get_Flags()
extern "C"  uint32_t GraphNode_get_Flags_m871801852 (GraphNode_t3525007772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::set_Flags(System.UInt32)
extern "C"  void GraphNode_set_Flags_m821088877 (GraphNode_t3525007772 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.GraphNode::get_Penalty()
extern "C"  uint32_t GraphNode_get_Penalty_m2845227134 (GraphNode_t3525007772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::set_Penalty(System.UInt32)
extern "C"  void GraphNode_set_Penalty_m431382891 (GraphNode_t3525007772 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GraphNode::get_Walkable()
extern "C"  bool GraphNode_get_Walkable_m2597660983 (GraphNode_t3525007772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::set_Walkable(System.Boolean)
extern "C"  void GraphNode_set_Walkable_m1408265750 (GraphNode_t3525007772 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.GraphNode::get_Area()
extern "C"  uint32_t GraphNode_get_Area_m1968839066 (GraphNode_t3525007772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::set_Area(System.UInt32)
extern "C"  void GraphNode_set_Area_m2446580689 (GraphNode_t3525007772 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.GraphNode::get_GraphIndex()
extern "C"  uint32_t GraphNode_get_GraphIndex_m1000484465 (GraphNode_t3525007772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::set_GraphIndex(System.UInt32)
extern "C"  void GraphNode_set_GraphIndex_m1531343770 (GraphNode_t3525007772 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.GraphNode::get_Tag()
extern "C"  uint32_t GraphNode_get_Tag_m2990045519 (GraphNode_t3525007772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::set_Tag(System.UInt32)
extern "C"  void GraphNode_set_Tag_m1698802618 (GraphNode_t3525007772 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::UpdateG(Pathfinding.Path,Pathfinding.PathNode)
extern "C"  void GraphNode_UpdateG_m339279235 (GraphNode_t3525007772 * __this, Path_t2697364881 * ___path0, PathNode_t3993763123 * ___pathNode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::UpdateRecursiveG(Pathfinding.Path,Pathfinding.PathNode,Pathfinding.PathHandler)
extern "C"  void GraphNode_UpdateRecursiveG_m1582884216 (GraphNode_t3525007772 * __this, Path_t2697364881 * ___path0, PathNode_t3993763123 * ___pathNode1, PathHandler_t2800540817 * ___handler2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::FloodFill(System.Collections.Generic.Stack`1<Pathfinding.GraphNode>,System.UInt32)
extern "C"  void GraphNode_FloodFill_m3028639736 (GraphNode_t3525007772 * __this, Stack_1_t1800446511 * ___stack0, uint32_t ___region1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GraphNode::ContainsConnection(Pathfinding.GraphNode)
extern "C"  bool GraphNode_ContainsConnection_m3919275396 (GraphNode_t3525007772 * __this, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::RecalculateConnectionCosts()
extern "C"  void GraphNode_RecalculateConnectionCosts_m2977304116 (GraphNode_t3525007772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GraphNode::GetPortal(Pathfinding.GraphNode,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Boolean)
extern "C"  bool GraphNode_GetPortal_m2362385802 (GraphNode_t3525007772 * __this, GraphNode_t3525007772 * ___other0, List_1_t27321462 * ___left1, List_1_t27321462 * ___right2, bool ___backwards3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::SerializeNode(Pathfinding.Serialization.GraphSerializationContext)
extern "C"  void GraphNode_SerializeNode_m865067304 (GraphNode_t3525007772 * __this, GraphSerializationContext_t387880975 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::DeserializeNode(Pathfinding.Serialization.GraphSerializationContext)
extern "C"  void GraphNode_DeserializeNode_m2401042921 (GraphNode_t3525007772 * __this, GraphSerializationContext_t387880975 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::SerializeReferences(Pathfinding.Serialization.GraphSerializationContext)
extern "C"  void GraphNode_SerializeReferences_m79345122 (GraphNode_t3525007772 * __this, GraphSerializationContext_t387880975 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::DeserializeReferences(Pathfinding.Serialization.GraphSerializationContext)
extern "C"  void GraphNode_DeserializeReferences_m1803715043 (GraphNode_t3525007772 * __this, GraphSerializationContext_t387880975 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
