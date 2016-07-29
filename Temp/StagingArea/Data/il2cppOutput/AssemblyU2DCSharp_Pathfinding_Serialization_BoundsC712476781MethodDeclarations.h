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

// Pathfinding.Serialization.BoundsConverter
struct BoundsConverter_t712476781;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Pathfinding.Serialization.BoundsConverter::.ctor()
extern "C"  void BoundsConverter__ctor_m3256768872 (BoundsConverter_t712476781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.BoundsConverter::CanConvert(System.Type)
extern "C"  bool BoundsConverter_CanConvert_m546613806 (BoundsConverter_t712476781 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.BoundsConverter::ReadJson(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  Il2CppObject * BoundsConverter_ReadJson_m1104733809 (BoundsConverter_t712476781 * __this, Type_t * ___objectType0, Dictionary_2_t2474804324 * ___values1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Pathfinding.Serialization.BoundsConverter::WriteJson(System.Type,System.Object)
extern "C"  Dictionary_2_t2474804324 * BoundsConverter_WriteJson_m657055326 (BoundsConverter_t712476781 * __this, Type_t * ___type0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
