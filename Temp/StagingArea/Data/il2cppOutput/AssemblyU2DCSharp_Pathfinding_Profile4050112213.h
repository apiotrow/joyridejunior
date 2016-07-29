#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Diagnostics.Stopwatch
struct Stopwatch_t2509581612;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Profile
struct  Profile_t4050112213  : public Il2CppObject
{
public:
	// System.String Pathfinding.Profile::name
	String_t* ___name_2;
	// System.Diagnostics.Stopwatch Pathfinding.Profile::watch
	Stopwatch_t2509581612 * ___watch_3;
	// System.Int32 Pathfinding.Profile::counter
	int32_t ___counter_4;
	// System.Int64 Pathfinding.Profile::mem
	int64_t ___mem_5;
	// System.Int64 Pathfinding.Profile::smem
	int64_t ___smem_6;
	// System.Int32 Pathfinding.Profile::control
	int32_t ___control_7;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(Profile_t4050112213, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_watch_3() { return static_cast<int32_t>(offsetof(Profile_t4050112213, ___watch_3)); }
	inline Stopwatch_t2509581612 * get_watch_3() const { return ___watch_3; }
	inline Stopwatch_t2509581612 ** get_address_of_watch_3() { return &___watch_3; }
	inline void set_watch_3(Stopwatch_t2509581612 * value)
	{
		___watch_3 = value;
		Il2CppCodeGenWriteBarrier(&___watch_3, value);
	}

	inline static int32_t get_offset_of_counter_4() { return static_cast<int32_t>(offsetof(Profile_t4050112213, ___counter_4)); }
	inline int32_t get_counter_4() const { return ___counter_4; }
	inline int32_t* get_address_of_counter_4() { return &___counter_4; }
	inline void set_counter_4(int32_t value)
	{
		___counter_4 = value;
	}

	inline static int32_t get_offset_of_mem_5() { return static_cast<int32_t>(offsetof(Profile_t4050112213, ___mem_5)); }
	inline int64_t get_mem_5() const { return ___mem_5; }
	inline int64_t* get_address_of_mem_5() { return &___mem_5; }
	inline void set_mem_5(int64_t value)
	{
		___mem_5 = value;
	}

	inline static int32_t get_offset_of_smem_6() { return static_cast<int32_t>(offsetof(Profile_t4050112213, ___smem_6)); }
	inline int64_t get_smem_6() const { return ___smem_6; }
	inline int64_t* get_address_of_smem_6() { return &___smem_6; }
	inline void set_smem_6(int64_t value)
	{
		___smem_6 = value;
	}

	inline static int32_t get_offset_of_control_7() { return static_cast<int32_t>(offsetof(Profile_t4050112213, ___control_7)); }
	inline int32_t get_control_7() const { return ___control_7; }
	inline int32_t* get_address_of_control_7() { return &___control_7; }
	inline void set_control_7(int32_t value)
	{
		___control_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
