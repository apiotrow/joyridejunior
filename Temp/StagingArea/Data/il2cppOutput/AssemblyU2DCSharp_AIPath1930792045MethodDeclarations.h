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

// AIPath
struct AIPath_t1930792045;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// Pathfinding.Path
struct Path_t2697364881;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_Path2697364881.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void AIPath::.ctor()
extern "C"  void AIPath__ctor_m2918482638 (AIPath_t1930792045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AIPath::get_TargetReached()
extern "C"  bool AIPath_get_TargetReached_m3909350288 (AIPath_t1930792045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIPath::Awake()
extern "C"  void AIPath_Awake_m3156087857 (AIPath_t1930792045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIPath::Start()
extern "C"  void AIPath_Start_m1865620430 (AIPath_t1930792045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIPath::OnEnable()
extern "C"  void AIPath_OnEnable_m3564874232 (AIPath_t1930792045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIPath::OnDisable()
extern "C"  void AIPath_OnDisable_m3577856053 (AIPath_t1930792045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AIPath::RepeatTrySearchPath()
extern "C"  Il2CppObject * AIPath_RepeatTrySearchPath_m1472163921 (AIPath_t1930792045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single AIPath::TrySearchPath()
extern "C"  float AIPath_TrySearchPath_m1563083432 (AIPath_t1930792045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIPath::SearchPath()
extern "C"  void AIPath_SearchPath_m1834655651 (AIPath_t1930792045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIPath::OnTargetReached()
extern "C"  void AIPath_OnTargetReached_m4040030350 (AIPath_t1930792045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIPath::OnPathComplete(Pathfinding.Path)
extern "C"  void AIPath_OnPathComplete_m3993508036 (AIPath_t1930792045 * __this, Path_t2697364881 * ____p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 AIPath::GetFeetPosition()
extern "C"  Vector3_t3525329789  AIPath_GetFeetPosition_m2826995231 (AIPath_t1930792045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIPath::Update()
extern "C"  void AIPath_Update_m2005510655 (AIPath_t1930792045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single AIPath::XZSqrMagnitude(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float AIPath_XZSqrMagnitude_m1852054668 (AIPath_t1930792045 * __this, Vector3_t3525329789  ___a0, Vector3_t3525329789  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 AIPath::CalculateVelocity(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  AIPath_CalculateVelocity_m3606437476 (AIPath_t1930792045 * __this, Vector3_t3525329789  ___currentPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIPath::RotateTowards(UnityEngine.Vector3)
extern "C"  void AIPath_RotateTowards_m513600524 (AIPath_t1930792045 * __this, Vector3_t3525329789  ___dir0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 AIPath::CalculateTargetPoint(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  AIPath_CalculateTargetPoint_m2364903734 (AIPath_t1930792045 * __this, Vector3_t3525329789  ___p0, Vector3_t3525329789  ___a1, Vector3_t3525329789  ___b2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
