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

// OnGraphDelegate
struct OnGraphDelegate_t381382964;
// System.Object
struct Il2CppObject;
// Pathfinding.NavGraph
struct NavGraph_t535983959;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_Pathfinding_NavGraph535983959.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void OnGraphDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnGraphDelegate__ctor_m1671491851 (OnGraphDelegate_t381382964 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnGraphDelegate::Invoke(Pathfinding.NavGraph)
extern "C"  void OnGraphDelegate_Invoke_m2768726192 (OnGraphDelegate_t381382964 * __this, NavGraph_t535983959 * ___graph0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnGraphDelegate_t381382964(Il2CppObject* delegate, NavGraph_t535983959 * ___graph0);
// System.IAsyncResult OnGraphDelegate::BeginInvoke(Pathfinding.NavGraph,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnGraphDelegate_BeginInvoke_m1604982765 (OnGraphDelegate_t381382964 * __this, NavGraph_t535983959 * ___graph0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnGraphDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnGraphDelegate_EndInvoke_m3298074779 (OnGraphDelegate_t381382964 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
