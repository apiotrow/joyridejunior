#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.RelevantGraphSurface
struct RelevantGraphSurface_t3815285800;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.RelevantGraphSurface
struct  RelevantGraphSurface_t3815285800  : public MonoBehaviour_t3012272455
{
public:
	// System.Single Pathfinding.RelevantGraphSurface::maxRange
	float ___maxRange_3;
	// Pathfinding.RelevantGraphSurface Pathfinding.RelevantGraphSurface::prev
	RelevantGraphSurface_t3815285800 * ___prev_4;
	// Pathfinding.RelevantGraphSurface Pathfinding.RelevantGraphSurface::next
	RelevantGraphSurface_t3815285800 * ___next_5;
	// UnityEngine.Vector3 Pathfinding.RelevantGraphSurface::position
	Vector3_t3525329789  ___position_6;

public:
	inline static int32_t get_offset_of_maxRange_3() { return static_cast<int32_t>(offsetof(RelevantGraphSurface_t3815285800, ___maxRange_3)); }
	inline float get_maxRange_3() const { return ___maxRange_3; }
	inline float* get_address_of_maxRange_3() { return &___maxRange_3; }
	inline void set_maxRange_3(float value)
	{
		___maxRange_3 = value;
	}

	inline static int32_t get_offset_of_prev_4() { return static_cast<int32_t>(offsetof(RelevantGraphSurface_t3815285800, ___prev_4)); }
	inline RelevantGraphSurface_t3815285800 * get_prev_4() const { return ___prev_4; }
	inline RelevantGraphSurface_t3815285800 ** get_address_of_prev_4() { return &___prev_4; }
	inline void set_prev_4(RelevantGraphSurface_t3815285800 * value)
	{
		___prev_4 = value;
		Il2CppCodeGenWriteBarrier(&___prev_4, value);
	}

	inline static int32_t get_offset_of_next_5() { return static_cast<int32_t>(offsetof(RelevantGraphSurface_t3815285800, ___next_5)); }
	inline RelevantGraphSurface_t3815285800 * get_next_5() const { return ___next_5; }
	inline RelevantGraphSurface_t3815285800 ** get_address_of_next_5() { return &___next_5; }
	inline void set_next_5(RelevantGraphSurface_t3815285800 * value)
	{
		___next_5 = value;
		Il2CppCodeGenWriteBarrier(&___next_5, value);
	}

	inline static int32_t get_offset_of_position_6() { return static_cast<int32_t>(offsetof(RelevantGraphSurface_t3815285800, ___position_6)); }
	inline Vector3_t3525329789  get_position_6() const { return ___position_6; }
	inline Vector3_t3525329789 * get_address_of_position_6() { return &___position_6; }
	inline void set_position_6(Vector3_t3525329789  value)
	{
		___position_6 = value;
	}
};

struct RelevantGraphSurface_t3815285800_StaticFields
{
public:
	// Pathfinding.RelevantGraphSurface Pathfinding.RelevantGraphSurface::root
	RelevantGraphSurface_t3815285800 * ___root_2;

public:
	inline static int32_t get_offset_of_root_2() { return static_cast<int32_t>(offsetof(RelevantGraphSurface_t3815285800_StaticFields, ___root_2)); }
	inline RelevantGraphSurface_t3815285800 * get_root_2() const { return ___root_2; }
	inline RelevantGraphSurface_t3815285800 ** get_address_of_root_2() { return &___root_2; }
	inline void set_root_2(RelevantGraphSurface_t3815285800 * value)
	{
		___root_2 = value;
		Il2CppCodeGenWriteBarrier(&___root_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
