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

// NodeDelegate
struct NodeDelegate_t128590279;
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

// System.Void NodeDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void NodeDelegate__ctor_m2854513390 (NodeDelegate_t128590279 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NodeDelegate::Invoke(Pathfinding.GraphNode)
extern "C"  void NodeDelegate_Invoke_m3562256164 (NodeDelegate_t128590279 * __this, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_NodeDelegate_t128590279(Il2CppObject* delegate, GraphNode_t3525007772 * ___node0);
// System.IAsyncResult NodeDelegate::BeginInvoke(Pathfinding.GraphNode,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * NodeDelegate_BeginInvoke_m2910587029 (NodeDelegate_t128590279 * __this, GraphNode_t3525007772 * ___node0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NodeDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void NodeDelegate_EndInvoke_m2337178622 (NodeDelegate_t128590279 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
