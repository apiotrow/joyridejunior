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

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t2741383957;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_Int32697168784.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_Pathfinding_Int22697168783.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Bounds3518514978.h"

// System.Int64 Pathfinding.Polygon::TriangleArea2(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C"  int64_t Polygon_TriangleArea2_m171711831 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___a0, Int3_t2697168784  ___b1, Int3_t2697168784  ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.Polygon::TriangleArea2(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Polygon_TriangleArea2_m4118449117 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, Vector3_t3525329789  ___b1, Vector3_t3525329789  ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Polygon::TriangleArea(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C"  int64_t Polygon_TriangleArea_m2932800769 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___a0, Int3_t2697168784  ___b1, Int3_t2697168784  ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.Polygon::TriangleArea(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Polygon_TriangleArea_m41015501 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, Vector3_t3525329789  ___b1, Vector3_t3525329789  ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::ContainsPoint(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Polygon_ContainsPoint_m2007536116 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, Vector3_t3525329789  ___b1, Vector3_t3525329789  ___c2, Vector3_t3525329789  ___p3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::ContainsPointXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Polygon_ContainsPointXZ_m3365283442 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, Vector3_t3525329789  ___b1, Vector3_t3525329789  ___c2, Vector3_t3525329789  ___p3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::ContainsPoint(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C"  bool Polygon_ContainsPoint_m3899753128 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___a0, Int3_t2697168784  ___b1, Int3_t2697168784  ___c2, Int3_t2697168784  ___p3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::ContainsPointXZ(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C"  bool Polygon_ContainsPointXZ_m3115017254 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___a0, Int3_t2697168784  ___b1, Int3_t2697168784  ___c2, Int3_t2697168784  ___p3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::ContainsPoint(Pathfinding.Int2,Pathfinding.Int2,Pathfinding.Int2,Pathfinding.Int2)
extern "C"  bool Polygon_ContainsPoint_m424490728 (Il2CppObject * __this /* static, unused */, Int2_t2697168783  ___a0, Int2_t2697168783  ___b1, Int2_t2697168783  ___c2, Int2_t2697168783  ___p3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::ContainsPoint(UnityEngine.Vector3[],UnityEngine.Vector3)
extern "C"  bool Polygon_ContainsPoint_m1478458796 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t3227571696* ___polyPoints0, Vector3_t3525329789  ___p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::ContainsPoint(UnityEngine.Vector2[],UnityEngine.Vector2)
extern "C"  bool Polygon_ContainsPoint_m1545465518 (Il2CppObject * __this /* static, unused */, Vector2U5BU5D_t2741383957* ___polyPoints0, Vector2_t3525329788  ___p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::ContainsPointXZ(UnityEngine.Vector3[],UnityEngine.Vector3)
extern "C"  bool Polygon_ContainsPointXZ_m1232683178 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t3227571696* ___polyPoints0, Vector3_t3525329789  ___p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::LeftNotColinear(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Polygon_LeftNotColinear_m2462444565 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, Vector3_t3525329789  ___b1, Vector3_t3525329789  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::Left(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Polygon_Left_m2247400611 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, Vector3_t3525329789  ___b1, Vector3_t3525329789  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::Left(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  bool Polygon_Left_m4161383622 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___a0, Vector2_t3525329788  ___b1, Vector2_t3525329788  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::Left(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C"  bool Polygon_Left_m1494401358 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___a0, Int3_t2697168784  ___b1, Int3_t2697168784  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::LeftNotColinear(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C"  bool Polygon_LeftNotColinear_m131000732 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___a0, Int3_t2697168784  ___b1, Int3_t2697168784  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::Left(Pathfinding.Int2,Pathfinding.Int2,Pathfinding.Int2)
extern "C"  bool Polygon_Left_m388572943 (Il2CppObject * __this /* static, unused */, Int2_t2697168783  ___a0, Int2_t2697168783  ___b1, Int2_t2697168783  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::IsClockwiseMargin(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Polygon_IsClockwiseMargin_m2426757692 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, Vector3_t3525329789  ___b1, Vector3_t3525329789  ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::IsClockwise(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Polygon_IsClockwise_m1184244298 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, Vector3_t3525329789  ___b1, Vector3_t3525329789  ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::IsClockwise(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C"  bool Polygon_IsClockwise_m2111828935 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___a0, Int3_t2697168784  ___b1, Int3_t2697168784  ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::IsClockwiseMargin(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C"  bool Polygon_IsClockwiseMargin_m55942037 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___a0, Int3_t2697168784  ___b1, Int3_t2697168784  ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::IsClockwiseMargin(Pathfinding.Int2,Pathfinding.Int2,Pathfinding.Int2)
extern "C"  bool Polygon_IsClockwiseMargin_m3245080918 (Il2CppObject * __this /* static, unused */, Int2_t2697168783  ___a0, Int2_t2697168783  ___b1, Int2_t2697168783  ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::IsColinear(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C"  bool Polygon_IsColinear_m224952866 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___a0, Int3_t2697168784  ___b1, Int3_t2697168784  ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::IsColinearAlmost(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C"  bool Polygon_IsColinearAlmost_m3940036144 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___a0, Int3_t2697168784  ___b1, Int3_t2697168784  ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::IsColinear(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Polygon_IsColinear_m1122536015 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, Vector3_t3525329789  ___b1, Vector3_t3525329789  ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::IntersectsUnclamped(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Polygon_IntersectsUnclamped_m4059631640 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, Vector3_t3525329789  ___b1, Vector3_t3525329789  ___a22, Vector3_t3525329789  ___b23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::Intersects(Pathfinding.Int2,Pathfinding.Int2,Pathfinding.Int2,Pathfinding.Int2)
extern "C"  bool Polygon_Intersects_m1336198813 (Il2CppObject * __this /* static, unused */, Int2_t2697168783  ___start10, Int2_t2697168783  ___end11, Int2_t2697168783  ___start22, Int2_t2697168783  ___end23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::Intersects(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C"  bool Polygon_Intersects_m516493917 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___start10, Int3_t2697168784  ___end11, Int3_t2697168784  ___start22, Int3_t2697168784  ___end23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::Intersects(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Polygon_Intersects_m3066378793 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___start10, Vector3_t3525329789  ___end11, Vector3_t3525329789  ___start22, Vector3_t3525329789  ___end23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.Polygon::IntersectionPointOptimized(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Polygon_IntersectionPointOptimized_m3357916483 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___start10, Vector3_t3525329789  ___dir11, Vector3_t3525329789  ___start22, Vector3_t3525329789  ___dir23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.Polygon::IntersectionPointOptimized(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean&)
extern "C"  Vector3_t3525329789  Polygon_IntersectionPointOptimized_m3226137394 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___start10, Vector3_t3525329789  ___dir11, Vector3_t3525329789  ___start22, Vector3_t3525329789  ___dir23, bool* ___intersects4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::IntersectionFactorRaySegment(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C"  bool Polygon_IntersectionFactorRaySegment_m1805268912 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___start10, Int3_t2697168784  ___end11, Int3_t2697168784  ___start22, Int3_t2697168784  ___end23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::IntersectionFactor(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3,System.Single&,System.Single&)
extern "C"  bool Polygon_IntersectionFactor_m3394126393 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___start10, Int3_t2697168784  ___end11, Int3_t2697168784  ___start22, Int3_t2697168784  ___end23, float* ___factor14, float* ___factor25, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::IntersectionFactor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single&,System.Single&)
extern "C"  bool Polygon_IntersectionFactor_m505701125 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___start10, Vector3_t3525329789  ___end11, Vector3_t3525329789  ___start22, Vector3_t3525329789  ___end23, float* ___factor14, float* ___factor25, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.Polygon::IntersectionFactorRay(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C"  float Polygon_IntersectionFactorRay_m2577554703 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___start10, Int3_t2697168784  ___end11, Int3_t2697168784  ___start22, Int3_t2697168784  ___end23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.Polygon::IntersectionFactor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Polygon_IntersectionFactor_m4225152701 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___start10, Vector3_t3525329789  ___end11, Vector3_t3525329789  ___start22, Vector3_t3525329789  ___end23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.Polygon::IntersectionPoint(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Polygon_IntersectionPoint_m201802584 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___start10, Vector3_t3525329789  ___end11, Vector3_t3525329789  ___start22, Vector3_t3525329789  ___end23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.Polygon::IntersectionPoint(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean&)
extern "C"  Vector3_t3525329789  Polygon_IntersectionPoint_m2857348935 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___start10, Vector3_t3525329789  ___end11, Vector3_t3525329789  ___start22, Vector3_t3525329789  ___end23, bool* ___intersects4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Pathfinding.Polygon::IntersectionPoint(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t3525329788  Polygon_IntersectionPoint_m1532125915 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___start10, Vector2_t3525329788  ___end11, Vector2_t3525329788  ___start22, Vector2_t3525329788  ___end23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Pathfinding.Polygon::IntersectionPoint(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean&)
extern "C"  Vector2_t3525329788  Polygon_IntersectionPoint_m3697895626 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___start10, Vector2_t3525329788  ___end11, Vector2_t3525329788  ___start22, Vector2_t3525329788  ___end23, bool* ___intersects4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.Polygon::SegmentIntersectionPoint(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean&)
extern "C"  Vector3_t3525329789  Polygon_SegmentIntersectionPoint_m1690067198 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___start10, Vector3_t3525329789  ___end11, Vector3_t3525329789  ___start22, Vector3_t3525329789  ___end23, bool* ___intersects4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] Pathfinding.Polygon::ConvexHull(UnityEngine.Vector3[])
extern "C"  Vector3U5BU5D_t3227571696* Polygon_ConvexHull_m2456438674 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t3227571696* ___points0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] Pathfinding.Polygon::ConvexHullXZ(UnityEngine.Vector3[])
extern "C"  Vector3U5BU5D_t3227571696* Polygon_ConvexHullXZ_m2931989328 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t3227571696* ___points0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::LineIntersectsBounds(UnityEngine.Bounds,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Polygon_LineIntersectsBounds_m1728561708 (Il2CppObject * __this /* static, unused */, Bounds_t3518514978  ___bounds0, Vector3_t3525329789  ___a1, Vector3_t3525329789  ___b2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] Pathfinding.Polygon::Subdivide(UnityEngine.Vector3[],System.Int32)
extern "C"  Vector3U5BU5D_t3227571696* Polygon_Subdivide_m2494060298 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t3227571696* ___path0, int32_t ___subdivisions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.Polygon::ClosestPointOnTriangle(UnityEngine.Vector3[],UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Polygon_ClosestPointOnTriangle_m2535594941 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t3227571696* ___triangle0, Vector3_t3525329789  ___point1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.Polygon::ClosestPointOnTriangle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Polygon_ClosestPointOnTriangle_m1456806725 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___tr00, Vector3_t3525329789  ___tr11, Vector3_t3525329789  ___tr22, Vector3_t3525329789  ___point3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.Polygon::DistanceSegmentSegment3D(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Polygon_DistanceSegmentSegment3D_m3922934191 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___s10, Vector3_t3525329789  ___e11, Vector3_t3525329789  ___s22, Vector3_t3525329789  ___e23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
