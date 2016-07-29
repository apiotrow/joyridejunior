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

// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1365728750;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_QueryTriggerInteraction4085533775.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"

// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C"  bool Physics_Raycast_m2062764485 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___origin0, Vector3_t3525329789  ___direction1, float ___maxDistance2, int32_t ___layerMask3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Raycast_m2714144326 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___origin0, Vector3_t3525329789  ___direction1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C"  bool Physics_Raycast_m267364350 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___origin0, Vector3_t3525329789  ___direction1, RaycastHit_t46221527 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Raycast_m1758069759 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___origin0, Vector3_t3525329789  ___direction1, RaycastHit_t46221527 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C"  bool Physics_Raycast_m1600345803 (Il2CppObject * __this /* static, unused */, Ray_t1522967639  ___ray0, RaycastHit_t46221527 * ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Physics_Raycast_m1235528076 (Il2CppObject * __this /* static, unused */, Ray_t1522967639  ___ray0, RaycastHit_t46221527 * ___hitInfo1, float ___maxDistance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Raycast_m165875788 (Il2CppObject * __this /* static, unused */, Ray_t1522967639  ___ray0, RaycastHit_t46221527 * ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  RaycastHitU5BU5D_t1365728750* Physics_RaycastAll_m1771931441 (Il2CppObject * __this /* static, unused */, Ray_t1522967639  ___ray0, float ___maxDistance1, int32_t ___layerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t1365728750* Physics_RaycastAll_m1269007794 (Il2CppObject * __this /* static, unused */, Ray_t1522967639  ___ray0, float ___maxDistance1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t1365728750* Physics_RaycastAll_m892728677 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___origin0, Vector3_t3525329789  ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t1365728750* Physics_INTERNAL_CALL_RaycastAll_m2642095530 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___origin0, Vector3_t3525329789 * ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32)
extern "C"  bool Physics_Linecast_m3546841930 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___start0, Vector3_t3525329789  ___end1, int32_t ___layerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Linecast_m939796811 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___start0, Vector3_t3525329789  ___end1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Int32)
extern "C"  bool Physics_Linecast_m2331953475 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___start0, Vector3_t3525329789  ___end1, RaycastHit_t46221527 * ___hitInfo2, int32_t ___layerMask3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Linecast_m3067651780 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___start0, Vector3_t3525329789  ___end1, RaycastHit_t46221527 * ___hitInfo2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C"  bool Physics_SphereCast_m3031395826 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___origin0, float ___radius1, Vector3_t3525329789  ___direction2, RaycastHit_t46221527 * ___hitInfo3, float ___maxDistance4, int32_t ___layerMask5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_SphereCast_m3149979635 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___origin0, float ___radius1, Vector3_t3525329789  ___direction2, RaycastHit_t46221527 * ___hitInfo3, float ___maxDistance4, int32_t ___layerMask5, int32_t ___queryTriggerInteraction6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,System.Single,System.Int32)
extern "C"  bool Physics_SphereCast_m490533510 (Il2CppObject * __this /* static, unused */, Ray_t1522967639  ___ray0, float ___radius1, float ___maxDistance2, int32_t ___layerMask3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_SphereCast_m2279778951 (Il2CppObject * __this /* static, unused */, Ray_t1522967639  ___ray0, float ___radius1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C"  bool Physics_SphereCast_m36396479 (Il2CppObject * __this /* static, unused */, Ray_t1522967639  ___ray0, float ___radius1, RaycastHit_t46221527 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_SphereCast_m2476059968 (Il2CppObject * __this /* static, unused */, Ray_t1522967639  ___ray0, float ___radius1, RaycastHit_t46221527 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::CheckSphere(UnityEngine.Vector3,System.Single,System.Int32)
extern "C"  bool Physics_CheckSphere_m963288132 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___position0, float ___radius1, int32_t ___layerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_CheckSphere(UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_INTERNAL_CALL_CheckSphere_m403414612 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___position0, float ___radius1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::CheckCapsule(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C"  bool Physics_CheckCapsule_m1287566231 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___start0, Vector3_t3525329789  ___end1, float ___radius2, int32_t ___layermask3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_CheckCapsule(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_INTERNAL_CALL_CheckCapsule_m2301698141 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___start0, Vector3_t3525329789 * ___end1, float ___radius2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Internal_Raycast_m3365413907 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___origin0, Vector3_t3525329789  ___direction1, RaycastHit_t46221527 * ___hitInfo2, float ___maxDistance3, int32_t ___layermask4, int32_t ___queryTriggerInteraction5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_INTERNAL_CALL_Internal_Raycast_m1291554392 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___origin0, Vector3_t3525329789 * ___direction1, RaycastHit_t46221527 * ___hitInfo2, float ___maxDistance3, int32_t ___layermask4, int32_t ___queryTriggerInteraction5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Internal_CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Internal_CapsuleCast_m677019326 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___point10, Vector3_t3525329789  ___point21, float ___radius2, Vector3_t3525329789  ___direction3, RaycastHit_t46221527 * ___hitInfo4, float ___maxDistance5, int32_t ___layermask6, int32_t ___queryTriggerInteraction7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_CapsuleCast(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_INTERNAL_CALL_Internal_CapsuleCast_m1067850665 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___point10, Vector3_t3525329789 * ___point21, float ___radius2, Vector3_t3525329789 * ___direction3, RaycastHit_t46221527 * ___hitInfo4, float ___maxDistance5, int32_t ___layermask6, int32_t ___queryTriggerInteraction7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Internal_RaycastTest(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Internal_RaycastTest_m4007079948 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___origin0, Vector3_t3525329789  ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_RaycastTest(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_INTERNAL_CALL_Internal_RaycastTest_m2935176529 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___origin0, Vector3_t3525329789 * ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
