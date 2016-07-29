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
// Pathfinding.NNConstraint
struct NNConstraint_t3253238025;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.NavGraph/<GetNearest>c__AnonStorey22
struct  U3CGetNearestU3Ec__AnonStorey22_t2442641293  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 Pathfinding.NavGraph/<GetNearest>c__AnonStorey22::position
	Vector3_t3525329789  ___position_0;
	// System.Single Pathfinding.NavGraph/<GetNearest>c__AnonStorey22::minDist
	float ___minDist_1;
	// Pathfinding.GraphNode Pathfinding.NavGraph/<GetNearest>c__AnonStorey22::minNode
	GraphNode_t3525007772 * ___minNode_2;
	// System.Single Pathfinding.NavGraph/<GetNearest>c__AnonStorey22::minConstDist
	float ___minConstDist_3;
	// System.Single Pathfinding.NavGraph/<GetNearest>c__AnonStorey22::maxDistSqr
	float ___maxDistSqr_4;
	// Pathfinding.NNConstraint Pathfinding.NavGraph/<GetNearest>c__AnonStorey22::constraint
	NNConstraint_t3253238025 * ___constraint_5;
	// Pathfinding.GraphNode Pathfinding.NavGraph/<GetNearest>c__AnonStorey22::minConstNode
	GraphNode_t3525007772 * ___minConstNode_6;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(U3CGetNearestU3Ec__AnonStorey22_t2442641293, ___position_0)); }
	inline Vector3_t3525329789  get_position_0() const { return ___position_0; }
	inline Vector3_t3525329789 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t3525329789  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_minDist_1() { return static_cast<int32_t>(offsetof(U3CGetNearestU3Ec__AnonStorey22_t2442641293, ___minDist_1)); }
	inline float get_minDist_1() const { return ___minDist_1; }
	inline float* get_address_of_minDist_1() { return &___minDist_1; }
	inline void set_minDist_1(float value)
	{
		___minDist_1 = value;
	}

	inline static int32_t get_offset_of_minNode_2() { return static_cast<int32_t>(offsetof(U3CGetNearestU3Ec__AnonStorey22_t2442641293, ___minNode_2)); }
	inline GraphNode_t3525007772 * get_minNode_2() const { return ___minNode_2; }
	inline GraphNode_t3525007772 ** get_address_of_minNode_2() { return &___minNode_2; }
	inline void set_minNode_2(GraphNode_t3525007772 * value)
	{
		___minNode_2 = value;
		Il2CppCodeGenWriteBarrier(&___minNode_2, value);
	}

	inline static int32_t get_offset_of_minConstDist_3() { return static_cast<int32_t>(offsetof(U3CGetNearestU3Ec__AnonStorey22_t2442641293, ___minConstDist_3)); }
	inline float get_minConstDist_3() const { return ___minConstDist_3; }
	inline float* get_address_of_minConstDist_3() { return &___minConstDist_3; }
	inline void set_minConstDist_3(float value)
	{
		___minConstDist_3 = value;
	}

	inline static int32_t get_offset_of_maxDistSqr_4() { return static_cast<int32_t>(offsetof(U3CGetNearestU3Ec__AnonStorey22_t2442641293, ___maxDistSqr_4)); }
	inline float get_maxDistSqr_4() const { return ___maxDistSqr_4; }
	inline float* get_address_of_maxDistSqr_4() { return &___maxDistSqr_4; }
	inline void set_maxDistSqr_4(float value)
	{
		___maxDistSqr_4 = value;
	}

	inline static int32_t get_offset_of_constraint_5() { return static_cast<int32_t>(offsetof(U3CGetNearestU3Ec__AnonStorey22_t2442641293, ___constraint_5)); }
	inline NNConstraint_t3253238025 * get_constraint_5() const { return ___constraint_5; }
	inline NNConstraint_t3253238025 ** get_address_of_constraint_5() { return &___constraint_5; }
	inline void set_constraint_5(NNConstraint_t3253238025 * value)
	{
		___constraint_5 = value;
		Il2CppCodeGenWriteBarrier(&___constraint_5, value);
	}

	inline static int32_t get_offset_of_minConstNode_6() { return static_cast<int32_t>(offsetof(U3CGetNearestU3Ec__AnonStorey22_t2442641293, ___minConstNode_6)); }
	inline GraphNode_t3525007772 * get_minConstNode_6() const { return ___minConstNode_6; }
	inline GraphNode_t3525007772 ** get_address_of_minConstNode_6() { return &___minConstNode_6; }
	inline void set_minConstNode_6(GraphNode_t3525007772 * value)
	{
		___minConstNode_6 = value;
		Il2CppCodeGenWriteBarrier(&___minConstNode_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
