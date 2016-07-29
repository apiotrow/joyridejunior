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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t1634065389;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Util.ListPool`1<System.Object>::.cctor()
extern "C"  void ListPool_1__cctor_m2656574753_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1__cctor_m2656574753(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))ListPool_1__cctor_m2656574753_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.List`1<T> Pathfinding.Util.ListPool`1<System.Object>::Claim()
extern "C"  List_1_t1634065389 * ListPool_1_Claim_m2151275825_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_Claim_m2151275825(__this /* static, unused */, method) ((  List_1_t1634065389 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))ListPool_1_Claim_m2151275825_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.List`1<T> Pathfinding.Util.ListPool`1<System.Object>::Claim(System.Int32)
extern "C"  List_1_t1634065389 * ListPool_1_Claim_m3438825730_gshared (Il2CppObject * __this /* static, unused */, int32_t ___capacity0, const MethodInfo* method);
#define ListPool_1_Claim_m3438825730(__this /* static, unused */, ___capacity0, method) ((  List_1_t1634065389 * (*) (Il2CppObject * /* static, unused */, int32_t, const MethodInfo*))ListPool_1_Claim_m3438825730_gshared)(__this /* static, unused */, ___capacity0, method)
// System.Void Pathfinding.Util.ListPool`1<System.Object>::Warmup(System.Int32,System.Int32)
extern "C"  void ListPool_1_Warmup_m3738927182_gshared (Il2CppObject * __this /* static, unused */, int32_t ___count0, int32_t ___size1, const MethodInfo* method);
#define ListPool_1_Warmup_m3738927182(__this /* static, unused */, ___count0, ___size1, method) ((  void (*) (Il2CppObject * /* static, unused */, int32_t, int32_t, const MethodInfo*))ListPool_1_Warmup_m3738927182_gshared)(__this /* static, unused */, ___count0, ___size1, method)
// System.Void Pathfinding.Util.ListPool`1<System.Object>::Release(System.Collections.Generic.List`1<T>)
extern "C"  void ListPool_1_Release_m442610953_gshared (Il2CppObject * __this /* static, unused */, List_1_t1634065389 * ___list0, const MethodInfo* method);
#define ListPool_1_Release_m442610953(__this /* static, unused */, ___list0, method) ((  void (*) (Il2CppObject * /* static, unused */, List_1_t1634065389 *, const MethodInfo*))ListPool_1_Release_m442610953_gshared)(__this /* static, unused */, ___list0, method)
// System.Void Pathfinding.Util.ListPool`1<System.Object>::Clear()
extern "C"  void ListPool_1_Clear_m3464916023_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_Clear_m3464916023(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))ListPool_1_Clear_m3464916023_gshared)(__this /* static, unused */, method)
// System.Int32 Pathfinding.Util.ListPool`1<System.Object>::GetSize()
extern "C"  int32_t ListPool_1_GetSize_m4059414611_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_GetSize_m4059414611(__this /* static, unused */, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, const MethodInfo*))ListPool_1_GetSize_m4059414611_gshared)(__this /* static, unused */, method)
