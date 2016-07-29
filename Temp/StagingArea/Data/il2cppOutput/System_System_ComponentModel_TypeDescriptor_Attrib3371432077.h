#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Attribute[]
struct AttributeU5BU5D_t4076389004;

#include "System_System_ComponentModel_TypeDescriptionProvid1884402428.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/AttributeProvider
struct  AttributeProvider_t3371432077  : public TypeDescriptionProvider_t1884402428
{
public:
	// System.Attribute[] System.ComponentModel.TypeDescriptor/AttributeProvider::attributes
	AttributeU5BU5D_t4076389004* ___attributes_1;

public:
	inline static int32_t get_offset_of_attributes_1() { return static_cast<int32_t>(offsetof(AttributeProvider_t3371432077, ___attributes_1)); }
	inline AttributeU5BU5D_t4076389004* get_attributes_1() const { return ___attributes_1; }
	inline AttributeU5BU5D_t4076389004** get_address_of_attributes_1() { return &___attributes_1; }
	inline void set_attributes_1(AttributeU5BU5D_t4076389004* value)
	{
		___attributes_1 = value;
		Il2CppCodeGenWriteBarrier(&___attributes_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
