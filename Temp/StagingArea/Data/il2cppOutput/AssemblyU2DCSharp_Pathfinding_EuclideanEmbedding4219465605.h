#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Pathfinding_HeuristicOptimizatio3622289670.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.EuclideanEmbedding
struct  EuclideanEmbedding_t4219465605  : public Il2CppObject
{
public:
	// Pathfinding.HeuristicOptimizationMode Pathfinding.EuclideanEmbedding::mode
	int32_t ___mode_0;
	// System.Int32 Pathfinding.EuclideanEmbedding::seed
	int32_t ___seed_1;
	// UnityEngine.Transform Pathfinding.EuclideanEmbedding::pivotPointRoot
	Transform_t284553113 * ___pivotPointRoot_2;
	// System.Int32 Pathfinding.EuclideanEmbedding::spreadOutCount
	int32_t ___spreadOutCount_3;
	// System.Boolean Pathfinding.EuclideanEmbedding::dirty
	bool ___dirty_4;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(EuclideanEmbedding_t4219465605, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of_seed_1() { return static_cast<int32_t>(offsetof(EuclideanEmbedding_t4219465605, ___seed_1)); }
	inline int32_t get_seed_1() const { return ___seed_1; }
	inline int32_t* get_address_of_seed_1() { return &___seed_1; }
	inline void set_seed_1(int32_t value)
	{
		___seed_1 = value;
	}

	inline static int32_t get_offset_of_pivotPointRoot_2() { return static_cast<int32_t>(offsetof(EuclideanEmbedding_t4219465605, ___pivotPointRoot_2)); }
	inline Transform_t284553113 * get_pivotPointRoot_2() const { return ___pivotPointRoot_2; }
	inline Transform_t284553113 ** get_address_of_pivotPointRoot_2() { return &___pivotPointRoot_2; }
	inline void set_pivotPointRoot_2(Transform_t284553113 * value)
	{
		___pivotPointRoot_2 = value;
		Il2CppCodeGenWriteBarrier(&___pivotPointRoot_2, value);
	}

	inline static int32_t get_offset_of_spreadOutCount_3() { return static_cast<int32_t>(offsetof(EuclideanEmbedding_t4219465605, ___spreadOutCount_3)); }
	inline int32_t get_spreadOutCount_3() const { return ___spreadOutCount_3; }
	inline int32_t* get_address_of_spreadOutCount_3() { return &___spreadOutCount_3; }
	inline void set_spreadOutCount_3(int32_t value)
	{
		___spreadOutCount_3 = value;
	}

	inline static int32_t get_offset_of_dirty_4() { return static_cast<int32_t>(offsetof(EuclideanEmbedding_t4219465605, ___dirty_4)); }
	inline bool get_dirty_4() const { return ___dirty_4; }
	inline bool* get_address_of_dirty_4() { return &___dirty_4; }
	inline void set_dirty_4(bool value)
	{
		___dirty_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
