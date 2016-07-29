#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.IO.Stream
struct Stream_t219029575;
// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t495942682;
// System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry>
struct Dictionary_2_t2133640586;
// System.Text.Encoding
struct Encoding_t180559927;
// Pathfinding.Ionic.Zip.CountingStream
struct CountingStream_t706717724;
// Pathfinding.Ionic.Crc.CrcCalculatorStream
struct CrcCalculatorStream_t2652117568;
// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream
struct ParallelDeflateOutputStream_t3413079424;

#include "mscorlib_System_IO_Stream219029575.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi3233959165.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi2418825471.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zli211972692.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ZipOutputStream
struct  ZipOutputStream_t3108803499  : public Stream_t219029575
{
public:
	// System.String Pathfinding.Ionic.Zip.ZipOutputStream::_password
	String_t* ____password_1;
	// System.String Pathfinding.Ionic.Zip.ZipOutputStream::_comment
	String_t* ____comment_2;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipOutputStream::_outputStream
	Stream_t219029575 * ____outputStream_3;
	// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipOutputStream::_currentEntry
	ZipEntry_t495942682 * ____currentEntry_4;
	// Pathfinding.Ionic.Zip.Zip64Option Pathfinding.Ionic.Zip.ZipOutputStream::_zip64
	int32_t ____zip64_5;
	// System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry> Pathfinding.Ionic.Zip.ZipOutputStream::_entriesWritten
	Dictionary_2_t2133640586 * ____entriesWritten_6;
	// System.Int32 Pathfinding.Ionic.Zip.ZipOutputStream::_entryCount
	int32_t ____entryCount_7;
	// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipOutputStream::_alternateEncodingUsage
	int32_t ____alternateEncodingUsage_8;
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipOutputStream::_alternateEncoding
	Encoding_t180559927 * ____alternateEncoding_9;
	// System.Boolean Pathfinding.Ionic.Zip.ZipOutputStream::_leaveUnderlyingStreamOpen
	bool ____leaveUnderlyingStreamOpen_10;
	// System.Boolean Pathfinding.Ionic.Zip.ZipOutputStream::_disposed
	bool ____disposed_11;
	// System.Boolean Pathfinding.Ionic.Zip.ZipOutputStream::_exceptionPending
	bool ____exceptionPending_12;
	// System.Boolean Pathfinding.Ionic.Zip.ZipOutputStream::_anyEntriesUsedZip64
	bool ____anyEntriesUsedZip64_13;
	// System.Boolean Pathfinding.Ionic.Zip.ZipOutputStream::_directoryNeededZip64
	bool ____directoryNeededZip64_14;
	// Pathfinding.Ionic.Zip.CountingStream Pathfinding.Ionic.Zip.ZipOutputStream::_outputCounter
	CountingStream_t706717724 * ____outputCounter_15;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipOutputStream::_encryptor
	Stream_t219029575 * ____encryptor_16;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipOutputStream::_deflater
	Stream_t219029575 * ____deflater_17;
	// Pathfinding.Ionic.Crc.CrcCalculatorStream Pathfinding.Ionic.Zip.ZipOutputStream::_entryOutputStream
	CrcCalculatorStream_t2652117568 * ____entryOutputStream_18;
	// System.Boolean Pathfinding.Ionic.Zip.ZipOutputStream::_needToWriteEntryHeader
	bool ____needToWriteEntryHeader_19;
	// System.String Pathfinding.Ionic.Zip.ZipOutputStream::_name
	String_t* ____name_20;
	// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream Pathfinding.Ionic.Zip.ZipOutputStream::ParallelDeflater
	ParallelDeflateOutputStream_t3413079424 * ___ParallelDeflater_21;
	// System.Int64 Pathfinding.Ionic.Zip.ZipOutputStream::_ParallelDeflateThreshold
	int64_t ____ParallelDeflateThreshold_22;
	// System.Int32 Pathfinding.Ionic.Zip.ZipOutputStream::_maxBufferPairs
	int32_t ____maxBufferPairs_23;
	// System.Int32 Pathfinding.Ionic.Zip.ZipOutputStream::<CodecBufferSize>k__BackingField
	int32_t ___U3CCodecBufferSizeU3Ek__BackingField_24;
	// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zip.ZipOutputStream::<Strategy>k__BackingField
	int32_t ___U3CStrategyU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of__password_1() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3108803499, ____password_1)); }
	inline String_t* get__password_1() const { return ____password_1; }
	inline String_t** get_address_of__password_1() { return &____password_1; }
	inline void set__password_1(String_t* value)
	{
		____password_1 = value;
		Il2CppCodeGenWriteBarrier(&____password_1, value);
	}

	inline static int32_t get_offset_of__comment_2() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3108803499, ____comment_2)); }
	inline String_t* get__comment_2() const { return ____comment_2; }
	inline String_t** get_address_of__comment_2() { return &____comment_2; }
	inline void set__comment_2(String_t* value)
	{
		____comment_2 = value;
		Il2CppCodeGenWriteBarrier(&____comment_2, value);
	}

	inline static int32_t get_offset_of__outputStream_3() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3108803499, ____outputStream_3)); }
	inline Stream_t219029575 * get__outputStream_3() const { return ____outputStream_3; }
	inline Stream_t219029575 ** get_address_of__outputStream_3() { return &____outputStream_3; }
	inline void set__outputStream_3(Stream_t219029575 * value)
	{
		____outputStream_3 = value;
		Il2CppCodeGenWriteBarrier(&____outputStream_3, value);
	}

	inline static int32_t get_offset_of__currentEntry_4() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3108803499, ____currentEntry_4)); }
	inline ZipEntry_t495942682 * get__currentEntry_4() const { return ____currentEntry_4; }
	inline ZipEntry_t495942682 ** get_address_of__currentEntry_4() { return &____currentEntry_4; }
	inline void set__currentEntry_4(ZipEntry_t495942682 * value)
	{
		____currentEntry_4 = value;
		Il2CppCodeGenWriteBarrier(&____currentEntry_4, value);
	}

	inline static int32_t get_offset_of__zip64_5() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3108803499, ____zip64_5)); }
	inline int32_t get__zip64_5() const { return ____zip64_5; }
	inline int32_t* get_address_of__zip64_5() { return &____zip64_5; }
	inline void set__zip64_5(int32_t value)
	{
		____zip64_5 = value;
	}

	inline static int32_t get_offset_of__entriesWritten_6() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3108803499, ____entriesWritten_6)); }
	inline Dictionary_2_t2133640586 * get__entriesWritten_6() const { return ____entriesWritten_6; }
	inline Dictionary_2_t2133640586 ** get_address_of__entriesWritten_6() { return &____entriesWritten_6; }
	inline void set__entriesWritten_6(Dictionary_2_t2133640586 * value)
	{
		____entriesWritten_6 = value;
		Il2CppCodeGenWriteBarrier(&____entriesWritten_6, value);
	}

	inline static int32_t get_offset_of__entryCount_7() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3108803499, ____entryCount_7)); }
	inline int32_t get__entryCount_7() const { return ____entryCount_7; }
	inline int32_t* get_address_of__entryCount_7() { return &____entryCount_7; }
	inline void set__entryCount_7(int32_t value)
	{
		____entryCount_7 = value;
	}

	inline static int32_t get_offset_of__alternateEncodingUsage_8() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3108803499, ____alternateEncodingUsage_8)); }
	inline int32_t get__alternateEncodingUsage_8() const { return ____alternateEncodingUsage_8; }
	inline int32_t* get_address_of__alternateEncodingUsage_8() { return &____alternateEncodingUsage_8; }
	inline void set__alternateEncodingUsage_8(int32_t value)
	{
		____alternateEncodingUsage_8 = value;
	}

	inline static int32_t get_offset_of__alternateEncoding_9() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3108803499, ____alternateEncoding_9)); }
	inline Encoding_t180559927 * get__alternateEncoding_9() const { return ____alternateEncoding_9; }
	inline Encoding_t180559927 ** get_address_of__alternateEncoding_9() { return &____alternateEncoding_9; }
	inline void set__alternateEncoding_9(Encoding_t180559927 * value)
	{
		____alternateEncoding_9 = value;
		Il2CppCodeGenWriteBarrier(&____alternateEncoding_9, value);
	}

	inline static int32_t get_offset_of__leaveUnderlyingStreamOpen_10() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3108803499, ____leaveUnderlyingStreamOpen_10)); }
	inline bool get__leaveUnderlyingStreamOpen_10() const { return ____leaveUnderlyingStreamOpen_10; }
	inline bool* get_address_of__leaveUnderlyingStreamOpen_10() { return &____leaveUnderlyingStreamOpen_10; }
	inline void set__leaveUnderlyingStreamOpen_10(bool value)
	{
		____leaveUnderlyingStreamOpen_10 = value;
	}

	inline static int32_t get_offset_of__disposed_11() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3108803499, ____disposed_11)); }
	inline bool get__disposed_11() const { return ____disposed_11; }
	inline bool* get_address_of__disposed_11() { return &____disposed_11; }
	inline void set__disposed_11(bool value)
	{
		____disposed_11 = value;
	}

	inline static int32_t get_offset_of__exceptionPending_12() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3108803499, ____exceptionPending_12)); }
	inline bool get__exceptionPending_12() const { return ____exceptionPending_12; }
	inline bool* get_address_of__exceptionPending_12() { return &____exceptionPending_12; }
	inline void set__exceptionPending_12(bool value)
	{
		____exceptionPending_12 = value;
	}

	inline static int32_t get_offset_of__anyEntriesUsedZip64_13() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3108803499, ____anyEntriesUsedZip64_13)); }
	inline bool get__anyEntriesUsedZip64_13() const { return ____anyEntriesUsedZip64_13; }
	inline bool* get_address_of__anyEntriesUsedZip64_13() { return &____anyEntriesUsedZip64_13; }
	inline void set__anyEntriesUsedZip64_13(bool value)
	{
		____anyEntriesUsedZip64_13 = value;
	}

	inline static int32_t get_offset_of__directoryNeededZip64_14() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3108803499, ____directoryNeededZip64_14)); }
	inline bool get__directoryNeededZip64_14() const { return ____directoryNeededZip64_14; }
	inline bool* get_address_of__directoryNeededZip64_14() { return &____directoryNeededZip64_14; }
	inline void set__directoryNeededZip64_14(bool value)
	{
		____directoryNeededZip64_14 = value;
	}

	inline static int32_t get_offset_of__outputCounter_15() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3108803499, ____outputCounter_15)); }
	inline CountingStream_t706717724 * get__outputCounter_15() const { return ____outputCounter_15; }
	inline CountingStream_t706717724 ** get_address_of__outputCounter_15() { return &____outputCounter_15; }
	inline void set__outputCounter_15(CountingStream_t706717724 * value)
	{
		____outputCounter_15 = value;
		Il2CppCodeGenWriteBarrier(&____outputCounter_15, value);
	}

	inline static int32_t get_offset_of__encryptor_16() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3108803499, ____encryptor_16)); }
	inline Stream_t219029575 * get__encryptor_16() const { return ____encryptor_16; }
	inline Stream_t219029575 ** get_address_of__encryptor_16() { return &____encryptor_16; }
	inline void set__encryptor_16(Stream_t219029575 * value)
	{
		____encryptor_16 = value;
		Il2CppCodeGenWriteBarrier(&____encryptor_16, value);
	}

	inline static int32_t get_offset_of__deflater_17() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3108803499, ____deflater_17)); }
	inline Stream_t219029575 * get__deflater_17() const { return ____deflater_17; }
	inline Stream_t219029575 ** get_address_of__deflater_17() { return &____deflater_17; }
	inline void set__deflater_17(Stream_t219029575 * value)
	{
		____deflater_17 = value;
		Il2CppCodeGenWriteBarrier(&____deflater_17, value);
	}

	inline static int32_t get_offset_of__entryOutputStream_18() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3108803499, ____entryOutputStream_18)); }
	inline CrcCalculatorStream_t2652117568 * get__entryOutputStream_18() const { return ____entryOutputStream_18; }
	inline CrcCalculatorStream_t2652117568 ** get_address_of__entryOutputStream_18() { return &____entryOutputStream_18; }
	inline void set__entryOutputStream_18(CrcCalculatorStream_t2652117568 * value)
	{
		____entryOutputStream_18 = value;
		Il2CppCodeGenWriteBarrier(&____entryOutputStream_18, value);
	}

	inline static int32_t get_offset_of__needToWriteEntryHeader_19() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3108803499, ____needToWriteEntryHeader_19)); }
	inline bool get__needToWriteEntryHeader_19() const { return ____needToWriteEntryHeader_19; }
	inline bool* get_address_of__needToWriteEntryHeader_19() { return &____needToWriteEntryHeader_19; }
	inline void set__needToWriteEntryHeader_19(bool value)
	{
		____needToWriteEntryHeader_19 = value;
	}

	inline static int32_t get_offset_of__name_20() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3108803499, ____name_20)); }
	inline String_t* get__name_20() const { return ____name_20; }
	inline String_t** get_address_of__name_20() { return &____name_20; }
	inline void set__name_20(String_t* value)
	{
		____name_20 = value;
		Il2CppCodeGenWriteBarrier(&____name_20, value);
	}

	inline static int32_t get_offset_of_ParallelDeflater_21() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3108803499, ___ParallelDeflater_21)); }
	inline ParallelDeflateOutputStream_t3413079424 * get_ParallelDeflater_21() const { return ___ParallelDeflater_21; }
	inline ParallelDeflateOutputStream_t3413079424 ** get_address_of_ParallelDeflater_21() { return &___ParallelDeflater_21; }
	inline void set_ParallelDeflater_21(ParallelDeflateOutputStream_t3413079424 * value)
	{
		___ParallelDeflater_21 = value;
		Il2CppCodeGenWriteBarrier(&___ParallelDeflater_21, value);
	}

	inline static int32_t get_offset_of__ParallelDeflateThreshold_22() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3108803499, ____ParallelDeflateThreshold_22)); }
	inline int64_t get__ParallelDeflateThreshold_22() const { return ____ParallelDeflateThreshold_22; }
	inline int64_t* get_address_of__ParallelDeflateThreshold_22() { return &____ParallelDeflateThreshold_22; }
	inline void set__ParallelDeflateThreshold_22(int64_t value)
	{
		____ParallelDeflateThreshold_22 = value;
	}

	inline static int32_t get_offset_of__maxBufferPairs_23() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3108803499, ____maxBufferPairs_23)); }
	inline int32_t get__maxBufferPairs_23() const { return ____maxBufferPairs_23; }
	inline int32_t* get_address_of__maxBufferPairs_23() { return &____maxBufferPairs_23; }
	inline void set__maxBufferPairs_23(int32_t value)
	{
		____maxBufferPairs_23 = value;
	}

	inline static int32_t get_offset_of_U3CCodecBufferSizeU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3108803499, ___U3CCodecBufferSizeU3Ek__BackingField_24)); }
	inline int32_t get_U3CCodecBufferSizeU3Ek__BackingField_24() const { return ___U3CCodecBufferSizeU3Ek__BackingField_24; }
	inline int32_t* get_address_of_U3CCodecBufferSizeU3Ek__BackingField_24() { return &___U3CCodecBufferSizeU3Ek__BackingField_24; }
	inline void set_U3CCodecBufferSizeU3Ek__BackingField_24(int32_t value)
	{
		___U3CCodecBufferSizeU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CStrategyU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3108803499, ___U3CStrategyU3Ek__BackingField_25)); }
	inline int32_t get_U3CStrategyU3Ek__BackingField_25() const { return ___U3CStrategyU3Ek__BackingField_25; }
	inline int32_t* get_address_of_U3CStrategyU3Ek__BackingField_25() { return &___U3CStrategyU3Ek__BackingField_25; }
	inline void set_U3CStrategyU3Ek__BackingField_25(int32_t value)
	{
		___U3CStrategyU3Ek__BackingField_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
