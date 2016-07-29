#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.TextWriter
struct TextWriter_t1689927879;
// System.IO.Stream
struct Stream_t219029575;
// System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry>
struct Dictionary_2_t2133640586;
// System.Collections.Generic.List`1<Pathfinding.Ionic.Zip.ZipEntry>
struct List_1_t1292901651;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Text.Encoding
struct Encoding_t180559927;
// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream
struct ParallelDeflateOutputStream_t3413079424;
// System.EventHandler`1<Pathfinding.Ionic.Zip.SaveProgressEventArgs>
struct EventHandler_1_t1609429985;
// System.EventHandler`1<Pathfinding.Ionic.Zip.ReadProgressEventArgs>
struct EventHandler_1_t1313894632;
// System.EventHandler`1<Pathfinding.Ionic.Zip.ExtractProgressEventArgs>
struct EventHandler_1_t3483276701;
// System.EventHandler`1<Pathfinding.Ionic.Zip.AddProgressEventArgs>
struct EventHandler_1_t462343549;
// System.EventHandler`1<Pathfinding.Ionic.Zip.ZipErrorEventArgs>
struct EventHandler_1_t3674114020;
// Pathfinding.Ionic.Zip.SetCompressionCallback
struct SetCompressionCallback_t727837266;

#include "mscorlib_System_Object837106420.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi3134631622.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zli211972692.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip519486448.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi1034803765.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi2418825471.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi3233959165.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl1823839577.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi3352950567.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ZipFile
struct  ZipFile_t1967254086  : public Il2CppObject
{
public:
	// System.Int64 Pathfinding.Ionic.Zip.ZipFile::_lengthOfReadStream
	int64_t ____lengthOfReadStream_0;
	// System.IO.TextWriter Pathfinding.Ionic.Zip.ZipFile::_StatusMessageTextWriter
	TextWriter_t1689927879 * ____StatusMessageTextWriter_1;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_CaseSensitiveRetrieval
	bool ____CaseSensitiveRetrieval_2;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipFile::_readstream
	Stream_t219029575 * ____readstream_3;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipFile::_writestream
	Stream_t219029575 * ____writestream_4;
	// System.UInt16 Pathfinding.Ionic.Zip.ZipFile::_versionMadeBy
	uint16_t ____versionMadeBy_5;
	// System.UInt16 Pathfinding.Ionic.Zip.ZipFile::_versionNeededToExtract
	uint16_t ____versionNeededToExtract_6;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipFile::_diskNumberWithCd
	uint32_t ____diskNumberWithCd_7;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::_maxOutputSegmentSize
	int32_t ____maxOutputSegmentSize_8;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipFile::_numberOfSegmentsForMostRecentSave
	uint32_t ____numberOfSegmentsForMostRecentSave_9;
	// Pathfinding.Ionic.Zip.ZipErrorAction Pathfinding.Ionic.Zip.ZipFile::_zipErrorAction
	int32_t ____zipErrorAction_10;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_disposed
	bool ____disposed_11;
	// System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry> Pathfinding.Ionic.Zip.ZipFile::_entries
	Dictionary_2_t2133640586 * ____entries_12;
	// System.Collections.Generic.List`1<Pathfinding.Ionic.Zip.ZipEntry> Pathfinding.Ionic.Zip.ZipFile::_zipEntriesAsList
	List_1_t1292901651 * ____zipEntriesAsList_13;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_name
	String_t* ____name_14;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_readName
	String_t* ____readName_15;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_Comment
	String_t* ____Comment_16;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_Password
	String_t* ____Password_17;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_emitNtfsTimes
	bool ____emitNtfsTimes_18;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_emitUnixTimes
	bool ____emitUnixTimes_19;
	// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zip.ZipFile::_Strategy
	int32_t ____Strategy_20;
	// Pathfinding.Ionic.Zip.CompressionMethod Pathfinding.Ionic.Zip.ZipFile::_compressionMethod
	int32_t ____compressionMethod_21;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_fileAlreadyExists
	bool ____fileAlreadyExists_22;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_temporaryFileName
	String_t* ____temporaryFileName_23;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_contentsChanged
	bool ____contentsChanged_24;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_hasBeenSaved
	bool ____hasBeenSaved_25;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_TempFileFolder
	String_t* ____TempFileFolder_26;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_ReadStreamIsOurs
	bool ____ReadStreamIsOurs_27;
	// System.Object Pathfinding.Ionic.Zip.ZipFile::LOCK
	Il2CppObject * ___LOCK_28;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_saveOperationCanceled
	bool ____saveOperationCanceled_29;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_extractOperationCanceled
	bool ____extractOperationCanceled_30;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_addOperationCanceled
	bool ____addOperationCanceled_31;
	// Pathfinding.Ionic.Zip.EncryptionAlgorithm Pathfinding.Ionic.Zip.ZipFile::_Encryption
	int32_t ____Encryption_32;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_JustSaved
	bool ____JustSaved_33;
	// System.Int64 Pathfinding.Ionic.Zip.ZipFile::_locEndOfCDS
	int64_t ____locEndOfCDS_34;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipFile::_OffsetOfCentralDirectory
	uint32_t ____OffsetOfCentralDirectory_35;
	// System.Int64 Pathfinding.Ionic.Zip.ZipFile::_OffsetOfCentralDirectory64
	int64_t ____OffsetOfCentralDirectory64_36;
	// System.Nullable`1<System.Boolean> Pathfinding.Ionic.Zip.ZipFile::_OutputUsesZip64
	Nullable_1_t3097043249  ____OutputUsesZip64_37;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_inExtractAll
	bool ____inExtractAll_38;
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipFile::_alternateEncoding
	Encoding_t180559927 * ____alternateEncoding_40;
	// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipFile::_alternateEncodingUsage
	int32_t ____alternateEncodingUsage_41;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::_BufferSize
	int32_t ____BufferSize_42;
	// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream Pathfinding.Ionic.Zip.ZipFile::ParallelDeflater
	ParallelDeflateOutputStream_t3413079424 * ___ParallelDeflater_43;
	// System.Int64 Pathfinding.Ionic.Zip.ZipFile::_ParallelDeflateThreshold
	int64_t ____ParallelDeflateThreshold_44;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::_maxBufferPairs
	int32_t ____maxBufferPairs_45;
	// Pathfinding.Ionic.Zip.Zip64Option Pathfinding.Ionic.Zip.ZipFile::_zip64
	int32_t ____zip64_46;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_SavingSfx
	bool ____SavingSfx_47;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.SaveProgressEventArgs> Pathfinding.Ionic.Zip.ZipFile::SaveProgress
	EventHandler_1_t1609429985 * ___SaveProgress_49;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.ReadProgressEventArgs> Pathfinding.Ionic.Zip.ZipFile::ReadProgress
	EventHandler_1_t1313894632 * ___ReadProgress_50;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.ExtractProgressEventArgs> Pathfinding.Ionic.Zip.ZipFile::ExtractProgress
	EventHandler_1_t3483276701 * ___ExtractProgress_51;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.AddProgressEventArgs> Pathfinding.Ionic.Zip.ZipFile::AddProgress
	EventHandler_1_t462343549 * ___AddProgress_52;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.ZipErrorEventArgs> Pathfinding.Ionic.Zip.ZipFile::ZipError
	EventHandler_1_t3674114020 * ___ZipError_53;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::<FullScan>k__BackingField
	bool ___U3CFullScanU3Ek__BackingField_54;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::<SortEntriesBeforeSaving>k__BackingField
	bool ___U3CSortEntriesBeforeSavingU3Ek__BackingField_55;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::<AddDirectoryWillTraverseReparsePoints>k__BackingField
	bool ___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::<CodecBufferSize>k__BackingField
	int32_t ___U3CCodecBufferSizeU3Ek__BackingField_57;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::<FlattenFoldersOnExtract>k__BackingField
	bool ___U3CFlattenFoldersOnExtractU3Ek__BackingField_58;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zip.ZipFile::<CompressionLevel>k__BackingField
	int32_t ___U3CCompressionLevelU3Ek__BackingField_59;
	// Pathfinding.Ionic.Zip.ExtractExistingFileAction Pathfinding.Ionic.Zip.ZipFile::<ExtractExistingFile>k__BackingField
	int32_t ___U3CExtractExistingFileU3Ek__BackingField_60;
	// Pathfinding.Ionic.Zip.SetCompressionCallback Pathfinding.Ionic.Zip.ZipFile::<SetCompression>k__BackingField
	SetCompressionCallback_t727837266 * ___U3CSetCompressionU3Ek__BackingField_61;

public:
	inline static int32_t get_offset_of__lengthOfReadStream_0() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____lengthOfReadStream_0)); }
	inline int64_t get__lengthOfReadStream_0() const { return ____lengthOfReadStream_0; }
	inline int64_t* get_address_of__lengthOfReadStream_0() { return &____lengthOfReadStream_0; }
	inline void set__lengthOfReadStream_0(int64_t value)
	{
		____lengthOfReadStream_0 = value;
	}

	inline static int32_t get_offset_of__StatusMessageTextWriter_1() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____StatusMessageTextWriter_1)); }
	inline TextWriter_t1689927879 * get__StatusMessageTextWriter_1() const { return ____StatusMessageTextWriter_1; }
	inline TextWriter_t1689927879 ** get_address_of__StatusMessageTextWriter_1() { return &____StatusMessageTextWriter_1; }
	inline void set__StatusMessageTextWriter_1(TextWriter_t1689927879 * value)
	{
		____StatusMessageTextWriter_1 = value;
		Il2CppCodeGenWriteBarrier(&____StatusMessageTextWriter_1, value);
	}

	inline static int32_t get_offset_of__CaseSensitiveRetrieval_2() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____CaseSensitiveRetrieval_2)); }
	inline bool get__CaseSensitiveRetrieval_2() const { return ____CaseSensitiveRetrieval_2; }
	inline bool* get_address_of__CaseSensitiveRetrieval_2() { return &____CaseSensitiveRetrieval_2; }
	inline void set__CaseSensitiveRetrieval_2(bool value)
	{
		____CaseSensitiveRetrieval_2 = value;
	}

	inline static int32_t get_offset_of__readstream_3() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____readstream_3)); }
	inline Stream_t219029575 * get__readstream_3() const { return ____readstream_3; }
	inline Stream_t219029575 ** get_address_of__readstream_3() { return &____readstream_3; }
	inline void set__readstream_3(Stream_t219029575 * value)
	{
		____readstream_3 = value;
		Il2CppCodeGenWriteBarrier(&____readstream_3, value);
	}

	inline static int32_t get_offset_of__writestream_4() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____writestream_4)); }
	inline Stream_t219029575 * get__writestream_4() const { return ____writestream_4; }
	inline Stream_t219029575 ** get_address_of__writestream_4() { return &____writestream_4; }
	inline void set__writestream_4(Stream_t219029575 * value)
	{
		____writestream_4 = value;
		Il2CppCodeGenWriteBarrier(&____writestream_4, value);
	}

	inline static int32_t get_offset_of__versionMadeBy_5() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____versionMadeBy_5)); }
	inline uint16_t get__versionMadeBy_5() const { return ____versionMadeBy_5; }
	inline uint16_t* get_address_of__versionMadeBy_5() { return &____versionMadeBy_5; }
	inline void set__versionMadeBy_5(uint16_t value)
	{
		____versionMadeBy_5 = value;
	}

	inline static int32_t get_offset_of__versionNeededToExtract_6() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____versionNeededToExtract_6)); }
	inline uint16_t get__versionNeededToExtract_6() const { return ____versionNeededToExtract_6; }
	inline uint16_t* get_address_of__versionNeededToExtract_6() { return &____versionNeededToExtract_6; }
	inline void set__versionNeededToExtract_6(uint16_t value)
	{
		____versionNeededToExtract_6 = value;
	}

	inline static int32_t get_offset_of__diskNumberWithCd_7() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____diskNumberWithCd_7)); }
	inline uint32_t get__diskNumberWithCd_7() const { return ____diskNumberWithCd_7; }
	inline uint32_t* get_address_of__diskNumberWithCd_7() { return &____diskNumberWithCd_7; }
	inline void set__diskNumberWithCd_7(uint32_t value)
	{
		____diskNumberWithCd_7 = value;
	}

	inline static int32_t get_offset_of__maxOutputSegmentSize_8() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____maxOutputSegmentSize_8)); }
	inline int32_t get__maxOutputSegmentSize_8() const { return ____maxOutputSegmentSize_8; }
	inline int32_t* get_address_of__maxOutputSegmentSize_8() { return &____maxOutputSegmentSize_8; }
	inline void set__maxOutputSegmentSize_8(int32_t value)
	{
		____maxOutputSegmentSize_8 = value;
	}

	inline static int32_t get_offset_of__numberOfSegmentsForMostRecentSave_9() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____numberOfSegmentsForMostRecentSave_9)); }
	inline uint32_t get__numberOfSegmentsForMostRecentSave_9() const { return ____numberOfSegmentsForMostRecentSave_9; }
	inline uint32_t* get_address_of__numberOfSegmentsForMostRecentSave_9() { return &____numberOfSegmentsForMostRecentSave_9; }
	inline void set__numberOfSegmentsForMostRecentSave_9(uint32_t value)
	{
		____numberOfSegmentsForMostRecentSave_9 = value;
	}

	inline static int32_t get_offset_of__zipErrorAction_10() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____zipErrorAction_10)); }
	inline int32_t get__zipErrorAction_10() const { return ____zipErrorAction_10; }
	inline int32_t* get_address_of__zipErrorAction_10() { return &____zipErrorAction_10; }
	inline void set__zipErrorAction_10(int32_t value)
	{
		____zipErrorAction_10 = value;
	}

	inline static int32_t get_offset_of__disposed_11() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____disposed_11)); }
	inline bool get__disposed_11() const { return ____disposed_11; }
	inline bool* get_address_of__disposed_11() { return &____disposed_11; }
	inline void set__disposed_11(bool value)
	{
		____disposed_11 = value;
	}

	inline static int32_t get_offset_of__entries_12() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____entries_12)); }
	inline Dictionary_2_t2133640586 * get__entries_12() const { return ____entries_12; }
	inline Dictionary_2_t2133640586 ** get_address_of__entries_12() { return &____entries_12; }
	inline void set__entries_12(Dictionary_2_t2133640586 * value)
	{
		____entries_12 = value;
		Il2CppCodeGenWriteBarrier(&____entries_12, value);
	}

	inline static int32_t get_offset_of__zipEntriesAsList_13() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____zipEntriesAsList_13)); }
	inline List_1_t1292901651 * get__zipEntriesAsList_13() const { return ____zipEntriesAsList_13; }
	inline List_1_t1292901651 ** get_address_of__zipEntriesAsList_13() { return &____zipEntriesAsList_13; }
	inline void set__zipEntriesAsList_13(List_1_t1292901651 * value)
	{
		____zipEntriesAsList_13 = value;
		Il2CppCodeGenWriteBarrier(&____zipEntriesAsList_13, value);
	}

	inline static int32_t get_offset_of__name_14() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____name_14)); }
	inline String_t* get__name_14() const { return ____name_14; }
	inline String_t** get_address_of__name_14() { return &____name_14; }
	inline void set__name_14(String_t* value)
	{
		____name_14 = value;
		Il2CppCodeGenWriteBarrier(&____name_14, value);
	}

	inline static int32_t get_offset_of__readName_15() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____readName_15)); }
	inline String_t* get__readName_15() const { return ____readName_15; }
	inline String_t** get_address_of__readName_15() { return &____readName_15; }
	inline void set__readName_15(String_t* value)
	{
		____readName_15 = value;
		Il2CppCodeGenWriteBarrier(&____readName_15, value);
	}

	inline static int32_t get_offset_of__Comment_16() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____Comment_16)); }
	inline String_t* get__Comment_16() const { return ____Comment_16; }
	inline String_t** get_address_of__Comment_16() { return &____Comment_16; }
	inline void set__Comment_16(String_t* value)
	{
		____Comment_16 = value;
		Il2CppCodeGenWriteBarrier(&____Comment_16, value);
	}

	inline static int32_t get_offset_of__Password_17() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____Password_17)); }
	inline String_t* get__Password_17() const { return ____Password_17; }
	inline String_t** get_address_of__Password_17() { return &____Password_17; }
	inline void set__Password_17(String_t* value)
	{
		____Password_17 = value;
		Il2CppCodeGenWriteBarrier(&____Password_17, value);
	}

	inline static int32_t get_offset_of__emitNtfsTimes_18() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____emitNtfsTimes_18)); }
	inline bool get__emitNtfsTimes_18() const { return ____emitNtfsTimes_18; }
	inline bool* get_address_of__emitNtfsTimes_18() { return &____emitNtfsTimes_18; }
	inline void set__emitNtfsTimes_18(bool value)
	{
		____emitNtfsTimes_18 = value;
	}

	inline static int32_t get_offset_of__emitUnixTimes_19() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____emitUnixTimes_19)); }
	inline bool get__emitUnixTimes_19() const { return ____emitUnixTimes_19; }
	inline bool* get_address_of__emitUnixTimes_19() { return &____emitUnixTimes_19; }
	inline void set__emitUnixTimes_19(bool value)
	{
		____emitUnixTimes_19 = value;
	}

	inline static int32_t get_offset_of__Strategy_20() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____Strategy_20)); }
	inline int32_t get__Strategy_20() const { return ____Strategy_20; }
	inline int32_t* get_address_of__Strategy_20() { return &____Strategy_20; }
	inline void set__Strategy_20(int32_t value)
	{
		____Strategy_20 = value;
	}

	inline static int32_t get_offset_of__compressionMethod_21() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____compressionMethod_21)); }
	inline int32_t get__compressionMethod_21() const { return ____compressionMethod_21; }
	inline int32_t* get_address_of__compressionMethod_21() { return &____compressionMethod_21; }
	inline void set__compressionMethod_21(int32_t value)
	{
		____compressionMethod_21 = value;
	}

	inline static int32_t get_offset_of__fileAlreadyExists_22() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____fileAlreadyExists_22)); }
	inline bool get__fileAlreadyExists_22() const { return ____fileAlreadyExists_22; }
	inline bool* get_address_of__fileAlreadyExists_22() { return &____fileAlreadyExists_22; }
	inline void set__fileAlreadyExists_22(bool value)
	{
		____fileAlreadyExists_22 = value;
	}

	inline static int32_t get_offset_of__temporaryFileName_23() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____temporaryFileName_23)); }
	inline String_t* get__temporaryFileName_23() const { return ____temporaryFileName_23; }
	inline String_t** get_address_of__temporaryFileName_23() { return &____temporaryFileName_23; }
	inline void set__temporaryFileName_23(String_t* value)
	{
		____temporaryFileName_23 = value;
		Il2CppCodeGenWriteBarrier(&____temporaryFileName_23, value);
	}

	inline static int32_t get_offset_of__contentsChanged_24() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____contentsChanged_24)); }
	inline bool get__contentsChanged_24() const { return ____contentsChanged_24; }
	inline bool* get_address_of__contentsChanged_24() { return &____contentsChanged_24; }
	inline void set__contentsChanged_24(bool value)
	{
		____contentsChanged_24 = value;
	}

	inline static int32_t get_offset_of__hasBeenSaved_25() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____hasBeenSaved_25)); }
	inline bool get__hasBeenSaved_25() const { return ____hasBeenSaved_25; }
	inline bool* get_address_of__hasBeenSaved_25() { return &____hasBeenSaved_25; }
	inline void set__hasBeenSaved_25(bool value)
	{
		____hasBeenSaved_25 = value;
	}

	inline static int32_t get_offset_of__TempFileFolder_26() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____TempFileFolder_26)); }
	inline String_t* get__TempFileFolder_26() const { return ____TempFileFolder_26; }
	inline String_t** get_address_of__TempFileFolder_26() { return &____TempFileFolder_26; }
	inline void set__TempFileFolder_26(String_t* value)
	{
		____TempFileFolder_26 = value;
		Il2CppCodeGenWriteBarrier(&____TempFileFolder_26, value);
	}

	inline static int32_t get_offset_of__ReadStreamIsOurs_27() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____ReadStreamIsOurs_27)); }
	inline bool get__ReadStreamIsOurs_27() const { return ____ReadStreamIsOurs_27; }
	inline bool* get_address_of__ReadStreamIsOurs_27() { return &____ReadStreamIsOurs_27; }
	inline void set__ReadStreamIsOurs_27(bool value)
	{
		____ReadStreamIsOurs_27 = value;
	}

	inline static int32_t get_offset_of_LOCK_28() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ___LOCK_28)); }
	inline Il2CppObject * get_LOCK_28() const { return ___LOCK_28; }
	inline Il2CppObject ** get_address_of_LOCK_28() { return &___LOCK_28; }
	inline void set_LOCK_28(Il2CppObject * value)
	{
		___LOCK_28 = value;
		Il2CppCodeGenWriteBarrier(&___LOCK_28, value);
	}

	inline static int32_t get_offset_of__saveOperationCanceled_29() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____saveOperationCanceled_29)); }
	inline bool get__saveOperationCanceled_29() const { return ____saveOperationCanceled_29; }
	inline bool* get_address_of__saveOperationCanceled_29() { return &____saveOperationCanceled_29; }
	inline void set__saveOperationCanceled_29(bool value)
	{
		____saveOperationCanceled_29 = value;
	}

	inline static int32_t get_offset_of__extractOperationCanceled_30() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____extractOperationCanceled_30)); }
	inline bool get__extractOperationCanceled_30() const { return ____extractOperationCanceled_30; }
	inline bool* get_address_of__extractOperationCanceled_30() { return &____extractOperationCanceled_30; }
	inline void set__extractOperationCanceled_30(bool value)
	{
		____extractOperationCanceled_30 = value;
	}

	inline static int32_t get_offset_of__addOperationCanceled_31() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____addOperationCanceled_31)); }
	inline bool get__addOperationCanceled_31() const { return ____addOperationCanceled_31; }
	inline bool* get_address_of__addOperationCanceled_31() { return &____addOperationCanceled_31; }
	inline void set__addOperationCanceled_31(bool value)
	{
		____addOperationCanceled_31 = value;
	}

	inline static int32_t get_offset_of__Encryption_32() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____Encryption_32)); }
	inline int32_t get__Encryption_32() const { return ____Encryption_32; }
	inline int32_t* get_address_of__Encryption_32() { return &____Encryption_32; }
	inline void set__Encryption_32(int32_t value)
	{
		____Encryption_32 = value;
	}

	inline static int32_t get_offset_of__JustSaved_33() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____JustSaved_33)); }
	inline bool get__JustSaved_33() const { return ____JustSaved_33; }
	inline bool* get_address_of__JustSaved_33() { return &____JustSaved_33; }
	inline void set__JustSaved_33(bool value)
	{
		____JustSaved_33 = value;
	}

	inline static int32_t get_offset_of__locEndOfCDS_34() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____locEndOfCDS_34)); }
	inline int64_t get__locEndOfCDS_34() const { return ____locEndOfCDS_34; }
	inline int64_t* get_address_of__locEndOfCDS_34() { return &____locEndOfCDS_34; }
	inline void set__locEndOfCDS_34(int64_t value)
	{
		____locEndOfCDS_34 = value;
	}

	inline static int32_t get_offset_of__OffsetOfCentralDirectory_35() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____OffsetOfCentralDirectory_35)); }
	inline uint32_t get__OffsetOfCentralDirectory_35() const { return ____OffsetOfCentralDirectory_35; }
	inline uint32_t* get_address_of__OffsetOfCentralDirectory_35() { return &____OffsetOfCentralDirectory_35; }
	inline void set__OffsetOfCentralDirectory_35(uint32_t value)
	{
		____OffsetOfCentralDirectory_35 = value;
	}

	inline static int32_t get_offset_of__OffsetOfCentralDirectory64_36() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____OffsetOfCentralDirectory64_36)); }
	inline int64_t get__OffsetOfCentralDirectory64_36() const { return ____OffsetOfCentralDirectory64_36; }
	inline int64_t* get_address_of__OffsetOfCentralDirectory64_36() { return &____OffsetOfCentralDirectory64_36; }
	inline void set__OffsetOfCentralDirectory64_36(int64_t value)
	{
		____OffsetOfCentralDirectory64_36 = value;
	}

	inline static int32_t get_offset_of__OutputUsesZip64_37() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____OutputUsesZip64_37)); }
	inline Nullable_1_t3097043249  get__OutputUsesZip64_37() const { return ____OutputUsesZip64_37; }
	inline Nullable_1_t3097043249 * get_address_of__OutputUsesZip64_37() { return &____OutputUsesZip64_37; }
	inline void set__OutputUsesZip64_37(Nullable_1_t3097043249  value)
	{
		____OutputUsesZip64_37 = value;
	}

	inline static int32_t get_offset_of__inExtractAll_38() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____inExtractAll_38)); }
	inline bool get__inExtractAll_38() const { return ____inExtractAll_38; }
	inline bool* get_address_of__inExtractAll_38() { return &____inExtractAll_38; }
	inline void set__inExtractAll_38(bool value)
	{
		____inExtractAll_38 = value;
	}

	inline static int32_t get_offset_of__alternateEncoding_40() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____alternateEncoding_40)); }
	inline Encoding_t180559927 * get__alternateEncoding_40() const { return ____alternateEncoding_40; }
	inline Encoding_t180559927 ** get_address_of__alternateEncoding_40() { return &____alternateEncoding_40; }
	inline void set__alternateEncoding_40(Encoding_t180559927 * value)
	{
		____alternateEncoding_40 = value;
		Il2CppCodeGenWriteBarrier(&____alternateEncoding_40, value);
	}

	inline static int32_t get_offset_of__alternateEncodingUsage_41() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____alternateEncodingUsage_41)); }
	inline int32_t get__alternateEncodingUsage_41() const { return ____alternateEncodingUsage_41; }
	inline int32_t* get_address_of__alternateEncodingUsage_41() { return &____alternateEncodingUsage_41; }
	inline void set__alternateEncodingUsage_41(int32_t value)
	{
		____alternateEncodingUsage_41 = value;
	}

	inline static int32_t get_offset_of__BufferSize_42() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____BufferSize_42)); }
	inline int32_t get__BufferSize_42() const { return ____BufferSize_42; }
	inline int32_t* get_address_of__BufferSize_42() { return &____BufferSize_42; }
	inline void set__BufferSize_42(int32_t value)
	{
		____BufferSize_42 = value;
	}

	inline static int32_t get_offset_of_ParallelDeflater_43() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ___ParallelDeflater_43)); }
	inline ParallelDeflateOutputStream_t3413079424 * get_ParallelDeflater_43() const { return ___ParallelDeflater_43; }
	inline ParallelDeflateOutputStream_t3413079424 ** get_address_of_ParallelDeflater_43() { return &___ParallelDeflater_43; }
	inline void set_ParallelDeflater_43(ParallelDeflateOutputStream_t3413079424 * value)
	{
		___ParallelDeflater_43 = value;
		Il2CppCodeGenWriteBarrier(&___ParallelDeflater_43, value);
	}

	inline static int32_t get_offset_of__ParallelDeflateThreshold_44() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____ParallelDeflateThreshold_44)); }
	inline int64_t get__ParallelDeflateThreshold_44() const { return ____ParallelDeflateThreshold_44; }
	inline int64_t* get_address_of__ParallelDeflateThreshold_44() { return &____ParallelDeflateThreshold_44; }
	inline void set__ParallelDeflateThreshold_44(int64_t value)
	{
		____ParallelDeflateThreshold_44 = value;
	}

	inline static int32_t get_offset_of__maxBufferPairs_45() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____maxBufferPairs_45)); }
	inline int32_t get__maxBufferPairs_45() const { return ____maxBufferPairs_45; }
	inline int32_t* get_address_of__maxBufferPairs_45() { return &____maxBufferPairs_45; }
	inline void set__maxBufferPairs_45(int32_t value)
	{
		____maxBufferPairs_45 = value;
	}

	inline static int32_t get_offset_of__zip64_46() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____zip64_46)); }
	inline int32_t get__zip64_46() const { return ____zip64_46; }
	inline int32_t* get_address_of__zip64_46() { return &____zip64_46; }
	inline void set__zip64_46(int32_t value)
	{
		____zip64_46 = value;
	}

	inline static int32_t get_offset_of__SavingSfx_47() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ____SavingSfx_47)); }
	inline bool get__SavingSfx_47() const { return ____SavingSfx_47; }
	inline bool* get_address_of__SavingSfx_47() { return &____SavingSfx_47; }
	inline void set__SavingSfx_47(bool value)
	{
		____SavingSfx_47 = value;
	}

	inline static int32_t get_offset_of_SaveProgress_49() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ___SaveProgress_49)); }
	inline EventHandler_1_t1609429985 * get_SaveProgress_49() const { return ___SaveProgress_49; }
	inline EventHandler_1_t1609429985 ** get_address_of_SaveProgress_49() { return &___SaveProgress_49; }
	inline void set_SaveProgress_49(EventHandler_1_t1609429985 * value)
	{
		___SaveProgress_49 = value;
		Il2CppCodeGenWriteBarrier(&___SaveProgress_49, value);
	}

	inline static int32_t get_offset_of_ReadProgress_50() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ___ReadProgress_50)); }
	inline EventHandler_1_t1313894632 * get_ReadProgress_50() const { return ___ReadProgress_50; }
	inline EventHandler_1_t1313894632 ** get_address_of_ReadProgress_50() { return &___ReadProgress_50; }
	inline void set_ReadProgress_50(EventHandler_1_t1313894632 * value)
	{
		___ReadProgress_50 = value;
		Il2CppCodeGenWriteBarrier(&___ReadProgress_50, value);
	}

	inline static int32_t get_offset_of_ExtractProgress_51() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ___ExtractProgress_51)); }
	inline EventHandler_1_t3483276701 * get_ExtractProgress_51() const { return ___ExtractProgress_51; }
	inline EventHandler_1_t3483276701 ** get_address_of_ExtractProgress_51() { return &___ExtractProgress_51; }
	inline void set_ExtractProgress_51(EventHandler_1_t3483276701 * value)
	{
		___ExtractProgress_51 = value;
		Il2CppCodeGenWriteBarrier(&___ExtractProgress_51, value);
	}

	inline static int32_t get_offset_of_AddProgress_52() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ___AddProgress_52)); }
	inline EventHandler_1_t462343549 * get_AddProgress_52() const { return ___AddProgress_52; }
	inline EventHandler_1_t462343549 ** get_address_of_AddProgress_52() { return &___AddProgress_52; }
	inline void set_AddProgress_52(EventHandler_1_t462343549 * value)
	{
		___AddProgress_52 = value;
		Il2CppCodeGenWriteBarrier(&___AddProgress_52, value);
	}

	inline static int32_t get_offset_of_ZipError_53() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ___ZipError_53)); }
	inline EventHandler_1_t3674114020 * get_ZipError_53() const { return ___ZipError_53; }
	inline EventHandler_1_t3674114020 ** get_address_of_ZipError_53() { return &___ZipError_53; }
	inline void set_ZipError_53(EventHandler_1_t3674114020 * value)
	{
		___ZipError_53 = value;
		Il2CppCodeGenWriteBarrier(&___ZipError_53, value);
	}

	inline static int32_t get_offset_of_U3CFullScanU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ___U3CFullScanU3Ek__BackingField_54)); }
	inline bool get_U3CFullScanU3Ek__BackingField_54() const { return ___U3CFullScanU3Ek__BackingField_54; }
	inline bool* get_address_of_U3CFullScanU3Ek__BackingField_54() { return &___U3CFullScanU3Ek__BackingField_54; }
	inline void set_U3CFullScanU3Ek__BackingField_54(bool value)
	{
		___U3CFullScanU3Ek__BackingField_54 = value;
	}

	inline static int32_t get_offset_of_U3CSortEntriesBeforeSavingU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ___U3CSortEntriesBeforeSavingU3Ek__BackingField_55)); }
	inline bool get_U3CSortEntriesBeforeSavingU3Ek__BackingField_55() const { return ___U3CSortEntriesBeforeSavingU3Ek__BackingField_55; }
	inline bool* get_address_of_U3CSortEntriesBeforeSavingU3Ek__BackingField_55() { return &___U3CSortEntriesBeforeSavingU3Ek__BackingField_55; }
	inline void set_U3CSortEntriesBeforeSavingU3Ek__BackingField_55(bool value)
	{
		___U3CSortEntriesBeforeSavingU3Ek__BackingField_55 = value;
	}

	inline static int32_t get_offset_of_U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56)); }
	inline bool get_U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56() const { return ___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56; }
	inline bool* get_address_of_U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56() { return &___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56; }
	inline void set_U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56(bool value)
	{
		___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56 = value;
	}

	inline static int32_t get_offset_of_U3CCodecBufferSizeU3Ek__BackingField_57() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ___U3CCodecBufferSizeU3Ek__BackingField_57)); }
	inline int32_t get_U3CCodecBufferSizeU3Ek__BackingField_57() const { return ___U3CCodecBufferSizeU3Ek__BackingField_57; }
	inline int32_t* get_address_of_U3CCodecBufferSizeU3Ek__BackingField_57() { return &___U3CCodecBufferSizeU3Ek__BackingField_57; }
	inline void set_U3CCodecBufferSizeU3Ek__BackingField_57(int32_t value)
	{
		___U3CCodecBufferSizeU3Ek__BackingField_57 = value;
	}

	inline static int32_t get_offset_of_U3CFlattenFoldersOnExtractU3Ek__BackingField_58() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ___U3CFlattenFoldersOnExtractU3Ek__BackingField_58)); }
	inline bool get_U3CFlattenFoldersOnExtractU3Ek__BackingField_58() const { return ___U3CFlattenFoldersOnExtractU3Ek__BackingField_58; }
	inline bool* get_address_of_U3CFlattenFoldersOnExtractU3Ek__BackingField_58() { return &___U3CFlattenFoldersOnExtractU3Ek__BackingField_58; }
	inline void set_U3CFlattenFoldersOnExtractU3Ek__BackingField_58(bool value)
	{
		___U3CFlattenFoldersOnExtractU3Ek__BackingField_58 = value;
	}

	inline static int32_t get_offset_of_U3CCompressionLevelU3Ek__BackingField_59() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ___U3CCompressionLevelU3Ek__BackingField_59)); }
	inline int32_t get_U3CCompressionLevelU3Ek__BackingField_59() const { return ___U3CCompressionLevelU3Ek__BackingField_59; }
	inline int32_t* get_address_of_U3CCompressionLevelU3Ek__BackingField_59() { return &___U3CCompressionLevelU3Ek__BackingField_59; }
	inline void set_U3CCompressionLevelU3Ek__BackingField_59(int32_t value)
	{
		___U3CCompressionLevelU3Ek__BackingField_59 = value;
	}

	inline static int32_t get_offset_of_U3CExtractExistingFileU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ___U3CExtractExistingFileU3Ek__BackingField_60)); }
	inline int32_t get_U3CExtractExistingFileU3Ek__BackingField_60() const { return ___U3CExtractExistingFileU3Ek__BackingField_60; }
	inline int32_t* get_address_of_U3CExtractExistingFileU3Ek__BackingField_60() { return &___U3CExtractExistingFileU3Ek__BackingField_60; }
	inline void set_U3CExtractExistingFileU3Ek__BackingField_60(int32_t value)
	{
		___U3CExtractExistingFileU3Ek__BackingField_60 = value;
	}

	inline static int32_t get_offset_of_U3CSetCompressionU3Ek__BackingField_61() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086, ___U3CSetCompressionU3Ek__BackingField_61)); }
	inline SetCompressionCallback_t727837266 * get_U3CSetCompressionU3Ek__BackingField_61() const { return ___U3CSetCompressionU3Ek__BackingField_61; }
	inline SetCompressionCallback_t727837266 ** get_address_of_U3CSetCompressionU3Ek__BackingField_61() { return &___U3CSetCompressionU3Ek__BackingField_61; }
	inline void set_U3CSetCompressionU3Ek__BackingField_61(SetCompressionCallback_t727837266 * value)
	{
		___U3CSetCompressionU3Ek__BackingField_61 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSetCompressionU3Ek__BackingField_61, value);
	}
};

