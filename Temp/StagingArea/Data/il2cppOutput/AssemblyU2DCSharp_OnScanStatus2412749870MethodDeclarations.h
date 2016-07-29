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

// OnScanStatus
struct OnScanStatus_t2412749870;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_Pathfinding_Progress1758450585.h"
#include "AssemblyU2DCSharp_Pathfinding_Progress1758450585MethodDeclarations.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void OnScanStatus::.ctor(System.Object,System.IntPtr)
extern "C"  void OnScanStatus__ctor_m3853977045 (OnScanStatus_t2412749870 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnScanStatus::Invoke(Pathfinding.Progress)
extern "C"  void OnScanStatus_Invoke_m1982171384 (OnScanStatus_t2412749870 * __this, Progress_t1758450585  ___progress0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnScanStatus_t2412749870(Il2CppObject* delegate, Progress_t1758450585  ___progress0);
// System.IAsyncResult OnScanStatus::BeginInvoke(Pathfinding.Progress,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnScanStatus_BeginInvoke_m760531201 (OnScanStatus_t2412749870 * __this, Progress_t1758450585  ___progress0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnScanStatus::EndInvoke(System.IAsyncResult)
extern "C"  void OnScanStatus_EndInvoke_m1857596005 (OnScanStatus_t2412749870 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
