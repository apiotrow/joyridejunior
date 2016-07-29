#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.Ionic.Zlib.ZlibBaseStream
struct ZlibBaseStream_t2399924087;
// System.IO.Stream
struct Stream_t219029575;

#include "mscorlib_System_IO_Stream219029575.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.DeflateStream
struct  DeflateStream_t2471754470  : public Stream_t219029575
{
public:
	// Pathfinding.Ionic.Zlib.ZlibBaseStream Pathfinding.Ionic.Zlib.DeflateStream::_baseStream
	ZlibBaseStream_t2399924087 * ____baseStream_1;
	// System.IO.Stream Pathfinding.Ionic.Zlib.DeflateStream::_innerStream
	Stream_t219029575 * ____innerStream_2;
	// System.Boolean Pathfinding.Ionic.Zlib.DeflateStream::_disposed
	bool ____disposed_3;

public:
	inline static int32_t get_offset_of__baseStream_1() { return static_cast<int32_t>(offsetof(DeflateStream_t2471754470, ____baseStream_1)); }
	inline ZlibBaseStream_t2399924087 * get__baseStream_1() const { return ____baseStream_1; }
	inline ZlibBaseStream_t2399924087 ** get_address_of__baseStream_1() { return &____baseStream_1; }
	inline void set__baseStream_1(ZlibBaseStream_t2399924087 * value)
	{
		____baseStream_1 = value;
		Il2CppCodeGenWriteBarrier(&____baseStream_1, value);
	}

	inline static int32_t get_offset_of__innerStream_2() { return static_cast<int32_t>(offsetof(DeflateStream_t2471754470, ____innerStream_2)); }
	inline Stream_t219029575 * get__innerStream_2() const { return ____innerStream_2; }
	inline Stream_t219029575 ** get_address_of__innerStream_2() { return &____innerStream_2; }
	inline void set__innerStream_2(Stream_t219029575 * value)
	{
		____innerStream_2 = value;
		Il2CppCodeGenWriteBarrier(&____innerStream_2, value);
	}

	inline static int32_t get_offset_of__disposed_3() { return static_cast<int32_t>(offsetof(DeflateStream_t2471754470, ____disposed_3)); }
	inline bool get__disposed_3() const { return ____disposed_3; }
	inline bool* get_address_of__disposed_3() { return &____disposed_3; }
	inline void set__disposed_3(bool value)
	{
		____disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
