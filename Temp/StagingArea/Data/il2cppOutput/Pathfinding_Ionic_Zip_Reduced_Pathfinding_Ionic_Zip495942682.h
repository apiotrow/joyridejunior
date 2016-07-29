#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t219029575;
// System.Object
struct Il2CppObject;
// Pathfinding.Ionic.Zip.ZipCrypto
struct ZipCrypto_t2077278539;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Text.Encoding
struct Encoding_t180559927;
// Pathfinding.Ionic.Zip.ZipContainer
struct ZipContainer_t674162857;
// Pathfinding.Ionic.Zip.WriteDelegate
struct WriteDelegate_t356517005;
// Pathfinding.Ionic.Zip.OpenDelegate
struct OpenDelegate_t4056570936;
// Pathfinding.Ionic.Zip.CloseDelegate
struct CloseDelegate_t3454820774;
// Pathfinding.Ionic.Zip.SetCompressionCallback
struct SetCompressionCallback_t727837266;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_DateTime339033936.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl1823839577.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi3683243925.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi1034803765.h"
#include "mscorlib_System_Nullable_1_gen1438485494.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi1816100942.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi3352950567.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi3134631622.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi2418825471.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ZipEntry
struct  ZipEntry_t495942682  : public Il2CppObject
{
public:
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_VersionMadeBy
	int16_t ____VersionMadeBy_0;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_InternalFileAttrs
	int16_t ____InternalFileAttrs_1;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_ExternalFileAttrs
	int32_t ____ExternalFileAttrs_2;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_filenameLength
	int16_t ____filenameLength_3;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_extraFieldLength
	int16_t ____extraFieldLength_4;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_commentLength
	int16_t ____commentLength_5;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::_inputDecryptorStream
	Stream_t219029575 * ____inputDecryptorStream_6;
	// System.Object Pathfinding.Ionic.Zip.ZipEntry::_outputLock
	Il2CppObject * ____outputLock_7;
	// Pathfinding.Ionic.Zip.ZipCrypto Pathfinding.Ionic.Zip.ZipEntry::_zipCrypto_forExtract
	ZipCrypto_t2077278539 * ____zipCrypto_forExtract_8;
	// Pathfinding.Ionic.Zip.ZipCrypto Pathfinding.Ionic.Zip.ZipEntry::_zipCrypto_forWrite
	ZipCrypto_t2077278539 * ____zipCrypto_forWrite_9;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_LastModified
	DateTime_t339033936  ____LastModified_10;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_Mtime
	DateTime_t339033936  ____Mtime_11;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_Atime
	DateTime_t339033936  ____Atime_12;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_Ctime
	DateTime_t339033936  ____Ctime_13;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_ntfsTimesAreSet
	bool ____ntfsTimesAreSet_14;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_emitNtfsTimes
	bool ____emitNtfsTimes_15;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_emitUnixTimes
	bool ____emitUnixTimes_16;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_TrimVolumeFromFullyQualifiedPaths
	bool ____TrimVolumeFromFullyQualifiedPaths_17;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_LocalFileName
	String_t* ____LocalFileName_18;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_FileNameInArchive
	String_t* ____FileNameInArchive_19;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_VersionNeeded
	int16_t ____VersionNeeded_20;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_BitField
	int16_t ____BitField_21;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_CompressionMethod
	int16_t ____CompressionMethod_22;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_CompressionMethod_FromZipFile
	int16_t ____CompressionMethod_FromZipFile_23;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zip.ZipEntry::_CompressionLevel
	int32_t ____CompressionLevel_24;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_Comment
	String_t* ____Comment_25;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_IsDirectory
	bool ____IsDirectory_26;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_CommentBytes
	ByteU5BU5D_t58506160* ____CommentBytes_27;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_CompressedSize
	int64_t ____CompressedSize_28;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_CompressedFileDataSize
	int64_t ____CompressedFileDataSize_29;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_UncompressedSize
	int64_t ____UncompressedSize_30;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_TimeBlob
	int32_t ____TimeBlob_31;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_crcCalculated
	bool ____crcCalculated_32;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_Crc32
	int32_t ____Crc32_33;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_Extra
	ByteU5BU5D_t58506160* ____Extra_34;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_metadataChanged
	bool ____metadataChanged_35;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_restreamRequiredOnSave
	bool ____restreamRequiredOnSave_36;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_sourceIsEncrypted
	bool ____sourceIsEncrypted_37;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_skippedDuringSave
	bool ____skippedDuringSave_38;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipEntry::_diskNumber
	uint32_t ____diskNumber_39;
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipEntry::_actualEncoding
	Encoding_t180559927 * ____actualEncoding_41;
	// Pathfinding.Ionic.Zip.ZipContainer Pathfinding.Ionic.Zip.ZipEntry::_container
	ZipContainer_t674162857 * ____container_42;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::__FileDataPosition
	int64_t _____FileDataPosition_43;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_EntryHeader
	ByteU5BU5D_t58506160* ____EntryHeader_44;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_RelativeOffsetOfLocalHeader
	int64_t ____RelativeOffsetOfLocalHeader_45;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_future_ROLH
	int64_t ____future_ROLH_46;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_TotalEntrySize
	int64_t ____TotalEntrySize_47;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_LengthOfHeader
	int32_t ____LengthOfHeader_48;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_LengthOfTrailer
	int32_t ____LengthOfTrailer_49;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_InputUsesZip64
	bool ____InputUsesZip64_50;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipEntry::_UnsupportedAlgorithmId
	uint32_t ____UnsupportedAlgorithmId_51;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_Password
	String_t* ____Password_52;
	// Pathfinding.Ionic.Zip.ZipEntrySource Pathfinding.Ionic.Zip.ZipEntry::_Source
	int32_t ____Source_53;
	// Pathfinding.Ionic.Zip.EncryptionAlgorithm Pathfinding.Ionic.Zip.ZipEntry::_Encryption
	int32_t ____Encryption_54;
	// Pathfinding.Ionic.Zip.EncryptionAlgorithm Pathfinding.Ionic.Zip.ZipEntry::_Encryption_FromZipFile
	int32_t ____Encryption_FromZipFile_55;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_WeakEncryptionHeader
	ByteU5BU5D_t58506160* ____WeakEncryptionHeader_56;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::_archiveStream
	Stream_t219029575 * ____archiveStream_57;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::_sourceStream
	Stream_t219029575 * ____sourceStream_58;
	// System.Nullable`1<System.Int64> Pathfinding.Ionic.Zip.ZipEntry::_sourceStreamOriginalPosition
	Nullable_1_t1438485494  ____sourceStreamOriginalPosition_59;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_ioOperationCanceled
	bool ____ioOperationCanceled_60;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_presumeZip64
	bool ____presumeZip64_61;
	// System.Nullable`1<System.Boolean> Pathfinding.Ionic.Zip.ZipEntry::_entryRequiresZip64
	Nullable_1_t3097043249  ____entryRequiresZip64_62;
	// System.Nullable`1<System.Boolean> Pathfinding.Ionic.Zip.ZipEntry::_OutputUsesZip64
	Nullable_1_t3097043249  ____OutputUsesZip64_63;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_IsText
	bool ____IsText_64;
	// Pathfinding.Ionic.Zip.ZipEntryTimestamp Pathfinding.Ionic.Zip.ZipEntry::_timestamp
	int32_t ____timestamp_65;
	// Pathfinding.Ionic.Zip.WriteDelegate Pathfinding.Ionic.Zip.ZipEntry::_WriteDelegate
	WriteDelegate_t356517005 * ____WriteDelegate_69;
	// Pathfinding.Ionic.Zip.OpenDelegate Pathfinding.Ionic.Zip.ZipEntry::_OpenDelegate
	OpenDelegate_t4056570936 * ____OpenDelegate_70;
	// Pathfinding.Ionic.Zip.CloseDelegate Pathfinding.Ionic.Zip.ZipEntry::_CloseDelegate
	CloseDelegate_t3454820774 * ____CloseDelegate_71;
	// Pathfinding.Ionic.Zip.ExtractExistingFileAction Pathfinding.Ionic.Zip.ZipEntry::<ExtractExistingFile>k__BackingField
	int32_t ___U3CExtractExistingFileU3Ek__BackingField_72;
	// Pathfinding.Ionic.Zip.ZipErrorAction Pathfinding.Ionic.Zip.ZipEntry::<ZipErrorAction>k__BackingField
	int32_t ___U3CZipErrorActionU3Ek__BackingField_73;
	// Pathfinding.Ionic.Zip.SetCompressionCallback Pathfinding.Ionic.Zip.ZipEntry::<SetCompression>k__BackingField
	SetCompressionCallback_t727837266 * ___U3CSetCompressionU3Ek__BackingField_74;
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipEntry::<AlternateEncoding>k__BackingField
	Encoding_t180559927 * ___U3CAlternateEncodingU3Ek__BackingField_75;
	// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipEntry::<AlternateEncodingUsage>k__BackingField
	int32_t ___U3CAlternateEncodingUsageU3Ek__BackingField_76;

public:
	inline static int32_t get_offset_of__VersionMadeBy_0() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____VersionMadeBy_0)); }
	inline int16_t get__VersionMadeBy_0() const { return ____VersionMadeBy_0; }
	inline int16_t* get_address_of__VersionMadeBy_0() { return &____VersionMadeBy_0; }
	inline void set__VersionMadeBy_0(int16_t value)
	{
		____VersionMadeBy_0 = value;
	}

	inline static int32_t get_offset_of__InternalFileAttrs_1() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____InternalFileAttrs_1)); }
	inline int16_t get__InternalFileAttrs_1() const { return ____InternalFileAttrs_1; }
	inline int16_t* get_address_of__InternalFileAttrs_1() { return &____InternalFileAttrs_1; }
	inline void set__InternalFileAttrs_1(int16_t value)
	{
		____InternalFileAttrs_1 = value;
	}

	inline static int32_t get_offset_of__ExternalFileAttrs_2() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____ExternalFileAttrs_2)); }
	inline int32_t get__ExternalFileAttrs_2() const { return ____ExternalFileAttrs_2; }
	inline int32_t* get_address_of__ExternalFileAttrs_2() { return &____ExternalFileAttrs_2; }
	inline void set__ExternalFileAttrs_2(int32_t value)
	{
		____ExternalFileAttrs_2 = value;
	}

	inline static int32_t get_offset_of__filenameLength_3() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____filenameLength_3)); }
	inline int16_t get__filenameLength_3() const { return ____filenameLength_3; }
	inline int16_t* get_address_of__filenameLength_3() { return &____filenameLength_3; }
	inline void set__filenameLength_3(int16_t value)
	{
		____filenameLength_3 = value;
	}

	inline static int32_t get_offset_of__extraFieldLength_4() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____extraFieldLength_4)); }
	inline int16_t get__extraFieldLength_4() const { return ____extraFieldLength_4; }
	inline int16_t* get_address_of__extraFieldLength_4() { return &____extraFieldLength_4; }
	inline void set__extraFieldLength_4(int16_t value)
	{
		____extraFieldLength_4 = value;
	}

	inline static int32_t get_offset_of__commentLength_5() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____commentLength_5)); }
	inline int16_t get__commentLength_5() const { return ____commentLength_5; }
	inline int16_t* get_address_of__commentLength_5() { return &____commentLength_5; }
	inline void set__commentLength_5(int16_t value)
	{
		____commentLength_5 = value;
	}

	inline static int32_t get_offset_of__inputDecryptorStream_6() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____inputDecryptorStream_6)); }
	inline Stream_t219029575 * get__inputDecryptorStream_6() const { return ____inputDecryptorStream_6; }
	inline Stream_t219029575 ** get_address_of__inputDecryptorStream_6() { return &____inputDecryptorStream_6; }
	inline void set__inputDecryptorStream_6(Stream_t219029575 * value)
	{
		____inputDecryptorStream_6 = value;
		Il2CppCodeGenWriteBarrier(&____inputDecryptorStream_6, value);
	}

	inline static int32_t get_offset_of__outputLock_7() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____outputLock_7)); }
	inline Il2CppObject * get__outputLock_7() const { return ____outputLock_7; }
	inline Il2CppObject ** get_address_of__outputLock_7() { return &____outputLock_7; }
	inline void set__outputLock_7(Il2CppObject * value)
	{
		____outputLock_7 = value;
		Il2CppCodeGenWriteBarrier(&____outputLock_7, value);
	}

	inline static int32_t get_offset_of__zipCrypto_forExtract_8() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____zipCrypto_forExtract_8)); }
	inline ZipCrypto_t2077278539 * get__zipCrypto_forExtract_8() const { return ____zipCrypto_forExtract_8; }
	inline ZipCrypto_t2077278539 ** get_address_of__zipCrypto_forExtract_8() { return &____zipCrypto_forExtract_8; }
	inline void set__zipCrypto_forExtract_8(ZipCrypto_t2077278539 * value)
	{
		____zipCrypto_forExtract_8 = value;
		Il2CppCodeGenWriteBarrier(&____zipCrypto_forExtract_8, value);
	}

	inline static int32_t get_offset_of__zipCrypto_forWrite_9() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____zipCrypto_forWrite_9)); }
	inline ZipCrypto_t2077278539 * get__zipCrypto_forWrite_9() const { return ____zipCrypto_forWrite_9; }
	inline ZipCrypto_t2077278539 ** get_address_of__zipCrypto_forWrite_9() { return &____zipCrypto_forWrite_9; }
	inline void set__zipCrypto_forWrite_9(ZipCrypto_t2077278539 * value)
	{
		____zipCrypto_forWrite_9 = value;
		Il2CppCodeGenWriteBarrier(&____zipCrypto_forWrite_9, value);
	}

	inline static int32_t get_offset_of__LastModified_10() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____LastModified_10)); }
	inline DateTime_t339033936  get__LastModified_10() const { return ____LastModified_10; }
	inline DateTime_t339033936 * get_address_of__LastModified_10() { return &____LastModified_10; }
	inline void set__LastModified_10(DateTime_t339033936  value)
	{
		____LastModified_10 = value;
	}

	inline static int32_t get_offset_of__Mtime_11() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____Mtime_11)); }
	inline DateTime_t339033936  get__Mtime_11() const { return ____Mtime_11; }
	inline DateTime_t339033936 * get_address_of__Mtime_11() { return &____Mtime_11; }
	inline void set__Mtime_11(DateTime_t339033936  value)
	{
		____Mtime_11 = value;
	}

	inline static int32_t get_offset_of__Atime_12() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____Atime_12)); }
	inline DateTime_t339033936  get__Atime_12() const { return ____Atime_12; }
	inline DateTime_t339033936 * get_address_of__Atime_12() { return &____Atime_12; }
	inline void set__Atime_12(DateTime_t339033936  value)
	{
		____Atime_12 = value;
	}

	inline static int32_t get_offset_of__Ctime_13() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____Ctime_13)); }
	inline DateTime_t339033936  get__Ctime_13() const { return ____Ctime_13; }
	inline DateTime_t339033936 * get_address_of__Ctime_13() { return &____Ctime_13; }
	inline void set__Ctime_13(DateTime_t339033936  value)
	{
		____Ctime_13 = value;
	}

	inline static int32_t get_offset_of__ntfsTimesAreSet_14() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____ntfsTimesAreSet_14)); }
	inline bool get__ntfsTimesAreSet_14() const { return ____ntfsTimesAreSet_14; }
	inline bool* get_address_of__ntfsTimesAreSet_14() { return &____ntfsTimesAreSet_14; }
	inline void set__ntfsTimesAreSet_14(bool value)
	{
		____ntfsTimesAreSet_14 = value;
	}

	inline static int32_t get_offset_of__emitNtfsTimes_15() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____emitNtfsTimes_15)); }
	inline bool get__emitNtfsTimes_15() const { return ____emitNtfsTimes_15; }
	inline bool* get_address_of__emitNtfsTimes_15() { return &____emitNtfsTimes_15; }
	inline void set__emitNtfsTimes_15(bool value)
	{
		____emitNtfsTimes_15 = value;
	}

	inline static int32_t get_offset_of__emitUnixTimes_16() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____emitUnixTimes_16)); }
	inline bool get__emitUnixTimes_16() const { return ____emitUnixTimes_16; }
	inline bool* get_address_of__emitUnixTimes_16() { return &____emitUnixTimes_16; }
	inline void set__emitUnixTimes_16(bool value)
	{
		____emitUnixTimes_16 = value;
	}

	inline static int32_t get_offset_of__TrimVolumeFromFullyQualifiedPaths_17() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____TrimVolumeFromFullyQualifiedPaths_17)); }
	inline bool get__TrimVolumeFromFullyQualifiedPaths_17() const { return ____TrimVolumeFromFullyQualifiedPaths_17; }
	inline bool* get_address_of__TrimVolumeFromFullyQualifiedPaths_17() { return &____TrimVolumeFromFullyQualifiedPaths_17; }
	inline void set__TrimVolumeFromFullyQualifiedPaths_17(bool value)
	{
		____TrimVolumeFromFullyQualifiedPaths_17 = value;
	}

	inline static int32_t get_offset_of__LocalFileName_18() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____LocalFileName_18)); }
	inline String_t* get__LocalFileName_18() const { return ____LocalFileName_18; }
	inline String_t** get_address_of__LocalFileName_18() { return &____LocalFileName_18; }
	inline void set__LocalFileName_18(String_t* value)
	{
		____LocalFileName_18 = value;
		Il2CppCodeGenWriteBarrier(&____LocalFileName_18, value);
	}

	inline static int32_t get_offset_of__FileNameInArchive_19() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____FileNameInArchive_19)); }
	inline String_t* get__FileNameInArchive_19() const { return ____FileNameInArchive_19; }
	inline String_t** get_address_of__FileNameInArchive_19() { return &____FileNameInArchive_19; }
	inline void set__FileNameInArchive_19(String_t* value)
	{
		____FileNameInArchive_19 = value;
		Il2CppCodeGenWriteBarrier(&____FileNameInArchive_19, value);
	}

	inline static int32_t get_offset_of__VersionNeeded_20() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____VersionNeeded_20)); }
	inline int16_t get__VersionNeeded_20() const { return ____VersionNeeded_20; }
	inline int16_t* get_address_of__VersionNeeded_20() { return &____VersionNeeded_20; }
	inline void set__VersionNeeded_20(int16_t value)
	{
		____VersionNeeded_20 = value;
	}

	inline static int32_t get_offset_of__BitField_21() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____BitField_21)); }
	inline int16_t get__BitField_21() const { return ____BitField_21; }
	inline int16_t* get_address_of__BitField_21() { return &____BitField_21; }
	inline void set__BitField_21(int16_t value)
	{
		____BitField_21 = value;
	}

	inline static int32_t get_offset_of__CompressionMethod_22() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____CompressionMethod_22)); }
	inline int16_t get__CompressionMethod_22() const { return ____CompressionMethod_22; }
	inline int16_t* get_address_of__CompressionMethod_22() { return &____CompressionMethod_22; }
	inline void set__CompressionMethod_22(int16_t value)
	{
		____CompressionMethod_22 = value;
	}

	inline static int32_t get_offset_of__CompressionMethod_FromZipFile_23() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____CompressionMethod_FromZipFile_23)); }
	inline int16_t get__CompressionMethod_FromZipFile_23() const { return ____CompressionMethod_FromZipFile_23; }
	inline int16_t* get_address_of__CompressionMethod_FromZipFile_23() { return &____CompressionMethod_FromZipFile_23; }
	inline void set__CompressionMethod_FromZipFile_23(int16_t value)
	{
		____CompressionMethod_FromZipFile_23 = value;
	}

	inline static int32_t get_offset_of__CompressionLevel_24() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____CompressionLevel_24)); }
	inline int32_t get__CompressionLevel_24() const { return ____CompressionLevel_24; }
	inline int32_t* get_address_of__CompressionLevel_24() { return &____CompressionLevel_24; }
	inline void set__CompressionLevel_24(int32_t value)
	{
		____CompressionLevel_24 = value;
	}

	inline static int32_t get_offset_of__Comment_25() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____Comment_25)); }
	inline String_t* get__Comment_25() const { return ____Comment_25; }
	inline String_t** get_address_of__Comment_25() { return &____Comment_25; }
	inline void set__Comment_25(String_t* value)
	{
		____Comment_25 = value;
		Il2CppCodeGenWriteBarrier(&____Comment_25, value);
	}

	inline static int32_t get_offset_of__IsDirectory_26() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____IsDirectory_26)); }
	inline bool get__IsDirectory_26() const { return ____IsDirectory_26; }
	inline bool* get_address_of__IsDirectory_26() { return &____IsDirectory_26; }
	inline void set__IsDirectory_26(bool value)
	{
		____IsDirectory_26 = value;
	}

	inline static int32_t get_offset_of__CommentBytes_27() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____CommentBytes_27)); }
	inline ByteU5BU5D_t58506160* get__CommentBytes_27() const { return ____CommentBytes_27; }
	inline ByteU5BU5D_t58506160** get_address_of__CommentBytes_27() { return &____CommentBytes_27; }
	inline void set__CommentBytes_27(ByteU5BU5D_t58506160* value)
	{
		____CommentBytes_27 = value;
		Il2CppCodeGenWriteBarrier(&____CommentBytes_27, value);
	}

	inline static int32_t get_offset_of__CompressedSize_28() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____CompressedSize_28)); }
	inline int64_t get__CompressedSize_28() const { return ____CompressedSize_28; }
	inline int64_t* get_address_of__CompressedSize_28() { return &____CompressedSize_28; }
	inline void set__CompressedSize_28(int64_t value)
	{
		____CompressedSize_28 = value;
	}

	inline static int32_t get_offset_of__CompressedFileDataSize_29() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____CompressedFileDataSize_29)); }
	inline int64_t get__CompressedFileDataSize_29() const { return ____CompressedFileDataSize_29; }
	inline int64_t* get_address_of__CompressedFileDataSize_29() { return &____CompressedFileDataSize_29; }
	inline void set__CompressedFileDataSize_29(int64_t value)
	{
		____CompressedFileDataSize_29 = value;
	}

	inline static int32_t get_offset_of__UncompressedSize_30() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____UncompressedSize_30)); }
	inline int64_t get__UncompressedSize_30() const { return ____UncompressedSize_30; }
	inline int64_t* get_address_of__UncompressedSize_30() { return &____UncompressedSize_30; }
	inline void set__UncompressedSize_30(int64_t value)
	{
		____UncompressedSize_30 = value;
	}

	inline static int32_t get_offset_of__TimeBlob_31() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____TimeBlob_31)); }
	inline int32_t get__TimeBlob_31() const { return ____TimeBlob_31; }
	inline int32_t* get_address_of__TimeBlob_31() { return &____TimeBlob_31; }
	inline void set__TimeBlob_31(int32_t value)
	{
		____TimeBlob_31 = value;
	}

	inline static int32_t get_offset_of__crcCalculated_32() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____crcCalculated_32)); }
	inline bool get__crcCalculated_32() const { return ____crcCalculated_32; }
	inline bool* get_address_of__crcCalculated_32() { return &____crcCalculated_32; }
	inline void set__crcCalculated_32(bool value)
	{
		____crcCalculated_32 = value;
	}

	inline static int32_t get_offset_of__Crc32_33() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____Crc32_33)); }
	inline int32_t get__Crc32_33() const { return ____Crc32_33; }
	inline int32_t* get_address_of__Crc32_33() { return &____Crc32_33; }
	inline void set__Crc32_33(int32_t value)
	{
		____Crc32_33 = value;
	}

	inline static int32_t get_offset_of__Extra_34() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____Extra_34)); }
	inline ByteU5BU5D_t58506160* get__Extra_34() const { return ____Extra_34; }
	inline ByteU5BU5D_t58506160** get_address_of__Extra_34() { return &____Extra_34; }
	inline void set__Extra_34(ByteU5BU5D_t58506160* value)
	{
		____Extra_34 = value;
		Il2CppCodeGenWriteBarrier(&____Extra_34, value);
	}

	inline static int32_t get_offset_of__metadataChanged_35() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____metadataChanged_35)); }
	inline bool get__metadataChanged_35() const { return ____metadataChanged_35; }
	inline bool* get_address_of__metadataChanged_35() { return &____metadataChanged_35; }
	inline void set__metadataChanged_35(bool value)
	{
		____metadataChanged_35 = value;
	}

	inline static int32_t get_offset_of__restreamRequiredOnSave_36() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____restreamRequiredOnSave_36)); }
	inline bool get__restreamRequiredOnSave_36() const { return ____restreamRequiredOnSave_36; }
	inline bool* get_address_of__restreamRequiredOnSave_36() { return &____restreamRequiredOnSave_36; }
	inline void set__restreamRequiredOnSave_36(bool value)
	{
		____restreamRequiredOnSave_36 = value;
	}

	inline static int32_t get_offset_of__sourceIsEncrypted_37() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____sourceIsEncrypted_37)); }
	inline bool get__sourceIsEncrypted_37() const { return ____sourceIsEncrypted_37; }
	inline bool* get_address_of__sourceIsEncrypted_37() { return &____sourceIsEncrypted_37; }
	inline void set__sourceIsEncrypted_37(bool value)
	{
		____sourceIsEncrypted_37 = value;
	}

	inline static int32_t get_offset_of__skippedDuringSave_38() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____skippedDuringSave_38)); }
	inline bool get__skippedDuringSave_38() const { return ____skippedDuringSave_38; }
	inline bool* get_address_of__skippedDuringSave_38() { return &____skippedDuringSave_38; }
	inline void set__skippedDuringSave_38(bool value)
	{
		____skippedDuringSave_38 = value;
	}

	inline static int32_t get_offset_of__diskNumber_39() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____diskNumber_39)); }
	inline uint32_t get__diskNumber_39() const { return ____diskNumber_39; }
	inline uint32_t* get_address_of__diskNumber_39() { return &____diskNumber_39; }
	inline void set__diskNumber_39(uint32_t value)
	{
		____diskNumber_39 = value;
	}

	inline static int32_t get_offset_of__actualEncoding_41() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____actualEncoding_41)); }
	inline Encoding_t180559927 * get__actualEncoding_41() const { return ____actualEncoding_41; }
	inline Encoding_t180559927 ** get_address_of__actualEncoding_41() { return &____actualEncoding_41; }
	inline void set__actualEncoding_41(Encoding_t180559927 * value)
	{
		____actualEncoding_41 = value;
		Il2CppCodeGenWriteBarrier(&____actualEncoding_41, value);
	}

	inline static int32_t get_offset_of__container_42() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____container_42)); }
	inline ZipContainer_t674162857 * get__container_42() const { return ____container_42; }
	inline ZipContainer_t674162857 ** get_address_of__container_42() { return &____container_42; }
	inline void set__container_42(ZipContainer_t674162857 * value)
	{
		____container_42 = value;
		Il2CppCodeGenWriteBarrier(&____container_42, value);
	}

	inline static int32_t get_offset_of___FileDataPosition_43() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, _____FileDataPosition_43)); }
	inline int64_t get___FileDataPosition_43() const { return _____FileDataPosition_43; }
	inline int64_t* get_address_of___FileDataPosition_43() { return &_____FileDataPosition_43; }
	inline void set___FileDataPosition_43(int64_t value)
	{
		_____FileDataPosition_43 = value;
	}

	inline static int32_t get_offset_of__EntryHeader_44() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____EntryHeader_44)); }
	inline ByteU5BU5D_t58506160* get__EntryHeader_44() const { return ____EntryHeader_44; }
	inline ByteU5BU5D_t58506160** get_address_of__EntryHeader_44() { return &____EntryHeader_44; }
	inline void set__EntryHeader_44(ByteU5BU5D_t58506160* value)
	{
		____EntryHeader_44 = value;
		Il2CppCodeGenWriteBarrier(&____EntryHeader_44, value);
	}

	inline static int32_t get_offset_of__RelativeOffsetOfLocalHeader_45() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____RelativeOffsetOfLocalHeader_45)); }
	inline int64_t get__RelativeOffsetOfLocalHeader_45() const { return ____RelativeOffsetOfLocalHeader_45; }
	inline int64_t* get_address_of__RelativeOffsetOfLocalHeader_45() { return &____RelativeOffsetOfLocalHeader_45; }
	inline void set__RelativeOffsetOfLocalHeader_45(int64_t value)
	{
		____RelativeOffsetOfLocalHeader_45 = value;
	}

	inline static int32_t get_offset_of__future_ROLH_46() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____future_ROLH_46)); }
	inline int64_t get__future_ROLH_46() const { return ____future_ROLH_46; }
	inline int64_t* get_address_of__future_ROLH_46() { return &____future_ROLH_46; }
	inline void set__future_ROLH_46(int64_t value)
	{
		____future_ROLH_46 = value;
	}

	inline static int32_t get_offset_of__TotalEntrySize_47() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____TotalEntrySize_47)); }
	inline int64_t get__TotalEntrySize_47() const { return ____TotalEntrySize_47; }
	inline int64_t* get_address_of__TotalEntrySize_47() { return &____TotalEntrySize_47; }
	inline void set__TotalEntrySize_47(int64_t value)
	{
		____TotalEntrySize_47 = value;
	}

	inline static int32_t get_offset_of__LengthOfHeader_48() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____LengthOfHeader_48)); }
	inline int32_t get__LengthOfHeader_48() const { return ____LengthOfHeader_48; }
	inline int32_t* get_address_of__LengthOfHeader_48() { return &____LengthOfHeader_48; }
	inline void set__LengthOfHeader_48(int32_t value)
	{
		____LengthOfHeader_48 = value;
	}

	inline static int32_t get_offset_of__LengthOfTrailer_49() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____LengthOfTrailer_49)); }
	inline int32_t get__LengthOfTrailer_49() const { return ____LengthOfTrailer_49; }
	inline int32_t* get_address_of__LengthOfTrailer_49() { return &____LengthOfTrailer_49; }
	inline void set__LengthOfTrailer_49(int32_t value)
	{
		____LengthOfTrailer_49 = value;
	}

	inline static int32_t get_offset_of__InputUsesZip64_50() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____InputUsesZip64_50)); }
	inline bool get__InputUsesZip64_50() const { return ____InputUsesZip64_50; }
	inline bool* get_address_of__InputUsesZip64_50() { return &____InputUsesZip64_50; }
	inline void set__InputUsesZip64_50(bool value)
	{
		____InputUsesZip64_50 = value;
	}

	inline static int32_t get_offset_of__UnsupportedAlgorithmId_51() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____UnsupportedAlgorithmId_51)); }
	inline uint32_t get__UnsupportedAlgorithmId_51() const { return ____UnsupportedAlgorithmId_51; }
	inline uint32_t* get_address_of__UnsupportedAlgorithmId_51() { return &____UnsupportedAlgorithmId_51; }
	inline void set__UnsupportedAlgorithmId_51(uint32_t value)
	{
		____UnsupportedAlgorithmId_51 = value;
	}

	inline static int32_t get_offset_of__Password_52() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____Password_52)); }
	inline String_t* get__Password_52() const { return ____Password_52; }
	inline String_t** get_address_of__Password_52() { return &____Password_52; }
	inline void set__Password_52(String_t* value)
	{
		____Password_52 = value;
		Il2CppCodeGenWriteBarrier(&____Password_52, value);
	}

	inline static int32_t get_offset_of__Source_53() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____Source_53)); }
	inline int32_t get__Source_53() const { return ____Source_53; }
	inline int32_t* get_address_of__Source_53() { return &____Source_53; }
	inline void set__Source_53(int32_t value)
	{
		____Source_53 = value;
	}

	inline static int32_t get_offset_of__Encryption_54() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____Encryption_54)); }
	inline int32_t get__Encryption_54() const { return ____Encryption_54; }
	inline int32_t* get_address_of__Encryption_54() { return &____Encryption_54; }
	inline void set__Encryption_54(int32_t value)
	{
		____Encryption_54 = value;
	}

	inline static int32_t get_offset_of__Encryption_FromZipFile_55() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____Encryption_FromZipFile_55)); }
	inline int32_t get__Encryption_FromZipFile_55() const { return ____Encryption_FromZipFile_55; }
	inline int32_t* get_address_of__Encryption_FromZipFile_55() { return &____Encryption_FromZipFile_55; }
	inline void set__Encryption_FromZipFile_55(int32_t value)
	{
		____Encryption_FromZipFile_55 = value;
	}

	inline static int32_t get_offset_of__WeakEncryptionHeader_56() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____WeakEncryptionHeader_56)); }
	inline ByteU5BU5D_t58506160* get__WeakEncryptionHeader_56() const { return ____WeakEncryptionHeader_56; }
	inline ByteU5BU5D_t58506160** get_address_of__WeakEncryptionHeader_56() { return &____WeakEncryptionHeader_56; }
	inline void set__WeakEncryptionHeader_56(ByteU5BU5D_t58506160* value)
	{
		____WeakEncryptionHeader_56 = value;
		Il2CppCodeGenWriteBarrier(&____WeakEncryptionHeader_56, value);
	}

	inline static int32_t get_offset_of__archiveStream_57() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____archiveStream_57)); }
	inline Stream_t219029575 * get__archiveStream_57() const { return ____archiveStream_57; }
	inline Stream_t219029575 ** get_address_of__archiveStream_57() { return &____archiveStream_57; }
	inline void set__archiveStream_57(Stream_t219029575 * value)
	{
		____archiveStream_57 = value;
		Il2CppCodeGenWriteBarrier(&____archiveStream_57, value);
	}

	inline static int32_t get_offset_of__sourceStream_58() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____sourceStream_58)); }
	inline Stream_t219029575 * get__sourceStream_58() const { return ____sourceStream_58; }
	inline Stream_t219029575 ** get_address_of__sourceStream_58() { return &____sourceStream_58; }
	inline void set__sourceStream_58(Stream_t219029575 * value)
	{
		____sourceStream_58 = value;
		Il2CppCodeGenWriteBarrier(&____sourceStream_58, value);
	}

	inline static int32_t get_offset_of__sourceStreamOriginalPosition_59() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____sourceStreamOriginalPosition_59)); }
	inline Nullable_1_t1438485494  get__sourceStreamOriginalPosition_59() const { return ____sourceStreamOriginalPosition_59; }
	inline Nullable_1_t1438485494 * get_address_of__sourceStreamOriginalPosition_59() { return &____sourceStreamOriginalPosition_59; }
	inline void set__sourceStreamOriginalPosition_59(Nullable_1_t1438485494  value)
	{
		____sourceStreamOriginalPosition_59 = value;
	}

	inline static int32_t get_offset_of__ioOperationCanceled_60() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____ioOperationCanceled_60)); }
	inline bool get__ioOperationCanceled_60() const { return ____ioOperationCanceled_60; }
	inline bool* get_address_of__ioOperationCanceled_60() { return &____ioOperationCanceled_60; }
	inline void set__ioOperationCanceled_60(bool value)
	{
		____ioOperationCanceled_60 = value;
	}

	inline static int32_t get_offset_of__presumeZip64_61() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____presumeZip64_61)); }
	inline bool get__presumeZip64_61() const { return ____presumeZip64_61; }
	inline bool* get_address_of__presumeZip64_61() { return &____presumeZip64_61; }
	inline void set__presumeZip64_61(bool value)
	{
		____presumeZip64_61 = value;
	}

	inline static int32_t get_offset_of__entryRequiresZip64_62() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____entryRequiresZip64_62)); }
	inline Nullable_1_t3097043249  get__entryRequiresZip64_62() const { return ____entryRequiresZip64_62; }
	inline Nullable_1_t3097043249 * get_address_of__entryRequiresZip64_62() { return &____entryRequiresZip64_62; }
	inline void set__entryRequiresZip64_62(Nullable_1_t3097043249  value)
	{
		____entryRequiresZip64_62 = value;
	}

	inline static int32_t get_offset_of__OutputUsesZip64_63() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____OutputUsesZip64_63)); }
	inline Nullable_1_t3097043249  get__OutputUsesZip64_63() const { return ____OutputUsesZip64_63; }
	inline Nullable_1_t3097043249 * get_address_of__OutputUsesZip64_63() { return &____OutputUsesZip64_63; }
	inline void set__OutputUsesZip64_63(Nullable_1_t3097043249  value)
	{
		____OutputUsesZip64_63 = value;
	}

	inline static int32_t get_offset_of__IsText_64() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____IsText_64)); }
	inline bool get__IsText_64() const { return ____IsText_64; }
	inline bool* get_address_of__IsText_64() { return &____IsText_64; }
	inline void set__IsText_64(bool value)
	{
		____IsText_64 = value;
	}

	inline static int32_t get_offset_of__timestamp_65() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____timestamp_65)); }
	inline int32_t get__timestamp_65() const { return ____timestamp_65; }
	inline int32_t* get_address_of__timestamp_65() { return &____timestamp_65; }
	inline void set__timestamp_65(int32_t value)
	{
		____timestamp_65 = value;
	}

	inline static int32_t get_offset_of__WriteDelegate_69() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____WriteDelegate_69)); }
	inline WriteDelegate_t356517005 * get__WriteDelegate_69() const { return ____WriteDelegate_69; }
	inline WriteDelegate_t356517005 ** get_address_of__WriteDelegate_69() { return &____WriteDelegate_69; }
	inline void set__WriteDelegate_69(WriteDelegate_t356517005 * value)
	{
		____WriteDelegate_69 = value;
		Il2CppCodeGenWriteBarrier(&____WriteDelegate_69, value);
	}

	inline static int32_t get_offset_of__OpenDelegate_70() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____OpenDelegate_70)); }
	inline OpenDelegate_t4056570936 * get__OpenDelegate_70() const { return ____OpenDelegate_70; }
	inline OpenDelegate_t4056570936 ** get_address_of__OpenDelegate_70() { return &____OpenDelegate_70; }
	inline void set__OpenDelegate_70(OpenDelegate_t4056570936 * value)
	{
		____OpenDelegate_70 = value;
		Il2CppCodeGenWriteBarrier(&____OpenDelegate_70, value);
	}

	inline static int32_t get_offset_of__CloseDelegate_71() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ____CloseDelegate_71)); }
	inline CloseDelegate_t3454820774 * get__CloseDelegate_71() const { return ____CloseDelegate_71; }
	inline CloseDelegate_t3454820774 ** get_address_of__CloseDelegate_71() { return &____CloseDelegate_71; }
	inline void set__CloseDelegate_71(CloseDelegate_t3454820774 * value)
	{
		____CloseDelegate_71 = value;
		Il2CppCodeGenWriteBarrier(&____CloseDelegate_71, value);
	}

	inline static int32_t get_offset_of_U3CExtractExistingFileU3Ek__BackingField_72() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ___U3CExtractExistingFileU3Ek__BackingField_72)); }
	inline int32_t get_U3CExtractExistingFileU3Ek__BackingField_72() const { return ___U3CExtractExistingFileU3Ek__BackingField_72; }
	inline int32_t* get_address_of_U3CExtractExistingFileU3Ek__BackingField_72() { return &___U3CExtractExistingFileU3Ek__BackingField_72; }
	inline void set_U3CExtractExistingFileU3Ek__BackingField_72(int32_t value)
	{
		___U3CExtractExistingFileU3Ek__BackingField_72 = value;
	}

	inline static int32_t get_offset_of_U3CZipErrorActionU3Ek__BackingField_73() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ___U3CZipErrorActionU3Ek__BackingField_73)); }
	inline int32_t get_U3CZipErrorActionU3Ek__BackingField_73() const { return ___U3CZipErrorActionU3Ek__BackingField_73; }
	inline int32_t* get_address_of_U3CZipErrorActionU3Ek__BackingField_73() { return &___U3CZipErrorActionU3Ek__BackingField_73; }
	inline void set_U3CZipErrorActionU3Ek__BackingField_73(int32_t value)
	{
		___U3CZipErrorActionU3Ek__BackingField_73 = value;
	}

	inline static int32_t get_offset_of_U3CSetCompressionU3Ek__BackingField_74() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ___U3CSetCompressionU3Ek__BackingField_74)); }
	inline SetCompressionCallback_t727837266 * get_U3CSetCompressionU3Ek__BackingField_74() const { return ___U3CSetCompressionU3Ek__BackingField_74; }
	inline SetCompressionCallback_t727837266 ** get_address_of_U3CSetCompressionU3Ek__BackingField_74() { return &___U3CSetCompressionU3Ek__BackingField_74; }
	inline void set_U3CSetCompressionU3Ek__BackingField_74(SetCompressionCallback_t727837266 * value)
	{
		___U3CSetCompressionU3Ek__BackingField_74 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSetCompressionU3Ek__BackingField_74, value);
	}

	inline static int32_t get_offset_of_U3CAlternateEncodingU3Ek__BackingField_75() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ___U3CAlternateEncodingU3Ek__BackingField_75)); }
	inline Encoding_t180559927 * get_U3CAlternateEncodingU3Ek__BackingField_75() const { return ___U3CAlternateEncodingU3Ek__BackingField_75; }
	inline Encoding_t180559927 ** get_address_of_U3CAlternateEncodingU3Ek__BackingField_75() { return &___U3CAlternateEncodingU3Ek__BackingField_75; }
	inline void set_U3CAlternateEncodingU3Ek__BackingField_75(Encoding_t180559927 * value)
	{
		___U3CAlternateEncodingU3Ek__BackingField_75 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAlternateEncodingU3Ek__BackingField_75, value);
	}

	inline static int32_t get_offset_of_U3CAlternateEncodingUsageU3Ek__BackingField_76() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682, ___U3CAlternateEncodingUsageU3Ek__BackingField_76)); }
	inline int32_t get_U3CAlternateEncodingUsageU3Ek__BackingField_76() const { return ___U3CAlternateEncodingUsageU3Ek__BackingField_76; }
	inline int32_t* get_address_of_U3CAlternateEncodingUsageU3Ek__BackingField_76() { return &___U3CAlternateEncodingUsageU3Ek__BackingField_76; }
	inline void set_U3CAlternateEncodingUsageU3Ek__BackingField_76(int32_t value)
	{
		___U3CAlternateEncodingUsageU3Ek__BackingField_76 = value;
	}
};

