#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi3276703762.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.SaveProgressEventArgs
struct  SaveProgressEventArgs_t766852342  : public ZipProgressEventArgs_t3276703762
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.SaveProgressEventArgs::_entriesSaved
	int32_t ____entriesSaved_8;

public:
	inline static int32_t get_offset_of__entriesSaved_8() { return static_cast<int32_t>(offsetof(SaveProgressEventArgs_t766852342, ____entriesSaved_8)); }
	inline int32_t get__entriesSaved_8() const { return ____entriesSaved_8; }
	inline int32_t* get_address_of__entriesSaved_8() { return &____entriesSaved_8; }
	inline void set__entriesSaved_8(int32_t value)
	{
		____entriesSaved_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
