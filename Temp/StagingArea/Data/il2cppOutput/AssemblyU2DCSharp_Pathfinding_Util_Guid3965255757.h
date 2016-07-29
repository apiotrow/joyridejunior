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
// System.Random
struct Random_t922188920;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "mscorlib_System_ValueType4014882752.h"
#include "AssemblyU2DCSharp_Pathfinding_Util_Guid3965255757.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Util.Guid
struct  Guid_t3965255757 
{
public:
	// System.UInt64 Pathfinding.Util.Guid::_a
	uint64_t ____a_3;
	// System.UInt64 Pathfinding.Util.Guid::_b
	uint64_t ____b_4;

public:
	inline static int32_t get_offset_of__a_3() { return static_cast<int32_t>(offsetof(Guid_t3965255757, ____a_3)); }
	inline uint64_t get__a_3() const { return ____a_3; }
	inline uint64_t* get_address_of__a_3() { return &____a_3; }
	inline void set__a_3(uint64_t value)
	{
		____a_3 = value;
	}

	inline static int32_t get_offset_of__b_4() { return static_cast<int32_t>(offsetof(Guid_t3965255757, ____b_4)); }
	inline uint64_t get__b_4() const { return ____b_4; }
	inline uint64_t* get_address_of__b_4() { return &____b_4; }
	inline void set__b_4(uint64_t value)
	{
		____b_4 = value;
	}
};

struct Guid_t3965255757_StaticFields
{
public:
	// Pathfinding.Util.Guid Pathfinding.Util.Guid::zero
	Guid_t3965255757  ___zero_1;
	// System.String Pathfinding.Util.Guid::zeroString
	String_t* ___zeroString_2;
	// System.Random Pathfinding.Util.Guid::random
	Random_t922188920 * ___random_5;
	// System.Text.StringBuilder Pathfinding.Util.Guid::text
	StringBuilder_t3822575854 * ___text_6;

public:
	inline static int32_t get_offset_of_zero_1() { return static_cast<int32_t>(offsetof(Guid_t3965255757_StaticFields, ___zero_1)); }
	inline Guid_t3965255757  get_zero_1() const { return ___zero_1; }
	inline Guid_t3965255757 * get_address_of_zero_1() { return &___zero_1; }
	inline void set_zero_1(Guid_t3965255757  value)
	{
		___zero_1 = value;
	}

	inline static int32_t get_offset_of_zeroString_2() { return static_cast<int32_t>(offsetof(Guid_t3965255757_StaticFields, ___zeroString_2)); }
	inline String_t* get_zeroString_2() const { return ___zeroString_2; }
	inline String_t** get_address_of_zeroString_2() { return &___zeroString_2; }
	inline void set_zeroString_2(String_t* value)
	{
		___zeroString_2 = value;
		Il2CppCodeGenWriteBarrier(&___zeroString_2, value);
	}

	inline static int32_t get_offset_of_random_5() { return static_cast<int32_t>(offsetof(Guid_t3965255757_StaticFields, ___random_5)); }
	inline Random_t922188920 * get_random_5() const { return ___random_5; }
	inline Random_t922188920 ** get_address_of_random_5() { return &___random_5; }
	inline void set_random_5(Random_t922188920 * value)
	{
		___random_5 = value;
		Il2CppCodeGenWriteBarrier(&___random_5, value);
	}

	inline static int32_t get_offset_of_text_6() { return static_cast<int32_t>(offsetof(Guid_t3965255757_StaticFields, ___text_6)); }
	inline StringBuilder_t3822575854 * get_text_6() const { return ___text_6; }
	inline StringBuilder_t3822575854 ** get_address_of_text_6() { return &___text_6; }
	inline void set_text_6(StringBuilder_t3822575854 * value)
	{
		___text_6 = value;
		Il2CppCodeGenWriteBarrier(&___text_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Pathfinding.Util.Guid
struct Guid_t3965255757_marshaled_pinvoke
{
	uint64_t ____a_3;
	uint64_t ____b_4;
};
// Native definition for marshalling of: Pathfinding.Util.Guid
struct Guid_t3965255757_marshaled_com
{
	uint64_t ____a_3;
	uint64_t ____b_4;
};
