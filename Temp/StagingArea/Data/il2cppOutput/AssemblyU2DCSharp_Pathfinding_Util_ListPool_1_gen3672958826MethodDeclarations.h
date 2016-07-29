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

// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t1782884295;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Util.ListPool`1<System.UInt32>::.cctor()
extern "C"  void ListPool_1__cctor_m1780696327_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1__cctor_m1780696327(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))ListPool_1__cctor_m1780696327_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.List`1<T> Pathfinding.Util.ListPool`1<System.UInt32>::Claim()
extern "C"  List_1_t1782884295 * ListPool_1_Claim_m2954305675_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_Claim_m2954305675(__this /* static, unused */, method) ((  List_1_t1782884295 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))ListPool_1_Claim_m2954305675_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.List`1<T> Pathfinding.Util.ListPool`1<System.UInt32>::Claim(System.Int32)
extern "C"  List_1_t1782884295 * ListPool_1_Claim_m1041849692_gshared (Il2CppObject * __this /* static, unused */, int32_t ___capacity0, const MethodInfo* method);
#define ListPool_1_Claim_m1041849692(__this /* static, unused */, ___capacity0, method) ((  List_1_t1782884295 * (*) (Il2CppObject * /* static, unused */, int32_t, const MethodInfo*))ListPool_1_Claim_m1041849692_gshared)(__this /* static, unused */, ___capacity0, method)
// System.Void Pathfinding.Util.ListPool`1<System.UInt32>::Warmup(System.Int32,System.Int32)
extern "C"  void ListPool_1_Warmup_m576382760_gshared (Il2CppObject * __this /* static, unused */, int32_t ___count0, int32_t ___size1, const MethodInfo* method);
#define ListPool_1_Warmup_m576382760(__this /* static, unused */, ___count0, ___size1, method) ((  void (*) (Il2CppObject * /* static, unused */, int32_t, int32_t, const MethodInfo*))ListPool_1_Warmup_m576382760_gshared)(__this /* static, unused */, ___count0, ___size1, method)
// System.Void Pathfinding.Util.ListPool`1<System.UInt32>::Release(System.Collections.Generic.List`1<T>)
extern "C"  void ListPool_1_Release_m1737204963_gshared (Il2CppObject * __this /* static, unused */, List_1_t1782884295 * ___list0, const MethodInfo* method);
#define ListPool_1_Release_m1737204963(__this /* static, unused */, ___list0, method) ((  void (*) (Il2CppObject * /* static, unused */, List_1_t1782884295 *, const MethodInfo*))ListPool_1_Release_m1737204963_gshared)(__this /* static, unused */, ___list0, method)
// System.Void Pathfinding.Util.ListPool`1<System.UInt32>::Clear()
extern "C"  void ListPool_1_Clear_m4267945873_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_Clear_m4267945873(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))ListPool_1_Clear_m4267945873_gshared)(__this /* static, unused */, method)
// System.Int32 Pathfinding.Util.ListPool`1<System.UInt32>::GetSize()
extern "C"  int32_t ListPool_1_GetSize_m2676987181_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_GetSize_m2676987181(__this /* static, unused */, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, const MethodInfo*))ListPool_1_GetSize_m2676987181_gshared)(__this /* static, unused */, method)
