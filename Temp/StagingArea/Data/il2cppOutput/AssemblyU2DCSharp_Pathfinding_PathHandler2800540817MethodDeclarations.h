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

// Pathfinding.PathHandler
struct PathHandler_t2800540817;
// Pathfinding.PathNode
struct PathNode_t3993763123;
// Pathfinding.BinaryHeapM
struct BinaryHeapM_t2828444044;
// Pathfinding.Path
struct Path_t2697364881;
// Pathfinding.GraphNode
struct GraphNode_t3525007772;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_PathNode3993763123.h"
#include "AssemblyU2DCSharp_Pathfinding_Path2697364881.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"

// System.Void Pathfinding.PathHandler::.ctor(System.Int32,System.Int32)
extern "C"  void PathHandler__ctor_m694107990 (PathHandler_t2800540817 * __this, int32_t ___threadID0, int32_t ___totalThreadCount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 Pathfinding.PathHandler::get_PathID()
extern "C"  uint16_t PathHandler_get_PathID_m3709211144 (PathHandler_t2800540817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PathHandler::PushNode(Pathfinding.PathNode)
extern "C"  void PathHandler_PushNode_m1687449311 (PathHandler_t2800540817 * __this, PathNode_t3993763123 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.PathNode Pathfinding.PathHandler::PopNode()
extern "C"  PathNode_t3993763123 * PathHandler_PopNode_m515965005 (PathHandler_t2800540817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.BinaryHeapM Pathfinding.PathHandler::GetHeap()
extern "C"  BinaryHeapM_t2828444044 * PathHandler_GetHeap_m19120941 (PathHandler_t2800540817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PathHandler::RebuildHeap()
extern "C"  void PathHandler_RebuildHeap_m3410463765 (PathHandler_t2800540817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.PathHandler::HeapEmpty()
extern "C"  bool PathHandler_HeapEmpty_m1899132835 (PathHandler_t2800540817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PathHandler::InitializeForPath(Pathfinding.Path)
extern "C"  void PathHandler_InitializeForPath_m3999035997 (PathHandler_t2800540817 * __this, Path_t2697364881 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PathHandler::DestroyNode(Pathfinding.GraphNode)
extern "C"  void PathHandler_DestroyNode_m863700450 (PathHandler_t2800540817 * __this, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PathHandler::InitializeNode(Pathfinding.GraphNode)
extern "C"  void PathHandler_InitializeNode_m2230220742 (PathHandler_t2800540817 * __this, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.PathNode Pathfinding.PathHandler::GetPathNode(System.Int32)
extern "C"  PathNode_t3993763123 * PathHandler_GetPathNode_m192844136 (PathHandler_t2800540817 * __this, int32_t ___nodeIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.PathNode Pathfinding.PathHandler::GetPathNode(Pathfinding.GraphNode)
extern "C"  PathNode_t3993763123 * PathHandler_GetPathNode_m3584105653 (PathHandler_t2800540817 * __this, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PathHandler::ClearPathIDs()
extern "C"  void PathHandler_ClearPathIDs_m2671262298 (PathHandler_t2800540817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
