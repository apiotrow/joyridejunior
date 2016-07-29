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

// System.IO.Stream
struct Stream_t219029575;
// System.Collections.Generic.ICollection`1<Pathfinding.Ionic.Zip.ZipEntry>
struct ICollection_1_t961774068;
// System.String
struct String_t;
// Pathfinding.Ionic.Zip.ZipContainer
struct ZipContainer_t674162857;
// System.Text.Encoding
struct Encoding_t180559927;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi3233959165.h"
#include "mscorlib_System_String968488902.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip674162857.h"

// System.Boolean Pathfinding.Ionic.Zip.ZipOutput::WriteCentralDirectoryStructure(System.IO.Stream,System.Collections.Generic.ICollection`1<Pathfinding.Ionic.Zip.ZipEntry>,System.UInt32,Pathfinding.Ionic.Zip.Zip64Option,System.String,Pathfinding.Ionic.Zip.ZipContainer)
extern "C"  bool ZipOutput_WriteCentralDirectoryStructure_m3496836627 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___s0, Il2CppObject* ___entries1, uint32_t ___numSegments2, int32_t ___zip643, String_t* ___comment4, ZipContainer_t674162857 * ___container5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipOutput::GetEncoding(Pathfinding.Ionic.Zip.ZipContainer,System.String)
extern "C"  Encoding_t180559927 * ZipOutput_GetEncoding_m3582443457 (Il2CppObject * __this /* static, unused */, ZipContainer_t674162857 * ___container0, String_t* ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Ionic.Zip.ZipOutput::GenCentralDirectoryFooter(System.Int64,System.Int64,Pathfinding.Ionic.Zip.Zip64Option,System.Int32,System.String,Pathfinding.Ionic.Zip.ZipContainer)
extern "C"  ByteU5BU5D_t58506160* ZipOutput_GenCentralDirectoryFooter_m3939417767 (Il2CppObject * __this /* static, unused */, int64_t ___StartOfCentralDirectory0, int64_t ___EndOfCentralDirectory1, int32_t ___zip642, int32_t ___entryCount3, String_t* ___comment4, ZipContainer_t674162857 * ___container5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Ionic.Zip.ZipOutput::GenZip64EndOfCentralDirectory(System.Int64,System.Int64,System.Int32,System.UInt32)
extern "C"  ByteU5BU5D_t58506160* ZipOutput_GenZip64EndOfCentralDirectory_m549118215 (Il2CppObject * __this /* static, unused */, int64_t ___StartOfCentralDirectory0, int64_t ___EndOfCentralDirectory1, int32_t ___entryCount2, uint32_t ___numSegments3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipOutput::CountEntries(System.Collections.Generic.ICollection`1<Pathfinding.Ionic.Zip.ZipEntry>)
extern "C"  int32_t ZipOutput_CountEntries_m1703124199 (Il2CppObject * __this /* static, unused */, Il2CppObject* ____entries0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
