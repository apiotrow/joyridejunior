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

// System.Collections.Generic.Dictionary`2/Transform`1<Pathfinding.Int3,System.Int32,System.Collections.Generic.KeyValuePair`2<Pathfinding.Int3,System.Int32>>
struct Transform_1_t3854979278;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22722682019.h"
#include "AssemblyU2DCSharp_Pathfinding_Int32697168784.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Pathfinding.Int3,System.Int32,System.Collections.Generic.KeyValuePair`2<Pathfinding.Int3,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m389702934_gshared (Transform_1_t3854979278 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m389702934(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3854979278 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m389702934_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Pathfinding.Int3,System.Int32,System.Collections.Generic.KeyValuePair`2<Pathfinding.Int3,System.Int32>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t2722682019  Transform_1_Invoke_m3988709922_gshared (Transform_1_t3854979278 * __this, Int3_t2697168784  ___key0, int32_t ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3988709922(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t2722682019  (*) (Transform_1_t3854979278 *, Int3_t2697168784 , int32_t, const MethodInfo*))Transform_1_Invoke_m3988709922_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Pathfinding.Int3,System.Int32,System.Collections.Generic.KeyValuePair`2<Pathfinding.Int3,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1946726093_gshared (Transform_1_t3854979278 * __this, Int3_t2697168784  ___key0, int32_t ___value1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1946726093(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3854979278 *, Int3_t2697168784 , int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1946726093_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Pathfinding.Int3,System.Int32,System.Collections.Generic.KeyValuePair`2<Pathfinding.Int3,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t2722682019  Transform_1_EndInvoke_m2478994728_gshared (Transform_1_t3854979278 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2478994728(__this, ___result0, method) ((  KeyValuePair_2_t2722682019  (*) (Transform_1_t3854979278 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2478994728_gshared)(__this, ___result0, method)
