﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.NavGraph
struct NavGraph_t535983959;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.GraphEditorBase
struct  GraphEditorBase_t1972000504  : public Il2CppObject
{
public:
	// Pathfinding.NavGraph Pathfinding.GraphEditorBase::target
	NavGraph_t535983959 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(GraphEditorBase_t1972000504, ___target_0)); }
	inline NavGraph_t535983959 * get_target_0() const { return ___target_0; }
	inline NavGraph_t535983959 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(NavGraph_t535983959 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier(&___target_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
