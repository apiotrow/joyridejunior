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

// Pathfinding.GraphCollision
struct GraphCollision_t2946873072;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1365728750;
// Pathfinding.Serialization.GraphSerializationContext
struct GraphSerializationContext_t387880975;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"
#include "AssemblyU2DCSharp_Pathfinding_Serialization_GraphSe387880975.h"

// System.Void Pathfinding.GraphCollision::.ctor()
extern "C"  void GraphCollision__ctor_m3678393133 (GraphCollision_t2946873072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphCollision::Initialize(UnityEngine.Matrix4x4,System.Single)
extern "C"  void GraphCollision_Initialize_m2513082616 (GraphCollision_t2946873072 * __this, Matrix4x4_t277289660  ___matrix0, float ___scale1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GraphCollision::Check(UnityEngine.Vector3)
extern "C"  bool GraphCollision_Check_m1980577114 (GraphCollision_t2946873072 * __this, Vector3_t3525329789  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.GraphCollision::CheckHeight(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  GraphCollision_CheckHeight_m2145166009 (GraphCollision_t2946873072 * __this, Vector3_t3525329789  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.GraphCollision::CheckHeight(UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Boolean&)
extern "C"  Vector3_t3525329789  GraphCollision_CheckHeight_m483431439 (GraphCollision_t2946873072 * __this, Vector3_t3525329789  ___position0, RaycastHit_t46221527 * ___hit1, bool* ___walkable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.GraphCollision::Raycast(UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Boolean&)
extern "C"  Vector3_t3525329789  GraphCollision_Raycast_m3506262069 (GraphCollision_t2946873072 * __this, Vector3_t3525329789  ___origin0, RaycastHit_t46221527 * ___hit1, bool* ___walkable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] Pathfinding.GraphCollision::CheckHeightAll(UnityEngine.Vector3)
extern "C"  RaycastHitU5BU5D_t1365728750* GraphCollision_CheckHeightAll_m2644777878 (GraphCollision_t2946873072 * __this, Vector3_t3525329789  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphCollision::SerializeSettings(Pathfinding.Serialization.GraphSerializationContext)
extern "C"  void GraphCollision_SerializeSettings_m107750431 (GraphCollision_t2946873072 * __this, GraphSerializationContext_t387880975 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphCollision::DeserializeSettings(Pathfinding.Serialization.GraphSerializationContext)
extern "C"  void GraphCollision_DeserializeSettings_m178486880 (GraphCollision_t2946873072 * __this, GraphSerializationContext_t387880975 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
