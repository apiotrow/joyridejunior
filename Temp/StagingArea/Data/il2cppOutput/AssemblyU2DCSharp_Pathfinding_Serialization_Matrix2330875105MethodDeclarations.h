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

// Pathfinding.Serialization.MatrixConverter
struct MatrixConverter_t2330875105;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Pathfinding.Serialization.MatrixConverter::.ctor()
extern "C"  void MatrixConverter__ctor_m3184807796 (MatrixConverter_t2330875105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.MatrixConverter::CanConvert(System.Type)
extern "C"  bool MatrixConverter_CanConvert_m362088506 (MatrixConverter_t2330875105 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.MatrixConverter::ReadJson(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  Il2CppObject * MatrixConverter_ReadJson_m3836452069 (MatrixConverter_t2330875105 * __this, Type_t * ___objectType0, Dictionary_2_t2474804324 * ___values1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Pathfinding.Serialization.MatrixConverter::WriteJson(System.Type,System.Object)
extern "C"  Dictionary_2_t2474804324 * MatrixConverter_WriteJson_m1486336978 (MatrixConverter_t2330875105 * __this, Type_t * ___type0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
