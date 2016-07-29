#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Seeker
struct Seeker_t2472610117;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.PathModifier
struct  PathModifier_t1057675144  : public Il2CppObject
{
public:
	// Seeker Pathfinding.PathModifier::seeker
	Seeker_t2472610117 * ___seeker_0;

public:
	inline static int32_t get_offset_of_seeker_0() { return static_cast<int32_t>(offsetof(PathModifier_t1057675144, ___seeker_0)); }
	inline Seeker_t2472610117 * get_seeker_0() const { return ___seeker_0; }
	inline Seeker_t2472610117 ** get_address_of_seeker_0() { return &___seeker_0; }
	inline void set_seeker_0(Seeker_t2472610117 * value)
	{
		___seeker_0 = value;
		Il2CppCodeGenWriteBarrier(&___seeker_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
