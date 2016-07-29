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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.MonoModifier
struct  MonoModifier_t2694713414  : public MonoBehaviour_t3012272455
{
public:
	// Seeker Pathfinding.MonoModifier::seeker
	Seeker_t2472610117 * ___seeker_2;

public:
	inline static int32_t get_offset_of_seeker_2() { return static_cast<int32_t>(offsetof(MonoModifier_t2694713414, ___seeker_2)); }
	inline Seeker_t2472610117 * get_seeker_2() const { return ___seeker_2; }
	inline Seeker_t2472610117 ** get_address_of_seeker_2() { return &___seeker_2; }
	inline void set_seeker_2(Seeker_t2472610117 * value)
	{
		___seeker_2 = value;
		Il2CppCodeGenWriteBarrier(&___seeker_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
