#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.PathNode
struct PathNode_t3993763123;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.BinaryHeapM/Tuple
struct  Tuple_t81172392 
{
public:
	// System.UInt32 Pathfinding.BinaryHeapM/Tuple::F
	uint32_t ___F_0;
	// Pathfinding.PathNode Pathfinding.BinaryHeapM/Tuple::node
	PathNode_t3993763123 * ___node_1;

public:
	inline static int32_t get_offset_of_F_0() { return static_cast<int32_t>(offsetof(Tuple_t81172392, ___F_0)); }
	inline uint32_t get_F_0() const { return ___F_0; }
	inline uint32_t* get_address_of_F_0() { return &___F_0; }
	inline void set_F_0(uint32_t value)
	{
		___F_0 = value;
	}

	inline static int32_t get_offset_of_node_1() { return static_cast<int32_t>(offsetof(Tuple_t81172392, ___node_1)); }
	inline PathNode_t3993763123 * get_node_1() const { return ___node_1; }
	inline PathNode_t3993763123 ** get_address_of_node_1() { return &___node_1; }
	inline void set_node_1(PathNode_t3993763123 * value)
	{
		___node_1 = value;
		Il2CppCodeGenWriteBarrier(&___node_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
