#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.Serialization.GraphSerializationContext
struct GraphSerializationContext_t387880975;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.AstarSerializer/<DeserializeNodeReferences>c__AnonStorey1E
struct  U3CDeserializeNodeReferencesU3Ec__AnonStorey1E_t3179033258  : public Il2CppObject
{
public:
	// Pathfinding.Serialization.GraphSerializationContext Pathfinding.Serialization.AstarSerializer/<DeserializeNodeReferences>c__AnonStorey1E::ctx
	GraphSerializationContext_t387880975 * ___ctx_0;

public:
	inline static int32_t get_offset_of_ctx_0() { return static_cast<int32_t>(offsetof(U3CDeserializeNodeReferencesU3Ec__AnonStorey1E_t3179033258, ___ctx_0)); }
	inline GraphSerializationContext_t387880975 * get_ctx_0() const { return ___ctx_0; }
	inline GraphSerializationContext_t387880975 ** get_address_of_ctx_0() { return &___ctx_0; }
	inline void set_ctx_0(GraphSerializationContext_t387880975 * value)
	{
		___ctx_0 = value;
		Il2CppCodeGenWriteBarrier(&___ctx_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
