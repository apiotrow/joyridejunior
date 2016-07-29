#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink2>
struct Dictionary_2_t2190956356;
// UnityEngine.Transform
struct Transform_t284553113;
// Pathfinding.PointNode
struct PointNode_t1968241886;
// Pathfinding.MeshNode
struct MeshNode_t2286717691;

#include "AssemblyU2DCSharp_Pathfinding_GraphModifier2580797297.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.NodeLink2
struct  NodeLink2_t851832770  : public GraphModifier_t2580797297
{
public:
	// UnityEngine.Transform Pathfinding.NodeLink2::end
	Transform_t284553113 * ___end_6;
	// System.Single Pathfinding.NodeLink2::costFactor
	float ___costFactor_7;
	// System.Boolean Pathfinding.NodeLink2::oneWay
	bool ___oneWay_8;
	// Pathfinding.PointNode Pathfinding.NodeLink2::startNode
	PointNode_t1968241886 * ___startNode_9;
	// Pathfinding.PointNode Pathfinding.NodeLink2::endNode
	PointNode_t1968241886 * ___endNode_10;
	// Pathfinding.MeshNode Pathfinding.NodeLink2::connectedNode1
	MeshNode_t2286717691 * ___connectedNode1_11;
	// Pathfinding.MeshNode Pathfinding.NodeLink2::connectedNode2
	MeshNode_t2286717691 * ___connectedNode2_12;
	// UnityEngine.Vector3 Pathfinding.NodeLink2::clamped1
	Vector3_t3525329789  ___clamped1_13;
	// UnityEngine.Vector3 Pathfinding.NodeLink2::clamped2
	Vector3_t3525329789  ___clamped2_14;
	// System.Boolean Pathfinding.NodeLink2::postScanCalled
	bool ___postScanCalled_15;

public:
	inline static int32_t get_offset_of_end_6() { return static_cast<int32_t>(offsetof(NodeLink2_t851832770, ___end_6)); }
	inline Transform_t284553113 * get_end_6() const { return ___end_6; }
	inline Transform_t284553113 ** get_address_of_end_6() { return &___end_6; }
	inline void set_end_6(Transform_t284553113 * value)
	{
		___end_6 = value;
		Il2CppCodeGenWriteBarrier(&___end_6, value);
	}

	inline static int32_t get_offset_of_costFactor_7() { return static_cast<int32_t>(offsetof(NodeLink2_t851832770, ___costFactor_7)); }
	inline float get_costFactor_7() const { return ___costFactor_7; }
	inline float* get_address_of_costFactor_7() { return &___costFactor_7; }
	inline void set_costFactor_7(float value)
	{
		___costFactor_7 = value;
	}

	inline static int32_t get_offset_of_oneWay_8() { return static_cast<int32_t>(offsetof(NodeLink2_t851832770, ___oneWay_8)); }
	inline bool get_oneWay_8() const { return ___oneWay_8; }
	inline bool* get_address_of_oneWay_8() { return &___oneWay_8; }
	inline void set_oneWay_8(bool value)
	{
		___oneWay_8 = value;
	}

	inline static int32_t get_offset_of_startNode_9() { return static_cast<int32_t>(offsetof(NodeLink2_t851832770, ___startNode_9)); }
	inline PointNode_t1968241886 * get_startNode_9() const { return ___startNode_9; }
	inline PointNode_t1968241886 ** get_address_of_startNode_9() { return &___startNode_9; }
	inline void set_startNode_9(PointNode_t1968241886 * value)
	{
		___startNode_9 = value;
		Il2CppCodeGenWriteBarrier(&___startNode_9, value);
	}

	inline static int32_t get_offset_of_endNode_10() { return static_cast<int32_t>(offsetof(NodeLink2_t851832770, ___endNode_10)); }
	inline PointNode_t1968241886 * get_endNode_10() const { return ___endNode_10; }
	inline PointNode_t1968241886 ** get_address_of_endNode_10() { return &___endNode_10; }
	inline void set_endNode_10(PointNode_t1968241886 * value)
	{
		___endNode_10 = value;
		Il2CppCodeGenWriteBarrier(&___endNode_10, value);
	}

