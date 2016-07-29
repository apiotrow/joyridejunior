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

// System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>
struct Queue_1_t2109259243;
// System.Array
struct Il2CppArray;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IEnumerator`1<AstarPath/AstarWorkItem>
struct IEnumerator_1_t1884278151;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// AstarPath/AstarWorkItem[]
struct AstarWorkItemU5BU5D_t3284381006;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_AstarPath_AstarWorkItem401171703.h"
#include "System_System_Collections_Generic_Queue_1_Enumerat3578880960.h"

// System.Void System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::.ctor()
extern "C"  void Queue_1__ctor_m1447296292_gshared (Queue_1_t2109259243 * __this, const MethodInfo* method);
#define Queue_1__ctor_m1447296292(__this, method) ((  void (*) (Queue_1_t2109259243 *, const MethodInfo*))Queue_1__ctor_m1447296292_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Queue_1_System_Collections_ICollection_CopyTo_m3985203745_gshared (Queue_1_t2109259243 * __this, Il2CppArray * ___array0, int32_t ___idx1, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m3985203745(__this, ___array0, ___idx1, method) ((  void (*) (Queue_1_t2109259243 *, Il2CppArray *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m3985203745_gshared)(__this, ___array0, ___idx1, method)
// System.Boolean System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m4285237885_gshared (Queue_1_t2109259243 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m4285237885(__this, method) ((  bool (*) (Queue_1_t2109259243 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m4285237885_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Queue_1_System_Collections_ICollection_get_SyncRoot_m791941531_gshared (Queue_1_t2109259243 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m791941531(__this, method) ((  Il2CppObject * (*) (Queue_1_t2109259243 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m791941531_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C"  Il2CppObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1432933837_gshared (Queue_1_t2109259243 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1432933837(__this, method) ((  Il2CppObject* (*) (Queue_1_t2109259243 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1432933837_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Queue_1_System_Collections_IEnumerable_GetEnumerator_m1205327964_gshared (Queue_1_t2109259243 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m1205327964(__this, method) ((  Il2CppObject * (*) (Queue_1_t2109259243 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m1205327964_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::Clear()
extern "C"  void Queue_1_Clear_m1216171182_gshared (Queue_1_t2109259243 * __this, const MethodInfo* method);
#define Queue_1_Clear_m1216171182(__this, method) ((  void (*) (Queue_1_t2109259243 *, const MethodInfo*))Queue_1_Clear_m1216171182_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::CopyTo(T[],System.Int32)
extern "C"  void Queue_1_CopyTo_m1740868748_gshared (Queue_1_t2109259243 * __this, AstarWorkItemU5BU5D_t3284381006* ___array0, int32_t ___idx1, const MethodInfo* method);
#define Queue_1_CopyTo_m1740868748(__this, ___array0, ___idx1, method) ((  void (*) (Queue_1_t2109259243 *, AstarWorkItemU5BU5D_t3284381006*, int32_t, const MethodInfo*))Queue_1_CopyTo_m1740868748_gshared)(__this, ___array0, ___idx1, method)
// T System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::Dequeue()
extern "C"  AstarWorkItem_t401171703  Queue_1_Dequeue_m3039652576_gshared (Queue_1_t2109259243 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m3039652576(__this, method) ((  AstarWorkItem_t401171703  (*) (Queue_1_t2109259243 *, const MethodInfo*))Queue_1_Dequeue_m3039652576_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::Peek()
extern "C"  AstarWorkItem_t401171703  Queue_1_Peek_m684533069_gshared (Queue_1_t2109259243 * __this, const MethodInfo* method);
#define Queue_1_Peek_m684533069(__this, method) ((  AstarWorkItem_t401171703  (*) (Queue_1_t2109259243 *, const MethodInfo*))Queue_1_Peek_m684533069_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::Enqueue(T)
extern "C"  void Queue_1_Enqueue_m3577401211_gshared (Queue_1_t2109259243 * __this, AstarWorkItem_t401171703  ___item0, const MethodInfo* method);
#define Queue_1_Enqueue_m3577401211(__this, ___item0, method) ((  void (*) (Queue_1_t2109259243 *, AstarWorkItem_t401171703 , const MethodInfo*))Queue_1_Enqueue_m3577401211_gshared)(__this, ___item0, method)
// System.Void System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::SetCapacity(System.Int32)
extern "C"  void Queue_1_SetCapacity_m4294812590_gshared (Queue_1_t2109259243 * __this, int32_t ___new_size0, const MethodInfo* method);
#define Queue_1_SetCapacity_m4294812590(__this, ___new_size0, method) ((  void (*) (Queue_1_t2109259243 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m4294812590_gshared)(__this, ___new_size0, method)
// System.Int32 System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::get_Count()
extern "C"  int32_t Queue_1_get_Count_m590219063_gshared (Queue_1_t2109259243 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m590219063(__this, method) ((  int32_t (*) (Queue_1_t2109259243 *, const MethodInfo*))Queue_1_get_Count_m590219063_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::GetEnumerator()
extern "C"  Enumerator_t3578880960  Queue_1_GetEnumerator_m1192831380_gshared (Queue_1_t2109259243 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m1192831380(__this, method) ((  Enumerator_t3578880960  (*) (Queue_1_t2109259243 *, const MethodInfo*))Queue_1_GetEnumerator_m1192831380_gshared)(__this, method)
