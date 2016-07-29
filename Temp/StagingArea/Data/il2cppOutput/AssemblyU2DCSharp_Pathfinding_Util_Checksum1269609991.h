#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.UInt32[]
struct UInt32U5BU5D_t2133601851;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Util.Checksum
struct  Checksum_t1269609991  : public Il2CppObject
{
public:

public:
};

struct Checksum_t1269609991_StaticFields
{
public:
	// System.UInt32[] Pathfinding.Util.Checksum::CRCTable
	UInt32U5BU5D_t2133601851* ___CRCTable_0;

public:
	inline static int32_t get_offset_of_CRCTable_0() { return static_cast<int32_t>(offsetof(Checksum_t1269609991_StaticFields, ___CRCTable_0)); }
	inline UInt32U5BU5D_t2133601851* get_CRCTable_0() const { return ___CRCTable_0; }
	inline UInt32U5BU5D_t2133601851** get_address_of_CRCTable_0() { return &___CRCTable_0; }
	inline void set_CRCTable_0(UInt32U5BU5D_t2133601851* value)
	{
		___CRCTable_0 = value;
		Il2CppCodeGenWriteBarrier(&___CRCTable_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
