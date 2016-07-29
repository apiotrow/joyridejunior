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

// Pathfinding.PathModifier
struct PathModifier_t1057675144;
// Seeker
struct Seeker_t2472610117;
// Pathfinding.Path
struct Path_t2697364881;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Seeker2472610117.h"
#include "AssemblyU2DCSharp_Pathfinding_Path2697364881.h"

// System.Void Pathfinding.PathModifier::.ctor()
extern "C"  void PathModifier__ctor_m2431809813 (PathModifier_t1057675144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PathModifier::Awake(Seeker)
extern "C"  void PathModifier_Awake_m70840979 (PathModifier_t1057675144 * __this, Seeker_t2472610117 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PathModifier::OnDestroy(Seeker)
extern "C"  void PathModifier_OnDestroy_m94698281 (PathModifier_t1057675144 * __this, Seeker_t2472610117 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PathModifier::PreProcess(Pathfinding.Path)
extern "C"  void PathModifier_PreProcess_m1296570348 (PathModifier_t1057675144 * __this, Path_t2697364881 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
