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

// Pathfinding.RaycastModifier
struct RaycastModifier_t3915735436;
// Pathfinding.Path
struct Path_t2697364881;
// Pathfinding.GraphNode
struct GraphNode_t3525007772;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_Path2697364881.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void Pathfinding.RaycastModifier::.ctor()
extern "C"  void RaycastModifier__ctor_m3528481333 (RaycastModifier_t3915735436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.RaycastModifier::get_Order()
extern "C"  int32_t RaycastModifier_get_Order_m3500219974 (RaycastModifier_t3915735436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.RaycastModifier::Apply(Pathfinding.Path)
extern "C"  void RaycastModifier_Apply_m2342165714 (RaycastModifier_t3915735436 * __this, Path_t2697364881 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.RaycastModifier::ValidateLine(Pathfinding.GraphNode,Pathfinding.GraphNode,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool RaycastModifier_ValidateLine_m1520948915 (RaycastModifier_t3915735436 * __this, GraphNode_t3525007772 * ___n10, GraphNode_t3525007772 * ___n21, Vector3_t3525329789  ___v12, Vector3_t3525329789  ___v23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
