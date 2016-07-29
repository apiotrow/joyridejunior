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

// Pathfinding.Ionic.Zip.WriteDelegate
struct WriteDelegate_t356517005;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t219029575;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Pathfinding.Ionic.Zip.WriteDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void WriteDelegate__ctor_m3877162565 (WriteDelegate_t356517005 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.WriteDelegate::Invoke(System.String,System.IO.Stream)
extern "C"  void WriteDelegate_Invoke_m3416700666 (WriteDelegate_t356517005 * __this, String_t* ___entryName0, Stream_t219029575 * ___stream1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_WriteDelegate_t356517005(Il2CppObject* delegate, String_t* ___entryName0, Stream_t219029575 * ___stream1);
// System.IAsyncResult Pathfinding.Ionic.Zip.WriteDelegate::BeginInvoke(System.String,System.IO.Stream,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WriteDelegate_BeginInvoke_m1765896535 (WriteDelegate_t356517005 * __this, String_t* ___entryName0, Stream_t219029575 * ___stream1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.WriteDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void WriteDelegate_EndInvoke_m2981112533 (WriteDelegate_t356517005 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
