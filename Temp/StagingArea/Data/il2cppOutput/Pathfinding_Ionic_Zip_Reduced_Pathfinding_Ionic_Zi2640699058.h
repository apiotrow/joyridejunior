#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi3276703762.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ExtractProgressEventArgs
struct  ExtractProgressEventArgs_t2640699058  : public ZipProgressEventArgs_t3276703762
{
public:
	// System.String Pathfinding.Ionic.Zip.ExtractProgressEventArgs::_target
	String_t* ____target_8;

public:
	inline static int32_t get_offset_of__target_8() { return static_cast<int32_t>(offsetof(ExtractProgressEventArgs_t2640699058, ____target_8)); }
	inline String_t* get__target_8() const { return ____target_8; }
	inline String_t** get_address_of__target_8() { return &____target_8; }
	inline void set__target_8(String_t* value)
	{
		____target_8 = value;
		Il2CppCodeGenWriteBarrier(&____target_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
