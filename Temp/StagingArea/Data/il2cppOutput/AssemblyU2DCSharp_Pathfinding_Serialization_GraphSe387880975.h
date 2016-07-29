#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.GraphNode[]
struct GraphNodeU5BU5D_t2658295925;
// System.IO.BinaryReader
struct BinaryReader_t2158806251;
// System.IO.BinaryWriter
struct BinaryWriter_t2314211483;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.GraphSerializationContext
struct  GraphSerializationContext_t387880975  : public Il2CppObject
{
public:
	// Pathfinding.GraphNode[] Pathfinding.Serialization.GraphSerializationContext::id2NodeMapping
	GraphNodeU5BU5D_t2658295925* ___id2NodeMapping_0;
	// System.IO.BinaryReader Pathfinding.Serialization.GraphSerializationContext::reader
	BinaryReader_t2158806251 * ___reader_1;
	// System.IO.BinaryWriter Pathfinding.Serialization.GraphSerializationContext::writer
	BinaryWriter_t2314211483 * ___writer_2;
	// System.UInt32 Pathfinding.Serialization.GraphSerializationContext::graphIndex
	uint32_t ___graphIndex_3;

public:
	inline static int32_t get_offset_of_id2NodeMapping_0() { return static_cast<int32_t>(offsetof(GraphSerializationContext_t387880975, ___id2NodeMapping_0)); }
	inline GraphNodeU5BU5D_t2658295925* get_id2NodeMapping_0() const { return ___id2NodeMapping_0; }
	inline GraphNodeU5BU5D_t2658295925** get_address_of_id2NodeMapping_0() { return &___id2NodeMapping_0; }
	inline void set_id2NodeMapping_0(GraphNodeU5BU5D_t2658295925* value)
	{
		___id2NodeMapping_0 = value;
		Il2CppCodeGenWriteBarrier(&___id2NodeMapping_0, value);
	}

	inline static int32_t get_offset_of_reader_1() { return static_cast<int32_t>(offsetof(GraphSerializationContext_t387880975, ___reader_1)); }
	inline BinaryReader_t2158806251 * get_reader_1() const { return ___reader_1; }
	inline BinaryReader_t2158806251 ** get_address_of_reader_1() { return &___reader_1; }
	inline void set_reader_1(BinaryReader_t2158806251 * value)
	{
		___reader_1 = value;
		Il2CppCodeGenWriteBarrier(&___reader_1, value);
	}

	inline static int32_t get_offset_of_writer_2() { return static_cast<int32_t>(offsetof(GraphSerializationContext_t387880975, ___writer_2)); }
	inline BinaryWriter_t2314211483 * get_writer_2() const { return ___writer_2; }
	inline BinaryWriter_t2314211483 ** get_address_of_writer_2() { return &___writer_2; }
	inline void set_writer_2(BinaryWriter_t2314211483 * value)
	{
		___writer_2 = value;
		Il2CppCodeGenWriteBarrier(&___writer_2, value);
	}

	inline static int32_t get_offset_of_graphIndex_3() { return static_cast<int32_t>(offsetof(GraphSerializationContext_t387880975, ___graphIndex_3)); }
	inline uint32_t get_graphIndex_3() const { return ___graphIndex_3; }
	inline uint32_t* get_address_of_graphIndex_3() { return &___graphIndex_3; }
	inline void set_graphIndex_3(uint32_t value)
	{
		___graphIndex_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
