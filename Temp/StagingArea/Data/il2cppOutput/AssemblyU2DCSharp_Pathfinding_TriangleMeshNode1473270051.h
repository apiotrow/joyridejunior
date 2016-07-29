#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.INavmeshHolder[]
struct INavmeshHolderU5BU5D_t496010950;

#include "AssemblyU2DCSharp_Pathfinding_MeshNode2286717691.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.TriangleMeshNode
struct  TriangleMeshNode_t1473270051  : public MeshNode_t2286717691
{
public:
	// System.Int32 Pathfinding.TriangleMeshNode::v0
	int32_t ___v0_16;
	// System.Int32 Pathfinding.TriangleMeshNode::v1
	int32_t ___v1_17;
	// System.Int32 Pathfinding.TriangleMeshNode::v2
	int32_t ___v2_18;

public:
	inline static int32_t get_offset_of_v0_16() { return static_cast<int32_t>(offsetof(TriangleMeshNode_t1473270051, ___v0_16)); }
	inline int32_t get_v0_16() const { return ___v0_16; }
	inline int32_t* get_address_of_v0_16() { return &___v0_16; }
	inline void set_v0_16(int32_t value)
	{
		___v0_16 = value;
	}

	inline static int32_t get_offset_of_v1_17() { return static_cast<int32_t>(offsetof(TriangleMeshNode_t1473270051, ___v1_17)); }
	inline int32_t get_v1_17() const { return ___v1_17; }
	inline int32_t* get_address_of_v1_17() { return &___v1_17; }
	inline void set_v1_17(int32_t value)
	{
		___v1_17 = value;
	}

	inline static int32_t get_offset_of_v2_18() { return static_cast<int32_t>(offsetof(TriangleMeshNode_t1473270051, ___v2_18)); }
	inline int32_t get_v2_18() const { return ___v2_18; }
	inline int32_t* get_address_of_v2_18() { return &___v2_18; }
	inline void set_v2_18(int32_t value)
	{
		___v2_18 = value;
	}
};

struct TriangleMeshNode_t1473270051_StaticFields
{
public:
	// Pathfinding.INavmeshHolder[] Pathfinding.TriangleMeshNode::_navmeshHolders
	INavmeshHolderU5BU5D_t496010950* ____navmeshHolders_19;

public:
	inline static int32_t get_offset_of__navmeshHolders_19() { return static_cast<int32_t>(offsetof(TriangleMeshNode_t1473270051_StaticFields, ____navmeshHolders_19)); }
	inline INavmeshHolderU5BU5D_t496010950* get__navmeshHolders_19() const { return ____navmeshHolders_19; }
	inline INavmeshHolderU5BU5D_t496010950** get_address_of__navmeshHolders_19() { return &____navmeshHolders_19; }
	inline void set__navmeshHolders_19(INavmeshHolderU5BU5D_t496010950* value)
	{
		____navmeshHolders_19 = value;
		Il2CppCodeGenWriteBarrier(&____navmeshHolders_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
