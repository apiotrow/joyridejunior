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

// System.Func`1<System.Int32>
struct Func_1_t3990196034;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_1__ctor_m597237470_gshared (Func_1_t3990196034 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_1__ctor_m597237470(__this, ___object0, ___method1, method) ((  void (*) (Func_1_t3990196034 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_1__ctor_m597237470_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`1<System.Int32>::Invoke()
extern "C"  int32_t Func_1_Invoke_m4189983562_gshared (Func_1_t3990196034 * __this, const MethodInfo* method);
#define Func_1_Invoke_m4189983562(__this, method) ((  int32_t (*) (Func_1_t3990196034 *, const MethodInfo*))Func_1_Invoke_m4189983562_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Int32>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_1_BeginInvoke_m945481443_gshared (Func_1_t3990196034 * __this, AsyncCallback_t1363551830 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method);
#define Func_1_BeginInvoke_m945481443(__this, ___callback0, ___object1, method) ((  Il2CppObject * (*) (Func_1_t3990196034 *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Func_1_BeginInvoke_m945481443_gshared)(__this, ___callback0, ___object1, method)
// TResult System.Func`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Func_1_EndInvoke_m3936409084_gshared (Func_1_t3990196034 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_1_EndInvoke_m3936409084(__this, ___result0, method) ((  int32_t (*) (Func_1_t3990196034 *, Il2CppObject *, const MethodInfo*))Func_1_EndInvoke_m3936409084_gshared)(__this, ___result0, method)
