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

#include "mscorlib_System_IO_Stream219029575.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi2459893160.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ZipSegmentedStream
struct  ZipSegmentedStream_t2657727002  : public Stream_t219029575
{
public:
	// Pathfinding.Ionic.Zip.ZipSegmentedStream/RwMode Pathfinding.Ionic.Zip.ZipSegmentedStream::rwMode
	int32_t ___rwMode_1;
	// System.Boolean Pathfinding.Ionic.Zip.ZipSegmentedStream::_exceptionPending
	bool ____exceptionPending_2;
	// System.String Pathfinding.Ionic.Zip.ZipSegmentedStream::_baseName
	String_t* ____baseName_3;
	// System.String Pathfinding.Ionic.Zip.ZipSegmentedStream::_baseDir
	String_t* ____baseDir_4;
	// System.String Pathfinding.Ionic.Zip.ZipSegmentedStream::_currentName
	String_t* ____currentName_5;
	// System.String Pathfinding.Ionic.Zip.ZipSegmentedStream::_currentTempName
	String_t* ____currentTempName_6;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipSegmentedStream::_currentDiskNumber
	uint32_t ____currentDiskNumber_7;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipSegmentedStream::_maxDiskNumber
	uint32_t ____maxDiskNumber_8;
	// System.Int32 Pathfinding.Ionic.Zip.ZipSegmentedStream::_maxSegmentSize
	int32_t ____maxSegmentSize_9;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipSegmentedStream::_innerStream
	Stream_t219029575 * ____innerStream_10;
	// System.Boolean Pathfinding.Ionic.Zip.ZipSegmentedStream::<ContiguousWrite>k__BackingField
	bool ___U3CContiguousWriteU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_rwMode_1() { return static_cast<int32_t>(offsetof(ZipSegmentedStream_t2657727002, ___rwMode_1)); }
	inline int32_t get_rwMode_1() const { return ___rwMode_1; }
	inline int32_t* get_address_of_rwMode_1() { return &___rwMode_1; }
	inline void set_rwMode_1(int32_t value)
	{
		___rwMode_1 = value;
	}

	inline static int32_t get_offset_of__exceptionPending_2() { return static_cast<int32_t>(offsetof(ZipSegmentedStream_t2657727002, ____exceptionPending_2)); }
	inline bool get__exceptionPending_2() const { return ____exceptionPending_2; }
	inline bool* get_address_of__exceptionPending_2() { return &____exceptionPending_2; }
	inline void set__exceptionPending_2(bool value)
	{
		____exceptionPending_2 = value;
	}

	inline static int32_t get_offset_of__baseName_3() { return static_cast<int32_t>(offsetof(ZipSegmentedStream_t2657727002, ____baseName_3)); }
	inline String_t* get__baseName_3() const { return ____baseName_3; }
	inline String_t** get_address_of__baseName_3() { return &____baseName_3; }
	inline void set__baseName_3(String_t* value)
	{
		____baseName_3 = value;
		Il2CppCodeGenWriteBarrier(&____baseName_3, value);
	}

	inline static int32_t get_offset_of__baseDir_4() { return static_cast<int32_t>(offsetof(ZipSegmentedStream_t2657727002, ____baseDir_4)); }
	inline String_t* get__baseDir_4() const { return ____baseDir_4; }
	inline String_t** get_address_of__baseDir_4() { return &____baseDir_4; }
	inline void set__baseDir_4(String_t* value)
	{
		____baseDir_4 = value;
		Il2CppCodeGenWriteBarrier(&____baseDir_4, value);
	}

	inline static int32_t get_offset_of__currentName_5() { return static_cast<int32_t>(offsetof(ZipSegmentedStream_t2657727002, ____currentName_5)); }
	inline String_t* get__currentName_5() const { return ____currentName_5; }
	inline String_t** get_address_of__currentName_5() { return &____currentName_5; }
	inline void set__currentName_5(String_t* value)
	{
		____currentName_5 = value;
		Il2CppCodeGenWriteBarrier(&____currentName_5, value);
	}

	inline static int32_t get_offset_of__currentTempName_6() { return static_cast<int32_t>(offsetof(ZipSegmentedStream_t2657727002, ____currentTempName_6)); }
	inline String_t* get__currentTempName_6() const { return ____currentTempName_6; }
	inline String_t** get_address_of__currentTempName_6() { return &____currentTempName_6; }
	inline void set__currentTempName_6(String_t* value)
	{
		____currentTempName_6 = value;
		Il2CppCodeGenWriteBarrier(&____currentTempName_6, value);
	}

	inline static int32_t get_offset_of__currentDiskNumber_7() { return static_cast<int32_t>(offsetof(ZipSegmentedStream_t2657727002, ____currentDiskNumber_7)); }
	inline uint32_t get__currentDiskNumber_7() const { return ____currentDiskNumber_7; }
	inline uint32_t* get_address_of__currentDiskNumber_7() { return &____currentDiskNumber_7; }
	inline void set__currentDiskNumber_7(uint32_t value)
	{
		____currentDiskNumber_7 = value;
	}

	inline static int32_t get_offset_of__maxDiskNumber_8() { return static_cast<int32_t>(offsetof(ZipSegmentedStream_t2657727002, ____maxDiskNumber_8)); }
	inline uint32_t get__maxDiskNumber_8() const { return ____maxDiskNumber_8; }
	inline uint32_t* get_address_of__maxDiskNumber_8() { return &____maxDiskNumber_8; }
	inline void set__maxDiskNumber_8(uint32_t value)
	{
		____maxDiskNumber_8 = value;
	}

	inline static int32_t get_offset_of__maxSegmentSize_9() { return static_cast<int32_t>(offsetof(ZipSegmentedStream_t2657727002, ____maxSegmentSize_9)); }
	inline int32_t get__maxSegmentSize_9() const { return ____maxSegmentSize_9; }
	inline int32_t* get_address_of__maxSegmentSize_9() { return &____maxSegmentSize_9; }
	inline void set__maxSegmentSize_9(int32_t value)
	{
		____maxSegmentSize_9 = value;
	}

	inline static int32_t get_offset_of__innerStream_10() { return static_cast<int32_t>(offsetof(ZipSegmentedStream_t2657727002, ____innerStream_10)); }
	inline Stream_t219029575 * get__innerStream_10() const { return ____innerStream_10; }
	inline Stream_t219029575 ** get_address_of__innerStream_10() { return &____innerStream_10; }
	inline void set__innerStream_10(Stream_t219029575 * value)
	{
		____innerStream_10 = value;
		Il2CppCodeGenWriteBarrier(&____innerStream_10, value);
	}

	inline static int32_t get_offset_of_U3CContiguousWriteU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(ZipSegmentedStream_t2657727002, ___U3CContiguousWriteU3Ek__BackingField_11)); }
	inline bool get_U3CContiguousWriteU3Ek__BackingField_11() const { return ___U3CContiguousWriteU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CContiguousWriteU3Ek__BackingField_11() { return &___U3CContiguousWriteU3Ek__BackingField_11; }
	inline void set_U3CContiguousWriteU3Ek__BackingField_11(bool value)
	{
		___U3CContiguousWriteU3Ek__BackingField_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
