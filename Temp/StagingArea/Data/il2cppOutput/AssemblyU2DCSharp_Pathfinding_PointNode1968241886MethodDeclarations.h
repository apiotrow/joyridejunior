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

// Pathfinding.PointNode
struct PointNode_t1968241886;
// AstarPath
struct AstarPath_t4090270936;
// Pathfinding.GraphNodeDelegate
struct GraphNodeDelegate_t1019366209;
// Pathfinding.Path
struct Path_t2697364881;
// Pathfinding.PathNode
struct PathNode_t3993763123;
// Pathfinding.PathHandler
struct PathHandler_t2800540817;
// Pathfinding.GraphNode
struct GraphNode_t3525007772;
// Pathfinding.Serialization.GraphSerializationContext
struct GraphSerializationContext_t387880975;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_AstarPath4090270936.h"
#include "AssemblyU2DCSharp_Pathfinding_Int32697168784.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNodeDelegate1019366209.h"
#include "AssemblyU2DCSharp_Pathfinding_Path2697364881.h"
#include "AssemblyU2DCSharp_Pathfinding_PathNode3993763123.h"
#include "AssemblyU2DCSharp_Pathfinding_PathHandler2800540817.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"
#include "AssemblyU2DCSharp_Pathfinding_Serialization_GraphSe387880975.h"

// System.Void Pathfinding.PointNode::.ctor(AstarPath)
extern "C"  void PointNode__ctor_m3988895511 (PointNode_t1968241886 * __this, AstarPath_t4090270936 * ___astar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointNode::SetPosition(Pathfinding.Int3)
extern "C"  void PointNode_SetPosition_m2612694046 (PointNode_t1968241886 * __this, Int3_t2697168784  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointNode::GetConnections(Pathfinding.GraphNodeDelegate)
extern "C"  void PointNode_GetConnections_m1636972103 (PointNode_t1968241886 * __this, GraphNodeDelegate_t1019366209 * ___del0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointNode::ClearConnections(System.Boolean)
extern "C"  void PointNode_ClearConnections_m1325785280 (PointNode_t1968241886 * __this, bool ___alsoReverse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointNode::UpdateRecursiveG(Pathfinding.Path,Pathfinding.PathNode,Pathfinding.PathHandler)
extern "C"  void PointNode_UpdateRecursiveG_m336789110 (PointNode_t1968241886 * __this, Path_t2697364881 * ___path0, PathNode_t3993763123 * ___pathNode1, PathHandler_t2800540817 * ___handler2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.PointNode::ContainsConnection(Pathfinding.GraphNode)
extern "C"  bool PointNode_ContainsConnection_m4283501826 (PointNode_t1968241886 * __this, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointNode::AddConnection(Pathfinding.GraphNode,System.UInt32)
extern "C"  void PointNode_AddConnection_m3418021824 (PointNode_t1968241886 * __this, GraphNode_t3525007772 * ___node0, uint32_t ___cost1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointNode::RemoveConnection(Pathfinding.GraphNode)
extern "C"  void PointNode_RemoveConnection_m3331656841 (PointNode_t1968241886 * __this, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointNode::Open(Pathfinding.Path,Pathfinding.PathNode,Pathfinding.PathHandler)
extern "C"  void PointNode_Open_m739045034 (PointNode_t1968241886 * __this, Path_t2697364881 * ___path0, PathNode_t3993763123 * ___pathNode1, PathHandler_t2800540817 * ___handler2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointNode::SerializeNode(Pathfinding.Serialization.GraphSerializationContext)
extern "C"  void PointNode_SerializeNode_m833291114 (PointNode_t1968241886 * __this, GraphSerializationContext_t387880975 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointNode::DeserializeNode(Pathfinding.Serialization.GraphSerializationContext)
extern "C"  void PointNode_DeserializeNode_m1928895403 (PointNode_t1968241886 * __this, GraphSerializationContext_t387880975 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointNode::SerializeReferences(Pathfinding.Serialization.GraphSerializationContext)
extern "C"  void PointNode_SerializeReferences_m4191133348 (PointNode_t1968241886 * __this, GraphSerializationContext_t387880975 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointNode::DeserializeReferences(Pathfinding.Serialization.GraphSerializationContext)
extern "C"  void PointNode_DeserializeReferences_m1862287909 (PointNode_t1968241886 * __this, GraphSerializationContext_t387880975 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
