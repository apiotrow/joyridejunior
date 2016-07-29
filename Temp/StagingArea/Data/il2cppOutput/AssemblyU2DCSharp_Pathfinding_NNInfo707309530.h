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

// Pathfinding.NNInfo
struct  NNInfo_t707309530 
{
public:
	// Pathfinding.GraphNode Pathfinding.NNInfo::node
	GraphNode_t3525007772 * ___node_0;
	// Pathfinding.GraphNode Pathfinding.NNInfo::constrainedNode
	GraphNode_t3525007772 * ___constrainedNode_1;
	// UnityEngine.Vector3 Pathfinding.NNInfo::clampedPosition
	Vector3_t3525329789  ___clampedPosition_2;
	// UnityEngine.Vector3 Pathfinding.NNInfo::constClampedPosition
	Vector3_t3525329789  ___constClampedPosition_3;

public:
	inline static int32_t get_offset_of_node_0() { return static_cast<int32_t>(offsetof(NNInfo_t707309530, ___node_0)); }
	inline GraphNode_t3525007772 * get_node_0() const { return ___node_0; }
	inline GraphNode_t3525007772 ** get_address_of_node_0() { return &___node_0; }
	inline void set_node_0(GraphNode_t3525007772 * value)
	{
		___node_0 = value;
		Il2CppCodeGenWriteBarrier(&___node_0, value);
	}

	inline static int32_t get_offset_of_constrainedNode_1() { return static_cast<int32_t>(offsetof(NNInfo_t707309530, ___constrainedNode_1)); }
	inline GraphNode_t3525007772 * get_constrainedNode_1() const { return ___constrainedNode_1; }
	inline GraphNode_t3525007772 ** get_address_of_constrainedNode_1() { return &___constrainedNode_1; }
	inline void set_constrainedNode_1(GraphNode_t3525007772 * value)
	{
		___constrainedNode_1 = value;
		Il2CppCodeGenWriteBarrier(&___constrainedNode_1, value);
	}

	inline static int32_t get_offset_of_clampedPosition_2() { return static_cast<int32_t>(offsetof(NNInfo_t707309530, ___clampedPosition_2)); }
	inline Vector3_t3525329789  get_clampedPosition_2() const { return ___clampedPosition_2; }
	inline Vector3_t3525329789 * get_address_of_clampedPosition_2() { return &___clampedPosition_2; }
	inline void set_clampedPosition_2(Vector3_t3525329789  value)
	{
		___clampedPosition_2 = value;
	}

	inline static int32_t get_offset_of_constClampedPosition_3() { return static_cast<int32_t>(offsetof(NNInfo_t707309530, ___constClampedPosition_3)); }
	inline Vector3_t3525329789  get_constClampedPosition_3() const { return ___constClampedPosition_3; }
	inline Vector3_t3525329789 * get_address_of_constClampedPosition_3() { return &___constClampedPosition_3; }
	inline void set_constClampedPosition_3(Vector3_t3525329789  value)
	{
		___constClampedPosition_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
