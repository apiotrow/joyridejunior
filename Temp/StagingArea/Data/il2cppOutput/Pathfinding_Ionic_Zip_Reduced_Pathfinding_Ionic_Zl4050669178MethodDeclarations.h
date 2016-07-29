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

// Pathfinding.Ionic.Zlib.InfTree
struct InfTree_t4050669178;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// Pathfinding.Ionic.Zlib.ZlibCodec
struct ZlibCodec_t1793744486;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t158556903;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl1793744486.h"

// System.Void Pathfinding.Ionic.Zlib.InfTree::.ctor()
extern "C"  void InfTree__ctor_m2072233430 (InfTree_t4050669178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.InfTree::.cctor()
extern "C"  void InfTree__cctor_m3627597975 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::huft_build(System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[])
extern "C"  int32_t InfTree_huft_build_m3348677069 (InfTree_t4050669178 * __this, Int32U5BU5D_t1809983122* ___b0, int32_t ___bindex1, int32_t ___n2, int32_t ___s3, Int32U5BU5D_t1809983122* ___d4, Int32U5BU5D_t1809983122* ___e5, Int32U5BU5D_t1809983122* ___t6, Int32U5BU5D_t1809983122* ___m7, Int32U5BU5D_t1809983122* ___hp8, Int32U5BU5D_t1809983122* ___hn9, Int32U5BU5D_t1809983122* ___v10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::inflate_trees_bits(System.Int32[],System.Int32[],System.Int32[],System.Int32[],Pathfinding.Ionic.Zlib.ZlibCodec)
extern "C"  int32_t InfTree_inflate_trees_bits_m3862224992 (InfTree_t4050669178 * __this, Int32U5BU5D_t1809983122* ___c0, Int32U5BU5D_t1809983122* ___bb1, Int32U5BU5D_t1809983122* ___tb2, Int32U5BU5D_t1809983122* ___hp3, ZlibCodec_t1793744486 * ___z4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::inflate_trees_dynamic(System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],Pathfinding.Ionic.Zlib.ZlibCodec)
extern "C"  int32_t InfTree_inflate_trees_dynamic_m1571350987 (InfTree_t4050669178 * __this, int32_t ___nl0, int32_t ___nd1, Int32U5BU5D_t1809983122* ___c2, Int32U5BU5D_t1809983122* ___bl3, Int32U5BU5D_t1809983122* ___bd4, Int32U5BU5D_t1809983122* ___tl5, Int32U5BU5D_t1809983122* ___td6, Int32U5BU5D_t1809983122* ___hp7, ZlibCodec_t1793744486 * ___z8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::inflate_trees_fixed(System.Int32[],System.Int32[],System.Int32[][],System.Int32[][],Pathfinding.Ionic.Zlib.ZlibCodec)
extern "C"  int32_t InfTree_inflate_trees_fixed_m2260281664 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t1809983122* ___bl0, Int32U5BU5D_t1809983122* ___bd1, Int32U5BU5DU5BU5D_t158556903* ___tl2, Int32U5BU5DU5BU5D_t158556903* ___td3, ZlibCodec_t1793744486 * ___z4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.InfTree::initWorkArea(System.Int32)
extern "C"  void InfTree_initWorkArea_m36460493 (InfTree_t4050669178 * __this, int32_t ___vsize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
