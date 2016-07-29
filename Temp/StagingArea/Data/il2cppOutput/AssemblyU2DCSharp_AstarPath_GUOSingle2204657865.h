#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.IUpdatableGraph
struct IUpdatableGraph_t2838879853;
// Pathfinding.GraphUpdateObject
struct GraphUpdateObject_t4278438658;

#include "mscorlib_System_ValueType4014882752.h"
#include "AssemblyU2DCSharp_AstarPath_GraphUpdateOrder3792331255.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AstarPath/GUOSingle
struct  GUOSingle_t2204657865 
{
public:
	// AstarPath/GraphUpdateOrder AstarPath/GUOSingle::order
	int32_t ___order_0;
	// Pathfinding.IUpdatableGraph AstarPath/GUOSingle::graph
	Il2CppObject * ___graph_1;
	// Pathfinding.GraphUpdateObject AstarPath/GUOSingle::obj
	GraphUpdateObject_t4278438658 * ___obj_2;

public:
	inline static int32_t get_offset_of_order_0() { return static_cast<int32_t>(offsetof(GUOSingle_t2204657865, ___order_0)); }
	inline int32_t get_order_0() const { return ___order_0; }
	inline int32_t* get_address_of_order_0() { return &___order_0; }
	inline void set_order_0(int32_t value)
	{
		___order_0 = value;
	}

	inline static int32_t get_offset_of_graph_1() { return static_cast<int32_t>(offsetof(GUOSingle_t2204657865, ___graph_1)); }
	inline Il2CppObject * get_graph_1() const { return ___graph_1; }
	inline Il2CppObject ** get_address_of_graph_1() { return &___graph_1; }
	inline void set_graph_1(Il2CppObject * value)
	{
		___graph_1 = value;
		Il2CppCodeGenWriteBarrier(&___graph_1, value);
	}

	inline static int32_t get_offset_of_obj_2() { return static_cast<int32_t>(offsetof(GUOSingle_t2204657865, ___obj_2)); }
	inline GraphUpdateObject_t4278438658 * get_obj_2() const { return ___obj_2; }
	inline GraphUpdateObject_t4278438658 ** get_address_of_obj_2() { return &___obj_2; }
	inline void set_obj_2(GraphUpdateObject_t4278438658 * value)
	{
		___obj_2 = value;
		Il2CppCodeGenWriteBarrier(&___obj_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
