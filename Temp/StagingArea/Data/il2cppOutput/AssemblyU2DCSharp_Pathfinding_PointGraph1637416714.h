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
// System.String
struct String_t;
// Pathfinding.PointNode[]
struct PointNodeU5BU5D_t3575172587;

#include "AssemblyU2DCSharp_Pathfinding_NavGraph535983959.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.PointGraph
struct  PointGraph_t1637416714  : public NavGraph_t535983959
{
public:
	// UnityEngine.Transform Pathfinding.PointGraph::root
	Transform_t284553113 * ___root_11;
	// System.String Pathfinding.PointGraph::searchTag
	String_t* ___searchTag_12;
	// System.Single Pathfinding.PointGraph::maxDistance
	float ___maxDistance_13;
	// UnityEngine.Vector3 Pathfinding.PointGraph::limits
	Vector3_t3525329789  ___limits_14;
	// System.Boolean Pathfinding.PointGraph::raycast
	bool ___raycast_15;
	// System.Boolean Pathfinding.PointGraph::use2DPhysics
	bool ___use2DPhysics_16;
	// System.Boolean Pathfinding.PointGraph::thickRaycast
	bool ___thickRaycast_17;
	// System.Single Pathfinding.PointGraph::thickRaycastRadius
	float ___thickRaycastRadius_18;
	// System.Boolean Pathfinding.PointGraph::recursive
	bool ___recursive_19;
	// System.Boolean Pathfinding.PointGraph::autoLinkNodes
	bool ___autoLinkNodes_20;
	// UnityEngine.LayerMask Pathfinding.PointGraph::mask
	LayerMask_t1862190090  ___mask_21;
	// Pathfinding.PointNode[] Pathfinding.PointGraph::nodes
	PointNodeU5BU5D_t3575172587* ___nodes_22;
	// System.Int32 Pathfinding.PointGraph::nodeCount
	int32_t ___nodeCount_23;

public:
	inline static int32_t get_offset_of_root_11() { return static_cast<int32_t>(offsetof(PointGraph_t1637416714, ___root_11)); }
	inline Transform_t284553113 * get_root_11() const { return ___root_11; }
	inline Transform_t284553113 ** get_address_of_root_11() { return &___root_11; }
	inline void set_root_11(Transform_t284553113 * value)
	{
		___root_11 = value;
		Il2CppCodeGenWriteBarrier(&___root_11, value);
	}

	inline static int32_t get_offset_of_searchTag_12() { return static_cast<int32_t>(offsetof(PointGraph_t1637416714, ___searchTag_12)); }
	inline String_t* get_searchTag_12() const { return ___searchTag_12; }
	inline String_t** get_address_of_searchTag_12() { return &___searchTag_12; }
	inline void set_searchTag_12(String_t* value)
	{
		___searchTag_12 = value;
		Il2CppCodeGenWriteBarrier(&___searchTag_12, value);
	}

	inline static int32_t get_offset_of_maxDistance_13() { return static_cast<int32_t>(offsetof(PointGraph_t1637416714, ___maxDistance_13)); }
	inline float get_maxDistance_13() const { return ___maxDistance_13; }
	inline float* get_address_of_maxDistance_13() { return &___maxDistance_13; }
	inline void set_maxDistance_13(float value)
	{
		___maxDistance_13 = value;
	}

	inline static int32_t get_offset_of_limits_14() { return static_cast<int32_t>(offsetof(PointGraph_t1637416714, ___limits_14)); }
	inline Vector3_t3525329789  get_limits_14() const { return ___limits_14; }
	inline Vector3_t3525329789 * get_address_of_limits_14() { return &___limits_14; }
	inline void set_limits_14(Vector3_t3525329789  value)
	{
		___limits_14 = value;
	}

