#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Mesh
struct Mesh_t1525280346;
// Pathfinding.TriangleMeshNode[]
struct TriangleMeshNodeU5BU5D_t45846258;
// Pathfinding.BBTree
struct BBTree_t353008970;
// Pathfinding.Int3[]
struct Int3U5BU5D_t1705908273;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "AssemblyU2DCSharp_Pathfinding_NavGraph535983959.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.NavMeshGraph
struct  NavMeshGraph_t179402474  : public NavGraph_t535983959
{
public:
	// UnityEngine.Mesh Pathfinding.NavMeshGraph::sourceMesh
	Mesh_t1525280346 * ___sourceMesh_11;
	// UnityEngine.Vector3 Pathfinding.NavMeshGraph::offset
	Vector3_t3525329789  ___offset_12;
	// UnityEngine.Vector3 Pathfinding.NavMeshGraph::rotation
	Vector3_t3525329789  ___rotation_13;
	// System.Single Pathfinding.NavMeshGraph::scale
	float ___scale_14;
	// System.Boolean Pathfinding.NavMeshGraph::accurateNearestNode
	bool ___accurateNearestNode_15;
	// Pathfinding.TriangleMeshNode[] Pathfinding.NavMeshGraph::nodes
	TriangleMeshNodeU5BU5D_t45846258* ___nodes_16;
	// Pathfinding.BBTree Pathfinding.NavMeshGraph::_bbTree
	BBTree_t353008970 * ____bbTree_17;
	// Pathfinding.Int3[] Pathfinding.NavMeshGraph::_vertices
	Int3U5BU5D_t1705908273* ____vertices_18;
	// UnityEngine.Vector3[] Pathfinding.NavMeshGraph::originalVertices
	Vector3U5BU5D_t3227571696* ___originalVertices_19;
	// System.Int32[] Pathfinding.NavMeshGraph::triangles
	Int32U5BU5D_t1809983122* ___triangles_20;

public:
	inline static int32_t get_offset_of_sourceMesh_11() { return static_cast<int32_t>(offsetof(NavMeshGraph_t179402474, ___sourceMesh_11)); }
	inline Mesh_t1525280346 * get_sourceMesh_11() const { return ___sourceMesh_11; }
	inline Mesh_t1525280346 ** get_address_of_sourceMesh_11() { return &___sourceMesh_11; }
	inline void set_sourceMesh_11(Mesh_t1525280346 * value)
	{
		___sourceMesh_11 = value;
		Il2CppCodeGenWriteBarrier(&___sourceMesh_11, value);
	}

	inline static int32_t get_offset_of_offset_12() { return static_cast<int32_t>(offsetof(NavMeshGraph_t179402474, ___offset_12)); }
	inline Vector3_t3525329789  get_offset_12() const { return ___offset_12; }
	inline Vector3_t3525329789 * get_address_of_offset_12() { return &___offset_12; }
	inline void set_offset_12(Vector3_t3525329789  value)
	{
		___offset_12 = value;
	}

	inline static int32_t get_offset_of_rotation_13() { return static_cast<int32_t>(offsetof(NavMeshGraph_t179402474, ___rotation_13)); }
	inline Vector3_t3525329789  get_rotation_13() const { return ___rotation_13; }
	inline Vector3_t3525329789 * get_address_of_rotation_13() { return &___rotation_13; }
	inline void set_rotation_13(Vector3_t3525329789  value)
	{
		___rotation_13 = value;
	}

	inline static int32_t get_offset_of_scale_14() { return static_cast<int32_t>(offsetof(NavMeshGraph_t179402474, ___scale_14)); }
	inline float get_scale_14() const { return ___scale_14; }
	inline float* get_address_of_scale_14() { return &___scale_14; }
	inline void set_scale_14(float value)
	{
		___scale_14 = value;
	}

	inline static int32_t get_offset_of_accurateNearestNode_15() { return static_cast<int32_t>(offsetof(NavMeshGraph_t179402474, ___accurateNearestNode_15)); }
	inline bool get_accurateNearestNode_15() const { return ___accurateNearestNode_15; }
	inline bool* get_address_of_accurateNearestNode_15() { return &___accurateNearestNode_15; }
	inline void set_accurateNearestNode_15(bool value)
	{
		___accurateNearestNode_15 = value;
	}

	inline static int32_t get_offset_of_nodes_16() { return static_cast<int32_t>(offsetof(NavMeshGraph_t179402474, ___nodes_16)); }
	inline TriangleMeshNodeU5BU5D_t45846258* get_nodes_16() const { return ___nodes_16; }
	inline TriangleMeshNodeU5BU5D_t45846258** get_address_of_nodes_16() { return &___nodes_16; }
	inline void set_nodes_16(TriangleMeshNodeU5BU5D_t45846258* value)
	{
		___nodes_16 = value;
		Il2CppCodeGenWriteBarrier(&___nodes_16, value);
	}

	inline static int32_t get_offset_of__bbTree_17() { return static_cast<int32_t>(offsetof(NavMeshGraph_t179402474, ____bbTree_17)); }
	inline BBTree_t353008970 * get__bbTree_17() const { return ____bbTree_17; }
	inline BBTree_t353008970 ** get_address_of__bbTree_17() { return &____bbTree_17; }
	inline void set__bbTree_17(BBTree_t353008970 * value)
	{
		____bbTree_17 = value;
		Il2CppCodeGenWriteBarrier(&____bbTree_17, value);
	}

	inline static int32_t get_offset_of__vertices_18() { return static_cast<int32_t>(offsetof(NavMeshGraph_t179402474, ____vertices_18)); }
	inline Int3U5BU5D_t1705908273* get__vertices_18() const { return ____vertices_18; }
	inline Int3U5BU5D_t1705908273** get_address_of__vertices_18() { return &____vertices_18; }
	inline void set__vertices_18(Int3U5BU5D_t1705908273* value)
	{
		____vertices_18 = value;
		Il2CppCodeGenWriteBarrier(&____vertices_18, value);
	}

	inline static int32_t get_offset_of_originalVertices_19() { return static_cast<int32_t>(offsetof(NavMeshGraph_t179402474, ___originalVertices_19)); }
	inline Vector3U5BU5D_t3227571696* get_originalVertices_19() const { return ___originalVertices_19; }
	inline Vector3U5BU5D_t3227571696** get_address_of_originalVertices_19() { return &___originalVertices_19; }
	inline void set_originalVertices_19(Vector3U5BU5D_t3227571696* value)
	{
		___originalVertices_19 = value;
		Il2CppCodeGenWriteBarrier(&___originalVertices_19, value);
	}

	inline static int32_t get_offset_of_triangles_20() { return static_cast<int32_t>(offsetof(NavMeshGraph_t179402474, ___triangles_20)); }
	inline Int32U5BU5D_t1809983122* get_triangles_20() const { return ___triangles_20; }
	inline Int32U5BU5D_t1809983122** get_address_of_triangles_20() { return &___triangles_20; }
	inline void set_triangles_20(Int32U5BU5D_t1809983122* value)
	{
		___triangles_20 = value;
		Il2CppCodeGenWriteBarrier(&___triangles_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
