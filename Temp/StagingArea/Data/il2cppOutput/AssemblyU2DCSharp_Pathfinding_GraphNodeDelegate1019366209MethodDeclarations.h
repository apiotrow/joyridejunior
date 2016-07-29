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

// Pathfinding.GraphNodeDelegate
struct GraphNodeDelegate_t1019366209;
// System.Object
struct Il2CppObject;
// Pathfinding.GraphNode
struct GraphNode_t3525007772;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Pathfinding.GraphNodeDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void GraphNodeDelegate__ctor_m2065203330 (GraphNodeDelegate_t1019366209 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNodeDelegate::Invoke(Pathfinding.GraphNode)
extern "C"  void GraphNodeDelegate_Invoke_m2762306832 (GraphNodeDelegate_t1019366209 * __this, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GraphNodeDelegate_t1019366209(Il2CppObject* delegate, GraphNode_t3525007772 * ___node0);
// System.IAsyncResult Pathfinding.GraphNodeDelegate::BeginInvoke(Pathfinding.GraphNode,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GraphNodeDelegate_BeginInvoke_m2644323849 (GraphNodeDelegate_t1019366209 * __this, GraphNode_t3525007772 * ___node0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNodeDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void GraphNodeDelegate_EndInvoke_m3308553106 (GraphNodeDelegate_t1019366209 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
