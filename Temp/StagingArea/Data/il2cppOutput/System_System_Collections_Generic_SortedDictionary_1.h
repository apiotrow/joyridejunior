#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4014882752.h"
#include "System_System_Collections_Generic_RBTree_NodeEnume1005851526.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22826756868.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.SortedDictionary`2/Enumerator<System.Int32,System.Int32>
struct  Enumerator_t3105253515 
{
public:
	// System.Collections.Generic.RBTree/NodeEnumerator System.Collections.Generic.SortedDictionary`2/Enumerator::host
	NodeEnumerator_t1005851526  ___host_0;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Enumerator::current
	KeyValuePair_2_t2826756868  ___current_1;

public:
	inline static int32_t get_offset_of_host_0() { return static_cast<int32_t>(offsetof(Enumerator_t3105253515, ___host_0)); }
	inline NodeEnumerator_t1005851526  get_host_0() const { return ___host_0; }
	inline NodeEnumerator_t1005851526 * get_address_of_host_0() { return &___host_0; }
	inline void set_host_0(NodeEnumerator_t1005851526  value)
	{
		___host_0 = value;
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(Enumerator_t3105253515, ___current_1)); }
	inline KeyValuePair_2_t2826756868  get_current_1() const { return ___current_1; }
	inline KeyValuePair_2_t2826756868 * get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(KeyValuePair_2_t2826756868  value)
	{
		___current_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
