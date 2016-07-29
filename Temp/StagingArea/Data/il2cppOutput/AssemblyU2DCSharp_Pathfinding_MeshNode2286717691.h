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

#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.MeshNode
struct  MeshNode_t2286717691  : public GraphNode_t3525007772
{
public:
	// Pathfinding.GraphNode[] Pathfinding.MeshNode::connections
	GraphNodeU5BU5D_t2658295925* ___connections_14;
	// System.UInt32[] Pathfinding.MeshNode::connectionCosts
	UInt32U5BU5D_t2133601851* ___connectionCosts_15;

public:
	inline static int32_t get_offset_of_connections_14() { return static_cast<int32_t>(offsetof(MeshNode_t2286717691, ___connections_14)); }
	inline GraphNodeU5BU5D_t2658295925* get_connections_14() const { return ___connections_14; }
	inline GraphNodeU5BU5D_t2658295925** get_address_of_connections_14() { return &___connections_14; }
	inline void set_connections_14(GraphNodeU5BU5D_t2658295925* value)
	{
		___connections_14 = value;
		Il2CppCodeGenWriteBarrier(&___connections_14, value);
	}

	inline static int32_t get_offset_of_connectionCosts_15() { return static_cast<int32_t>(offsetof(MeshNode_t2286717691, ___connectionCosts_15)); }
	inline UInt32U5BU5D_t2133601851* get_connectionCosts_15() const { return ___connectionCosts_15; }
	inline UInt32U5BU5D_t2133601851** get_address_of_connectionCosts_15() { return &___connectionCosts_15; }
	inline void set_connectionCosts_15(UInt32U5BU5D_t2133601851* value)
	{
		___connectionCosts_15 = value;
		Il2CppCodeGenWriteBarrier(&___connectionCosts_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
