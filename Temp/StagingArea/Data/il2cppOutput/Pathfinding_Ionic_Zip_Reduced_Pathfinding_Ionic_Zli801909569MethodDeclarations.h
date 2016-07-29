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

// Pathfinding.Ionic.Zlib.InflateManager
struct InflateManager_t801909569;
// Pathfinding.Ionic.Zlib.ZlibCodec
struct ZlibCodec_t1793744486;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl1793744486.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl1868319673.h"

// System.Void Pathfinding.Ionic.Zlib.InflateManager::.ctor(System.Boolean)
extern "C"  void InflateManager__ctor_m1842204674 (InflateManager_t801909569 * __this, bool ___expectRfc1950HeaderBytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.InflateManager::.cctor()
extern "C"  void InflateManager__cctor_m885877570 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.InflateManager::get_HandleRfc1950HeaderBytes()
extern "C"  bool InflateManager_get_HandleRfc1950HeaderBytes_m2813854920 (InflateManager_t801909569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::Reset()
extern "C"  int32_t InflateManager_Reset_m855593856 (InflateManager_t801909569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::End()
extern "C"  int32_t InflateManager_End_m1115392012 (InflateManager_t801909569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::Initialize(Pathfinding.Ionic.Zlib.ZlibCodec,System.Int32)
extern "C"  int32_t InflateManager_Initialize_m1153169780 (InflateManager_t801909569 * __this, ZlibCodec_t1793744486 * ___codec0, int32_t ___w1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::Inflate(Pathfinding.Ionic.Zlib.FlushType)
extern "C"  int32_t InflateManager_Inflate_m3933687271 (InflateManager_t801909569 * __this, int32_t ___flush0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
