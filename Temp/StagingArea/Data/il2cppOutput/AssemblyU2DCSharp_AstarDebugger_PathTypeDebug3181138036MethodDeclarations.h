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

// System.String
struct String_t;
// System.Func`1<System.Int32>
struct Func_1_t3990196034;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_AstarDebugger_PathTypeDebug3181138036.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"

// System.Void AstarDebugger/PathTypeDebug::.ctor(System.String,System.Func`1<System.Int32>,System.Func`1<System.Int32>)
extern "C"  void PathTypeDebug__ctor_m1796206650 (PathTypeDebug_t3181138036 * __this, String_t* ___name0, Func_1_t3990196034 * ___getSize1, Func_1_t3990196034 * ___getTotalCreated2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarDebugger/PathTypeDebug::Print(System.Text.StringBuilder)
extern "C"  void PathTypeDebug_Print_m3883384685 (PathTypeDebug_t3181138036 * __this, StringBuilder_t3822575854 * ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
