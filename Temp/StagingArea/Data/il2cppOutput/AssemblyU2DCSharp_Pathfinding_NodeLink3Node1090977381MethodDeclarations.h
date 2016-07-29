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

// Pathfinding.NodeLink3Node
struct NodeLink3Node_t1090977381;
// AstarPath
struct AstarPath_t4090270936;
// Pathfinding.GraphNode
struct GraphNode_t3525007772;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_AstarPath4090270936.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"

// System.Void Pathfinding.NodeLink3Node::.ctor(AstarPath)
extern "C"  void NodeLink3Node__ctor_m2069360094 (NodeLink3Node_t1090977381 * __this, AstarPath_t4090270936 * ___active0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.NodeLink3Node::GetPortal(Pathfinding.GraphNode,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Boolean)
extern "C"  bool NodeLink3Node_GetPortal_m2870015137 (NodeLink3Node_t1090977381 * __this, GraphNode_t3525007772 * ___other0, List_1_t27321462 * ___left1, List_1_t27321462 * ___right2, bool ___backwards3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GraphNode Pathfinding.NodeLink3Node::GetOther(Pathfinding.GraphNode)
extern "C"  GraphNode_t3525007772 * NodeLink3Node_GetOther_m2097812183 (NodeLink3Node_t1090977381 * __this, GraphNode_t3525007772 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GraphNode Pathfinding.NodeLink3Node::GetOtherInternal(Pathfinding.GraphNode)
extern "C"  GraphNode_t3525007772 * NodeLink3Node_GetOtherInternal_m1731982170 (NodeLink3Node_t1090977381 * __this, GraphNode_t3525007772 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
