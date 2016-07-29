#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Version
struct Version_t497901645;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.GraphMeta
struct  GraphMeta_t2836493941  : public Il2CppObject
{
public:
	// System.Version Pathfinding.Serialization.GraphMeta::version
	Version_t497901645 * ___version_0;
	// System.Int32 Pathfinding.Serialization.GraphMeta::graphs
	int32_t ___graphs_1;
	// System.String[] Pathfinding.Serialization.GraphMeta::guids
	StringU5BU5D_t2956870243* ___guids_2;
	// System.String[] Pathfinding.Serialization.GraphMeta::typeNames
	StringU5BU5D_t2956870243* ___typeNames_3;
	// System.Int32[] Pathfinding.Serialization.GraphMeta::nodeCounts
	Int32U5BU5D_t1809983122* ___nodeCounts_4;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(GraphMeta_t2836493941, ___version_0)); }
	inline Version_t497901645 * get_version_0() const { return ___version_0; }
	inline Version_t497901645 ** get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(Version_t497901645 * value)
	{
		___version_0 = value;
		Il2CppCodeGenWriteBarrier(&___version_0, value);
	}

	inline static int32_t get_offset_of_graphs_1() { return static_cast<int32_t>(offsetof(GraphMeta_t2836493941, ___graphs_1)); }
	inline int32_t get_graphs_1() const { return ___graphs_1; }
	inline int32_t* get_address_of_graphs_1() { return &___graphs_1; }
	inline void set_graphs_1(int32_t value)
	{
		___graphs_1 = value;
	}

	inline static int32_t get_offset_of_guids_2() { return static_cast<int32_t>(offsetof(GraphMeta_t2836493941, ___guids_2)); }
	inline StringU5BU5D_t2956870243* get_guids_2() const { return ___guids_2; }
	inline StringU5BU5D_t2956870243** get_address_of_guids_2() { return &___guids_2; }
	inline void set_guids_2(StringU5BU5D_t2956870243* value)
	{
		___guids_2 = value;
		Il2CppCodeGenWriteBarrier(&___guids_2, value);
	}

	inline static int32_t get_offset_of_typeNames_3() { return static_cast<int32_t>(offsetof(GraphMeta_t2836493941, ___typeNames_3)); }
	inline StringU5BU5D_t2956870243* get_typeNames_3() const { return ___typeNames_3; }
	inline StringU5BU5D_t2956870243** get_address_of_typeNames_3() { return &___typeNames_3; }
	inline void set_typeNames_3(StringU5BU5D_t2956870243* value)
	{
		___typeNames_3 = value;
		Il2CppCodeGenWriteBarrier(&___typeNames_3, value);
	}

	inline static int32_t get_offset_of_nodeCounts_4() { return static_cast<int32_t>(offsetof(GraphMeta_t2836493941, ___nodeCounts_4)); }
	inline Int32U5BU5D_t1809983122* get_nodeCounts_4() const { return ___nodeCounts_4; }
	inline Int32U5BU5D_t1809983122** get_address_of_nodeCounts_4() { return &___nodeCounts_4; }
	inline void set_nodeCounts_4(Int32U5BU5D_t1809983122* value)
	{
		___nodeCounts_4 = value;
		Il2CppCodeGenWriteBarrier(&___nodeCounts_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
