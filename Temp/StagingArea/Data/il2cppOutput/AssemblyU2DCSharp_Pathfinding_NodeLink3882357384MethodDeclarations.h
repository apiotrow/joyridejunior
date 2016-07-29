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

// Pathfinding.NodeLink
struct NodeLink_t3882357384;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void Pathfinding.NodeLink::.ctor()
extern "C"  void NodeLink__ctor_m3586356501 (NodeLink_t3882357384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Pathfinding.NodeLink::get_Start()
extern "C"  Transform_t284553113 * NodeLink_get_Start_m580739214 (NodeLink_t3882357384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Pathfinding.NodeLink::get_End()
extern "C"  Transform_t284553113 * NodeLink_get_End_m3634420103 (NodeLink_t3882357384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink::OnPostScan()
extern "C"  void NodeLink_OnPostScan_m2313201227 (NodeLink_t3882357384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink::InternalOnPostScan()
extern "C"  void NodeLink_InternalOnPostScan_m2876415912 (NodeLink_t3882357384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink::OnGraphsPostUpdate()
extern "C"  void NodeLink_OnGraphsPostUpdate_m349140508 (NodeLink_t3882357384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink::Apply()
extern "C"  void NodeLink_Apply_m3637459489 (NodeLink_t3882357384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink::OnDrawGizmos()
extern "C"  void NodeLink_OnDrawGizmos_m266447467 (NodeLink_t3882357384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink::DrawGizmoBezier(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void NodeLink_DrawGizmoBezier_m3447487588 (NodeLink_t3882357384 * __this, Vector3_t3525329789  ___p10, Vector3_t3525329789  ___p21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.NodeLink::<OnPostScan>m__E(System.Boolean)
extern "C"  bool NodeLink_U3COnPostScanU3Em__E_m647254232 (NodeLink_t3882357384 * __this, bool ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.NodeLink::<OnGraphsPostUpdate>m__F(System.Boolean)
extern "C"  bool NodeLink_U3COnGraphsPostUpdateU3Em__F_m3413389160 (NodeLink_t3882357384 * __this, bool ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
