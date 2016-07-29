#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Int2
struct  Int2_t2697168783 
{
public:
	// System.Int32 Pathfinding.Int2::x
	int32_t ___x_0;
	// System.Int32 Pathfinding.Int2::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Int2_t2697168783, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Int2_t2697168783, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};

struct Int2_t2697168783_StaticFields
{
public:
	// System.Int32[] Pathfinding.Int2::Rotations
	Int32U5BU5D_t1809983122* ___Rotations_2;

public:
	inline static int32_t get_offset_of_Rotations_2() { return static_cast<int32_t>(offsetof(Int2_t2697168783_StaticFields, ___Rotations_2)); }
	inline Int32U5BU5D_t1809983122* get_Rotations_2() const { return ___Rotations_2; }
	inline Int32U5BU5D_t1809983122** get_address_of_Rotations_2() { return &___Rotations_2; }
	inline void set_Rotations_2(Int32U5BU5D_t1809983122* value)
	{
		___Rotations_2 = value;
		Il2CppCodeGenWriteBarrier(&___Rotations_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Pathfinding.Int2
struct Int2_t2697168783_marshaled_pinvoke
{
	int32_t ___x_0;
	int32_t ___y_1;
};
// Native definition for marshalling of: Pathfinding.Int2
struct Int2_t2697168783_marshaled_com
{
	int32_t ___x_0;
	int32_t ___y_1;
};
