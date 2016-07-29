#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t1219431280;

#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF1062986702.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.MatrixConverter
struct  MatrixConverter_t2330875105  : public JsonConverter_t1062986702
{
public:
	// System.Single[] Pathfinding.Serialization.MatrixConverter::values
	SingleU5BU5D_t1219431280* ___values_0;

public:
	inline static int32_t get_offset_of_values_0() { return static_cast<int32_t>(offsetof(MatrixConverter_t2330875105, ___values_0)); }
	inline SingleU5BU5D_t1219431280* get_values_0() const { return ___values_0; }
	inline SingleU5BU5D_t1219431280** get_address_of_values_0() { return &___values_0; }
	inline void set_values_0(SingleU5BU5D_t1219431280* value)
	{
		___values_0 = value;
		Il2CppCodeGenWriteBarrier(&___values_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
