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
// System.Func`1<System.Int32>
struct Func_1_t3990196034;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AstarDebugger/PathTypeDebug
struct  PathTypeDebug_t3181138036 
{
public:
	// System.String AstarDebugger/PathTypeDebug::name
	String_t* ___name_0;
	// System.Func`1<System.Int32> AstarDebugger/PathTypeDebug::getSize
	Func_1_t3990196034 * ___getSize_1;
	// System.Func`1<System.Int32> AstarDebugger/PathTypeDebug::getTotalCreated
	Func_1_t3990196034 * ___getTotalCreated_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(PathTypeDebug_t3181138036, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_getSize_1() { return static_cast<int32_t>(offsetof(PathTypeDebug_t3181138036, ___getSize_1)); }
	inline Func_1_t3990196034 * get_getSize_1() const { return ___getSize_1; }
	inline Func_1_t3990196034 ** get_address_of_getSize_1() { return &___getSize_1; }
	inline void set_getSize_1(Func_1_t3990196034 * value)
	{
		___getSize_1 = value;
		Il2CppCodeGenWriteBarrier(&___getSize_1, value);
	}

	inline static int32_t get_offset_of_getTotalCreated_2() { return static_cast<int32_t>(offsetof(PathTypeDebug_t3181138036, ___getTotalCreated_2)); }
	inline Func_1_t3990196034 * get_getTotalCreated_2() const { return ___getTotalCreated_2; }
	inline Func_1_t3990196034 ** get_address_of_getTotalCreated_2() { return &___getTotalCreated_2; }
	inline void set_getTotalCreated_2(Func_1_t3990196034 * value)
	{
		___getTotalCreated_2 = value;
		Il2CppCodeGenWriteBarrier(&___getTotalCreated_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
