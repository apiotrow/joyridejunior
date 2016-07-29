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

// AstarPath
struct AstarPath_t4090270936;
// System.Version
struct Version_t497901645;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// Pathfinding.NavGraph[]
struct NavGraphU5BU5D_t3538363758;
// Pathfinding.PathHandler
struct PathHandler_t2800540817;
// System.String[]
struct StringU5BU5D_t2956870243;
// Pathfinding.GraphNode
struct GraphNode_t3525007772;
// System.String
struct String_t;
// Pathfinding.Path
struct Path_t2697364881;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// Pathfinding.GraphUpdateObject
struct GraphUpdateObject_t4278438658;
// OnScanStatus
struct OnScanStatus_t2412749870;
// System.Action
struct Action_t437523947;
// System.Object
struct Il2CppObject;
// Pathfinding.NNConstraint
struct NNConstraint_t3253238025;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Pathfinding_Path2697364881.h"
#include "AssemblyU2DCSharp_AstarPath_AstarWorkItem401171703.h"
#include "UnityEngine_UnityEngine_Bounds3518514978.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphUpdateObject4278438658.h"
#include "AssemblyU2DCSharp_ThreadCount3572904197.h"
#include "AssemblyU2DCSharp_OnScanStatus2412749870.h"
#include "System_Core_System_Action437523947.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Pathfinding_NNInfo707309530.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_Pathfinding_NNConstraint3253238025.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"

