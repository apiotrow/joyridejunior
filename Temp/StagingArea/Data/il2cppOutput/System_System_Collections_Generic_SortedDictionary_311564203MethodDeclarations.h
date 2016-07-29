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

// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,System.Int32>
struct NodeHelper_t311564203;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t1252154900;
// System.Collections.Generic.RBTree/Node
struct Node_t2433570;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_RBTree_Node2433570.h"

// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IComparer`1<TKey>)
extern "C"  void NodeHelper__ctor_m4053509944_gshared (NodeHelper_t311564203 * __this, Il2CppObject* ___cmp0, const MethodInfo* method);
#define NodeHelper__ctor_m4053509944(__this, ___cmp0, method) ((  void (*) (NodeHelper_t311564203 *, Il2CppObject*, const MethodInfo*))NodeHelper__ctor_m4053509944_gshared)(__this, ___cmp0, method)
// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,System.Int32>::.cctor()
extern "C"  void NodeHelper__cctor_m108460070_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define NodeHelper__cctor_m108460070(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))NodeHelper__cctor_m108460070_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,System.Int32>::Compare(TKey,System.Collections.Generic.RBTree/Node)
extern "C"  int32_t NodeHelper_Compare_m1351679043_gshared (NodeHelper_t311564203 * __this, int32_t ___key0, Node_t2433570 * ___node1, const MethodInfo* method);
#define NodeHelper_Compare_m1351679043(__this, ___key0, ___node1, method) ((  int32_t (*) (NodeHelper_t311564203 *, int32_t, Node_t2433570 *, const MethodInfo*))NodeHelper_Compare_m1351679043_gshared)(__this, ___key0, ___node1, method)
// System.Collections.Generic.RBTree/Node System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,System.Int32>::CreateNode(TKey)
extern "C"  Node_t2433570 * NodeHelper_CreateNode_m554812773_gshared (NodeHelper_t311564203 * __this, int32_t ___key0, const MethodInfo* method);
#define NodeHelper_CreateNode_m554812773(__this, ___key0, method) ((  Node_t2433570 * (*) (NodeHelper_t311564203 *, int32_t, const MethodInfo*))NodeHelper_CreateNode_m554812773_gshared)(__this, ___key0, method)
// System.Collections.Generic.SortedDictionary`2/NodeHelper<TKey,TValue> System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,System.Int32>::GetHelper(System.Collections.Generic.IComparer`1<TKey>)
extern "C"  NodeHelper_t311564203 * NodeHelper_GetHelper_m2302096572_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject* ___cmp0, const MethodInfo* method);
#define NodeHelper_GetHelper_m2302096572(__this /* static, unused */, ___cmp0, method) ((  NodeHelper_t311564203 * (*) (Il2CppObject * /* static, unused */, Il2CppObject*, const MethodInfo*))NodeHelper_GetHelper_m2302096572_gshared)(__this /* static, unused */, ___cmp0, method)
