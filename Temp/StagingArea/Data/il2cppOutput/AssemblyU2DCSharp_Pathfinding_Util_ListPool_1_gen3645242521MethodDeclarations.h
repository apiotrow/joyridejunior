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

// System.Collections.Generic.List`1<System.Single>
struct List_1_t1755167990;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Util.ListPool`1<System.Single>::.cctor()
extern "C"  void ListPool_1__cctor_m643329144_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1__cctor_m643329144(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))ListPool_1__cctor_m643329144_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.List`1<T> Pathfinding.Util.ListPool`1<System.Single>::Claim()
extern "C"  List_1_t1755167990 * ListPool_1_Claim_m1809237754_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_Claim_m1809237754(__this /* static, unused */, method) ((  List_1_t1755167990 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))ListPool_1_Claim_m1809237754_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.List`1<T> Pathfinding.Util.ListPool`1<System.Single>::Claim(System.Int32)
extern "C"  List_1_t1755167990 * ListPool_1_Claim_m3026179403_gshared (Il2CppObject * __this /* static, unused */, int32_t ___capacity0, const MethodInfo* method);
#define ListPool_1_Claim_m3026179403(__this /* static, unused */, ___capacity0, method) ((  List_1_t1755167990 * (*) (Il2CppObject * /* static, unused */, int32_t, const MethodInfo*))ListPool_1_Claim_m3026179403_gshared)(__this /* static, unused */, ___capacity0, method)
// System.Void Pathfinding.Util.ListPool`1<System.Single>::Warmup(System.Int32,System.Int32)
extern "C"  void ListPool_1_Warmup_m140333271_gshared (Il2CppObject * __this /* static, unused */, int32_t ___count0, int32_t ___size1, const MethodInfo* method);
#define ListPool_1_Warmup_m140333271(__this /* static, unused */, ___count0, ___size1, method) ((  void (*) (Il2CppObject * /* static, unused */, int32_t, int32_t, const MethodInfo*))ListPool_1_Warmup_m140333271_gshared)(__this /* static, unused */, ___count0, ___size1, method)
// System.Void Pathfinding.Util.ListPool`1<System.Single>::Release(System.Collections.Generic.List`1<T>)
extern "C"  void ListPool_1_Release_m600440850_gshared (Il2CppObject * __this /* static, unused */, List_1_t1755167990 * ___list0, const MethodInfo* method);
#define ListPool_1_Release_m600440850(__this /* static, unused */, ___list0, method) ((  void (*) (Il2CppObject * /* static, unused */, List_1_t1755167990 *, const MethodInfo*))ListPool_1_Release_m600440850_gshared)(__this /* static, unused */, ___list0, method)
// System.Void Pathfinding.Util.ListPool`1<System.Single>::Clear()
extern "C"  void ListPool_1_Clear_m3122877952_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_Clear_m3122877952(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))ListPool_1_Clear_m3122877952_gshared)(__this /* static, unused */, method)
// System.Int32 Pathfinding.Util.ListPool`1<System.Single>::GetSize()
extern "C"  int32_t ListPool_1_GetSize_m1778342876_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_GetSize_m1778342876(__this /* static, unused */, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, const MethodInfo*))ListPool_1_GetSize_m1778342876_gshared)(__this /* static, unused */, method)
