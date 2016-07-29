#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonFx396000189.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.JsonDeserializationException
struct  JsonDeserializationException_t60725118  : public JsonSerializationException_t396000189
{
public:
	// System.Int32 Pathfinding.Serialization.JsonFx.JsonDeserializationException::index
	int32_t ___index_12;

public:
	inline static int32_t get_offset_of_index_12() { return static_cast<int32_t>(offsetof(JsonDeserializationException_t60725118, ___index_12)); }
	inline int32_t get_index_12() const { return ___index_12; }
	inline int32_t* get_address_of_index_12() { return &___index_12; }
	inline void set_index_12(int32_t value)
	{
		___index_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
