#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Queue`1<Pathfinding.GraphNode>
struct Queue_1_t938128016;
// System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,System.Int32>
struct Dictionary_2_t4186538373;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.PathUtilities
struct  PathUtilities_t2261920145  : public Il2CppObject
{
public:

public:
};

struct PathUtilities_t2261920145_StaticFields
{
public:
	// System.Collections.Generic.Queue`1<Pathfinding.GraphNode> Pathfinding.PathUtilities::BFSQueue
	Queue_1_t938128016 * ___BFSQueue_0;
	// System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,System.Int32> Pathfinding.PathUtilities::BFSMap
	Dictionary_2_t4186538373 * ___BFSMap_1;

public:
	inline static int32_t get_offset_of_BFSQueue_0() { return static_cast<int32_t>(offsetof(PathUtilities_t2261920145_StaticFields, ___BFSQueue_0)); }
	inline Queue_1_t938128016 * get_BFSQueue_0() const { return ___BFSQueue_0; }
	inline Queue_1_t938128016 ** get_address_of_BFSQueue_0() { return &___BFSQueue_0; }
	inline void set_BFSQueue_0(Queue_1_t938128016 * value)
	{
		___BFSQueue_0 = value;
		Il2CppCodeGenWriteBarrier(&___BFSQueue_0, value);
	}

	inline static int32_t get_offset_of_BFSMap_1() { return static_cast<int32_t>(offsetof(PathUtilities_t2261920145_StaticFields, ___BFSMap_1)); }
	inline Dictionary_2_t4186538373 * get_BFSMap_1() const { return ___BFSMap_1; }
	inline Dictionary_2_t4186538373 ** get_address_of_BFSMap_1() { return &___BFSMap_1; }
	inline void set_BFSMap_1(Dictionary_2_t4186538373 * value)
	{
		___BFSMap_1 = value;
		Il2CppCodeGenWriteBarrier(&___BFSMap_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
