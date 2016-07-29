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

// Pathfinding.GraphNodeDelegateCancelable
struct GraphNodeDelegateCancelable_t4016762869;
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

// System.Void Pathfinding.GraphNodeDelegateCancelable::.ctor(System.Object,System.IntPtr)
extern "C"  void GraphNodeDelegateCancelable__ctor_m2251526582 (GraphNodeDelegateCancelable_t4016762869 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GraphNodeDelegateCancelable::Invoke(Pathfinding.GraphNode)
extern "C"  bool GraphNodeDelegateCancelable_Invoke_m3327847184 (GraphNodeDelegateCancelable_t4016762869 * __this, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_GraphNodeDelegateCancelable_t4016762869(Il2CppObject* delegate, GraphNode_t3525007772 * ___node0);
// System.IAsyncResult Pathfinding.GraphNodeDelegateCancelable::BeginInvoke(Pathfinding.GraphNode,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GraphNodeDelegateCancelable_BeginInvoke_m3728464725 (GraphNodeDelegateCancelable_t4016762869 * __this, GraphNode_t3525007772 * ___node0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GraphNodeDelegateCancelable::EndInvoke(System.IAsyncResult)
extern "C"  bool GraphNodeDelegateCancelable_EndInvoke_m3660434834 (GraphNodeDelegateCancelable_t4016762869 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
