#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.Ionic.Zlib.ZlibCodec
struct ZlibCodec_t1793744486;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.IO.Stream
struct Stream_t219029575;
// Pathfinding.Ionic.Crc.CRC32
struct CRC32_t926500445;
// System.String
struct String_t;

#include "mscorlib_System_IO_Stream219029575.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zli798497123.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl1868319673.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl3760332100.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl3811158916.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl1823839577.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zli211972692.h"
#include "mscorlib_System_DateTime339033936.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.ZlibBaseStream
struct  ZlibBaseStream_t2399924087  : public Stream_t219029575
{
public:
	// Pathfinding.Ionic.Zlib.ZlibCodec Pathfinding.Ionic.Zlib.ZlibBaseStream::_z
	ZlibCodec_t1793744486 * ____z_1;
	// Pathfinding.Ionic.Zlib.ZlibBaseStream/StreamMode Pathfinding.Ionic.Zlib.ZlibBaseStream::_streamMode
	int32_t ____streamMode_2;
	// Pathfinding.Ionic.Zlib.FlushType Pathfinding.Ionic.Zlib.ZlibBaseStream::_flushMode
	int32_t ____flushMode_3;
	// Pathfinding.Ionic.Zlib.ZlibStreamFlavor Pathfinding.Ionic.Zlib.ZlibBaseStream::_flavor
	int32_t ____flavor_4;
	// Pathfinding.Ionic.Zlib.CompressionMode Pathfinding.Ionic.Zlib.ZlibBaseStream::_compressionMode
	int32_t ____compressionMode_5;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zlib.ZlibBaseStream::_level
	int32_t ____level_6;
	// System.Boolean Pathfinding.Ionic.Zlib.ZlibBaseStream::_leaveOpen
	bool ____leaveOpen_7;
	// System.Byte[] Pathfinding.Ionic.Zlib.ZlibBaseStream::_workingBuffer
	ByteU5BU5D_t58506160* ____workingBuffer_8;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibBaseStream::_bufferSize
	int32_t ____bufferSize_9;
	// System.Byte[] Pathfinding.Ionic.Zlib.ZlibBaseStream::_buf1
	ByteU5BU5D_t58506160* ____buf1_10;
	// System.IO.Stream Pathfinding.Ionic.Zlib.ZlibBaseStream::_stream
	Stream_t219029575 * ____stream_11;
	// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zlib.ZlibBaseStream::Strategy
	int32_t ___Strategy_12;
	// Pathfinding.Ionic.Crc.CRC32 Pathfinding.Ionic.Zlib.ZlibBaseStream::crc
	CRC32_t926500445 * ___crc_13;
	// System.String Pathfinding.Ionic.Zlib.ZlibBaseStream::_GzipFileName
	String_t* ____GzipFileName_14;
	// System.String Pathfinding.Ionic.Zlib.ZlibBaseStream::_GzipComment
	String_t* ____GzipComment_15;
	// System.DateTime Pathfinding.Ionic.Zlib.ZlibBaseStream::_GzipMtime
	DateTime_t339033936  ____GzipMtime_16;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibBaseStream::_gzipHeaderByteCount
	int32_t ____gzipHeaderByteCount_17;
	// System.Boolean Pathfinding.Ionic.Zlib.ZlibBaseStream::nomoreinput
	bool ___nomoreinput_18;

public:
	inline static int32_t get_offset_of__z_1() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t2399924087, ____z_1)); }
	inline ZlibCodec_t1793744486 * get__z_1() const { return ____z_1; }
	inline ZlibCodec_t1793744486 ** get_address_of__z_1() { return &____z_1; }
	inline void set__z_1(ZlibCodec_t1793744486 * value)
	{
		____z_1 = value;
		Il2CppCodeGenWriteBarrier(&____z_1, value);
	}

	inline static int32_t get_offset_of__streamMode_2() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t2399924087, ____streamMode_2)); }
	inline int32_t get__streamMode_2() const { return ____streamMode_2; }
	inline int32_t* get_address_of__streamMode_2() { return &____streamMode_2; }
	inline void set__streamMode_2(int32_t value)
	{
		____streamMode_2 = value;
	}

	inline static int32_t get_offset_of__flushMode_3() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t2399924087, ____flushMode_3)); }
	inline int32_t get__flushMode_3() const { return ____flushMode_3; }
	inline int32_t* get_address_of__flushMode_3() { return &____flushMode_3; }
	inline void set__flushMode_3(int32_t value)
	{
		____flushMode_3 = value;
	}

	inline static int32_t get_offset_of__flavor_4() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t2399924087, ____flavor_4)); }
	inline int32_t get__flavor_4() const { return ____flavor_4; }
	inline int32_t* get_address_of__flavor_4() { return &____flavor_4; }
	inline void set__flavor_4(int32_t value)
	{
		____flavor_4 = value;
	}

	inline static int32_t get_offset_of__compressionMode_5() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t2399924087, ____compressionMode_5)); }
	inline int32_t get__compressionMode_5() const { return ____compressionMode_5; }
	inline int32_t* get_address_of__compressionMode_5() { return &____compressionMode_5; }
	inline void set__compressionMode_5(int32_t value)
	{
		____compressionMode_5 = value;
	}

	inline static int32_t get_offset_of__level_6() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t2399924087, ____level_6)); }
	inline int32_t get__level_6() const { return ____level_6; }
	inline int32_t* get_address_of__level_6() { return &____level_6; }
	inline void set__level_6(int32_t value)
	{
		____level_6 = value;
	}

	inline static int32_t get_offset_of__leaveOpen_7() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t2399924087, ____leaveOpen_7)); }
	inline bool get__leaveOpen_7() const { return ____leaveOpen_7; }
	inline bool* get_address_of__leaveOpen_7() { return &____leaveOpen_7; }
	inline void set__leaveOpen_7(bool value)
	{
		____leaveOpen_7 = value;
	}

	inline static int32_t get_offset_of__workingBuffer_8() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t2399924087, ____workingBuffer_8)); }
	inline ByteU5BU5D_t58506160* get__workingBuffer_8() const { return ____workingBuffer_8; }
	inline ByteU5BU5D_t58506160** get_address_of__workingBuffer_8() { return &____workingBuffer_8; }
	inline void set__workingBuffer_8(ByteU5BU5D_t58506160* value)
	{
		____workingBuffer_8 = value;
		Il2CppCodeGenWriteBarrier(&____workingBuffer_8, value);
	}

	inline static int32_t get_offset_of__bufferSize_9() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t2399924087, ____bufferSize_9)); }
	inline int32_t get__bufferSize_9() const { return ____bufferSize_9; }
	inline int32_t* get_address_of__bufferSize_9() { return &____bufferSize_9; }
	inline void set__bufferSize_9(int32_t value)
	{
		____bufferSize_9 = value;
	}

	inline static int32_t get_offset_of__buf1_10() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t2399924087, ____buf1_10)); }
	inline ByteU5BU5D_t58506160* get__buf1_10() const { return ____buf1_10; }
	inline ByteU5BU5D_t58506160** get_address_of__buf1_10() { return &____buf1_10; }
	inline void set__buf1_10(ByteU5BU5D_t58506160* value)
	{
		____buf1_10 = value;
		Il2CppCodeGenWriteBarrier(&____buf1_10, value);
	}

	inline static int32_t get_offset_of__stream_11() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t2399924087, ____stream_11)); }
	inline Stream_t219029575 * get__stream_11() const { return ____stream_11; }
	inline Stream_t219029575 ** get_address_of__stream_11() { return &____stream_11; }
	inline void set__stream_11(Stream_t219029575 * value)
	{
		____stream_11 = value;
		Il2CppCodeGenWriteBarrier(&____stream_11, value);
	}

	inline static int32_t get_offset_of_Strategy_12() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t2399924087, ___Strategy_12)); }
	inline int32_t get_Strategy_12() const { return ___Strategy_12; }
	inline int32_t* get_address_of_Strategy_12() { return &___Strategy_12; }
	inline void set_Strategy_12(int32_t value)
	{
		___Strategy_12 = value;
	}

	inline static int32_t get_offset_of_crc_13() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t2399924087, ___crc_13)); }
	inline CRC32_t926500445 * get_crc_13() const { return ___crc_13; }
	inline CRC32_t926500445 ** get_address_of_crc_13() { return &___crc_13; }
	inline void set_crc_13(CRC32_t926500445 * value)
	{
		___crc_13 = value;
		Il2CppCodeGenWriteBarrier(&___crc_13, value);
	}

	inline static int32_t get_offset_of__GzipFileName_14() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t2399924087, ____GzipFileName_14)); }
	inline String_t* get__GzipFileName_14() const { return ____GzipFileName_14; }
	inline String_t** get_address_of__GzipFileName_14() { return &____GzipFileName_14; }
	inline void set__GzipFileName_14(String_t* value)
	{
		____GzipFileName_14 = value;
		Il2CppCodeGenWriteBarrier(&____GzipFileName_14, value);
	}

	inline static int32_t get_offset_of__GzipComment_15() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t2399924087, ____GzipComment_15)); }
	inline String_t* get__GzipComment_15() const { return ____GzipComment_15; }
	inline String_t** get_address_of__GzipComment_15() { return &____GzipComment_15; }
	inline void set__GzipComment_15(String_t* value)
	{
		____GzipComment_15 = value;
		Il2CppCodeGenWriteBarrier(&____GzipComment_15, value);
	}

	inline static int32_t get_offset_of__GzipMtime_16() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t2399924087, ____GzipMtime_16)); }
	inline DateTime_t339033936  get__GzipMtime_16() const { return ____GzipMtime_16; }
	inline DateTime_t339033936 * get_address_of__GzipMtime_16() { return &____GzipMtime_16; }
	inline void set__GzipMtime_16(DateTime_t339033936  value)
	{
		____GzipMtime_16 = value;
	}

	inline static int32_t get_offset_of__gzipHeaderByteCount_17() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t2399924087, ____gzipHeaderByteCount_17)); }
	inline int32_t get__gzipHeaderByteCount_17() const { return ____gzipHeaderByteCount_17; }
	inline int32_t* get_address_of__gzipHeaderByteCount_17() { return &____gzipHeaderByteCount_17; }
	inline void set__gzipHeaderByteCount_17(int32_t value)
	{
		____gzipHeaderByteCount_17 = value;
	}

	inline static int32_t get_offset_of_nomoreinput_18() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t2399924087, ___nomoreinput_18)); }
	inline bool get_nomoreinput_18() const { return ___nomoreinput_18; }
	inline bool* get_address_of_nomoreinput_18() { return &___nomoreinput_18; }
	inline void set_nomoreinput_18(bool value)
	{
		___nomoreinput_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
