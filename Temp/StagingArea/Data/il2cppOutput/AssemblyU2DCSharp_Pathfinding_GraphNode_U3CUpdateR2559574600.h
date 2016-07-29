#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.PathHandler
struct PathHandler_t2800540817;
// Pathfinding.PathNode
struct PathNode_t3993763123;
// Pathfinding.Path
struct Path_t2697364881;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.GraphNode/<UpdateRecursiveG>c__AnonStorey16
struct  U3CUpdateRecursiveGU3Ec__AnonStorey16_t2559574600  : public Il2CppObject
{
public:
	// Pathfinding.PathHandler Pathfinding.GraphNode/<UpdateRecursiveG>c__AnonStorey16::handler
	PathHandler_t2800540817 * ___handler_0;
	// Pathfinding.PathNode Pathfinding.GraphNode/<UpdateRecursiveG>c__AnonStorey16::pathNode
	PathNode_t3993763123 * ___pathNode_1;
	// Pathfinding.Path Pathfinding.GraphNode/<UpdateRecursiveG>c__AnonStorey16::path
	Path_t2697364881 * ___path_2;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3CUpdateRecursiveGU3Ec__AnonStorey16_t2559574600, ___handler_0)); }
	inline PathHandler_t2800540817 * get_handler_0() const { return ___handler_0; }
	inline PathHandler_t2800540817 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(PathHandler_t2800540817 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier(&___handler_0, value);
	}

	inline static int32_t get_offset_of_pathNode_1() { return static_cast<int32_t>(offsetof(U3CUpdateRecursiveGU3Ec__AnonStorey16_t2559574600, ___pathNode_1)); }
	inline PathNode_t3993763123 * get_pathNode_1() const { return ___pathNode_1; }
	inline PathNode_t3993763123 ** get_address_of_pathNode_1() { return &___pathNode_1; }
	inline void set_pathNode_1(PathNode_t3993763123 * value)
	{
		___pathNode_1 = value;
		Il2CppCodeGenWriteBarrier(&___pathNode_1, value);
	}

	inline static int32_t get_offset_of_path_2() { return static_cast<int32_t>(offsetof(U3CUpdateRecursiveGU3Ec__AnonStorey16_t2559574600, ___path_2)); }
	inline Path_t2697364881 * get_path_2() const { return ___path_2; }
	inline Path_t2697364881 ** get_address_of_path_2() { return &___path_2; }
	inline void set_path_2(Path_t2697364881 * value)
	{
		___path_2 = value;
		Il2CppCodeGenWriteBarrier(&___path_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
