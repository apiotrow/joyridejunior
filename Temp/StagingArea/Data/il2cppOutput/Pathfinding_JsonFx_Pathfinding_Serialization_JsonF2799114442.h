#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>
struct Dictionary_2_t2298312137;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.TypeCoercionUtility
struct  TypeCoercionUtility_t2799114442  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>> Pathfinding.Serialization.JsonFx.TypeCoercionUtility::memberMapCache
	Dictionary_2_t2298312137 * ___memberMapCache_0;
	// System.Boolean Pathfinding.Serialization.JsonFx.TypeCoercionUtility::allowNullValueTypes
	bool ___allowNullValueTypes_1;

public:
	inline static int32_t get_offset_of_memberMapCache_0() { return static_cast<int32_t>(offsetof(TypeCoercionUtility_t2799114442, ___memberMapCache_0)); }
	inline Dictionary_2_t2298312137 * get_memberMapCache_0() const { return ___memberMapCache_0; }
	inline Dictionary_2_t2298312137 ** get_address_of_memberMapCache_0() { return &___memberMapCache_0; }
	inline void set_memberMapCache_0(Dictionary_2_t2298312137 * value)
	{
		___memberMapCache_0 = value;
		Il2CppCodeGenWriteBarrier(&___memberMapCache_0, value);
	}

	inline static int32_t get_offset_of_allowNullValueTypes_1() { return static_cast<int32_t>(offsetof(TypeCoercionUtility_t2799114442, ___allowNullValueTypes_1)); }
	inline bool get_allowNullValueTypes_1() const { return ___allowNullValueTypes_1; }
	inline bool* get_address_of_allowNullValueTypes_1() { return &___allowNullValueTypes_1; }
	inline void set_allowNullValueTypes_1(bool value)
	{
		___allowNullValueTypes_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
