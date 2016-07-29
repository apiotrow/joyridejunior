#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "System_System_Collections_Generic_RBTree_Node2433570.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>
struct  Node_t19371549  : public Node_t2433570
{
public:
	// TKey System.Collections.Generic.SortedDictionary`2/Node::key
	Il2CppObject * ___key_3;
	// TValue System.Collections.Generic.SortedDictionary`2/Node::value
	Il2CppObject * ___value_4;

public:
	inline static int32_t get_offset_of_key_3() { return static_cast<int32_t>(offsetof(Node_t19371549, ___key_3)); }
	inline Il2CppObject * get_key_3() const { return ___key_3; }
	inline Il2CppObject ** get_address_of_key_3() { return &___key_3; }
	inline void set_key_3(Il2CppObject * value)
	{
		___key_3 = value;
		Il2CppCodeGenWriteBarrier(&___key_3, value);
	}

	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(Node_t19371549, ___value_4)); }
	inline Il2CppObject * get_value_4() const { return ___value_4; }
	inline Il2CppObject ** get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(Il2CppObject * value)
	{
		___value_4 = value;
		Il2CppCodeGenWriteBarrier(&___value_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
