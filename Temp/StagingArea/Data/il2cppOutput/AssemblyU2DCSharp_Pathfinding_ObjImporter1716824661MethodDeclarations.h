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

// Pathfinding.ObjImporter
struct ObjImporter_t1716824661;
// UnityEngine.Mesh
struct Mesh_t1525280346;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Pathfinding_ObjImporter_meshStru1043245090.h"

// System.Void Pathfinding.ObjImporter::.ctor()
extern "C"  void ObjImporter__ctor_m3961302156 (ObjImporter_t1716824661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Pathfinding.ObjImporter::ImportFile(System.String)
extern "C"  Mesh_t1525280346 * ObjImporter_ImportFile_m347833218 (Il2CppObject * __this /* static, unused */, String_t* ___filePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.ObjImporter/meshStruct Pathfinding.ObjImporter::createMeshStruct(System.String)
extern "C"  meshStruct_t1043245090  ObjImporter_createMeshStruct_m3646840503 (Il2CppObject * __this /* static, unused */, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ObjImporter::populateMeshStruct(Pathfinding.ObjImporter/meshStruct&)
extern "C"  void ObjImporter_populateMeshStruct_m3157690490 (Il2CppObject * __this /* static, unused */, meshStruct_t1043245090 * ___mesh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
