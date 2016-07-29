#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.BinaryReader
struct BinaryReader_t2158806251;
// Pathfinding.GraphNode[]
struct GraphNodeU5BU5D_t2658295925;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.AstarSerializer/<DeserializeNodeReferenceMap>c__AnonStorey1D
struct  U3CDeserializeNodeReferenceMapU3Ec__AnonStorey1D_t2363885298  : public Il2CppObject
{
public:
	// System.IO.BinaryReader Pathfinding.Serialization.AstarSerializer/<DeserializeNodeReferenceMap>c__AnonStorey1D::reader
	BinaryReader_t2158806251 * ___reader_0;
	// Pathfinding.GraphNode[] Pathfinding.Serialization.AstarSerializer/<DeserializeNodeReferenceMap>c__AnonStorey1D::int2Node
	GraphNodeU5BU5D_t2658295925* ___int2Node_1;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(U3CDeserializeNodeReferenceMapU3Ec__AnonStorey1D_t2363885298, ___reader_0)); }
	inline BinaryReader_t2158806251 * get_reader_0() const { return ___reader_0; }
	inline BinaryReader_t2158806251 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(BinaryReader_t2158806251 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier(&___reader_0, value);
	}

	inline static int32_t get_offset_of_int2Node_1() { return static_cast<int32_t>(offsetof(U3CDeserializeNodeReferenceMapU3Ec__AnonStorey1D_t2363885298, ___int2Node_1)); }
	inline GraphNodeU5BU5D_t2658295925* get_int2Node_1() const { return ___int2Node_1; }
	inline GraphNodeU5BU5D_t2658295925** get_address_of_int2Node_1() { return &___int2Node_1; }
	inline void set_int2Node_1(GraphNodeU5BU5D_t2658295925* value)
	{
		___int2Node_1 = value;
		Il2CppCodeGenWriteBarrier(&___int2Node_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
