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

// Pathfinding.Ionic.Zip.ExtractProgressEventArgs
struct ExtractProgressEventArgs_t2640699058;
// System.String
struct String_t;
// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t495942682;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi3277276783.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip495942682.h"

// System.Void Pathfinding.Ionic.Zip.ExtractProgressEventArgs::.ctor(System.String,Pathfinding.Ionic.Zip.ZipProgressEventType)
extern "C"  void ExtractProgressEventArgs__ctor_m1311916375 (ExtractProgressEventArgs_t2640699058 * __this, String_t* ___archiveName0, int32_t ___flavor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ExtractProgressEventArgs::.ctor()
extern "C"  void ExtractProgressEventArgs__ctor_m3847822908 (ExtractProgressEventArgs_t2640699058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ExtractProgressEventArgs Pathfinding.Ionic.Zip.ExtractProgressEventArgs::BeforeExtractEntry(System.String,Pathfinding.Ionic.Zip.ZipEntry,System.String)
extern "C"  ExtractProgressEventArgs_t2640699058 * ExtractProgressEventArgs_BeforeExtractEntry_m2612811279 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName0, ZipEntry_t495942682 * ___entry1, String_t* ___extractLocation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ExtractProgressEventArgs Pathfinding.Ionic.Zip.ExtractProgressEventArgs::ExtractExisting(System.String,Pathfinding.Ionic.Zip.ZipEntry,System.String)
extern "C"  ExtractProgressEventArgs_t2640699058 * ExtractProgressEventArgs_ExtractExisting_m2087656839 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName0, ZipEntry_t495942682 * ___entry1, String_t* ___extractLocation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ExtractProgressEventArgs Pathfinding.Ionic.Zip.ExtractProgressEventArgs::AfterExtractEntry(System.String,Pathfinding.Ionic.Zip.ZipEntry,System.String)
extern "C"  ExtractProgressEventArgs_t2640699058 * ExtractProgressEventArgs_AfterExtractEntry_m1625366984 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName0, ZipEntry_t495942682 * ___entry1, String_t* ___extractLocation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ExtractProgressEventArgs Pathfinding.Ionic.Zip.ExtractProgressEventArgs::ByteUpdate(System.String,Pathfinding.Ionic.Zip.ZipEntry,System.Int64,System.Int64)
extern "C"  ExtractProgressEventArgs_t2640699058 * ExtractProgressEventArgs_ByteUpdate_m863969204 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName0, ZipEntry_t495942682 * ___entry1, int64_t ___bytesWritten2, int64_t ___totalBytes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
