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

// System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>
struct Node_t19371549;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.RBTree/Node
struct Node_t2433570;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "System_System_Collections_Generic_RBTree_Node2433570.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23312956448.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"

// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::.ctor(TKey)
extern "C"  void Node__ctor_m650426770_gshared (Node_t19371549 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Node__ctor_m650426770(__this, ___key0, method) ((  void (*) (Node_t19371549 *, Il2CppObject *, const MethodInfo*))Node__ctor_m650426770_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C"  void Node__ctor_m2551070487_gshared (Node_t19371549 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Node__ctor_m2551070487(__this, ___key0, ___value1, method) ((  void (*) (Node_t19371549 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Node__ctor_m2551070487_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::SwapValue(System.Collections.Generic.RBTree/Node)
extern "C"  void Node_SwapValue_m4112474117_gshared (Node_t19371549 * __this, Node_t2433570 * ___other0, const MethodInfo* method);
#define Node_SwapValue_m4112474117(__this, ___other0, method) ((  void (*) (Node_t19371549 *, Node_t2433570 *, const MethodInfo*))Node_SwapValue_m4112474117_gshared)(__this, ___other0, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::AsKV()
extern "C"  KeyValuePair_2_t3312956448  Node_AsKV_m3931249332_gshared (Node_t19371549 * __this, const MethodInfo* method);
#define Node_AsKV_m3931249332(__this, method) ((  KeyValuePair_2_t3312956448  (*) (Node_t19371549 *, const MethodInfo*))Node_AsKV_m3931249332_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::AsDE()
extern "C"  DictionaryEntry_t130027246  Node_AsDE_m2939580031_gshared (Node_t19371549 * __this, const MethodInfo* method);
#define Node_AsDE_m2939580031(__this, method) ((  DictionaryEntry_t130027246  (*) (Node_t19371549 *, const MethodInfo*))Node_AsDE_m2939580031_gshared)(__this, method)
