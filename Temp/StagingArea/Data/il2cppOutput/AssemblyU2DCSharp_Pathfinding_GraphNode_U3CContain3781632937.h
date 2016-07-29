#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.GraphNode
struct GraphNode_t3525007772;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.GraphNode/<ContainsConnection>c__AnonStorey18
struct  U3CContainsConnectionU3Ec__AnonStorey18_t3781632937  : public Il2CppObject
{
public:
	// Pathfinding.GraphNode Pathfinding.GraphNode/<ContainsConnection>c__AnonStorey18::node
	GraphNode_t3525007772 * ___node_0;
	// System.Boolean Pathfinding.GraphNode/<ContainsConnection>c__AnonStorey18::contains
	bool ___contains_1;

public:
	inline static int32_t get_offset_of_node_0() { return static_cast<int32_t>(offsetof(U3CContainsConnectionU3Ec__AnonStorey18_t3781632937, ___node_0)); }
	inline GraphNode_t3525007772 * get_node_0() const { return ___node_0; }
	inline GraphNode_t3525007772 ** get_address_of_node_0() { return &___node_0; }
	inline void set_node_0(GraphNode_t3525007772 * value)
	{
		___node_0 = value;
		Il2CppCodeGenWriteBarrier(&___node_0, value);
	}

	inline static int32_t get_offset_of_contains_1() { return static_cast<int32_t>(offsetof(U3CContainsConnectionU3Ec__AnonStorey18_t3781632937, ___contains_1)); }
	inline bool get_contains_1() const { return ___contains_1; }
	inline bool* get_address_of_contains_1() { return &___contains_1; }
	inline void set_contains_1(bool value)
	{
		___contains_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
