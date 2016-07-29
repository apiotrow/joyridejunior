#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.RBTree/Node
struct Node_t2433570;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.RBTree/Node
struct  Node_t2433570  : public Il2CppObject
{
public:
	// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree/Node::left
	Node_t2433570 * ___left_0;
	// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree/Node::right
	Node_t2433570 * ___right_1;
	// System.UInt32 System.Collections.Generic.RBTree/Node::size_black
	uint32_t ___size_black_2;

public:
	inline static int32_t get_offset_of_left_0() { return static_cast<int32_t>(offsetof(Node_t2433570, ___left_0)); }
	inline Node_t2433570 * get_left_0() const { return ___left_0; }
	inline Node_t2433570 ** get_address_of_left_0() { return &___left_0; }
	inline void set_left_0(Node_t2433570 * value)
	{
		___left_0 = value;
		Il2CppCodeGenWriteBarrier(&___left_0, value);
	}

	inline static int32_t get_offset_of_right_1() { return static_cast<int32_t>(offsetof(Node_t2433570, ___right_1)); }
	inline Node_t2433570 * get_right_1() const { return ___right_1; }
	inline Node_t2433570 ** get_address_of_right_1() { return &___right_1; }
	inline void set_right_1(Node_t2433570 * value)
	{
		___right_1 = value;
		Il2CppCodeGenWriteBarrier(&___right_1, value);
	}

	inline static int32_t get_offset_of_size_black_2() { return static_cast<int32_t>(offsetof(Node_t2433570, ___size_black_2)); }
	inline uint32_t get_size_black_2() const { return ___size_black_2; }
	inline uint32_t* get_address_of_size_black_2() { return &___size_black_2; }
	inline void set_size_black_2(uint32_t value)
	{
		___size_black_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
