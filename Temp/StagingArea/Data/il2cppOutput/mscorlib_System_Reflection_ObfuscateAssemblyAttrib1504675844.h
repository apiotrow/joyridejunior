#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Attribute498693649.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ObfuscateAssemblyAttribute
struct  ObfuscateAssemblyAttribute_t1504675844  : public Attribute_t498693649
{
public:
	// System.Boolean System.Reflection.ObfuscateAssemblyAttribute::is_private
	bool ___is_private_0;
	// System.Boolean System.Reflection.ObfuscateAssemblyAttribute::strip
	bool ___strip_1;

public:
	inline static int32_t get_offset_of_is_private_0() { return static_cast<int32_t>(offsetof(ObfuscateAssemblyAttribute_t1504675844, ___is_private_0)); }
	inline bool get_is_private_0() const { return ___is_private_0; }
	inline bool* get_address_of_is_private_0() { return &___is_private_0; }
	inline void set_is_private_0(bool value)
	{
		___is_private_0 = value;
	}

	inline static int32_t get_offset_of_strip_1() { return static_cast<int32_t>(offsetof(ObfuscateAssemblyAttribute_t1504675844, ___strip_1)); }
	inline bool get_strip_1() const { return ___strip_1; }
	inline bool* get_address_of_strip_1() { return &___strip_1; }
	inline void set_strip_1(bool value)
	{
		___strip_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
