#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t219029575;
// Pathfinding.Ionic.Crc.CRC32
struct CRC32_t926500445;

#include "mscorlib_System_IO_Stream219029575.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Crc.CrcCalculatorStream
struct  CrcCalculatorStream_t2652117568  : public Stream_t219029575
{
public:
	// System.IO.Stream Pathfinding.Ionic.Crc.CrcCalculatorStream::_innerStream
	Stream_t219029575 * ____innerStream_2;
	// Pathfinding.Ionic.Crc.CRC32 Pathfinding.Ionic.Crc.CrcCalculatorStream::_Crc32
	CRC32_t926500445 * ____Crc32_3;
	// System.Int64 Pathfinding.Ionic.Crc.CrcCalculatorStream::_lengthLimit
	int64_t ____lengthLimit_4;
	// System.Boolean Pathfinding.Ionic.Crc.CrcCalculatorStream::_leaveOpen
	bool ____leaveOpen_5;

public:
	inline static int32_t get_offset_of__innerStream_2() { return static_cast<int32_t>(offsetof(CrcCalculatorStream_t2652117568, ____innerStream_2)); }
	inline Stream_t219029575 * get__innerStream_2() const { return ____innerStream_2; }
	inline Stream_t219029575 ** get_address_of__innerStream_2() { return &____innerStream_2; }
	inline void set__innerStream_2(Stream_t219029575 * value)
	{
		____innerStream_2 = value;
		Il2CppCodeGenWriteBarrier(&____innerStream_2, value);
	}

	inline static int32_t get_offset_of__Crc32_3() { return static_cast<int32_t>(offsetof(CrcCalculatorStream_t2652117568, ____Crc32_3)); }
	inline CRC32_t926500445 * get__Crc32_3() const { return ____Crc32_3; }
	inline CRC32_t926500445 ** get_address_of__Crc32_3() { return &____Crc32_3; }
	inline void set__Crc32_3(CRC32_t926500445 * value)
	{
		____Crc32_3 = value;
		Il2CppCodeGenWriteBarrier(&____Crc32_3, value);
	}

	inline static int32_t get_offset_of__lengthLimit_4() { return static_cast<int32_t>(offsetof(CrcCalculatorStream_t2652117568, ____lengthLimit_4)); }
	inline int64_t get__lengthLimit_4() const { return ____lengthLimit_4; }
	inline int64_t* get_address_of__lengthLimit_4() { return &____lengthLimit_4; }
	inline void set__lengthLimit_4(int64_t value)
	{
		____lengthLimit_4 = value;
	}

	inline static int32_t get_offset_of__leaveOpen_5() { return static_cast<int32_t>(offsetof(CrcCalculatorStream_t2652117568, ____leaveOpen_5)); }
	inline bool get__leaveOpen_5() const { return ____leaveOpen_5; }
	inline bool* get_address_of__leaveOpen_5() { return &____leaveOpen_5; }
	inline void set__leaveOpen_5(bool value)
	{
		____leaveOpen_5 = value;
	}
};

struct CrcCalculatorStream_t2652117568_StaticFields
{
public:
	// System.Int64 Pathfinding.Ionic.Crc.CrcCalculatorStream::UnsetLengthLimit
	int64_t ___UnsetLengthLimit_1;

public:
	inline static int32_t get_offset_of_UnsetLengthLimit_1() { return static_cast<int32_t>(offsetof(CrcCalculatorStream_t2652117568_StaticFields, ___UnsetLengthLimit_1)); }
	inline int64_t get_UnsetLengthLimit_1() const { return ___UnsetLengthLimit_1; }
	inline int64_t* get_address_of_UnsetLengthLimit_1() { return &___UnsetLengthLimit_1; }
	inline void set_UnsetLengthLimit_1(int64_t value)
	{
		___UnsetLengthLimit_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
