#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.BinaryHeapM/Tuple[]
struct TupleU5BU5D_t1771834553;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.BinaryHeapM
struct  BinaryHeapM_t2828444044  : public Il2CppObject
{
public:
	// System.Int32 Pathfinding.BinaryHeapM::numberOfItems
	int32_t ___numberOfItems_2;
	// System.Single Pathfinding.BinaryHeapM::growthFactor
	float ___growthFactor_3;
	// Pathfinding.BinaryHeapM/Tuple[] Pathfinding.BinaryHeapM::binaryHeap
	TupleU5BU5D_t1771834553* ___binaryHeap_4;

public:
	inline static int32_t get_offset_of_numberOfItems_2() { return static_cast<int32_t>(offsetof(BinaryHeapM_t2828444044, ___numberOfItems_2)); }
	inline int32_t get_numberOfItems_2() const { return ___numberOfItems_2; }
	inline int32_t* get_address_of_numberOfItems_2() { return &___numberOfItems_2; }
	inline void set_numberOfItems_2(int32_t value)
	{
		___numberOfItems_2 = value;
	}

	inline static int32_t get_offset_of_growthFactor_3() { return static_cast<int32_t>(offsetof(BinaryHeapM_t2828444044, ___growthFactor_3)); }
	inline float get_growthFactor_3() const { return ___growthFactor_3; }
	inline float* get_address_of_growthFactor_3() { return &___growthFactor_3; }
	inline void set_growthFactor_3(float value)
	{
		___growthFactor_3 = value;
	}

	inline static int32_t get_offset_of_binaryHeap_4() { return static_cast<int32_t>(offsetof(BinaryHeapM_t2828444044, ___binaryHeap_4)); }
	inline TupleU5BU5D_t1771834553* get_binaryHeap_4() const { return ___binaryHeap_4; }
	inline TupleU5BU5D_t1771834553** get_address_of_binaryHeap_4() { return &___binaryHeap_4; }
	inline void set_binaryHeap_4(TupleU5BU5D_t1771834553* value)
	{
		___binaryHeap_4 = value;
		Il2CppCodeGenWriteBarrier(&___binaryHeap_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