struct ZipFile_t1967254086_StaticFields
{
public:
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipFile::_defaultEncoding
	Encoding_t180559927 * ____defaultEncoding_39;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::BufferSizeDefault
	int32_t ___BufferSizeDefault_48;

public:
	inline static int32_t get_offset_of__defaultEncoding_39() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086_StaticFields, ____defaultEncoding_39)); }
	inline Encoding_t180559927 * get__defaultEncoding_39() const { return ____defaultEncoding_39; }
	inline Encoding_t180559927 ** get_address_of__defaultEncoding_39() { return &____defaultEncoding_39; }
	inline void set__defaultEncoding_39(Encoding_t180559927 * value)
	{
		____defaultEncoding_39 = value;
		Il2CppCodeGenWriteBarrier(&____defaultEncoding_39, value);
	}

	inline static int32_t get_offset_of_BufferSizeDefault_48() { return static_cast<int32_t>(offsetof(ZipFile_t1967254086_StaticFields, ___BufferSizeDefault_48)); }
	inline int32_t get_BufferSizeDefault_48() const { return ___BufferSizeDefault_48; }
	inline int32_t* get_address_of_BufferSizeDefault_48() { return &___BufferSizeDefault_48; }
	inline void set_BufferSizeDefault_48(int32_t value)
	{
		___BufferSizeDefault_48 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
