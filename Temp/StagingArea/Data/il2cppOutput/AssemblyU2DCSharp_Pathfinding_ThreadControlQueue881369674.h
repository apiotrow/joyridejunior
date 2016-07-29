#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.Path
struct Path_t2697364881;
// System.Object
struct Il2CppObject;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t2399218676;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.ThreadControlQueue
struct  ThreadControlQueue_t881369674  : public Il2CppObject
{
public:
	// Pathfinding.Path Pathfinding.ThreadControlQueue::head
	Path_t2697364881 * ___head_0;
	// Pathfinding.Path Pathfinding.ThreadControlQueue::tail
	Path_t2697364881 * ___tail_1;
	// System.Object Pathfinding.ThreadControlQueue::lockObj
	Il2CppObject * ___lockObj_2;
	// System.Int32 Pathfinding.ThreadControlQueue::numReceivers
	int32_t ___numReceivers_3;
	// System.Boolean Pathfinding.ThreadControlQueue::blocked
	bool ___blocked_4;
	// System.Int32 Pathfinding.ThreadControlQueue::blockedReceivers
	int32_t ___blockedReceivers_5;
	// System.Boolean Pathfinding.ThreadControlQueue::starving
	bool ___starving_6;
	// System.Boolean Pathfinding.ThreadControlQueue::terminate
	bool ___terminate_7;
	// System.Threading.ManualResetEvent Pathfinding.ThreadControlQueue::block
	ManualResetEvent_t2399218676 * ___block_8;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(ThreadControlQueue_t881369674, ___head_0)); }
	inline Path_t2697364881 * get_head_0() const { return ___head_0; }
	inline Path_t2697364881 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(Path_t2697364881 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier(&___head_0, value);
	}

	inline static int32_t get_offset_of_tail_1() { return static_cast<int32_t>(offsetof(ThreadControlQueue_t881369674, ___tail_1)); }
	inline Path_t2697364881 * get_tail_1() const { return ___tail_1; }
	inline Path_t2697364881 ** get_address_of_tail_1() { return &___tail_1; }
	inline void set_tail_1(Path_t2697364881 * value)
	{
		___tail_1 = value;
		Il2CppCodeGenWriteBarrier(&___tail_1, value);
	}

	inline static int32_t get_offset_of_lockObj_2() { return static_cast<int32_t>(offsetof(ThreadControlQueue_t881369674, ___lockObj_2)); }
	inline Il2CppObject * get_lockObj_2() const { return ___lockObj_2; }
	inline Il2CppObject ** get_address_of_lockObj_2() { return &___lockObj_2; }
	inline void set_lockObj_2(Il2CppObject * value)
	{
		___lockObj_2 = value;
		Il2CppCodeGenWriteBarrier(&___lockObj_2, value);
	}

	inline static int32_t get_offset_of_numReceivers_3() { return static_cast<int32_t>(offsetof(ThreadControlQueue_t881369674, ___numReceivers_3)); }
	inline int32_t get_numReceivers_3() const { return ___numReceivers_3; }
	inline int32_t* get_address_of_numReceivers_3() { return &___numReceivers_3; }
	inline void set_numReceivers_3(int32_t value)
	{
		___numReceivers_3 = value;
	}

	inline static int32_t get_offset_of_blocked_4() { return static_cast<int32_t>(offsetof(ThreadControlQueue_t881369674, ___blocked_4)); }
	inline bool get_blocked_4() const { return ___blocked_4; }
	inline bool* get_address_of_blocked_4() { return &___blocked_4; }
	inline void set_blocked_4(bool value)
	{
		___blocked_4 = value;
	}

	inline static int32_t get_offset_of_blockedReceivers_5() { return static_cast<int32_t>(offsetof(ThreadControlQueue_t881369674, ___blockedReceivers_5)); }
	inline int32_t get_blockedReceivers_5() const { return ___blockedReceivers_5; }
	inline int32_t* get_address_of_blockedReceivers_5() { return &___blockedReceivers_5; }
	inline void set_blockedReceivers_5(int32_t value)
	{
		___blockedReceivers_5 = value;
	}

	inline static int32_t get_offset_of_starving_6() { return static_cast<int32_t>(offsetof(ThreadControlQueue_t881369674, ___starving_6)); }
	inline bool get_starving_6() const { return ___starving_6; }
	inline bool* get_address_of_starving_6() { return &___starving_6; }
	inline void set_starving_6(bool value)
	{
		___starving_6 = value;
	}

	inline static int32_t get_offset_of_terminate_7() { return static_cast<int32_t>(offsetof(ThreadControlQueue_t881369674, ___terminate_7)); }
	inline bool get_terminate_7() const { return ___terminate_7; }
	inline bool* get_address_of_terminate_7() { return &___terminate_7; }
	inline void set_terminate_7(bool value)
	{
		___terminate_7 = value;
	}

	inline static int32_t get_offset_of_block_8() { return static_cast<int32_t>(offsetof(ThreadControlQueue_t881369674, ___block_8)); }
	inline ManualResetEvent_t2399218676 * get_block_8() const { return ___block_8; }
	inline ManualResetEvent_t2399218676 ** get_address_of_block_8() { return &___block_8; }
	inline void set_block_8(ManualResetEvent_t2399218676 * value)
	{
		___block_8 = value;
		Il2CppCodeGenWriteBarrier(&___block_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
