#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Collections.Generic.Stack`1<System.Object>>
struct List_1_t4204471425;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Util.StackPool`1<System.Object>
struct  StackPool_1_t2073126442  : public Il2CppObject
{
public:

public:
};

struct StackPool_1_t2073126442_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Collections.Generic.Stack`1<T>> Pathfinding.Util.StackPool`1::pool
	List_1_t4204471425 * ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(StackPool_1_t2073126442_StaticFields, ___pool_0)); }
	inline List_1_t4204471425 * get_pool_0() const { return ___pool_0; }
	inline List_1_t4204471425 ** get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(List_1_t4204471425 * value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier(&___pool_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
