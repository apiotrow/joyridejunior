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
// System.Text.Encoding
struct Encoding_t180559927;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.SharedUtilities
struct  SharedUtilities_t3157954094  : public Il2CppObject
{
public:

public:
};

struct SharedUtilities_t3157954094_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex Pathfinding.Ionic.Zip.SharedUtilities::doubleDotRegex1
	Regex_t3802381858 * ___doubleDotRegex1_0;
	// System.Text.Encoding Pathfinding.Ionic.Zip.SharedUtilities::ibm437
	Encoding_t180559927 * ___ibm437_1;
	// System.Text.Encoding Pathfinding.Ionic.Zip.SharedUtilities::utf8
	Encoding_t180559927 * ___utf8_2;

public:
	inline static int32_t get_offset_of_doubleDotRegex1_0() { return static_cast<int32_t>(offsetof(SharedUtilities_t3157954094_StaticFields, ___doubleDotRegex1_0)); }
	inline Regex_t3802381858 * get_doubleDotRegex1_0() const { return ___doubleDotRegex1_0; }
	inline Regex_t3802381858 ** get_address_of_doubleDotRegex1_0() { return &___doubleDotRegex1_0; }
	inline void set_doubleDotRegex1_0(Regex_t3802381858 * value)
	{
		___doubleDotRegex1_0 = value;
		Il2CppCodeGenWriteBarrier(&___doubleDotRegex1_0, value);
	}

	inline static int32_t get_offset_of_ibm437_1() { return static_cast<int32_t>(offsetof(SharedUtilities_t3157954094_StaticFields, ___ibm437_1)); }
	inline Encoding_t180559927 * get_ibm437_1() const { return ___ibm437_1; }
	inline Encoding_t180559927 ** get_address_of_ibm437_1() { return &___ibm437_1; }
	inline void set_ibm437_1(Encoding_t180559927 * value)
	{
		___ibm437_1 = value;
		Il2CppCodeGenWriteBarrier(&___ibm437_1, value);
	}

	inline static int32_t get_offset_of_utf8_2() { return static_cast<int32_t>(offsetof(SharedUtilities_t3157954094_StaticFields, ___utf8_2)); }
	inline Encoding_t180559927 * get_utf8_2() const { return ___utf8_2; }
	inline Encoding_t180559927 ** get_address_of_utf8_2() { return &___utf8_2; }
	inline void set_utf8_2(Encoding_t180559927 * value)
	{
		___utf8_2 = value;
		Il2CppCodeGenWriteBarrier(&___utf8_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
