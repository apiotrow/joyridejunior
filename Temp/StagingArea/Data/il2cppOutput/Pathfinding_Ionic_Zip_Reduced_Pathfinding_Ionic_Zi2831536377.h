#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Exception
struct Exception_t1967233988;

#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi3276703762.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ZipErrorEventArgs
struct  ZipErrorEventArgs_t2831536377  : public ZipProgressEventArgs_t3276703762
{
public:
	// System.Exception Pathfinding.Ionic.Zip.ZipErrorEventArgs::_exc
	Exception_t1967233988 * ____exc_8;

public:
	inline static int32_t get_offset_of__exc_8() { return static_cast<int32_t>(offsetof(ZipErrorEventArgs_t2831536377, ____exc_8)); }
	inline Exception_t1967233988 * get__exc_8() const { return ____exc_8; }
	inline Exception_t1967233988 ** get_address_of__exc_8() { return &____exc_8; }
	inline void set__exc_8(Exception_t1967233988 * value)
	{
		____exc_8 = value;
		Il2CppCodeGenWriteBarrier(&____exc_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
