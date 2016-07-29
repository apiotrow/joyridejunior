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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_Pathfinding_Int32697168784.h"
#include "AssemblyU2DCSharp_Pathfinding_Int22697168783.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Bounds3518514978.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

// UnityEngine.Vector3 Pathfinding.VectorMath::ClosestPointOnLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  VectorMath_ClosestPointOnLine_m2965988381 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___lineStart0, Vector3_t3525329789  ___lineEnd1, Vector3_t3525329789  ___point2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.VectorMath::ClosestPointOnLineFactor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float VectorMath_ClosestPointOnLineFactor_m2511306684 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___lineStart0, Vector3_t3525329789  ___lineEnd1, Vector3_t3525329789  ___point2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.VectorMath::ClosestPointOnLineFactor(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C"  float VectorMath_ClosestPointOnLineFactor_m208424469 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___lineStart0, Int3_t2697168784  ___lineEnd1, Int3_t2697168784  ___point2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.VectorMath::ClosestPointOnLineFactor(Pathfinding.Int2,Pathfinding.Int2,Pathfinding.Int2)
extern "C"  float VectorMath_ClosestPointOnLineFactor_m3397563350 (Il2CppObject * __this /* static, unused */, Int2_t2697168783  ___lineStart0, Int2_t2697168783  ___lineEnd1, Int2_t2697168783  ___point2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.VectorMath::ClosestPointOnSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  VectorMath_ClosestPointOnSegment_m4001883896 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___lineStart0, Vector3_t3525329789  ___lineEnd1, Vector3_t3525329789  ___point2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.VectorMath::ClosestPointOnSegmentXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  VectorMath_ClosestPointOnSegmentXZ_m4083317942 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___lineStart0, Vector3_t3525329789  ___lineEnd1, Vector3_t3525329789  ___point2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.VectorMath::SqrDistancePointSegmentApproximate(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  float VectorMath_SqrDistancePointSegmentApproximate_m372226260 (Il2CppObject * __this /* static, unused */, int32_t ___x0, int32_t ___z1, int32_t ___px2, int32_t ___pz3, int32_t ___qx4, int32_t ___qz5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.VectorMath::SqrDistancePointSegmentApproximate(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C"  float VectorMath_SqrDistancePointSegmentApproximate_m4064387780 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___a0, Int3_t2697168784  ___b1, Int3_t2697168784  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.VectorMath::SqrDistancePointSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float VectorMath_SqrDistancePointSegment_m3109044027 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, Vector3_t3525329789  ___b1, Vector3_t3525329789  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.VectorMath::SqrDistanceSegmentSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float VectorMath_SqrDistanceSegmentSegment_m594391537 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___s10, Vector3_t3525329789  ___e11, Vector3_t3525329789  ___s22, Vector3_t3525329789  ___e23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.VectorMath::SqrDistanceXZ(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float VectorMath_SqrDistanceXZ_m1738540329 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, Vector3_t3525329789  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.VectorMath::SignedTriangleAreaTimes2XZ(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C"  int64_t VectorMath_SignedTriangleAreaTimes2XZ_m2798705182 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___a0, Int3_t2697168784  ___b1, Int3_t2697168784  ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.VectorMath::SignedTriangleAreaTimes2XZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float VectorMath_SignedTriangleAreaTimes2XZ_m3842480374 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, Vector3_t3525329789  ___b1, Vector3_t3525329789  ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::RightXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool VectorMath_RightXZ_m3230339665 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, Vector3_t3525329789  ___b1, Vector3_t3525329789  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::RightXZ(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C"  bool VectorMath_RightXZ_m3267792864 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___a0, Int3_t2697168784  ___b1, Int3_t2697168784  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::RightOrColinear(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  bool VectorMath_RightOrColinear_m577482754 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___a0, Vector2_t3525329788  ___b1, Vector2_t3525329788  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::RightOrColinear(Pathfinding.Int2,Pathfinding.Int2,Pathfinding.Int2)
extern "C"  bool VectorMath_RightOrColinear_m4045885523 (Il2CppObject * __this /* static, unused */, Int2_t2697168783  ___a0, Int2_t2697168783  ___b1, Int2_t2697168783  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::RightOrColinearXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool VectorMath_RightOrColinearXZ_m2087098333 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, Vector3_t3525329789  ___b1, Vector3_t3525329789  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::RightOrColinearXZ(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C"  bool VectorMath_RightOrColinearXZ_m2301648084 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___a0, Int3_t2697168784  ___b1, Int3_t2697168784  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::IsClockwiseMarginXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool VectorMath_IsClockwiseMarginXZ_m3132568631 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, Vector3_t3525329789  ___b1, Vector3_t3525329789  ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::IsClockwiseXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool VectorMath_IsClockwiseXZ_m3025803909 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, Vector3_t3525329789  ___b1, Vector3_t3525329789  ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::IsClockwiseXZ(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C"  bool VectorMath_IsClockwiseXZ_m784842028 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___a0, Int3_t2697168784  ___b1, Int3_t2697168784  ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::IsClockwiseOrColinearXZ(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C"  bool VectorMath_IsClockwiseOrColinearXZ_m256006944 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___a0, Int3_t2697168784  ___b1, Int3_t2697168784  ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::IsClockwiseOrColinear(Pathfinding.Int2,Pathfinding.Int2,Pathfinding.Int2)
extern "C"  bool VectorMath_IsClockwiseOrColinear_m3623645599 (Il2CppObject * __this /* static, unused */, Int2_t2697168783  ___a0, Int2_t2697168783  ___b1, Int2_t2697168783  ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::IsColinearXZ(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C"  bool VectorMath_IsColinearXZ_m20801441 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___a0, Int3_t2697168784  ___b1, Int3_t2697168784  ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::IsColinearXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool VectorMath_IsColinearXZ_m1077175216 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, Vector3_t3525329789  ___b1, Vector3_t3525329789  ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::IsColinearAlmostXZ(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C"  bool VectorMath_IsColinearAlmostXZ_m3923846767 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___a0, Int3_t2697168784  ___b1, Int3_t2697168784  ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::SegmentsIntersect(Pathfinding.Int2,Pathfinding.Int2,Pathfinding.Int2,Pathfinding.Int2)
extern "C"  bool VectorMath_SegmentsIntersect_m1115385463 (Il2CppObject * __this /* static, unused */, Int2_t2697168783  ___start10, Int2_t2697168783  ___end11, Int2_t2697168783  ___start22, Int2_t2697168783  ___end23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::SegmentsIntersectXZ(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C"  bool VectorMath_SegmentsIntersectXZ_m1344926709 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___start10, Int3_t2697168784  ___end11, Int3_t2697168784  ___start22, Int3_t2697168784  ___end23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::SegmentsIntersectXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool VectorMath_SegmentsIntersectXZ_m2661840833 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___start10, Vector3_t3525329789  ___end11, Vector3_t3525329789  ___start22, Vector3_t3525329789  ___end23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.VectorMath::LineDirIntersectionPointXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  VectorMath_LineDirIntersectionPointXZ_m2565161962 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___start10, Vector3_t3525329789  ___dir11, Vector3_t3525329789  ___start22, Vector3_t3525329789  ___dir23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.VectorMath::LineDirIntersectionPointXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean&)
extern "C"  Vector3_t3525329789  VectorMath_LineDirIntersectionPointXZ_m3155053529 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___start10, Vector3_t3525329789  ___dir11, Vector3_t3525329789  ___start22, Vector3_t3525329789  ___dir23, bool* ___intersects4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::RaySegmentIntersectXZ(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C"  bool VectorMath_RaySegmentIntersectXZ_m3049307582 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___start10, Int3_t2697168784  ___end11, Int3_t2697168784  ___start22, Int3_t2697168784  ___end23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::LineIntersectionFactorXZ(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3,System.Single&,System.Single&)
extern "C"  bool VectorMath_LineIntersectionFactorXZ_m2358012166 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___start10, Int3_t2697168784  ___end11, Int3_t2697168784  ___start22, Int3_t2697168784  ___end23, float* ___factor14, float* ___factor25, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::LineIntersectionFactorXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single&,System.Single&)
extern "C"  bool VectorMath_LineIntersectionFactorXZ_m3846553170 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___start10, Vector3_t3525329789  ___end11, Vector3_t3525329789  ___start22, Vector3_t3525329789  ___end23, float* ___factor14, float* ___factor25, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.VectorMath::LineRayIntersectionFactorXZ(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C"  float VectorMath_LineRayIntersectionFactorXZ_m3388006430 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___start10, Int3_t2697168784  ___end11, Int3_t2697168784  ___start22, Int3_t2697168784  ___end23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.VectorMath::LineIntersectionFactorXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float VectorMath_LineIntersectionFactorXZ_m1740420506 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___start10, Vector3_t3525329789  ___end11, Vector3_t3525329789  ___start22, Vector3_t3525329789  ___end23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.VectorMath::LineIntersectionPointXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  VectorMath_LineIntersectionPointXZ_m3278647283 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___start10, Vector3_t3525329789  ___end11, Vector3_t3525329789  ___start22, Vector3_t3525329789  ___end23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.VectorMath::LineIntersectionPointXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean&)
extern "C"  Vector3_t3525329789  VectorMath_LineIntersectionPointXZ_m2302019042 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___start10, Vector3_t3525329789  ___end11, Vector3_t3525329789  ___start22, Vector3_t3525329789  ___end23, bool* ___intersects4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Pathfinding.VectorMath::LineIntersectionPoint(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t3525329788  VectorMath_LineIntersectionPoint_m4144569434 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___start10, Vector2_t3525329788  ___end11, Vector2_t3525329788  ___start22, Vector2_t3525329788  ___end23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Pathfinding.VectorMath::LineIntersectionPoint(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean&)
extern "C"  Vector2_t3525329788  VectorMath_LineIntersectionPoint_m299058249 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___start10, Vector2_t3525329788  ___end11, Vector2_t3525329788  ___start22, Vector2_t3525329788  ___end23, bool* ___intersects4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.VectorMath::SegmentIntersectionPointXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean&)
extern "C"  Vector3_t3525329789  VectorMath_SegmentIntersectionPointXZ_m2479352339 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___start10, Vector3_t3525329789  ___end11, Vector3_t3525329789  ___start22, Vector3_t3525329789  ___end23, bool* ___intersects4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::SegmentIntersectsBounds(UnityEngine.Bounds,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool VectorMath_SegmentIntersectsBounds_m584095718 (Il2CppObject * __this /* static, unused */, Bounds_t3518514978  ___bounds0, Vector3_t3525329789  ___a1, Vector3_t3525329789  ___b2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::ReversesFaceOrientations(UnityEngine.Matrix4x4)
extern "C"  bool VectorMath_ReversesFaceOrientations_m2823318519 (Il2CppObject * __this /* static, unused */, Matrix4x4_t277289660  ___matrix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
