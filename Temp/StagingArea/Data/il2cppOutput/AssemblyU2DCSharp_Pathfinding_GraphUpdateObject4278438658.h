#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.NNConstraint
struct NNConstraint_t3253238025;
// System.Collections.Generic.List`1<Pathfinding.GraphNode>
struct List_1_t26999445;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t1782884295;
// System.Collections.Generic.List`1<Pathfinding.Int3>
struct List_1_t3494127753;
// Pathfinding.GraphUpdateShape
struct GraphUpdateShape_t2195642262;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Bounds3518514978.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.GraphUpdateObject
struct  GraphUpdateObject_t4278438658  : public Il2CppObject
{
public:
	// UnityEngine.Bounds Pathfinding.GraphUpdateObject::bounds
	Bounds_t3518514978  ___bounds_0;
	// System.Boolean Pathfinding.GraphUpdateObject::requiresFloodFill
	bool ___requiresFloodFill_1;
	// System.Boolean Pathfinding.GraphUpdateObject::updatePhysics
	bool ___updatePhysics_2;
	// System.Boolean Pathfinding.GraphUpdateObject::resetPenaltyOnPhysics
	bool ___resetPenaltyOnPhysics_3;
	// System.Boolean Pathfinding.GraphUpdateObject::updateErosion
	bool ___updateErosion_4;
	// Pathfinding.NNConstraint Pathfinding.GraphUpdateObject::nnConstraint
	NNConstraint_t3253238025 * ___nnConstraint_5;
	// System.Int32 Pathfinding.GraphUpdateObject::addPenalty
	int32_t ___addPenalty_6;
	// System.Boolean Pathfinding.GraphUpdateObject::modifyWalkability
	bool ___modifyWalkability_7;
	// System.Boolean Pathfinding.GraphUpdateObject::setWalkability
	bool ___setWalkability_8;
	// System.Boolean Pathfinding.GraphUpdateObject::modifyTag
	bool ___modifyTag_9;
	// System.Int32 Pathfinding.GraphUpdateObject::setTag
	int32_t ___setTag_10;
	// System.Boolean Pathfinding.GraphUpdateObject::trackChangedNodes
	bool ___trackChangedNodes_11;
	// System.Collections.Generic.List`1<Pathfinding.GraphNode> Pathfinding.GraphUpdateObject::changedNodes
	List_1_t26999445 * ___changedNodes_12;
	// System.Collections.Generic.List`1<System.UInt32> Pathfinding.GraphUpdateObject::backupData
	List_1_t1782884295 * ___backupData_13;
	// System.Collections.Generic.List`1<Pathfinding.Int3> Pathfinding.GraphUpdateObject::backupPositionData
	List_1_t3494127753 * ___backupPositionData_14;
	// Pathfinding.GraphUpdateShape Pathfinding.GraphUpdateObject::shape
	GraphUpdateShape_t2195642262 * ___shape_15;

public:
	inline static int32_t get_offset_of_bounds_0() { return static_cast<int32_t>(offsetof(GraphUpdateObject_t4278438658, ___bounds_0)); }
	inline Bounds_t3518514978  get_bounds_0() const { return ___bounds_0; }
	inline Bounds_t3518514978 * get_address_of_bounds_0() { return &___bounds_0; }
	inline void set_bounds_0(Bounds_t3518514978  value)
	{
		___bounds_0 = value;
	}

	inline static int32_t get_offset_of_requiresFloodFill_1() { return static_cast<int32_t>(offsetof(GraphUpdateObject_t4278438658, ___requiresFloodFill_1)); }
	inline bool get_requiresFloodFill_1() const { return ___requiresFloodFill_1; }
	inline bool* get_address_of_requiresFloodFill_1() { return &___requiresFloodFill_1; }
	inline void set_requiresFloodFill_1(bool value)
	{
		___requiresFloodFill_1 = value;
	}

	inline static int32_t get_offset_of_updatePhysics_2() { return static_cast<int32_t>(offsetof(GraphUpdateObject_t4278438658, ___updatePhysics_2)); }
	inline bool get_updatePhysics_2() const { return ___updatePhysics_2; }
	inline bool* get_address_of_updatePhysics_2() { return &___updatePhysics_2; }
	inline void set_updatePhysics_2(bool value)
	{
		___updatePhysics_2 = value;
	}

	inline static int32_t get_offset_of_resetPenaltyOnPhysics_3() { return static_cast<int32_t>(offsetof(GraphUpdateObject_t4278438658, ___resetPenaltyOnPhysics_3)); }
	inline bool get_resetPenaltyOnPhysics_3() const { return ___resetPenaltyOnPhysics_3; }
	inline bool* get_address_of_resetPenaltyOnPhysics_3() { return &___resetPenaltyOnPhysics_3; }
	inline void set_resetPenaltyOnPhysics_3(bool value)
	{
		___resetPenaltyOnPhysics_3 = value;
	}

	inline static int32_t get_offset_of_updateErosion_4() { return static_cast<int32_t>(offsetof(GraphUpdateObject_t4278438658, ___updateErosion_4)); }
	inline bool get_updateErosion_4() const { return ___updateErosion_4; }
	inline bool* get_address_of_updateErosion_4() { return &___updateErosion_4; }
	inline void set_updateErosion_4(bool value)
	{
		___updateErosion_4 = value;
	}

