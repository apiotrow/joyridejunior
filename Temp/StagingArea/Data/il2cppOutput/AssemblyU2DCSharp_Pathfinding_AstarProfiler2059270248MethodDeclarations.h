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

// Pathfinding.AstarProfiler
struct AstarProfiler_t2059270248;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void Pathfinding.AstarProfiler::.ctor()
extern "C"  void AstarProfiler__ctor_m3904409433 (AstarProfiler_t2059270248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarProfiler::.cctor()
extern "C"  void AstarProfiler__cctor_m295511924 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarProfiler::InitializeFastProfile(System.String[])
extern "C"  void AstarProfiler_InitializeFastProfile_m1662186988 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t2956870243* ___profileNames0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarProfiler::StartFastProfile(System.Int32)
extern "C"  void AstarProfiler_StartFastProfile_m2914890055 (Il2CppObject * __this /* static, unused */, int32_t ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarProfiler::EndFastProfile(System.Int32)
extern "C"  void AstarProfiler_EndFastProfile_m3345490286 (Il2CppObject * __this /* static, unused */, int32_t ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarProfiler::EndProfile()
extern "C"  void AstarProfiler_EndProfile_m1593667609 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarProfiler::StartProfile(System.String)
extern "C"  void AstarProfiler_StartProfile_m13502032 (Il2CppObject * __this /* static, unused */, String_t* ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarProfiler::EndProfile(System.String)
extern "C"  void AstarProfiler_EndProfile_m2439176073 (Il2CppObject * __this /* static, unused */, String_t* ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarProfiler::Reset()
extern "C"  void AstarProfiler_Reset_m1550842374 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarProfiler::PrintFastResults()
extern "C"  void AstarProfiler_PrintFastResults_m2878534552 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarProfiler::PrintResults()
extern "C"  void AstarProfiler_PrintResults_m1930173204 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
