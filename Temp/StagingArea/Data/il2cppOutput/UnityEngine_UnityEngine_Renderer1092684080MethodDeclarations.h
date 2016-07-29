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

// UnityEngine.Renderer
struct Renderer_t1092684080;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3353847197;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Bounds3518514978.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"

// System.Void UnityEngine.Renderer::set_staticBatchRootTransform(UnityEngine.Transform)
extern "C"  void Renderer_set_staticBatchRootTransform_m1058244712 (Renderer_t1092684080 * __this, Transform_t284553113 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_staticBatchIndex()
extern "C"  int32_t Renderer_get_staticBatchIndex_m767652649 (Renderer_t1092684080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::SetSubsetIndex(System.Int32,System.Int32)
extern "C"  void Renderer_SetSubsetIndex_m3697684702 (Renderer_t1092684080 * __this, int32_t ___index0, int32_t ___subSetIndexForMaterial1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Renderer::get_enabled()
extern "C"  bool Renderer_get_enabled_m1971819706 (Renderer_t1092684080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C"  void Renderer_set_enabled_m2514140131 (Renderer_t1092684080 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
extern "C"  Material_t1886596500 * Renderer_get_sharedMaterial_m835478880 (Renderer_t1092684080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] UnityEngine.Renderer::get_sharedMaterials()
extern "C"  MaterialU5BU5D_t3353847197* Renderer_get_sharedMaterials_m1981818007 (Renderer_t1092684080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sharedMaterials(UnityEngine.Material[])
extern "C"  void Renderer_set_sharedMaterials_m1255100914 (Renderer_t1092684080 * __this, MaterialU5BU5D_t3353847197* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
extern "C"  Bounds_t3518514978  Renderer_get_bounds_m1533373851 (Renderer_t1092684080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C"  void Renderer_INTERNAL_get_bounds_m3488131760 (Renderer_t1092684080 * __this, Bounds_t3518514978 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_lightmapIndex()
extern "C"  int32_t Renderer_get_lightmapIndex_m3207153739 (Renderer_t1092684080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Renderer::get_lightmapScaleOffset()
extern "C"  Vector4_t3525329790  Renderer_get_lightmapScaleOffset_m2291266045 (Renderer_t1092684080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::INTERNAL_get_lightmapScaleOffset(UnityEngine.Vector4&)
extern "C"  void Renderer_INTERNAL_get_lightmapScaleOffset_m214316378 (Renderer_t1092684080 * __this, Vector4_t3525329790 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Renderer::get_realtimeLightmapScaleOffset()
extern "C"  Vector4_t3525329790  Renderer_get_realtimeLightmapScaleOffset_m2679390290 (Renderer_t1092684080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::INTERNAL_get_realtimeLightmapScaleOffset(UnityEngine.Vector4&)
extern "C"  void Renderer_INTERNAL_get_realtimeLightmapScaleOffset_m3401707055 (Renderer_t1092684080 * __this, Vector4_t3525329790 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C"  int32_t Renderer_get_sortingLayerID_m1954594923 (Renderer_t1092684080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C"  int32_t Renderer_get_sortingOrder_m3623465101 (Renderer_t1092684080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
