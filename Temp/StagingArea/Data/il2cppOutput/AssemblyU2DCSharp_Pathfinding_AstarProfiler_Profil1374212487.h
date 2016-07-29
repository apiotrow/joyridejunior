#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Diagnostics.Stopwatch
struct Stopwatch_t2509581612;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.AstarProfiler/ProfilePoint
struct  ProfilePoint_t1374212487  : public Il2CppObject
{
public:
	// System.Diagnostics.Stopwatch Pathfinding.AstarProfiler/ProfilePoint::watch
	Stopwatch_t2509581612 * ___watch_0;
	// System.Int32 Pathfinding.AstarProfiler/ProfilePoint::totalCalls
	int32_t ___totalCalls_1;
	// System.Int64 Pathfinding.AstarProfiler/ProfilePoint::tmpBytes
	int64_t ___tmpBytes_2;
	// System.Int64 Pathfinding.AstarProfiler/ProfilePoint::totalBytes
	int64_t ___totalBytes_3;

public:
	inline static int32_t get_offset_of_watch_0() { return static_cast<int32_t>(offsetof(ProfilePoint_t1374212487, ___watch_0)); }
	inline Stopwatch_t2509581612 * get_watch_0() const { return ___watch_0; }
	inline Stopwatch_t2509581612 ** get_address_of_watch_0() { return &___watch_0; }
	inline void set_watch_0(Stopwatch_t2509581612 * value)
	{
		___watch_0 = value;
		Il2CppCodeGenWriteBarrier(&___watch_0, value);
	}

	inline static int32_t get_offset_of_totalCalls_1() { return static_cast<int32_t>(offsetof(ProfilePoint_t1374212487, ___totalCalls_1)); }
	inline int32_t get_totalCalls_1() const { return ___totalCalls_1; }
	inline int32_t* get_address_of_totalCalls_1() { return &___totalCalls_1; }
	inline void set_totalCalls_1(int32_t value)
	{
		___totalCalls_1 = value;
	}

	inline static int32_t get_offset_of_tmpBytes_2() { return static_cast<int32_t>(offsetof(ProfilePoint_t1374212487, ___tmpBytes_2)); }
	inline int64_t get_tmpBytes_2() const { return ___tmpBytes_2; }
	inline int64_t* get_address_of_tmpBytes_2() { return &___tmpBytes_2; }
	inline void set_tmpBytes_2(int64_t value)
	{
		___tmpBytes_2 = value;
	}

	inline static int32_t get_offset_of_totalBytes_3() { return static_cast<int32_t>(offsetof(ProfilePoint_t1374212487, ___totalBytes_3)); }
	inline int64_t get_totalBytes_3() const { return ___totalBytes_3; }
	inline int64_t* get_address_of_totalBytes_3() { return &___totalBytes_3; }
	inline void set_totalBytes_3(int64_t value)
	{
		___totalBytes_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
