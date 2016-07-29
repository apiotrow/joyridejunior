#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AstarDebugger/GraphPoint
struct  GraphPoint_t4260831490 
{
public:
	// System.Single AstarDebugger/GraphPoint::fps
	float ___fps_0;
	// System.Single AstarDebugger/GraphPoint::memory
	float ___memory_1;
	// System.Boolean AstarDebugger/GraphPoint::collectEvent
	bool ___collectEvent_2;

public:
	inline static int32_t get_offset_of_fps_0() { return static_cast<int32_t>(offsetof(GraphPoint_t4260831490, ___fps_0)); }
	inline float get_fps_0() const { return ___fps_0; }
	inline float* get_address_of_fps_0() { return &___fps_0; }
	inline void set_fps_0(float value)
	{
		___fps_0 = value;
	}

	inline static int32_t get_offset_of_memory_1() { return static_cast<int32_t>(offsetof(GraphPoint_t4260831490, ___memory_1)); }
	inline float get_memory_1() const { return ___memory_1; }
	inline float* get_address_of_memory_1() { return &___memory_1; }
	inline void set_memory_1(float value)
	{
		___memory_1 = value;
	}

	inline static int32_t get_offset_of_collectEvent_2() { return static_cast<int32_t>(offsetof(GraphPoint_t4260831490, ___collectEvent_2)); }
	inline bool get_collectEvent_2() const { return ___collectEvent_2; }
	inline bool* get_address_of_collectEvent_2() { return &___collectEvent_2; }
	inline void set_collectEvent_2(bool value)
	{
		___collectEvent_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: AstarDebugger/GraphPoint
struct GraphPoint_t4260831490_marshaled_pinvoke
{
	float ___fps_0;
	float ___memory_1;
	int32_t ___collectEvent_2;
};
// Native definition for marshalling of: AstarDebugger/GraphPoint
struct GraphPoint_t4260831490_marshaled_com
{
	float ___fps_0;
	float ___memory_1;
	int32_t ___collectEvent_2;
};
