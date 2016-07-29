#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t437523947;
// System.Func`2<System.Boolean,System.Boolean>
struct Func_2_t1008118516;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AstarPath/AstarWorkItem
struct  AstarWorkItem_t401171703 
{
public:
	// System.Action AstarPath/AstarWorkItem::init
	Action_t437523947 * ___init_0;
	// System.Func`2<System.Boolean,System.Boolean> AstarPath/AstarWorkItem::update
	Func_2_t1008118516 * ___update_1;

public:
	inline static int32_t get_offset_of_init_0() { return static_cast<int32_t>(offsetof(AstarWorkItem_t401171703, ___init_0)); }
	inline Action_t437523947 * get_init_0() const { return ___init_0; }
	inline Action_t437523947 ** get_address_of_init_0() { return &___init_0; }
	inline void set_init_0(Action_t437523947 * value)
	{
		___init_0 = value;
		Il2CppCodeGenWriteBarrier(&___init_0, value);
	}

	inline static int32_t get_offset_of_update_1() { return static_cast<int32_t>(offsetof(AstarWorkItem_t401171703, ___update_1)); }
	inline Func_2_t1008118516 * get_update_1() const { return ___update_1; }
	inline Func_2_t1008118516 ** get_address_of_update_1() { return &___update_1; }
	inline void set_update_1(Func_2_t1008118516 * value)
	{
		___update_1 = value;
		Il2CppCodeGenWriteBarrier(&___update_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
