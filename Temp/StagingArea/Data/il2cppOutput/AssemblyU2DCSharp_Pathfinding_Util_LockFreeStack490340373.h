#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.Path
struct Path_t2697364881;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Util.LockFreeStack
struct  LockFreeStack_t490340373  : public Il2CppObject
{
public:
	// Pathfinding.Path Pathfinding.Util.LockFreeStack::head
	Path_t2697364881 * ___head_0;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(LockFreeStack_t490340373, ___head_0)); }
	inline Path_t2697364881 * get_head_0() const { return ___head_0; }
	inline Path_t2697364881 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(Path_t2697364881 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier(&___head_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
