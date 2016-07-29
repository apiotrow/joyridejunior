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

// GetNextTargetDelegate
struct GetNextTargetDelegate_t3556046303;
// System.Object
struct Il2CppObject;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
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
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Vector33525329789MethodDeclarations.h"
#include "UnityEngine_ArrayTypes.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void GetNextTargetDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void GetNextTargetDelegate__ctor_m4115941942 (GetNextTargetDelegate_t3556046303 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] GetNextTargetDelegate::Invoke(Pathfinding.Path,UnityEngine.Vector3)
extern "C"  Vector3U5BU5D_t3227571696* GetNextTargetDelegate_Invoke_m76487644 (GetNextTargetDelegate_t3556046303 * __this, Path_t2697364881 * ___p0, Vector3_t3525329789  ___currentPosition1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Vector3U5BU5D_t3227571696* pinvoke_delegate_wrapper_GetNextTargetDelegate_t3556046303(Il2CppObject* delegate, Path_t2697364881 * ___p0, Vector3_t3525329789  ___currentPosition1);
// System.IAsyncResult GetNextTargetDelegate::BeginInvoke(Pathfinding.Path,UnityEngine.Vector3,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GetNextTargetDelegate_BeginInvoke_m1684172319 (GetNextTargetDelegate_t3556046303 * __this, Path_t2697364881 * ___p0, Vector3_t3525329789  ___currentPosition1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] GetNextTargetDelegate::EndInvoke(System.IAsyncResult)
extern "C"  Vector3U5BU5D_t3227571696* GetNextTargetDelegate_EndInvoke_m19722350 (GetNextTargetDelegate_t3556046303 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
