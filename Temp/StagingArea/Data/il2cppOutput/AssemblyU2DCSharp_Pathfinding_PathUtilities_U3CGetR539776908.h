#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.HashSet`1<Pathfinding.GraphNode>
struct HashSet_1_t1928729147;
// System.Collections.Generic.List`1<Pathfinding.GraphNode>
struct List_1_t26999445;
// System.Collections.Generic.Stack`1<Pathfinding.GraphNode>
struct Stack_1_t1800446511;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.PathUtilities/<GetReachableNodes>c__AnonStorey27
struct  U3CGetReachableNodesU3Ec__AnonStorey27_t539776908  : public Il2CppObject
{
public:
	// System.Collections.Generic.HashSet`1<Pathfinding.GraphNode> Pathfinding.PathUtilities/<GetReachableNodes>c__AnonStorey27::map
	HashSet_1_t1928729147 * ___map_0;
	// System.Collections.Generic.List`1<Pathfinding.GraphNode> Pathfinding.PathUtilities/<GetReachableNodes>c__AnonStorey27::list
	List_1_t26999445 * ___list_1;
	// System.Collections.Generic.Stack`1<Pathfinding.GraphNode> Pathfinding.PathUtilities/<GetReachableNodes>c__AnonStorey27::stack
	Stack_1_t1800446511 * ___stack_2;
	// System.Int32 Pathfinding.PathUtilities/<GetReachableNodes>c__AnonStorey27::tagMask
	int32_t ___tagMask_3;

public:
	inline static int32_t get_offset_of_map_0() { return static_cast<int32_t>(offsetof(U3CGetReachableNodesU3Ec__AnonStorey27_t539776908, ___map_0)); }
	inline HashSet_1_t1928729147 * get_map_0() const { return ___map_0; }
	inline HashSet_1_t1928729147 ** get_address_of_map_0() { return &___map_0; }
	inline void set_map_0(HashSet_1_t1928729147 * value)
	{
		___map_0 = value;
		Il2CppCodeGenWriteBarrier(&___map_0, value);
	}

	inline static int32_t get_offset_of_list_1() { return static_cast<int32_t>(offsetof(U3CGetReachableNodesU3Ec__AnonStorey27_t539776908, ___list_1)); }
	inline List_1_t26999445 * get_list_1() const { return ___list_1; }
	inline List_1_t26999445 ** get_address_of_list_1() { return &___list_1; }
	inline void set_list_1(List_1_t26999445 * value)
	{
		___list_1 = value;
		Il2CppCodeGenWriteBarrier(&___list_1, value);
	}

	inline static int32_t get_offset_of_stack_2() { return static_cast<int32_t>(offsetof(U3CGetReachableNodesU3Ec__AnonStorey27_t539776908, ___stack_2)); }
	inline Stack_1_t1800446511 * get_stack_2() const { return ___stack_2; }
	inline Stack_1_t1800446511 ** get_address_of_stack_2() { return &___stack_2; }
	inline void set_stack_2(Stack_1_t1800446511 * value)
	{
		___stack_2 = value;
		Il2CppCodeGenWriteBarrier(&___stack_2, value);
	}

	inline static int32_t get_offset_of_tagMask_3() { return static_cast<int32_t>(offsetof(U3CGetReachableNodesU3Ec__AnonStorey27_t539776908, ___tagMask_3)); }
	inline int32_t get_tagMask_3() const { return ___tagMask_3; }
	inline int32_t* get_address_of_tagMask_3() { return &___tagMask_3; }
	inline void set_tagMask_3(int32_t value)
	{
		___tagMask_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
