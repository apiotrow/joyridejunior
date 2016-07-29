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

// Pathfinding.ABPath
struct ABPath_t324244786;
// OnPathDelegate
struct OnPathDelegate_t598607977;
// Pathfinding.GraphNode
struct GraphNode_t3525007772;
// Pathfinding.Path
struct Path_t2697364881;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_OnPathDelegate598607977.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"
#include "AssemblyU2DCSharp_Pathfinding_Path2697364881.h"
#include "AssemblyU2DCSharp_PathLog873181375.h"

// System.Void Pathfinding.ABPath::.ctor()
extern "C"  void ABPath__ctor_m1604488491 (ABPath_t324244786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.ABPath::get_hasEndPoint()
extern "C"  bool ABPath_get_hasEndPoint_m130455419 (ABPath_t324244786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.ABPath Pathfinding.ABPath::Construct(UnityEngine.Vector3,UnityEngine.Vector3,OnPathDelegate)
extern "C"  ABPath_t324244786 * ABPath_Construct_m4082230660 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___start0, Vector3_t3525329789  ___end1, OnPathDelegate_t598607977 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ABPath::Setup(UnityEngine.Vector3,UnityEngine.Vector3,OnPathDelegate)
extern "C"  void ABPath_Setup_m2454690583 (ABPath_t324244786 * __this, Vector3_t3525329789  ___start0, Vector3_t3525329789  ___end1, OnPathDelegate_t598607977 * ___callbackDelegate2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ABPath::UpdateStartEnd(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void ABPath_UpdateStartEnd_m2791417169 (ABPath_t324244786 * __this, Vector3_t3525329789  ___start0, Vector3_t3525329789  ___end1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.ABPath::GetConnectionSpecialCost(Pathfinding.GraphNode,Pathfinding.GraphNode,System.UInt32)
extern "C"  uint32_t ABPath_GetConnectionSpecialCost_m1145754048 (ABPath_t324244786 * __this, GraphNode_t3525007772 * ___a0, GraphNode_t3525007772 * ___b1, uint32_t ___currentCost2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ABPath::Reset()
extern "C"  void ABPath_Reset_m3545888728 (ABPath_t324244786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ABPath::Prepare()
extern "C"  void ABPath_Prepare_m2951128976 (ABPath_t324244786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ABPath::CompletePathIfStartIsValidTarget()
extern "C"  void ABPath_CompletePathIfStartIsValidTarget_m33906101 (ABPath_t324244786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ABPath::Initialize()
extern "C"  void ABPath_Initialize_m783961161 (ABPath_t324244786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ABPath::Cleanup()
extern "C"  void ABPath_Cleanup_m2688941549 (ABPath_t324244786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ABPath::CalculateStep(System.Int64)
extern "C"  void ABPath_CalculateStep_m4127779181 (ABPath_t324244786 * __this, int64_t ___targetTick0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ABPath::ResetCosts(Pathfinding.Path)
extern "C"  void ABPath_ResetCosts_m2529716417 (ABPath_t324244786 * __this, Path_t2697364881 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.ABPath::DebugString(PathLog)
extern "C"  String_t* ABPath_DebugString_m2207168137 (ABPath_t324244786 * __this, int32_t ___logMode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.ABPath::GetMovementVector(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  ABPath_GetMovementVector_m4125238562 (ABPath_t324244786 * __this, Vector3_t3525329789  ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
