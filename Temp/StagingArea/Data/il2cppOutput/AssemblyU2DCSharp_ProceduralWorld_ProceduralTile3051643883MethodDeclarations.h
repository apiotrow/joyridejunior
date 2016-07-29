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

// ProceduralWorld/ProceduralTile
struct ProceduralTile_t3051643883;
// ProceduralWorld
struct ProceduralWorld_t114635253;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ProceduralWorld114635253.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

// System.Void ProceduralWorld/ProceduralTile::.ctor(ProceduralWorld,System.Int32,System.Int32)
extern "C"  void ProceduralTile__ctor_m3741023495 (ProceduralTile_t3051643883 * __this, ProceduralWorld_t114635253 * ___world0, int32_t ___x1, int32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProceduralWorld/ProceduralTile::get_destroyed()
extern "C"  bool ProceduralTile_get_destroyed_m946056304 (ProceduralTile_t3051643883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProceduralWorld/ProceduralTile::set_destroyed(System.Boolean)
extern "C"  void ProceduralTile_set_destroyed_m856639015 (ProceduralTile_t3051643883 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ProceduralWorld/ProceduralTile::Generate()
extern "C"  Il2CppObject * ProceduralTile_Generate_m4239657355 (ProceduralTile_t3051643883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProceduralWorld/ProceduralTile::ForceFinish()
extern "C"  void ProceduralTile_ForceFinish_m1589420466 (ProceduralTile_t3051643883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProceduralWorld/ProceduralTile::RandomInside()
extern "C"  Vector3_t3525329789  ProceduralTile_RandomInside_m1592824167 (ProceduralTile_t3051643883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProceduralWorld/ProceduralTile::RandomInside(System.Single,System.Single)
extern "C"  Vector3_t3525329789  ProceduralTile_RandomInside_m2364443529 (ProceduralTile_t3051643883 * __this, float ___px0, float ___pz1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion ProceduralWorld/ProceduralTile::RandomYRot()
extern "C"  Quaternion_t1891715979  ProceduralTile_RandomYRot_m1008007831 (ProceduralTile_t3051643883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ProceduralWorld/ProceduralTile::InternalGenerate()
extern "C"  Il2CppObject * ProceduralTile_InternalGenerate_m3583967016 (ProceduralTile_t3051643883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProceduralWorld/ProceduralTile::Destroy()
extern "C"  void ProceduralTile_Destroy_m1326777550 (ProceduralTile_t3051643883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
