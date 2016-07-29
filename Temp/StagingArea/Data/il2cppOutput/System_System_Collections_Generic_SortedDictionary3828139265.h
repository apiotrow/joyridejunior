#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "System_System_Collections_Generic_RBTree_Node2433570.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.SortedDictionary`2/Node<System.Int32,System.Int32>
struct  Node_t3828139265  : public Node_t2433570
{
public:
	// TKey System.Collections.Generic.SortedDictionary`2/Node::key
	int32_t ___key_3;
	// TValue System.Collections.Generic.SortedDictionary`2/Node::value
	int32_t ___value_4;

public:
	inline static int32_t get_offset_of_key_3() { return static_cast<int32_t>(offsetof(Node_t3828139265, ___key_3)); }
	inline int32_t get_key_3() const { return ___key_3; }
	inline int32_t* get_address_of_key_3() { return &___key_3; }
	inline void set_key_3(int32_t value)
	{
		___key_3 = value;
	}

	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(Node_t3828139265, ___value_4)); }
	inline int32_t get_value_4() const { return ___value_4; }
	inline int32_t* get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(int32_t value)
	{
		___value_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
