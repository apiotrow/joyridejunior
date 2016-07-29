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

// Pathfinding.StartEndModifier
struct StartEndModifier_t2773583996;
// Pathfinding.Path
struct Path_t2697364881;
// Pathfinding.ABPath
struct ABPath_t324244786;
// Pathfinding.GraphNode
struct GraphNode_t3525007772;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_Path2697364881.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_Pathfinding_ABPath324244786.h"
#include "AssemblyU2DCSharp_Pathfinding_StartEndModifier_Exa1656839606.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"

// System.Void Pathfinding.StartEndModifier::.ctor()
extern "C"  void StartEndModifier__ctor_m2776187809 (StartEndModifier_t2773583996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.StartEndModifier::get_Order()
extern "C"  int32_t StartEndModifier_get_Order_m3919051606 (StartEndModifier_t2773583996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.StartEndModifier::Apply(Pathfinding.Path)
extern "C"  void StartEndModifier_Apply_m2977639998 (StartEndModifier_t2773583996 * __this, Path_t2697364881 * ____p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.StartEndModifier::Snap(Pathfinding.ABPath,Pathfinding.StartEndModifier/Exactness,System.Boolean,System.Boolean&)
extern "C"  Vector3_t3525329789  StartEndModifier_Snap_m4111022878 (StartEndModifier_t2773583996 * __this, ABPath_t324244786 * ___path0, int32_t ___mode1, bool ___start2, bool* ___forceAddPoint3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.StartEndModifier::GetClampedPoint(UnityEngine.Vector3,UnityEngine.Vector3,Pathfinding.GraphNode)
extern "C"  Vector3_t3525329789  StartEndModifier_GetClampedPoint_m1812232353 (StartEndModifier_t2773583996 * __this, Vector3_t3525329789  ___from0, Vector3_t3525329789  ___to1, GraphNode_t3525007772 * ___hint2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
