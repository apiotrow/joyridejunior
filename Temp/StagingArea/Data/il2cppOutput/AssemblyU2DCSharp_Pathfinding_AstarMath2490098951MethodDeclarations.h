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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_Pathfinding_Int32697168784.h"
#include "AssemblyU2DCSharp_Pathfinding_Int22697168783.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// UnityEngine.Vector3 Pathfinding.AstarMath::NearestPoint(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  AstarMath_NearestPoint_m1935360189 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___lineStart0, Vector3_t3525329789  ___lineEnd1, Vector3_t3525329789  ___point2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::NearestPointFactor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float AstarMath_NearestPointFactor_m2342373440 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___lineStart0, Vector3_t3525329789  ___lineEnd1, Vector3_t3525329789  ___point2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::NearestPointFactor(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C"  float AstarMath_NearestPointFactor_m3576013073 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___lineStart0, Int3_t2697168784  ___lineEnd1, Int3_t2697168784  ___point2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::NearestPointFactor(Pathfinding.Int2,Pathfinding.Int2,Pathfinding.Int2)
extern "C"  float AstarMath_NearestPointFactor_m2470184658 (Il2CppObject * __this /* static, unused */, Int2_t2697168783  ___lineStart0, Int2_t2697168783  ___lineEnd1, Int2_t2697168783  ___point2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.AstarMath::NearestPointStrict(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  AstarMath_NearestPointStrict_m3706989364 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___lineStart0, Vector3_t3525329789  ___lineEnd1, Vector3_t3525329789  ___point2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.AstarMath::NearestPointStrictXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  AstarMath_NearestPointStrictXZ_m4157514226 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___lineStart0, Vector3_t3525329789  ___lineEnd1, Vector3_t3525329789  ___point2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::DistancePointSegment(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  float AstarMath_DistancePointSegment_m436573296 (Il2CppObject * __this /* static, unused */, int32_t ___x0, int32_t ___z1, int32_t ___px2, int32_t ___pz3, int32_t ___qx4, int32_t ___qz5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::DistancePointSegment(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C"  float AstarMath_DistancePointSegment_m3800119464 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___a0, Int3_t2697168784  ___b1, Int3_t2697168784  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::DistancePointSegmentStrict(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float AstarMath_DistancePointSegmentStrict_m4277349376 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, Vector3_t3525329789  ___b1, Vector3_t3525329789  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.AstarMath::CubicBezier(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3525329789  AstarMath_CubicBezier_m872790108 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___p00, Vector3_t3525329789  ___p11, Vector3_t3525329789  ___p22, Vector3_t3525329789  ___p33, float ___t4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::MapTo(System.Single,System.Single,System.Single)
extern "C"  float AstarMath_MapTo_m2296571866 (Il2CppObject * __this /* static, unused */, float ___startMin0, float ___startMax1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::MapTo(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  float AstarMath_MapTo_m219979236 (Il2CppObject * __this /* static, unused */, float ___startMin0, float ___startMax1, float ___targetMin2, float ___targetMax3, float ___value4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.AstarMath::FormatBytesBinary(System.Int32)
extern "C"  String_t* AstarMath_FormatBytesBinary_m989298561 (Il2CppObject * __this /* static, unused */, int32_t ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.AstarMath::Bit(System.Int32,System.Int32)
extern "C"  int32_t AstarMath_Bit_m2625610291 (Il2CppObject * __this /* static, unused */, int32_t ___a0, int32_t ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Pathfinding.AstarMath::IntToColor(System.Int32,System.Single)
extern "C"  Color_t1588175760  AstarMath_IntToColor_m2012766962 (Il2CppObject * __this /* static, unused */, int32_t ___i0, float ___a1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::SqrMagnitudeXZ(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float AstarMath_SqrMagnitudeXZ_m455965296 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, Vector3_t3525329789  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::DistancePointSegment2(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  float AstarMath_DistancePointSegment2_m2834957704 (Il2CppObject * __this /* static, unused */, int32_t ___x0, int32_t ___z1, int32_t ___px2, int32_t ___pz3, int32_t ___qx4, int32_t ___qz5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::DistancePointSegment2(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float AstarMath_DistancePointSegment2_m2713506209 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, Vector3_t3525329789  ___b1, Vector3_t3525329789  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.AstarMath::ComputeVertexHash(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t AstarMath_ComputeVertexHash_m4030210080 (Il2CppObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, int32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::Hermite(System.Single,System.Single,System.Single)
extern "C"  float AstarMath_Hermite_m2089134863 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::MapToRange(System.Single,System.Single,System.Single)
extern "C"  float AstarMath_MapToRange_m483429201 (Il2CppObject * __this /* static, unused */, float ___targetMin0, float ___targetMax1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.AstarMath::FormatBytes(System.Int32)
extern "C"  String_t* AstarMath_FormatBytes_m1015457696 (Il2CppObject * __this /* static, unused */, int32_t ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::MagnitudeXZ(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float AstarMath_MagnitudeXZ_m1906440278 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a0, Vector3_t3525329789  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.AstarMath::Repeat(System.Int32,System.Int32)
extern "C"  int32_t AstarMath_Repeat_m752308943 (Il2CppObject * __this /* static, unused */, int32_t ___i0, int32_t ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::Abs(System.Single)
extern "C"  float AstarMath_Abs_m1305517365 (Il2CppObject * __this /* static, unused */, float ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.AstarMath::Abs(System.Int32)
extern "C"  int32_t AstarMath_Abs_m1961335753 (Il2CppObject * __this /* static, unused */, int32_t ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::Min(System.Single,System.Single)
extern "C"  float AstarMath_Min_m4213343610 (Il2CppObject * __this /* static, unused */, float ___a0, float ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.AstarMath::Min(System.Int32,System.Int32)
extern "C"  int32_t AstarMath_Min_m4278506958 (Il2CppObject * __this /* static, unused */, int32_t ___a0, int32_t ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.AstarMath::Min(System.UInt32,System.UInt32)
extern "C"  uint32_t AstarMath_Min_m1049833897 (Il2CppObject * __this /* static, unused */, uint32_t ___a0, uint32_t ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::Max(System.Single,System.Single)
extern "C"  float AstarMath_Max_m1520105384 (Il2CppObject * __this /* static, unused */, float ___a0, float ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.AstarMath::Max(System.Int32,System.Int32)
extern "C"  int32_t AstarMath_Max_m481295228 (Il2CppObject * __this /* static, unused */, int32_t ___a0, int32_t ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.AstarMath::Max(System.UInt32,System.UInt32)
extern "C"  uint32_t AstarMath_Max_m2651562967 (Il2CppObject * __this /* static, unused */, uint32_t ___a0, uint32_t ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 Pathfinding.AstarMath::Max(System.UInt16,System.UInt16)
extern "C"  uint16_t AstarMath_Max_m4285877777 (Il2CppObject * __this /* static, unused */, uint16_t ___a0, uint16_t ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::Sign(System.Single)
extern "C"  float AstarMath_Sign_m355928304 (Il2CppObject * __this /* static, unused */, float ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.AstarMath::Sign(System.Int32)
extern "C"  int32_t AstarMath_Sign_m3667820138 (Il2CppObject * __this /* static, unused */, int32_t ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::Clamp(System.Single,System.Single,System.Single)
extern "C"  float AstarMath_Clamp_m1373001110 (Il2CppObject * __this /* static, unused */, float ___a0, float ___b1, float ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.AstarMath::Clamp(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t AstarMath_Clamp_m2617372146 (Il2CppObject * __this /* static, unused */, int32_t ___a0, int32_t ___b1, int32_t ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::Clamp01(System.Single)
extern "C"  float AstarMath_Clamp01_m2545733099 (Il2CppObject * __this /* static, unused */, float ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.AstarMath::Clamp01(System.Int32)
extern "C"  int32_t AstarMath_Clamp01_m1444154195 (Il2CppObject * __this /* static, unused */, int32_t ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::Lerp(System.Single,System.Single,System.Single)
extern "C"  float AstarMath_Lerp_m2068762112 (Il2CppObject * __this /* static, unused */, float ___a0, float ___b1, float ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.AstarMath::RoundToInt(System.Single)
extern "C"  int32_t AstarMath_RoundToInt_m3716228105 (Il2CppObject * __this /* static, unused */, float ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.AstarMath::RoundToInt(System.Double)
extern "C"  int32_t AstarMath_RoundToInt_m3466665376 (Il2CppObject * __this /* static, unused */, double ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
