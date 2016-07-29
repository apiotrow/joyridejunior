#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AstarPath
struct AstarPath_t4090270936;
// Pathfinding.PathHandler
struct PathHandler_t2800540817;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.PathThreadInfo
struct  PathThreadInfo_t3207094601 
{
public:
	// System.Int32 Pathfinding.PathThreadInfo::threadIndex
	int32_t ___threadIndex_0;
	// AstarPath Pathfinding.PathThreadInfo::astar
	AstarPath_t4090270936 * ___astar_1;
	// Pathfinding.PathHandler Pathfinding.PathThreadInfo::runData
	PathHandler_t2800540817 * ___runData_2;
	// System.Object Pathfinding.PathThreadInfo::lockObject
	Il2CppObject * ___lockObject_3;

public:
	inline static int32_t get_offset_of_threadIndex_0() { return static_cast<int32_t>(offsetof(PathThreadInfo_t3207094601, ___threadIndex_0)); }
	inline int32_t get_threadIndex_0() const { return ___threadIndex_0; }
	inline int32_t* get_address_of_threadIndex_0() { return &___threadIndex_0; }
	inline void set_threadIndex_0(int32_t value)
	{
		___threadIndex_0 = value;
	}

	inline static int32_t get_offset_of_astar_1() { return static_cast<int32_t>(offsetof(PathThreadInfo_t3207094601, ___astar_1)); }
	inline AstarPath_t4090270936 * get_astar_1() const { return ___astar_1; }
	inline AstarPath_t4090270936 ** get_address_of_astar_1() { return &___astar_1; }
	inline void set_astar_1(AstarPath_t4090270936 * value)
	{
		___astar_1 = value;
		Il2CppCodeGenWriteBarrier(&___astar_1, value);
	}

	inline static int32_t get_offset_of_runData_2() { return static_cast<int32_t>(offsetof(PathThreadInfo_t3207094601, ___runData_2)); }
	inline PathHandler_t2800540817 * get_runData_2() const { return ___runData_2; }
	inline PathHandler_t2800540817 ** get_address_of_runData_2() { return &___runData_2; }
	inline void set_runData_2(PathHandler_t2800540817 * value)
	{
		___runData_2 = value;
		Il2CppCodeGenWriteBarrier(&___runData_2, value);
	}

	inline static int32_t get_offset_of_lockObject_3() { return static_cast<int32_t>(offsetof(PathThreadInfo_t3207094601, ___lockObject_3)); }
	inline Il2CppObject * get_lockObject_3() const { return ___lockObject_3; }
	inline Il2CppObject ** get_address_of_lockObject_3() { return &___lockObject_3; }
	inline void set_lockObject_3(Il2CppObject * value)
	{
		___lockObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___lockObject_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
