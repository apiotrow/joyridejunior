#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>>
struct Dictionary_2_t3085351335;
// System.Collections.Generic.Dictionary`2<System.Type,System.Int32>
struct Dictionary_2_t664995206;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.PathPool
struct  PathPool_t3993823053  : public Il2CppObject
{
public:

public:
};

struct PathPool_t3993823053_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>> Pathfinding.PathPool::pool
	Dictionary_2_t3085351335 * ___pool_0;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Int32> Pathfinding.PathPool::totalCreated
	Dictionary_2_t664995206 * ___totalCreated_1;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(PathPool_t3993823053_StaticFields, ___pool_0)); }
	inline Dictionary_2_t3085351335 * get_pool_0() const { return ___pool_0; }
	inline Dictionary_2_t3085351335 ** get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(Dictionary_2_t3085351335 * value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier(&___pool_0, value);
	}

	inline static int32_t get_offset_of_totalCreated_1() { return static_cast<int32_t>(offsetof(PathPool_t3993823053_StaticFields, ___totalCreated_1)); }
	inline Dictionary_2_t664995206 * get_totalCreated_1() const { return ___totalCreated_1; }
	inline Dictionary_2_t664995206 ** get_address_of_totalCreated_1() { return &___totalCreated_1; }
	inline void set_totalCreated_1(Dictionary_2_t664995206 * value)
	{
		___totalCreated_1 = value;
		Il2CppCodeGenWriteBarrier(&___totalCreated_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
