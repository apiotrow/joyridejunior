#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;
// Pathfinding.GridGraph
struct GridGraph_t1662136020;
// Pathfinding.GridNode[]
struct GridNodeU5BU5D_t1318463069;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProceduralGridMover
struct  ProceduralGridMover_t1558121470  : public MonoBehaviour_t3012272455
{
public:
	// System.Single ProceduralGridMover::updateDistance
	float ___updateDistance_2;
	// UnityEngine.Transform ProceduralGridMover::target
	Transform_t284553113 * ___target_3;
	// System.Boolean ProceduralGridMover::floodFill
	bool ___floodFill_4;
	// Pathfinding.GridGraph ProceduralGridMover::graph
	GridGraph_t1662136020 * ___graph_5;
	// Pathfinding.GridNode[] ProceduralGridMover::tmp
	GridNodeU5BU5D_t1318463069* ___tmp_6;
	// System.Boolean ProceduralGridMover::<updatingGraph>k__BackingField
	bool ___U3CupdatingGraphU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_updateDistance_2() { return static_cast<int32_t>(offsetof(ProceduralGridMover_t1558121470, ___updateDistance_2)); }
	inline float get_updateDistance_2() const { return ___updateDistance_2; }
	inline float* get_address_of_updateDistance_2() { return &___updateDistance_2; }
	inline void set_updateDistance_2(float value)
	{
		___updateDistance_2 = value;
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(ProceduralGridMover_t1558121470, ___target_3)); }
	inline Transform_t284553113 * get_target_3() const { return ___target_3; }
	inline Transform_t284553113 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Transform_t284553113 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_3, value);
	}

	inline static int32_t get_offset_of_floodFill_4() { return static_cast<int32_t>(offsetof(ProceduralGridMover_t1558121470, ___floodFill_4)); }
	inline bool get_floodFill_4() const { return ___floodFill_4; }
	inline bool* get_address_of_floodFill_4() { return &___floodFill_4; }
	inline void set_floodFill_4(bool value)
	{
		___floodFill_4 = value;
	}

	inline static int32_t get_offset_of_graph_5() { return static_cast<int32_t>(offsetof(ProceduralGridMover_t1558121470, ___graph_5)); }
	inline GridGraph_t1662136020 * get_graph_5() const { return ___graph_5; }
	inline GridGraph_t1662136020 ** get_address_of_graph_5() { return &___graph_5; }
	inline void set_graph_5(GridGraph_t1662136020 * value)
	{
		___graph_5 = value;
		Il2CppCodeGenWriteBarrier(&___graph_5, value);
	}

	inline static int32_t get_offset_of_tmp_6() { return static_cast<int32_t>(offsetof(ProceduralGridMover_t1558121470, ___tmp_6)); }
	inline GridNodeU5BU5D_t1318463069* get_tmp_6() const { return ___tmp_6; }
	inline GridNodeU5BU5D_t1318463069** get_address_of_tmp_6() { return &___tmp_6; }
	inline void set_tmp_6(GridNodeU5BU5D_t1318463069* value)
	{
		___tmp_6 = value;
		Il2CppCodeGenWriteBarrier(&___tmp_6, value);
	}

	inline static int32_t get_offset_of_U3CupdatingGraphU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ProceduralGridMover_t1558121470, ___U3CupdatingGraphU3Ek__BackingField_7)); }
	inline bool get_U3CupdatingGraphU3Ek__BackingField_7() const { return ___U3CupdatingGraphU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CupdatingGraphU3Ek__BackingField_7() { return &___U3CupdatingGraphU3Ek__BackingField_7; }
	inline void set_U3CupdatingGraphU3Ek__BackingField_7(bool value)
	{
		___U3CupdatingGraphU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
