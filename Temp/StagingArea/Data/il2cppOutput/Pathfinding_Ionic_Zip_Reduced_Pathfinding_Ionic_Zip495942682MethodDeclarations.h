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

// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t495942682;
// Pathfinding.Ionic.Zip.ZipFile
struct ZipFile_t1967254086;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;
// System.IO.Stream
struct Stream_t219029575;
// Pathfinding.Ionic.Crc.CrcCalculatorStream
struct CrcCalculatorStream_t2652117568;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Text.Encoding
struct Encoding_t180559927;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// Pathfinding.Ionic.Zip.ZipContainer
struct ZipContainer_t674162857;
// Pathfinding.Ionic.Zip.CountingStream
struct CountingStream_t706717724;
// System.Exception
struct Exception_t1967233988;
// Pathfinding.Ionic.Zip.SetCompressionCallback
struct SetCompressionCallback_t727837266;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi1967254086.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_String968488902.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip495942682.h"
#include "mscorlib_System_Text_Encoding180559927.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip674162857.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip706717724.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Cr2652117568.h"
#include "mscorlib_System_Exception1967233988.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip519486448.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl1823839577.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi1034803765.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi3352950567.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi3134631622.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip727837266.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi2418825471.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi3683243925.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Pathfinding.Ionic.Zip.ZipEntry::.ctor()
extern "C"  void ZipEntry__ctor_m171874772 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::.cctor()
extern "C"  void ZipEntry__cctor_m551054425 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::get_AttributesIndicateDirectory()
extern "C"  bool ZipEntry_get_AttributesIndicateDirectory_m1059333048 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::ResetDirEntry()
extern "C"  void ZipEntry_ResetDirEntry_m4294139718 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipEntry::ReadDirEntry(Pathfinding.Ionic.Zip.ZipFile,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  ZipEntry_t495942682 * ZipEntry_ReadDirEntry_m134841083 (Il2CppObject * __this /* static, unused */, ZipFile_t1967254086 * ___zf0, Dictionary_2_t2474804324 * ___previouslySeen1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::IsNotValidZipDirEntrySig(System.Int32)
extern "C"  bool ZipEntry_IsNotValidZipDirEntrySig_m352526349 (Il2CppObject * __this /* static, unused */, int32_t ___signature0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::Extract(System.IO.Stream)
extern "C"  void ZipEntry_Extract_m2755331978 (ZipEntry_t495942682 * __this, Stream_t219029575 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Crc.CrcCalculatorStream Pathfinding.Ionic.Zip.ZipEntry::InternalOpenReader(System.String)
extern "C"  CrcCalculatorStream_t2652117568 * ZipEntry_InternalOpenReader_m2375152795 (ZipEntry_t495942682 * __this, String_t* ___password0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::OnExtractProgress(System.Int64,System.Int64)
extern "C"  void ZipEntry_OnExtractProgress_m2478625861 (ZipEntry_t495942682 * __this, int64_t ___bytesWritten0, int64_t ___totalBytesToWrite1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::OnBeforeExtract(System.String)
extern "C"  void ZipEntry_OnBeforeExtract_m3771579341 (ZipEntry_t495942682 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::OnAfterExtract(System.String)
extern "C"  void ZipEntry_OnAfterExtract_m3489480654 (ZipEntry_t495942682 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::OnExtractExisting(System.String)
extern "C"  void ZipEntry_OnExtractExisting_m1138708963 (ZipEntry_t495942682 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::ReallyDelete(System.String)
extern "C"  void ZipEntry_ReallyDelete_m476580636 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::WriteStatus(System.String,System.Object[])
extern "C"  void ZipEntry_WriteStatus_m3416123819 (ZipEntry_t495942682 * __this, String_t* ___format0, ObjectU5BU5D_t11523773* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::InternalExtract(System.String,System.IO.Stream,System.String)
extern "C"  void ZipEntry_InternalExtract_m3827996685 (ZipEntry_t495942682 * __this, String_t* ___baseDir0, Stream_t219029575 * ___outstream1, String_t* ___password2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::VerifyCrcAfterExtract(System.Int32)
extern "C"  void ZipEntry_VerifyCrcAfterExtract_m3614362755 (ZipEntry_t495942682 * __this, int32_t ___actualCrc320, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::CheckExtractExistingFile(System.String,System.String)
extern "C"  int32_t ZipEntry_CheckExtractExistingFile_m3430483878 (ZipEntry_t495942682 * __this, String_t* ___baseDir0, String_t* ___targetFileName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::_CheckRead(System.Int32)
extern "C"  void ZipEntry__CheckRead_m3522841024 (ZipEntry_t495942682 * __this, int32_t ___nbytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::ExtractOne(System.IO.Stream)
extern "C"  int32_t ZipEntry_ExtractOne_m3269722164 (ZipEntry_t495942682 * __this, Stream_t219029575 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::GetExtractDecompressor(System.IO.Stream)
extern "C"  Stream_t219029575 * ZipEntry_GetExtractDecompressor_m3333226054 (ZipEntry_t495942682 * __this, Stream_t219029575 * ___input20, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::GetExtractDecryptor(System.IO.Stream)
extern "C"  Stream_t219029575 * ZipEntry_GetExtractDecryptor_m1138386080 (ZipEntry_t495942682 * __this, Stream_t219029575 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::_SetTimes(System.String,System.Boolean)
extern "C"  void ZipEntry__SetTimes_m3669552656 (ZipEntry_t495942682 * __this, String_t* ___fileOrDirectory0, bool ___isFile1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipEntry::get_UnsupportedAlgorithm()
extern "C"  String_t* ZipEntry_get_UnsupportedAlgorithm_m3251345750 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipEntry::get_UnsupportedCompressionMethod()
extern "C"  String_t* ZipEntry_get_UnsupportedCompressionMethod_m1443648206 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::ValidateEncryption()
extern "C"  void ZipEntry_ValidateEncryption_m3099603369 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::ValidateCompression()
extern "C"  void ZipEntry_ValidateCompression_m3382241186 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::SetupCryptoForExtract(System.String)
extern "C"  void ZipEntry_SetupCryptoForExtract_m750158042 (ZipEntry_t495942682 * __this, String_t* ___password0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::ValidateOutput(System.String,System.IO.Stream,System.String&)
extern "C"  bool ZipEntry_ValidateOutput_m1620590304 (ZipEntry_t495942682 * __this, String_t* ___basedir0, Stream_t219029575 * ___outstream1, String_t** ___outFileName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::ReadHeader(Pathfinding.Ionic.Zip.ZipEntry,System.Text.Encoding)
extern "C"  bool ZipEntry_ReadHeader_m12055236 (Il2CppObject * __this /* static, unused */, ZipEntry_t495942682 * ___ze0, Encoding_t180559927 * ___defaultEncoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::ReadWeakEncryptionHeader(System.IO.Stream,System.Byte[])
extern "C"  int32_t ZipEntry_ReadWeakEncryptionHeader_m2536499728 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___s0, ByteU5BU5D_t58506160* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::IsNotValidSig(System.Int32)
extern "C"  bool ZipEntry_IsNotValidSig_m158214195 (Il2CppObject * __this /* static, unused */, int32_t ___signature0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipEntry::ReadEntry(Pathfinding.Ionic.Zip.ZipContainer,System.Boolean)
extern "C"  ZipEntry_t495942682 * ZipEntry_ReadEntry_m1046869205 (Il2CppObject * __this /* static, unused */, ZipContainer_t674162857 * ___zc0, bool ___first1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::HandlePK00Prefix(System.IO.Stream)
extern "C"  void ZipEntry_HandlePK00Prefix_m313914780 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::HandleUnexpectedDataDescriptor(Pathfinding.Ionic.Zip.ZipEntry)
extern "C"  void ZipEntry_HandleUnexpectedDataDescriptor_m2961742830 (Il2CppObject * __this /* static, unused */, ZipEntry_t495942682 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::ProcessExtraField(System.IO.Stream,System.Int16)
extern "C"  int32_t ZipEntry_ProcessExtraField_m4053255095 (ZipEntry_t495942682 * __this, Stream_t219029575 * ___s0, int16_t ___extraFieldLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::ProcessExtraFieldPkwareStrongEncryption(System.Byte[],System.Int32)
extern "C"  int32_t ZipEntry_ProcessExtraFieldPkwareStrongEncryption_m485097955 (ZipEntry_t495942682 * __this, ByteU5BU5D_t58506160* ___Buffer0, int32_t ___j1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::ProcessExtraFieldZip64(System.Byte[],System.Int32,System.Int16,System.Int64)
extern "C"  int32_t ZipEntry_ProcessExtraFieldZip64_m3062013587 (ZipEntry_t495942682 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___j1, int16_t ___dataSize2, int64_t ___posn3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::ProcessExtraFieldInfoZipTimes(System.Byte[],System.Int32,System.Int16,System.Int64)
extern "C"  int32_t ZipEntry_ProcessExtraFieldInfoZipTimes_m227836139 (ZipEntry_t495942682 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___j1, int16_t ___dataSize2, int64_t ___posn3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::ProcessExtraFieldUnixTimes(System.Byte[],System.Int32,System.Int16,System.Int64)
extern "C"  int32_t ZipEntry_ProcessExtraFieldUnixTimes_m1834681170 (ZipEntry_t495942682 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___j1, int16_t ___dataSize2, int64_t ___posn3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::ProcessExtraFieldWindowsTimes(System.Byte[],System.Int32,System.Int16,System.Int64)
extern "C"  int32_t ZipEntry_ProcessExtraFieldWindowsTimes_m1088904187 (ZipEntry_t495942682 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___j1, int16_t ___dataSize2, int64_t ___posn3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::WriteCentralDirectoryEntry(System.IO.Stream)
extern "C"  void ZipEntry_WriteCentralDirectoryEntry_m1705259458 (ZipEntry_t495942682 * __this, Stream_t219029575 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::ConstructExtraField(System.Boolean)
extern "C"  ByteU5BU5D_t58506160* ZipEntry_ConstructExtraField_m4088810688 (ZipEntry_t495942682 * __this, bool ___forCentralDirectory0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipEntry::NormalizeFileName()
extern "C"  String_t* ZipEntry_NormalizeFileName_m3962764931 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::GetEncodedFileNameBytes()
extern "C"  ByteU5BU5D_t58506160* ZipEntry_GetEncodedFileNameBytes_m2709896020 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::WantReadAgain()
extern "C"  bool ZipEntry_WantReadAgain_m3102476926 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::MaybeUnsetCompressionMethodForWriting(System.Int32)
extern "C"  void ZipEntry_MaybeUnsetCompressionMethodForWriting_m3813425724 (ZipEntry_t495942682 * __this, int32_t ___cycle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::WriteHeader(System.IO.Stream,System.Int32)
extern "C"  void ZipEntry_WriteHeader_m3445282274 (ZipEntry_t495942682 * __this, Stream_t219029575 * ___s0, int32_t ___cycle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::FigureCrc32()
extern "C"  int32_t ZipEntry_FigureCrc32_m936631577 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::PrepSourceStream()
extern "C"  void ZipEntry_PrepSourceStream_m245933752 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::CopyMetaData(Pathfinding.Ionic.Zip.ZipEntry)
extern "C"  void ZipEntry_CopyMetaData_m3827956704 (ZipEntry_t495942682 * __this, ZipEntry_t495942682 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::OnWriteBlock(System.Int64,System.Int64)
extern "C"  void ZipEntry_OnWriteBlock_m1495641481 (ZipEntry_t495942682 * __this, int64_t ___bytesXferred0, int64_t ___totalBytesToXfer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::_WriteEntryData(System.IO.Stream)
extern "C"  void ZipEntry__WriteEntryData_m3170933189 (ZipEntry_t495942682 * __this, Stream_t219029575 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::SetInputAndFigureFileLength(System.IO.Stream&)
extern "C"  int64_t ZipEntry_SetInputAndFigureFileLength_m2710913271 (ZipEntry_t495942682 * __this, Stream_t219029575 ** ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::FinishOutputStream(System.IO.Stream,Pathfinding.Ionic.Zip.CountingStream,System.IO.Stream,System.IO.Stream,Pathfinding.Ionic.Crc.CrcCalculatorStream)
extern "C"  void ZipEntry_FinishOutputStream_m1792923291 (ZipEntry_t495942682 * __this, Stream_t219029575 * ___s0, CountingStream_t706717724 * ___entryCounter1, Stream_t219029575 * ___encryptor2, Stream_t219029575 * ___compressor3, CrcCalculatorStream_t2652117568 * ___output4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::PostProcessOutput(System.IO.Stream)
extern "C"  void ZipEntry_PostProcessOutput_m1091169177 (ZipEntry_t495942682 * __this, Stream_t219029575 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::SetZip64Flags()
extern "C"  void ZipEntry_SetZip64Flags_m146551196 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::PrepOutputStream(System.IO.Stream,System.Int64,Pathfinding.Ionic.Zip.CountingStream&,System.IO.Stream&,System.IO.Stream&,Pathfinding.Ionic.Crc.CrcCalculatorStream&)
extern "C"  void ZipEntry_PrepOutputStream_m4194991337 (ZipEntry_t495942682 * __this, Stream_t219029575 * ___s0, int64_t ___streamLength1, CountingStream_t706717724 ** ___outputCounter2, Stream_t219029575 ** ___encryptor3, Stream_t219029575 ** ___compressor4, CrcCalculatorStream_t2652117568 ** ___output5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::MaybeApplyCompression(System.IO.Stream,System.Int64)
extern "C"  Stream_t219029575 * ZipEntry_MaybeApplyCompression_m537883549 (ZipEntry_t495942682 * __this, Stream_t219029575 * ___s0, int64_t ___streamLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::MaybeApplyEncryption(System.IO.Stream)
extern "C"  Stream_t219029575 * ZipEntry_MaybeApplyEncryption_m708547486 (ZipEntry_t495942682 * __this, Stream_t219029575 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::OnZipErrorWhileSaving(System.Exception)
extern "C"  void ZipEntry_OnZipErrorWhileSaving_m750851495 (ZipEntry_t495942682 * __this, Exception_t1967233988 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::Write(System.IO.Stream)
extern "C"  void ZipEntry_Write_m657448872 (ZipEntry_t495942682 * __this, Stream_t219029575 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::StoreRelativeOffset()
extern "C"  void ZipEntry_StoreRelativeOffset_m1863450354 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::NotifySaveComplete()
extern "C"  void ZipEntry_NotifySaveComplete_m1110726319 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::WriteSecurityMetadata(System.IO.Stream)
extern "C"  void ZipEntry_WriteSecurityMetadata_m3570101399 (ZipEntry_t495942682 * __this, Stream_t219029575 * ___outstream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::CopyThroughOneEntry(System.IO.Stream)
extern "C"  void ZipEntry_CopyThroughOneEntry_m4066946085 (ZipEntry_t495942682 * __this, Stream_t219029575 * ___outStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::CopyThroughWithRecompute(System.IO.Stream)
extern "C"  void ZipEntry_CopyThroughWithRecompute_m1354073941 (ZipEntry_t495942682 * __this, Stream_t219029575 * ___outstream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::CopyThroughWithNoChange(System.IO.Stream)
extern "C"  void ZipEntry_CopyThroughWithNoChange_m4266652912 (ZipEntry_t495942682 * __this, Stream_t219029575 * ___outstream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::get_LastModified()
extern "C"  DateTime_t339033936  ZipEntry_get_LastModified_m3980455249 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_LastModified(System.DateTime)
extern "C"  void ZipEntry_set_LastModified_m4133223692 (ZipEntry_t495942682 * __this, DateTime_t339033936  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::get_BufferSize()
extern "C"  int32_t ZipEntry_get_BufferSize_m3178598818 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_ModifiedTime(System.DateTime)
extern "C"  void ZipEntry_set_ModifiedTime_m3563751477 (ZipEntry_t495942682 * __this, DateTime_t339033936  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_AccessedTime(System.DateTime)
extern "C"  void ZipEntry_set_AccessedTime_m3903625787 (ZipEntry_t495942682 * __this, DateTime_t339033936  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_CreationTime(System.DateTime)
extern "C"  void ZipEntry_set_CreationTime_m2517804511 (ZipEntry_t495942682 * __this, DateTime_t339033936  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::SetEntryTimes(System.DateTime,System.DateTime,System.DateTime)
extern "C"  void ZipEntry_SetEntryTimes_m2011742900 (ZipEntry_t495942682 * __this, DateTime_t339033936  ___created0, DateTime_t339033936  ___accessed1, DateTime_t339033936  ___modified2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_EmitTimesInWindowsFormatWhenSaving(System.Boolean)
extern "C"  void ZipEntry_set_EmitTimesInWindowsFormatWhenSaving_m819718554 (ZipEntry_t495942682 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_EmitTimesInUnixFormatWhenSaving(System.Boolean)
extern "C"  void ZipEntry_set_EmitTimesInUnixFormatWhenSaving_m197093623 (ZipEntry_t495942682 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipEntry::get_LocalFileName()
extern "C"  String_t* ZipEntry_get_LocalFileName_m2699856504 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipEntry::get_FileName()
extern "C"  String_t* ZipEntry_get_FileName_m3241683715 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::get_VersionNeeded()
extern "C"  int16_t ZipEntry_get_VersionNeeded_m3766058164 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipEntry::get_Comment()
extern "C"  String_t* ZipEntry_get_Comment_m911927973 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Pathfinding.Ionic.Zip.ZipEntry::get_OutputUsedZip64()
extern "C"  Nullable_1_t3097043249  ZipEntry_get_OutputUsedZip64_m1504941505 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.CompressionMethod Pathfinding.Ionic.Zip.ZipEntry::get_CompressionMethod()
extern "C"  int32_t ZipEntry_get_CompressionMethod_m2338072993 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_CompressionMethod(Pathfinding.Ionic.Zip.CompressionMethod)
extern "C"  void ZipEntry_set_CompressionMethod_m726045906 (ZipEntry_t495942682 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zip.ZipEntry::get_CompressionLevel()
extern "C"  int32_t ZipEntry_get_CompressionLevel_m2835809887 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_CompressionLevel(Pathfinding.Ionic.Zlib.CompressionLevel)
extern "C"  void ZipEntry_set_CompressionLevel_m3112172284 (ZipEntry_t495942682 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::get_CompressedSize()
extern "C"  int64_t ZipEntry_get_CompressedSize_m2936220964 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::get_UncompressedSize()
extern "C"  int64_t ZipEntry_get_UncompressedSize_m205360509 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::get_IsDirectory()
extern "C"  bool ZipEntry_get_IsDirectory_m1369967486 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.EncryptionAlgorithm Pathfinding.Ionic.Zip.ZipEntry::get_Encryption()
extern "C"  int32_t ZipEntry_get_Encryption_m3314720134 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_Encryption(Pathfinding.Ionic.Zip.EncryptionAlgorithm)
extern "C"  void ZipEntry_set_Encryption_m1226510777 (ZipEntry_t495942682 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_Password(System.String)
extern "C"  void ZipEntry_set_Password_m3312755258 (ZipEntry_t495942682 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ExtractExistingFileAction Pathfinding.Ionic.Zip.ZipEntry::get_ExtractExistingFile()
extern "C"  int32_t ZipEntry_get_ExtractExistingFile_m1388419961 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_ExtractExistingFile(Pathfinding.Ionic.Zip.ExtractExistingFileAction)
extern "C"  void ZipEntry_set_ExtractExistingFile_m2520842426 (ZipEntry_t495942682 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipErrorAction Pathfinding.Ionic.Zip.ZipEntry::get_ZipErrorAction()
extern "C"  int32_t ZipEntry_get_ZipErrorAction_m2429996749 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_ZipErrorAction(Pathfinding.Ionic.Zip.ZipErrorAction)
extern "C"  void ZipEntry_set_ZipErrorAction_m3173995786 (ZipEntry_t495942682 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::get_IncludedInMostRecentSave()
extern "C"  bool ZipEntry_get_IncludedInMostRecentSave_m173370659 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.SetCompressionCallback Pathfinding.Ionic.Zip.ZipEntry::get_SetCompression()
extern "C"  SetCompressionCallback_t727837266 * ZipEntry_get_SetCompression_m3182706984 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_SetCompression(Pathfinding.Ionic.Zip.SetCompressionCallback)
extern "C"  void ZipEntry_set_SetCompression_m3180993509 (ZipEntry_t495942682 * __this, SetCompressionCallback_t727837266 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipEntry::get_AlternateEncoding()
extern "C"  Encoding_t180559927 * ZipEntry_get_AlternateEncoding_m3372263092 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_AlternateEncoding(System.Text.Encoding)
extern "C"  void ZipEntry_set_AlternateEncoding_m4293933773 (ZipEntry_t495942682 * __this, Encoding_t180559927 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipEntry::get_AlternateEncodingUsage()
extern "C"  int32_t ZipEntry_get_AlternateEncodingUsage_m172763949 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_AlternateEncodingUsage(Pathfinding.Ionic.Zip.ZipOption)
extern "C"  void ZipEntry_set_AlternateEncodingUsage_m2699393310 (ZipEntry_t495942682 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipEntry::CreateForStream(System.String,System.IO.Stream)
extern "C"  ZipEntry_t495942682 * ZipEntry_CreateForStream_m2113829175 (Il2CppObject * __this /* static, unused */, String_t* ___entryName0, Stream_t219029575 * ___s1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipEntry::Create(System.String,Pathfinding.Ionic.Zip.ZipEntrySource,System.Object,System.Object)
extern "C"  ZipEntry_t495942682 * ZipEntry_Create_m3967610176 (Il2CppObject * __this /* static, unused */, String_t* ___nameInArchive0, int32_t ___source1, Il2CppObject * ___arg12, Il2CppObject * ___arg23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::MarkAsDirectory()
extern "C"  void ZipEntry_MarkAsDirectory_m1527382912 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_IsText(System.Boolean)
extern "C"  void ZipEntry_set_IsText_m2575127323 (ZipEntry_t495942682 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipEntry::ToString()
extern "C"  String_t* ZipEntry_ToString_m260312703 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::get_ArchiveStream()
extern "C"  Stream_t219029575 * ZipEntry_get_ArchiveStream_m3783870813 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::SetFdpLoh()
extern "C"  void ZipEntry_SetFdpLoh_m2515336871 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::GetLengthOfCryptoHeaderBytes(Pathfinding.Ionic.Zip.EncryptionAlgorithm)
extern "C"  int32_t ZipEntry_GetLengthOfCryptoHeaderBytes_m1758276967 (Il2CppObject * __this /* static, unused */, int32_t ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::get_FileDataPosition()
extern "C"  int64_t ZipEntry_get_FileDataPosition_m764078353 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::get_LengthOfHeader()
extern "C"  int32_t ZipEntry_get_LengthOfHeader_m1574726475 (ZipEntry_t495942682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
