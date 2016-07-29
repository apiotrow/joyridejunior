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

// AILerp
struct AILerp_t1930676671;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// Pathfinding.Path
struct Path_t2697364881;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_Path2697364881.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void AILerp::.ctor()
extern "C"  void AILerp__ctor_m2335252924 (AILerp_t1930676671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AILerp::get_targetReached()
extern "C"  bool AILerp_get_targetReached_m2743133598 (AILerp_t1930676671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AILerp::set_targetReached(System.Boolean)
extern "C"  void AILerp_set_targetReached_m1300239061 (AILerp_t1930676671 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AILerp::Awake()
extern "C"  void AILerp_Awake_m2572858143 (AILerp_t1930676671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AILerp::Start()
extern "C"  void AILerp_Start_m1282390716 (AILerp_t1930676671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AILerp::OnEnable()
extern "C"  void AILerp_OnEnable_m1711176778 (AILerp_t1930676671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AILerp::OnDisable()
extern "C"  void AILerp_OnDisable_m1947809827 (AILerp_t1930676671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AILerp::RepeatTrySearchPath()
extern "C"  Il2CppObject * AILerp_RepeatTrySearchPath_m1368151743 (AILerp_t1930676671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single AILerp::TrySearchPath()
extern "C"  float AILerp_TrySearchPath_m1384682390 (AILerp_t1930676671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AILerp::SearchPath()
extern "C"  void AILerp_SearchPath_m2842830197 (AILerp_t1930676671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AILerp::ForceSearchPath()
extern "C"  void AILerp_ForceSearchPath_m2405041362 (AILerp_t1930676671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AILerp::OnTargetReached()
extern "C"  void AILerp_OnTargetReached_m100353532 (AILerp_t1930676671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AILerp::OnPathComplete(Pathfinding.Path)
extern "C"  void AILerp_OnPathComplete_m94667158 (AILerp_t1930676671 * __this, Path_t2697364881 * ____p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AILerp::ConfigurePathSwitchInterpolation()
extern "C"  void AILerp_ConfigurePathSwitchInterpolation_m2833745645 (AILerp_t1930676671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 AILerp::GetFeetPosition()
extern "C"  Vector3_t3525329789  AILerp_GetFeetPosition_m3182285709 (AILerp_t1930676671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AILerp::ConfigureNewPath()
extern "C"  void AILerp_ConfigureNewPath_m1166638567 (AILerp_t1930676671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AILerp::Update()
extern "C"  void AILerp_Update_m1105258705 (AILerp_t1930676671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 AILerp::CalculateNextPosition(UnityEngine.Vector3&)
extern "C"  Vector3_t3525329789  AILerp_CalculateNextPosition_m3621863797 (AILerp_t1930676671 * __this, Vector3_t3525329789 * ___direction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 AILerp::<Awake>m__0()
extern "C"  Vector3_t3525329789  AILerp_U3CAwakeU3Em__0_m1776725496 (AILerp_t1930676671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
