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

// Pathfinding.GraphUpdateObject
struct GraphUpdateObject_t4278438658;
// Pathfinding.GraphNode
struct GraphNode_t3525007772;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Bounds3518514978.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"

// System.Void Pathfinding.GraphUpdateObject::.ctor()
extern "C"  void GraphUpdateObject__ctor_m632979711 (GraphUpdateObject_t4278438658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphUpdateObject::.ctor(UnityEngine.Bounds)
extern "C"  void GraphUpdateObject__ctor_m2634846803 (GraphUpdateObject_t4278438658 * __this, Bounds_t3518514978  ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphUpdateObject::WillUpdateNode(Pathfinding.GraphNode)
extern "C"  void GraphUpdateObject_WillUpdateNode_m2326194218 (GraphUpdateObject_t4278438658 * __this, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphUpdateObject::RevertFromBackup()
extern "C"  void GraphUpdateObject_RevertFromBackup_m1883201909 (GraphUpdateObject_t4278438658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphUpdateObject::Apply(Pathfinding.GraphNode)
extern "C"  void GraphUpdateObject_Apply_m3028405697 (GraphUpdateObject_t4278438658 * __this, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
