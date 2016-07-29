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
// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t495942682;
// Pathfinding.Ionic.Crc.CrcCalculatorStream
struct CrcCalculatorStream_t2652117568;
// System.String
struct String_t;

#include "mscorlib_System_IO_Stream219029575.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ZipInputStream
struct  ZipInputStream_t225717330  : public Stream_t219029575
{
public:
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipInputStream::_inputStream
	Stream_t219029575 * ____inputStream_1;
	// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipInputStream::_currentEntry
	ZipEntry_t495942682 * ____currentEntry_2;
	// System.Boolean Pathfinding.Ionic.Zip.ZipInputStream::_needSetup
	bool ____needSetup_3;
	// Pathfinding.Ionic.Crc.CrcCalculatorStream Pathfinding.Ionic.Zip.ZipInputStream::_crcStream
	CrcCalculatorStream_t2652117568 * ____crcStream_4;
	// System.Int64 Pathfinding.Ionic.Zip.ZipInputStream::_LeftToRead
	int64_t ____LeftToRead_5;
	// System.String Pathfinding.Ionic.Zip.ZipInputStream::_Password
	String_t* ____Password_6;
	// System.Int64 Pathfinding.Ionic.Zip.ZipInputStream::_endOfEntry
	int64_t ____endOfEntry_7;
	// System.String Pathfinding.Ionic.Zip.ZipInputStream::_name
	String_t* ____name_8;
	// System.Boolean Pathfinding.Ionic.Zip.ZipInputStream::_leaveUnderlyingStreamOpen
	bool ____leaveUnderlyingStreamOpen_9;
	// System.Boolean Pathfinding.Ionic.Zip.ZipInputStream::_closed
	bool ____closed_10;
	// System.Boolean Pathfinding.Ionic.Zip.ZipInputStream::_findRequired
	bool ____findRequired_11;
	// System.Boolean Pathfinding.Ionic.Zip.ZipInputStream::_exceptionPending
	bool ____exceptionPending_12;
	// System.Int32 Pathfinding.Ionic.Zip.ZipInputStream::<CodecBufferSize>k__BackingField
	int32_t ___U3CCodecBufferSizeU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of__inputStream_1() { return static_cast<int32_t>(offsetof(ZipInputStream_t225717330, ____inputStream_1)); }
	inline Stream_t219029575 * get__inputStream_1() const { return ____inputStream_1; }
	inline Stream_t219029575 ** get_address_of__inputStream_1() { return &____inputStream_1; }
	inline void set__inputStream_1(Stream_t219029575 * value)
	{
		____inputStream_1 = value;
		Il2CppCodeGenWriteBarrier(&____inputStream_1, value);
	}

	inline static int32_t get_offset_of__currentEntry_2() { return static_cast<int32_t>(offsetof(ZipInputStream_t225717330, ____currentEntry_2)); }
	inline ZipEntry_t495942682 * get__currentEntry_2() const { return ____currentEntry_2; }
	inline ZipEntry_t495942682 ** get_address_of__currentEntry_2() { return &____currentEntry_2; }
	inline void set__currentEntry_2(ZipEntry_t495942682 * value)
	{
		____currentEntry_2 = value;
		Il2CppCodeGenWriteBarrier(&____currentEntry_2, value);
	}

	inline static int32_t get_offset_of__needSetup_3() { return static_cast<int32_t>(offsetof(ZipInputStream_t225717330, ____needSetup_3)); }
	inline bool get__needSetup_3() const { return ____needSetup_3; }
	inline bool* get_address_of__needSetup_3() { return &____needSetup_3; }
	inline void set__needSetup_3(bool value)
	{
		____needSetup_3 = value;
	}

	inline static int32_t get_offset_of__crcStream_4() { return static_cast<int32_t>(offsetof(ZipInputStream_t225717330, ____crcStream_4)); }
	inline CrcCalculatorStream_t2652117568 * get__crcStream_4() const { return ____crcStream_4; }
	inline CrcCalculatorStream_t2652117568 ** get_address_of__crcStream_4() { return &____crcStream_4; }
	inline void set__crcStream_4(CrcCalculatorStream_t2652117568 * value)
	{
		____crcStream_4 = value;
		Il2CppCodeGenWriteBarrier(&____crcStream_4, value);
	}

