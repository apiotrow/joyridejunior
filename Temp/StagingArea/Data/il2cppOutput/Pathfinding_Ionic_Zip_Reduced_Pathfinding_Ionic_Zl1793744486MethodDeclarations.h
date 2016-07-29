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

// Pathfinding.Ionic.Zlib.ZlibCodec
struct ZlibCodec_t1793744486;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl1868319673.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl1823839577.h"

// System.Void Pathfinding.Ionic.Zlib.ZlibCodec::.ctor()
extern "C"  void ZlibCodec__ctor_m1569802986 (ZlibCodec_t1793744486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::InitializeInflate(System.Boolean)
extern "C"  int32_t ZlibCodec_InitializeInflate_m434772302 (ZlibCodec_t1793744486 * __this, bool ___expectRfc1950Header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::InitializeInflate(System.Int32,System.Boolean)
extern "C"  int32_t ZlibCodec_InitializeInflate_m3585278869 (ZlibCodec_t1793744486 * __this, int32_t ___windowBits0, bool ___expectRfc1950Header1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::Inflate(Pathfinding.Ionic.Zlib.FlushType)
extern "C"  int32_t ZlibCodec_Inflate_m1826543670 (ZlibCodec_t1793744486 * __this, int32_t ___flush0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::EndInflate()
extern "C"  int32_t ZlibCodec_EndInflate_m1589821198 (ZlibCodec_t1793744486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::InitializeDeflate(Pathfinding.Ionic.Zlib.CompressionLevel,System.Boolean)
extern "C"  int32_t ZlibCodec_InitializeDeflate_m3228855825 (ZlibCodec_t1793744486 * __this, int32_t ___level0, bool ___wantRfc1950Header1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::_InternalInitializeDeflate(System.Boolean)
extern "C"  int32_t ZlibCodec__InternalInitializeDeflate_m343332056 (ZlibCodec_t1793744486 * __this, bool ___wantRfc1950Header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::Deflate(Pathfinding.Ionic.Zlib.FlushType)
extern "C"  int32_t ZlibCodec_Deflate_m2645592410 (ZlibCodec_t1793744486 * __this, int32_t ___flush0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::EndDeflate()
extern "C"  int32_t ZlibCodec_EndDeflate_m3531735090 (ZlibCodec_t1793744486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ZlibCodec::ResetDeflate()
extern "C"  void ZlibCodec_ResetDeflate_m2316954870 (ZlibCodec_t1793744486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ZlibCodec::flush_pending()
extern "C"  void ZlibCodec_flush_pending_m1652605316 (ZlibCodec_t1793744486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::read_buf(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ZlibCodec_read_buf_m1699954461 (ZlibCodec_t1793744486 * __this, ByteU5BU5D_t58506160* ___buf0, int32_t ___start1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
