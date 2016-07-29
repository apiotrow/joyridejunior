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

// Pathfinding.Ionic.Zip.ZipProgressEventArgs
struct ZipProgressEventArgs_t3276703762;
// System.String
struct String_t;
// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t495942682;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi3277276783.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip495942682.h"

// System.Void Pathfinding.Ionic.Zip.ZipProgressEventArgs::.ctor()
extern "C"  void ZipProgressEventArgs__ctor_m441606620 (ZipProgressEventArgs_t3276703762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipProgressEventArgs::.ctor(System.String,Pathfinding.Ionic.Zip.ZipProgressEventType)
extern "C"  void ZipProgressEventArgs__ctor_m2131502327 (ZipProgressEventArgs_t3276703762 * __this, String_t* ___archiveName0, int32_t ___flavor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipProgressEventArgs::set_EntriesTotal(System.Int32)
extern "C"  void ZipProgressEventArgs_set_EntriesTotal_m2593874506 (ZipProgressEventArgs_t3276703762 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipProgressEventArgs::set_CurrentEntry(Pathfinding.Ionic.Zip.ZipEntry)
extern "C"  void ZipProgressEventArgs_set_CurrentEntry_m690467498 (ZipProgressEventArgs_t3276703762 * __this, ZipEntry_t495942682 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipProgressEventArgs::get_Cancel()
extern "C"  bool ZipProgressEventArgs_get_Cancel_m338866649 (ZipProgressEventArgs_t3276703762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipProgressEventArgs::set_EventType(Pathfinding.Ionic.Zip.ZipProgressEventType)
extern "C"  void ZipProgressEventArgs_set_EventType_m1018635944 (ZipProgressEventArgs_t3276703762 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipProgressEventArgs::set_ArchiveName(System.String)
extern "C"  void ZipProgressEventArgs_set_ArchiveName_m2102563192 (ZipProgressEventArgs_t3276703762 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipProgressEventArgs::set_BytesTransferred(System.Int64)
extern "C"  void ZipProgressEventArgs_set_BytesTransferred_m4237536850 (ZipProgressEventArgs_t3276703762 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipProgressEventArgs::set_TotalBytesToTransfer(System.Int64)
extern "C"  void ZipProgressEventArgs_set_TotalBytesToTransfer_m2419202020 (ZipProgressEventArgs_t3276703762 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
