#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.GraphNode
struct GraphNode_t3525007772;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AstarPath/<GetNearest>c__AnonStorey15
struct  U3CGetNearestU3Ec__AnonStorey15_t2442641265  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 AstarPath/<GetNearest>c__AnonStorey15::lineOrigin
	Vector3_t3525329789  ___lineOrigin_0;
	// UnityEngine.Vector3 AstarPath/<GetNearest>c__AnonStorey15::lineDirection
	Vector3_t3525329789  ___lineDirection_1;
	// System.Single AstarPath/<GetNearest>c__AnonStorey15::minDist
	float ___minDist_2;
	// Pathfinding.GraphNode AstarPath/<GetNearest>c__AnonStorey15::nearestNode
	GraphNode_t3525007772 * ___nearestNode_3;

public:
	inline static int32_t get_offset_of_lineOrigin_0() { return static_cast<int32_t>(offsetof(U3CGetNearestU3Ec__AnonStorey15_t2442641265, ___lineOrigin_0)); }
	inline Vector3_t3525329789  get_lineOrigin_0() const { return ___lineOrigin_0; }
	inline Vector3_t3525329789 * get_address_of_lineOrigin_0() { return &___lineOrigin_0; }
	inline void set_lineOrigin_0(Vector3_t3525329789  value)
	{
		___lineOrigin_0 = value;
	}

	inline static int32_t get_offset_of_lineDirection_1() { return static_cast<int32_t>(offsetof(U3CGetNearestU3Ec__AnonStorey15_t2442641265, ___lineDirection_1)); }
	inline Vector3_t3525329789  get_lineDirection_1() const { return ___lineDirection_1; }
	inline Vector3_t3525329789 * get_address_of_lineDirection_1() { return &___lineDirection_1; }
	inline void set_lineDirection_1(Vector3_t3525329789  value)
	{
		___lineDirection_1 = value;
	}

	inline static int32_t get_offset_of_minDist_2() { return static_cast<int32_t>(offsetof(U3CGetNearestU3Ec__AnonStorey15_t2442641265, ___minDist_2)); }
	inline float get_minDist_2() const { return ___minDist_2; }
	inline float* get_address_of_minDist_2() { return &___minDist_2; }
	inline void set_minDist_2(float value)
	{
		___minDist_2 = value;
	}

	inline static int32_t get_offset_of_nearestNode_3() { return static_cast<int32_t>(offsetof(U3CGetNearestU3Ec__AnonStorey15_t2442641265, ___nearestNode_3)); }
	inline GraphNode_t3525007772 * get_nearestNode_3() const { return ___nearestNode_3; }
	inline GraphNode_t3525007772 ** get_address_of_nearestNode_3() { return &___nearestNode_3; }
	inline void set_nearestNode_3(GraphNode_t3525007772 * value)
	{
		___nearestNode_3 = value;
		Il2CppCodeGenWriteBarrier(&___nearestNode_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
