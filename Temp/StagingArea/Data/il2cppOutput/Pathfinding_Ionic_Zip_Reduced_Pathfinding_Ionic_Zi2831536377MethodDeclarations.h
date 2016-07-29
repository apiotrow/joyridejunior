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

// Pathfinding.Ionic.Zip.ZipErrorEventArgs
struct ZipErrorEventArgs_t2831536377;
// System.String
struct String_t;
// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t495942682;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip495942682.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void Pathfinding.Ionic.Zip.ZipErrorEventArgs::.ctor()
extern "C"  void ZipErrorEventArgs__ctor_m3682667985 (ZipErrorEventArgs_t2831536377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipErrorEventArgs Pathfinding.Ionic.Zip.ZipErrorEventArgs::Saving(System.String,Pathfinding.Ionic.Zip.ZipEntry,System.Exception)
extern "C"  ZipErrorEventArgs_t2831536377 * ZipErrorEventArgs_Saving_m717945855 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName0, ZipEntry_t495942682 * ___entry1, Exception_t1967233988 * ___exception2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
