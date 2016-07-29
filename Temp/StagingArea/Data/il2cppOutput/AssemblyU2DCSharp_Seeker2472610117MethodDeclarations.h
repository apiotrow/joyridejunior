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

// Seeker
struct Seeker_t2472610117;
// Pathfinding.Path
struct Path_t2697364881;
// Pathfinding.IPathModifier
struct IPathModifier_t1114092113;
// Pathfinding.ABPath
struct ABPath_t324244786;
// OnPathDelegate
struct OnPathDelegate_t598607977;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_Path2697364881.h"
#include "AssemblyU2DCSharp_Seeker_ModifierPass3846564776.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_OnPathDelegate598607977.h"

// System.Void Seeker::.ctor()
extern "C"  void Seeker__ctor_m1657534710 (Seeker_t2472610117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Seeker::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern "C"  void Seeker_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m2168463508 (Seeker_t2472610117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Seeker::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern "C"  void Seeker_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m3261786322 (Seeker_t2472610117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Seeker::Awake()
extern "C"  void Seeker_Awake_m1895139929 (Seeker_t2472610117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Path Seeker::GetCurrentPath()
extern "C"  Path_t2697364881 * Seeker_GetCurrentPath_m130564772 (Seeker_t2472610117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Seeker::OnDestroy()
extern "C"  void Seeker_OnDestroy_m1231839983 (Seeker_t2472610117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Seeker::ReleaseClaimedPath()
extern "C"  void Seeker_ReleaseClaimedPath_m1845309095 (Seeker_t2472610117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Seeker::RegisterModifier(Pathfinding.IPathModifier)
extern "C"  void Seeker_RegisterModifier_m2981737007 (Seeker_t2472610117 * __this, Il2CppObject * ___mod0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Seeker::DeregisterModifier(Pathfinding.IPathModifier)
extern "C"  void Seeker_DeregisterModifier_m2266408526 (Seeker_t2472610117 * __this, Il2CppObject * ___mod0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Seeker::PostProcess(Pathfinding.Path)
extern "C"  void Seeker_PostProcess_m3710039892 (Seeker_t2472610117 * __this, Path_t2697364881 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Seeker::RunModifiers(Seeker/ModifierPass,Pathfinding.Path)
extern "C"  void Seeker_RunModifiers_m2777234966 (Seeker_t2472610117 * __this, int32_t ___pass0, Path_t2697364881 * ___p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Seeker::IsDone()
extern "C"  bool Seeker_IsDone_m2507346382 (Seeker_t2472610117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Seeker::OnPathComplete(Pathfinding.Path)
extern "C"  void Seeker_OnPathComplete_m4283850652 (Seeker_t2472610117 * __this, Path_t2697364881 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Seeker::OnPathComplete(Pathfinding.Path,System.Boolean,System.Boolean)
extern "C"  void Seeker_OnPathComplete_m2888375548 (Seeker_t2472610117 * __this, Path_t2697364881 * ___p0, bool ___runModifiers1, bool ___sendCallbacks2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.ABPath Seeker::GetNewPath(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  ABPath_t324244786 * Seeker_GetNewPath_m1245565794 (Seeker_t2472610117 * __this, Vector3_t3525329789  ___start0, Vector3_t3525329789  ___end1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Path Seeker::StartPath(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Path_t2697364881 * Seeker_StartPath_m677111775 (Seeker_t2472610117 * __this, Vector3_t3525329789  ___start0, Vector3_t3525329789  ___end1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Path Seeker::StartPath(UnityEngine.Vector3,UnityEngine.Vector3,OnPathDelegate)
extern "C"  Path_t2697364881 * Seeker_StartPath_m3394378942 (Seeker_t2472610117 * __this, Vector3_t3525329789  ___start0, Vector3_t3525329789  ___end1, OnPathDelegate_t598607977 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Path Seeker::StartPath(UnityEngine.Vector3,UnityEngine.Vector3,OnPathDelegate,System.Int32)
extern "C"  Path_t2697364881 * Seeker_StartPath_m3736741081 (Seeker_t2472610117 * __this, Vector3_t3525329789  ___start0, Vector3_t3525329789  ___end1, OnPathDelegate_t598607977 * ___callback2, int32_t ___graphMask3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Path Seeker::StartPath(Pathfinding.Path,OnPathDelegate,System.Int32)
extern "C"  Path_t2697364881 * Seeker_StartPath_m3235751032 (Seeker_t2472610117 * __this, Path_t2697364881 * ___p0, OnPathDelegate_t598607977 * ___callback1, int32_t ___graphMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Seeker::StartPathInternal(Pathfinding.Path,OnPathDelegate)
extern "C"  void Seeker_StartPathInternal_m3611594676 (Seeker_t2472610117 * __this, Path_t2697364881 * ___p0, OnPathDelegate_t598607977 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Seeker::OnDrawGizmos()
extern "C"  void Seeker_OnDrawGizmos_m3501733738 (Seeker_t2472610117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Seeker::<RegisterModifier>m__1(Pathfinding.IPathModifier,Pathfinding.IPathModifier)
extern "C"  int32_t Seeker_U3CRegisterModifierU3Em__1_m4159438112 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___a0, Il2CppObject * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
