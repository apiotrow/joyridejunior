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

// Pathfinding.Ionic.Zlib.InflateCodes
struct InflateCodes_t759193082;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// Pathfinding.Ionic.Zlib.InflateBlocks
struct InflateBlocks_t1672309192;
// Pathfinding.Ionic.Zlib.ZlibCodec
struct ZlibCodec_t1793744486;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl1672309192.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl1793744486.h"

// System.Void Pathfinding.Ionic.Zlib.InflateCodes::.ctor()
extern "C"  void InflateCodes__ctor_m2191237810 (InflateCodes_t759193082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.InflateCodes::Init(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32)
extern "C"  void InflateCodes_Init_m3812615816 (InflateCodes_t759193082 * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t1809983122* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t1809983122* ___td4, int32_t ___td_index5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::Process(Pathfinding.Ionic.Zlib.InflateBlocks,System.Int32)
extern "C"  int32_t InflateCodes_Process_m3122577520 (InflateCodes_t759193082 * __this, InflateBlocks_t1672309192 * ___blocks0, int32_t ___r1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::InflateFast(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,Pathfinding.Ionic.Zlib.InflateBlocks,Pathfinding.Ionic.Zlib.ZlibCodec)
extern "C"  int32_t InflateCodes_InflateFast_m663644369 (InflateCodes_t759193082 * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t1809983122* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t1809983122* ___td4, int32_t ___td_index5, InflateBlocks_t1672309192 * ___s6, ZlibCodec_t1793744486 * ___z7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
