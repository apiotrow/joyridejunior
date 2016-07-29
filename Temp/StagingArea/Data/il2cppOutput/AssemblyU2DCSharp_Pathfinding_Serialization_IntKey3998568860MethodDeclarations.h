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

// Pathfinding.Serialization.IntKeyDictionaryConverter
struct IntKeyDictionaryConverter_t3998568860;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Pathfinding.Serialization.IntKeyDictionaryConverter::.ctor()
extern "C"  void IntKeyDictionaryConverter__ctor_m105984281 (IntKeyDictionaryConverter_t3998568860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.IntKeyDictionaryConverter::CanConvert(System.Type)
extern "C"  bool IntKeyDictionaryConverter_CanConvert_m2082500319 (IntKeyDictionaryConverter_t3998568860 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.IntKeyDictionaryConverter::ReadJson(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  Il2CppObject * IntKeyDictionaryConverter_ReadJson_m3235685728 (IntKeyDictionaryConverter_t3998568860 * __this, Type_t * ___type0, Dictionary_2_t2474804324 * ___values1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Pathfinding.Serialization.IntKeyDictionaryConverter::WriteJson(System.Type,System.Object)
extern "C"  Dictionary_2_t2474804324 * IntKeyDictionaryConverter_WriteJson_m108053325 (IntKeyDictionaryConverter_t3998568860 * __this, Type_t * ___type0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
