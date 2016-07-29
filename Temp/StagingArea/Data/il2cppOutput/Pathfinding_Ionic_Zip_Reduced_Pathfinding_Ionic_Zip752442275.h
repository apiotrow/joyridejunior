#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.Regex
struct Regex_t3802381858;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ZipEntry/CopyHelper
struct  CopyHelper_t752442275  : public Il2CppObject
{
public:

public:
};

struct CopyHelper_t752442275_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex Pathfinding.Ionic.Zip.ZipEntry/CopyHelper::re
	Regex_t3802381858 * ___re_0;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry/CopyHelper::callCount
	int32_t ___callCount_1;

public:
	inline static int32_t get_offset_of_re_0() { return static_cast<int32_t>(offsetof(CopyHelper_t752442275_StaticFields, ___re_0)); }
	inline Regex_t3802381858 * get_re_0() const { return ___re_0; }
	inline Regex_t3802381858 ** get_address_of_re_0() { return &___re_0; }
	inline void set_re_0(Regex_t3802381858 * value)
	{
		___re_0 = value;
		Il2CppCodeGenWriteBarrier(&___re_0, value);
	}

	inline static int32_t get_offset_of_callCount_1() { return static_cast<int32_t>(offsetof(CopyHelper_t752442275_StaticFields, ___callCount_1)); }
	inline int32_t get_callCount_1() const { return ___callCount_1; }
	inline int32_t* get_address_of_callCount_1() { return &___callCount_1; }
	inline void set_callCount_1(int32_t value)
	{
		___callCount_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
