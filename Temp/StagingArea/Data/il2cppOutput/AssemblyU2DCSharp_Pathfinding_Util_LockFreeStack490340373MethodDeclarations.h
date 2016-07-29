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

// Pathfinding.Util.LockFreeStack
struct LockFreeStack_t490340373;
// Pathfinding.Path
struct Path_t2697364881;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_Path2697364881.h"

// System.Void Pathfinding.Util.LockFreeStack::.ctor()
extern "C"  void LockFreeStack__ctor_m4137185612 (LockFreeStack_t490340373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Util.LockFreeStack::Push(Pathfinding.Path)
extern "C"  void LockFreeStack_Push_m3644583587 (LockFreeStack_t490340373 * __this, Path_t2697364881 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Path Pathfinding.Util.LockFreeStack::PopAll()
extern "C"  Path_t2697364881 * LockFreeStack_PopAll_m2827632022 (LockFreeStack_t490340373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
