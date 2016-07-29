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

// System.Void System.ComponentModel.TypeDescriptionProvider::.ctor()
extern "C"  void TypeDescriptionProvider__ctor_m311917530 (TypeDescriptionProvider_t1884402428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptionProvider::.ctor(System.ComponentModel.TypeDescriptionProvider)
extern "C"  void TypeDescriptionProvider__ctor_m1397458152 (TypeDescriptionProvider_t1884402428 * __this, TypeDescriptionProvider_t1884402428 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptionProvider::CreateInstance(System.IServiceProvider,System.Type,System.Type[],System.Object[])
extern "C"  Il2CppObject * TypeDescriptionProvider_CreateInstance_m955843168 (TypeDescriptionProvider_t1884402428 * __this, Il2CppObject * ___provider0, Type_t * ___objectType1, TypeU5BU5D_t3431720054* ___argTypes2, ObjectU5BU5D_t11523773* ___args3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
