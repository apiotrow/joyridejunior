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

// Pathfinding.NavMeshGraph
struct NavMeshGraph_t179402474;
// Pathfinding.TriangleMeshNode[]
struct TriangleMeshNodeU5BU5D_t45846258;
// Pathfinding.GraphNodeDelegateCancelable
struct GraphNodeDelegateCancelable_t4016762869;
// Pathfinding.BBTree
struct BBTree_t353008970;
// Pathfinding.Int3[]
struct Int3U5BU5D_t1705908273;
// Pathfinding.GraphNode[]
struct GraphNodeU5BU5D_t2658295925;
// Pathfinding.NNConstraint
struct NNConstraint_t3253238025;
// Pathfinding.GraphNode
struct GraphNode_t3525007772;
// Pathfinding.NavGraph
struct NavGraph_t535983959;
// Pathfinding.INavmeshHolder
struct INavmeshHolder_t1805983455;
// Pathfinding.GraphUpdateObject
struct GraphUpdateObject_t4278438658;
// Pathfinding.INavmesh
struct INavmesh_t171214419;
// Pathfinding.TriangleMeshNode
struct TriangleMeshNode_t1473270051;
// System.String
struct String_t;
// OnScanStatus
struct OnScanStatus_t2412749870;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// Pathfinding.Serialization.GraphSerializationContext
struct GraphSerializationContext_t387880975;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNodeDelegateCan4016762869.h"
#include "AssemblyU2DCSharp_Pathfinding_Int32697168784.h"
#include "AssemblyU2DCSharp_Pathfinding_BBTree353008970.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "AssemblyU2DCSharp_Pathfinding_NNInfo707309530.h"
#include "AssemblyU2DCSharp_Pathfinding_NavMeshGraph179402474.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_Pathfinding_NNConstraint3253238025.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"
#include "AssemblyU2DCSharp_Pathfinding_NavGraph535983959.h"
#include "AssemblyU2DCSharp_GraphUpdateThreading3958092737.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphUpdateObject4278438658.h"
#include "AssemblyU2DCSharp_Pathfinding_TriangleMeshNode1473270051.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_OnScanStatus2412749870.h"
#include "AssemblyU2DCSharp_Pathfinding_Serialization_GraphSe387880975.h"

