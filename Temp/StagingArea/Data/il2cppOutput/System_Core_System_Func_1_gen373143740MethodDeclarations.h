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

// System.Func`1<UnityEngine.Vector3>
struct Func_1_t373143740;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_1__ctor_m387026388_gshared (Func_1_t373143740 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_1__ctor_m387026388(__this, ___object0, ___method1, method) ((  void (*) (Func_1_t373143740 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_1__ctor_m387026388_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`1<UnityEngine.Vector3>::Invoke()
extern "C"  Vector3_t3525329789  Func_1_Invoke_m1521435740_gshared (Func_1_t373143740 * __this, const MethodInfo* method);
#define Func_1_Invoke_m1521435740(__this, method) ((  Vector3_t3525329789  (*) (Func_1_t373143740 *, const MethodInfo*))Func_1_Invoke_m1521435740_gshared)(__this, method)
// System.IAsyncResult System.Func`1<UnityEngine.Vector3>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_1_BeginInvoke_m713640965_gshared (Func_1_t373143740 * __this, AsyncCallback_t1363551830 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method);
#define Func_1_BeginInvoke_m713640965(__this, ___callback0, ___object1, method) ((  Il2CppObject * (*) (Func_1_t373143740 *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Func_1_BeginInvoke_m713640965_gshared)(__this, ___callback0, ___object1, method)
// TResult System.Func`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C"  Vector3_t3525329789  Func_1_EndInvoke_m1301321750_gshared (Func_1_t373143740 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_1_EndInvoke_m1301321750(__this, ___result0, method) ((  Vector3_t3525329789  (*) (Func_1_t373143740 *, Il2CppObject *, const MethodInfo*))Func_1_EndInvoke_m1301321750_gshared)(__this, ___result0, method)
