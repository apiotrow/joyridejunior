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

// Pathfinding.Path
struct Path_t2697364881;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_Path2697364881.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void Pathfinding.PathPool::.cctor()
extern "C"  void PathPool__cctor_m3348650941 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PathPool::Pool(Pathfinding.Path)
extern "C"  void PathPool_Pool_m2415018497 (Il2CppObject * __this /* static, unused */, Path_t2697364881 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.PathPool::GetTotalCreated(System.Type)
extern "C"  int32_t PathPool_GetTotalCreated_m487639871 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.PathPool::GetSize(System.Type)
extern "C"  int32_t PathPool_GetSize_m2664042594 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
