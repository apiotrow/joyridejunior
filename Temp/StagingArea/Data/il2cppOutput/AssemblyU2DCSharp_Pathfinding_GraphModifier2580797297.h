#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.GraphModifier
struct GraphModifier_t2580797297;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.GraphModifier
struct  GraphModifier_t2580797297  : public MonoBehaviour_t3012272455
{
public:
	// Pathfinding.GraphModifier Pathfinding.GraphModifier::prev
	GraphModifier_t2580797297 * ___prev_3;
	// Pathfinding.GraphModifier Pathfinding.GraphModifier::next
	GraphModifier_t2580797297 * ___next_4;

public:
	inline static int32_t get_offset_of_prev_3() { return static_cast<int32_t>(offsetof(GraphModifier_t2580797297, ___prev_3)); }
	inline GraphModifier_t2580797297 * get_prev_3() const { return ___prev_3; }
	inline GraphModifier_t2580797297 ** get_address_of_prev_3() { return &___prev_3; }
	inline void set_prev_3(GraphModifier_t2580797297 * value)
	{
		___prev_3 = value;
		Il2CppCodeGenWriteBarrier(&___prev_3, value);
	}

	inline static int32_t get_offset_of_next_4() { return static_cast<int32_t>(offsetof(GraphModifier_t2580797297, ___next_4)); }
	inline GraphModifier_t2580797297 * get_next_4() const { return ___next_4; }
	inline GraphModifier_t2580797297 ** get_address_of_next_4() { return &___next_4; }
	inline void set_next_4(GraphModifier_t2580797297 * value)
	{
		___next_4 = value;
		Il2CppCodeGenWriteBarrier(&___next_4, value);
	}
};

struct GraphModifier_t2580797297_StaticFields
{
public:
	// Pathfinding.GraphModifier Pathfinding.GraphModifier::root
	GraphModifier_t2580797297 * ___root_2;

public:
	inline static int32_t get_offset_of_root_2() { return static_cast<int32_t>(offsetof(GraphModifier_t2580797297_StaticFields, ___root_2)); }
	inline GraphModifier_t2580797297 * get_root_2() const { return ___root_2; }
	inline GraphModifier_t2580797297 ** get_address_of_root_2() { return &___root_2; }
	inline void set_root_2(GraphModifier_t2580797297 * value)
	{
		___root_2 = value;
		Il2CppCodeGenWriteBarrier(&___root_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
