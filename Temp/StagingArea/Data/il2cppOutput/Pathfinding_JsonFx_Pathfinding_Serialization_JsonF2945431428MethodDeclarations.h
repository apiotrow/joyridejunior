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

// Pathfinding.Serialization.JsonFx.JsonReaderSettings
struct JsonReaderSettings_t2945431428;
// System.String
struct String_t;
// Pathfinding.Serialization.JsonFx.JsonConverter
struct JsonConverter_t1062986702;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Type2779229935.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF1062986702.h"

// System.Void Pathfinding.Serialization.JsonFx.JsonReaderSettings::.ctor()
extern "C"  void JsonReaderSettings__ctor_m298179387 (JsonReaderSettings_t2945431428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::get_HandleCyclicReferences()
extern "C"  bool JsonReaderSettings_get_HandleCyclicReferences_m3959955387 (JsonReaderSettings_t2945431428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::get_AllowUnquotedObjectKeys()
extern "C"  bool JsonReaderSettings_get_AllowUnquotedObjectKeys_m2993889901 (JsonReaderSettings_t2945431428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::IsTypeHintName(System.String)
extern "C"  bool JsonReaderSettings_IsTypeHintName_m2115719875 (JsonReaderSettings_t2945431428 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Serialization.JsonFx.JsonConverter Pathfinding.Serialization.JsonFx.JsonReaderSettings::GetConverter(System.Type)
extern "C"  JsonConverter_t1062986702 * JsonReaderSettings_GetConverter_m1813240067 (JsonReaderSettings_t2945431428 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonReaderSettings::AddTypeConverter(Pathfinding.Serialization.JsonFx.JsonConverter)
extern "C"  void JsonReaderSettings_AddTypeConverter_m4147446306 (JsonReaderSettings_t2945431428 * __this, JsonConverter_t1062986702 * ___converter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
