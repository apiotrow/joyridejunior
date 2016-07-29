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

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Progress
struct  Progress_t1758450585 
{
public:
	// System.Single Pathfinding.Progress::progress
	float ___progress_0;
	// System.String Pathfinding.Progress::description
	String_t* ___description_1;

public:
	inline static int32_t get_offset_of_progress_0() { return static_cast<int32_t>(offsetof(Progress_t1758450585, ___progress_0)); }
	inline float get_progress_0() const { return ___progress_0; }
	inline float* get_address_of_progress_0() { return &___progress_0; }
	inline void set_progress_0(float value)
	{
		___progress_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(Progress_t1758450585, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier(&___description_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Pathfinding.Progress
struct Progress_t1758450585_marshaled_pinvoke
{
	float ___progress_0;
	char* ___description_1;
};
// Native definition for marshalling of: Pathfinding.Progress
struct Progress_t1758450585_marshaled_com
{
	float ___progress_0;
	uint16_t* ___description_1;
};
