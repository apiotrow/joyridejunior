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

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Util.ListPool`1<UnityEngine.Vector3>::.cctor()
extern "C"  void ListPool_1__cctor_m1120968358_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1__cctor_m1120968358(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))ListPool_1__cctor_m1120968358_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.List`1<T> Pathfinding.Util.ListPool`1<UnityEngine.Vector3>::Claim()
extern "C"  List_1_t27321462 * ListPool_1_Claim_m1854083788_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_Claim_m1854083788(__this /* static, unused */, method) ((  List_1_t27321462 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))ListPool_1_Claim_m1854083788_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.List`1<T> Pathfinding.Util.ListPool`1<UnityEngine.Vector3>::Claim(System.Int32)
extern "C"  List_1_t27321462 * ListPool_1_Claim_m527365661_gshared (Il2CppObject * __this /* static, unused */, int32_t ___capacity0, const MethodInfo* method);
#define ListPool_1_Claim_m527365661(__this /* static, unused */, ___capacity0, method) ((  List_1_t27321462 * (*) (Il2CppObject * /* static, unused */, int32_t, const MethodInfo*))ListPool_1_Claim_m527365661_gshared)(__this /* static, unused */, ___capacity0, method)
// System.Void Pathfinding.Util.ListPool`1<UnityEngine.Vector3>::Warmup(System.Int32,System.Int32)
extern "C"  void ListPool_1_Warmup_m707677801_gshared (Il2CppObject * __this /* static, unused */, int32_t ___count0, int32_t ___size1, const MethodInfo* method);
#define ListPool_1_Warmup_m707677801(__this /* static, unused */, ___count0, ___size1, method) ((  void (*) (Il2CppObject * /* static, unused */, int32_t, int32_t, const MethodInfo*))ListPool_1_Warmup_m707677801_gshared)(__this /* static, unused */, ___count0, ___size1, method)
// System.Void Pathfinding.Util.ListPool`1<UnityEngine.Vector3>::Release(System.Collections.Generic.List`1<T>)
extern "C"  void ListPool_1_Release_m2445357732_gshared (Il2CppObject * __this /* static, unused */, List_1_t27321462 * ___list0, const MethodInfo* method);
#define ListPool_1_Release_m2445357732(__this /* static, unused */, ___list0, method) ((  void (*) (Il2CppObject * /* static, unused */, List_1_t27321462 *, const MethodInfo*))ListPool_1_Release_m2445357732_gshared)(__this /* static, unused */, ___list0, method)
// System.Void Pathfinding.Util.ListPool`1<UnityEngine.Vector3>::Clear()
extern "C"  void ListPool_1_Clear_m367339026_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_Clear_m367339026(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))ListPool_1_Clear_m367339026_gshared)(__this /* static, unused */, method)
// System.Int32 Pathfinding.Util.ListPool`1<UnityEngine.Vector3>::GetSize()
extern "C"  int32_t ListPool_1_GetSize_m2209554926_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_GetSize_m2209554926(__this /* static, unused */, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, const MethodInfo*))ListPool_1_GetSize_m2209554926_gshared)(__this /* static, unused */, method)
