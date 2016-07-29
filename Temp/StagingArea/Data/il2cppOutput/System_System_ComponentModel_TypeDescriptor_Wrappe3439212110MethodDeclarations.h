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

// System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider
struct WrappedTypeDescriptionProvider_t3439212110;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t1884402428;
// System.Object
struct Il2CppObject;
// System.IServiceProvider
struct IServiceProvider_t3408483282;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_TypeDescriptionProvid1884402428.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::.ctor(System.ComponentModel.TypeDescriptionProvider)
extern "C"  void WrappedTypeDescriptionProvider__ctor_m941655049 (WrappedTypeDescriptionProvider_t3439212110 * __this, TypeDescriptionProvider_t1884402428 * ___wrapped0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::get_Wrapped()
extern "C"  TypeDescriptionProvider_t1884402428 * WrappedTypeDescriptionProvider_get_Wrapped_m2676248694 (WrappedTypeDescriptionProvider_t3439212110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::set_Wrapped(System.ComponentModel.TypeDescriptionProvider)
extern "C"  void WrappedTypeDescriptionProvider_set_Wrapped_m3067547011 (WrappedTypeDescriptionProvider_t3439212110 * __this, TypeDescriptionProvider_t1884402428 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::CreateInstance(System.IServiceProvider,System.Type,System.Type[],System.Object[])
extern "C"  Il2CppObject * WrappedTypeDescriptionProvider_CreateInstance_m3849727263 (WrappedTypeDescriptionProvider_t3439212110 * __this, Il2CppObject * ___provider0, Type_t * ___objectType1, TypeU5BU5D_t3431720054* ___argTypes2, ObjectU5BU5D_t11523773* ___args3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
