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

// Pathfinding.Ionic.Zip.ReadProgressEventArgs
struct ReadProgressEventArgs_t471316989;
// System.String
struct String_t;
// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t495942682;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi3277276783.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip495942682.h"

// System.Void Pathfinding.Ionic.Zip.ReadProgressEventArgs::.ctor(System.String,Pathfinding.Ionic.Zip.ZipProgressEventType)
extern "C"  void ReadProgressEventArgs__ctor_m4251616872 (ReadProgressEventArgs_t471316989 * __this, String_t* ___archiveName0, int32_t ___flavor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ReadProgressEventArgs Pathfinding.Ionic.Zip.ReadProgressEventArgs::Before(System.String,System.Int32)
extern "C"  ReadProgressEventArgs_t471316989 * ReadProgressEventArgs_Before_m1248670121 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName0, int32_t ___entriesTotal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ReadProgressEventArgs Pathfinding.Ionic.Zip.ReadProgressEventArgs::After(System.String,Pathfinding.Ionic.Zip.ZipEntry,System.Int32)
extern "C"  ReadProgressEventArgs_t471316989 * ReadProgressEventArgs_After_m616262558 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName0, ZipEntry_t495942682 * ___entry1, int32_t ___entriesTotal2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ReadProgressEventArgs Pathfinding.Ionic.Zip.ReadProgressEventArgs::Started(System.String)
extern "C"  ReadProgressEventArgs_t471316989 * ReadProgressEventArgs_Started_m2247098068 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ReadProgressEventArgs Pathfinding.Ionic.Zip.ReadProgressEventArgs::ByteUpdate(System.String,Pathfinding.Ionic.Zip.ZipEntry,System.Int64,System.Int64)
extern "C"  ReadProgressEventArgs_t471316989 * ReadProgressEventArgs_ByteUpdate_m3735899350 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName0, ZipEntry_t495942682 * ___entry1, int64_t ___bytesXferred2, int64_t ___totalBytes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ReadProgressEventArgs Pathfinding.Ionic.Zip.ReadProgressEventArgs::Completed(System.String)
extern "C"  ReadProgressEventArgs_t471316989 * ReadProgressEventArgs_Completed_m1439602378 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
