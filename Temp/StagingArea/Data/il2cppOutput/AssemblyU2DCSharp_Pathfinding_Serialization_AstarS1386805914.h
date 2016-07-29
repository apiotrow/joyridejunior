#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.BinaryWriter
struct BinaryWriter_t2314211483;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.AstarSerializer/<SerializeNodeIndices>c__AnonStorey1A
struct  U3CSerializeNodeIndicesU3Ec__AnonStorey1A_t1386805914  : public Il2CppObject
{
public:
	// System.Int32 Pathfinding.Serialization.AstarSerializer/<SerializeNodeIndices>c__AnonStorey1A::maxNodeIndex2
	int32_t ___maxNodeIndex2_0;
	// System.IO.BinaryWriter Pathfinding.Serialization.AstarSerializer/<SerializeNodeIndices>c__AnonStorey1A::wr
	BinaryWriter_t2314211483 * ___wr_1;

public:
	inline static int32_t get_offset_of_maxNodeIndex2_0() { return static_cast<int32_t>(offsetof(U3CSerializeNodeIndicesU3Ec__AnonStorey1A_t1386805914, ___maxNodeIndex2_0)); }
	inline int32_t get_maxNodeIndex2_0() const { return ___maxNodeIndex2_0; }
	inline int32_t* get_address_of_maxNodeIndex2_0() { return &___maxNodeIndex2_0; }
	inline void set_maxNodeIndex2_0(int32_t value)
	{
		___maxNodeIndex2_0 = value;
	}

	inline static int32_t get_offset_of_wr_1() { return static_cast<int32_t>(offsetof(U3CSerializeNodeIndicesU3Ec__AnonStorey1A_t1386805914, ___wr_1)); }
	inline BinaryWriter_t2314211483 * get_wr_1() const { return ___wr_1; }
	inline BinaryWriter_t2314211483 ** get_address_of_wr_1() { return &___wr_1; }
	inline void set_wr_1(BinaryWriter_t2314211483 * value)
	{
		___wr_1 = value;
		Il2CppCodeGenWriteBarrier(&___wr_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
