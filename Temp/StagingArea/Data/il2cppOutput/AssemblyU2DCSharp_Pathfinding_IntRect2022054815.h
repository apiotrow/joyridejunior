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

// Pathfinding.IntRect
struct  IntRect_t2022054815 
{
public:
	// System.Int32 Pathfinding.IntRect::xmin
	int32_t ___xmin_0;
	// System.Int32 Pathfinding.IntRect::ymin
	int32_t ___ymin_1;
	// System.Int32 Pathfinding.IntRect::xmax
	int32_t ___xmax_2;
	// System.Int32 Pathfinding.IntRect::ymax
	int32_t ___ymax_3;

public:
	inline static int32_t get_offset_of_xmin_0() { return static_cast<int32_t>(offsetof(IntRect_t2022054815, ___xmin_0)); }
	inline int32_t get_xmin_0() const { return ___xmin_0; }
	inline int32_t* get_address_of_xmin_0() { return &___xmin_0; }
	inline void set_xmin_0(int32_t value)
	{
		___xmin_0 = value;
	}

	inline static int32_t get_offset_of_ymin_1() { return static_cast<int32_t>(offsetof(IntRect_t2022054815, ___ymin_1)); }
	inline int32_t get_ymin_1() const { return ___ymin_1; }
	inline int32_t* get_address_of_ymin_1() { return &___ymin_1; }
	inline void set_ymin_1(int32_t value)
	{
		___ymin_1 = value;
	}

	inline static int32_t get_offset_of_xmax_2() { return static_cast<int32_t>(offsetof(IntRect_t2022054815, ___xmax_2)); }
	inline int32_t get_xmax_2() const { return ___xmax_2; }
	inline int32_t* get_address_of_xmax_2() { return &___xmax_2; }
	inline void set_xmax_2(int32_t value)
	{
		___xmax_2 = value;
	}

	inline static int32_t get_offset_of_ymax_3() { return static_cast<int32_t>(offsetof(IntRect_t2022054815, ___ymax_3)); }
	inline int32_t get_ymax_3() const { return ___ymax_3; }
	inline int32_t* get_address_of_ymax_3() { return &___ymax_3; }
	inline void set_ymax_3(int32_t value)
	{
		___ymax_3 = value;
	}
};

struct IntRect_t2022054815_StaticFields
{
public:
	// System.Int32[] Pathfinding.IntRect::Rotations
	Int32U5BU5D_t1809983122* ___Rotations_4;

public:
	inline static int32_t get_offset_of_Rotations_4() { return static_cast<int32_t>(offsetof(IntRect_t2022054815_StaticFields, ___Rotations_4)); }
	inline Int32U5BU5D_t1809983122* get_Rotations_4() const { return ___Rotations_4; }
	inline Int32U5BU5D_t1809983122** get_address_of_Rotations_4() { return &___Rotations_4; }
	inline void set_Rotations_4(Int32U5BU5D_t1809983122* value)
	{
		___Rotations_4 = value;
		Il2CppCodeGenWriteBarrier(&___Rotations_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Pathfinding.IntRect
struct IntRect_t2022054815_marshaled_pinvoke
{
	int32_t ___xmin_0;
	int32_t ___ymin_1;
	int32_t ___xmax_2;
	int32_t ___ymax_3;
};
// Native definition for marshalling of: Pathfinding.IntRect
struct IntRect_t2022054815_marshaled_com
{
	int32_t ___xmin_0;
	int32_t ___ymin_1;
	int32_t ___xmax_2;
	int32_t ___ymax_3;
};
