#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.GraphNode[]
struct GraphNodeU5BU5D_t2658295925;
// System.Object
struct Il2CppObject;
// System.Random
struct Random_t922188920;

#include "AssemblyU2DCSharp_Pathfinding_MonoModifier2694713414.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.AlternativePath
struct  AlternativePath_t3728262814  : public MonoModifier_t2694713414
{
public:
	// System.Int32 Pathfinding.AlternativePath::penalty
	int32_t ___penalty_3;
	// System.Int32 Pathfinding.AlternativePath::randomStep
	int32_t ___randomStep_4;
	// Pathfinding.GraphNode[] Pathfinding.AlternativePath::prevNodes
	GraphNodeU5BU5D_t2658295925* ___prevNodes_5;
	// System.Int32 Pathfinding.AlternativePath::prevSeed
	int32_t ___prevSeed_6;
	// System.Int32 Pathfinding.AlternativePath::prevPenalty
	int32_t ___prevPenalty_7;
	// System.Boolean Pathfinding.AlternativePath::waitingForApply
	bool ___waitingForApply_8;
	// System.Object Pathfinding.AlternativePath::lockObject
	Il2CppObject * ___lockObject_9;
	// System.Random Pathfinding.AlternativePath::rnd
	Random_t922188920 * ___rnd_10;
	// System.Random Pathfinding.AlternativePath::seedGenerator
	Random_t922188920 * ___seedGenerator_11;
	// System.Boolean Pathfinding.AlternativePath::destroyed
	bool ___destroyed_12;
	// Pathfinding.GraphNode[] Pathfinding.AlternativePath::toBeApplied
	GraphNodeU5BU5D_t2658295925* ___toBeApplied_13;

public:
	inline static int32_t get_offset_of_penalty_3() { return static_cast<int32_t>(offsetof(AlternativePath_t3728262814, ___penalty_3)); }
	inline int32_t get_penalty_3() const { return ___penalty_3; }
	inline int32_t* get_address_of_penalty_3() { return &___penalty_3; }
	inline void set_penalty_3(int32_t value)
	{
		___penalty_3 = value;
	}

	inline static int32_t get_offset_of_randomStep_4() { return static_cast<int32_t>(offsetof(AlternativePath_t3728262814, ___randomStep_4)); }
	inline int32_t get_randomStep_4() const { return ___randomStep_4; }
	inline int32_t* get_address_of_randomStep_4() { return &___randomStep_4; }
	inline void set_randomStep_4(int32_t value)
	{
		___randomStep_4 = value;
	}

	inline static int32_t get_offset_of_prevNodes_5() { return static_cast<int32_t>(offsetof(AlternativePath_t3728262814, ___prevNodes_5)); }
	inline GraphNodeU5BU5D_t2658295925* get_prevNodes_5() const { return ___prevNodes_5; }
	inline GraphNodeU5BU5D_t2658295925** get_address_of_prevNodes_5() { return &___prevNodes_5; }
	inline void set_prevNodes_5(GraphNodeU5BU5D_t2658295925* value)
	{
		___prevNodes_5 = value;
		Il2CppCodeGenWriteBarrier(&___prevNodes_5, value);
	}

	inline static int32_t get_offset_of_prevSeed_6() { return static_cast<int32_t>(offsetof(AlternativePath_t3728262814, ___prevSeed_6)); }
	inline int32_t get_prevSeed_6() const { return ___prevSeed_6; }
	inline int32_t* get_address_of_prevSeed_6() { return &___prevSeed_6; }
	inline void set_prevSeed_6(int32_t value)
	{
		___prevSeed_6 = value;
	}

	inline static int32_t get_offset_of_prevPenalty_7() { return static_cast<int32_t>(offsetof(AlternativePath_t3728262814, ___prevPenalty_7)); }
	inline int32_t get_prevPenalty_7() const { return ___prevPenalty_7; }
	inline int32_t* get_address_of_prevPenalty_7() { return &___prevPenalty_7; }
	inline void set_prevPenalty_7(int32_t value)
	{
		___prevPenalty_7 = value;
	}

	inline static int32_t get_offset_of_waitingForApply_8() { return static_cast<int32_t>(offsetof(AlternativePath_t3728262814, ___waitingForApply_8)); }
	inline bool get_waitingForApply_8() const { return ___waitingForApply_8; }
	inline bool* get_address_of_waitingForApply_8() { return &___waitingForApply_8; }
	inline void set_waitingForApply_8(bool value)
	{
		___waitingForApply_8 = value;
	}

	inline static int32_t get_offset_of_lockObject_9() { return static_cast<int32_t>(offsetof(AlternativePath_t3728262814, ___lockObject_9)); }
	inline Il2CppObject * get_lockObject_9() const { return ___lockObject_9; }
	inline Il2CppObject ** get_address_of_lockObject_9() { return &___lockObject_9; }
	inline void set_lockObject_9(Il2CppObject * value)
	{
		___lockObject_9 = value;
		Il2CppCodeGenWriteBarrier(&___lockObject_9, value);
	}

	inline static int32_t get_offset_of_rnd_10() { return static_cast<int32_t>(offsetof(AlternativePath_t3728262814, ___rnd_10)); }
	inline Random_t922188920 * get_rnd_10() const { return ___rnd_10; }
	inline Random_t922188920 ** get_address_of_rnd_10() { return &___rnd_10; }
	inline void set_rnd_10(Random_t922188920 * value)
	{
		___rnd_10 = value;
		Il2CppCodeGenWriteBarrier(&___rnd_10, value);
	}

	inline static int32_t get_offset_of_seedGenerator_11() { return static_cast<int32_t>(offsetof(AlternativePath_t3728262814, ___seedGenerator_11)); }
	inline Random_t922188920 * get_seedGenerator_11() const { return ___seedGenerator_11; }
	inline Random_t922188920 ** get_address_of_seedGenerator_11() { return &___seedGenerator_11; }
	inline void set_seedGenerator_11(Random_t922188920 * value)
	{
		___seedGenerator_11 = value;
		Il2CppCodeGenWriteBarrier(&___seedGenerator_11, value);
	}

	inline static int32_t get_offset_of_destroyed_12() { return static_cast<int32_t>(offsetof(AlternativePath_t3728262814, ___destroyed_12)); }
	inline bool get_destroyed_12() const { return ___destroyed_12; }
	inline bool* get_address_of_destroyed_12() { return &___destroyed_12; }
	inline void set_destroyed_12(bool value)
	{
		___destroyed_12 = value;
	}

	inline static int32_t get_offset_of_toBeApplied_13() { return static_cast<int32_t>(offsetof(AlternativePath_t3728262814, ___toBeApplied_13)); }
	inline GraphNodeU5BU5D_t2658295925* get_toBeApplied_13() const { return ___toBeApplied_13; }
	inline GraphNodeU5BU5D_t2658295925** get_address_of_toBeApplied_13() { return &___toBeApplied_13; }
	inline void set_toBeApplied_13(GraphNodeU5BU5D_t2658295925* value)
	{
		___toBeApplied_13 = value;
		Il2CppCodeGenWriteBarrier(&___toBeApplied_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
