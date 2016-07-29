#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.NodeLink3
struct NodeLink3_t851832771;

#include "AssemblyU2DCSharp_Pathfinding_PointNode1968241886.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.NodeLink3Node
struct  NodeLink3Node_t1090977381  : public PointNode_t1968241886
{
public:
	// Pathfinding.NodeLink3 Pathfinding.NodeLink3Node::link
	NodeLink3_t851832771 * ___link_18;
	// UnityEngine.Vector3 Pathfinding.NodeLink3Node::portalA
	Vector3_t3525329789  ___portalA_19;
	// UnityEngine.Vector3 Pathfinding.NodeLink3Node::portalB
	Vector3_t3525329789  ___portalB_20;

public:
	inline static int32_t get_offset_of_link_18() { return static_cast<int32_t>(offsetof(NodeLink3Node_t1090977381, ___link_18)); }
	inline NodeLink3_t851832771 * get_link_18() const { return ___link_18; }
	inline NodeLink3_t851832771 ** get_address_of_link_18() { return &___link_18; }
	inline void set_link_18(NodeLink3_t851832771 * value)
	{
		___link_18 = value;
		Il2CppCodeGenWriteBarrier(&___link_18, value);
	}

	inline static int32_t get_offset_of_portalA_19() { return static_cast<int32_t>(offsetof(NodeLink3Node_t1090977381, ___portalA_19)); }
	inline Vector3_t3525329789  get_portalA_19() const { return ___portalA_19; }
	inline Vector3_t3525329789 * get_address_of_portalA_19() { return &___portalA_19; }
	inline void set_portalA_19(Vector3_t3525329789  value)
	{
		___portalA_19 = value;
	}

	inline static int32_t get_offset_of_portalB_20() { return static_cast<int32_t>(offsetof(NodeLink3Node_t1090977381, ___portalB_20)); }
	inline Vector3_t3525329789  get_portalB_20() const { return ___portalB_20; }
	inline Vector3_t3525329789 * get_address_of_portalB_20() { return &___portalB_20; }
	inline void set_portalB_20(Vector3_t3525329789  value)
	{
		___portalB_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
