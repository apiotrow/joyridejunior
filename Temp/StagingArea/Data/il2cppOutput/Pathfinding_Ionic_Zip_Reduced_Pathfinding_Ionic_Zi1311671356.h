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

#include "mscorlib_System_IO_Stream219029575.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.OffsetStream
struct  OffsetStream_t1311671356  : public Stream_t219029575
{
public:
	// System.Int64 Pathfinding.Ionic.Zip.OffsetStream::_originalPosition
	int64_t ____originalPosition_1;
	// System.IO.Stream Pathfinding.Ionic.Zip.OffsetStream::_innerStream
	Stream_t219029575 * ____innerStream_2;

public:
	inline static int32_t get_offset_of__originalPosition_1() { return static_cast<int32_t>(offsetof(OffsetStream_t1311671356, ____originalPosition_1)); }
	inline int64_t get__originalPosition_1() const { return ____originalPosition_1; }
	inline int64_t* get_address_of__originalPosition_1() { return &____originalPosition_1; }
	inline void set__originalPosition_1(int64_t value)
	{
		____originalPosition_1 = value;
	}

	inline static int32_t get_offset_of__innerStream_2() { return static_cast<int32_t>(offsetof(OffsetStream_t1311671356, ____innerStream_2)); }
	inline Stream_t219029575 * get__innerStream_2() const { return ____innerStream_2; }
	inline Stream_t219029575 ** get_address_of__innerStream_2() { return &____innerStream_2; }
	inline void set__innerStream_2(Stream_t219029575 * value)
	{
		____innerStream_2 = value;
		Il2CppCodeGenWriteBarrier(&____innerStream_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
