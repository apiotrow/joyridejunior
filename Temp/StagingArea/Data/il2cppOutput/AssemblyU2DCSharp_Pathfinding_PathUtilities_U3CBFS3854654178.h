#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,System.Int32>
struct Dictionary_2_t4186538373;
// System.Collections.Generic.List`1<Pathfinding.GraphNode>
struct List_1_t26999445;
// System.Collections.Generic.Queue`1<Pathfinding.GraphNode>
struct Queue_1_t938128016;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.PathUtilities/<BFS>c__AnonStorey28
struct  U3CBFSU3Ec__AnonStorey28_t3854654178  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,System.Int32> Pathfinding.PathUtilities/<BFS>c__AnonStorey28::map
	Dictionary_2_t4186538373 * ___map_0;
	// System.Int32 Pathfinding.PathUtilities/<BFS>c__AnonStorey28::currentDist
	int32_t ___currentDist_1;
	// System.Collections.Generic.List`1<Pathfinding.GraphNode> Pathfinding.PathUtilities/<BFS>c__AnonStorey28::result
	List_1_t26999445 * ___result_2;
	// System.Collections.Generic.Queue`1<Pathfinding.GraphNode> Pathfinding.PathUtilities/<BFS>c__AnonStorey28::que
	Queue_1_t938128016 * ___que_3;
	// System.Int32 Pathfinding.PathUtilities/<BFS>c__AnonStorey28::tagMask
	int32_t ___tagMask_4;

public:
	inline static int32_t get_offset_of_map_0() { return static_cast<int32_t>(offsetof(U3CBFSU3Ec__AnonStorey28_t3854654178, ___map_0)); }
	inline Dictionary_2_t4186538373 * get_map_0() const { return ___map_0; }
	inline Dictionary_2_t4186538373 ** get_address_of_map_0() { return &___map_0; }
	inline void set_map_0(Dictionary_2_t4186538373 * value)
	{
		___map_0 = value;
		Il2CppCodeGenWriteBarrier(&___map_0, value);
	}

	inline static int32_t get_offset_of_currentDist_1() { return static_cast<int32_t>(offsetof(U3CBFSU3Ec__AnonStorey28_t3854654178, ___currentDist_1)); }
	inline int32_t get_currentDist_1() const { return ___currentDist_1; }
	inline int32_t* get_address_of_currentDist_1() { return &___currentDist_1; }
	inline void set_currentDist_1(int32_t value)
	{
		___currentDist_1 = value;
	}

	inline static int32_t get_offset_of_result_2() { return static_cast<int32_t>(offsetof(U3CBFSU3Ec__AnonStorey28_t3854654178, ___result_2)); }
	inline List_1_t26999445 * get_result_2() const { return ___result_2; }
	inline List_1_t26999445 ** get_address_of_result_2() { return &___result_2; }
	inline void set_result_2(List_1_t26999445 * value)
	{
		___result_2 = value;
		Il2CppCodeGenWriteBarrier(&___result_2, value);
	}

	inline static int32_t get_offset_of_que_3() { return static_cast<int32_t>(offsetof(U3CBFSU3Ec__AnonStorey28_t3854654178, ___que_3)); }
	inline Queue_1_t938128016 * get_que_3() const { return ___que_3; }
	inline Queue_1_t938128016 ** get_address_of_que_3() { return &___que_3; }
	inline void set_que_3(Queue_1_t938128016 * value)
	{
		___que_3 = value;
		Il2CppCodeGenWriteBarrier(&___que_3, value);
	}

	inline static int32_t get_offset_of_tagMask_4() { return static_cast<int32_t>(offsetof(U3CBFSU3Ec__AnonStorey28_t3854654178, ___tagMask_4)); }
	inline int32_t get_tagMask_4() const { return ___tagMask_4; }
	inline int32_t* get_address_of_tagMask_4() { return &___tagMask_4; }
	inline void set_tagMask_4(int32_t value)
	{
		___tagMask_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
