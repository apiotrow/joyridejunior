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

#include "AssemblyU2DCSharp_Pathfinding_GraphModifier2580797297.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.NodeLink
struct  NodeLink_t3882357384  : public GraphModifier_t2580797297
{
public:
	// UnityEngine.Transform Pathfinding.NodeLink::end
	Transform_t284553113 * ___end_5;
	// System.Single Pathfinding.NodeLink::costFactor
	float ___costFactor_6;
	// System.Boolean Pathfinding.NodeLink::oneWay
	bool ___oneWay_7;
	// System.Boolean Pathfinding.NodeLink::deleteConnection
	bool ___deleteConnection_8;

public:
	inline static int32_t get_offset_of_end_5() { return static_cast<int32_t>(offsetof(NodeLink_t3882357384, ___end_5)); }
	inline Transform_t284553113 * get_end_5() const { return ___end_5; }
	inline Transform_t284553113 ** get_address_of_end_5() { return &___end_5; }
	inline void set_end_5(Transform_t284553113 * value)
	{
		___end_5 = value;
		Il2CppCodeGenWriteBarrier(&___end_5, value);
	}

	inline static int32_t get_offset_of_costFactor_6() { return static_cast<int32_t>(offsetof(NodeLink_t3882357384, ___costFactor_6)); }
	inline float get_costFactor_6() const { return ___costFactor_6; }
	inline float* get_address_of_costFactor_6() { return &___costFactor_6; }
	inline void set_costFactor_6(float value)
	{
		___costFactor_6 = value;
	}

	inline static int32_t get_offset_of_oneWay_7() { return static_cast<int32_t>(offsetof(NodeLink_t3882357384, ___oneWay_7)); }
	inline bool get_oneWay_7() const { return ___oneWay_7; }
	inline bool* get_address_of_oneWay_7() { return &___oneWay_7; }
	inline void set_oneWay_7(bool value)
	{
		___oneWay_7 = value;
	}

	inline static int32_t get_offset_of_deleteConnection_8() { return static_cast<int32_t>(offsetof(NodeLink_t3882357384, ___deleteConnection_8)); }
	inline bool get_deleteConnection_8() const { return ___deleteConnection_8; }
	inline bool* get_address_of_deleteConnection_8() { return &___deleteConnection_8; }
	inline void set_deleteConnection_8(bool value)
	{
		___deleteConnection_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
