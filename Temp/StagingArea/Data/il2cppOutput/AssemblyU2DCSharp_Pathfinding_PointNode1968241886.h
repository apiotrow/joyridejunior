#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.GraphNode[]
struct GraphNodeU5BU5D_t2658295925;
// System.UInt32[]
struct UInt32U5BU5D_t2133601851;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// Pathfinding.PointNode
struct PointNode_t1968241886;

#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.PointNode
struct  PointNode_t1968241886  : public GraphNode_t3525007772
{
public:
	// Pathfinding.GraphNode[] Pathfinding.PointNode::connections
	GraphNodeU5BU5D_t2658295925* ___connections_14;
	// System.UInt32[] Pathfinding.PointNode::connectionCosts
	UInt32U5BU5D_t2133601851* ___connectionCosts_15;
	// UnityEngine.GameObject Pathfinding.PointNode::gameObject
	GameObject_t4012695102 * ___gameObject_16;
	// Pathfinding.PointNode Pathfinding.PointNode::next
	PointNode_t1968241886 * ___next_17;

public:
	inline static int32_t get_offset_of_connections_14() { return static_cast<int32_t>(offsetof(PointNode_t1968241886, ___connections_14)); }
	inline GraphNodeU5BU5D_t2658295925* get_connections_14() const { return ___connections_14; }
	inline GraphNodeU5BU5D_t2658295925** get_address_of_connections_14() { return &___connections_14; }
	inline void set_connections_14(GraphNodeU5BU5D_t2658295925* value)
	{
		___connections_14 = value;
		Il2CppCodeGenWriteBarrier(&___connections_14, value);
	}

	inline static int32_t get_offset_of_connectionCosts_15() { return static_cast<int32_t>(offsetof(PointNode_t1968241886, ___connectionCosts_15)); }
	inline UInt32U5BU5D_t2133601851* get_connectionCosts_15() const { return ___connectionCosts_15; }
	inline UInt32U5BU5D_t2133601851** get_address_of_connectionCosts_15() { return &___connectionCosts_15; }
	inline void set_connectionCosts_15(UInt32U5BU5D_t2133601851* value)
	{
		___connectionCosts_15 = value;
		Il2CppCodeGenWriteBarrier(&___connectionCosts_15, value);
	}

	inline static int32_t get_offset_of_gameObject_16() { return static_cast<int32_t>(offsetof(PointNode_t1968241886, ___gameObject_16)); }
	inline GameObject_t4012695102 * get_gameObject_16() const { return ___gameObject_16; }
	inline GameObject_t4012695102 ** get_address_of_gameObject_16() { return &___gameObject_16; }
	inline void set_gameObject_16(GameObject_t4012695102 * value)
	{
		___gameObject_16 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_16, value);
	}

	inline static int32_t get_offset_of_next_17() { return static_cast<int32_t>(offsetof(PointNode_t1968241886, ___next_17)); }
	inline PointNode_t1968241886 * get_next_17() const { return ___next_17; }
	inline PointNode_t1968241886 ** get_address_of_next_17() { return &___next_17; }
	inline void set_next_17(PointNode_t1968241886 * value)
	{
		___next_17 = value;
		Il2CppCodeGenWriteBarrier(&___next_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
