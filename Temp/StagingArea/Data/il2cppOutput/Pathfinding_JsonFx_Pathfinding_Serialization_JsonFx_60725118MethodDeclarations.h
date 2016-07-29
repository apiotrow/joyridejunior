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

// Pathfinding.Serialization.JsonFx.JsonDeserializationException
struct JsonDeserializationException_t60725118;
// System.String
struct String_t;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void Pathfinding.Serialization.JsonFx.JsonDeserializationException::.ctor(System.String,System.Int32)
extern "C"  void JsonDeserializationException__ctor_m1655578326 (JsonDeserializationException_t60725118 * __this, String_t* ___message0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonDeserializationException::.ctor(System.String,System.Exception,System.Int32)
extern "C"  void JsonDeserializationException__ctor_m2068273986 (JsonDeserializationException_t60725118 * __this, String_t* ___message0, Exception_t1967233988 * ___innerException1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
