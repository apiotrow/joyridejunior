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

// System.ComponentModel.ReflectionEventDescriptor
struct ReflectionEventDescriptor_t3536672903;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Type
struct Type_t;
// System.ComponentModel.EventDescriptor
struct EventDescriptor_t2067537970;
// System.Attribute[]
struct AttributeU5BU5D_t4076389004;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_EventInfo4226116758.h"
#include "mscorlib_System_Type2779229935.h"
#include "System_System_ComponentModel_EventDescriptor2067537970.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.ComponentModel.ReflectionEventDescriptor::.ctor(System.Reflection.EventInfo)
extern "C"  void ReflectionEventDescriptor__ctor_m997288511 (ReflectionEventDescriptor_t3536672903 * __this, EventInfo_t * ___eventInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionEventDescriptor::.ctor(System.Type,System.ComponentModel.EventDescriptor,System.Attribute[])
extern "C"  void ReflectionEventDescriptor__ctor_m3497071543 (ReflectionEventDescriptor_t3536672903 * __this, Type_t * ___componentType0, EventDescriptor_t2067537970 * ___oldEventDescriptor1, AttributeU5BU5D_t4076389004* ___attrs2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionEventDescriptor::.ctor(System.Type,System.String,System.Type,System.Attribute[])
extern "C"  void ReflectionEventDescriptor__ctor_m2529362926 (ReflectionEventDescriptor_t3536672903 * __this, Type_t * ___componentType0, String_t* ___name1, Type_t * ___type2, AttributeU5BU5D_t4076389004* ___attrs3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ReflectionEventDescriptor::get_EventType()
extern "C"  Type_t * ReflectionEventDescriptor_get_EventType_m1050095858 (ReflectionEventDescriptor_t3536672903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
