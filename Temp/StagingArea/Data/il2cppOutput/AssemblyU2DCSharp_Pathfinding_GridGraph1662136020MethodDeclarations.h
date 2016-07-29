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

// Pathfinding.GridGraph
struct GridGraph_t1662136020;
// Pathfinding.GraphNodeDelegateCancelable
struct GraphNodeDelegateCancelable_t4016762869;
// Pathfinding.GridNode
struct GridNode_t3077417940;
// Pathfinding.NNConstraint
struct NNConstraint_t3253238025;
// Pathfinding.GraphNode
struct GraphNode_t3525007772;
// OnScanStatus
struct OnScanStatus_t2412749870;
// Pathfinding.GridNode[]
struct GridNodeU5BU5D_t1318463069;
// AstarPath
struct AstarPath_t4090270936;
// System.Collections.Generic.List`1<Pathfinding.GraphNode>
struct List_1_t26999445;
// Pathfinding.GraphUpdateShape
struct GraphUpdateShape_t2195642262;
// Pathfinding.GraphUpdateObject
struct GraphUpdateObject_t4278438658;
// Pathfinding.Serialization.GraphSerializationContext
struct GraphSerializationContext_t387880975;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNodeDelegateCan4016762869.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "AssemblyU2DCSharp_Pathfinding_Int32697168784.h"
#include "AssemblyU2DCSharp_Pathfinding_GridNode3077417940.h"
#include "AssemblyU2DCSharp_Pathfinding_NNInfo707309530.h"
#include "AssemblyU2DCSharp_Pathfinding_NNConstraint3253238025.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"
#include "AssemblyU2DCSharp_OnScanStatus2412749870.h"
#include "AssemblyU2DCSharp_AstarPath4090270936.h"
#include "UnityEngine_UnityEngine_Bounds3518514978.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphUpdateShape2195642262.h"
#include "AssemblyU2DCSharp_GraphUpdateThreading3958092737.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphUpdateObject4278438658.h"
#include "AssemblyU2DCSharp_Pathfinding_Serialization_GraphSe387880975.h"

