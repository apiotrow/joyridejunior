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
// System.Collections.Generic.List`1<Pathfinding.GraphNode>
struct List_1_t26999445;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphUpdateObject4278438658.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"

// System.Boolean Pathfinding.GraphUpdateUtilities::UpdateGraphsNoBlock(Pathfinding.GraphUpdateObject,Pathfinding.GraphNode,Pathfinding.GraphNode,System.Boolean)
extern "C"  bool GraphUpdateUtilities_UpdateGraphsNoBlock_m2857058481 (Il2CppObject * __this /* static, unused */, GraphUpdateObject_t4278438658 * ___guo0, GraphNode_t3525007772 * ___node11, GraphNode_t3525007772 * ___node22, bool ___alwaysRevert3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GraphUpdateUtilities::UpdateGraphsNoBlock(Pathfinding.GraphUpdateObject,System.Collections.Generic.List`1<Pathfinding.GraphNode>,System.Boolean)
extern "C"  bool GraphUpdateUtilities_UpdateGraphsNoBlock_m2666730733 (Il2CppObject * __this /* static, unused */, GraphUpdateObject_t4278438658 * ___guo0, List_1_t26999445 * ___nodes1, bool ___alwaysRevert2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
