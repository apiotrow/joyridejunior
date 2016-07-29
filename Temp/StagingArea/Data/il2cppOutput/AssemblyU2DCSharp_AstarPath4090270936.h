#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Pathfinding.AstarData
struct AstarData_t2489830825;
// AstarPath
struct AstarPath_t4090270936;
// Pathfinding.AstarColor
struct AstarColor_t632668764;
// System.String[]
struct StringU5BU5D_t2956870243;
// Pathfinding.Path
struct Path_t2697364881;
// System.Action
struct Action_t437523947;
// OnGraphDelegate
struct OnGraphDelegate_t381382964;
// OnPathDelegate
struct OnPathDelegate_t598607977;
// OnScanDelegate
struct OnScanDelegate_t3165885121;
// System.Collections.Generic.Queue`1<Pathfinding.GraphUpdateObject>
struct Queue_1_t1691558902;
// System.Collections.Generic.Stack`1<Pathfinding.GraphNode>
struct Stack_1_t1800446511;
// Pathfinding.ThreadControlQueue
struct ThreadControlQueue_t881369674;
// System.Threading.Thread[]
struct ThreadU5BU5D_t1869883936;
// Pathfinding.PathThreadInfo[]
struct PathThreadInfoU5BU5D_t308636532;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// Pathfinding.Util.LockFreeStack
struct LockFreeStack_t490340373;
// Pathfinding.EuclideanEmbedding
struct EuclideanEmbedding_t4219465605;
// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t1122853526;
// System.Collections.Generic.Queue`1<AstarPath/GUOSingle>
struct Queue_1_t3912745405;
// System.Object
struct Il2CppObject;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t1189026461;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t2399218676;
// System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>
struct Queue_1_t2109259243;
// Pathfinding.GraphNodeDelegateCancelable
struct GraphNodeDelegateCancelable_t4016762869;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_AstarPath_AstarDistribution4262075447.h"
#include "AssemblyU2DCSharp_GraphDebugMode2460853512.h"
#include "AssemblyU2DCSharp_PathLog873181375.h"
#include "AssemblyU2DCSharp_Heuristic2765431530.h"
#include "AssemblyU2DCSharp_ThreadCount3572904197.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AstarPath
struct  AstarPath_t4090270936  : public MonoBehaviour_t3012272455
{
public:
	// Pathfinding.AstarData AstarPath::astarData
	AstarData_t2489830825 * ___astarData_5;
	// System.Boolean AstarPath::showNavGraphs
	bool ___showNavGraphs_7;
	// System.Boolean AstarPath::showUnwalkableNodes
	bool ___showUnwalkableNodes_8;
	// GraphDebugMode AstarPath::debugMode
	int32_t ___debugMode_9;
	// System.Single AstarPath::debugFloor
	float ___debugFloor_10;
	// System.Single AstarPath::debugRoof
	float ___debugRoof_11;
	// System.Boolean AstarPath::manualDebugFloorRoof
	bool ___manualDebugFloorRoof_12;
	// System.Boolean AstarPath::showSearchTree
	bool ___showSearchTree_13;
	// System.Single AstarPath::unwalkableNodeDebugSize
	float ___unwalkableNodeDebugSize_14;
	// PathLog AstarPath::logPathResults
	int32_t ___logPathResults_15;
	// System.Single AstarPath::maxNearestNodeDistance
	float ___maxNearestNodeDistance_16;
	// System.Boolean AstarPath::scanOnStartup
	bool ___scanOnStartup_17;
	// System.Boolean AstarPath::fullGetNearestSearch
	bool ___fullGetNearestSearch_18;
	// System.Boolean AstarPath::prioritizeGraphs
	bool ___prioritizeGraphs_19;
	// System.Single AstarPath::prioritizeGraphsLimit
	float ___prioritizeGraphsLimit_20;
	// Pathfinding.AstarColor AstarPath::colorSettings
	AstarColor_t632668764 * ___colorSettings_21;
	// System.String[] AstarPath::tagNames
	StringU5BU5D_t2956870243* ___tagNames_22;
	// Heuristic AstarPath::heuristic
	int32_t ___heuristic_23;
	// System.Single AstarPath::heuristicScale
	float ___heuristicScale_24;
	// ThreadCount AstarPath::threadCount
	int32_t ___threadCount_25;
	// System.Single AstarPath::maxFrameTime
	float ___maxFrameTime_26;
	// System.Int32 AstarPath::minAreaSize
	int32_t ___minAreaSize_27;
	// System.Boolean AstarPath::batchGraphUpdates
	bool ___batchGraphUpdates_28;
	// System.Single AstarPath::graphUpdateBatchingInterval
	float ___graphUpdateBatchingInterval_29;
	// System.Single AstarPath::lastScanTime
	float ___lastScanTime_30;
	// Pathfinding.Path AstarPath::debugPath
	Path_t2697364881 * ___debugPath_31;
	// System.String AstarPath::inGameDebugPath
	String_t* ___inGameDebugPath_32;
	// System.Boolean AstarPath::graphUpdateRoutineRunning
	bool ___graphUpdateRoutineRunning_33;
	// System.Boolean AstarPath::isRegisteredForUpdate
	bool ___isRegisteredForUpdate_34;
	// System.Boolean AstarPath::workItemsQueued
	bool ___workItemsQueued_35;
	// System.Boolean AstarPath::queuedWorkItemFloodFill
	bool ___queuedWorkItemFloodFill_36;
	// System.Action AstarPath::OnDrawGizmosCallback
	Action_t437523947 * ___OnDrawGizmosCallback_48;
	// System.Action AstarPath::OnUnloadGizmoMeshes
	Action_t437523947 * ___OnUnloadGizmoMeshes_49;
	// System.Action AstarPath::OnGraphsWillBeUpdated
	Action_t437523947 * ___OnGraphsWillBeUpdated_50;
	// System.Action AstarPath::OnGraphsWillBeUpdated2
	Action_t437523947 * ___OnGraphsWillBeUpdated2_51;
	// System.Collections.Generic.Queue`1<Pathfinding.GraphUpdateObject> AstarPath::graphUpdateQueue
	Queue_1_t1691558902 * ___graphUpdateQueue_52;
	// System.Collections.Generic.Stack`1<Pathfinding.GraphNode> AstarPath::floodStack
	Stack_1_t1800446511 * ___floodStack_53;
	// Pathfinding.ThreadControlQueue AstarPath::pathQueue
	ThreadControlQueue_t881369674 * ___pathQueue_54;
	// Pathfinding.EuclideanEmbedding AstarPath::euclideanEmbedding
	EuclideanEmbedding_t4219465605 * ___euclideanEmbedding_59;
	// System.Int32 AstarPath::nextNodeIndex
	int32_t ___nextNodeIndex_60;
	// System.Collections.Generic.Stack`1<System.Int32> AstarPath::nodeIndexPool
	Stack_1_t1122853526 * ___nodeIndexPool_61;
	// Pathfinding.Path AstarPath::pathReturnPop
	Path_t2697364881 * ___pathReturnPop_62;
	// System.Collections.Generic.Queue`1<AstarPath/GUOSingle> AstarPath::graphUpdateQueueAsync
	Queue_1_t3912745405 * ___graphUpdateQueueAsync_63;
	// System.Collections.Generic.Queue`1<AstarPath/GUOSingle> AstarPath::graphUpdateQueueRegular
	Queue_1_t3912745405 * ___graphUpdateQueueRegular_64;
	// System.Boolean AstarPath::showGraphs
	bool ___showGraphs_65;
	// System.UInt32 AstarPath::lastUniqueAreaIndex
	uint32_t ___lastUniqueAreaIndex_67;
	// System.Threading.AutoResetEvent AstarPath::graphUpdateAsyncEvent
	AutoResetEvent_t1189026461 * ___graphUpdateAsyncEvent_69;
	// System.Threading.ManualResetEvent AstarPath::processingGraphUpdatesAsync
	ManualResetEvent_t2399218676 * ___processingGraphUpdatesAsync_70;
	// System.Single AstarPath::lastGraphUpdate
	float ___lastGraphUpdate_71;
	// System.UInt16 AstarPath::nextFreePathID
	uint16_t ___nextFreePathID_72;
	// System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem> AstarPath::workItems
	Queue_1_t2109259243 * ___workItems_73;
	// System.Boolean AstarPath::processingWorkItems
	bool ___processingWorkItems_74;
	// System.Boolean AstarPath::<isScanning>k__BackingField
	bool ___U3CisScanningU3Ek__BackingField_76;

public:
	inline static int32_t get_offset_of_astarData_5() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___astarData_5)); }
	inline AstarData_t2489830825 * get_astarData_5() const { return ___astarData_5; }
	inline AstarData_t2489830825 ** get_address_of_astarData_5() { return &___astarData_5; }
	inline void set_astarData_5(AstarData_t2489830825 * value)
	{
		___astarData_5 = value;
		Il2CppCodeGenWriteBarrier(&___astarData_5, value);
	}

	inline static int32_t get_offset_of_showNavGraphs_7() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___showNavGraphs_7)); }
	inline bool get_showNavGraphs_7() const { return ___showNavGraphs_7; }
	inline bool* get_address_of_showNavGraphs_7() { return &___showNavGraphs_7; }
	inline void set_showNavGraphs_7(bool value)
	{
		___showNavGraphs_7 = value;
	}

	inline static int32_t get_offset_of_showUnwalkableNodes_8() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___showUnwalkableNodes_8)); }
	inline bool get_showUnwalkableNodes_8() const { return ___showUnwalkableNodes_8; }
	inline bool* get_address_of_showUnwalkableNodes_8() { return &___showUnwalkableNodes_8; }
	inline void set_showUnwalkableNodes_8(bool value)
	{
		___showUnwalkableNodes_8 = value;
	}

	inline static int32_t get_offset_of_debugMode_9() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___debugMode_9)); }
	inline int32_t get_debugMode_9() const { return ___debugMode_9; }
	inline int32_t* get_address_of_debugMode_9() { return &___debugMode_9; }
	inline void set_debugMode_9(int32_t value)
	{
		___debugMode_9 = value;
	}

	inline static int32_t get_offset_of_debugFloor_10() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___debugFloor_10)); }
	inline float get_debugFloor_10() const { return ___debugFloor_10; }
	inline float* get_address_of_debugFloor_10() { return &___debugFloor_10; }
	inline void set_debugFloor_10(float value)
	{
		___debugFloor_10 = value;
	}

	inline static int32_t get_offset_of_debugRoof_11() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___debugRoof_11)); }
	inline float get_debugRoof_11() const { return ___debugRoof_11; }
	inline float* get_address_of_debugRoof_11() { return &___debugRoof_11; }
	inline void set_debugRoof_11(float value)
	{
		___debugRoof_11 = value;
	}

	inline static int32_t get_offset_of_manualDebugFloorRoof_12() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___manualDebugFloorRoof_12)); }
	inline bool get_manualDebugFloorRoof_12() const { return ___manualDebugFloorRoof_12; }
	inline bool* get_address_of_manualDebugFloorRoof_12() { return &___manualDebugFloorRoof_12; }
	inline void set_manualDebugFloorRoof_12(bool value)
	{
		___manualDebugFloorRoof_12 = value;
	}

	inline static int32_t get_offset_of_showSearchTree_13() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___showSearchTree_13)); }
	inline bool get_showSearchTree_13() const { return ___showSearchTree_13; }
	inline bool* get_address_of_showSearchTree_13() { return &___showSearchTree_13; }
	inline void set_showSearchTree_13(bool value)
	{
		___showSearchTree_13 = value;
	}

	inline static int32_t get_offset_of_unwalkableNodeDebugSize_14() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___unwalkableNodeDebugSize_14)); }
	inline float get_unwalkableNodeDebugSize_14() const { return ___unwalkableNodeDebugSize_14; }
	inline float* get_address_of_unwalkableNodeDebugSize_14() { return &___unwalkableNodeDebugSize_14; }
	inline void set_unwalkableNodeDebugSize_14(float value)
	{
		___unwalkableNodeDebugSize_14 = value;
	}

	inline static int32_t get_offset_of_logPathResults_15() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___logPathResults_15)); }
	inline int32_t get_logPathResults_15() const { return ___logPathResults_15; }
	inline int32_t* get_address_of_logPathResults_15() { return &___logPathResults_15; }
	inline void set_logPathResults_15(int32_t value)
	{
		___logPathResults_15 = value;
	}

	inline static int32_t get_offset_of_maxNearestNodeDistance_16() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___maxNearestNodeDistance_16)); }
	inline float get_maxNearestNodeDistance_16() const { return ___maxNearestNodeDistance_16; }
	inline float* get_address_of_maxNearestNodeDistance_16() { return &___maxNearestNodeDistance_16; }
	inline void set_maxNearestNodeDistance_16(float value)
	{
		___maxNearestNodeDistance_16 = value;
	}

	inline static int32_t get_offset_of_scanOnStartup_17() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___scanOnStartup_17)); }
	inline bool get_scanOnStartup_17() const { return ___scanOnStartup_17; }
	inline bool* get_address_of_scanOnStartup_17() { return &___scanOnStartup_17; }
	inline void set_scanOnStartup_17(bool value)
	{
		___scanOnStartup_17 = value;
	}

	inline static int32_t get_offset_of_fullGetNearestSearch_18() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___fullGetNearestSearch_18)); }
	inline bool get_fullGetNearestSearch_18() const { return ___fullGetNearestSearch_18; }
	inline bool* get_address_of_fullGetNearestSearch_18() { return &___fullGetNearestSearch_18; }
	inline void set_fullGetNearestSearch_18(bool value)
	{
		___fullGetNearestSearch_18 = value;
	}

	inline static int32_t get_offset_of_prioritizeGraphs_19() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___prioritizeGraphs_19)); }
	inline bool get_prioritizeGraphs_19() const { return ___prioritizeGraphs_19; }
	inline bool* get_address_of_prioritizeGraphs_19() { return &___prioritizeGraphs_19; }
	inline void set_prioritizeGraphs_19(bool value)
	{
		___prioritizeGraphs_19 = value;
	}

	inline static int32_t get_offset_of_prioritizeGraphsLimit_20() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___prioritizeGraphsLimit_20)); }
	inline float get_prioritizeGraphsLimit_20() const { return ___prioritizeGraphsLimit_20; }
	inline float* get_address_of_prioritizeGraphsLimit_20() { return &___prioritizeGraphsLimit_20; }
	inline void set_prioritizeGraphsLimit_20(float value)
	{
		___prioritizeGraphsLimit_20 = value;
	}

	inline static int32_t get_offset_of_colorSettings_21() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___colorSettings_21)); }
	inline AstarColor_t632668764 * get_colorSettings_21() const { return ___colorSettings_21; }
	inline AstarColor_t632668764 ** get_address_of_colorSettings_21() { return &___colorSettings_21; }
	inline void set_colorSettings_21(AstarColor_t632668764 * value)
	{
		___colorSettings_21 = value;
		Il2CppCodeGenWriteBarrier(&___colorSettings_21, value);
	}

	inline static int32_t get_offset_of_tagNames_22() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___tagNames_22)); }
	inline StringU5BU5D_t2956870243* get_tagNames_22() const { return ___tagNames_22; }
	inline StringU5BU5D_t2956870243** get_address_of_tagNames_22() { return &___tagNames_22; }
	inline void set_tagNames_22(StringU5BU5D_t2956870243* value)
	{
		___tagNames_22 = value;
		Il2CppCodeGenWriteBarrier(&___tagNames_22, value);
	}

	inline static int32_t get_offset_of_heuristic_23() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___heuristic_23)); }
	inline int32_t get_heuristic_23() const { return ___heuristic_23; }
	inline int32_t* get_address_of_heuristic_23() { return &___heuristic_23; }
	inline void set_heuristic_23(int32_t value)
	{
		___heuristic_23 = value;
	}

	inline static int32_t get_offset_of_heuristicScale_24() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___heuristicScale_24)); }
	inline float get_heuristicScale_24() const { return ___heuristicScale_24; }
	inline float* get_address_of_heuristicScale_24() { return &___heuristicScale_24; }
	inline void set_heuristicScale_24(float value)
	{
		___heuristicScale_24 = value;
	}

	inline static int32_t get_offset_of_threadCount_25() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___threadCount_25)); }
	inline int32_t get_threadCount_25() const { return ___threadCount_25; }
	inline int32_t* get_address_of_threadCount_25() { return &___threadCount_25; }
	inline void set_threadCount_25(int32_t value)
	{
		___threadCount_25 = value;
	}

	inline static int32_t get_offset_of_maxFrameTime_26() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___maxFrameTime_26)); }
	inline float get_maxFrameTime_26() const { return ___maxFrameTime_26; }
	inline float* get_address_of_maxFrameTime_26() { return &___maxFrameTime_26; }
	inline void set_maxFrameTime_26(float value)
	{
		___maxFrameTime_26 = value;
	}

	inline static int32_t get_offset_of_minAreaSize_27() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___minAreaSize_27)); }
	inline int32_t get_minAreaSize_27() const { return ___minAreaSize_27; }
	inline int32_t* get_address_of_minAreaSize_27() { return &___minAreaSize_27; }
	inline void set_minAreaSize_27(int32_t value)
	{
		___minAreaSize_27 = value;
	}

	inline static int32_t get_offset_of_batchGraphUpdates_28() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___batchGraphUpdates_28)); }
	inline bool get_batchGraphUpdates_28() const { return ___batchGraphUpdates_28; }
	inline bool* get_address_of_batchGraphUpdates_28() { return &___batchGraphUpdates_28; }
	inline void set_batchGraphUpdates_28(bool value)
	{
		___batchGraphUpdates_28 = value;
	}

	inline static int32_t get_offset_of_graphUpdateBatchingInterval_29() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___graphUpdateBatchingInterval_29)); }
	inline float get_graphUpdateBatchingInterval_29() const { return ___graphUpdateBatchingInterval_29; }
	inline float* get_address_of_graphUpdateBatchingInterval_29() { return &___graphUpdateBatchingInterval_29; }
	inline void set_graphUpdateBatchingInterval_29(float value)
	{
		___graphUpdateBatchingInterval_29 = value;
	}

	inline static int32_t get_offset_of_lastScanTime_30() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___lastScanTime_30)); }
	inline float get_lastScanTime_30() const { return ___lastScanTime_30; }
	inline float* get_address_of_lastScanTime_30() { return &___lastScanTime_30; }
	inline void set_lastScanTime_30(float value)
	{
		___lastScanTime_30 = value;
	}

	inline static int32_t get_offset_of_debugPath_31() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___debugPath_31)); }
	inline Path_t2697364881 * get_debugPath_31() const { return ___debugPath_31; }
	inline Path_t2697364881 ** get_address_of_debugPath_31() { return &___debugPath_31; }
	inline void set_debugPath_31(Path_t2697364881 * value)
	{
		___debugPath_31 = value;
		Il2CppCodeGenWriteBarrier(&___debugPath_31, value);
	}

	inline static int32_t get_offset_of_inGameDebugPath_32() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___inGameDebugPath_32)); }
	inline String_t* get_inGameDebugPath_32() const { return ___inGameDebugPath_32; }
	inline String_t** get_address_of_inGameDebugPath_32() { return &___inGameDebugPath_32; }
	inline void set_inGameDebugPath_32(String_t* value)
	{
		___inGameDebugPath_32 = value;
		Il2CppCodeGenWriteBarrier(&___inGameDebugPath_32, value);
	}

	inline static int32_t get_offset_of_graphUpdateRoutineRunning_33() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___graphUpdateRoutineRunning_33)); }
	inline bool get_graphUpdateRoutineRunning_33() const { return ___graphUpdateRoutineRunning_33; }
	inline bool* get_address_of_graphUpdateRoutineRunning_33() { return &___graphUpdateRoutineRunning_33; }
	inline void set_graphUpdateRoutineRunning_33(bool value)
	{
		___graphUpdateRoutineRunning_33 = value;
	}

	inline static int32_t get_offset_of_isRegisteredForUpdate_34() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___isRegisteredForUpdate_34)); }
	inline bool get_isRegisteredForUpdate_34() const { return ___isRegisteredForUpdate_34; }
	inline bool* get_address_of_isRegisteredForUpdate_34() { return &___isRegisteredForUpdate_34; }
	inline void set_isRegisteredForUpdate_34(bool value)
	{
		___isRegisteredForUpdate_34 = value;
	}

	inline static int32_t get_offset_of_workItemsQueued_35() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___workItemsQueued_35)); }
	inline bool get_workItemsQueued_35() const { return ___workItemsQueued_35; }
	inline bool* get_address_of_workItemsQueued_35() { return &___workItemsQueued_35; }
	inline void set_workItemsQueued_35(bool value)
	{
		___workItemsQueued_35 = value;
	}

	inline static int32_t get_offset_of_queuedWorkItemFloodFill_36() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___queuedWorkItemFloodFill_36)); }
	inline bool get_queuedWorkItemFloodFill_36() const { return ___queuedWorkItemFloodFill_36; }
	inline bool* get_address_of_queuedWorkItemFloodFill_36() { return &___queuedWorkItemFloodFill_36; }
	inline void set_queuedWorkItemFloodFill_36(bool value)
	{
		___queuedWorkItemFloodFill_36 = value;
	}

	inline static int32_t get_offset_of_OnDrawGizmosCallback_48() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___OnDrawGizmosCallback_48)); }
	inline Action_t437523947 * get_OnDrawGizmosCallback_48() const { return ___OnDrawGizmosCallback_48; }
	inline Action_t437523947 ** get_address_of_OnDrawGizmosCallback_48() { return &___OnDrawGizmosCallback_48; }
	inline void set_OnDrawGizmosCallback_48(Action_t437523947 * value)
	{
		___OnDrawGizmosCallback_48 = value;
		Il2CppCodeGenWriteBarrier(&___OnDrawGizmosCallback_48, value);
	}

	inline static int32_t get_offset_of_OnUnloadGizmoMeshes_49() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___OnUnloadGizmoMeshes_49)); }
	inline Action_t437523947 * get_OnUnloadGizmoMeshes_49() const { return ___OnUnloadGizmoMeshes_49; }
	inline Action_t437523947 ** get_address_of_OnUnloadGizmoMeshes_49() { return &___OnUnloadGizmoMeshes_49; }
	inline void set_OnUnloadGizmoMeshes_49(Action_t437523947 * value)
	{
		___OnUnloadGizmoMeshes_49 = value;
		Il2CppCodeGenWriteBarrier(&___OnUnloadGizmoMeshes_49, value);
	}

	inline static int32_t get_offset_of_OnGraphsWillBeUpdated_50() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___OnGraphsWillBeUpdated_50)); }
	inline Action_t437523947 * get_OnGraphsWillBeUpdated_50() const { return ___OnGraphsWillBeUpdated_50; }
	inline Action_t437523947 ** get_address_of_OnGraphsWillBeUpdated_50() { return &___OnGraphsWillBeUpdated_50; }
	inline void set_OnGraphsWillBeUpdated_50(Action_t437523947 * value)
	{
		___OnGraphsWillBeUpdated_50 = value;
		Il2CppCodeGenWriteBarrier(&___OnGraphsWillBeUpdated_50, value);
	}

	inline static int32_t get_offset_of_OnGraphsWillBeUpdated2_51() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___OnGraphsWillBeUpdated2_51)); }
	inline Action_t437523947 * get_OnGraphsWillBeUpdated2_51() const { return ___OnGraphsWillBeUpdated2_51; }
	inline Action_t437523947 ** get_address_of_OnGraphsWillBeUpdated2_51() { return &___OnGraphsWillBeUpdated2_51; }
	inline void set_OnGraphsWillBeUpdated2_51(Action_t437523947 * value)
	{
		___OnGraphsWillBeUpdated2_51 = value;
		Il2CppCodeGenWriteBarrier(&___OnGraphsWillBeUpdated2_51, value);
	}

	inline static int32_t get_offset_of_graphUpdateQueue_52() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___graphUpdateQueue_52)); }
	inline Queue_1_t1691558902 * get_graphUpdateQueue_52() const { return ___graphUpdateQueue_52; }
	inline Queue_1_t1691558902 ** get_address_of_graphUpdateQueue_52() { return &___graphUpdateQueue_52; }
	inline void set_graphUpdateQueue_52(Queue_1_t1691558902 * value)
	{
		___graphUpdateQueue_52 = value;
		Il2CppCodeGenWriteBarrier(&___graphUpdateQueue_52, value);
	}

	inline static int32_t get_offset_of_floodStack_53() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___floodStack_53)); }
	inline Stack_1_t1800446511 * get_floodStack_53() const { return ___floodStack_53; }
	inline Stack_1_t1800446511 ** get_address_of_floodStack_53() { return &___floodStack_53; }
	inline void set_floodStack_53(Stack_1_t1800446511 * value)
	{
		___floodStack_53 = value;
		Il2CppCodeGenWriteBarrier(&___floodStack_53, value);
	}

	inline static int32_t get_offset_of_pathQueue_54() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___pathQueue_54)); }
	inline ThreadControlQueue_t881369674 * get_pathQueue_54() const { return ___pathQueue_54; }
	inline ThreadControlQueue_t881369674 ** get_address_of_pathQueue_54() { return &___pathQueue_54; }
	inline void set_pathQueue_54(ThreadControlQueue_t881369674 * value)
	{
		___pathQueue_54 = value;
		Il2CppCodeGenWriteBarrier(&___pathQueue_54, value);
	}

	inline static int32_t get_offset_of_euclideanEmbedding_59() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___euclideanEmbedding_59)); }
	inline EuclideanEmbedding_t4219465605 * get_euclideanEmbedding_59() const { return ___euclideanEmbedding_59; }
	inline EuclideanEmbedding_t4219465605 ** get_address_of_euclideanEmbedding_59() { return &___euclideanEmbedding_59; }
	inline void set_euclideanEmbedding_59(EuclideanEmbedding_t4219465605 * value)
	{
		___euclideanEmbedding_59 = value;
		Il2CppCodeGenWriteBarrier(&___euclideanEmbedding_59, value);
	}

	inline static int32_t get_offset_of_nextNodeIndex_60() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___nextNodeIndex_60)); }
	inline int32_t get_nextNodeIndex_60() const { return ___nextNodeIndex_60; }
	inline int32_t* get_address_of_nextNodeIndex_60() { return &___nextNodeIndex_60; }
	inline void set_nextNodeIndex_60(int32_t value)
	{
		___nextNodeIndex_60 = value;
	}

	inline static int32_t get_offset_of_nodeIndexPool_61() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___nodeIndexPool_61)); }
	inline Stack_1_t1122853526 * get_nodeIndexPool_61() const { return ___nodeIndexPool_61; }
	inline Stack_1_t1122853526 ** get_address_of_nodeIndexPool_61() { return &___nodeIndexPool_61; }
	inline void set_nodeIndexPool_61(Stack_1_t1122853526 * value)
	{
		___nodeIndexPool_61 = value;
		Il2CppCodeGenWriteBarrier(&___nodeIndexPool_61, value);
	}

	inline static int32_t get_offset_of_pathReturnPop_62() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___pathReturnPop_62)); }
	inline Path_t2697364881 * get_pathReturnPop_62() const { return ___pathReturnPop_62; }
	inline Path_t2697364881 ** get_address_of_pathReturnPop_62() { return &___pathReturnPop_62; }
	inline void set_pathReturnPop_62(Path_t2697364881 * value)
	{
		___pathReturnPop_62 = value;
		Il2CppCodeGenWriteBarrier(&___pathReturnPop_62, value);
	}

	inline static int32_t get_offset_of_graphUpdateQueueAsync_63() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___graphUpdateQueueAsync_63)); }
	inline Queue_1_t3912745405 * get_graphUpdateQueueAsync_63() const { return ___graphUpdateQueueAsync_63; }
	inline Queue_1_t3912745405 ** get_address_of_graphUpdateQueueAsync_63() { return &___graphUpdateQueueAsync_63; }
	inline void set_graphUpdateQueueAsync_63(Queue_1_t3912745405 * value)
	{
		___graphUpdateQueueAsync_63 = value;
		Il2CppCodeGenWriteBarrier(&___graphUpdateQueueAsync_63, value);
	}

	inline static int32_t get_offset_of_graphUpdateQueueRegular_64() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___graphUpdateQueueRegular_64)); }
	inline Queue_1_t3912745405 * get_graphUpdateQueueRegular_64() const { return ___graphUpdateQueueRegular_64; }
	inline Queue_1_t3912745405 ** get_address_of_graphUpdateQueueRegular_64() { return &___graphUpdateQueueRegular_64; }
	inline void set_graphUpdateQueueRegular_64(Queue_1_t3912745405 * value)
	{
		___graphUpdateQueueRegular_64 = value;
		Il2CppCodeGenWriteBarrier(&___graphUpdateQueueRegular_64, value);
	}

	inline static int32_t get_offset_of_showGraphs_65() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___showGraphs_65)); }
	inline bool get_showGraphs_65() const { return ___showGraphs_65; }
	inline bool* get_address_of_showGraphs_65() { return &___showGraphs_65; }
	inline void set_showGraphs_65(bool value)
	{
		___showGraphs_65 = value;
	}

	inline static int32_t get_offset_of_lastUniqueAreaIndex_67() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___lastUniqueAreaIndex_67)); }
	inline uint32_t get_lastUniqueAreaIndex_67() const { return ___lastUniqueAreaIndex_67; }
	inline uint32_t* get_address_of_lastUniqueAreaIndex_67() { return &___lastUniqueAreaIndex_67; }
	inline void set_lastUniqueAreaIndex_67(uint32_t value)
	{
		___lastUniqueAreaIndex_67 = value;
	}

	inline static int32_t get_offset_of_graphUpdateAsyncEvent_69() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___graphUpdateAsyncEvent_69)); }
	inline AutoResetEvent_t1189026461 * get_graphUpdateAsyncEvent_69() const { return ___graphUpdateAsyncEvent_69; }
	inline AutoResetEvent_t1189026461 ** get_address_of_graphUpdateAsyncEvent_69() { return &___graphUpdateAsyncEvent_69; }
	inline void set_graphUpdateAsyncEvent_69(AutoResetEvent_t1189026461 * value)
	{
		___graphUpdateAsyncEvent_69 = value;
		Il2CppCodeGenWriteBarrier(&___graphUpdateAsyncEvent_69, value);
	}

	inline static int32_t get_offset_of_processingGraphUpdatesAsync_70() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___processingGraphUpdatesAsync_70)); }
	inline ManualResetEvent_t2399218676 * get_processingGraphUpdatesAsync_70() const { return ___processingGraphUpdatesAsync_70; }
	inline ManualResetEvent_t2399218676 ** get_address_of_processingGraphUpdatesAsync_70() { return &___processingGraphUpdatesAsync_70; }
	inline void set_processingGraphUpdatesAsync_70(ManualResetEvent_t2399218676 * value)
	{
		___processingGraphUpdatesAsync_70 = value;
		Il2CppCodeGenWriteBarrier(&___processingGraphUpdatesAsync_70, value);
	}

	inline static int32_t get_offset_of_lastGraphUpdate_71() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___lastGraphUpdate_71)); }
	inline float get_lastGraphUpdate_71() const { return ___lastGraphUpdate_71; }
	inline float* get_address_of_lastGraphUpdate_71() { return &___lastGraphUpdate_71; }
	inline void set_lastGraphUpdate_71(float value)
	{
		___lastGraphUpdate_71 = value;
	}

	inline static int32_t get_offset_of_nextFreePathID_72() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___nextFreePathID_72)); }
	inline uint16_t get_nextFreePathID_72() const { return ___nextFreePathID_72; }
	inline uint16_t* get_address_of_nextFreePathID_72() { return &___nextFreePathID_72; }
	inline void set_nextFreePathID_72(uint16_t value)
	{
		___nextFreePathID_72 = value;
	}

	inline static int32_t get_offset_of_workItems_73() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___workItems_73)); }
	inline Queue_1_t2109259243 * get_workItems_73() const { return ___workItems_73; }
	inline Queue_1_t2109259243 ** get_address_of_workItems_73() { return &___workItems_73; }
	inline void set_workItems_73(Queue_1_t2109259243 * value)
	{
		___workItems_73 = value;
		Il2CppCodeGenWriteBarrier(&___workItems_73, value);
	}

	inline static int32_t get_offset_of_processingWorkItems_74() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___processingWorkItems_74)); }
	inline bool get_processingWorkItems_74() const { return ___processingWorkItems_74; }
	inline bool* get_address_of_processingWorkItems_74() { return &___processingWorkItems_74; }
	inline void set_processingWorkItems_74(bool value)
	{
		___processingWorkItems_74 = value;
	}

	inline static int32_t get_offset_of_U3CisScanningU3Ek__BackingField_76() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936, ___U3CisScanningU3Ek__BackingField_76)); }
	inline bool get_U3CisScanningU3Ek__BackingField_76() const { return ___U3CisScanningU3Ek__BackingField_76; }
	inline bool* get_address_of_U3CisScanningU3Ek__BackingField_76() { return &___U3CisScanningU3Ek__BackingField_76; }
	inline void set_U3CisScanningU3Ek__BackingField_76(bool value)
	{
		___U3CisScanningU3Ek__BackingField_76 = value;
	}
};

