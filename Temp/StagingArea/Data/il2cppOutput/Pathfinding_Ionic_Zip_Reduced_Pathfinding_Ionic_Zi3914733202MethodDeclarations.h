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

// Pathfinding.Ionic.Zip.AddProgressEventArgs
struct AddProgressEventArgs_t3914733202;
// System.String
struct String_t;
// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t495942682;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi3277276783.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip495942682.h"

// System.Void Pathfinding.Ionic.Zip.AddProgressEventArgs::.ctor(System.String,Pathfinding.Ionic.Zip.ZipProgressEventType)
extern "C"  void AddProgressEventArgs__ctor_m1193961079 (AddProgressEventArgs_t3914733202 * __this, String_t* ___archiveName0, int32_t ___flavor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.AddProgressEventArgs Pathfinding.Ionic.Zip.AddProgressEventArgs::AfterEntry(System.String,Pathfinding.Ionic.Zip.ZipEntry,System.Int32)
extern "C"  AddProgressEventArgs_t3914733202 * AddProgressEventArgs_AfterEntry_m1711289470 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName0, ZipEntry_t495942682 * ___entry1, int32_t ___entriesTotal2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
