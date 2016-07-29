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

#include "mscorlib_System_Attribute498693649.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.JsonNameAttribute
struct  JsonNameAttribute_t1832692351  : public Attribute_t498693649
{
public:
	// System.String Pathfinding.Serialization.JsonFx.JsonNameAttribute::jsonName
	String_t* ___jsonName_0;

public:
	inline static int32_t get_offset_of_jsonName_0() { return static_cast<int32_t>(offsetof(JsonNameAttribute_t1832692351, ___jsonName_0)); }
	inline String_t* get_jsonName_0() const { return ___jsonName_0; }
	inline String_t** get_address_of_jsonName_0() { return &___jsonName_0; }
	inline void set_jsonName_0(String_t* value)
	{
		___jsonName_0 = value;
		Il2CppCodeGenWriteBarrier(&___jsonName_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
