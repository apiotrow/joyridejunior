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

// Pathfinding.Serialization.GuidConverter
struct GuidConverter_t53866265;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Pathfinding.Serialization.GuidConverter::.ctor()
extern "C"  void GuidConverter__ctor_m407971900 (GuidConverter_t53866265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.GuidConverter::CanConvert(System.Type)
extern "C"  bool GuidConverter_CanConvert_m3211800066 (GuidConverter_t53866265 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.GuidConverter::ReadJson(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  Il2CppObject * GuidConverter_ReadJson_m4294155741 (GuidConverter_t53866265 * __this, Type_t * ___objectType0, Dictionary_2_t2474804324 * ___values1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Pathfinding.Serialization.GuidConverter::WriteJson(System.Type,System.Object)
extern "C"  Dictionary_2_t2474804324 * GuidConverter_WriteJson_m3722991882 (GuidConverter_t53866265 * __this, Type_t * ___type0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
