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

// Pathfinding.NodeLink3
struct NodeLink3_t851832771;
// Pathfinding.GraphNode
struct GraphNode_t3525007772;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// System.Void Pathfinding.NodeLink3::.ctor()
extern "C"  void NodeLink3__ctor_m47232862 (NodeLink3_t851832771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::.cctor()
extern "C"  void NodeLink3__cctor_m982122511 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NodeLink3 Pathfinding.NodeLink3::GetNodeLink(Pathfinding.GraphNode)
extern "C"  NodeLink3_t851832771 * NodeLink3_GetNodeLink_m976351576 (Il2CppObject * __this /* static, unused */, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Pathfinding.NodeLink3::get_StartTransform()
extern "C"  Transform_t284553113 * NodeLink3_get_StartTransform_m524964539 (NodeLink3_t851832771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Pathfinding.NodeLink3::get_EndTransform()
extern "C"  Transform_t284553113 * NodeLink3_get_EndTransform_m3890461858 (NodeLink3_t851832771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GraphNode Pathfinding.NodeLink3::get_StartNode()
extern "C"  GraphNode_t3525007772 * NodeLink3_get_StartNode_m2702072036 (NodeLink3_t851832771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GraphNode Pathfinding.NodeLink3::get_EndNode()
extern "C"  GraphNode_t3525007772 * NodeLink3_get_EndNode_m692742749 (NodeLink3_t851832771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::OnPostScan()
extern "C"  void NodeLink3_OnPostScan_m2573101474 (NodeLink3_t851832771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::InternalOnPostScan()
extern "C"  void NodeLink3_InternalOnPostScan_m1908349951 (NodeLink3_t851832771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::OnGraphsPostUpdate()
extern "C"  void NodeLink3_OnGraphsPostUpdate_m3676041843 (NodeLink3_t851832771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::OnEnable()
extern "C"  void NodeLink3_OnEnable_m436497256 (NodeLink3_t851832771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::OnDisable()
extern "C"  void NodeLink3_OnDisable_m1087450309 (NodeLink3_t851832771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::RemoveConnections(Pathfinding.GraphNode)
extern "C"  void NodeLink3_RemoveConnections_m2109861663 (NodeLink3_t851832771 * __this, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::ContextApplyForce()
extern "C"  void NodeLink3_ContextApplyForce_m3778654248 (NodeLink3_t851832771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::Apply(System.Boolean)
extern "C"  void NodeLink3_Apply_m328478817 (NodeLink3_t851832771 * __this, bool ___forceNewCheck0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::DrawCircle(UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.Color)
extern "C"  void NodeLink3_DrawCircle_m1686378835 (NodeLink3_t851832771 * __this, Vector3_t3525329789  ___o0, float ___r1, int32_t ___detail2, Color_t1588175760  ___col3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::DrawGizmoBezier(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void NodeLink3_DrawGizmoBezier_m1447287099 (NodeLink3_t851832771 * __this, Vector3_t3525329789  ___p10, Vector3_t3525329789  ___p21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::OnDrawGizmosSelected()
extern "C"  void NodeLink3_OnDrawGizmosSelected_m2550593277 (NodeLink3_t851832771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::OnDrawGizmos()
extern "C"  void NodeLink3_OnDrawGizmos_m922481666 (NodeLink3_t851832771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::OnDrawGizmos(System.Boolean)
extern "C"  void NodeLink3_OnDrawGizmos_m3139337721 (NodeLink3_t851832771 * __this, bool ___selected0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.NodeLink3::<OnPostScan>m__13(System.Boolean)
extern "C"  bool NodeLink3_U3COnPostScanU3Em__13_m475775312 (NodeLink3_t851832771 * __this, bool ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
