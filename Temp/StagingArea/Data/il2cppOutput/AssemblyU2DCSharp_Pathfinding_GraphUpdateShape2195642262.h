#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.GraphUpdateShape
struct  GraphUpdateShape_t2195642262  : public Il2CppObject
{
public:
	// UnityEngine.Vector3[] Pathfinding.GraphUpdateShape::_points
	Vector3U5BU5D_t3227571696* ____points_0;
	// UnityEngine.Vector3[] Pathfinding.GraphUpdateShape::_convexPoints
	Vector3U5BU5D_t3227571696* ____convexPoints_1;
	// System.Boolean Pathfinding.GraphUpdateShape::_convex
	bool ____convex_2;

public:
	inline static int32_t get_offset_of__points_0() { return static_cast<int32_t>(offsetof(GraphUpdateShape_t2195642262, ____points_0)); }
	inline Vector3U5BU5D_t3227571696* get__points_0() const { return ____points_0; }
	inline Vector3U5BU5D_t3227571696** get_address_of__points_0() { return &____points_0; }
	inline void set__points_0(Vector3U5BU5D_t3227571696* value)
	{
		____points_0 = value;
		Il2CppCodeGenWriteBarrier(&____points_0, value);
	}

	inline static int32_t get_offset_of__convexPoints_1() { return static_cast<int32_t>(offsetof(GraphUpdateShape_t2195642262, ____convexPoints_1)); }
	inline Vector3U5BU5D_t3227571696* get__convexPoints_1() const { return ____convexPoints_1; }
	inline Vector3U5BU5D_t3227571696** get_address_of__convexPoints_1() { return &____convexPoints_1; }
	inline void set__convexPoints_1(Vector3U5BU5D_t3227571696* value)
	{
		____convexPoints_1 = value;
		Il2CppCodeGenWriteBarrier(&____convexPoints_1, value);
	}

	inline static int32_t get_offset_of__convex_2() { return static_cast<int32_t>(offsetof(GraphUpdateShape_t2195642262, ____convex_2)); }
	inline bool get__convex_2() const { return ____convex_2; }
	inline bool* get_address_of__convex_2() { return &____convex_2; }
	inline void set__convex_2(bool value)
	{
		____convex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
