#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Pathfinding.Int3>>
struct List_1_t4291086722;
// System.Collections.Generic.HashSet`1<System.Collections.Generic.List`1<Pathfinding.Int3>>
struct HashSet_1_t1897849128;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Util.ListPool`1<Pathfinding.Int3>
struct  ListPool_1_t1089234988  : public Il2CppObject
{
public:

public:
};

struct ListPool_1_t1089234988_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<T>> Pathfinding.Util.ListPool`1::pool
	List_1_t4291086722 * ___pool_1;
	// System.Collections.Generic.HashSet`1<System.Collections.Generic.List`1<T>> Pathfinding.Util.ListPool`1::inPool
	HashSet_1_t1897849128 * ___inPool_2;

public:
	inline static int32_t get_offset_of_pool_1() { return static_cast<int32_t>(offsetof(ListPool_1_t1089234988_StaticFields, ___pool_1)); }
	inline List_1_t4291086722 * get_pool_1() const { return ___pool_1; }
	inline List_1_t4291086722 ** get_address_of_pool_1() { return &___pool_1; }
	inline void set_pool_1(List_1_t4291086722 * value)
	{
		___pool_1 = value;
		Il2CppCodeGenWriteBarrier(&___pool_1, value);
	}

	inline static int32_t get_offset_of_inPool_2() { return static_cast<int32_t>(offsetof(ListPool_1_t1089234988_StaticFields, ___inPool_2)); }
	inline HashSet_1_t1897849128 * get_inPool_2() const { return ___inPool_2; }
	inline HashSet_1_t1897849128 ** get_address_of_inPool_2() { return &___inPool_2; }
	inline void set_inPool_2(HashSet_1_t1897849128 * value)
	{
		___inPool_2 = value;
		Il2CppCodeGenWriteBarrier(&___inPool_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
