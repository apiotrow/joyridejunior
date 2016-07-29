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

// Pathfinding.PointGraph
struct PointGraph_t1637416714;
// Pathfinding.GraphNodeDelegateCancelable
struct GraphNodeDelegateCancelable_t4016762869;
// Pathfinding.NNConstraint
struct NNConstraint_t3253238025;
// Pathfinding.GraphNode
struct GraphNode_t3525007772;
// Pathfinding.PointNode
struct PointNode_t1968241886;
// UnityEngine.Transform
struct Transform_t284553113;
// OnScanStatus
struct OnScanStatus_t2412749870;
// Pathfinding.Serialization.GraphSerializationContext
struct GraphSerializationContext_t387880975;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNodeDelegateCan4016762869.h"
#include "AssemblyU2DCSharp_Pathfinding_NNInfo707309530.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_Pathfinding_NNConstraint3253238025.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"
#include "AssemblyU2DCSharp_Pathfinding_Int32697168784.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "AssemblyU2DCSharp_Pathfinding_PointNode1968241886.h"
#include "AssemblyU2DCSharp_OnScanStatus2412749870.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "AssemblyU2DCSharp_Pathfinding_Serialization_GraphSe387880975.h"

// System.Void Pathfinding.PointGraph::.ctor()
extern "C"  void PointGraph__ctor_m433397587 (PointGraph_t1637416714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.PointGraph::CountNodes()
extern "C"  int32_t PointGraph_CountNodes_m2454933761 (PointGraph_t1637416714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointGraph::GetNodes(Pathfinding.GraphNodeDelegateCancelable)
extern "C"  void PointGraph_GetNodes_m514220455 (PointGraph_t1637416714 * __this, GraphNodeDelegateCancelable_t4016762869 * ___del0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.PointGraph::GetNearest(UnityEngine.Vector3,Pathfinding.NNConstraint,Pathfinding.GraphNode)
extern "C"  NNInfo_t707309530  PointGraph_GetNearest_m1758396842 (PointGraph_t1637416714 * __this, Vector3_t3525329789  ___position0, NNConstraint_t3253238025 * ___constraint1, GraphNode_t3525007772 * ___hint2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.PointGraph::GetNearestForce(UnityEngine.Vector3,Pathfinding.NNConstraint)
extern "C"  NNInfo_t707309530  PointGraph_GetNearestForce_m3060068341 (PointGraph_t1637416714 * __this, Vector3_t3525329789  ___position0, NNConstraint_t3253238025 * ___constraint1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.PointNode Pathfinding.PointGraph::AddNode(Pathfinding.Int3)
extern "C"  PointNode_t1968241886 * PointGraph_AddNode_m2476736955 (PointGraph_t1637416714 * __this, Int3_t2697168784  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.PointGraph::CountChildren(UnityEngine.Transform)
extern "C"  int32_t PointGraph_CountChildren_m3556285580 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___tr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointGraph::AddChildren(System.Int32&,UnityEngine.Transform)
extern "C"  void PointGraph_AddChildren_m228609 (PointGraph_t1637416714 * __this, int32_t* ___c0, Transform_t284553113 * ___tr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointGraph::RebuildNodeLookup()
extern "C"  void PointGraph_RebuildNodeLookup_m1925030728 (PointGraph_t1637416714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointGraph::AddToLookup(Pathfinding.PointNode)
extern "C"  void PointGraph_AddToLookup_m551408579 (PointGraph_t1637416714 * __this, PointNode_t1968241886 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointGraph::ScanInternal(OnScanStatus)
extern "C"  void PointGraph_ScanInternal_m3409169405 (PointGraph_t1637416714 * __this, OnScanStatus_t2412749870 * ___statusCallback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.PointGraph::IsValidConnection(Pathfinding.GraphNode,Pathfinding.GraphNode,System.Single&)
extern "C"  bool PointGraph_IsValidConnection_m2358701986 (PointGraph_t1637416714 * __this, GraphNode_t3525007772 * ___a0, GraphNode_t3525007772 * ___b1, float* ___dist2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointGraph::PostDeserialization()
extern "C"  void PointGraph_PostDeserialization_m1572449536 (PointGraph_t1637416714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointGraph::RelocateNodes(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C"  void PointGraph_RelocateNodes_m3486039217 (PointGraph_t1637416714 * __this, Matrix4x4_t277289660  ___oldMatrix0, Matrix4x4_t277289660  ___newMatrix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointGraph::SerializeExtraInfo(Pathfinding.Serialization.GraphSerializationContext)
extern "C"  void PointGraph_SerializeExtraInfo_m2033558590 (PointGraph_t1637416714 * __this, GraphSerializationContext_t387880975 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointGraph::DeserializeExtraInfo(Pathfinding.Serialization.GraphSerializationContext)
extern "C"  void PointGraph_DeserializeExtraInfo_m1477648541 (PointGraph_t1637416714 * __this, GraphSerializationContext_t387880975 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