// System.Void Pathfinding.NavMeshGraph::.ctor()
extern "C"  void NavMeshGraph__ctor_m2708211699 (NavMeshGraph_t179402474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.TriangleMeshNode[] Pathfinding.NavMeshGraph::get_TriNodes()
extern "C"  TriangleMeshNodeU5BU5D_t45846258* NavMeshGraph_get_TriNodes_m484651802 (NavMeshGraph_t179402474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::GetNodes(Pathfinding.GraphNodeDelegateCancelable)
extern "C"  void NavMeshGraph_GetNodes_m1610646087 (NavMeshGraph_t179402474 * __this, GraphNodeDelegateCancelable_t4016762869 * ___del0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::OnDestroy()
extern "C"  void NavMeshGraph_OnDestroy_m188918636 (NavMeshGraph_t179402474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.NavMeshGraph::GetVertex(System.Int32)
extern "C"  Int3_t2697168784  NavMeshGraph_GetVertex_m1163060397 (NavMeshGraph_t179402474 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.NavMeshGraph::GetVertexArrayIndex(System.Int32)
extern "C"  int32_t NavMeshGraph_GetVertexArrayIndex_m2985339655 (NavMeshGraph_t179402474 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::GetTileCoordinates(System.Int32,System.Int32&,System.Int32&)
extern "C"  void NavMeshGraph_GetTileCoordinates_m2304387619 (NavMeshGraph_t179402474 * __this, int32_t ___tileIndex0, int32_t* ___x1, int32_t* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.BBTree Pathfinding.NavMeshGraph::get_bbTree()
extern "C"  BBTree_t353008970 * NavMeshGraph_get_bbTree_m62719053 (NavMeshGraph_t179402474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::set_bbTree(Pathfinding.BBTree)
extern "C"  void NavMeshGraph_set_bbTree_m1974101828 (NavMeshGraph_t179402474 * __this, BBTree_t353008970 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3[] Pathfinding.NavMeshGraph::get_vertices()
extern "C"  Int3U5BU5D_t1705908273* NavMeshGraph_get_vertices_m3140538976 (NavMeshGraph_t179402474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::set_vertices(Pathfinding.Int3[])
extern "C"  void NavMeshGraph_set_vertices_m1921282263 (NavMeshGraph_t179402474 * __this, Int3U5BU5D_t1705908273* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::GenerateMatrix()
extern "C"  void NavMeshGraph_GenerateMatrix_m2287439623 (NavMeshGraph_t179402474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::RelocateNodes(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C"  void NavMeshGraph_RelocateNodes_m1337544721 (NavMeshGraph_t179402474 * __this, Matrix4x4_t277289660  ___oldMatrix0, Matrix4x4_t277289660  ___newMatrix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.NavMeshGraph::GetNearest(Pathfinding.NavMeshGraph,Pathfinding.GraphNode[],UnityEngine.Vector3,Pathfinding.NNConstraint,System.Boolean)
extern "C"  NNInfo_t707309530  NavMeshGraph_GetNearest_m691569515 (Il2CppObject * __this /* static, unused */, NavMeshGraph_t179402474 * ___graph0, GraphNodeU5BU5D_t2658295925* ___nodes1, Vector3_t3525329789  ___position2, NNConstraint_t3253238025 * ___constraint3, bool ___accurateNearestNode4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.NavMeshGraph::GetNearest(UnityEngine.Vector3,Pathfinding.NNConstraint,Pathfinding.GraphNode)
extern "C"  NNInfo_t707309530  NavMeshGraph_GetNearest_m1700351946 (NavMeshGraph_t179402474 * __this, Vector3_t3525329789  ___position0, NNConstraint_t3253238025 * ___constraint1, GraphNode_t3525007772 * ___hint2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.NavMeshGraph::GetNearestForce(UnityEngine.Vector3,Pathfinding.NNConstraint)
extern "C"  NNInfo_t707309530  NavMeshGraph_GetNearestForce_m463478229 (NavMeshGraph_t179402474 * __this, Vector3_t3525329789  ___position0, NNConstraint_t3253238025 * ___constraint1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.NavMeshGraph::GetNearestForce(Pathfinding.NavGraph,Pathfinding.INavmeshHolder,UnityEngine.Vector3,Pathfinding.NNConstraint,System.Boolean)
extern "C"  NNInfo_t707309530  NavMeshGraph_GetNearestForce_m4237479840 (Il2CppObject * __this /* static, unused */, NavGraph_t535983959 * ___graph0, Il2CppObject * ___navmesh1, Vector3_t3525329789  ___position2, NNConstraint_t3253238025 * ___constraint3, bool ___accurateNearestNode4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.NavMeshGraph::GetNearestForceBoth(Pathfinding.NavGraph,Pathfinding.INavmeshHolder,UnityEngine.Vector3,Pathfinding.NNConstraint,System.Boolean)
extern "C"  NNInfo_t707309530  NavMeshGraph_GetNearestForceBoth_m235954335 (Il2CppObject * __this /* static, unused */, NavGraph_t535983959 * ___graph0, Il2CppObject * ___navmesh1, Vector3_t3525329789  ___position2, NNConstraint_t3253238025 * ___constraint3, bool ___accurateNearestNode4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GraphUpdateThreading Pathfinding.NavMeshGraph::CanUpdateAsync(Pathfinding.GraphUpdateObject)
extern "C"  int32_t NavMeshGraph_CanUpdateAsync_m960213814 (NavMeshGraph_t179402474 * __this, GraphUpdateObject_t4278438658 * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::UpdateAreaInit(Pathfinding.GraphUpdateObject)
extern "C"  void NavMeshGraph_UpdateAreaInit_m1798710799 (NavMeshGraph_t179402474 * __this, GraphUpdateObject_t4278438658 * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::UpdateArea(Pathfinding.GraphUpdateObject)
extern "C"  void NavMeshGraph_UpdateArea_m2919096895 (NavMeshGraph_t179402474 * __this, GraphUpdateObject_t4278438658 * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::UpdateArea(Pathfinding.GraphUpdateObject,Pathfinding.INavmesh)
extern "C"  void NavMeshGraph_UpdateArea_m2542908726 (Il2CppObject * __this /* static, unused */, GraphUpdateObject_t4278438658 * ___o0, Il2CppObject * ___graph1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.NavMeshGraph::ClosestPointOnNode(Pathfinding.TriangleMeshNode,Pathfinding.Int3[],UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  NavMeshGraph_ClosestPointOnNode_m2485949479 (Il2CppObject * __this /* static, unused */, TriangleMeshNode_t1473270051 * ___node0, Int3U5BU5D_t1705908273* ___vertices1, Vector3_t3525329789  ___pos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.NavMeshGraph::ContainsPoint(Pathfinding.TriangleMeshNode,UnityEngine.Vector3)
extern "C"  bool NavMeshGraph_ContainsPoint_m3726746144 (NavMeshGraph_t179402474 * __this, TriangleMeshNode_t1473270051 * ___node0, Vector3_t3525329789  ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.NavMeshGraph::ContainsPoint(Pathfinding.TriangleMeshNode,UnityEngine.Vector3,Pathfinding.Int3[])
extern "C"  bool NavMeshGraph_ContainsPoint_m739157238 (Il2CppObject * __this /* static, unused */, TriangleMeshNode_t1473270051 * ___node0, Vector3_t3525329789  ___pos1, Int3U5BU5D_t1705908273* ___vertices2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::ScanInternal(System.String)
extern "C"  void NavMeshGraph_ScanInternal_m576823319 (NavMeshGraph_t179402474 * __this, String_t* ___objMeshPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::ScanInternal(OnScanStatus)
extern "C"  void NavMeshGraph_ScanInternal_m4014595933 (NavMeshGraph_t179402474 * __this, OnScanStatus_t2412749870 * ___statusCallback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::GenerateNodes(UnityEngine.Vector3[],System.Int32[],UnityEngine.Vector3[]&,Pathfinding.Int3[]&)
extern "C"  void NavMeshGraph_GenerateNodes_m1509476006 (NavMeshGraph_t179402474 * __this, Vector3U5BU5D_t3227571696* ___vectorVertices0, Int32U5BU5D_t1809983122* ___triangles1, Vector3U5BU5D_t3227571696** ___originalVertices2, Int3U5BU5D_t1705908273** ___vertices3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::RebuildBBTree(Pathfinding.NavMeshGraph)
extern "C"  void NavMeshGraph_RebuildBBTree_m670406914 (Il2CppObject * __this /* static, unused */, NavMeshGraph_t179402474 * ___graph0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::PostProcess()
extern "C"  void NavMeshGraph_PostProcess_m411278080 (NavMeshGraph_t179402474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::OnDrawGizmos(System.Boolean)
extern "C"  void NavMeshGraph_OnDrawGizmos_m4052405380 (NavMeshGraph_t179402474 * __this, bool ___drawNodes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::DeserializeExtraInfo(Pathfinding.Serialization.GraphSerializationContext)
extern "C"  void NavMeshGraph_DeserializeExtraInfo_m1396531517 (NavMeshGraph_t179402474 * __this, GraphSerializationContext_t387880975 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::SerializeExtraInfo(Pathfinding.Serialization.GraphSerializationContext)
extern "C"  void NavMeshGraph_SerializeExtraInfo_m1832357086 (NavMeshGraph_t179402474 * __this, GraphSerializationContext_t387880975 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
