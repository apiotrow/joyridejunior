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
// UnityEngine.Mesh
struct Mesh_t1525280346;
// UnityEngine.MeshSubsetCombineUtility/MeshInstance[]
struct MeshInstanceU5BU5D_t333451511;
// System.String
struct String_t;
// UnityEngine.MeshSubsetCombineUtility/SubMeshInstance[]
struct SubMeshInstanceU5BU5D_t767966807;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Mesh1525280346.h"

// System.Void UnityEngine.StaticBatchingUtility::Combine(UnityEngine.GameObject)
extern "C"  void StaticBatchingUtility_Combine_m3190863128 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___staticBatchRoot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh UnityEngine.StaticBatchingUtility::InternalCombineVertices(UnityEngine.MeshSubsetCombineUtility/MeshInstance[],System.String)
extern "C"  Mesh_t1525280346 * StaticBatchingUtility_InternalCombineVertices_m2999804615 (Il2CppObject * __this /* static, unused */, MeshInstanceU5BU5D_t333451511* ___meshes0, String_t* ___meshName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StaticBatchingUtility::InternalCombineIndices(UnityEngine.MeshSubsetCombineUtility/SubMeshInstance[],UnityEngine.Mesh)
extern "C"  void StaticBatchingUtility_InternalCombineIndices_m214094628 (Il2CppObject * __this /* static, unused */, SubMeshInstanceU5BU5D_t767966807* ___submeshes0, Mesh_t1525280346 * ___combinedMesh1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
