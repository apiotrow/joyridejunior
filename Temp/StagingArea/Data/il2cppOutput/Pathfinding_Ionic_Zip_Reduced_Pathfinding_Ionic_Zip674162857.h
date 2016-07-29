#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.Ionic.Zip.ZipFile
struct ZipFile_t1967254086;
// Pathfinding.Ionic.Zip.ZipOutputStream
struct ZipOutputStream_t3108803499;
// Pathfinding.Ionic.Zip.ZipInputStream
struct ZipInputStream_t225717330;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ZipContainer
struct  ZipContainer_t674162857  : public Il2CppObject
{
public:
	// Pathfinding.Ionic.Zip.ZipFile Pathfinding.Ionic.Zip.ZipContainer::_zf
	ZipFile_t1967254086 * ____zf_0;
	// Pathfinding.Ionic.Zip.ZipOutputStream Pathfinding.Ionic.Zip.ZipContainer::_zos
	ZipOutputStream_t3108803499 * ____zos_1;
	// Pathfinding.Ionic.Zip.ZipInputStream Pathfinding.Ionic.Zip.ZipContainer::_zis
	ZipInputStream_t225717330 * ____zis_2;

public:
	inline static int32_t get_offset_of__zf_0() { return static_cast<int32_t>(offsetof(ZipContainer_t674162857, ____zf_0)); }
	inline ZipFile_t1967254086 * get__zf_0() const { return ____zf_0; }
	inline ZipFile_t1967254086 ** get_address_of__zf_0() { return &____zf_0; }
	inline void set__zf_0(ZipFile_t1967254086 * value)
	{
		____zf_0 = value;
		Il2CppCodeGenWriteBarrier(&____zf_0, value);
	}

	inline static int32_t get_offset_of__zos_1() { return static_cast<int32_t>(offsetof(ZipContainer_t674162857, ____zos_1)); }
	inline ZipOutputStream_t3108803499 * get__zos_1() const { return ____zos_1; }
	inline ZipOutputStream_t3108803499 ** get_address_of__zos_1() { return &____zos_1; }
	inline void set__zos_1(ZipOutputStream_t3108803499 * value)
	{
		____zos_1 = value;
		Il2CppCodeGenWriteBarrier(&____zos_1, value);
	}

	inline static int32_t get_offset_of__zis_2() { return static_cast<int32_t>(offsetof(ZipContainer_t674162857, ____zis_2)); }
	inline ZipInputStream_t225717330 * get__zis_2() const { return ____zis_2; }
	inline ZipInputStream_t225717330 ** get_address_of__zis_2() { return &____zis_2; }
	inline void set__zis_2(ZipInputStream_t225717330 * value)
	{
		____zis_2 = value;
		Il2CppCodeGenWriteBarrier(&____zis_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