	inline static int32_t get_offset_of__LeftToRead_5() { return static_cast<int32_t>(offsetof(ZipInputStream_t225717330, ____LeftToRead_5)); }
	inline int64_t get__LeftToRead_5() const { return ____LeftToRead_5; }
	inline int64_t* get_address_of__LeftToRead_5() { return &____LeftToRead_5; }
	inline void set__LeftToRead_5(int64_t value)
	{
		____LeftToRead_5 = value;
	}

	inline static int32_t get_offset_of__Password_6() { return static_cast<int32_t>(offsetof(ZipInputStream_t225717330, ____Password_6)); }
	inline String_t* get__Password_6() const { return ____Password_6; }
	inline String_t** get_address_of__Password_6() { return &____Password_6; }
	inline void set__Password_6(String_t* value)
	{
		____Password_6 = value;
		Il2CppCodeGenWriteBarrier(&____Password_6, value);
	}

	inline static int32_t get_offset_of__endOfEntry_7() { return static_cast<int32_t>(offsetof(ZipInputStream_t225717330, ____endOfEntry_7)); }
	inline int64_t get__endOfEntry_7() const { return ____endOfEntry_7; }
	inline int64_t* get_address_of__endOfEntry_7() { return &____endOfEntry_7; }
	inline void set__endOfEntry_7(int64_t value)
	{
		____endOfEntry_7 = value;
	}

	inline static int32_t get_offset_of__name_8() { return static_cast<int32_t>(offsetof(ZipInputStream_t225717330, ____name_8)); }
	inline String_t* get__name_8() const { return ____name_8; }
	inline String_t** get_address_of__name_8() { return &____name_8; }
	inline void set__name_8(String_t* value)
	{
		____name_8 = value;
		Il2CppCodeGenWriteBarrier(&____name_8, value);
	}

	inline static int32_t get_offset_of__leaveUnderlyingStreamOpen_9() { return static_cast<int32_t>(offsetof(ZipInputStream_t225717330, ____leaveUnderlyingStreamOpen_9)); }
	inline bool get__leaveUnderlyingStreamOpen_9() const { return ____leaveUnderlyingStreamOpen_9; }
	inline bool* get_address_of__leaveUnderlyingStreamOpen_9() { return &____leaveUnderlyingStreamOpen_9; }
	inline void set__leaveUnderlyingStreamOpen_9(bool value)
	{
		____leaveUnderlyingStreamOpen_9 = value;
	}

	inline static int32_t get_offset_of__closed_10() { return static_cast<int32_t>(offsetof(ZipInputStream_t225717330, ____closed_10)); }
	inline bool get__closed_10() const { return ____closed_10; }
	inline bool* get_address_of__closed_10() { return &____closed_10; }
	inline void set__closed_10(bool value)
	{
		____closed_10 = value;
	}

	inline static int32_t get_offset_of__findRequired_11() { return static_cast<int32_t>(offsetof(ZipInputStream_t225717330, ____findRequired_11)); }
	inline bool get__findRequired_11() const { return ____findRequired_11; }
	inline bool* get_address_of__findRequired_11() { return &____findRequired_11; }
	inline void set__findRequired_11(bool value)
	{
		____findRequired_11 = value;
	}

	inline static int32_t get_offset_of__exceptionPending_12() { return static_cast<int32_t>(offsetof(ZipInputStream_t225717330, ____exceptionPending_12)); }
	inline bool get__exceptionPending_12() const { return ____exceptionPending_12; }
	inline bool* get_address_of__exceptionPending_12() { return &____exceptionPending_12; }
	inline void set__exceptionPending_12(bool value)
	{
		____exceptionPending_12 = value;
	}

	inline static int32_t get_offset_of_U3CCodecBufferSizeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(ZipInputStream_t225717330, ___U3CCodecBufferSizeU3Ek__BackingField_13)); }
	inline int32_t get_U3CCodecBufferSizeU3Ek__BackingField_13() const { return ___U3CCodecBufferSizeU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CCodecBufferSizeU3Ek__BackingField_13() { return &___U3CCodecBufferSizeU3Ek__BackingField_13; }
	inline void set_U3CCodecBufferSizeU3Ek__BackingField_13(int32_t value)
	{
		___U3CCodecBufferSizeU3Ek__BackingField_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
