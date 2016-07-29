#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.GridGraph[]
struct GridGraphU5BU5D_t758658909;
// Pathfinding.GraphNode[]
struct GraphNodeU5BU5D_t2658295925;
// System.UInt32[]
struct UInt32U5BU5D_t2133601851;

#include "AssemblyU2DCSharp_Pathfinding_GridNodeBase1952096965.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.GridNode
struct  GridNode_t3077417940  : public GridNodeBase_t1952096965
{
public:
	// Pathfinding.GraphNode[] Pathfinding.GridNode::connections
	GraphNodeU5BU5D_t2658295925* ___connections_25;
	// System.UInt32[] Pathfinding.GridNode::connectionCosts
	UInt32U5BU5D_t2133601851* ___connectionCosts_26;
	// System.UInt16 Pathfinding.GridNode::gridFlags
	uint16_t ___gridFlags_27;

public:
	inline static int32_t get_offset_of_connections_25() { return static_cast<int32_t>(offsetof(GridNode_t3077417940, ___connections_25)); }
	inline GraphNodeU5BU5D_t2658295925* get_connections_25() const { return ___connections_25; }
	inline GraphNodeU5BU5D_t2658295925** get_address_of_connections_25() { return &___connections_25; }
	inline void set_connections_25(GraphNodeU5BU5D_t2658295925* value)
	{
		___connections_25 = value;
		Il2CppCodeGenWriteBarrier(&___connections_25, value);
	}

	inline static int32_t get_offset_of_connectionCosts_26() { return static_cast<int32_t>(offsetof(GridNode_t3077417940, ___connectionCosts_26)); }
	inline UInt32U5BU5D_t2133601851* get_connectionCosts_26() const { return ___connectionCosts_26; }
	inline UInt32U5BU5D_t2133601851** get_address_of_connectionCosts_26() { return &___connectionCosts_26; }
	inline void set_connectionCosts_26(UInt32U5BU5D_t2133601851* value)
	{
		___connectionCosts_26 = value;
		Il2CppCodeGenWriteBarrier(&___connectionCosts_26, value);
	}

	inline static int32_t get_offset_of_gridFlags_27() { return static_cast<int32_t>(offsetof(GridNode_t3077417940, ___gridFlags_27)); }
	inline uint16_t get_gridFlags_27() const { return ___gridFlags_27; }
	inline uint16_t* get_address_of_gridFlags_27() { return &___gridFlags_27; }
	inline void set_gridFlags_27(uint16_t value)
	{
		___gridFlags_27 = value;
	}
};

struct GridNode_t3077417940_StaticFields
{
public:
	// Pathfinding.GridGraph[] Pathfinding.GridNode::_gridGraphs
	GridGraphU5BU5D_t758658909* ____gridGraphs_24;

public:
	inline static int32_t get_offset_of__gridGraphs_24() { return static_cast<int32_t>(offsetof(GridNode_t3077417940_StaticFields, ____gridGraphs_24)); }
	inline GridGraphU5BU5D_t758658909* get__gridGraphs_24() const { return ____gridGraphs_24; }
	inline GridGraphU5BU5D_t758658909** get_address_of__gridGraphs_24() { return &____gridGraphs_24; }
	inline void set__gridGraphs_24(GridGraphU5BU5D_t758658909* value)
	{
		____gridGraphs_24 = value;
		Il2CppCodeGenWriteBarrier(&____gridGraphs_24, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
