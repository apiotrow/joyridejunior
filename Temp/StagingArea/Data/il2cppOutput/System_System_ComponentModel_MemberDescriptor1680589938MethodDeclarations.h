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

// System.ComponentModel.MemberDescriptor
struct MemberDescriptor_t1680589938;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t4076389004;
// System.Collections.IList
struct IList_t1612618265;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t3839011043;
// System.Object
struct Il2CppObject;
// System.Collections.IComparer
struct IComparer_t2207526184;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_ComponentModel_MemberDescriptor1680589938.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.ComponentModel.MemberDescriptor::.ctor(System.String,System.Attribute[])
extern "C"  void MemberDescriptor__ctor_m215106805 (MemberDescriptor_t1680589938 * __this, String_t* ___name0, AttributeU5BU5D_t4076389004* ___attrs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::.ctor(System.ComponentModel.MemberDescriptor,System.Attribute[])
extern "C"  void MemberDescriptor__ctor_m3977742435 (MemberDescriptor_t1680589938 * __this, MemberDescriptor_t1680589938 * ___reference0, AttributeU5BU5D_t4076389004* ___attrs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.ComponentModel.MemberDescriptor::get_AttributeArray()
extern "C"  AttributeU5BU5D_t4076389004* MemberDescriptor_get_AttributeArray_m1822558682 (MemberDescriptor_t1680589938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::FillAttributes(System.Collections.IList)
extern "C"  void MemberDescriptor_FillAttributes_m3750608991 (MemberDescriptor_t1680589938 * __this, Il2CppObject * ___attributeList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::get_Attributes()
extern "C"  AttributeCollection_t3839011043 * MemberDescriptor_get_Attributes_m2619082480 (MemberDescriptor_t1680589938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::CreateAttributeCollection()
extern "C"  AttributeCollection_t3839011043 * MemberDescriptor_CreateAttributeCollection_m3478700496 (MemberDescriptor_t1680589938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MemberDescriptor::get_Name()
extern "C"  String_t* MemberDescriptor_get_Name_m2533170283 (MemberDescriptor_t1680589938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MemberDescriptor::GetHashCode()
extern "C"  int32_t MemberDescriptor_GetHashCode_m337807439 (MemberDescriptor_t1680589938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MemberDescriptor::Equals(System.Object)
extern "C"  bool MemberDescriptor_Equals_m3292276459 (MemberDescriptor_t1680589938 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IComparer System.ComponentModel.MemberDescriptor::get_DefaultComparer()
extern "C"  Il2CppObject * MemberDescriptor_get_DefaultComparer_m2619195666 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