struct ZipEntry_t495942682_StaticFields
{
public:
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipEntry::ibm437
	Encoding_t180559927 * ___ibm437_40;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_unixEpoch
	DateTime_t339033936  ____unixEpoch_66;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_win32Epoch
	DateTime_t339033936  ____win32Epoch_67;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_zeroHour
	DateTime_t339033936  ____zeroHour_68;

public:
	inline static int32_t get_offset_of_ibm437_40() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682_StaticFields, ___ibm437_40)); }
	inline Encoding_t180559927 * get_ibm437_40() const { return ___ibm437_40; }
	inline Encoding_t180559927 ** get_address_of_ibm437_40() { return &___ibm437_40; }
	inline void set_ibm437_40(Encoding_t180559927 * value)
	{
		___ibm437_40 = value;
		Il2CppCodeGenWriteBarrier(&___ibm437_40, value);
	}

	inline static int32_t get_offset_of__unixEpoch_66() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682_StaticFields, ____unixEpoch_66)); }
	inline DateTime_t339033936  get__unixEpoch_66() const { return ____unixEpoch_66; }
	inline DateTime_t339033936 * get_address_of__unixEpoch_66() { return &____unixEpoch_66; }
	inline void set__unixEpoch_66(DateTime_t339033936  value)
	{
		____unixEpoch_66 = value;
	}

	inline static int32_t get_offset_of__win32Epoch_67() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682_StaticFields, ____win32Epoch_67)); }
	inline DateTime_t339033936  get__win32Epoch_67() const { return ____win32Epoch_67; }
	inline DateTime_t339033936 * get_address_of__win32Epoch_67() { return &____win32Epoch_67; }
	inline void set__win32Epoch_67(DateTime_t339033936  value)
	{
		____win32Epoch_67 = value;
	}

	inline static int32_t get_offset_of__zeroHour_68() { return static_cast<int32_t>(offsetof(ZipEntry_t495942682_StaticFields, ____zeroHour_68)); }
	inline DateTime_t339033936  get__zeroHour_68() const { return ____zeroHour_68; }
	inline DateTime_t339033936 * get_address_of__zeroHour_68() { return &____zeroHour_68; }
	inline void set__zeroHour_68(DateTime_t339033936  value)
	{
		____zeroHour_68 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
