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

// OnScanDelegate
struct OnScanDelegate_t3165885121;
// System.Object
struct Il2CppObject;
// AstarPath
struct AstarPath_t4090270936;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_AstarPath4090270936.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void OnScanDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnScanDelegate__ctor_m2264157416 (OnScanDelegate_t3165885121 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnScanDelegate::Invoke(AstarPath)
extern "C"  void OnScanDelegate_Invoke_m2985764696 (OnScanDelegate_t3165885121 * __this, AstarPath_t4090270936 * ___script0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnScanDelegate_t3165885121(Il2CppObject* delegate, AstarPath_t4090270936 * ___script0);
// System.IAsyncResult OnScanDelegate::BeginInvoke(AstarPath,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnScanDelegate_BeginInvoke_m3543284909 (OnScanDelegate_t3165885121 * __this, AstarPath_t4090270936 * ___script0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnScanDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnScanDelegate_EndInvoke_m3523375864 (OnScanDelegate_t3165885121 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
