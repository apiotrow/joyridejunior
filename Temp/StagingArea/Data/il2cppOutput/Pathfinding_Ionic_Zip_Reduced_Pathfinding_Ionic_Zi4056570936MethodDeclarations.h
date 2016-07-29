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

// Pathfinding.Ionic.Zip.OpenDelegate
struct OpenDelegate_t4056570936;
// System.Object
struct Il2CppObject;
// System.IO.Stream
struct Stream_t219029575;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Pathfinding.Ionic.Zip.OpenDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OpenDelegate__ctor_m1787963372 (OpenDelegate_t4056570936 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.OpenDelegate::Invoke(System.String)
extern "C"  Stream_t219029575 * OpenDelegate_Invoke_m3113455726 (OpenDelegate_t4056570936 * __this, String_t* ___entryName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Stream_t219029575 * pinvoke_delegate_wrapper_OpenDelegate_t4056570936(Il2CppObject* delegate, String_t* ___entryName0);
// System.IAsyncResult Pathfinding.Ionic.Zip.OpenDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OpenDelegate_BeginInvoke_m3013575169 (OpenDelegate_t4056570936 * __this, String_t* ___entryName0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.OpenDelegate::EndInvoke(System.IAsyncResult)
extern "C"  Stream_t219029575 * OpenDelegate_EndInvoke_m2533150026 (OpenDelegate_t4056570936 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
