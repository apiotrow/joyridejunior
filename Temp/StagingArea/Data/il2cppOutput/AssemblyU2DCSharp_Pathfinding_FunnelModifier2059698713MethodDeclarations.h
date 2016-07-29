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

// Pathfinding.FunnelModifier
struct FunnelModifier_t2059698713;
// Pathfinding.Path
struct Path_t2697364881;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_Path2697364881.h"

// System.Void Pathfinding.FunnelModifier::.ctor()
extern "C"  void FunnelModifier__ctor_m240682532 (FunnelModifier_t2059698713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.FunnelModifier::get_Order()
extern "C"  int32_t FunnelModifier_get_Order_m2357594329 (FunnelModifier_t2059698713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.FunnelModifier::Apply(Pathfinding.Path)
extern "C"  void FunnelModifier_Apply_m2390952641 (FunnelModifier_t2059698713 * __this, Path_t2697364881 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.FunnelModifier::RunFunnel(System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  bool FunnelModifier_RunFunnel_m3608556172 (Il2CppObject * __this /* static, unused */, List_1_t27321462 * ___left0, List_1_t27321462 * ___right1, List_1_t27321462 * ___funnelPath2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
