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

// OnPathDelegate
struct OnPathDelegate_t598607977;
// System.Object
struct Il2CppObject;
// Pathfinding.Path
struct Path_t2697364881;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_Pathfinding_Path2697364881.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void OnPathDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnPathDelegate__ctor_m314248848 (OnPathDelegate_t598607977 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnPathDelegate::Invoke(Pathfinding.Path)
extern "C"  void OnPathDelegate_Invoke_m2170870395 (OnPathDelegate_t598607977 * __this, Path_t2697364881 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnPathDelegate_t598607977(Il2CppObject* delegate, Path_t2697364881 * ___p0);
// System.IAsyncResult OnPathDelegate::BeginInvoke(Pathfinding.Path,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnPathDelegate_BeginInvoke_m1594587892 (OnPathDelegate_t598607977 * __this, Path_t2697364881 * ___p0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnPathDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnPathDelegate_EndInvoke_m4286335136 (OnPathDelegate_t598607977 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
