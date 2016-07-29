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

// Pathfinding.Serialization.JsonFx.JsonWriterSettings
struct JsonWriterSettings_t3244577588;
// System.String
struct String_t;
// Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime>
struct WriteDelegate_1_t1937386536;
// Pathfinding.Serialization.JsonFx.JsonConverter
struct JsonConverter_t1062986702;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF1062986702.h"

// System.Void Pathfinding.Serialization.JsonFx.JsonWriterSettings::.ctor()
extern "C"  void JsonWriterSettings__ctor_m946693515 (JsonWriterSettings_t3244577588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_HandleCyclicReferences()
extern "C"  bool JsonWriterSettings_get_HandleCyclicReferences_m1680156523 (JsonWriterSettings_t3244577588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_TypeHintName()
extern "C"  String_t* JsonWriterSettings_get_TypeHintName_m5140843 (JsonWriterSettings_t3244577588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_PrettyPrint()
extern "C"  bool JsonWriterSettings_get_PrettyPrint_m817954679 (JsonWriterSettings_t3244577588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriterSettings::set_PrettyPrint(System.Boolean)
extern "C"  void JsonWriterSettings_set_PrettyPrint_m3532634586 (JsonWriterSettings_t3244577588 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_Tab()
extern "C"  String_t* JsonWriterSettings_get_Tab_m629898552 (JsonWriterSettings_t3244577588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_NewLine()
extern "C"  String_t* JsonWriterSettings_get_NewLine_m177139351 (JsonWriterSettings_t3244577588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_MaxDepth()
extern "C"  int32_t JsonWriterSettings_get_MaxDepth_m1911450087 (JsonWriterSettings_t3244577588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_UseXmlSerializationAttributes()
extern "C"  bool JsonWriterSettings_get_UseXmlSerializationAttributes_m2162988055 (JsonWriterSettings_t3244577588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime> Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_DateTimeSerializer()
extern "C"  WriteDelegate_1_t1937386536 * JsonWriterSettings_get_DateTimeSerializer_m1011810803 (JsonWriterSettings_t3244577588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_DebugMode()
extern "C"  bool JsonWriterSettings_get_DebugMode_m4262594102 (JsonWriterSettings_t3244577588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Serialization.JsonFx.JsonConverter Pathfinding.Serialization.JsonFx.JsonWriterSettings::GetConverter(System.Type)
extern "C"  JsonConverter_t1062986702 * JsonWriterSettings_GetConverter_m4109070163 (JsonWriterSettings_t3244577588 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriterSettings::AddTypeConverter(Pathfinding.Serialization.JsonFx.JsonConverter)
extern "C"  void JsonWriterSettings_AddTypeConverter_m2130440658 (JsonWriterSettings_t3244577588 * __this, JsonConverter_t1062986702 * ___converter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
