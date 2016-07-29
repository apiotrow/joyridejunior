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
// Pathfinding.PathHandler
struct PathHandler_t2800540817;
// Pathfinding.GraphNodeDelegate
struct GraphNodeDelegate_t1019366209;
// Pathfinding.NavGraph
struct NavGraph_t535983959;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.NavGraph/<OnDrawGizmos>c__AnonStorey23
struct  U3COnDrawGizmosU3Ec__AnonStorey23_t2314199618  : public Il2CppObject
{
public:
	// Pathfinding.GraphNode Pathfinding.NavGraph/<OnDrawGizmos>c__AnonStorey23::node
	GraphNode_t3525007772 * ___node_0;
	// Pathfinding.PathHandler Pathfinding.NavGraph/<OnDrawGizmos>c__AnonStorey23::data
	PathHandler_t2800540817 * ___data_1;
	// Pathfinding.GraphNodeDelegate Pathfinding.NavGraph/<OnDrawGizmos>c__AnonStorey23::drawConnection
	GraphNodeDelegate_t1019366209 * ___drawConnection_2;
	// Pathfinding.NavGraph Pathfinding.NavGraph/<OnDrawGizmos>c__AnonStorey23::<>f__this
	NavGraph_t535983959 * ___U3CU3Ef__this_3;

public:
	inline static int32_t get_offset_of_node_0() { return static_cast<int32_t>(offsetof(U3COnDrawGizmosU3Ec__AnonStorey23_t2314199618, ___node_0)); }
	inline GraphNode_t3525007772 * get_node_0() const { return ___node_0; }
	inline GraphNode_t3525007772 ** get_address_of_node_0() { return &___node_0; }
	inline void set_node_0(GraphNode_t3525007772 * value)
	{
		___node_0 = value;
		Il2CppCodeGenWriteBarrier(&___node_0, value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(U3COnDrawGizmosU3Ec__AnonStorey23_t2314199618, ___data_1)); }
	inline PathHandler_t2800540817 * get_data_1() const { return ___data_1; }
	inline PathHandler_t2800540817 ** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(PathHandler_t2800540817 * value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}

	inline static int32_t get_offset_of_drawConnection_2() { return static_cast<int32_t>(offsetof(U3COnDrawGizmosU3Ec__AnonStorey23_t2314199618, ___drawConnection_2)); }
	inline GraphNodeDelegate_t1019366209 * get_drawConnection_2() const { return ___drawConnection_2; }
	inline GraphNodeDelegate_t1019366209 ** get_address_of_drawConnection_2() { return &___drawConnection_2; }
	inline void set_drawConnection_2(GraphNodeDelegate_t1019366209 * value)
	{
		___drawConnection_2 = value;
		Il2CppCodeGenWriteBarrier(&___drawConnection_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_3() { return static_cast<int32_t>(offsetof(U3COnDrawGizmosU3Ec__AnonStorey23_t2314199618, ___U3CU3Ef__this_3)); }
	inline NavGraph_t535983959 * get_U3CU3Ef__this_3() const { return ___U3CU3Ef__this_3; }
	inline NavGraph_t535983959 ** get_address_of_U3CU3Ef__this_3() { return &___U3CU3Ef__this_3; }
	inline void set_U3CU3Ef__this_3(NavGraph_t535983959 * value)
	{
		___U3CU3Ef__this_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
