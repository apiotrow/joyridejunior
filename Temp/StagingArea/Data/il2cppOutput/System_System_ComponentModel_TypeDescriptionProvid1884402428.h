#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t1884402428;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptionProvider
struct  TypeDescriptionProvider_t1884402428  : public Il2CppObject
{
public:
	// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptionProvider::_parent
	TypeDescriptionProvider_t1884402428 * ____parent_0;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t1884402428, ____parent_0)); }
	inline TypeDescriptionProvider_t1884402428 * get__parent_0() const { return ____parent_0; }
	inline TypeDescriptionProvider_t1884402428 ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(TypeDescriptionProvider_t1884402428 * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier(&____parent_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