// System.Void Pathfinding.GridGraph::.ctor()
extern "C"  void GridGraph__ctor_m3015433069 (GridGraph_t1662136020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::.cctor()
extern "C"  void GridGraph__cctor_m2802015712 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::OnDestroy()
extern "C"  void GridGraph_OnDestroy_m36188646 (GridGraph_t1662136020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::RemoveGridGraphFromStatic()
extern "C"  void GridGraph_RemoveGridGraphFromStatic_m2348040167 (GridGraph_t1662136020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GridGraph::get_uniformWidthDepthGrid()
extern "C"  bool GridGraph_get_uniformWidthDepthGrid_m3918765581 (GridGraph_t1662136020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.GridGraph::CountNodes()
extern "C"  int32_t GridGraph_CountNodes_m99030347 (GridGraph_t1662136020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::GetNodes(Pathfinding.GraphNodeDelegateCancelable)
extern "C"  void GridGraph_GetNodes_m1325882689 (GridGraph_t1662136020 * __this, GraphNodeDelegateCancelable_t4016762869 * ___del0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GridGraph::get_useRaycastNormal()
extern "C"  bool GridGraph_get_useRaycastNormal_m1764918677 (GridGraph_t1662136020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Pathfinding.GridGraph::get_size()
extern "C"  Vector2_t3525329788  GridGraph_get_size_m3735662566 (GridGraph_t1662136020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::set_size(UnityEngine.Vector2)
extern "C"  void GridGraph_set_size_m1081860677 (GridGraph_t1662136020 * __this, Vector2_t3525329788  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Pathfinding.GridGraph::get_boundsMatrix()
extern "C"  Matrix4x4_t277289660  GridGraph_get_boundsMatrix_m4159190331 (GridGraph_t1662136020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::set_boundsMatrix(UnityEngine.Matrix4x4)
extern "C"  void GridGraph_set_boundsMatrix_m205605072 (GridGraph_t1662136020 * __this, Matrix4x4_t277289660  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::RelocateNodes(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single,System.Single,System.Single)
extern "C"  void GridGraph_RelocateNodes_m1839366334 (GridGraph_t1662136020 * __this, Vector3_t3525329789  ___center0, Quaternion_t1891715979  ___rotation1, float ___nodeSize2, float ___aspectRatio3, float ___isometricAngle4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.GridGraph::GraphPointToWorld(System.Int32,System.Int32,System.Single)
extern "C"  Int3_t2697168784  GridGraph_GraphPointToWorld_m1035939164 (GridGraph_t1662136020 * __this, int32_t ___x0, int32_t ___z1, float ___height2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.GridGraph::get_Width()
extern "C"  int32_t GridGraph_get_Width_m3933195894 (GridGraph_t1662136020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::set_Width(System.Int32)
extern "C"  void GridGraph_set_Width_m871036997 (GridGraph_t1662136020 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.GridGraph::get_Depth()
extern "C"  int32_t GridGraph_get_Depth_m4147060787 (GridGraph_t1662136020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::set_Depth(System.Int32)
extern "C"  void GridGraph_set_Depth_m2784269954 (GridGraph_t1662136020 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.GridGraph::GetConnectionCost(System.Int32)
extern "C"  uint32_t GridGraph_GetConnectionCost_m1679782712 (GridGraph_t1662136020 * __this, int32_t ___dir0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GridNode Pathfinding.GridGraph::GetNodeConnection(Pathfinding.GridNode,System.Int32)
extern "C"  GridNode_t3077417940 * GridGraph_GetNodeConnection_m1039087165 (GridGraph_t1662136020 * __this, GridNode_t3077417940 * ___node0, int32_t ___dir1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GridGraph::HasNodeConnection(Pathfinding.GridNode,System.Int32)
extern "C"  bool GridGraph_HasNodeConnection_m4047451920 (GridGraph_t1662136020 * __this, GridNode_t3077417940 * ___node0, int32_t ___dir1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::SetNodeConnection(Pathfinding.GridNode,System.Int32,System.Boolean)
extern "C"  void GridGraph_SetNodeConnection_m842755713 (GridGraph_t1662136020 * __this, GridNode_t3077417940 * ___node0, int32_t ___dir1, bool ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GridNode Pathfinding.GridGraph::GetNodeConnection(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  GridNode_t3077417940 * GridGraph_GetNodeConnection_m3029797338 (GridGraph_t1662136020 * __this, int32_t ___index0, int32_t ___x1, int32_t ___z2, int32_t ___dir3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::SetNodeConnection(System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  void GridGraph_SetNodeConnection_m3659511556 (GridGraph_t1662136020 * __this, int32_t ___index0, int32_t ___x1, int32_t ___z2, int32_t ___dir3, bool ___value4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GridGraph::HasNodeConnection(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  bool GridGraph_HasNodeConnection_m3075841005 (GridGraph_t1662136020 * __this, int32_t ___index0, int32_t ___x1, int32_t ___z2, int32_t ___dir3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::UpdateSizeFromWidthDepth()
extern "C"  void GridGraph_UpdateSizeFromWidthDepth_m2628750312 (GridGraph_t1662136020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::GenerateMatrix()
extern "C"  void GridGraph_GenerateMatrix_m2451899597 (GridGraph_t1662136020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.GridGraph::GetNearest(UnityEngine.Vector3,Pathfinding.NNConstraint,Pathfinding.GraphNode)
extern "C"  NNInfo_t707309530  GridGraph_GetNearest_m2545602662 (GridGraph_t1662136020 * __this, Vector3_t3525329789  ___position0, NNConstraint_t3253238025 * ___constraint1, GraphNode_t3525007772 * ___hint2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.GridGraph::GetNearestForce(UnityEngine.Vector3,Pathfinding.NNConstraint)
extern "C"  NNInfo_t707309530  GridGraph_GetNearestForce_m4237975993 (GridGraph_t1662136020 * __this, Vector3_t3525329789  ___position0, NNConstraint_t3253238025 * ___constraint1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::SetUpOffsetsAndCosts()
extern "C"  void GridGraph_SetUpOffsetsAndCosts_m2746823785 (GridGraph_t1662136020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::ScanInternal(OnScanStatus)
extern "C"  void GridGraph_ScanInternal_m2339067299 (GridGraph_t1662136020 * __this, OnScanStatus_t2412749870 * ___statusCallback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::UpdateNodePositionCollision(Pathfinding.GridNode,System.Int32,System.Int32,System.Boolean)
extern "C"  void GridGraph_UpdateNodePositionCollision_m1782412518 (GridGraph_t1662136020 * __this, GridNode_t3077417940 * ___node0, int32_t ___x1, int32_t ___z2, bool ___resetPenalty3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::ErodeWalkableArea()
extern "C"  void GridGraph_ErodeWalkableArea_m1507543966 (GridGraph_t1662136020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GridGraph::ErosionAnyFalseConnections(Pathfinding.GridNode)
extern "C"  bool GridGraph_ErosionAnyFalseConnections_m3761077912 (GridGraph_t1662136020 * __this, GridNode_t3077417940 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::ErodeWalkableArea(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void GridGraph_ErodeWalkableArea_m3326541992 (GridGraph_t1662136020 * __this, int32_t ___xmin0, int32_t ___zmin1, int32_t ___xmax2, int32_t ___zmax3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GridGraph::IsValidConnection(Pathfinding.GridNode,Pathfinding.GridNode)
extern "C"  bool GridGraph_IsValidConnection_m1495545463 (GridGraph_t1662136020 * __this, GridNode_t3077417940 * ___n10, GridNode_t3077417940 * ___n21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::CalculateConnections(Pathfinding.GridNode)
extern "C"  void GridGraph_CalculateConnections_m1568126644 (Il2CppObject * __this /* static, unused */, GridNode_t3077417940 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::CalculateConnections(Pathfinding.GridNode[],System.Int32,System.Int32,Pathfinding.GridNode)
extern "C"  void GridGraph_CalculateConnections_m3706414146 (GridGraph_t1662136020 * __this, GridNodeU5BU5D_t1318463069* ___nodes0, int32_t ___x1, int32_t ___z2, GridNode_t3077417940 * ___node3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::CalculateConnections(System.Int32,System.Int32,Pathfinding.GridNode)
extern "C"  void GridGraph_CalculateConnections_m193232212 (GridGraph_t1662136020 * __this, int32_t ___x0, int32_t ___z1, GridNode_t3077417940 * ___node2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::OnPostScan(AstarPath)
extern "C"  void GridGraph_OnPostScan_m2226885319 (GridGraph_t1662136020 * __this, AstarPath_t4090270936 * ___script0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::OnDrawGizmos(System.Boolean)
extern "C"  void GridGraph_OnDrawGizmos_m187156810 (GridGraph_t1662136020 * __this, bool ___drawNodes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::GetBoundsMinMax(UnityEngine.Bounds,UnityEngine.Matrix4x4,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void GridGraph_GetBoundsMinMax_m2331453808 (Il2CppObject * __this /* static, unused */, Bounds_t3518514978  ___b0, Matrix4x4_t277289660  ___matrix1, Vector3_t3525329789 * ___min2, Vector3_t3525329789 * ___max3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Pathfinding.GraphNode> Pathfinding.GridGraph::GetNodesInArea(UnityEngine.Bounds)
extern "C"  List_1_t26999445 * GridGraph_GetNodesInArea_m275972689 (GridGraph_t1662136020 * __this, Bounds_t3518514978  ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Pathfinding.GraphNode> Pathfinding.GridGraph::GetNodesInArea(Pathfinding.GraphUpdateShape)
extern "C"  List_1_t26999445 * GridGraph_GetNodesInArea_m1984301481 (GridGraph_t1662136020 * __this, GraphUpdateShape_t2195642262 * ___shape0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Pathfinding.GraphNode> Pathfinding.GridGraph::GetNodesInArea(UnityEngine.Bounds,Pathfinding.GraphUpdateShape)
extern "C"  List_1_t26999445 * GridGraph_GetNodesInArea_m446564737 (GridGraph_t1662136020 * __this, Bounds_t3518514978  ___b0, GraphUpdateShape_t2195642262 * ___shape1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GraphUpdateThreading Pathfinding.GridGraph::CanUpdateAsync(Pathfinding.GraphUpdateObject)
extern "C"  int32_t GridGraph_CanUpdateAsync_m493328360 (GridGraph_t1662136020 * __this, GraphUpdateObject_t4278438658 * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::UpdateAreaInit(Pathfinding.GraphUpdateObject)
extern "C"  void GridGraph_UpdateAreaInit_m3766849033 (GridGraph_t1662136020 * __this, GraphUpdateObject_t4278438658 * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::UpdateArea(Pathfinding.GraphUpdateObject)
extern "C"  void GridGraph_UpdateArea_m367286073 (GridGraph_t1662136020 * __this, GraphUpdateObject_t4278438658 * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GridGraph::CheckConnection(Pathfinding.GridNode,System.Int32)
extern "C"  bool GridGraph_CheckConnection_m1451609540 (GridGraph_t1662136020 * __this, GridNode_t3077417940 * ___node0, int32_t ___dir1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::SerializeExtraInfo(Pathfinding.Serialization.GraphSerializationContext)
extern "C"  void GridGraph_SerializeExtraInfo_m1689161816 (GridGraph_t1662136020 * __this, GraphSerializationContext_t387880975 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::DeserializeExtraInfo(Pathfinding.Serialization.GraphSerializationContext)
extern "C"  void GridGraph_DeserializeExtraInfo_m1224830519 (GridGraph_t1662136020 * __this, GraphSerializationContext_t387880975 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::PostDeserialization()
extern "C"  void GridGraph_PostDeserialization_m4017107866 (GridGraph_t1662136020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
