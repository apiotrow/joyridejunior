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

// Pathfinding.Ionic.Zip.ZipContainer
struct ZipContainer_t674162857;
// System.Object
struct Il2CppObject;
// Pathfinding.Ionic.Zip.ZipFile
struct ZipFile_t1967254086;
// Pathfinding.Ionic.Zip.ZipOutputStream
struct ZipOutputStream_t3108803499;
// System.String
struct String_t;
// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream
struct ParallelDeflateOutputStream_t3413079424;
// System.Text.Encoding
struct Encoding_t180559927;
// System.IO.Stream
struct Stream_t219029575;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi3233959165.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl3413079424.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zli211972692.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi2418825471.h"

// System.Void Pathfinding.Ionic.Zip.ZipContainer::.ctor(System.Object)
extern "C"  void ZipContainer__ctor_m3900967055 (ZipContainer_t674162857 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipFile Pathfinding.Ionic.Zip.ZipContainer::get_ZipFile()
extern "C"  ZipFile_t1967254086 * ZipContainer_get_ZipFile_m2429188958 (ZipContainer_t674162857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipOutputStream Pathfinding.Ionic.Zip.ZipContainer::get_ZipOutputStream()
extern "C"  ZipOutputStream_t3108803499 * ZipContainer_get_ZipOutputStream_m217993640 (ZipContainer_t674162857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipContainer::get_Password()
extern "C"  String_t* ZipContainer_get_Password_m2291693702 (ZipContainer_t674162857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.Zip64Option Pathfinding.Ionic.Zip.ZipContainer::get_Zip64()
extern "C"  int32_t ZipContainer_get_Zip64_m3597708663 (ZipContainer_t674162857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipContainer::get_BufferSize()
extern "C"  int32_t ZipContainer_get_BufferSize_m2304152945 (ZipContainer_t674162857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream Pathfinding.Ionic.Zip.ZipContainer::get_ParallelDeflater()
extern "C"  ParallelDeflateOutputStream_t3413079424 * ZipContainer_get_ParallelDeflater_m690255061 (ZipContainer_t674162857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipContainer::set_ParallelDeflater(Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream)
extern "C"  void ZipContainer_set_ParallelDeflater_m2665332498 (ZipContainer_t674162857 * __this, ParallelDeflateOutputStream_t3413079424 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipContainer::get_ParallelDeflateThreshold()
extern "C"  int64_t ZipContainer_get_ParallelDeflateThreshold_m350208312 (ZipContainer_t674162857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipContainer::get_ParallelDeflateMaxBufferPairs()
extern "C"  int32_t ZipContainer_get_ParallelDeflateMaxBufferPairs_m2688388043 (ZipContainer_t674162857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipContainer::get_CodecBufferSize()
extern "C"  int32_t ZipContainer_get_CodecBufferSize_m4010486121 (ZipContainer_t674162857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zip.ZipContainer::get_Strategy()
extern "C"  int32_t ZipContainer_get_Strategy_m720403942 (ZipContainer_t674162857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.Zip64Option Pathfinding.Ionic.Zip.ZipContainer::get_UseZip64WhenSaving()
extern "C"  int32_t ZipContainer_get_UseZip64WhenSaving_m68016662 (ZipContainer_t674162857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipContainer::get_AlternateEncoding()
extern "C"  Encoding_t180559927 * ZipContainer_get_AlternateEncoding_m734353669 (ZipContainer_t674162857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipContainer::get_DefaultEncoding()
extern "C"  Encoding_t180559927 * ZipContainer_get_DefaultEncoding_m1419086796 (ZipContainer_t674162857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipContainer::get_AlternateEncodingUsage()
extern "C"  int32_t ZipContainer_get_AlternateEncodingUsage_m3789927548 (ZipContainer_t674162857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.ZipContainer::get_ReadStream()
extern "C"  Stream_t219029575 * ZipContainer_get_ReadStream_m2474921292 (ZipContainer_t674162857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
