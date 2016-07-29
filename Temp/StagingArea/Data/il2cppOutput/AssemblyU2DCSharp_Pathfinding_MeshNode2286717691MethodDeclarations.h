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

// Pathfinding.MeshNode
struct MeshNode_t2286717691;
// AstarPath
struct AstarPath_t4090270936;
// Pathfinding.GraphNodeDelegate
struct GraphNodeDelegate_t1019366209;
// System.Collections.Generic.Stack`1<Pathfinding.GraphNode>
struct Stack_1_t1800446511;
// Pathfinding.GraphNode
struct GraphNode_t3525007772;
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
#include "AssemblyU2DCSharp_Pathfinding_GraphNodeDelegate1019366209.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"
#include "AssemblyU2DCSharp_Pathfinding_Path2697364881.h"
#include "AssemblyU2DCSharp_Pathfinding_PathNode3993763123.h"
#include "AssemblyU2DCSharp_Pathfinding_PathHandler2800540817.h"
#include "AssemblyU2DCSharp_Pathfinding_Int32697168784.h"
#include "AssemblyU2DCSharp_Pathfinding_Serialization_GraphSe387880975.h"

// System.Void Pathfinding.MeshNode::.ctor(AstarPath)
extern "C"  void MeshNode__ctor_m3885612184 (MeshNode_t2286717691 * __this, AstarPath_t4090270936 * ___astar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.MeshNode::ClearConnections(System.Boolean)
extern "C"  void MeshNode_ClearConnections_m2412561473 (MeshNode_t2286717691 * __this, bool ___alsoReverse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.MeshNode::GetConnections(Pathfinding.GraphNodeDelegate)
extern "C"  void MeshNode_GetConnections_m2367081574 (MeshNode_t2286717691 * __this, GraphNodeDelegate_t1019366209 * ___del0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.MeshNode::FloodFill(System.Collections.Generic.Stack`1<Pathfinding.GraphNode>,System.UInt32)
extern "C"  void MeshNode_FloodFill_m531226491 (MeshNode_t2286717691 * __this, Stack_1_t1800446511 * ___stack0, uint32_t ___region1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.MeshNode::ContainsConnection(Pathfinding.GraphNode)
extern "C"  bool MeshNode_ContainsConnection_m364398265 (MeshNode_t2286717691 * __this, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.MeshNode::UpdateRecursiveG(Pathfinding.Path,Pathfinding.PathNode,Pathfinding.PathHandler)
extern "C"  void MeshNode_UpdateRecursiveG_m3543223509 (MeshNode_t2286717691 * __this, Path_t2697364881 * ___path0, PathNode_t3993763123 * ___pathNode1, PathHandler_t2800540817 * ___handler2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.MeshNode::AddConnection(Pathfinding.GraphNode,System.UInt32)
extern "C"  void MeshNode_AddConnection_m1586119937 (MeshNode_t2286717691 * __this, GraphNode_t3525007772 * ___node0, uint32_t ___cost1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.MeshNode::RemoveConnection(Pathfinding.GraphNode)
extern "C"  void MeshNode_RemoveConnection_m1045456360 (MeshNode_t2286717691 * __this, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.MeshNode::ContainsPoint(Pathfinding.Int3)
extern "C"  bool MeshNode_ContainsPoint_m2104859599 (MeshNode_t2286717691 * __this, Int3_t2697168784  ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.MeshNode::SerializeReferences(Pathfinding.Serialization.GraphSerializationContext)
extern "C"  void MeshNode_SerializeReferences_m1600990501 (MeshNode_t2286717691 * __this, GraphSerializationContext_t387880975 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.MeshNode::DeserializeReferences(Pathfinding.Serialization.GraphSerializationContext)
extern "C"  void MeshNode_DeserializeReferences_m3816043622 (MeshNode_t2286717691 * __this, GraphSerializationContext_t387880975 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
