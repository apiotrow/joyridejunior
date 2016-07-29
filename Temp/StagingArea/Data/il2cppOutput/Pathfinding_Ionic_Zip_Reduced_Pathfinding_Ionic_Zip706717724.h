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

// Pathfinding.Ionic.Zip.CountingStream
struct  CountingStream_t706717724  : public Stream_t219029575
{
public:
	// System.IO.Stream Pathfinding.Ionic.Zip.CountingStream::_s
	Stream_t219029575 * ____s_1;
	// System.Int64 Pathfinding.Ionic.Zip.CountingStream::_bytesWritten
	int64_t ____bytesWritten_2;
	// System.Int64 Pathfinding.Ionic.Zip.CountingStream::_bytesRead
	int64_t ____bytesRead_3;
	// System.Int64 Pathfinding.Ionic.Zip.CountingStream::_initialOffset
	int64_t ____initialOffset_4;

public:
	inline static int32_t get_offset_of__s_1() { return static_cast<int32_t>(offsetof(CountingStream_t706717724, ____s_1)); }
	inline Stream_t219029575 * get__s_1() const { return ____s_1; }
	inline Stream_t219029575 ** get_address_of__s_1() { return &____s_1; }
	inline void set__s_1(Stream_t219029575 * value)
	{
		____s_1 = value;
		Il2CppCodeGenWriteBarrier(&____s_1, value);
	}

	inline static int32_t get_offset_of__bytesWritten_2() { return static_cast<int32_t>(offsetof(CountingStream_t706717724, ____bytesWritten_2)); }
	inline int64_t get__bytesWritten_2() const { return ____bytesWritten_2; }
	inline int64_t* get_address_of__bytesWritten_2() { return &____bytesWritten_2; }
	inline void set__bytesWritten_2(int64_t value)
	{
		____bytesWritten_2 = value;
	}

	inline static int32_t get_offset_of__bytesRead_3() { return static_cast<int32_t>(offsetof(CountingStream_t706717724, ____bytesRead_3)); }
	inline int64_t get__bytesRead_3() const { return ____bytesRead_3; }
	inline int64_t* get_address_of__bytesRead_3() { return &____bytesRead_3; }
	inline void set__bytesRead_3(int64_t value)
	{
		____bytesRead_3 = value;
	}

	inline static int32_t get_offset_of__initialOffset_4() { return static_cast<int32_t>(offsetof(CountingStream_t706717724, ____initialOffset_4)); }
	inline int64_t get__initialOffset_4() const { return ____initialOffset_4; }
	inline int64_t* get_address_of__initialOffset_4() { return &____initialOffset_4; }
	inline void set__initialOffset_4(int64_t value)
	{
		____initialOffset_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
