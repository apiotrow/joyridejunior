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

// Pathfinding.Serialization.JsonFx.JsonTypeCoercionException
struct JsonTypeCoercionException_t651250085;
// System.String
struct String_t;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void Pathfinding.Serialization.JsonFx.JsonTypeCoercionException::.ctor(System.String)
extern "C"  void JsonTypeCoercionException__ctor_m2129803924 (JsonTypeCoercionException_t651250085 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonTypeCoercionException::.ctor(System.String,System.Exception)
extern "C"  void JsonTypeCoercionException__ctor_m3348333858 (JsonTypeCoercionException_t651250085 * __this, String_t* ___message0, Exception_t1967233988 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
