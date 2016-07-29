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

// System.Collections.Generic.List`1<Pathfinding.Int3>
struct List_1_t3494127753;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Util.ListPool`1<Pathfinding.Int3>::.cctor()
extern "C"  void ListPool_1__cctor_m266073699_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1__cctor_m266073699(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))ListPool_1__cctor_m266073699_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.List`1<T> Pathfinding.Util.ListPool`1<Pathfinding.Int3>::Claim()
extern "C"  List_1_t3494127753 * ListPool_1_Claim_m3654278713_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_Claim_m3654278713(__this /* static, unused */, method) ((  List_1_t3494127753 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))ListPool_1_Claim_m3654278713_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.List`1<T> Pathfinding.Util.ListPool`1<Pathfinding.Int3>::Claim(System.Int32)
extern "C"  List_1_t3494127753 * ListPool_1_Claim_m1823278602_gshared (Il2CppObject * __this /* static, unused */, int32_t ___capacity0, const MethodInfo* method);
#define ListPool_1_Claim_m1823278602(__this /* static, unused */, ___capacity0, method) ((  List_1_t3494127753 * (*) (Il2CppObject * /* static, unused */, int32_t, const MethodInfo*))ListPool_1_Claim_m1823278602_gshared)(__this /* static, unused */, ___capacity0, method)
// System.Void Pathfinding.Util.ListPool`1<Pathfinding.Int3>::Warmup(System.Int32,System.Int32)
extern "C"  void ListPool_1_Warmup_m3358930252_gshared (Il2CppObject * __this /* static, unused */, int32_t ___count0, int32_t ___size1, const MethodInfo* method);
#define ListPool_1_Warmup_m3358930252(__this /* static, unused */, ___count0, ___size1, method) ((  void (*) (Il2CppObject * /* static, unused */, int32_t, int32_t, const MethodInfo*))ListPool_1_Warmup_m3358930252_gshared)(__this /* static, unused */, ___count0, ___size1, method)
// System.Void Pathfinding.Util.ListPool`1<Pathfinding.Int3>::Release(System.Collections.Generic.List`1<T>)
extern "C"  void ListPool_1_Release_m2362301703_gshared (Il2CppObject * __this /* static, unused */, List_1_t3494127753 * ___list0, const MethodInfo* method);
#define ListPool_1_Release_m2362301703(__this /* static, unused */, ___list0, method) ((  void (*) (Il2CppObject * /* static, unused */, List_1_t3494127753 *, const MethodInfo*))ListPool_1_Release_m2362301703_gshared)(__this /* static, unused */, ___list0, method)
// System.Void Pathfinding.Util.ListPool`1<Pathfinding.Int3>::Clear()
extern "C"  void ListPool_1_Clear_m2556519093_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_Clear_m2556519093(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))ListPool_1_Clear_m2556519093_gshared)(__this /* static, unused */, method)
// System.Int32 Pathfinding.Util.ListPool`1<Pathfinding.Int3>::GetSize()
extern "C"  int32_t ListPool_1_GetSize_m3003884717_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_GetSize_m3003884717(__this /* static, unused */, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, const MethodInfo*))ListPool_1_GetSize_m3003884717_gshared)(__this /* static, unused */, method)
