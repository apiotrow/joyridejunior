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

// Pathfinding.Ionic.Zip.ZipFile
struct ZipFile_t1967254086;
// System.EventHandler`1<Pathfinding.Ionic.Zip.ReadProgressEventArgs>
struct EventHandler_1_t1313894632;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t495942682;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t219029575;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Exception
struct Exception_t1967233988;
// System.IO.TextWriter
struct TextWriter_t1689927879;
// System.Text.Encoding
struct Encoding_t180559927;
// System.Collections.Generic.ICollection`1<Pathfinding.Ionic.Zip.ZipEntry>
struct ICollection_1_t961774068;
// Pathfinding.Ionic.Zip.SetCompressionCallback
struct SetCompressionCallback_t727837266;
// System.Collections.Generic.IEnumerator`1<Pathfinding.Ionic.Zip.ZipEntry>
struct IEnumerator_1_t1979049130;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip495942682.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi3277276783.h"
#include "mscorlib_System_Exception1967233988.h"
#include "mscorlib_System_IO_TextWriter1689927879.h"
#include "mscorlib_System_Text_Encoding180559927.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi1967254086.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zli211972692.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl1823839577.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip519486448.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi3233959165.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi2418825471.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi3352950567.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi3134631622.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi1034803765.h"

// System.Void Pathfinding.Ionic.Zip.ZipFile::.ctor()
extern "C"  void ZipFile__ctor_m3538454692 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::.cctor()
extern "C"  void ZipFile__cctor_m1835816841 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::add_ReadProgress(System.EventHandler`1<Pathfinding.Ionic.Zip.ReadProgressEventArgs>)
extern "C"  void ZipFile_add_ReadProgress_m915469272 (ZipFile_t1967254086 * __this, EventHandler_1_t1313894632 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::remove_ReadProgress(System.EventHandler`1<Pathfinding.Ionic.Zip.ReadProgressEventArgs>)
extern "C"  void ZipFile_remove_ReadProgress_m4284409975 (ZipFile_t1967254086 * __this, EventHandler_1_t1313894632 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Pathfinding.Ionic.Zip.ZipFile::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * ZipFile_System_Collections_IEnumerable_GetEnumerator_m2995471555 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipFile::AddEntry(System.String,System.IO.Stream)
extern "C"  ZipEntry_t495942682 * ZipFile_AddEntry_m2698807529 (ZipFile_t1967254086 * __this, String_t* ___entryName0, Stream_t219029575 * ___stream1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipFile::_InternalAddEntry(Pathfinding.Ionic.Zip.ZipEntry)
extern "C"  ZipEntry_t495942682 * ZipFile__InternalAddEntry_m406362782 (ZipFile_t1967254086 * __this, ZipEntry_t495942682 * ___ze0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipFile::AddEntry(System.String,System.Byte[])
extern "C"  ZipEntry_t495942682 * ZipFile_AddEntry_m3799199415 (ZipFile_t1967254086 * __this, String_t* ___entryName0, ByteU5BU5D_t58506160* ___byteContent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::InternalAddEntry(System.String,Pathfinding.Ionic.Zip.ZipEntry)
extern "C"  void ZipFile_InternalAddEntry_m1382002206 (ZipFile_t1967254086 * __this, String_t* ___name0, ZipEntry_t495942682 * ___entry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipFile::get_ArchiveNameForEvent()
extern "C"  String_t* ZipFile_get_ArchiveNameForEvent_m1914061082 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipFile::OnSaveBlock(Pathfinding.Ionic.Zip.ZipEntry,System.Int64,System.Int64)
extern "C"  bool ZipFile_OnSaveBlock_m4038477101 (ZipFile_t1967254086 * __this, ZipEntry_t495942682 * ___entry0, int64_t ___bytesXferred1, int64_t ___totalBytesToXfer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::OnSaveEntry(System.Int32,Pathfinding.Ionic.Zip.ZipEntry,System.Boolean)
extern "C"  void ZipFile_OnSaveEntry_m3999652372 (ZipFile_t1967254086 * __this, int32_t ___current0, ZipEntry_t495942682 * ___entry1, bool ___before2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::OnSaveEvent(Pathfinding.Ionic.Zip.ZipProgressEventType)
extern "C"  void ZipFile_OnSaveEvent_m3706867671 (ZipFile_t1967254086 * __this, int32_t ___eventFlavor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::OnSaveStarted()
extern "C"  void ZipFile_OnSaveStarted_m2744737895 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::OnSaveCompleted()
extern "C"  void ZipFile_OnSaveCompleted_m2353501809 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::OnReadStarted()
extern "C"  void ZipFile_OnReadStarted_m2832258158 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::OnReadCompleted()
extern "C"  void ZipFile_OnReadCompleted_m561128632 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::OnReadBytes(Pathfinding.Ionic.Zip.ZipEntry)
extern "C"  void ZipFile_OnReadBytes_m3373890276 (ZipFile_t1967254086 * __this, ZipEntry_t495942682 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::OnReadEntry(System.Boolean,Pathfinding.Ionic.Zip.ZipEntry)
extern "C"  void ZipFile_OnReadEntry_m1946950908 (ZipFile_t1967254086 * __this, bool ___before0, ZipEntry_t495942682 * ___entry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipFile::get_LengthOfReadStream()
extern "C"  int64_t ZipFile_get_LengthOfReadStream_m596197427 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipFile::OnExtractBlock(Pathfinding.Ionic.Zip.ZipEntry,System.Int64,System.Int64)
extern "C"  bool ZipFile_OnExtractBlock_m4018469769 (ZipFile_t1967254086 * __this, ZipEntry_t495942682 * ___entry0, int64_t ___bytesWritten1, int64_t ___totalBytesToWrite2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipFile::OnSingleEntryExtract(Pathfinding.Ionic.Zip.ZipEntry,System.String,System.Boolean)
extern "C"  bool ZipFile_OnSingleEntryExtract_m31752941 (ZipFile_t1967254086 * __this, ZipEntry_t495942682 * ___entry0, String_t* ___path1, bool ___before2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipFile::OnExtractExisting(Pathfinding.Ionic.Zip.ZipEntry,System.String)
extern "C"  bool ZipFile_OnExtractExisting_m171215109 (ZipFile_t1967254086 * __this, ZipEntry_t495942682 * ___entry0, String_t* ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::AfterAddEntry(Pathfinding.Ionic.Zip.ZipEntry)
extern "C"  void ZipFile_AfterAddEntry_m3095739291 (ZipFile_t1967254086 * __this, ZipEntry_t495942682 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipFile::OnZipErrorSaving(Pathfinding.Ionic.Zip.ZipEntry,System.Exception)
extern "C"  bool ZipFile_OnZipErrorSaving_m2742431352 (ZipFile_t1967254086 * __this, ZipEntry_t495942682 * ___entry0, Exception_t1967233988 * ___exc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipFile Pathfinding.Ionic.Zip.ZipFile::Read(System.IO.Stream)
extern "C"  ZipFile_t1967254086 * ZipFile_Read_m1547569812 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___zipStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipFile Pathfinding.Ionic.Zip.ZipFile::Read(System.IO.Stream,System.IO.TextWriter,System.Text.Encoding,System.EventHandler`1<Pathfinding.Ionic.Zip.ReadProgressEventArgs>)
extern "C"  ZipFile_t1967254086 * ZipFile_Read_m2659281877 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___zipStream0, TextWriter_t1689927879 * ___statusMessageWriter1, Encoding_t180559927 * ___encoding2, EventHandler_1_t1313894632 * ___readProgress3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::ReadIntoInstance(Pathfinding.Ionic.Zip.ZipFile)
extern "C"  void ZipFile_ReadIntoInstance_m1782015661 (Il2CppObject * __this /* static, unused */, ZipFile_t1967254086 * ___zf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::Zip64SeekToCentralDirectory(Pathfinding.Ionic.Zip.ZipFile)
extern "C"  void ZipFile_Zip64SeekToCentralDirectory_m2952219212 (Il2CppObject * __this /* static, unused */, ZipFile_t1967254086 * ___zf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.Ionic.Zip.ZipFile::ReadFirstFourBytes(System.IO.Stream)
extern "C"  uint32_t ZipFile_ReadFirstFourBytes_m1339750343 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::ReadCentralDirectory(Pathfinding.Ionic.Zip.ZipFile)
extern "C"  void ZipFile_ReadCentralDirectory_m1125889898 (Il2CppObject * __this /* static, unused */, ZipFile_t1967254086 * ___zf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::ReadIntoInstance_Orig(Pathfinding.Ionic.Zip.ZipFile)
extern "C"  void ZipFile_ReadIntoInstance_Orig_m2570327041 (Il2CppObject * __this /* static, unused */, ZipFile_t1967254086 * ___zf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::ReadCentralDirectoryFooter(Pathfinding.Ionic.Zip.ZipFile)
extern "C"  void ZipFile_ReadCentralDirectoryFooter_m2002293775 (Il2CppObject * __this /* static, unused */, ZipFile_t1967254086 * ___zf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::ReadZipFileComment(Pathfinding.Ionic.Zip.ZipFile)
extern "C"  void ZipFile_ReadZipFileComment_m1329546752 (Il2CppObject * __this /* static, unused */, ZipFile_t1967254086 * ___zf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::DeleteFileWithRetry(System.String)
extern "C"  void ZipFile_DeleteFileWithRetry_m3461695845 (ZipFile_t1967254086 * __this, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::Save()
extern "C"  void ZipFile_Save_m3942569565 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::NotifyEntriesSaveComplete(System.Collections.Generic.ICollection`1<Pathfinding.Ionic.Zip.ZipEntry>)
extern "C"  void ZipFile_NotifyEntriesSaveComplete_m1683656776 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::RemoveTempFile()
extern "C"  void ZipFile_RemoveTempFile_m2986929268 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::CleanupAfterSaveOperation()
extern "C"  void ZipFile_CleanupAfterSaveOperation_m3798708340 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::Save(System.IO.Stream)
extern "C"  void ZipFile_Save_m891863796 (ZipFile_t1967254086 * __this, Stream_t219029575 * ___outputStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipFile::get_FullScan()
extern "C"  bool ZipFile_get_FullScan_m2138153127 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipFile::get_SortEntriesBeforeSaving()
extern "C"  bool ZipFile_get_SortEntriesBeforeSaving_m3062097810 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::set_AddDirectoryWillTraverseReparsePoints(System.Boolean)
extern "C"  void ZipFile_set_AddDirectoryWillTraverseReparsePoints_m467604495 (ZipFile_t1967254086 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipFile::get_BufferSize()
extern "C"  int32_t ZipFile_get_BufferSize_m279458242 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipFile::get_CodecBufferSize()
extern "C"  int32_t ZipFile_get_CodecBufferSize_m278108088 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipFile::get_FlattenFoldersOnExtract()
extern "C"  bool ZipFile_get_FlattenFoldersOnExtract_m3477001224 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zip.ZipFile::get_Strategy()
extern "C"  int32_t ZipFile_get_Strategy_m3216731217 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipFile::get_Name()
extern "C"  String_t* ZipFile_get_Name_m4044365681 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zip.ZipFile::get_CompressionLevel()
extern "C"  int32_t ZipFile_get_CompressionLevel_m4131405119 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::set_CompressionLevel(Pathfinding.Ionic.Zlib.CompressionLevel)
extern "C"  void ZipFile_set_CompressionLevel_m3308301772 (ZipFile_t1967254086 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.CompressionMethod Pathfinding.Ionic.Zip.ZipFile::get_CompressionMethod()
extern "C"  int32_t ZipFile_get_CompressionMethod_m1423290479 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipFile::get_Comment()
extern "C"  String_t* ZipFile_get_Comment_m599655131 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::set_Comment(System.String)
extern "C"  void ZipFile_set_Comment_m3569173886 (ZipFile_t1967254086 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipFile::get_Verbose()
extern "C"  bool ZipFile_get_Verbose_m1809073609 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipFile::get_CaseSensitiveRetrieval()
extern "C"  bool ZipFile_get_CaseSensitiveRetrieval_m3315278217 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.Zip64Option Pathfinding.Ionic.Zip.ZipFile::get_UseZip64WhenSaving()
extern "C"  int32_t ZipFile_get_UseZip64WhenSaving_m1082287667 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::set_UseZip64WhenSaving(Pathfinding.Ionic.Zip.Zip64Option)
extern "C"  void ZipFile_set_UseZip64WhenSaving_m338757720 (ZipFile_t1967254086 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipFile::get_AlternateEncoding()
extern "C"  Encoding_t180559927 * ZipFile_get_AlternateEncoding_m1812014792 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::set_AlternateEncoding(System.Text.Encoding)
extern "C"  void ZipFile_set_AlternateEncoding_m1729560989 (ZipFile_t1967254086 * __this, Encoding_t180559927 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipFile::get_AlternateEncodingUsage()
extern "C"  int32_t ZipFile_get_AlternateEncodingUsage_m3504720477 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::set_AlternateEncodingUsage(Pathfinding.Ionic.Zip.ZipOption)
extern "C"  void ZipFile_set_AlternateEncodingUsage_m3888422894 (ZipFile_t1967254086 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipFile::get_DefaultEncoding()
extern "C"  Encoding_t180559927 * ZipFile_get_DefaultEncoding_m3185569359 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter Pathfinding.Ionic.Zip.ZipFile::get_StatusMessageTextWriter()
extern "C"  TextWriter_t1689927879 * ZipFile_get_StatusMessageTextWriter_m3805983356 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipFile::get_TempFileFolder()
extern "C"  String_t* ZipFile_get_TempFileFolder_m4219347428 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ExtractExistingFileAction Pathfinding.Ionic.Zip.ZipFile::get_ExtractExistingFile()
extern "C"  int32_t ZipFile_get_ExtractExistingFile_m220801273 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipErrorAction Pathfinding.Ionic.Zip.ZipFile::get_ZipErrorAction()
extern "C"  int32_t ZipFile_get_ZipErrorAction_m2211125487 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.EncryptionAlgorithm Pathfinding.Ionic.Zip.ZipFile::get_Encryption()
extern "C"  int32_t ZipFile_get_Encryption_m955941602 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.SetCompressionCallback Pathfinding.Ionic.Zip.ZipFile::get_SetCompression()
extern "C"  SetCompressionCallback_t727837266 * ZipFile_get_SetCompression_m2612810466 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipFile::get_MaxOutputSegmentSize()
extern "C"  int32_t ZipFile_get_MaxOutputSegmentSize_m3365401328 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::set_ParallelDeflateThreshold(System.Int64)
extern "C"  void ZipFile_set_ParallelDeflateThreshold_m1214610134 (ZipFile_t1967254086 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipFile::get_ParallelDeflateThreshold()
extern "C"  int64_t ZipFile_get_ParallelDeflateThreshold_m1930324135 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipFile::get_ParallelDeflateMaxBufferPairs()
extern "C"  int32_t ZipFile_get_ParallelDeflateMaxBufferPairs_m1982022618 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipFile::ToString()
extern "C"  String_t* ZipFile_ToString_m3406090761 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::NotifyEntryChanged()
extern "C"  void ZipFile_NotifyEntryChanged_m2061994731 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.ZipFile::StreamForDiskNumber(System.UInt32)
extern "C"  Stream_t219029575 * ZipFile_StreamForDiskNumber_m3304019963 (ZipFile_t1967254086 * __this, uint32_t ___diskNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::Reset(System.Boolean)
extern "C"  void ZipFile_Reset_m2064516872 (ZipFile_t1967254086 * __this, bool ___whileSaving0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::_initEntriesDictionary()
extern "C"  void ZipFile__initEntriesDictionary_m2456634263 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::_InitInstance(System.String,System.IO.TextWriter)
extern "C"  void ZipFile__InitInstance_m624352513 (ZipFile_t1967254086 * __this, String_t* ___zipFileName0, TextWriter_t1689927879 * ___statusMessageWriter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipFile::get_Item(System.String)
extern "C"  ZipEntry_t495942682 * ZipFile_get_Item_m1678359369 (ZipFile_t1967254086 * __this, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<Pathfinding.Ionic.Zip.ZipEntry> Pathfinding.Ionic.Zip.ZipFile::get_Entries()
extern "C"  Il2CppObject* ZipFile_get_Entries_m3383187433 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<Pathfinding.Ionic.Zip.ZipEntry> Pathfinding.Ionic.Zip.ZipFile::get_EntriesSorted()
extern "C"  Il2CppObject* ZipFile_get_EntriesSorted_m3338093958 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::Dispose()
extern "C"  void ZipFile_Dispose_m3034110945 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::Dispose(System.Boolean)
extern "C"  void ZipFile_Dispose_m184333208 (ZipFile_t1967254086 * __this, bool ___disposeManagedResources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.ZipFile::get_ReadStream()
extern "C"  Stream_t219029575 * ZipFile_get_ReadStream_m256121937 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.ZipFile::get_WriteStream()
extern "C"  Stream_t219029575 * ZipFile_get_WriteStream_m1518929062 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<Pathfinding.Ionic.Zip.ZipEntry> Pathfinding.Ionic.Zip.ZipFile::GetEnumerator()
extern "C"  Il2CppObject* ZipFile_GetEnumerator_m707540374 (ZipFile_t1967254086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