// System.Void AstarPath::.ctor()
extern "C"  void AstarPath__ctor_m2720822163 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::.cctor()
extern "C"  void AstarPath__cctor_m2259012218 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version AstarPath::get_Version()
extern "C"  Version_t497901645 * AstarPath_get_Version_m3939887588 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] AstarPath::get_graphTypes()
extern "C"  TypeU5BU5D_t3431720054* AstarPath_get_graphTypes_m2164504589 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NavGraph[] AstarPath::get_graphs()
extern "C"  NavGraphU5BU5D_t3538363758* AstarPath_get_graphs_m1329136441 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::set_graphs(Pathfinding.NavGraph[])
extern "C"  void AstarPath_set_graphs_m3275201084 (AstarPath_t4090270936 * __this, NavGraphU5BU5D_t3538363758* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single AstarPath::get_maxNearestNodeDistanceSqr()
extern "C"  float AstarPath_get_maxNearestNodeDistanceSqr_m3317355767 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AstarPath::get_limitGraphUpdates()
extern "C"  bool AstarPath_get_limitGraphUpdates_m2672179539 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::set_limitGraphUpdates(System.Boolean)
extern "C"  void AstarPath_set_limitGraphUpdates_m3090699490 (AstarPath_t4090270936 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single AstarPath::get_maxGraphUpdateFreq()
extern "C"  float AstarPath_get_maxGraphUpdateFreq_m249557561 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::set_maxGraphUpdateFreq(System.Single)
extern "C"  void AstarPath_set_maxGraphUpdateFreq_m3529918802 (AstarPath_t4090270936 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.PathHandler AstarPath::get_debugPathData()
extern "C"  PathHandler_t2800540817 * AstarPath_get_debugPathData_m1345630914 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AstarPath::get_isScanning()
extern "C"  bool AstarPath_get_isScanning_m1258878849 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::set_isScanning(System.Boolean)
extern "C"  void AstarPath_set_isScanning_m2292242144 (AstarPath_t4090270936 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AstarPath::get_NumParallelThreads()
extern "C"  int32_t AstarPath_get_NumParallelThreads_m1627516936 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AstarPath::get_IsUsingMultithreading()
extern "C"  bool AstarPath_get_IsUsingMultithreading_m774394069 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AstarPath::get_IsAnyGraphUpdatesQueued()
extern "C"  bool AstarPath_get_IsAnyGraphUpdatesQueued_m3951572909 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] AstarPath::GetTagNames()
extern "C"  StringU5BU5D_t2956870243* AstarPath_GetTagNames_m2289517110 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] AstarPath::FindTagNames()
extern "C"  StringU5BU5D_t2956870243* AstarPath_FindTagNames_m3242431767 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 AstarPath::GetNextPathID()
extern "C"  uint16_t AstarPath_GetNextPathID_m629842959 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::OnDrawGizmos()
extern "C"  void AstarPath_OnDrawGizmos_m2312307245 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AstarPath::DrawUnwalkableNode(Pathfinding.GraphNode)
extern "C"  bool AstarPath_DrawUnwalkableNode_m3399530477 (AstarPath_t4090270936 * __this, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::OnGUI()
extern "C"  void AstarPath_OnGUI_m2216220813 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::AstarLog(System.String)
extern "C"  void AstarPath_AstarLog_m729253664 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::AstarLogError(System.String)
extern "C"  void AstarPath_AstarLogError_m2369382554 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::LogPathResults(Pathfinding.Path)
extern "C"  void AstarPath_LogPathResults_m3109937615 (AstarPath_t4090270936 * __this, Path_t2697364881 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::Update()
extern "C"  void AstarPath_Update_m173003226 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::PerformBlockingActions(System.Boolean,System.Boolean)
extern "C"  void AstarPath_PerformBlockingActions_m3513456942 (AstarPath_t4090270936 * __this, bool ___force0, bool ___unblockOnComplete1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::QueueWorkItemFloodFill()
extern "C"  void AstarPath_QueueWorkItemFloodFill_m2235952253 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::EnsureValidFloodFill()
extern "C"  void AstarPath_EnsureValidFloodFill_m601406580 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::AddWorkItem(AstarPath/AstarWorkItem)
extern "C"  void AstarPath_AddWorkItem_m2504772796 (AstarPath_t4090270936 * __this, AstarWorkItem_t401171703  ___itm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AstarPath::ProcessWorkItems(System.Boolean)
extern "C"  int32_t AstarPath_ProcessWorkItems_m2992716218 (AstarPath_t4090270936 * __this, bool ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::QueueGraphUpdates()
extern "C"  void AstarPath_QueueGraphUpdates_m769970366 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AstarPath::DelayedGraphUpdate()
extern "C"  Il2CppObject * AstarPath_DelayedGraphUpdate_m2604013502 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::UpdateGraphs(UnityEngine.Bounds,System.Single)
extern "C"  void AstarPath_UpdateGraphs_m1771258328 (AstarPath_t4090270936 * __this, Bounds_t3518514978  ___bounds0, float ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::UpdateGraphs(Pathfinding.GraphUpdateObject,System.Single)
extern "C"  void AstarPath_UpdateGraphs_m476444524 (AstarPath_t4090270936 * __this, GraphUpdateObject_t4278438658 * ___ob0, float ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AstarPath::UpdateGraphsInteral(Pathfinding.GraphUpdateObject,System.Single)
extern "C"  Il2CppObject * AstarPath_UpdateGraphsInteral_m537218201 (AstarPath_t4090270936 * __this, GraphUpdateObject_t4278438658 * ___ob0, float ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::UpdateGraphs(UnityEngine.Bounds)
extern "C"  void AstarPath_UpdateGraphs_m3213331507 (AstarPath_t4090270936 * __this, Bounds_t3518514978  ___bounds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::UpdateGraphs(Pathfinding.GraphUpdateObject)
extern "C"  void AstarPath_UpdateGraphs_m769578183 (AstarPath_t4090270936 * __this, GraphUpdateObject_t4278438658 * ___ob0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::FlushGraphUpdates()
extern "C"  void AstarPath_FlushGraphUpdates_m3279818097 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::FlushWorkItems(System.Boolean,System.Boolean)
extern "C"  void AstarPath_FlushWorkItems_m160475530 (AstarPath_t4090270936 * __this, bool ___unblockOnComplete0, bool ___block1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::QueueGraphUpdatesInternal()
extern "C"  void AstarPath_QueueGraphUpdatesInternal_m3697978203 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AstarPath::ProcessGraphUpdates(System.Boolean)
extern "C"  bool AstarPath_ProcessGraphUpdates_m3972003271 (AstarPath_t4090270936 * __this, bool ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::FlushThreadSafeCallbacks()
extern "C"  void AstarPath_FlushThreadSafeCallbacks_m4167414468 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AstarPath::CalculateThreadCount(ThreadCount)
extern "C"  int32_t AstarPath_CalculateThreadCount_m2970509611 (Il2CppObject * __this /* static, unused */, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::Awake()
extern "C"  void AstarPath_Awake_m2958427382 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::VerifyIntegrity()
extern "C"  void AstarPath_VerifyIntegrity_m2261231237 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::SetUpReferences()
extern "C"  void AstarPath_SetUpReferences_m2489625718 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::Initialize()
extern "C"  void AstarPath_Initialize_m1172842209 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::OnDisable()
extern "C"  void AstarPath_OnDisable_m383370874 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::OnDestroy()
extern "C"  void AstarPath_OnDestroy_m2560902924 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::FloodFill(Pathfinding.GraphNode)
extern "C"  void AstarPath_FloodFill_m2082902810 (AstarPath_t4090270936 * __this, GraphNode_t3525007772 * ___seed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::FloodFill(Pathfinding.GraphNode,System.UInt32)
extern "C"  void AstarPath_FloodFill_m2426607566 (AstarPath_t4090270936 * __this, GraphNode_t3525007772 * ___seed0, uint32_t ___area1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::FloodFill()
extern "C"  void AstarPath_FloodFill_m30718738 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AstarPath::GetNewNodeIndex()
extern "C"  int32_t AstarPath_GetNewNodeIndex_m4208518373 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::InitializeNode(Pathfinding.GraphNode)
extern "C"  void AstarPath_InitializeNode_m4098717257 (AstarPath_t4090270936 * __this, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::DestroyNode(Pathfinding.GraphNode)
extern "C"  void AstarPath_DestroyNode_m121720383 (AstarPath_t4090270936 * __this, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::BlockUntilPathQueueBlocked()
extern "C"  void AstarPath_BlockUntilPathQueueBlocked_m3476508770 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::Scan()
extern "C"  void AstarPath_Scan_m3778877070 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::ScanLoop(OnScanStatus)
extern "C"  void AstarPath_ScanLoop_m2760560100 (AstarPath_t4090270936 * __this, OnScanStatus_t2412749870 * ___statusCallback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::WaitForPath(Pathfinding.Path)
extern "C"  void AstarPath_WaitForPath_m3560501083 (Il2CppObject * __this /* static, unused */, Path_t2697364881 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::RegisterSafeUpdate(System.Action,System.Boolean)
extern "C"  void AstarPath_RegisterSafeUpdate_m3365001258 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___callback0, bool ___threadSafe1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::RegisterSafeUpdate(System.Action)
extern "C"  void AstarPath_RegisterSafeUpdate_m84760307 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::InterruptPathfinding()
extern "C"  void AstarPath_InterruptPathfinding_m865233010 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::StartPath(Pathfinding.Path,System.Boolean)
extern "C"  void AstarPath_StartPath_m107241012 (Il2CppObject * __this /* static, unused */, Path_t2697364881 * ___p0, bool ___pushToFront1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::OnApplicationQuit()
extern "C"  void AstarPath_OnApplicationQuit_m2120031377 (AstarPath_t4090270936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::ReturnPaths(System.Boolean)
extern "C"  void AstarPath_ReturnPaths_m666449414 (AstarPath_t4090270936 * __this, bool ___timeSlice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::CalculatePathsThreaded(System.Object)
extern "C"  void AstarPath_CalculatePathsThreaded_m187948114 (Il2CppObject * __this /* static, unused */, Il2CppObject * ____threadInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AstarPath::CalculatePaths(System.Object)
extern "C"  Il2CppObject * AstarPath_CalculatePaths_m3958168067 (Il2CppObject * __this /* static, unused */, Il2CppObject * ____threadInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo AstarPath::GetNearest(UnityEngine.Vector3)
extern "C"  NNInfo_t707309530  AstarPath_GetNearest_m3242620133 (AstarPath_t4090270936 * __this, Vector3_t3525329789  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo AstarPath::GetNearest(UnityEngine.Vector3,Pathfinding.NNConstraint)
extern "C"  NNInfo_t707309530  AstarPath_GetNearest_m1178989402 (AstarPath_t4090270936 * __this, Vector3_t3525329789  ___position0, NNConstraint_t3253238025 * ___constraint1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo AstarPath::GetNearest(UnityEngine.Vector3,Pathfinding.NNConstraint,Pathfinding.GraphNode)
extern "C"  NNInfo_t707309530  AstarPath_GetNearest_m3576599040 (AstarPath_t4090270936 * __this, Vector3_t3525329789  ___position0, NNConstraint_t3253238025 * ___constraint1, GraphNode_t3525007772 * ___hint2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GraphNode AstarPath::GetNearest(UnityEngine.Ray)
extern "C"  GraphNode_t3525007772 * AstarPath_GetNearest_m3605192179 (AstarPath_t4090270936 * __this, Ray_t1522967639  ___ray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AstarPath::<OnDrawGizmos>m__4(Pathfinding.GraphNode)
extern "C"  bool AstarPath_U3COnDrawGizmosU3Em__4_m1677834658 (AstarPath_t4090270936 * __this, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AstarPath::<FloodFill>m__5(Pathfinding.GraphNode)
extern "C"  bool AstarPath_U3CFloodFillU3Em__5_m906908166 (Il2CppObject * __this /* static, unused */, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AstarPath::<ScanLoop>m__7(Pathfinding.GraphNode)
extern "C"  bool AstarPath_U3CScanLoopU3Em__7_m2489211300 (Il2CppObject * __this /* static, unused */, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
