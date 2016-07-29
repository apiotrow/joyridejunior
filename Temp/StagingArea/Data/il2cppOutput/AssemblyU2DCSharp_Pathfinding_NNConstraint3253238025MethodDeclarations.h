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

// Pathfinding.NNConstraint
struct NNConstraint_t3253238025;
// Pathfinding.NavGraph
struct NavGraph_t535983959;
// Pathfinding.GraphNode
struct GraphNode_t3525007772;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_NavGraph535983959.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"

// System.Void Pathfinding.NNConstraint::.ctor()
extern "C"  void NNConstraint__ctor_m1071380660 (NNConstraint_t3253238025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.NNConstraint::SuitableGraph(System.Int32,Pathfinding.NavGraph)
extern "C"  bool NNConstraint_SuitableGraph_m4214080251 (NNConstraint_t3253238025 * __this, int32_t ___graphIndex0, NavGraph_t535983959 * ___graph1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.NNConstraint::Suitable(Pathfinding.GraphNode)
extern "C"  bool NNConstraint_Suitable_m545515617 (NNConstraint_t3253238025 * __this, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNConstraint Pathfinding.NNConstraint::get_Default()
extern "C"  NNConstraint_t3253238025 * NNConstraint_get_Default_m1268642516 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNConstraint Pathfinding.NNConstraint::get_None()
extern "C"  NNConstraint_t3253238025 * NNConstraint_get_None_m1393230759 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
