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

// Pathfinding.Serialization.VectorConverter
struct VectorConverter_t930061727;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Pathfinding.Serialization.VectorConverter::.ctor()
extern "C"  void VectorConverter__ctor_m2294676598 (VectorConverter_t930061727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.VectorConverter::CanConvert(System.Type)
extern "C"  bool VectorConverter_CanConvert_m1256223036 (VectorConverter_t930061727 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.VectorConverter::ReadJson(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  Il2CppObject * VectorConverter_ReadJson_m3571420323 (VectorConverter_t930061727 * __this, Type_t * ___type0, Dictionary_2_t2474804324 * ___values1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Pathfinding.Serialization.VectorConverter::WriteJson(System.Type,System.Object)
extern "C"  Dictionary_2_t2474804324 * VectorConverter_WriteJson_m278560272 (VectorConverter_t930061727 * __this, Type_t * ___type0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
