#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.GraphUpdateObject
struct GraphUpdateObject_t4278438658;
// System.Collections.Generic.List`1<Pathfinding.GraphNode>
struct List_1_t26999445;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.GraphUpdateUtilities/<UpdateGraphsNoBlock>c__AnonStorey26
struct  U3CUpdateGraphsNoBlockU3Ec__AnonStorey26_t1111141519  : public Il2CppObject
{
public:
	// Pathfinding.GraphUpdateObject Pathfinding.GraphUpdateUtilities/<UpdateGraphsNoBlock>c__AnonStorey26::guo
	GraphUpdateObject_t4278438658 * ___guo_0;
	// System.Boolean Pathfinding.GraphUpdateUtilities/<UpdateGraphsNoBlock>c__AnonStorey26::worked
	bool ___worked_1;
	// System.Collections.Generic.List`1<Pathfinding.GraphNode> Pathfinding.GraphUpdateUtilities/<UpdateGraphsNoBlock>c__AnonStorey26::nodes
	List_1_t26999445 * ___nodes_2;
	// System.Boolean Pathfinding.GraphUpdateUtilities/<UpdateGraphsNoBlock>c__AnonStorey26::alwaysRevert
	bool ___alwaysRevert_3;

public:
	inline static int32_t get_offset_of_guo_0() { return static_cast<int32_t>(offsetof(U3CUpdateGraphsNoBlockU3Ec__AnonStorey26_t1111141519, ___guo_0)); }
	inline GraphUpdateObject_t4278438658 * get_guo_0() const { return ___guo_0; }
	inline GraphUpdateObject_t4278438658 ** get_address_of_guo_0() { return &___guo_0; }
	inline void set_guo_0(GraphUpdateObject_t4278438658 * value)
	{
		___guo_0 = value;
		Il2CppCodeGenWriteBarrier(&___guo_0, value);
	}

	inline static int32_t get_offset_of_worked_1() { return static_cast<int32_t>(offsetof(U3CUpdateGraphsNoBlockU3Ec__AnonStorey26_t1111141519, ___worked_1)); }
	inline bool get_worked_1() const { return ___worked_1; }
	inline bool* get_address_of_worked_1() { return &___worked_1; }
	inline void set_worked_1(bool value)
	{
		___worked_1 = value;
	}

	inline static int32_t get_offset_of_nodes_2() { return static_cast<int32_t>(offsetof(U3CUpdateGraphsNoBlockU3Ec__AnonStorey26_t1111141519, ___nodes_2)); }
	inline List_1_t26999445 * get_nodes_2() const { return ___nodes_2; }
	inline List_1_t26999445 ** get_address_of_nodes_2() { return &___nodes_2; }
	inline void set_nodes_2(List_1_t26999445 * value)
	{
		___nodes_2 = value;
		Il2CppCodeGenWriteBarrier(&___nodes_2, value);
	}

	inline static int32_t get_offset_of_alwaysRevert_3() { return static_cast<int32_t>(offsetof(U3CUpdateGraphsNoBlockU3Ec__AnonStorey26_t1111141519, ___alwaysRevert_3)); }
	inline bool get_alwaysRevert_3() const { return ___alwaysRevert_3; }
	inline bool* get_address_of_alwaysRevert_3() { return &___alwaysRevert_3; }
	inline void set_alwaysRevert_3(bool value)
	{
		___alwaysRevert_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
