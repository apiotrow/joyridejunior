#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Pathfinding.GraphUpdateShape
struct GraphUpdateShape_t2195642262;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// Pathfinding.GraphNode
struct GraphNode_t3525007772;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Bounds3518514978.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void Pathfinding.GraphUpdateShape::.ctor()
extern "C"  void GraphUpdateShape__ctor_m803885511 (GraphUpdateShape_t2195642262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] Pathfinding.GraphUpdateShape::get_points()
extern "C"  Vector3U5BU5D_t3227571696* GraphUpdateShape_get_points_m1312440385 (GraphUpdateShape_t2195642262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphUpdateShape::set_points(UnityEngine.Vector3[])
extern "C"  void GraphUpdateShape_set_points_m2441215994 (GraphUpdateShape_t2195642262 * __this, Vector3U5BU5D_t3227571696* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GraphUpdateShape::get_convex()
extern "C"  bool GraphUpdateShape_get_convex_m3523542817 (GraphUpdateShape_t2195642262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphUpdateShape::set_convex(System.Boolean)
extern "C"  void GraphUpdateShape_set_convex_m1720961432 (GraphUpdateShape_t2195642262 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphUpdateShape::CalculateConvexHull()
extern "C"  void GraphUpdateShape_CalculateConvexHull_m195564607 (GraphUpdateShape_t2195642262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds Pathfinding.GraphUpdateShape::GetBounds()
extern "C"  Bounds_t3518514978  GraphUpdateShape_GetBounds_m1384958367 (GraphUpdateShape_t2195642262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GraphUpdateShape::Contains(Pathfinding.GraphNode)
extern "C"  bool GraphUpdateShape_Contains_m2957299516 (GraphUpdateShape_t2195642262 * __this, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GraphUpdateShape::Contains(UnityEngine.Vector3)
extern "C"  bool GraphUpdateShape_Contains_m962495529 (GraphUpdateShape_t2195642262 * __this, Vector3_t3525329789  ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
