#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnPathDelegate
struct OnPathDelegate_t598607977;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Pathfinding.GraphNode>
struct List_1_t26999445;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;
// Pathfinding.PathNode
struct PathNode_t3993763123;
// Pathfinding.NNConstraint
struct NNConstraint_t3253238025;
// Pathfinding.Path
struct Path_t2697364881;
// Pathfinding.GraphNode
struct GraphNode_t3525007772;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1634065389;
// Pathfinding.PathHandler
struct PathHandler_t2800540817;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_PathState1615290188.h"
#include "AssemblyU2DCSharp_PathCompleteState1625108115.h"
#include "AssemblyU2DCSharp_Heuristic2765431530.h"
#include "AssemblyU2DCSharp_Pathfinding_Int32697168784.h"
#include "mscorlib_System_DateTime339033936.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Path
struct  Path_t2697364881  : public Il2CppObject
{
public:
	// OnPathDelegate Pathfinding.Path::callback
	OnPathDelegate_t598607977 * ___callback_0;
	// OnPathDelegate Pathfinding.Path::immediateCallback
	OnPathDelegate_t598607977 * ___immediateCallback_1;
	// PathState Pathfinding.Path::state
	int32_t ___state_2;
	// System.Object Pathfinding.Path::stateLock
	Il2CppObject * ___stateLock_3;
	// PathCompleteState Pathfinding.Path::pathCompleteState
	int32_t ___pathCompleteState_4;
	// System.String Pathfinding.Path::_errorLog
	String_t* ____errorLog_5;
	// System.Collections.Generic.List`1<Pathfinding.GraphNode> Pathfinding.Path::path
	List_1_t26999445 * ___path_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Pathfinding.Path::vectorPath
	List_1_t27321462 * ___vectorPath_7;
	// System.Single Pathfinding.Path::maxFrameTime
	float ___maxFrameTime_8;
	// Pathfinding.PathNode Pathfinding.Path::currentR
	PathNode_t3993763123 * ___currentR_9;
	// System.Single Pathfinding.Path::duration
	float ___duration_10;
	// System.Int32 Pathfinding.Path::searchIterations
	int32_t ___searchIterations_11;
	// System.Int32 Pathfinding.Path::searchedNodes
	int32_t ___searchedNodes_12;
	// System.Boolean Pathfinding.Path::pooled
	bool ___pooled_13;
	// System.Boolean Pathfinding.Path::hasBeenReset
	bool ___hasBeenReset_14;
	// Pathfinding.NNConstraint Pathfinding.Path::nnConstraint
	NNConstraint_t3253238025 * ___nnConstraint_15;
	// Pathfinding.Path Pathfinding.Path::next
	Path_t2697364881 * ___next_16;
	// Heuristic Pathfinding.Path::heuristic
	int32_t ___heuristic_17;
	// System.Single Pathfinding.Path::heuristicScale
	float ___heuristicScale_18;
	// Pathfinding.GraphNode Pathfinding.Path::hTargetNode
	GraphNode_t3525007772 * ___hTargetNode_19;
	// Pathfinding.Int3 Pathfinding.Path::hTarget
	Int3_t2697168784  ___hTarget_20;
	// System.Int32 Pathfinding.Path::enabledTags
	int32_t ___enabledTags_21;
	// System.Int32[] Pathfinding.Path::internalTagPenalties
	Int32U5BU5D_t1809983122* ___internalTagPenalties_23;
	// System.Int32[] Pathfinding.Path::manualTagPenalties
	Int32U5BU5D_t1809983122* ___manualTagPenalties_24;
	// System.Collections.Generic.List`1<System.Object> Pathfinding.Path::claimed
	List_1_t1634065389 * ___claimed_25;
	// System.Boolean Pathfinding.Path::releasedNotSilent
	bool ___releasedNotSilent_26;
	// Pathfinding.PathHandler Pathfinding.Path::<pathHandler>k__BackingField
	PathHandler_t2800540817 * ___U3CpathHandlerU3Ek__BackingField_27;
	// System.DateTime Pathfinding.Path::<callTime>k__BackingField
	DateTime_t339033936  ___U3CcallTimeU3Ek__BackingField_28;
	// System.UInt16 Pathfinding.Path::<pathID>k__BackingField
	uint16_t ___U3CpathIDU3Ek__BackingField_29;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___callback_0)); }
	inline OnPathDelegate_t598607977 * get_callback_0() const { return ___callback_0; }
	inline OnPathDelegate_t598607977 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(OnPathDelegate_t598607977 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_immediateCallback_1() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___immediateCallback_1)); }
	inline OnPathDelegate_t598607977 * get_immediateCallback_1() const { return ___immediateCallback_1; }
	inline OnPathDelegate_t598607977 ** get_address_of_immediateCallback_1() { return &___immediateCallback_1; }
	inline void set_immediateCallback_1(OnPathDelegate_t598607977 * value)
	{
		___immediateCallback_1 = value;
		Il2CppCodeGenWriteBarrier(&___immediateCallback_1, value);
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___state_2)); }
	inline int32_t get_state_2() const { return ___state_2; }
	inline int32_t* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(int32_t value)
	{
		___state_2 = value;
	}

	inline static int32_t get_offset_of_stateLock_3() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___stateLock_3)); }
	inline Il2CppObject * get_stateLock_3() const { return ___stateLock_3; }
	inline Il2CppObject ** get_address_of_stateLock_3() { return &___stateLock_3; }
	inline void set_stateLock_3(Il2CppObject * value)
	{
		___stateLock_3 = value;
		Il2CppCodeGenWriteBarrier(&___stateLock_3, value);
	}

	inline static int32_t get_offset_of_pathCompleteState_4() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___pathCompleteState_4)); }
	inline int32_t get_pathCompleteState_4() const { return ___pathCompleteState_4; }
	inline int32_t* get_address_of_pathCompleteState_4() { return &___pathCompleteState_4; }
	inline void set_pathCompleteState_4(int32_t value)
	{
		___pathCompleteState_4 = value;
	}

	inline static int32_t get_offset_of__errorLog_5() { return static_cast<int32_t>(offsetof(Path_t2697364881, ____errorLog_5)); }
	inline String_t* get__errorLog_5() const { return ____errorLog_5; }
	inline String_t** get_address_of__errorLog_5() { return &____errorLog_5; }
	inline void set__errorLog_5(String_t* value)
	{
		____errorLog_5 = value;
		Il2CppCodeGenWriteBarrier(&____errorLog_5, value);
	}

	inline static int32_t get_offset_of_path_6() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___path_6)); }
	inline List_1_t26999445 * get_path_6() const { return ___path_6; }
	inline List_1_t26999445 ** get_address_of_path_6() { return &___path_6; }
	inline void set_path_6(List_1_t26999445 * value)
	{
		___path_6 = value;
		Il2CppCodeGenWriteBarrier(&___path_6, value);
	}

	inline static int32_t get_offset_of_vectorPath_7() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___vectorPath_7)); }
	inline List_1_t27321462 * get_vectorPath_7() const { return ___vectorPath_7; }
	inline List_1_t27321462 ** get_address_of_vectorPath_7() { return &___vectorPath_7; }
	inline void set_vectorPath_7(List_1_t27321462 * value)
	{
		___vectorPath_7 = value;
		Il2CppCodeGenWriteBarrier(&___vectorPath_7, value);
	}

	inline static int32_t get_offset_of_maxFrameTime_8() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___maxFrameTime_8)); }
	inline float get_maxFrameTime_8() const { return ___maxFrameTime_8; }
	inline float* get_address_of_maxFrameTime_8() { return &___maxFrameTime_8; }
	inline void set_maxFrameTime_8(float value)
	{
		___maxFrameTime_8 = value;
	}

	inline static int32_t get_offset_of_currentR_9() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___currentR_9)); }
	inline PathNode_t3993763123 * get_currentR_9() const { return ___currentR_9; }
	inline PathNode_t3993763123 ** get_address_of_currentR_9() { return &___currentR_9; }
	inline void set_currentR_9(PathNode_t3993763123 * value)
	{
		___currentR_9 = value;
		Il2CppCodeGenWriteBarrier(&___currentR_9, value);
	}

	inline static int32_t get_offset_of_duration_10() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___duration_10)); }
	inline float get_duration_10() const { return ___duration_10; }
	inline float* get_address_of_duration_10() { return &___duration_10; }
	inline void set_duration_10(float value)
	{
		___duration_10 = value;
	}

	inline static int32_t get_offset_of_searchIterations_11() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___searchIterations_11)); }
	inline int32_t get_searchIterations_11() const { return ___searchIterations_11; }
	inline int32_t* get_address_of_searchIterations_11() { return &___searchIterations_11; }
	inline void set_searchIterations_11(int32_t value)
	{
		___searchIterations_11 = value;
	}

	inline static int32_t get_offset_of_searchedNodes_12() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___searchedNodes_12)); }
	inline int32_t get_searchedNodes_12() const { return ___searchedNodes_12; }
	inline int32_t* get_address_of_searchedNodes_12() { return &___searchedNodes_12; }
	inline void set_searchedNodes_12(int32_t value)
	{
		___searchedNodes_12 = value;
	}

	inline static int32_t get_offset_of_pooled_13() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___pooled_13)); }
	inline bool get_pooled_13() const { return ___pooled_13; }
	inline bool* get_address_of_pooled_13() { return &___pooled_13; }
	inline void set_pooled_13(bool value)
	{
		___pooled_13 = value;
	}

	inline static int32_t get_offset_of_hasBeenReset_14() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___hasBeenReset_14)); }
	inline bool get_hasBeenReset_14() const { return ___hasBeenReset_14; }
	inline bool* get_address_of_hasBeenReset_14() { return &___hasBeenReset_14; }
	inline void set_hasBeenReset_14(bool value)
	{
		___hasBeenReset_14 = value;
	}

	inline static int32_t get_offset_of_nnConstraint_15() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___nnConstraint_15)); }
	inline NNConstraint_t3253238025 * get_nnConstraint_15() const { return ___nnConstraint_15; }
	inline NNConstraint_t3253238025 ** get_address_of_nnConstraint_15() { return &___nnConstraint_15; }
	inline void set_nnConstraint_15(NNConstraint_t3253238025 * value)
	{
		___nnConstraint_15 = value;
		Il2CppCodeGenWriteBarrier(&___nnConstraint_15, value);
	}

	inline static int32_t get_offset_of_next_16() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___next_16)); }
	inline Path_t2697364881 * get_next_16() const { return ___next_16; }
	inline Path_t2697364881 ** get_address_of_next_16() { return &___next_16; }
	inline void set_next_16(Path_t2697364881 * value)
	{
		___next_16 = value;
		Il2CppCodeGenWriteBarrier(&___next_16, value);
	}

	inline static int32_t get_offset_of_heuristic_17() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___heuristic_17)); }
	inline int32_t get_heuristic_17() const { return ___heuristic_17; }
	inline int32_t* get_address_of_heuristic_17() { return &___heuristic_17; }
	inline void set_heuristic_17(int32_t value)
	{
		___heuristic_17 = value;
	}

	inline static int32_t get_offset_of_heuristicScale_18() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___heuristicScale_18)); }
	inline float get_heuristicScale_18() const { return ___heuristicScale_18; }
	inline float* get_address_of_heuristicScale_18() { return &___heuristicScale_18; }
	inline void set_heuristicScale_18(float value)
	{
		___heuristicScale_18 = value;
	}

	inline static int32_t get_offset_of_hTargetNode_19() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___hTargetNode_19)); }
	inline GraphNode_t3525007772 * get_hTargetNode_19() const { return ___hTargetNode_19; }
	inline GraphNode_t3525007772 ** get_address_of_hTargetNode_19() { return &___hTargetNode_19; }
	inline void set_hTargetNode_19(GraphNode_t3525007772 * value)
	{
		___hTargetNode_19 = value;
		Il2CppCodeGenWriteBarrier(&___hTargetNode_19, value);
	}

	inline static int32_t get_offset_of_hTarget_20() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___hTarget_20)); }
	inline Int3_t2697168784  get_hTarget_20() const { return ___hTarget_20; }
	inline Int3_t2697168784 * get_address_of_hTarget_20() { return &___hTarget_20; }
	inline void set_hTarget_20(Int3_t2697168784  value)
	{
		___hTarget_20 = value;
	}

	inline static int32_t get_offset_of_enabledTags_21() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___enabledTags_21)); }
	inline int32_t get_enabledTags_21() const { return ___enabledTags_21; }
	inline int32_t* get_address_of_enabledTags_21() { return &___enabledTags_21; }
	inline void set_enabledTags_21(int32_t value)
	{
		___enabledTags_21 = value;
	}

	inline static int32_t get_offset_of_internalTagPenalties_23() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___internalTagPenalties_23)); }
	inline Int32U5BU5D_t1809983122* get_internalTagPenalties_23() const { return ___internalTagPenalties_23; }
	inline Int32U5BU5D_t1809983122** get_address_of_internalTagPenalties_23() { return &___internalTagPenalties_23; }
	inline void set_internalTagPenalties_23(Int32U5BU5D_t1809983122* value)
	{
		___internalTagPenalties_23 = value;
		Il2CppCodeGenWriteBarrier(&___internalTagPenalties_23, value);
	}

	inline static int32_t get_offset_of_manualTagPenalties_24() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___manualTagPenalties_24)); }
	inline Int32U5BU5D_t1809983122* get_manualTagPenalties_24() const { return ___manualTagPenalties_24; }
	inline Int32U5BU5D_t1809983122** get_address_of_manualTagPenalties_24() { return &___manualTagPenalties_24; }
	inline void set_manualTagPenalties_24(Int32U5BU5D_t1809983122* value)
	{
		___manualTagPenalties_24 = value;
		Il2CppCodeGenWriteBarrier(&___manualTagPenalties_24, value);
	}

	inline static int32_t get_offset_of_claimed_25() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___claimed_25)); }
	inline List_1_t1634065389 * get_claimed_25() const { return ___claimed_25; }
	inline List_1_t1634065389 ** get_address_of_claimed_25() { return &___claimed_25; }
	inline void set_claimed_25(List_1_t1634065389 * value)
	{
		___claimed_25 = value;
		Il2CppCodeGenWriteBarrier(&___claimed_25, value);
	}

	inline static int32_t get_offset_of_releasedNotSilent_26() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___releasedNotSilent_26)); }
	inline bool get_releasedNotSilent_26() const { return ___releasedNotSilent_26; }
	inline bool* get_address_of_releasedNotSilent_26() { return &___releasedNotSilent_26; }
	inline void set_releasedNotSilent_26(bool value)
	{
		___releasedNotSilent_26 = value;
	}

	inline static int32_t get_offset_of_U3CpathHandlerU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___U3CpathHandlerU3Ek__BackingField_27)); }
	inline PathHandler_t2800540817 * get_U3CpathHandlerU3Ek__BackingField_27() const { return ___U3CpathHandlerU3Ek__BackingField_27; }
	inline PathHandler_t2800540817 ** get_address_of_U3CpathHandlerU3Ek__BackingField_27() { return &___U3CpathHandlerU3Ek__BackingField_27; }
	inline void set_U3CpathHandlerU3Ek__BackingField_27(PathHandler_t2800540817 * value)
	{
		___U3CpathHandlerU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier(&___U3CpathHandlerU3Ek__BackingField_27, value);
	}

	inline static int32_t get_offset_of_U3CcallTimeU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___U3CcallTimeU3Ek__BackingField_28)); }
	inline DateTime_t339033936  get_U3CcallTimeU3Ek__BackingField_28() const { return ___U3CcallTimeU3Ek__BackingField_28; }
	inline DateTime_t339033936 * get_address_of_U3CcallTimeU3Ek__BackingField_28() { return &___U3CcallTimeU3Ek__BackingField_28; }
	inline void set_U3CcallTimeU3Ek__BackingField_28(DateTime_t339033936  value)
	{
		___U3CcallTimeU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CpathIDU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(Path_t2697364881, ___U3CpathIDU3Ek__BackingField_29)); }
	inline uint16_t get_U3CpathIDU3Ek__BackingField_29() const { return ___U3CpathIDU3Ek__BackingField_29; }
	inline uint16_t* get_address_of_U3CpathIDU3Ek__BackingField_29() { return &___U3CpathIDU3Ek__BackingField_29; }
	inline void set_U3CpathIDU3Ek__BackingField_29(uint16_t value)
	{
		___U3CpathIDU3Ek__BackingField_29 = value;
	}
};

struct Path_t2697364881_StaticFields
{
public:
	// System.Int32[] Pathfinding.Path::ZeroTagPenalties
	Int32U5BU5D_t1809983122* ___ZeroTagPenalties_22;

public:
	inline static int32_t get_offset_of_ZeroTagPenalties_22() { return static_cast<int32_t>(offsetof(Path_t2697364881_StaticFields, ___ZeroTagPenalties_22)); }
	inline Int32U5BU5D_t1809983122* get_ZeroTagPenalties_22() const { return ___ZeroTagPenalties_22; }
	inline Int32U5BU5D_t1809983122** get_address_of_ZeroTagPenalties_22() { return &___ZeroTagPenalties_22; }
	inline void set_ZeroTagPenalties_22(Int32U5BU5D_t1809983122* value)
	{
		___ZeroTagPenalties_22 = value;
		Il2CppCodeGenWriteBarrier(&___ZeroTagPenalties_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