	inline static int32_t get_offset_of_raycast_15() { return static_cast<int32_t>(offsetof(PointGraph_t1637416714, ___raycast_15)); }
	inline bool get_raycast_15() const { return ___raycast_15; }
	inline bool* get_address_of_raycast_15() { return &___raycast_15; }
	inline void set_raycast_15(bool value)
	{
		___raycast_15 = value;
	}

	inline static int32_t get_offset_of_use2DPhysics_16() { return static_cast<int32_t>(offsetof(PointGraph_t1637416714, ___use2DPhysics_16)); }
	inline bool get_use2DPhysics_16() const { return ___use2DPhysics_16; }
	inline bool* get_address_of_use2DPhysics_16() { return &___use2DPhysics_16; }
	inline void set_use2DPhysics_16(bool value)
	{
		___use2DPhysics_16 = value;
	}

	inline static int32_t get_offset_of_thickRaycast_17() { return static_cast<int32_t>(offsetof(PointGraph_t1637416714, ___thickRaycast_17)); }
	inline bool get_thickRaycast_17() const { return ___thickRaycast_17; }
	inline bool* get_address_of_thickRaycast_17() { return &___thickRaycast_17; }
	inline void set_thickRaycast_17(bool value)
	{
		___thickRaycast_17 = value;
	}

	inline static int32_t get_offset_of_thickRaycastRadius_18() { return static_cast<int32_t>(offsetof(PointGraph_t1637416714, ___thickRaycastRadius_18)); }
	inline float get_thickRaycastRadius_18() const { return ___thickRaycastRadius_18; }
	inline float* get_address_of_thickRaycastRadius_18() { return &___thickRaycastRadius_18; }
	inline void set_thickRaycastRadius_18(float value)
	{
		___thickRaycastRadius_18 = value;
	}

	inline static int32_t get_offset_of_recursive_19() { return static_cast<int32_t>(offsetof(PointGraph_t1637416714, ___recursive_19)); }
	inline bool get_recursive_19() const { return ___recursive_19; }
	inline bool* get_address_of_recursive_19() { return &___recursive_19; }
	inline void set_recursive_19(bool value)
	{
		___recursive_19 = value;
	}

	inline static int32_t get_offset_of_autoLinkNodes_20() { return static_cast<int32_t>(offsetof(PointGraph_t1637416714, ___autoLinkNodes_20)); }
	inline bool get_autoLinkNodes_20() const { return ___autoLinkNodes_20; }
	inline bool* get_address_of_autoLinkNodes_20() { return &___autoLinkNodes_20; }
	inline void set_autoLinkNodes_20(bool value)
	{
		___autoLinkNodes_20 = value;
	}

	inline static int32_t get_offset_of_mask_21() { return static_cast<int32_t>(offsetof(PointGraph_t1637416714, ___mask_21)); }
	inline LayerMask_t1862190090  get_mask_21() const { return ___mask_21; }
	inline LayerMask_t1862190090 * get_address_of_mask_21() { return &___mask_21; }
	inline void set_mask_21(LayerMask_t1862190090  value)
	{
		___mask_21 = value;
	}

	inline static int32_t get_offset_of_nodes_22() { return static_cast<int32_t>(offsetof(PointGraph_t1637416714, ___nodes_22)); }
	inline PointNodeU5BU5D_t3575172587* get_nodes_22() const { return ___nodes_22; }
	inline PointNodeU5BU5D_t3575172587** get_address_of_nodes_22() { return &___nodes_22; }
	inline void set_nodes_22(PointNodeU5BU5D_t3575172587* value)
	{
		___nodes_22 = value;
		Il2CppCodeGenWriteBarrier(&___nodes_22, value);
	}

	inline static int32_t get_offset_of_nodeCount_23() { return static_cast<int32_t>(offsetof(PointGraph_t1637416714, ___nodeCount_23)); }
	inline int32_t get_nodeCount_23() const { return ___nodeCount_23; }
	inline int32_t* get_address_of_nodeCount_23() { return &___nodeCount_23; }
	inline void set_nodeCount_23(int32_t value)
	{
		___nodeCount_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
