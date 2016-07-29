#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Stack`1<Pathfinding.GraphNode>
struct Stack_1_t1800446511;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.GraphNode/<FloodFill>c__AnonStorey17
struct  U3CFloodFillU3Ec__AnonStorey17_t2773545396  : public Il2CppObject
{
public:
	// System.UInt32 Pathfinding.GraphNode/<FloodFill>c__AnonStorey17::region
	uint32_t ___region_0;
	// System.Collections.Generic.Stack`1<Pathfinding.GraphNode> Pathfinding.GraphNode/<FloodFill>c__AnonStorey17::stack
	Stack_1_t1800446511 * ___stack_1;

public:
	inline static int32_t get_offset_of_region_0() { return static_cast<int32_t>(offsetof(U3CFloodFillU3Ec__AnonStorey17_t2773545396, ___region_0)); }
	inline uint32_t get_region_0() const { return ___region_0; }
	inline uint32_t* get_address_of_region_0() { return &___region_0; }
	inline void set_region_0(uint32_t value)
	{
		___region_0 = value;
	}

	inline static int32_t get_offset_of_stack_1() { return static_cast<int32_t>(offsetof(U3CFloodFillU3Ec__AnonStorey17_t2773545396, ___stack_1)); }
	inline Stack_1_t1800446511 * get_stack_1() const { return ___stack_1; }
	inline Stack_1_t1800446511 ** get_address_of_stack_1() { return &___stack_1; }
	inline void set_stack_1(Stack_1_t1800446511 * value)
	{
		___stack_1 = value;
		Il2CppCodeGenWriteBarrier(&___stack_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
