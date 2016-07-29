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

// Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime>
struct WriteDelegate_1_t1937386536;
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
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime>::.ctor(System.Object,System.IntPtr)
extern "C"  void WriteDelegate_1__ctor_m3341752708_gshared (WriteDelegate_1_t1937386536 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define WriteDelegate_1__ctor_m3341752708(__this, ___object0, ___method1, method) ((  void (*) (WriteDelegate_1_t1937386536 *, Il2CppObject *, IntPtr_t, const MethodInfo*))WriteDelegate_1__ctor_m3341752708_gshared)(__this, ___object0, ___method1, method)
// System.Void Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime>::Invoke(Pathfinding.Serialization.JsonFx.JsonWriter,T)
extern "C"  void WriteDelegate_1_Invoke_m3448592485_gshared (WriteDelegate_1_t1937386536 * __this, JsonWriter_t2278751729 * ___writer0, DateTime_t339033936  ___value1, const MethodInfo* method);
#define WriteDelegate_1_Invoke_m3448592485(__this, ___writer0, ___value1, method) ((  void (*) (WriteDelegate_1_t1937386536 *, JsonWriter_t2278751729 *, DateTime_t339033936 , const MethodInfo*))WriteDelegate_1_Invoke_m3448592485_gshared)(__this, ___writer0, ___value1, method)
// System.IAsyncResult Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime>::BeginInvoke(Pathfinding.Serialization.JsonFx.JsonWriter,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WriteDelegate_1_BeginInvoke_m2054724560_gshared (WriteDelegate_1_t1937386536 * __this, JsonWriter_t2278751729 * ___writer0, DateTime_t339033936  ___value1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define WriteDelegate_1_BeginInvoke_m2054724560(__this, ___writer0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (WriteDelegate_1_t1937386536 *, JsonWriter_t2278751729 *, DateTime_t339033936 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))WriteDelegate_1_BeginInvoke_m2054724560_gshared)(__this, ___writer0, ___value1, ___callback2, ___object3, method)
// System.Void Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime>::EndInvoke(System.IAsyncResult)
extern "C"  void WriteDelegate_1_EndInvoke_m854846868_gshared (WriteDelegate_1_t1937386536 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define WriteDelegate_1_EndInvoke_m854846868(__this, ___result0, method) ((  void (*) (WriteDelegate_1_t1937386536 *, Il2CppObject *, const MethodInfo*))WriteDelegate_1_EndInvoke_m854846868_gshared)(__this, ___result0, method)