	inline static int32_t get_offset_of_nnConstraint_5() { return static_cast<int32_t>(offsetof(GraphUpdateObject_t4278438658, ___nnConstraint_5)); }
	inline NNConstraint_t3253238025 * get_nnConstraint_5() const { return ___nnConstraint_5; }
	inline NNConstraint_t3253238025 ** get_address_of_nnConstraint_5() { return &___nnConstraint_5; }
	inline void set_nnConstraint_5(NNConstraint_t3253238025 * value)
	{
		___nnConstraint_5 = value;
		Il2CppCodeGenWriteBarrier(&___nnConstraint_5, value);
	}

	inline static int32_t get_offset_of_addPenalty_6() { return static_cast<int32_t>(offsetof(GraphUpdateObject_t4278438658, ___addPenalty_6)); }
	inline int32_t get_addPenalty_6() const { return ___addPenalty_6; }
	inline int32_t* get_address_of_addPenalty_6() { return &___addPenalty_6; }
	inline void set_addPenalty_6(int32_t value)
	{
		___addPenalty_6 = value;
	}

	inline static int32_t get_offset_of_modifyWalkability_7() { return static_cast<int32_t>(offsetof(GraphUpdateObject_t4278438658, ___modifyWalkability_7)); }
	inline bool get_modifyWalkability_7() const { return ___modifyWalkability_7; }
	inline bool* get_address_of_modifyWalkability_7() { return &___modifyWalkability_7; }
	inline void set_modifyWalkability_7(bool value)
	{
		___modifyWalkability_7 = value;
	}

	inline static int32_t get_offset_of_setWalkability_8() { return static_cast<int32_t>(offsetof(GraphUpdateObject_t4278438658, ___setWalkability_8)); }
	inline bool get_setWalkability_8() const { return ___setWalkability_8; }
	inline bool* get_address_of_setWalkability_8() { return &___setWalkability_8; }
	inline void set_setWalkability_8(bool value)
	{
		___setWalkability_8 = value;
	}

	inline static int32_t get_offset_of_modifyTag_9() { return static_cast<int32_t>(offsetof(GraphUpdateObject_t4278438658, ___modifyTag_9)); }
	inline bool get_modifyTag_9() const { return ___modifyTag_9; }
	inline bool* get_address_of_modifyTag_9() { return &___modifyTag_9; }
	inline void set_modifyTag_9(bool value)
	{
		___modifyTag_9 = value;
	}

	inline static int32_t get_offset_of_setTag_10() { return static_cast<int32_t>(offsetof(GraphUpdateObject_t4278438658, ___setTag_10)); }
	inline int32_t get_setTag_10() const { return ___setTag_10; }
	inline int32_t* get_address_of_setTag_10() { return &___setTag_10; }
	inline void set_setTag_10(int32_t value)
	{
		___setTag_10 = value;
	}

	inline static int32_t get_offset_of_trackChangedNodes_11() { return static_cast<int32_t>(offsetof(GraphUpdateObject_t4278438658, ___trackChangedNodes_11)); }
	inline bool get_trackChangedNodes_11() const { return ___trackChangedNodes_11; }
	inline bool* get_address_of_trackChangedNodes_11() { return &___trackChangedNodes_11; }
	inline void set_trackChangedNodes_11(bool value)
	{
		___trackChangedNodes_11 = value;
	}

	inline static int32_t get_offset_of_changedNodes_12() { return static_cast<int32_t>(offsetof(GraphUpdateObject_t4278438658, ___changedNodes_12)); }
	inline List_1_t26999445 * get_changedNodes_12() const { return ___changedNodes_12; }
	inline List_1_t26999445 ** get_address_of_changedNodes_12() { return &___changedNodes_12; }
	inline void set_changedNodes_12(List_1_t26999445 * value)
	{
		___changedNodes_12 = value;
		Il2CppCodeGenWriteBarrier(&___changedNodes_12, value);
	}

	inline static int32_t get_offset_of_backupData_13() { return static_cast<int32_t>(offsetof(GraphUpdateObject_t4278438658, ___backupData_13)); }
	inline List_1_t1782884295 * get_backupData_13() const { return ___backupData_13; }
	inline List_1_t1782884295 ** get_address_of_backupData_13() { return &___backupData_13; }
	inline void set_backupData_13(List_1_t1782884295 * value)
	{
		___backupData_13 = value;
		Il2CppCodeGenWriteBarrier(&___backupData_13, value);
	}

	inline static int32_t get_offset_of_backupPositionData_14() { return static_cast<int32_t>(offsetof(GraphUpdateObject_t4278438658, ___backupPositionData_14)); }
	inline List_1_t3494127753 * get_backupPositionData_14() const { return ___backupPositionData_14; }
	inline List_1_t3494127753 ** get_address_of_backupPositionData_14() { return &___backupPositionData_14; }
	inline void set_backupPositionData_14(List_1_t3494127753 * value)
	{
		___backupPositionData_14 = value;
		Il2CppCodeGenWriteBarrier(&___backupPositionData_14, value);
	}

	inline static int32_t get_offset_of_shape_15() { return static_cast<int32_t>(offsetof(GraphUpdateObject_t4278438658, ___shape_15)); }
	inline GraphUpdateShape_t2195642262 * get_shape_15() const { return ___shape_15; }
	inline GraphUpdateShape_t2195642262 ** get_address_of_shape_15() { return &___shape_15; }
	inline void set_shape_15(GraphUpdateShape_t2195642262 * value)
	{
		___shape_15 = value;
		Il2CppCodeGenWriteBarrier(&___shape_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
