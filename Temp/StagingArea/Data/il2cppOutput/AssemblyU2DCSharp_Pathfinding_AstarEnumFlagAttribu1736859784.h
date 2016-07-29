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

#include "UnityEngine_UnityEngine_PropertyAttribute3076083828.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.AstarEnumFlagAttribute
struct  AstarEnumFlagAttribute_t1736859784  : public PropertyAttribute_t3076083828
{
public:
	// System.String Pathfinding.AstarEnumFlagAttribute::enumName
	String_t* ___enumName_0;

public:
	inline static int32_t get_offset_of_enumName_0() { return static_cast<int32_t>(offsetof(AstarEnumFlagAttribute_t1736859784, ___enumName_0)); }
	inline String_t* get_enumName_0() const { return ___enumName_0; }
	inline String_t** get_address_of_enumName_0() { return &___enumName_0; }
	inline void set_enumName_0(String_t* value)
	{
		___enumName_0 = value;
		Il2CppCodeGenWriteBarrier(&___enumName_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
