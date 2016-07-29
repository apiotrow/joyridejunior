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

// Pathfinding.Ionic.Zip.SetCompressionCallback
struct SetCompressionCallback_t727837266;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl1823839577.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Pathfinding.Ionic.Zip.SetCompressionCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void SetCompressionCallback__ctor_m1641792390 (SetCompressionCallback_t727837266 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zip.SetCompressionCallback::Invoke(System.String,System.String)
extern "C"  int32_t SetCompressionCallback_Invoke_m2982684086 (SetCompressionCallback_t727837266 * __this, String_t* ___localFileName0, String_t* ___fileNameInArchive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t pinvoke_delegate_wrapper_SetCompressionCallback_t727837266(Il2CppObject* delegate, String_t* ___localFileName0, String_t* ___fileNameInArchive1);
// System.IAsyncResult Pathfinding.Ionic.Zip.SetCompressionCallback::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SetCompressionCallback_BeginInvoke_m4252911787 (SetCompressionCallback_t727837266 * __this, String_t* ___localFileName0, String_t* ___fileNameInArchive1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zip.SetCompressionCallback::EndInvoke(System.IAsyncResult)
extern "C"  int32_t SetCompressionCallback_EndInvoke_m2622668862 (SetCompressionCallback_t727837266 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
