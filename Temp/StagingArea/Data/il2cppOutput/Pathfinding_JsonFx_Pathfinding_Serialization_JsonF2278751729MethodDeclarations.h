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

// Pathfinding.Serialization.JsonFx.JsonWriter
struct JsonWriter_t2278751729;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// Pathfinding.Serialization.JsonFx.JsonWriterSettings
struct JsonWriterSettings_t3244577588;
// System.Object
struct Il2CppObject;
// System.Enum
struct Enum_t2778772662;
// System.String
struct String_t;
// System.Uri
struct Uri_t2776692961;
// System.Version
struct Version_t497901645;
// System.Collections.IEnumerable
struct IEnumerable_t287189635;
// System.Collections.IDictionary
struct IDictionary_t1654916945;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Enum[]
struct EnumU5BU5D_t3297887155;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF3244577588.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_Guid2778838590.h"
#include "mscorlib_System_Enum2778772662.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Decimal1688557254.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_Version497901645.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_MemberInfo2843033814.h"

// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::.ctor(System.Text.StringBuilder,Pathfinding.Serialization.JsonFx.JsonWriterSettings)
extern "C"  void JsonWriter__ctor_m3320010686 (JsonWriter_t2278751729 * __this, StringBuilder_t3822575854 * ___output0, JsonWriterSettings_t3244577588 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::System.IDisposable.Dispose()
extern "C"  void JsonWriter_System_IDisposable_Dispose_m3492616945 (JsonWriter_t2278751729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Serialization.JsonFx.JsonWriterSettings Pathfinding.Serialization.JsonFx.JsonWriter::get_Settings()
extern "C"  JsonWriterSettings_t3244577588 * JsonWriter_get_Settings_m3312657913 (JsonWriter_t2278751729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Object)
extern "C"  void JsonWriter_Write_m456059081 (JsonWriter_t2278751729 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Object,System.Boolean)
extern "C"  void JsonWriter_Write_m3136003988 (JsonWriter_t2278751729 * __this, Il2CppObject * ___value0, bool ___isProperty1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.DateTime)
extern "C"  void JsonWriter_Write_m1416422445 (JsonWriter_t2278751729 * __this, DateTime_t339033936  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Guid)
extern "C"  void JsonWriter_Write_m203707007 (JsonWriter_t2278751729 * __this, Guid_t2778838590  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Enum)
extern "C"  void JsonWriter_Write_m201663239 (JsonWriter_t2278751729 * __this, Enum_t2778772662 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.String)
extern "C"  void JsonWriter_Write_m233948727 (JsonWriter_t2278751729 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Boolean)
extern "C"  void JsonWriter_Write_m3168498914 (JsonWriter_t2278751729 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Byte)
extern "C"  void JsonWriter_Write_m199219168 (JsonWriter_t2278751729 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.SByte)
extern "C"  void JsonWriter_Write_m2316894095 (JsonWriter_t2278751729 * __this, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Int16)
extern "C"  void JsonWriter_Write_m2071022710 (JsonWriter_t2278751729 * __this, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.UInt16)
extern "C"  void JsonWriter_Write_m774476073 (JsonWriter_t2278751729 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Int32)
extern "C"  void JsonWriter_Write_m2071024508 (JsonWriter_t2278751729 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.UInt32)
extern "C"  void JsonWriter_Write_m774477871 (JsonWriter_t2278751729 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Int64)
extern "C"  void JsonWriter_Write_m2071027453 (JsonWriter_t2278751729 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.UInt64)
extern "C"  void JsonWriter_Write_m774480816 (JsonWriter_t2278751729 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Single)
extern "C"  void JsonWriter_Write_m4210239712 (JsonWriter_t2278751729 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Double)
extern "C"  void JsonWriter_Write_m3960676983 (JsonWriter_t2278751729 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Decimal)
extern "C"  void JsonWriter_Write_m1727967961 (JsonWriter_t2278751729 * __this, Decimal_t1688557254  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Char)
extern "C"  void JsonWriter_Write_m199618386 (JsonWriter_t2278751729 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.TimeSpan)
extern "C"  void JsonWriter_Write_m1701218193 (JsonWriter_t2278751729 * __this, TimeSpan_t763862892  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Uri)
extern "C"  void JsonWriter_Write_m1669553310 (JsonWriter_t2278751729 * __this, Uri_t2776692961 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Version)
extern "C"  void JsonWriter_Write_m3472349746 (JsonWriter_t2278751729 * __this, Version_t497901645 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteArray(System.Collections.IEnumerable)
extern "C"  void JsonWriter_WriteArray_m3196329751 (JsonWriter_t2278751729 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteArrayItem(System.Object)
extern "C"  void JsonWriter_WriteArrayItem_m2875804145 (JsonWriter_t2278751729 * __this, Il2CppObject * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObject(System.Collections.IDictionary)
extern "C"  void JsonWriter_WriteObject_m1204844483 (JsonWriter_t2278751729 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteDictionary(System.Collections.IEnumerable)
extern "C"  void JsonWriter_WriteDictionary_m862648104 (JsonWriter_t2278751729 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObjectProperty(System.String,System.Object)
extern "C"  void JsonWriter_WriteObjectProperty_m92869745 (JsonWriter_t2278751729 * __this, String_t* ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObjectPropertyName(System.String)
extern "C"  void JsonWriter_WriteObjectPropertyName_m3042846680 (JsonWriter_t2278751729 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObjectPropertyValue(System.Object)
extern "C"  void JsonWriter_WriteObjectPropertyValue_m4189700800 (JsonWriter_t2278751729 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObject(System.Object,System.Type,System.Boolean)
extern "C"  void JsonWriter_WriteObject_m2758146720 (JsonWriter_t2278751729 * __this, Il2CppObject * ___value0, Type_t * ___type1, bool ___serializePrivate2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteArrayItemDelim()
extern "C"  void JsonWriter_WriteArrayItemDelim_m2561128782 (JsonWriter_t2278751729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObjectPropertyDelim()
extern "C"  void JsonWriter_WriteObjectPropertyDelim_m4015810770 (JsonWriter_t2278751729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteLine()
extern "C"  void JsonWriter_WriteLine_m3952464063 (JsonWriter_t2278751729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriter::IsIgnored(System.Type,System.Reflection.MemberInfo,System.Object)
extern "C"  bool JsonWriter_IsIgnored_m1265037635 (JsonWriter_t2278751729 * __this, Type_t * ___objType0, MemberInfo_t * ___member1, Il2CppObject * ___obj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriter::IsDefaultValue(System.Reflection.MemberInfo,System.Object)
extern "C"  bool JsonWriter_IsDefaultValue_m1681459346 (JsonWriter_t2278751729 * __this, MemberInfo_t * ___member0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Enum[] Pathfinding.Serialization.JsonFx.JsonWriter::GetFlagList(System.Type,System.Object)
extern "C"  EnumU5BU5D_t3297887155* JsonWriter_GetFlagList_m4244203690 (Il2CppObject * __this /* static, unused */, Type_t * ___enumType0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriter::InvalidIeee754(System.Decimal)
extern "C"  bool JsonWriter_InvalidIeee754_m2029422535 (JsonWriter_t2278751729 * __this, Decimal_t1688557254  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
