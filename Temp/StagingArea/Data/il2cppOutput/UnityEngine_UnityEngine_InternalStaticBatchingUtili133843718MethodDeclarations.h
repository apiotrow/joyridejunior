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

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// System.Collections.Generic.List`1<UnityEngine.MeshSubsetCombineUtility/MeshInstance>
struct List_1_t1541785275;
// System.Collections.Generic.List`1<UnityEngine.MeshSubsetCombineUtility/SubMeshInstance>
struct List_1_t110025947;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.Material
struct Material_t1886596500;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Material1886596500.h"

// System.Void UnityEngine.InternalStaticBatchingUtility::CombineRoot(UnityEngine.GameObject)
extern "C"  void InternalStaticBatchingUtility_CombineRoot_m3636024119 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___staticBatchRoot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.InternalStaticBatchingUtility::Combine(UnityEngine.GameObject,System.Boolean,System.Boolean)
extern "C"  void InternalStaticBatchingUtility_Combine_m102387157 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___staticBatchRoot0, bool ___combineOnlyStatic1, bool ___isEditorPostprocessScene2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.InternalStaticBatchingUtility::CombineGameObjects(UnityEngine.GameObject[],UnityEngine.GameObject,System.Boolean)
extern "C"  void InternalStaticBatchingUtility_CombineGameObjects_m3578513468 (Il2CppObject * __this /* static, unused */, GameObjectU5BU5D_t3499186955* ___gos0, GameObject_t4012695102 * ___staticBatchRoot1, bool ___isEditorPostprocessScene2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.InternalStaticBatchingUtility::MakeBatch(System.Collections.Generic.List`1<UnityEngine.MeshSubsetCombineUtility/MeshInstance>,System.Collections.Generic.List`1<UnityEngine.MeshSubsetCombineUtility/SubMeshInstance>,System.Collections.Generic.List`1<UnityEngine.GameObject>,UnityEngine.Transform,System.Int32)
extern "C"  void InternalStaticBatchingUtility_MakeBatch_m75376974 (Il2CppObject * __this /* static, unused */, List_1_t1541785275 * ___meshes0, List_1_t110025947 * ___subsets1, List_1_t514686775 * ___subsetGOs2, Transform_t284553113 * ___staticBatchRootTransform3, int32_t ___batchIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.InternalStaticBatchingUtility::<CombineGameObjects>m__C(UnityEngine.Material)
extern "C"  bool InternalStaticBatchingUtility_U3CCombineGameObjectsU3Em__C_m3799082901 (Il2CppObject * __this /* static, unused */, Material_t1886596500 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
