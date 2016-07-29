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

// Pathfinding.AlternativePath
struct AlternativePath_t3728262814;
// Pathfinding.Path
struct Path_t2697364881;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_Path2697364881.h"

// System.Void Pathfinding.AlternativePath::.ctor()
extern "C"  void AlternativePath__ctor_m3249047907 (AlternativePath_t3728262814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.AlternativePath::get_Order()
extern "C"  int32_t AlternativePath_get_Order_m3973187188 (AlternativePath_t3728262814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AlternativePath::Apply(Pathfinding.Path)
extern "C"  void AlternativePath_Apply_m2033889280 (AlternativePath_t3728262814 * __this, Path_t2697364881 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AlternativePath::OnDestroy()
extern "C"  void AlternativePath_OnDestroy_m3447780572 (AlternativePath_t3728262814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AlternativePath::ClearOnDestroy(Pathfinding.Path)
extern "C"  void AlternativePath_ClearOnDestroy_m1557275360 (AlternativePath_t3728262814 * __this, Path_t2697364881 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AlternativePath::InversePrevious()
extern "C"  void AlternativePath_InversePrevious_m2005295880 (AlternativePath_t3728262814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AlternativePath::ApplyNow(Pathfinding.Path)
extern "C"  void AlternativePath_ApplyNow_m2276222874 (AlternativePath_t3728262814 * __this, Path_t2697364881 * ___somePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
