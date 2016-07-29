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

// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t3995075053;
// System.ComponentModel.MemberDescriptor
struct MemberDescriptor_t1680589938;
// System.Attribute[]
struct AttributeU5BU5D_t4076389004;
// System.String
struct String_t;
// System.Collections.IList
struct IList_t1612618265;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_MemberDescriptor1680589938.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.ComponentModel.PropertyDescriptor::.ctor(System.ComponentModel.MemberDescriptor,System.Attribute[])
extern "C"  void PropertyDescriptor__ctor_m2809737374 (PropertyDescriptor_t3995075053 * __this, MemberDescriptor_t1680589938 * ___reference0, AttributeU5BU5D_t4076389004* ___attrs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptor::.ctor(System.String,System.Attribute[])
extern "C"  void PropertyDescriptor__ctor_m307742810 (PropertyDescriptor_t3995075053 * __this, String_t* ___name0, AttributeU5BU5D_t4076389004* ___attrs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptor::FillAttributes(System.Collections.IList)
extern "C"  void PropertyDescriptor_FillAttributes_m2327357850 (PropertyDescriptor_t3995075053 * __this, Il2CppObject * ___attributeList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.PropertyDescriptor::Equals(System.Object)
extern "C"  bool PropertyDescriptor_Equals_m462030608 (PropertyDescriptor_t3995075053 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.PropertyDescriptor::GetHashCode()
extern "C"  int32_t PropertyDescriptor_GetHashCode_m2803682292 (PropertyDescriptor_t3995075053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
