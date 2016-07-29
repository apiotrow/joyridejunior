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

// Pathfinding.Ionic.Zlib.Tree
struct Tree_t444004153;
// Pathfinding.Ionic.Zlib.DeflateManager
struct DeflateManager_t1675362461;
// System.Int16[]
struct Int16U5BU5D_t3675865332;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl1675362461.h"

// System.Void Pathfinding.Ionic.Zlib.Tree::.ctor()
extern "C"  void Tree__ctor_m3538529875 (Tree_t444004153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.Tree::.cctor()
extern "C"  void Tree__cctor_m1838147514 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.Tree::DistanceCode(System.Int32)
extern "C"  int32_t Tree_DistanceCode_m1898362460 (Il2CppObject * __this /* static, unused */, int32_t ___dist0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.Tree::gen_bitlen(Pathfinding.Ionic.Zlib.DeflateManager)
extern "C"  void Tree_gen_bitlen_m2312993371 (Tree_t444004153 * __this, DeflateManager_t1675362461 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.Tree::build_tree(Pathfinding.Ionic.Zlib.DeflateManager)
extern "C"  void Tree_build_tree_m4242421315 (Tree_t444004153 * __this, DeflateManager_t1675362461 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.Tree::gen_codes(System.Int16[],System.Int32,System.Int16[])
extern "C"  void Tree_gen_codes_m416394345 (Il2CppObject * __this /* static, unused */, Int16U5BU5D_t3675865332* ___tree0, int32_t ___max_code1, Int16U5BU5D_t3675865332* ___bl_count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.Tree::bi_reverse(System.Int32,System.Int32)
extern "C"  int32_t Tree_bi_reverse_m3649537459 (Il2CppObject * __this /* static, unused */, int32_t ___code0, int32_t ___len1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
