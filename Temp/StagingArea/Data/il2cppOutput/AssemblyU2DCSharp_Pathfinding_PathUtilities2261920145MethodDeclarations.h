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
// System.Collections.Generic.List`1<Pathfinding.GraphNode>
struct List_1_t26999445;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;
// Pathfinding.IRaycastableGraph
struct IRaycastableGraph_t1585044352;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Boolean Pathfinding.PathUtilities::IsPathPossible(Pathfinding.GraphNode,Pathfinding.GraphNode)
extern "C"  bool PathUtilities_IsPathPossible_m4146964754 (Il2CppObject * __this /* static, unused */, GraphNode_t3525007772 * ___n10, GraphNode_t3525007772 * ___n21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.PathUtilities::IsPathPossible(System.Collections.Generic.List`1<Pathfinding.GraphNode>)
extern "C"  bool PathUtilities_IsPathPossible_m3553166986 (Il2CppObject * __this /* static, unused */, List_1_t26999445 * ___nodes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.PathUtilities::IsPathPossible(System.Collections.Generic.List`1<Pathfinding.GraphNode>,System.Int32)
extern "C"  bool PathUtilities_IsPathPossible_m1044547213 (Il2CppObject * __this /* static, unused */, List_1_t26999445 * ___nodes0, int32_t ___tagMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Pathfinding.GraphNode> Pathfinding.PathUtilities::GetReachableNodes(Pathfinding.GraphNode,System.Int32)
extern "C"  List_1_t26999445 * PathUtilities_GetReachableNodes_m655147642 (Il2CppObject * __this /* static, unused */, GraphNode_t3525007772 * ___seed0, int32_t ___tagMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Pathfinding.GraphNode> Pathfinding.PathUtilities::BFS(Pathfinding.GraphNode,System.Int32,System.Int32)
extern "C"  List_1_t26999445 * PathUtilities_BFS_m3356573672 (Il2CppObject * __this /* static, unused */, GraphNode_t3525007772 * ___seed0, int32_t ___depth1, int32_t ___tagMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> Pathfinding.PathUtilities::GetSpiralPoints(System.Int32,System.Single)
extern "C"  List_1_t27321462 * PathUtilities_GetSpiralPoints_m2353170760 (Il2CppObject * __this /* static, unused */, int32_t ___count0, float ___clearance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.PathUtilities::InvoluteOfCircle(System.Single,System.Single)
extern "C"  Vector3_t3525329789  PathUtilities_InvoluteOfCircle_m283451191 (Il2CppObject * __this /* static, unused */, float ___a0, float ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PathUtilities::GetPointsAroundPointWorld(UnityEngine.Vector3,Pathfinding.IRaycastableGraph,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Single,System.Single)
extern "C"  void PathUtilities_GetPointsAroundPointWorld_m1177519368 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___p0, Il2CppObject * ___g1, List_1_t27321462 * ___previousPoints2, float ___radius3, float ___clearanceRadius4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PathUtilities::GetPointsAroundPoint(UnityEngine.Vector3,Pathfinding.IRaycastableGraph,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Single,System.Single)
extern "C"  void PathUtilities_GetPointsAroundPoint_m3205754672 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___p0, Il2CppObject * ___g1, List_1_t27321462 * ___previousPoints2, float ___radius3, float ___clearanceRadius4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> Pathfinding.PathUtilities::GetPointsOnNodes(System.Collections.Generic.List`1<Pathfinding.GraphNode>,System.Int32,System.Single)
extern "C"  List_1_t27321462 * PathUtilities_GetPointsOnNodes_m1049430623 (Il2CppObject * __this /* static, unused */, List_1_t26999445 * ___nodes0, int32_t ___count1, float ___clearanceRadius2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
