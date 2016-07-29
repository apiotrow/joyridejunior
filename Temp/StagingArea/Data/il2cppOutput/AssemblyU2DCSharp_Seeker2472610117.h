#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.StartEndModifier
struct StartEndModifier_t2773583996;
// Pathfinding.TagMask
struct TagMask_t2810323666;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// OnPathDelegate
struct OnPathDelegate_t598607977;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;
// System.Collections.Generic.List`1<Pathfinding.GraphNode>
struct List_1_t26999445;
// Pathfinding.Path
struct Path_t2697364881;
// System.Collections.Generic.List`1<Pathfinding.IPathModifier>
struct List_1_t1911051082;
// System.Comparison`1<Pathfinding.IPathModifier>
struct Comparison_1_t3817766989;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Seeker
struct  Seeker_t2472610117  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean Seeker::drawGizmos
	bool ___drawGizmos_2;
	// System.Boolean Seeker::detailedGizmos
	bool ___detailedGizmos_3;
	// Pathfinding.StartEndModifier Seeker::startEndModifier
	StartEndModifier_t2773583996 * ___startEndModifier_4;
	// System.Int32 Seeker::traversableTags
	int32_t ___traversableTags_5;
	// Pathfinding.TagMask Seeker::traversableTagsCompatibility
	TagMask_t2810323666 * ___traversableTagsCompatibility_6;
	// System.Int32[] Seeker::tagPenalties
	Int32U5BU5D_t1809983122* ___tagPenalties_7;
	// OnPathDelegate Seeker::pathCallback
	OnPathDelegate_t598607977 * ___pathCallback_8;
	// OnPathDelegate Seeker::preProcessPath
	OnPathDelegate_t598607977 * ___preProcessPath_9;
	// OnPathDelegate Seeker::postProcessPath
	OnPathDelegate_t598607977 * ___postProcessPath_10;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Seeker::lastCompletedVectorPath
	List_1_t27321462 * ___lastCompletedVectorPath_11;
	// System.Collections.Generic.List`1<Pathfinding.GraphNode> Seeker::lastCompletedNodePath
	List_1_t26999445 * ___lastCompletedNodePath_12;
	// Pathfinding.Path Seeker::path
	Path_t2697364881 * ___path_13;
	// Pathfinding.Path Seeker::prevPath
	Path_t2697364881 * ___prevPath_14;
	// OnPathDelegate Seeker::onPathDelegate
	OnPathDelegate_t598607977 * ___onPathDelegate_15;
	// OnPathDelegate Seeker::tmpPathCallback
	OnPathDelegate_t598607977 * ___tmpPathCallback_16;
	// System.UInt32 Seeker::lastPathID
	uint32_t ___lastPathID_17;
	// System.Collections.Generic.List`1<Pathfinding.IPathModifier> Seeker::modifiers
	List_1_t1911051082 * ___modifiers_18;

