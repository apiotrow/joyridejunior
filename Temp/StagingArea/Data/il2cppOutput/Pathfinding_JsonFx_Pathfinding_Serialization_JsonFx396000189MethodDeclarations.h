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

// Pathfinding.Serialization.JsonFx.JsonSerializationException
struct JsonSerializationException_t396000189;
// System.String
struct String_t;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void Pathfinding.Serialization.JsonFx.JsonSerializationException::.ctor(System.String)
extern "C"  void JsonSerializationException__ctor_m1980876064 (JsonSerializationException_t396000189 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonSerializationException::.ctor(System.String,System.Exception)
extern "C"  void JsonSerializationException__ctor_m906028054 (JsonSerializationException_t396000189 * __this, String_t* ___message0, Exception_t1967233988 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
