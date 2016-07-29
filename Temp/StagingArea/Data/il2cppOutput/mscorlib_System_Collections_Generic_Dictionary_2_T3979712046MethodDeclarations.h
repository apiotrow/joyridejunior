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

// System.Collections.Generic.Dictionary`2/Transform`1<Pathfinding.Int3,System.Int32,System.Int32>
struct Transform_1_t3979712046;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_Pathfinding_Int32697168784.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Pathfinding.Int3,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1035431879_gshared (Transform_1_t3979712046 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1035431879(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3979712046 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1035431879_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Pathfinding.Int3,System.Int32,System.Int32>::Invoke(TKey,TValue)
extern "C"  int32_t Transform_1_Invoke_m782994577_gshared (Transform_1_t3979712046 * __this, Int3_t2697168784  ___key0, int32_t ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m782994577(__this, ___key0, ___value1, method) ((  int32_t (*) (Transform_1_t3979712046 *, Int3_t2697168784 , int32_t, const MethodInfo*))Transform_1_Invoke_m782994577_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Pathfinding.Int3,System.Int32,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3340933948_gshared (Transform_1_t3979712046 * __this, Int3_t2697168784  ___key0, int32_t ___value1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3340933948(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3979712046 *, Int3_t2697168784 , int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3340933948_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Pathfinding.Int3,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Transform_1_EndInvoke_m355352409_gshared (Transform_1_t3979712046 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m355352409(__this, ___result0, method) ((  int32_t (*) (Transform_1_t3979712046 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m355352409_gshared)(__this, ___result0, method)
