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

// Pathfinding.Ionic.Zip.SaveProgressEventArgs
struct SaveProgressEventArgs_t766852342;
// System.String
struct String_t;
// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t495942682;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip495942682.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi3277276783.h"

// System.Void Pathfinding.Ionic.Zip.SaveProgressEventArgs::.ctor(System.String,System.Boolean,System.Int32,System.Int32,Pathfinding.Ionic.Zip.ZipEntry)
extern "C"  void SaveProgressEventArgs__ctor_m2765929955 (SaveProgressEventArgs_t766852342 * __this, String_t* ___archiveName0, bool ___before1, int32_t ___entriesTotal2, int32_t ___entriesSaved3, ZipEntry_t495942682 * ___entry4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.SaveProgressEventArgs::.ctor(System.String,Pathfinding.Ionic.Zip.ZipProgressEventType)
extern "C"  void SaveProgressEventArgs__ctor_m4073237135 (SaveProgressEventArgs_t766852342 * __this, String_t* ___archiveName0, int32_t ___flavor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.SaveProgressEventArgs Pathfinding.Ionic.Zip.SaveProgressEventArgs::ByteUpdate(System.String,Pathfinding.Ionic.Zip.ZipEntry,System.Int64,System.Int64)
extern "C"  SaveProgressEventArgs_t766852342 * SaveProgressEventArgs_ByteUpdate_m1217479752 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName0, ZipEntry_t495942682 * ___entry1, int64_t ___bytesXferred2, int64_t ___totalBytes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.SaveProgressEventArgs Pathfinding.Ionic.Zip.SaveProgressEventArgs::Started(System.String)
extern "C"  SaveProgressEventArgs_t766852342 * SaveProgressEventArgs_Started_m2700311878 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.SaveProgressEventArgs Pathfinding.Ionic.Zip.SaveProgressEventArgs::Completed(System.String)
extern "C"  SaveProgressEventArgs_t766852342 * SaveProgressEventArgs_Completed_m3186376892 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
