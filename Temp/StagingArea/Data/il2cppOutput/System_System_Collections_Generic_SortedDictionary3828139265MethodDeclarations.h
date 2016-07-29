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

// System.Collections.Generic.SortedDictionary`2/Node<System.Int32,System.Int32>
struct Node_t3828139265;
// System.Collections.Generic.RBTree/Node
struct Node_t2433570;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_RBTree_Node2433570.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22826756868.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"

// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Int32,System.Int32>::.ctor(TKey)
extern "C"  void Node__ctor_m1468397198_gshared (Node_t3828139265 * __this, int32_t ___key0, const MethodInfo* method);
#define Node__ctor_m1468397198(__this, ___key0, method) ((  void (*) (Node_t3828139265 *, int32_t, const MethodInfo*))Node__ctor_m1468397198_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Int32,System.Int32>::.ctor(TKey,TValue)
extern "C"  void Node__ctor_m1146728091_gshared (Node_t3828139265 * __this, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Node__ctor_m1146728091(__this, ___key0, ___value1, method) ((  void (*) (Node_t3828139265 *, int32_t, int32_t, const MethodInfo*))Node__ctor_m1146728091_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Int32,System.Int32>::SwapValue(System.Collections.Generic.RBTree/Node)
extern "C"  void Node_SwapValue_m2751922177_gshared (Node_t3828139265 * __this, Node_t2433570 * ___other0, const MethodInfo* method);
#define Node_SwapValue_m2751922177(__this, ___other0, method) ((  void (*) (Node_t3828139265 *, Node_t2433570 *, const MethodInfo*))Node_SwapValue_m2751922177_gshared)(__this, ___other0, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Node<System.Int32,System.Int32>::AsKV()
extern "C"  KeyValuePair_2_t2826756868  Node_AsKV_m3876332600_gshared (Node_t3828139265 * __this, const MethodInfo* method);
#define Node_AsKV_m3876332600(__this, method) ((  KeyValuePair_2_t2826756868  (*) (Node_t3828139265 *, const MethodInfo*))Node_AsKV_m3876332600_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.SortedDictionary`2/Node<System.Int32,System.Int32>::AsDE()
extern "C"  DictionaryEntry_t130027246  Node_AsDE_m871727427_gshared (Node_t3828139265 * __this, const MethodInfo* method);
#define Node_AsDE_m871727427(__this, method) ((  DictionaryEntry_t130027246  (*) (Node_t3828139265 *, const MethodInfo*))Node_AsDE_m871727427_gshared)(__this, method)
