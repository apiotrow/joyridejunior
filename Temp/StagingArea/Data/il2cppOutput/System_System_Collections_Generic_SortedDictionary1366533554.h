#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.SortedDictionary`2<System.Int32,System.Int32>
struct SortedDictionary_2_t4257150041;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Int32,System.Int32>
struct  KeyCollection_t1366533555  : public Il2CppObject
{
public:
	// System.Collections.Generic.SortedDictionary`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/KeyCollection::_dic
	SortedDictionary_2_t4257150041 * ____dic_0;

public:
	inline static int32_t get_offset_of__dic_0() { return static_cast<int32_t>(offsetof(KeyCollection_t1366533555, ____dic_0)); }
	inline SortedDictionary_2_t4257150041 * get__dic_0() const { return ____dic_0; }
	inline SortedDictionary_2_t4257150041 ** get_address_of__dic_0() { return &____dic_0; }
	inline void set__dic_0(SortedDictionary_2_t4257150041 * value)
	{
		____dic_0 = value;
		Il2CppCodeGenWriteBarrier(&____dic_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
