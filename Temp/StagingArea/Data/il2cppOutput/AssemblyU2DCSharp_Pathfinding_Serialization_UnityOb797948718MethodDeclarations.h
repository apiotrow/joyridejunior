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

// Pathfinding.Serialization.UnityObjectConverter
struct UnityObjectConverter_t797948718;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Pathfinding.Serialization.UnityObjectConverter::.ctor()
extern "C"  void UnityObjectConverter__ctor_m2050870311 (UnityObjectConverter_t797948718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.UnityObjectConverter::CanConvert(System.Type)
extern "C"  bool UnityObjectConverter_CanConvert_m27315205 (UnityObjectConverter_t797948718 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.UnityObjectConverter::ReadJson(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  Il2CppObject * UnityObjectConverter_ReadJson_m1475047260 (UnityObjectConverter_t797948718 * __this, Type_t * ___objectType0, Dictionary_2_t2474804324 * ___values1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Pathfinding.Serialization.UnityObjectConverter::WriteJson(System.Type,System.Object)
extern "C"  Dictionary_2_t2474804324 * UnityObjectConverter_WriteJson_m3040245943 (UnityObjectConverter_t797948718 * __this, Type_t * ___type0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
