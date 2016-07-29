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

// Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.Object>
struct WriteDelegate_1_t2435459020;
// System.Object
struct Il2CppObject;
// Pathfinding.Serialization.JsonFx.JsonWriter
struct JsonWriter_t2278751729;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF2278751729.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void WriteDelegate_1__ctor_m2655339744_gshared (WriteDelegate_1_t2435459020 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define WriteDelegate_1__ctor_m2655339744(__this, ___object0, ___method1, method) ((  void (*) (WriteDelegate_1_t2435459020 *, Il2CppObject *, IntPtr_t, const MethodInfo*))WriteDelegate_1__ctor_m2655339744_gshared)(__this, ___object0, ___method1, method)
// System.Void Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.Object>::Invoke(Pathfinding.Serialization.JsonFx.JsonWriter,T)
extern "C"  void WriteDelegate_1_Invoke_m1877104521_gshared (WriteDelegate_1_t2435459020 * __this, JsonWriter_t2278751729 * ___writer0, Il2CppObject * ___value1, const MethodInfo* method);
#define WriteDelegate_1_Invoke_m1877104521(__this, ___writer0, ___value1, method) ((  void (*) (WriteDelegate_1_t2435459020 *, JsonWriter_t2278751729 *, Il2CppObject *, const MethodInfo*))WriteDelegate_1_Invoke_m1877104521_gshared)(__this, ___writer0, ___value1, method)
// System.IAsyncResult Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.Object>::BeginInvoke(Pathfinding.Serialization.JsonFx.JsonWriter,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WriteDelegate_1_BeginInvoke_m2874685428_gshared (WriteDelegate_1_t2435459020 * __this, JsonWriter_t2278751729 * ___writer0, Il2CppObject * ___value1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define WriteDelegate_1_BeginInvoke_m2874685428(__this, ___writer0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (WriteDelegate_1_t2435459020 *, JsonWriter_t2278751729 *, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))WriteDelegate_1_BeginInvoke_m2874685428_gshared)(__this, ___writer0, ___value1, ___callback2, ___object3, method)
// System.Void Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void WriteDelegate_1_EndInvoke_m3602786032_gshared (WriteDelegate_1_t2435459020 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define WriteDelegate_1_EndInvoke_m3602786032(__this, ___result0, method) ((  void (*) (WriteDelegate_1_t2435459020 *, Il2CppObject *, const MethodInfo*))WriteDelegate_1_EndInvoke_m3602786032_gshared)(__this, ___result0, method)
