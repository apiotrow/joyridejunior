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

// Pathfinding.NavGraph
struct NavGraph_t535983959;
// Pathfinding.NNConstraint
struct NNConstraint_t3253238025;
// Pathfinding.GraphNode
struct GraphNode_t3525007772;
// Pathfinding.PathHandler
struct PathHandler_t2800540817;
// Pathfinding.Serialization.GraphSerializationContext
struct GraphSerializationContext_t387880975;
// Pathfinding.Path
struct Path_t2697364881;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_Util_Guid3965255757.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "AssemblyU2DCSharp_Pathfinding_NNInfo707309530.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_Pathfinding_NNConstraint3253238025.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "AssemblyU2DCSharp_Pathfinding_PathHandler2800540817.h"
#include "AssemblyU2DCSharp_Pathfinding_Serialization_GraphSe387880975.h"
#include "AssemblyU2DCSharp_Pathfinding_Path2697364881.h"

// System.Void Pathfinding.NavGraph::.ctor()
extern "C"  void NavGraph__ctor_m3490449702 (NavGraph_t535983959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Util.Guid Pathfinding.NavGraph::get_guid()
extern "C"  Guid_t3965255757  NavGraph_get_guid_m521667096 (NavGraph_t535983959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavGraph::set_guid(Pathfinding.Util.Guid)
extern "C"  void NavGraph_set_guid_m3323292131 (NavGraph_t535983959 * __this, Guid_t3965255757  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.NavGraph::CountNodes()
extern "C"  int32_t NavGraph_CountNodes_m534904462 (NavGraph_t535983959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavGraph::SetMatrix(UnityEngine.Matrix4x4)
extern "C"  void NavGraph_SetMatrix_m3348298771 (NavGraph_t535983959 * __this, Matrix4x4_t277289660  ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavGraph::RelocateNodes(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C"  void NavGraph_RelocateNodes_m3621416958 (NavGraph_t535983959 * __this, Matrix4x4_t277289660  ___oldMatrix0, Matrix4x4_t277289660  ___newMatrix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.NavGraph::GetNearest(UnityEngine.Vector3)
extern "C"  NNInfo_t707309530  NavGraph_GetNearest_m3100844558 (NavGraph_t535983959 * __this, Vector3_t3525329789  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.NavGraph::GetNearest(UnityEngine.Vector3,Pathfinding.NNConstraint)
extern "C"  NNInfo_t707309530  NavGraph_GetNearest_m3442751057 (NavGraph_t535983959 * __this, Vector3_t3525329789  ___position0, NNConstraint_t3253238025 * ___constraint1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.NavGraph::GetNearest(UnityEngine.Vector3,Pathfinding.NNConstraint,Pathfinding.GraphNode)
extern "C"  NNInfo_t707309530  NavGraph_GetNearest_m3036295607 (NavGraph_t535983959 * __this, Vector3_t3525329789  ___position0, NNConstraint_t3253238025 * ___constraint1, GraphNode_t3525007772 * ___hint2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.NavGraph::GetNearestForce(UnityEngine.Vector3,Pathfinding.NNConstraint)
extern "C"  NNInfo_t707309530  NavGraph_GetNearestForce_m2355761224 (NavGraph_t535983959 * __this, Vector3_t3525329789  ___position0, NNConstraint_t3253238025 * ___constraint1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavGraph::Awake()
extern "C"  void NavGraph_Awake_m3728054921 (NavGraph_t535983959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavGraph::OnDestroy()
extern "C"  void NavGraph_OnDestroy_m4207467295 (NavGraph_t535983959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavGraph::ScanGraph()
extern "C"  void NavGraph_ScanGraph_m636728661 (NavGraph_t535983959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavGraph::Scan()
extern "C"  void NavGraph_Scan_m1864041115 (NavGraph_t535983959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavGraph::ScanInternal()
extern "C"  void NavGraph_ScanInternal_m2683547704 (NavGraph_t535983959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Pathfinding.NavGraph::NodeColor(Pathfinding.GraphNode,Pathfinding.PathHandler)
extern "C"  Color_t1588175760  NavGraph_NodeColor_m1429109407 (NavGraph_t535983959 * __this, GraphNode_t3525007772 * ___node0, PathHandler_t2800540817 * ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavGraph::SerializeExtraInfo(Pathfinding.Serialization.GraphSerializationContext)
extern "C"  void NavGraph_SerializeExtraInfo_m3631511057 (NavGraph_t535983959 * __this, GraphSerializationContext_t387880975 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavGraph::DeserializeExtraInfo(Pathfinding.Serialization.GraphSerializationContext)
extern "C"  void NavGraph_DeserializeExtraInfo_m3806644656 (NavGraph_t535983959 * __this, GraphSerializationContext_t387880975 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavGraph::PostDeserialization()
extern "C"  void NavGraph_PostDeserialization_m3237833107 (NavGraph_t535983959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.NavGraph::InSearchTree(Pathfinding.GraphNode,Pathfinding.Path)
extern "C"  bool NavGraph_InSearchTree_m2369252776 (Il2CppObject * __this /* static, unused */, GraphNode_t3525007772 * ___node0, Path_t2697364881 * ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavGraph::OnDrawGizmos(System.Boolean)
extern "C"  void NavGraph_OnDrawGizmos_m2034866481 (NavGraph_t535983959 * __this, bool ___drawNodes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavGraph::UnloadGizmoMeshes()
extern "C"  void NavGraph_UnloadGizmoMeshes_m2682899258 (NavGraph_t535983959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.NavGraph::<OnDestroy>m__1E(Pathfinding.GraphNode)
extern "C"  bool NavGraph_U3COnDestroyU3Em__1E_m2995337720 (Il2CppObject * __this /* static, unused */, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
