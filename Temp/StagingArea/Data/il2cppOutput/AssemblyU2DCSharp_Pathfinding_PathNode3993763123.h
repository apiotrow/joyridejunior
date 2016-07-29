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
// Pathfinding.PathNode
struct PathNode_t3993763123;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.PathNode
struct  PathNode_t3993763123  : public Il2CppObject
{
public:
	// Pathfinding.GraphNode Pathfinding.PathNode::node
	GraphNode_t3525007772 * ___node_5;
	// Pathfinding.PathNode Pathfinding.PathNode::parent
	PathNode_t3993763123 * ___parent_6;
	// System.UInt16 Pathfinding.PathNode::pathID
	uint16_t ___pathID_7;
	// System.UInt32 Pathfinding.PathNode::flags
	uint32_t ___flags_8;
	// System.UInt32 Pathfinding.PathNode::g
	uint32_t ___g_9;
	// System.UInt32 Pathfinding.PathNode::h
	uint32_t ___h_10;

public:
	inline static int32_t get_offset_of_node_5() { return static_cast<int32_t>(offsetof(PathNode_t3993763123, ___node_5)); }
	inline GraphNode_t3525007772 * get_node_5() const { return ___node_5; }
	inline GraphNode_t3525007772 ** get_address_of_node_5() { return &___node_5; }
	inline void set_node_5(GraphNode_t3525007772 * value)
	{
		___node_5 = value;
		Il2CppCodeGenWriteBarrier(&___node_5, value);
	}

	inline static int32_t get_offset_of_parent_6() { return static_cast<int32_t>(offsetof(PathNode_t3993763123, ___parent_6)); }
	inline PathNode_t3993763123 * get_parent_6() const { return ___parent_6; }
	inline PathNode_t3993763123 ** get_address_of_parent_6() { return &___parent_6; }
	inline void set_parent_6(PathNode_t3993763123 * value)
	{
		___parent_6 = value;
		Il2CppCodeGenWriteBarrier(&___parent_6, value);
	}

	inline static int32_t get_offset_of_pathID_7() { return static_cast<int32_t>(offsetof(PathNode_t3993763123, ___pathID_7)); }
	inline uint16_t get_pathID_7() const { return ___pathID_7; }
	inline uint16_t* get_address_of_pathID_7() { return &___pathID_7; }
	inline void set_pathID_7(uint16_t value)
	{
		___pathID_7 = value;
	}

	inline static int32_t get_offset_of_flags_8() { return static_cast<int32_t>(offsetof(PathNode_t3993763123, ___flags_8)); }
	inline uint32_t get_flags_8() const { return ___flags_8; }
	inline uint32_t* get_address_of_flags_8() { return &___flags_8; }
	inline void set_flags_8(uint32_t value)
	{
		___flags_8 = value;
	}

	inline static int32_t get_offset_of_g_9() { return static_cast<int32_t>(offsetof(PathNode_t3993763123, ___g_9)); }
	inline uint32_t get_g_9() const { return ___g_9; }
	inline uint32_t* get_address_of_g_9() { return &___g_9; }
	inline void set_g_9(uint32_t value)
	{
		___g_9 = value;
	}

	inline static int32_t get_offset_of_h_10() { return static_cast<int32_t>(offsetof(PathNode_t3993763123, ___h_10)); }
	inline uint32_t get_h_10() const { return ___h_10; }
	inline uint32_t* get_address_of_h_10() { return &___h_10; }
	inline void set_h_10(uint32_t value)
	{
		___h_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
