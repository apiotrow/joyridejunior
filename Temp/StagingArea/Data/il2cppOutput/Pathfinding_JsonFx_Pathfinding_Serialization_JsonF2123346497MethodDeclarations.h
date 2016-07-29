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

// Pathfinding.Serialization.JsonFx.JsonReader
struct JsonReader_t2123346497;
// System.String
struct String_t;
// Pathfinding.Serialization.JsonFx.JsonReaderSettings
struct JsonReaderSettings_t2945431428;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>
struct Dictionary_2_t185764422;
// System.Collections.IEnumerable
struct IEnumerable_t287189635;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF2945431428.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonFx631816231.h"

// System.Void Pathfinding.Serialization.JsonFx.JsonReader::.ctor(System.String,Pathfinding.Serialization.JsonFx.JsonReaderSettings)
extern "C"  void JsonReader__ctor_m1588328406 (JsonReader_t2123346497 * __this, String_t* ___input0, JsonReaderSettings_t2945431428 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonReader::.cctor()
extern "C"  void JsonReader__cctor_m3807380559 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::Deserialize(System.Type)
extern "C"  Il2CppObject * JsonReader_Deserialize_m3202272201 (JsonReader_t2123346497 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::Read(System.Type,System.Boolean)
extern "C"  Il2CppObject * JsonReader_Read_m1957631563 (JsonReader_t2123346497 * __this, Type_t * ___expectedType0, bool ___typeIsHint1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonReader::PopulateObject(System.Object&)
extern "C"  void JsonReader_PopulateObject_m3291320615 (JsonReader_t2123346497 * __this, Il2CppObject ** ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::ReadObject(System.Type)
extern "C"  Il2CppObject * JsonReader_ReadObject_m649863795 (JsonReader_t2123346497 * __this, Type_t * ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Pathfinding.Serialization.JsonFx.JsonReader::GetGenericDictionaryType(System.Type)
extern "C"  Type_t * JsonReader_GetGenericDictionaryType_m2489104668 (JsonReader_t2123346497 * __this, Type_t * ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonReader::PopulateObject(System.Object&,System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>,System.Type)
extern "C"  void JsonReader_PopulateObject_m1213129480 (JsonReader_t2123346497 * __this, Il2CppObject ** ___result0, Type_t * ___objectType1, Dictionary_2_t185764422 * ___memberMap2, Type_t * ___genericDictionaryType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable Pathfinding.Serialization.JsonFx.JsonReader::ReadArray(System.Type)
extern "C"  Il2CppObject * JsonReader_ReadArray_m4139571658 (JsonReader_t2123346497 * __this, Type_t * ___arrayType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Serialization.JsonFx.JsonReader::ReadUnquotedKey()
extern "C"  String_t* JsonReader_ReadUnquotedKey_m1713113799 (JsonReader_t2123346497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::ReadString(System.Type)
extern "C"  Il2CppObject * JsonReader_ReadString_m2674412257 (JsonReader_t2123346497 * __this, Type_t * ___expectedType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::ReadNumber(System.Type)
extern "C"  Il2CppObject * JsonReader_ReadNumber_m757648041 (JsonReader_t2123346497 * __this, Type_t * ___expectedType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Serialization.JsonFx.JsonToken Pathfinding.Serialization.JsonFx.JsonReader::Tokenize()
extern "C"  int32_t JsonReader_Tokenize_m4160635357 (JsonReader_t2123346497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Serialization.JsonFx.JsonToken Pathfinding.Serialization.JsonFx.JsonReader::Tokenize(System.Boolean)
extern "C"  int32_t JsonReader_Tokenize_m1850339476 (JsonReader_t2123346497 * __this, bool ___allowUnquotedString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReader::MatchLiteral(System.String)
extern "C"  bool JsonReader_MatchLiteral_m923120850 (JsonReader_t2123346497 * __this, String_t* ___literal0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
