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

// Pathfinding.SimpleSmoothModifier
struct SimpleSmoothModifier_t681922147;
// Pathfinding.Path
struct Path_t2697364881;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_Path2697364881.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void Pathfinding.SimpleSmoothModifier::.ctor()
extern "C"  void SimpleSmoothModifier__ctor_m1814256282 (SimpleSmoothModifier_t681922147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.SimpleSmoothModifier::get_Order()
extern "C"  int32_t SimpleSmoothModifier_get_Order_m3309159631 (SimpleSmoothModifier_t681922147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.SimpleSmoothModifier::Apply(Pathfinding.Path)
extern "C"  void SimpleSmoothModifier_Apply_m4067570487 (SimpleSmoothModifier_t681922147 * __this, Path_t2697364881 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> Pathfinding.SimpleSmoothModifier::CurvedNonuniform(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  List_1_t27321462 * SimpleSmoothModifier_CurvedNonuniform_m2902919197 (SimpleSmoothModifier_t681922147 * __this, List_1_t27321462 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.SimpleSmoothModifier::GetPointOnCubic(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3525329789  SimpleSmoothModifier_GetPointOnCubic_m353527272 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, Vector3_t3525329789  ___b1, Vector3_t3525329789  ___tan12, Vector3_t3525329789  ___tan23, float ___t4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> Pathfinding.SimpleSmoothModifier::SmoothOffsetSimple(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  List_1_t27321462 * SimpleSmoothModifier_SmoothOffsetSimple_m2927699412 (SimpleSmoothModifier_t681922147 * __this, List_1_t27321462 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> Pathfinding.SimpleSmoothModifier::SmoothSimple(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  List_1_t27321462 * SimpleSmoothModifier_SmoothSimple_m3185581345 (SimpleSmoothModifier_t681922147 * __this, List_1_t27321462 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> Pathfinding.SimpleSmoothModifier::SmoothBezier(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  List_1_t27321462 * SimpleSmoothModifier_SmoothBezier_m3810901838 (SimpleSmoothModifier_t681922147 * __this, List_1_t27321462 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
