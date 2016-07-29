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

// UnityEngine.InternalStaticBatchingUtility/SortGO
struct SortGO_t2482240294;
// System.Object
struct Il2CppObject;
// UnityEngine.Renderer
struct Renderer_t1092684080;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Renderer1092684080.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Void UnityEngine.InternalStaticBatchingUtility/SortGO::.ctor()
extern "C"  void SortGO__ctor_m1215354577 (SortGO_t2482240294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.InternalStaticBatchingUtility/SortGO::System.Collections.IComparer.Compare(System.Object,System.Object)
extern "C"  int32_t SortGO_System_Collections_IComparer_Compare_m3525050906 (SortGO_t2482240294 * __this, Il2CppObject * ___a0, Il2CppObject * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.InternalStaticBatchingUtility/SortGO::GetMaterialId(UnityEngine.Renderer)
extern "C"  int32_t SortGO_GetMaterialId_m2156077389 (Il2CppObject * __this /* static, unused */, Renderer_t1092684080 * ___renderer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.InternalStaticBatchingUtility/SortGO::GetLightmapIndex(UnityEngine.Renderer)
extern "C"  int32_t SortGO_GetLightmapIndex_m2362531023 (Il2CppObject * __this /* static, unused */, Renderer_t1092684080 * ___renderer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Renderer UnityEngine.InternalStaticBatchingUtility/SortGO::GetRenderer(UnityEngine.GameObject)
extern "C"  Renderer_t1092684080 * SortGO_GetRenderer_m4157438731 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
