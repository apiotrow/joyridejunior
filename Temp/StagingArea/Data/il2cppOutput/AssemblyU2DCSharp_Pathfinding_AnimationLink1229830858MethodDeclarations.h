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

// Pathfinding.AnimationLink
struct AnimationLink_t1229830858;
// UnityEngine.Transform
struct Transform_t284553113;
// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void Pathfinding.AnimationLink::.ctor()
extern "C"  void AnimationLink__ctor_m920673079 (AnimationLink_t1229830858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Pathfinding.AnimationLink::SearchRec(UnityEngine.Transform,System.String)
extern "C"  Transform_t284553113 * AnimationLink_SearchRec_m498642654 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___tr0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AnimationLink::CalculateOffsets(System.Collections.Generic.List`1<UnityEngine.Vector3>,UnityEngine.Vector3&)
extern "C"  void AnimationLink_CalculateOffsets_m2400662261 (AnimationLink_t1229830858 * __this, List_1_t27321462 * ___trace0, Vector3_t3525329789 * ___endPosition1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AnimationLink::OnDrawGizmosSelected()
extern "C"  void AnimationLink_OnDrawGizmosSelected_m4177659396 (AnimationLink_t1229830858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