struct AstarPath_t4090270936_StaticFields
{
public:
	// AstarPath/AstarDistribution AstarPath::Distribution
	int32_t ___Distribution_2;
	// System.String AstarPath::Branch
	String_t* ___Branch_3;
	// System.Boolean AstarPath::HasPro
	bool ___HasPro_4;
	// AstarPath AstarPath::active
	AstarPath_t4090270936 * ___active_6;
	// System.Action AstarPath::OnAwakeSettings
	Action_t437523947 * ___OnAwakeSettings_37;
	// OnGraphDelegate AstarPath::OnGraphPreScan
	OnGraphDelegate_t381382964 * ___OnGraphPreScan_38;
	// OnGraphDelegate AstarPath::OnGraphPostScan
	OnGraphDelegate_t381382964 * ___OnGraphPostScan_39;
	// OnPathDelegate AstarPath::OnPathPreSearch
	OnPathDelegate_t598607977 * ___OnPathPreSearch_40;
	// OnPathDelegate AstarPath::OnPathPostSearch
	OnPathDelegate_t598607977 * ___OnPathPostSearch_41;
	// OnScanDelegate AstarPath::OnPreScan
	OnScanDelegate_t3165885121 * ___OnPreScan_42;
	// OnScanDelegate AstarPath::OnPostScan
	OnScanDelegate_t3165885121 * ___OnPostScan_43;
	// OnScanDelegate AstarPath::OnLatePostScan
	OnScanDelegate_t3165885121 * ___OnLatePostScan_44;
	// OnScanDelegate AstarPath::OnGraphsUpdated
	OnScanDelegate_t3165885121 * ___OnGraphsUpdated_45;
	// System.Action AstarPath::On65KOverflow
	Action_t437523947 * ___On65KOverflow_46;
	// System.Action AstarPath::OnThreadSafeCallback
	Action_t437523947 * ___OnThreadSafeCallback_47;
	// System.Threading.Thread[] AstarPath::threads
	ThreadU5BU5D_t1869883936* ___threads_55;
	// Pathfinding.PathThreadInfo[] AstarPath::threadInfos
	PathThreadInfoU5BU5D_t308636532* ___threadInfos_56;
	// System.Collections.IEnumerator AstarPath::threadEnumerator
	Il2CppObject * ___threadEnumerator_57;
	// Pathfinding.Util.LockFreeStack AstarPath::pathReturnStack
	LockFreeStack_t490340373 * ___pathReturnStack_58;
	// System.Boolean AstarPath::isEditor
	bool ___isEditor_66;
	// System.Object AstarPath::safeUpdateLock
	Il2CppObject * ___safeUpdateLock_68;
	// System.Int32 AstarPath::waitForPathDepth
	int32_t ___waitForPathDepth_75;
	// Pathfinding.GraphNodeDelegateCancelable AstarPath::<>f__am$cache4B
	GraphNodeDelegateCancelable_t4016762869 * ___U3CU3Ef__amU24cache4B_77;
	// Pathfinding.GraphNodeDelegateCancelable AstarPath::<>f__am$cache4C
	GraphNodeDelegateCancelable_t4016762869 * ___U3CU3Ef__amU24cache4C_78;

public:
	inline static int32_t get_offset_of_Distribution_2() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936_StaticFields, ___Distribution_2)); }
	inline int32_t get_Distribution_2() const { return ___Distribution_2; }
	inline int32_t* get_address_of_Distribution_2() { return &___Distribution_2; }
	inline void set_Distribution_2(int32_t value)
	{
		___Distribution_2 = value;
	}

	inline static int32_t get_offset_of_Branch_3() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936_StaticFields, ___Branch_3)); }
	inline String_t* get_Branch_3() const { return ___Branch_3; }
	inline String_t** get_address_of_Branch_3() { return &___Branch_3; }
	inline void set_Branch_3(String_t* value)
	{
		___Branch_3 = value;
		Il2CppCodeGenWriteBarrier(&___Branch_3, value);
	}

	inline static int32_t get_offset_of_HasPro_4() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936_StaticFields, ___HasPro_4)); }
	inline bool get_HasPro_4() const { return ___HasPro_4; }
	inline bool* get_address_of_HasPro_4() { return &___HasPro_4; }
	inline void set_HasPro_4(bool value)
	{
		___HasPro_4 = value;
	}

	inline static int32_t get_offset_of_active_6() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936_StaticFields, ___active_6)); }
	inline AstarPath_t4090270936 * get_active_6() const { return ___active_6; }
	inline AstarPath_t4090270936 ** get_address_of_active_6() { return &___active_6; }
	inline void set_active_6(AstarPath_t4090270936 * value)
	{
		___active_6 = value;
		Il2CppCodeGenWriteBarrier(&___active_6, value);
	}

	inline static int32_t get_offset_of_OnAwakeSettings_37() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936_StaticFields, ___OnAwakeSettings_37)); }
	inline Action_t437523947 * get_OnAwakeSettings_37() const { return ___OnAwakeSettings_37; }
	inline Action_t437523947 ** get_address_of_OnAwakeSettings_37() { return &___OnAwakeSettings_37; }
	inline void set_OnAwakeSettings_37(Action_t437523947 * value)
	{
		___OnAwakeSettings_37 = value;
		Il2CppCodeGenWriteBarrier(&___OnAwakeSettings_37, value);
	}

	inline static int32_t get_offset_of_OnGraphPreScan_38() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936_StaticFields, ___OnGraphPreScan_38)); }
	inline OnGraphDelegate_t381382964 * get_OnGraphPreScan_38() const { return ___OnGraphPreScan_38; }
	inline OnGraphDelegate_t381382964 ** get_address_of_OnGraphPreScan_38() { return &___OnGraphPreScan_38; }
	inline void set_OnGraphPreScan_38(OnGraphDelegate_t381382964 * value)
	{
		___OnGraphPreScan_38 = value;
		Il2CppCodeGenWriteBarrier(&___OnGraphPreScan_38, value);
	}

	inline static int32_t get_offset_of_OnGraphPostScan_39() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936_StaticFields, ___OnGraphPostScan_39)); }
	inline OnGraphDelegate_t381382964 * get_OnGraphPostScan_39() const { return ___OnGraphPostScan_39; }
	inline OnGraphDelegate_t381382964 ** get_address_of_OnGraphPostScan_39() { return &___OnGraphPostScan_39; }
	inline void set_OnGraphPostScan_39(OnGraphDelegate_t381382964 * value)
	{
		___OnGraphPostScan_39 = value;
		Il2CppCodeGenWriteBarrier(&___OnGraphPostScan_39, value);
	}

	inline static int32_t get_offset_of_OnPathPreSearch_40() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936_StaticFields, ___OnPathPreSearch_40)); }
	inline OnPathDelegate_t598607977 * get_OnPathPreSearch_40() const { return ___OnPathPreSearch_40; }
	inline OnPathDelegate_t598607977 ** get_address_of_OnPathPreSearch_40() { return &___OnPathPreSearch_40; }
	inline void set_OnPathPreSearch_40(OnPathDelegate_t598607977 * value)
	{
		___OnPathPreSearch_40 = value;
		Il2CppCodeGenWriteBarrier(&___OnPathPreSearch_40, value);
	}

	inline static int32_t get_offset_of_OnPathPostSearch_41() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936_StaticFields, ___OnPathPostSearch_41)); }
	inline OnPathDelegate_t598607977 * get_OnPathPostSearch_41() const { return ___OnPathPostSearch_41; }
	inline OnPathDelegate_t598607977 ** get_address_of_OnPathPostSearch_41() { return &___OnPathPostSearch_41; }
	inline void set_OnPathPostSearch_41(OnPathDelegate_t598607977 * value)
	{
		___OnPathPostSearch_41 = value;
		Il2CppCodeGenWriteBarrier(&___OnPathPostSearch_41, value);
	}

	inline static int32_t get_offset_of_OnPreScan_42() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936_StaticFields, ___OnPreScan_42)); }
	inline OnScanDelegate_t3165885121 * get_OnPreScan_42() const { return ___OnPreScan_42; }
	inline OnScanDelegate_t3165885121 ** get_address_of_OnPreScan_42() { return &___OnPreScan_42; }
	inline void set_OnPreScan_42(OnScanDelegate_t3165885121 * value)
	{
		___OnPreScan_42 = value;
		Il2CppCodeGenWriteBarrier(&___OnPreScan_42, value);
	}

	inline static int32_t get_offset_of_OnPostScan_43() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936_StaticFields, ___OnPostScan_43)); }
	inline OnScanDelegate_t3165885121 * get_OnPostScan_43() const { return ___OnPostScan_43; }
	inline OnScanDelegate_t3165885121 ** get_address_of_OnPostScan_43() { return &___OnPostScan_43; }
	inline void set_OnPostScan_43(OnScanDelegate_t3165885121 * value)
	{
		___OnPostScan_43 = value;
		Il2CppCodeGenWriteBarrier(&___OnPostScan_43, value);
	}

	inline static int32_t get_offset_of_OnLatePostScan_44() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936_StaticFields, ___OnLatePostScan_44)); }
	inline OnScanDelegate_t3165885121 * get_OnLatePostScan_44() const { return ___OnLatePostScan_44; }
	inline OnScanDelegate_t3165885121 ** get_address_of_OnLatePostScan_44() { return &___OnLatePostScan_44; }
	inline void set_OnLatePostScan_44(OnScanDelegate_t3165885121 * value)
	{
		___OnLatePostScan_44 = value;
		Il2CppCodeGenWriteBarrier(&___OnLatePostScan_44, value);
	}

	inline static int32_t get_offset_of_OnGraphsUpdated_45() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936_StaticFields, ___OnGraphsUpdated_45)); }
	inline OnScanDelegate_t3165885121 * get_OnGraphsUpdated_45() const { return ___OnGraphsUpdated_45; }
	inline OnScanDelegate_t3165885121 ** get_address_of_OnGraphsUpdated_45() { return &___OnGraphsUpdated_45; }
	inline void set_OnGraphsUpdated_45(OnScanDelegate_t3165885121 * value)
	{
		___OnGraphsUpdated_45 = value;
		Il2CppCodeGenWriteBarrier(&___OnGraphsUpdated_45, value);
	}

	inline static int32_t get_offset_of_On65KOverflow_46() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936_StaticFields, ___On65KOverflow_46)); }
	inline Action_t437523947 * get_On65KOverflow_46() const { return ___On65KOverflow_46; }
	inline Action_t437523947 ** get_address_of_On65KOverflow_46() { return &___On65KOverflow_46; }
	inline void set_On65KOverflow_46(Action_t437523947 * value)
	{
		___On65KOverflow_46 = value;
		Il2CppCodeGenWriteBarrier(&___On65KOverflow_46, value);
	}

	inline static int32_t get_offset_of_OnThreadSafeCallback_47() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936_StaticFields, ___OnThreadSafeCallback_47)); }
	inline Action_t437523947 * get_OnThreadSafeCallback_47() const { return ___OnThreadSafeCallback_47; }
	inline Action_t437523947 ** get_address_of_OnThreadSafeCallback_47() { return &___OnThreadSafeCallback_47; }
	inline void set_OnThreadSafeCallback_47(Action_t437523947 * value)
	{
		___OnThreadSafeCallback_47 = value;
		Il2CppCodeGenWriteBarrier(&___OnThreadSafeCallback_47, value);
	}

	inline static int32_t get_offset_of_threads_55() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936_StaticFields, ___threads_55)); }
	inline ThreadU5BU5D_t1869883936* get_threads_55() const { return ___threads_55; }
	inline ThreadU5BU5D_t1869883936** get_address_of_threads_55() { return &___threads_55; }
	inline void set_threads_55(ThreadU5BU5D_t1869883936* value)
	{
		___threads_55 = value;
		Il2CppCodeGenWriteBarrier(&___threads_55, value);
	}

	inline static int32_t get_offset_of_threadInfos_56() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936_StaticFields, ___threadInfos_56)); }
	inline PathThreadInfoU5BU5D_t308636532* get_threadInfos_56() const { return ___threadInfos_56; }
	inline PathThreadInfoU5BU5D_t308636532** get_address_of_threadInfos_56() { return &___threadInfos_56; }
	inline void set_threadInfos_56(PathThreadInfoU5BU5D_t308636532* value)
	{
		___threadInfos_56 = value;
		Il2CppCodeGenWriteBarrier(&___threadInfos_56, value);
	}

	inline static int32_t get_offset_of_threadEnumerator_57() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936_StaticFields, ___threadEnumerator_57)); }
	inline Il2CppObject * get_threadEnumerator_57() const { return ___threadEnumerator_57; }
	inline Il2CppObject ** get_address_of_threadEnumerator_57() { return &___threadEnumerator_57; }
	inline void set_threadEnumerator_57(Il2CppObject * value)
	{
		___threadEnumerator_57 = value;
		Il2CppCodeGenWriteBarrier(&___threadEnumerator_57, value);
	}

	inline static int32_t get_offset_of_pathReturnStack_58() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936_StaticFields, ___pathReturnStack_58)); }
	inline LockFreeStack_t490340373 * get_pathReturnStack_58() const { return ___pathReturnStack_58; }
	inline LockFreeStack_t490340373 ** get_address_of_pathReturnStack_58() { return &___pathReturnStack_58; }
	inline void set_pathReturnStack_58(LockFreeStack_t490340373 * value)
	{
		___pathReturnStack_58 = value;
		Il2CppCodeGenWriteBarrier(&___pathReturnStack_58, value);
	}

	inline static int32_t get_offset_of_isEditor_66() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936_StaticFields, ___isEditor_66)); }
	inline bool get_isEditor_66() const { return ___isEditor_66; }
	inline bool* get_address_of_isEditor_66() { return &___isEditor_66; }
	inline void set_isEditor_66(bool value)
	{
		___isEditor_66 = value;
	}

	inline static int32_t get_offset_of_safeUpdateLock_68() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936_StaticFields, ___safeUpdateLock_68)); }
	inline Il2CppObject * get_safeUpdateLock_68() const { return ___safeUpdateLock_68; }
	inline Il2CppObject ** get_address_of_safeUpdateLock_68() { return &___safeUpdateLock_68; }
	inline void set_safeUpdateLock_68(Il2CppObject * value)
	{
		___safeUpdateLock_68 = value;
		Il2CppCodeGenWriteBarrier(&___safeUpdateLock_68, value);
	}

	inline static int32_t get_offset_of_waitForPathDepth_75() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936_StaticFields, ___waitForPathDepth_75)); }
	inline int32_t get_waitForPathDepth_75() const { return ___waitForPathDepth_75; }
	inline int32_t* get_address_of_waitForPathDepth_75() { return &___waitForPathDepth_75; }
	inline void set_waitForPathDepth_75(int32_t value)
	{
		___waitForPathDepth_75 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4B_77() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936_StaticFields, ___U3CU3Ef__amU24cache4B_77)); }
	inline GraphNodeDelegateCancelable_t4016762869 * get_U3CU3Ef__amU24cache4B_77() const { return ___U3CU3Ef__amU24cache4B_77; }
	inline GraphNodeDelegateCancelable_t4016762869 ** get_address_of_U3CU3Ef__amU24cache4B_77() { return &___U3CU3Ef__amU24cache4B_77; }
	inline void set_U3CU3Ef__amU24cache4B_77(GraphNodeDelegateCancelable_t4016762869 * value)
	{
		___U3CU3Ef__amU24cache4B_77 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4B_77, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4C_78() { return static_cast<int32_t>(offsetof(AstarPath_t4090270936_StaticFields, ___U3CU3Ef__amU24cache4C_78)); }
	inline GraphNodeDelegateCancelable_t4016762869 * get_U3CU3Ef__amU24cache4C_78() const { return ___U3CU3Ef__amU24cache4C_78; }
	inline GraphNodeDelegateCancelable_t4016762869 ** get_address_of_U3CU3Ef__amU24cache4C_78() { return &___U3CU3Ef__amU24cache4C_78; }
	inline void set_U3CU3Ef__amU24cache4C_78(GraphNodeDelegateCancelable_t4016762869 * value)
	{
		___U3CU3Ef__amU24cache4C_78 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4C_78, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
