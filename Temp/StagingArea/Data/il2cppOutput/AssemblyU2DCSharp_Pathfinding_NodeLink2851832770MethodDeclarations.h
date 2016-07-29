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

// Pathfinding.NodeLink2
struct NodeLink2_t851832770;
// Pathfinding.GraphNode
struct GraphNode_t3525007772;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// System.Void Pathfinding.NodeLink2::.ctor()
extern "C"  void NodeLink2__ctor_m243746367 (NodeLink2_t851832770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::.cctor()
extern "C"  void NodeLink2__cctor_m2779073870 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NodeLink2 Pathfinding.NodeLink2::GetNodeLink(Pathfinding.GraphNode)
extern "C"  NodeLink2_t851832770 * NodeLink2_GetNodeLink_m366235926 (Il2CppObject * __this /* static, unused */, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Pathfinding.NodeLink2::get_StartTransform()
extern "C"  Transform_t284553113 * NodeLink2_get_StartTransform_m3575167354 (NodeLink2_t851832770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Pathfinding.NodeLink2::get_EndTransform()
extern "C"  Transform_t284553113 * NodeLink2_get_EndTransform_m3679110945 (NodeLink2_t851832770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GraphNode Pathfinding.NodeLink2::get_StartNode()
extern "C"  GraphNode_t3525007772 * NodeLink2_get_StartNode_m3699144389 (NodeLink2_t851832770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GraphNode Pathfinding.NodeLink2::get_EndNode()
extern "C"  GraphNode_t3525007772 * NodeLink2_get_EndNode_m1203276926 (NodeLink2_t851832770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::OnPostScan()
extern "C"  void NodeLink2_OnPostScan_m1065549665 (NodeLink2_t851832770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::InternalOnPostScan()
extern "C"  void NodeLink2_InternalOnPostScan_m663585470 (NodeLink2_t851832770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::OnGraphsPostUpdate()
extern "C"  void NodeLink2_OnGraphsPostUpdate_m2431277362 (NodeLink2_t851832770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::OnEnable()
extern "C"  void NodeLink2_OnEnable_m729900263 (NodeLink2_t851832770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::OnDisable()
extern "C"  void NodeLink2_OnDisable_m1593008934 (NodeLink2_t851832770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::RemoveConnections(Pathfinding.GraphNode)
extern "C"  void NodeLink2_RemoveConnections_m2558558302 (NodeLink2_t851832770 * __this, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::ContextApplyForce()
extern "C"  void NodeLink2_ContextApplyForce_m1521743241 (NodeLink2_t851832770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::Apply(System.Boolean)
extern "C"  void NodeLink2_Apply_m395485570 (NodeLink2_t851832770 * __this, bool ___forceNewCheck0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::DrawCircle(UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.Color)
extern "C"  void NodeLink2_DrawCircle_m1566258962 (NodeLink2_t851832770 * __this, Vector3_t3525329789  ___o0, float ___r1, int32_t ___detail2, Color_t1588175760  ___col3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::DrawGizmoBezier(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void NodeLink2_DrawGizmoBezier_m1166937210 (NodeLink2_t851832770 * __this, Vector3_t3525329789  ___p10, Vector3_t3525329789  ___p21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::OnDrawGizmosSelected()
extern "C"  void NodeLink2_OnDrawGizmosSelected_m332835324 (NodeLink2_t851832770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::OnDrawGizmos()
extern "C"  void NodeLink2_OnDrawGizmos_m3864139265 (NodeLink2_t851832770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::OnDrawGizmos(System.Boolean)
extern "C"  void NodeLink2_OnDrawGizmos_m2788537784 (NodeLink2_t851832770 * __this, bool ___selected0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.NodeLink2::<OnPostScan>m__B(System.Boolean)
extern "C"  bool NodeLink2_U3COnPostScanU3Em__B_m279240707 (NodeLink2_t851832770 * __this, bool ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
