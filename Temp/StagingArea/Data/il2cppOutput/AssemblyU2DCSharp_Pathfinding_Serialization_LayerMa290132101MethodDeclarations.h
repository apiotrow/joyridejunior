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

// Pathfinding.Serialization.LayerMaskConverter
struct LayerMaskConverter_t290132101;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Pathfinding.Serialization.LayerMaskConverter::.ctor()
extern "C"  void LayerMaskConverter__ctor_m3951662256 (LayerMaskConverter_t290132101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.LayerMaskConverter::CanConvert(System.Type)
extern "C"  bool LayerMaskConverter_CanConvert_m3824002446 (LayerMaskConverter_t290132101 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.LayerMaskConverter::ReadJson(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  Il2CppObject * LayerMaskConverter_ReadJson_m3964092787 (LayerMaskConverter_t290132101 * __this, Type_t * ___type0, Dictionary_2_t2474804324 * ___values1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Pathfinding.Serialization.LayerMaskConverter::WriteJson(System.Type,System.Object)
extern "C"  Dictionary_2_t2474804324 * LayerMaskConverter_WriteJson_m3012083662 (LayerMaskConverter_t290132101 * __this, Type_t * ___type0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
