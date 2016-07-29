#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.BinaryHeapM
struct BinaryHeapM_t2828444044;
// Pathfinding.PathNode[][]
struct PathNodeU5BU5DU5BU5D_t2072882839;
// System.Boolean[]
struct BooleanU5BU5D_t3804927312;
// System.Collections.Generic.Stack`1<Pathfinding.PathNode[]>
struct Stack_1_t2877237557;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.PathHandler
struct  PathHandler_t2800540817  : public Il2CppObject
{
public:
	// System.UInt16 Pathfinding.PathHandler::pathID
	uint16_t ___pathID_3;
	// System.Int32 Pathfinding.PathHandler::threadID
	int32_t ___threadID_4;
	// System.Int32 Pathfinding.PathHandler::totalThreadCount
	int32_t ___totalThreadCount_5;
	// Pathfinding.BinaryHeapM Pathfinding.PathHandler::heap
	BinaryHeapM_t2828444044 * ___heap_6;
	// Pathfinding.PathNode[][] Pathfinding.PathHandler::nodes
	PathNodeU5BU5DU5BU5D_t2072882839* ___nodes_7;
	// System.Boolean[] Pathfinding.PathHandler::bucketNew
	BooleanU5BU5D_t3804927312* ___bucketNew_8;
	// System.Boolean[] Pathfinding.PathHandler::bucketCreated
	BooleanU5BU5D_t3804927312* ___bucketCreated_9;
	// System.Collections.Generic.Stack`1<Pathfinding.PathNode[]> Pathfinding.PathHandler::bucketCache
	Stack_1_t2877237557 * ___bucketCache_10;
	// System.Int32 Pathfinding.PathHandler::filledBuckets
	int32_t ___filledBuckets_11;
	// System.Text.StringBuilder Pathfinding.PathHandler::DebugStringBuilder
	StringBuilder_t3822575854 * ___DebugStringBuilder_12;

public:
	inline static int32_t get_offset_of_pathID_3() { return static_cast<int32_t>(offsetof(PathHandler_t2800540817, ___pathID_3)); }
	inline uint16_t get_pathID_3() const { return ___pathID_3; }
	inline uint16_t* get_address_of_pathID_3() { return &___pathID_3; }
	inline void set_pathID_3(uint16_t value)
	{
		___pathID_3 = value;
	}

	inline static int32_t get_offset_of_threadID_4() { return static_cast<int32_t>(offsetof(PathHandler_t2800540817, ___threadID_4)); }
	inline int32_t get_threadID_4() const { return ___threadID_4; }
	inline int32_t* get_address_of_threadID_4() { return &___threadID_4; }
	inline void set_threadID_4(int32_t value)
	{
		___threadID_4 = value;
	}

	inline static int32_t get_offset_of_totalThreadCount_5() { return static_cast<int32_t>(offsetof(PathHandler_t2800540817, ___totalThreadCount_5)); }
	inline int32_t get_totalThreadCount_5() const { return ___totalThreadCount_5; }
	inline int32_t* get_address_of_totalThreadCount_5() { return &___totalThreadCount_5; }
	inline void set_totalThreadCount_5(int32_t value)
	{
		___totalThreadCount_5 = value;
	}

	inline static int32_t get_offset_of_heap_6() { return static_cast<int32_t>(offsetof(PathHandler_t2800540817, ___heap_6)); }
	inline BinaryHeapM_t2828444044 * get_heap_6() const { return ___heap_6; }
	inline BinaryHeapM_t2828444044 ** get_address_of_heap_6() { return &___heap_6; }
	inline void set_heap_6(BinaryHeapM_t2828444044 * value)
	{
		___heap_6 = value;
		Il2CppCodeGenWriteBarrier(&___heap_6, value);
	}

	inline static int32_t get_offset_of_nodes_7() { return static_cast<int32_t>(offsetof(PathHandler_t2800540817, ___nodes_7)); }
	inline PathNodeU5BU5DU5BU5D_t2072882839* get_nodes_7() const { return ___nodes_7; }
	inline PathNodeU5BU5DU5BU5D_t2072882839** get_address_of_nodes_7() { return &___nodes_7; }
	inline void set_nodes_7(PathNodeU5BU5DU5BU5D_t2072882839* value)
	{
		___nodes_7 = value;
		Il2CppCodeGenWriteBarrier(&___nodes_7, value);
	}

	inline static int32_t get_offset_of_bucketNew_8() { return static_cast<int32_t>(offsetof(PathHandler_t2800540817, ___bucketNew_8)); }
	inline BooleanU5BU5D_t3804927312* get_bucketNew_8() const { return ___bucketNew_8; }
	inline BooleanU5BU5D_t3804927312** get_address_of_bucketNew_8() { return &___bucketNew_8; }
	inline void set_bucketNew_8(BooleanU5BU5D_t3804927312* value)
	{
		___bucketNew_8 = value;
		Il2CppCodeGenWriteBarrier(&___bucketNew_8, value);
	}

	inline static int32_t get_offset_of_bucketCreated_9() { return static_cast<int32_t>(offsetof(PathHandler_t2800540817, ___bucketCreated_9)); }
	inline BooleanU5BU5D_t3804927312* get_bucketCreated_9() const { return ___bucketCreated_9; }
	inline BooleanU5BU5D_t3804927312** get_address_of_bucketCreated_9() { return &___bucketCreated_9; }
	inline void set_bucketCreated_9(BooleanU5BU5D_t3804927312* value)
	{
		___bucketCreated_9 = value;
		Il2CppCodeGenWriteBarrier(&___bucketCreated_9, value);
	}

	inline static int32_t get_offset_of_bucketCache_10() { return static_cast<int32_t>(offsetof(PathHandler_t2800540817, ___bucketCache_10)); }
	inline Stack_1_t2877237557 * get_bucketCache_10() const { return ___bucketCache_10; }
	inline Stack_1_t2877237557 ** get_address_of_bucketCache_10() { return &___bucketCache_10; }
	inline void set_bucketCache_10(Stack_1_t2877237557 * value)
	{
		___bucketCache_10 = value;
		Il2CppCodeGenWriteBarrier(&___bucketCache_10, value);
	}

	inline static int32_t get_offset_of_filledBuckets_11() { return static_cast<int32_t>(offsetof(PathHandler_t2800540817, ___filledBuckets_11)); }
	inline int32_t get_filledBuckets_11() const { return ___filledBuckets_11; }
	inline int32_t* get_address_of_filledBuckets_11() { return &___filledBuckets_11; }
	inline void set_filledBuckets_11(int32_t value)
	{
		___filledBuckets_11 = value;
	}

	inline static int32_t get_offset_of_DebugStringBuilder_12() { return static_cast<int32_t>(offsetof(PathHandler_t2800540817, ___DebugStringBuilder_12)); }
	inline StringBuilder_t3822575854 * get_DebugStringBuilder_12() const { return ___DebugStringBuilder_12; }
	inline StringBuilder_t3822575854 ** get_address_of_DebugStringBuilder_12() { return &___DebugStringBuilder_12; }
	inline void set_DebugStringBuilder_12(StringBuilder_t3822575854 * value)
	{
		___DebugStringBuilder_12 = value;
		Il2CppCodeGenWriteBarrier(&___DebugStringBuilder_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
