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
#include "AssemblyU2DCSharp_Pathfinding_Int32697168784.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.NavMeshGraph/<GetNearestForceBoth>c__AnonStorey24
struct  U3CGetNearestForceBothU3Ec__AnonStorey24_t3268214259  : public Il2CppObject
{
public:
	// System.Boolean Pathfinding.NavMeshGraph/<GetNearestForceBoth>c__AnonStorey24::accurateNearestNode
	bool ___accurateNearestNode_0;
	// UnityEngine.Vector3 Pathfinding.NavMeshGraph/<GetNearestForceBoth>c__AnonStorey24::position
	Vector3_t3525329789  ___position_1;
	// Pathfinding.Int3 Pathfinding.NavMeshGraph/<GetNearestForceBoth>c__AnonStorey24::pos
	Int3_t2697168784  ___pos_2;
	// Pathfinding.GraphNode Pathfinding.NavMeshGraph/<GetNearestForceBoth>c__AnonStorey24::minNode
	GraphNode_t3525007772 * ___minNode_3;
	// System.Single Pathfinding.NavMeshGraph/<GetNearestForceBoth>c__AnonStorey24::minDist
	float ___minDist_4;
	// System.Single Pathfinding.NavMeshGraph/<GetNearestForceBoth>c__AnonStorey24::maxDistSqr
	float ___maxDistSqr_5;
	// Pathfinding.NNConstraint Pathfinding.NavMeshGraph/<GetNearestForceBoth>c__AnonStorey24::constraint
	NNConstraint_t3253238025 * ___constraint_6;
	// Pathfinding.GraphNode Pathfinding.NavMeshGraph/<GetNearestForceBoth>c__AnonStorey24::minConstNode
	GraphNode_t3525007772 * ___minConstNode_7;
	// System.Single Pathfinding.NavMeshGraph/<GetNearestForceBoth>c__AnonStorey24::minConstDist
	float ___minConstDist_8;

public:
	inline static int32_t get_offset_of_accurateNearestNode_0() { return static_cast<int32_t>(offsetof(U3CGetNearestForceBothU3Ec__AnonStorey24_t3268214259, ___accurateNearestNode_0)); }
	inline bool get_accurateNearestNode_0() const { return ___accurateNearestNode_0; }
	inline bool* get_address_of_accurateNearestNode_0() { return &___accurateNearestNode_0; }
	inline void set_accurateNearestNode_0(bool value)
	{
		___accurateNearestNode_0 = value;
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(U3CGetNearestForceBothU3Ec__AnonStorey24_t3268214259, ___position_1)); }
	inline Vector3_t3525329789  get_position_1() const { return ___position_1; }
	inline Vector3_t3525329789 * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t3525329789  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(U3CGetNearestForceBothU3Ec__AnonStorey24_t3268214259, ___pos_2)); }
	inline Int3_t2697168784  get_pos_2() const { return ___pos_2; }
	inline Int3_t2697168784 * get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(Int3_t2697168784  value)
	{
		___pos_2 = value;
	}

	inline static int32_t get_offset_of_minNode_3() { return static_cast<int32_t>(offsetof(U3CGetNearestForceBothU3Ec__AnonStorey24_t3268214259, ___minNode_3)); }
	inline GraphNode_t3525007772 * get_minNode_3() const { return ___minNode_3; }
	inline GraphNode_t3525007772 ** get_address_of_minNode_3() { return &___minNode_3; }
	inline void set_minNode_3(GraphNode_t3525007772 * value)
	{
		___minNode_3 = value;
		Il2CppCodeGenWriteBarrier(&___minNode_3, value);
	}

	inline static int32_t get_offset_of_minDist_4() { return static_cast<int32_t>(offsetof(U3CGetNearestForceBothU3Ec__AnonStorey24_t3268214259, ___minDist_4)); }
	inline float get_minDist_4() const { return ___minDist_4; }
	inline float* get_address_of_minDist_4() { return &___minDist_4; }
	inline void set_minDist_4(float value)
	{
		___minDist_4 = value;
	}

	inline static int32_t get_offset_of_maxDistSqr_5() { return static_cast<int32_t>(offsetof(U3CGetNearestForceBothU3Ec__AnonStorey24_t3268214259, ___maxDistSqr_5)); }
	inline float get_maxDistSqr_5() const { return ___maxDistSqr_5; }
	inline float* get_address_of_maxDistSqr_5() { return &___maxDistSqr_5; }
	inline void set_maxDistSqr_5(float value)
	{
		___maxDistSqr_5 = value;
	}

	inline static int32_t get_offset_of_constraint_6() { return static_cast<int32_t>(offsetof(U3CGetNearestForceBothU3Ec__AnonStorey24_t3268214259, ___constraint_6)); }
	inline NNConstraint_t3253238025 * get_constraint_6() const { return ___constraint_6; }
	inline NNConstraint_t3253238025 ** get_address_of_constraint_6() { return &___constraint_6; }
	inline void set_constraint_6(NNConstraint_t3253238025 * value)
	{
		___constraint_6 = value;
		Il2CppCodeGenWriteBarrier(&___constraint_6, value);
	}

	inline static int32_t get_offset_of_minConstNode_7() { return static_cast<int32_t>(offsetof(U3CGetNearestForceBothU3Ec__AnonStorey24_t3268214259, ___minConstNode_7)); }
	inline GraphNode_t3525007772 * get_minConstNode_7() const { return ___minConstNode_7; }
	inline GraphNode_t3525007772 ** get_address_of_minConstNode_7() { return &___minConstNode_7; }
	inline void set_minConstNode_7(GraphNode_t3525007772 * value)
	{
		___minConstNode_7 = value;
		Il2CppCodeGenWriteBarrier(&___minConstNode_7, value);
	}

	inline static int32_t get_offset_of_minConstDist_8() { return static_cast<int32_t>(offsetof(U3CGetNearestForceBothU3Ec__AnonStorey24_t3268214259, ___minConstDist_8)); }
	inline float get_minConstDist_8() const { return ___minConstDist_8; }
	inline float* get_address_of_minConstDist_8() { return &___minConstDist_8; }
	inline void set_minConstDist_8(float value)
	{
		___minConstDist_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
