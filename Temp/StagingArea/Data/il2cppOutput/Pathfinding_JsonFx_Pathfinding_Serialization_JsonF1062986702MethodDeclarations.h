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

// Pathfinding.Serialization.JsonFx.JsonConverter
struct JsonConverter_t1062986702;
// Pathfinding.Serialization.JsonFx.JsonWriter
struct JsonWriter_t2278751729;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// Pathfinding.Serialization.JsonFx.JsonReader
struct JsonReader_t2123346497;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF2278751729.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF2123346497.h"

// System.Void Pathfinding.Serialization.JsonFx.JsonConverter::.ctor()
extern "C"  void JsonConverter__ctor_m98638373 (JsonConverter_t1062986702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonConverter::Write(Pathfinding.Serialization.JsonFx.JsonWriter,System.Type,System.Object)
extern "C"  void JsonConverter_Write_m275892874 (JsonConverter_t1062986702 * __this, JsonWriter_t2278751729 * ___writer0, Type_t * ___type1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.JsonConverter::Read(Pathfinding.Serialization.JsonFx.JsonReader,System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  Il2CppObject * JsonConverter_Read_m2924094753 (JsonConverter_t1062986702 * __this, JsonReader_t2123346497 * ___reader0, Type_t * ___type1, Dictionary_2_t2474804324 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.Serialization.JsonFx.JsonConverter::CastFloat(System.Object)
extern "C"  float JsonConverter_CastFloat_m2051699328 (JsonConverter_t1062986702 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
