#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Pathfinding_Int32697168784.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.GraphNode
struct  GraphNode_t3525007772  : public Il2CppObject
{
public:
	// System.Int32 Pathfinding.GraphNode::nodeIndex
	int32_t ___nodeIndex_10;
	// System.UInt32 Pathfinding.GraphNode::flags
	uint32_t ___flags_11;
	// System.UInt32 Pathfinding.GraphNode::penalty
	uint32_t ___penalty_12;
	// Pathfinding.Int3 Pathfinding.GraphNode::position
	Int3_t2697168784  ___position_13;

public:
	inline static int32_t get_offset_of_nodeIndex_10() { return static_cast<int32_t>(offsetof(GraphNode_t3525007772, ___nodeIndex_10)); }
	inline int32_t get_nodeIndex_10() const { return ___nodeIndex_10; }
	inline int32_t* get_address_of_nodeIndex_10() { return &___nodeIndex_10; }
	inline void set_nodeIndex_10(int32_t value)
	{
		___nodeIndex_10 = value;
	}

	inline static int32_t get_offset_of_flags_11() { return static_cast<int32_t>(offsetof(GraphNode_t3525007772, ___flags_11)); }
	inline uint32_t get_flags_11() const { return ___flags_11; }
	inline uint32_t* get_address_of_flags_11() { return &___flags_11; }
	inline void set_flags_11(uint32_t value)
	{
		___flags_11 = value;
	}

	inline static int32_t get_offset_of_penalty_12() { return static_cast<int32_t>(offsetof(GraphNode_t3525007772, ___penalty_12)); }
	inline uint32_t get_penalty_12() const { return ___penalty_12; }
	inline uint32_t* get_address_of_penalty_12() { return &___penalty_12; }
	inline void set_penalty_12(uint32_t value)
	{
		___penalty_12 = value;
	}

	inline static int32_t get_offset_of_position_13() { return static_cast<int32_t>(offsetof(GraphNode_t3525007772, ___position_13)); }
	inline Int3_t2697168784  get_position_13() const { return ___position_13; }
	inline Int3_t2697168784 * get_address_of_position_13() { return &___position_13; }
	inline void set_position_13(Int3_t2697168784  value)
	{
		___position_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
