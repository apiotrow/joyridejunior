#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.TagMask
struct  TagMask_t2810323666  : public Il2CppObject
{
public:
	// System.Int32 Pathfinding.TagMask::tagsChange
	int32_t ___tagsChange_0;
	// System.Int32 Pathfinding.TagMask::tagsSet
	int32_t ___tagsSet_1;

public:
	inline static int32_t get_offset_of_tagsChange_0() { return static_cast<int32_t>(offsetof(TagMask_t2810323666, ___tagsChange_0)); }
	inline int32_t get_tagsChange_0() const { return ___tagsChange_0; }
	inline int32_t* get_address_of_tagsChange_0() { return &___tagsChange_0; }
	inline void set_tagsChange_0(int32_t value)
	{
		___tagsChange_0 = value;
	}

	inline static int32_t get_offset_of_tagsSet_1() { return static_cast<int32_t>(offsetof(TagMask_t2810323666, ___tagsSet_1)); }
	inline int32_t get_tagsSet_1() const { return ___tagsSet_1; }
	inline int32_t* get_address_of_tagsSet_1() { return &___tagsSet_1; }
	inline void set_tagsSet_1(int32_t value)
	{
		___tagsSet_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