	inline static int32_t get_offset_of_connectedNode1_11() { return static_cast<int32_t>(offsetof(NodeLink2_t851832770, ___connectedNode1_11)); }
	inline MeshNode_t2286717691 * get_connectedNode1_11() const { return ___connectedNode1_11; }
	inline MeshNode_t2286717691 ** get_address_of_connectedNode1_11() { return &___connectedNode1_11; }
	inline void set_connectedNode1_11(MeshNode_t2286717691 * value)
	{
		___connectedNode1_11 = value;
		Il2CppCodeGenWriteBarrier(&___connectedNode1_11, value);
	}

	inline static int32_t get_offset_of_connectedNode2_12() { return static_cast<int32_t>(offsetof(NodeLink2_t851832770, ___connectedNode2_12)); }
	inline MeshNode_t2286717691 * get_connectedNode2_12() const { return ___connectedNode2_12; }
	inline MeshNode_t2286717691 ** get_address_of_connectedNode2_12() { return &___connectedNode2_12; }
	inline void set_connectedNode2_12(MeshNode_t2286717691 * value)
	{
		___connectedNode2_12 = value;
		Il2CppCodeGenWriteBarrier(&___connectedNode2_12, value);
	}

	inline static int32_t get_offset_of_clamped1_13() { return static_cast<int32_t>(offsetof(NodeLink2_t851832770, ___clamped1_13)); }
	inline Vector3_t3525329789  get_clamped1_13() const { return ___clamped1_13; }
	inline Vector3_t3525329789 * get_address_of_clamped1_13() { return &___clamped1_13; }
	inline void set_clamped1_13(Vector3_t3525329789  value)
	{
		___clamped1_13 = value;
	}

	inline static int32_t get_offset_of_clamped2_14() { return static_cast<int32_t>(offsetof(NodeLink2_t851832770, ___clamped2_14)); }
	inline Vector3_t3525329789  get_clamped2_14() const { return ___clamped2_14; }
	inline Vector3_t3525329789 * get_address_of_clamped2_14() { return &___clamped2_14; }
	inline void set_clamped2_14(Vector3_t3525329789  value)
	{
		___clamped2_14 = value;
	}

	inline static int32_t get_offset_of_postScanCalled_15() { return static_cast<int32_t>(offsetof(NodeLink2_t851832770, ___postScanCalled_15)); }
	inline bool get_postScanCalled_15() const { return ___postScanCalled_15; }
	inline bool* get_address_of_postScanCalled_15() { return &___postScanCalled_15; }
	inline void set_postScanCalled_15(bool value)
	{
		___postScanCalled_15 = value;
	}
};

struct NodeLink2_t851832770_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink2> Pathfinding.NodeLink2::reference
	Dictionary_2_t2190956356 * ___reference_5;
	// UnityEngine.Color Pathfinding.NodeLink2::GizmosColor
	Color_t1588175760  ___GizmosColor_16;
	// UnityEngine.Color Pathfinding.NodeLink2::GizmosColorSelected
	Color_t1588175760  ___GizmosColorSelected_17;

public:
	inline static int32_t get_offset_of_reference_5() { return static_cast<int32_t>(offsetof(NodeLink2_t851832770_StaticFields, ___reference_5)); }
	inline Dictionary_2_t2190956356 * get_reference_5() const { return ___reference_5; }
	inline Dictionary_2_t2190956356 ** get_address_of_reference_5() { return &___reference_5; }
	inline void set_reference_5(Dictionary_2_t2190956356 * value)
	{
		___reference_5 = value;
		Il2CppCodeGenWriteBarrier(&___reference_5, value);
	}

	inline static int32_t get_offset_of_GizmosColor_16() { return static_cast<int32_t>(offsetof(NodeLink2_t851832770_StaticFields, ___GizmosColor_16)); }
	inline Color_t1588175760  get_GizmosColor_16() const { return ___GizmosColor_16; }
	inline Color_t1588175760 * get_address_of_GizmosColor_16() { return &___GizmosColor_16; }
	inline void set_GizmosColor_16(Color_t1588175760  value)
	{
		___GizmosColor_16 = value;
	}

	inline static int32_t get_offset_of_GizmosColorSelected_17() { return static_cast<int32_t>(offsetof(NodeLink2_t851832770_StaticFields, ___GizmosColorSelected_17)); }
	inline Color_t1588175760  get_GizmosColorSelected_17() const { return ___GizmosColorSelected_17; }
	inline Color_t1588175760 * get_address_of_GizmosColorSelected_17() { return &___GizmosColorSelected_17; }
	inline void set_GizmosColorSelected_17(Color_t1588175760  value)
	{
		___GizmosColorSelected_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