public:
	inline static int32_t get_offset_of_drawGizmos_2() { return static_cast<int32_t>(offsetof(Seeker_t2472610117, ___drawGizmos_2)); }
	inline bool get_drawGizmos_2() const { return ___drawGizmos_2; }
	inline bool* get_address_of_drawGizmos_2() { return &___drawGizmos_2; }
	inline void set_drawGizmos_2(bool value)
	{
		___drawGizmos_2 = value;
	}

	inline static int32_t get_offset_of_detailedGizmos_3() { return static_cast<int32_t>(offsetof(Seeker_t2472610117, ___detailedGizmos_3)); }
	inline bool get_detailedGizmos_3() const { return ___detailedGizmos_3; }
	inline bool* get_address_of_detailedGizmos_3() { return &___detailedGizmos_3; }
	inline void set_detailedGizmos_3(bool value)
	{
		___detailedGizmos_3 = value;
	}

	inline static int32_t get_offset_of_startEndModifier_4() { return static_cast<int32_t>(offsetof(Seeker_t2472610117, ___startEndModifier_4)); }
	inline StartEndModifier_t2773583996 * get_startEndModifier_4() const { return ___startEndModifier_4; }
	inline StartEndModifier_t2773583996 ** get_address_of_startEndModifier_4() { return &___startEndModifier_4; }
	inline void set_startEndModifier_4(StartEndModifier_t2773583996 * value)
	{
		___startEndModifier_4 = value;
		Il2CppCodeGenWriteBarrier(&___startEndModifier_4, value);
	}

	inline static int32_t get_offset_of_traversableTags_5() { return static_cast<int32_t>(offsetof(Seeker_t2472610117, ___traversableTags_5)); }
	inline int32_t get_traversableTags_5() const { return ___traversableTags_5; }
	inline int32_t* get_address_of_traversableTags_5() { return &___traversableTags_5; }
	inline void set_traversableTags_5(int32_t value)
	{
		___traversableTags_5 = value;
	}

	inline static int32_t get_offset_of_traversableTagsCompatibility_6() { return static_cast<int32_t>(offsetof(Seeker_t2472610117, ___traversableTagsCompatibility_6)); }
	inline TagMask_t2810323666 * get_traversableTagsCompatibility_6() const { return ___traversableTagsCompatibility_6; }
	inline TagMask_t2810323666 ** get_address_of_traversableTagsCompatibility_6() { return &___traversableTagsCompatibility_6; }
	inline void set_traversableTagsCompatibility_6(TagMask_t2810323666 * value)
	{
		___traversableTagsCompatibility_6 = value;
		Il2CppCodeGenWriteBarrier(&___traversableTagsCompatibility_6, value);
	}

	inline static int32_t get_offset_of_tagPenalties_7() { return static_cast<int32_t>(offsetof(Seeker_t2472610117, ___tagPenalties_7)); }
	inline Int32U5BU5D_t1809983122* get_tagPenalties_7() const { return ___tagPenalties_7; }
	inline Int32U5BU5D_t1809983122** get_address_of_tagPenalties_7() { return &___tagPenalties_7; }
	inline void set_tagPenalties_7(Int32U5BU5D_t1809983122* value)
	{
		___tagPenalties_7 = value;
		Il2CppCodeGenWriteBarrier(&___tagPenalties_7, value);
	}

	inline static int32_t get_offset_of_pathCallback_8() { return static_cast<int32_t>(offsetof(Seeker_t2472610117, ___pathCallback_8)); }
	inline OnPathDelegate_t598607977 * get_pathCallback_8() const { return ___pathCallback_8; }
	inline OnPathDelegate_t598607977 ** get_address_of_pathCallback_8() { return &___pathCallback_8; }
	inline void set_pathCallback_8(OnPathDelegate_t598607977 * value)
	{
		___pathCallback_8 = value;
		Il2CppCodeGenWriteBarrier(&___pathCallback_8, value);
	}

	inline static int32_t get_offset_of_preProcessPath_9() { return static_cast<int32_t>(offsetof(Seeker_t2472610117, ___preProcessPath_9)); }
	inline OnPathDelegate_t598607977 * get_preProcessPath_9() const { return ___preProcessPath_9; }
	inline OnPathDelegate_t598607977 ** get_address_of_preProcessPath_9() { return &___preProcessPath_9; }
	inline void set_preProcessPath_9(OnPathDelegate_t598607977 * value)
	{
		___preProcessPath_9 = value;
		Il2CppCodeGenWriteBarrier(&___preProcessPath_9, value);
	}

	inline static int32_t get_offset_of_postProcessPath_10() { return static_cast<int32_t>(offsetof(Seeker_t2472610117, ___postProcessPath_10)); }
	inline OnPathDelegate_t598607977 * get_postProcessPath_10() const { return ___postProcessPath_10; }
	inline OnPathDelegate_t598607977 ** get_address_of_postProcessPath_10() { return &___postProcessPath_10; }
	inline void set_postProcessPath_10(OnPathDelegate_t598607977 * value)
	{
		___postProcessPath_10 = value;
		Il2CppCodeGenWriteBarrier(&___postProcessPath_10, value);
	}

	inline static int32_t get_offset_of_lastCompletedVectorPath_11() { return static_cast<int32_t>(offsetof(Seeker_t2472610117, ___lastCompletedVectorPath_11)); }
	inline List_1_t27321462 * get_lastCompletedVectorPath_11() const { return ___lastCompletedVectorPath_11; }
	inline List_1_t27321462 ** get_address_of_lastCompletedVectorPath_11() { return &___lastCompletedVectorPath_11; }
	inline void set_lastCompletedVectorPath_11(List_1_t27321462 * value)
	{
		___lastCompletedVectorPath_11 = value;
		Il2CppCodeGenWriteBarrier(&___lastCompletedVectorPath_11, value);
	}

	inline static int32_t get_offset_of_lastCompletedNodePath_12() { return static_cast<int32_t>(offsetof(Seeker_t2472610117, ___lastCompletedNodePath_12)); }
	inline List_1_t26999445 * get_lastCompletedNodePath_12() const { return ___lastCompletedNodePath_12; }
	inline List_1_t26999445 ** get_address_of_lastCompletedNodePath_12() { return &___lastCompletedNodePath_12; }
	inline void set_lastCompletedNodePath_12(List_1_t26999445 * value)
	{
		___lastCompletedNodePath_12 = value;
		Il2CppCodeGenWriteBarrier(&___lastCompletedNodePath_12, value);
	}

	inline static int32_t get_offset_of_path_13() { return static_cast<int32_t>(offsetof(Seeker_t2472610117, ___path_13)); }
	inline Path_t2697364881 * get_path_13() const { return ___path_13; }
	inline Path_t2697364881 ** get_address_of_path_13() { return &___path_13; }
	inline void set_path_13(Path_t2697364881 * value)
	{
		___path_13 = value;
		Il2CppCodeGenWriteBarrier(&___path_13, value);
	}

	inline static int32_t get_offset_of_prevPath_14() { return static_cast<int32_t>(offsetof(Seeker_t2472610117, ___prevPath_14)); }
	inline Path_t2697364881 * get_prevPath_14() const { return ___prevPath_14; }
	inline Path_t2697364881 ** get_address_of_prevPath_14() { return &___prevPath_14; }
	inline void set_prevPath_14(Path_t2697364881 * value)
	{
		___prevPath_14 = value;
		Il2CppCodeGenWriteBarrier(&___prevPath_14, value);
	}

	inline static int32_t get_offset_of_onPathDelegate_15() { return static_cast<int32_t>(offsetof(Seeker_t2472610117, ___onPathDelegate_15)); }
	inline OnPathDelegate_t598607977 * get_onPathDelegate_15() const { return ___onPathDelegate_15; }
	inline OnPathDelegate_t598607977 ** get_address_of_onPathDelegate_15() { return &___onPathDelegate_15; }
	inline void set_onPathDelegate_15(OnPathDelegate_t598607977 * value)
	{
		___onPathDelegate_15 = value;
		Il2CppCodeGenWriteBarrier(&___onPathDelegate_15, value);
	}

	inline static int32_t get_offset_of_tmpPathCallback_16() { return static_cast<int32_t>(offsetof(Seeker_t2472610117, ___tmpPathCallback_16)); }
	inline OnPathDelegate_t598607977 * get_tmpPathCallback_16() const { return ___tmpPathCallback_16; }
	inline OnPathDelegate_t598607977 ** get_address_of_tmpPathCallback_16() { return &___tmpPathCallback_16; }
	inline void set_tmpPathCallback_16(OnPathDelegate_t598607977 * value)
	{
		___tmpPathCallback_16 = value;
		Il2CppCodeGenWriteBarrier(&___tmpPathCallback_16, value);
	}

	inline static int32_t get_offset_of_lastPathID_17() { return static_cast<int32_t>(offsetof(Seeker_t2472610117, ___lastPathID_17)); }
	inline uint32_t get_lastPathID_17() const { return ___lastPathID_17; }
	inline uint32_t* get_address_of_lastPathID_17() { return &___lastPathID_17; }
	inline void set_lastPathID_17(uint32_t value)
	{
		___lastPathID_17 = value;
	}

	inline static int32_t get_offset_of_modifiers_18() { return static_cast<int32_t>(offsetof(Seeker_t2472610117, ___modifiers_18)); }
	inline List_1_t1911051082 * get_modifiers_18() const { return ___modifiers_18; }
	inline List_1_t1911051082 ** get_address_of_modifiers_18() { return &___modifiers_18; }
	inline void set_modifiers_18(List_1_t1911051082 * value)
	{
		___modifiers_18 = value;
		Il2CppCodeGenWriteBarrier(&___modifiers_18, value);
	}
};

struct Seeker_t2472610117_StaticFields
{
public:
	// System.Comparison`1<Pathfinding.IPathModifier> Seeker::<>f__am$cache11
	Comparison_1_t3817766989 * ___U3CU3Ef__amU24cache11_19;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache11_19() { return static_cast<int32_t>(offsetof(Seeker_t2472610117_StaticFields, ___U3CU3Ef__amU24cache11_19)); }
	inline Comparison_1_t3817766989 * get_U3CU3Ef__amU24cache11_19() const { return ___U3CU3Ef__amU24cache11_19; }
	inline Comparison_1_t3817766989 ** get_address_of_U3CU3Ef__amU24cache11_19() { return &___U3CU3Ef__amU24cache11_19; }
	inline void set_U3CU3Ef__amU24cache11_19(Comparison_1_t3817766989 * value)
	{
		___U3CU3Ef__amU24cache11_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache11_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
