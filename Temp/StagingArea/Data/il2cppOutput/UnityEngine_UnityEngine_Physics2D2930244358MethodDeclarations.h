﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t2162384532;
// UnityEngine.Collider2D
struct Collider2D_t1890038195;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_RaycastHit2D4082783401.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"

// System.Void UnityEngine.Physics2D::.cctor()
extern "C"  void Physics2D__cctor_m2087591309 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::Internal_Linecast(UnityEngine.Vector2,UnityEngine.Vector2,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C"  void Physics2D_Internal_Linecast_m3653471167 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___start0, Vector2_t3525329788  ___end1, int32_t ___layerMask2, float ___minDepth3, float ___maxDepth4, RaycastHit2D_t4082783401 * ___raycastHit5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Linecast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C"  void Physics2D_INTERNAL_CALL_Internal_Linecast_m2627767048 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788 * ___start0, Vector2_t3525329788 * ___end1, int32_t ___layerMask2, float ___minDepth3, float ___maxDepth4, RaycastHit2D_t4082783401 * ___raycastHit5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Linecast(UnityEngine.Vector2,UnityEngine.Vector2,System.Int32)
extern "C"  RaycastHit2D_t4082783401  Physics2D_Linecast_m4170255972 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___start0, Vector2_t3525329788  ___end1, int32_t ___layerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Linecast(UnityEngine.Vector2,UnityEngine.Vector2,System.Int32,System.Single,System.Single)
extern "C"  RaycastHit2D_t4082783401  Physics2D_Linecast_m1824977262 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___start0, Vector2_t3525329788  ___end1, int32_t ___layerMask2, float ___minDepth3, float ___maxDepth4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C"  void Physics2D_Internal_Raycast_m4294843026 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___origin0, Vector2_t3525329788  ___direction1, float ___distance2, int32_t ___layerMask3, float ___minDepth4, float ___maxDepth5, RaycastHit2D_t4082783401 * ___raycastHit6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C"  void Physics2D_INTERNAL_CALL_Internal_Raycast_m1210233913 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788 * ___origin0, Vector2_t3525329788 * ___direction1, float ___distance2, int32_t ___layerMask3, float ___minDepth4, float ___maxDepth5, RaycastHit2D_t4082783401 * ___raycastHit6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern "C"  RaycastHit2D_t4082783401  Physics2D_Raycast_m1435321255 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___origin0, Vector2_t3525329788  ___direction1, float ___distance2, int32_t ___layerMask3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern "C"  RaycastHit2D_t4082783401  Physics2D_Raycast_m301626417 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___origin0, Vector2_t3525329788  ___direction1, float ___distance2, int32_t ___layerMask3, float ___minDepth4, float ___maxDepth5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::Internal_CircleCast(UnityEngine.Vector2,System.Single,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C"  void Physics2D_Internal_CircleCast_m2382954929 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___origin0, float ___radius1, Vector2_t3525329788  ___direction2, float ___distance3, int32_t ___layerMask4, float ___minDepth5, float ___maxDepth6, RaycastHit2D_t4082783401 * ___raycastHit7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_CircleCast(UnityEngine.Vector2&,System.Single,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C"  void Physics2D_INTERNAL_CALL_Internal_CircleCast_m922648100 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788 * ___origin0, float ___radius1, Vector2_t3525329788 * ___direction2, float ___distance3, int32_t ___layerMask4, float ___minDepth5, float ___maxDepth6, RaycastHit2D_t4082783401 * ___raycastHit7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::CircleCast(UnityEngine.Vector2,System.Single,UnityEngine.Vector2,System.Single,System.Int32)
extern "C"  RaycastHit2D_t4082783401  Physics2D_CircleCast_m1344858070 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___origin0, float ___radius1, Vector2_t3525329788  ___direction2, float ___distance3, int32_t ___layerMask4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::CircleCast(UnityEngine.Vector2,System.Single,UnityEngine.Vector2)
extern "C"  RaycastHit2D_t4082783401  Physics2D_CircleCast_m2674438332 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___origin0, float ___radius1, Vector2_t3525329788  ___direction2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::CircleCast(UnityEngine.Vector2,System.Single,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern "C"  RaycastHit2D_t4082783401  Physics2D_CircleCast_m706939872 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___origin0, float ___radius1, Vector2_t3525329788  ___direction2, float ___distance3, int32_t ___layerMask4, float ___minDepth5, float ___maxDepth6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::GetRayIntersectionAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  RaycastHit2DU5BU5D_t2162384532* Physics2D_GetRayIntersectionAll_m2520210479 (Il2CppObject * __this /* static, unused */, Ray_t1522967639  ___ray0, float ___distance1, int32_t ___layerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_GetRayIntersectionAll(UnityEngine.Ray&,System.Single,System.Int32)
extern "C"  RaycastHit2DU5BU5D_t2162384532* Physics2D_INTERNAL_CALL_GetRayIntersectionAll_m2968135304 (Il2CppObject * __this /* static, unused */, Ray_t1522967639 * ___ray0, float ___distance1, int32_t ___layerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapPoint(UnityEngine.Vector2,System.Int32)
extern "C"  Collider2D_t1890038195 * Physics2D_OverlapPoint_m1741297912 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___point0, int32_t ___layerMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.Physics2D::INTERNAL_CALL_OverlapPoint(UnityEngine.Vector2&,System.Int32,System.Single,System.Single)
extern "C"  Collider2D_t1890038195 * Physics2D_INTERNAL_CALL_OverlapPoint_m467114293 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788 * ___point0, int32_t ___layerMask1, float ___minDepth2, float ___maxDepth3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapCircle(UnityEngine.Vector2,System.Single,System.Int32)
extern "C"  Collider2D_t1890038195 * Physics2D_OverlapCircle_m2476274143 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___point0, float ___radius1, int32_t ___layerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.Physics2D::INTERNAL_CALL_OverlapCircle(UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C"  Collider2D_t1890038195 * Physics2D_INTERNAL_CALL_OverlapCircle_m1802552674 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788 * ___point0, float ___radius1, int32_t ___layerMask2, float ___minDepth3, float ___maxDepth4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
