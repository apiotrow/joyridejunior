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

// Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc
struct CompressFunc_t1605129574;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl3710307231.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl1868319673.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc::.ctor(System.Object,System.IntPtr)
extern "C"  void CompressFunc__ctor_m4274414016 (CompressFunc_t1605129574 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.BlockState Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc::Invoke(Pathfinding.Ionic.Zlib.FlushType)
extern "C"  int32_t CompressFunc_Invoke_m2331302315 (CompressFunc_t1605129574 * __this, int32_t ___flush0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t pinvoke_delegate_wrapper_CompressFunc_t1605129574(Il2CppObject* delegate, int32_t ___flush0);
// System.IAsyncResult Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc::BeginInvoke(Pathfinding.Ionic.Zlib.FlushType,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompressFunc_BeginInvoke_m781478470 (CompressFunc_t1605129574 * __this, int32_t ___flush0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.BlockState Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompressFunc_EndInvoke_m3183434290 (CompressFunc_t1605129574 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
