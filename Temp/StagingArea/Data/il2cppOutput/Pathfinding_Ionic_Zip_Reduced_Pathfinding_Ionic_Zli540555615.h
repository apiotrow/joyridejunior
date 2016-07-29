#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t58506160;
// Pathfinding.Ionic.Zlib.ZlibCodec
struct ZlibCodec_t1793744486;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.WorkItem
struct  WorkItem_t540555615  : public Il2CppObject
{
public:
	// System.Byte[] Pathfinding.Ionic.Zlib.WorkItem::buffer
	ByteU5BU5D_t58506160* ___buffer_0;
	// System.Byte[] Pathfinding.Ionic.Zlib.WorkItem::compressed
	ByteU5BU5D_t58506160* ___compressed_1;
	// System.Int32 Pathfinding.Ionic.Zlib.WorkItem::crc
	int32_t ___crc_2;
	// System.Int32 Pathfinding.Ionic.Zlib.WorkItem::index
	int32_t ___index_3;
	// System.Int32 Pathfinding.Ionic.Zlib.WorkItem::ordinal
	int32_t ___ordinal_4;
	// System.Int32 Pathfinding.Ionic.Zlib.WorkItem::inputBytesAvailable
	int32_t ___inputBytesAvailable_5;
	// System.Int32 Pathfinding.Ionic.Zlib.WorkItem::compressedBytesAvailable
	int32_t ___compressedBytesAvailable_6;
	// Pathfinding.Ionic.Zlib.ZlibCodec Pathfinding.Ionic.Zlib.WorkItem::compressor
	ZlibCodec_t1793744486 * ___compressor_7;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(WorkItem_t540555615, ___buffer_0)); }
	inline ByteU5BU5D_t58506160* get_buffer_0() const { return ___buffer_0; }
	inline ByteU5BU5D_t58506160** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ByteU5BU5D_t58506160* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_0, value);
	}

	inline static int32_t get_offset_of_compressed_1() { return static_cast<int32_t>(offsetof(WorkItem_t540555615, ___compressed_1)); }
	inline ByteU5BU5D_t58506160* get_compressed_1() const { return ___compressed_1; }
	inline ByteU5BU5D_t58506160** get_address_of_compressed_1() { return &___compressed_1; }
	inline void set_compressed_1(ByteU5BU5D_t58506160* value)
	{
		___compressed_1 = value;
		Il2CppCodeGenWriteBarrier(&___compressed_1, value);
	}

	inline static int32_t get_offset_of_crc_2() { return static_cast<int32_t>(offsetof(WorkItem_t540555615, ___crc_2)); }
	inline int32_t get_crc_2() const { return ___crc_2; }
	inline int32_t* get_address_of_crc_2() { return &___crc_2; }
	inline void set_crc_2(int32_t value)
	{
		___crc_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(WorkItem_t540555615, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_ordinal_4() { return static_cast<int32_t>(offsetof(WorkItem_t540555615, ___ordinal_4)); }
	inline int32_t get_ordinal_4() const { return ___ordinal_4; }
	inline int32_t* get_address_of_ordinal_4() { return &___ordinal_4; }
	inline void set_ordinal_4(int32_t value)
	{
		___ordinal_4 = value;
	}

	inline static int32_t get_offset_of_inputBytesAvailable_5() { return static_cast<int32_t>(offsetof(WorkItem_t540555615, ___inputBytesAvailable_5)); }
	inline int32_t get_inputBytesAvailable_5() const { return ___inputBytesAvailable_5; }
	inline int32_t* get_address_of_inputBytesAvailable_5() { return &___inputBytesAvailable_5; }
	inline void set_inputBytesAvailable_5(int32_t value)
	{
		___inputBytesAvailable_5 = value;
	}

	inline static int32_t get_offset_of_compressedBytesAvailable_6() { return static_cast<int32_t>(offsetof(WorkItem_t540555615, ___compressedBytesAvailable_6)); }
	inline int32_t get_compressedBytesAvailable_6() const { return ___compressedBytesAvailable_6; }
	inline int32_t* get_address_of_compressedBytesAvailable_6() { return &___compressedBytesAvailable_6; }
	inline void set_compressedBytesAvailable_6(int32_t value)
	{
		___compressedBytesAvailable_6 = value;
	}

	inline static int32_t get_offset_of_compressor_7() { return static_cast<int32_t>(offsetof(WorkItem_t540555615, ___compressor_7)); }
	inline ZlibCodec_t1793744486 * get_compressor_7() const { return ___compressor_7; }
	inline ZlibCodec_t1793744486 ** get_address_of_compressor_7() { return &___compressor_7; }
	inline void set_compressor_7(ZlibCodec_t1793744486 * value)
	{
		___compressor_7 = value;
		Il2CppCodeGenWriteBarrier(&___compressor_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
