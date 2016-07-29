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

#include "mscorlib_System_ValueType4014882752.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.GraphHitInfo
struct  GraphHitInfo_t1282330399 
{
public:
	// UnityEngine.Vector3 Pathfinding.GraphHitInfo::origin
	Vector3_t3525329789  ___origin_0;
	// UnityEngine.Vector3 Pathfinding.GraphHitInfo::point
	Vector3_t3525329789  ___point_1;
	// Pathfinding.GraphNode Pathfinding.GraphHitInfo::node
	GraphNode_t3525007772 * ___node_2;
	// UnityEngine.Vector3 Pathfinding.GraphHitInfo::tangentOrigin
	Vector3_t3525329789  ___tangentOrigin_3;
	// UnityEngine.Vector3 Pathfinding.GraphHitInfo::tangent
	Vector3_t3525329789  ___tangent_4;

public:
	inline static int32_t get_offset_of_origin_0() { return static_cast<int32_t>(offsetof(GraphHitInfo_t1282330399, ___origin_0)); }
	inline Vector3_t3525329789  get_origin_0() const { return ___origin_0; }
	inline Vector3_t3525329789 * get_address_of_origin_0() { return &___origin_0; }
	inline void set_origin_0(Vector3_t3525329789  value)
	{
		___origin_0 = value;
	}

	inline static int32_t get_offset_of_point_1() { return static_cast<int32_t>(offsetof(GraphHitInfo_t1282330399, ___point_1)); }
	inline Vector3_t3525329789  get_point_1() const { return ___point_1; }
	inline Vector3_t3525329789 * get_address_of_point_1() { return &___point_1; }
	inline void set_point_1(Vector3_t3525329789  value)
	{
		___point_1 = value;
	}

	inline static int32_t get_offset_of_node_2() { return static_cast<int32_t>(offsetof(GraphHitInfo_t1282330399, ___node_2)); }
	inline GraphNode_t3525007772 * get_node_2() const { return ___node_2; }
	inline GraphNode_t3525007772 ** get_address_of_node_2() { return &___node_2; }
	inline void set_node_2(GraphNode_t3525007772 * value)
	{
		___node_2 = value;
		Il2CppCodeGenWriteBarrier(&___node_2, value);
	}

	inline static int32_t get_offset_of_tangentOrigin_3() { return static_cast<int32_t>(offsetof(GraphHitInfo_t1282330399, ___tangentOrigin_3)); }
	inline Vector3_t3525329789  get_tangentOrigin_3() const { return ___tangentOrigin_3; }
	inline Vector3_t3525329789 * get_address_of_tangentOrigin_3() { return &___tangentOrigin_3; }
	inline void set_tangentOrigin_3(Vector3_t3525329789  value)
	{
		___tangentOrigin_3 = value;
	}

	inline static int32_t get_offset_of_tangent_4() { return static_cast<int32_t>(offsetof(GraphHitInfo_t1282330399, ___tangent_4)); }
	inline Vector3_t3525329789  get_tangent_4() const { return ___tangent_4; }
	inline Vector3_t3525329789 * get_address_of_tangent_4() { return &___tangent_4; }
	inline void set_tangent_4(Vector3_t3525329789  value)
	{
		___tangent_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
