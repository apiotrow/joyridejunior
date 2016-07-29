#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Pathfinding.Ionic.Zlib.WorkItem>
struct List_1_t1337514584;
// System.IO.Stream
struct Stream_t219029575;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t1189026461;
// System.Object
struct Il2CppObject;
// Pathfinding.Ionic.Crc.CRC32
struct CRC32_t926500445;
// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t260535031;
// System.Exception modreq(System.Runtime.CompilerServices.IsVolatile)
struct Exception_t1967233988;

#include "mscorlib_System_IO_Stream219029575.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl1823839577.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl2727706571.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zli211972692.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream
struct  ParallelDeflateOutputStream_t3413079424  : public Stream_t219029575
{
public:
	// System.Collections.Generic.List`1<Pathfinding.Ionic.Zlib.WorkItem> Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_pool
	List_1_t1337514584 * ____pool_3;
	// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_leaveOpen
	bool ____leaveOpen_4;
	// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::emitting
	bool ___emitting_5;
	// System.IO.Stream Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_outStream
	Stream_t219029575 * ____outStream_6;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_maxBufferPairs
	int32_t ____maxBufferPairs_7;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_bufferSize
	int32_t ____bufferSize_8;
	// System.Threading.AutoResetEvent Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_newlyCompressedBlob
	AutoResetEvent_t1189026461 * ____newlyCompressedBlob_9;
	// System.Object Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_outputLock
	Il2CppObject * ____outputLock_10;
	// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_isClosed
	bool ____isClosed_11;
	// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_firstWriteDone
	bool ____firstWriteDone_12;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_currentlyFilling
	int32_t ____currentlyFilling_13;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_lastFilled
	int32_t ____lastFilled_14;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_lastWritten
	int32_t ____lastWritten_15;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_latestCompressed
	int32_t ____latestCompressed_16;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_Crc32
	int32_t ____Crc32_17;
	// Pathfinding.Ionic.Crc.CRC32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_runningCrc
	CRC32_t926500445 * ____runningCrc_18;
	// System.Object Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_latestLock
	Il2CppObject * ____latestLock_19;
	// System.Collections.Generic.Queue`1<System.Int32> Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_toWrite
	Queue_1_t260535031 * ____toWrite_20;
	// System.Collections.Generic.Queue`1<System.Int32> Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_toFill
	Queue_1_t260535031 * ____toFill_21;
	// System.Int64 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_totalBytesProcessed
	int64_t ____totalBytesProcessed_22;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_compressLevel
	int32_t ____compressLevel_23;
	// System.Exception modreq(System.Runtime.CompilerServices.IsVolatile) Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_pendingException
	Exception_t1967233988 * ____pendingException_24;
	// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_handlingException
	bool ____handlingException_25;
	// System.Object Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_eLock
	Il2CppObject * ____eLock_26;
	// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream/TraceBits Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_DesiredTrace
	uint32_t ____DesiredTrace_27;
	// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::<Strategy>k__BackingField
	int32_t ___U3CStrategyU3Ek__BackingField_28;

public:
	inline static int32_t get_offset_of__pool_3() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424, ____pool_3)); }
	inline List_1_t1337514584 * get__pool_3() const { return ____pool_3; }
	inline List_1_t1337514584 ** get_address_of__pool_3() { return &____pool_3; }
	inline void set__pool_3(List_1_t1337514584 * value)
	{
		____pool_3 = value;
		Il2CppCodeGenWriteBarrier(&____pool_3, value);
	}

	inline static int32_t get_offset_of__leaveOpen_4() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424, ____leaveOpen_4)); }
	inline bool get__leaveOpen_4() const { return ____leaveOpen_4; }
	inline bool* get_address_of__leaveOpen_4() { return &____leaveOpen_4; }
	inline void set__leaveOpen_4(bool value)
	{
		____leaveOpen_4 = value;
	}

	inline static int32_t get_offset_of_emitting_5() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424, ___emitting_5)); }
	inline bool get_emitting_5() const { return ___emitting_5; }
	inline bool* get_address_of_emitting_5() { return &___emitting_5; }
	inline void set_emitting_5(bool value)
	{
		___emitting_5 = value;
	}

	inline static int32_t get_offset_of__outStream_6() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424, ____outStream_6)); }
	inline Stream_t219029575 * get__outStream_6() const { return ____outStream_6; }
	inline Stream_t219029575 ** get_address_of__outStream_6() { return &____outStream_6; }
	inline void set__outStream_6(Stream_t219029575 * value)
	{
		____outStream_6 = value;
		Il2CppCodeGenWriteBarrier(&____outStream_6, value);
	}

	inline static int32_t get_offset_of__maxBufferPairs_7() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424, ____maxBufferPairs_7)); }
	inline int32_t get__maxBufferPairs_7() const { return ____maxBufferPairs_7; }
	inline int32_t* get_address_of__maxBufferPairs_7() { return &____maxBufferPairs_7; }
	inline void set__maxBufferPairs_7(int32_t value)
	{
		____maxBufferPairs_7 = value;
	}

	inline static int32_t get_offset_of__bufferSize_8() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424, ____bufferSize_8)); }
	inline int32_t get__bufferSize_8() const { return ____bufferSize_8; }
	inline int32_t* get_address_of__bufferSize_8() { return &____bufferSize_8; }
	inline void set__bufferSize_8(int32_t value)
	{
		____bufferSize_8 = value;
	}

	inline static int32_t get_offset_of__newlyCompressedBlob_9() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424, ____newlyCompressedBlob_9)); }
	inline AutoResetEvent_t1189026461 * get__newlyCompressedBlob_9() const { return ____newlyCompressedBlob_9; }
	inline AutoResetEvent_t1189026461 ** get_address_of__newlyCompressedBlob_9() { return &____newlyCompressedBlob_9; }
	inline void set__newlyCompressedBlob_9(AutoResetEvent_t1189026461 * value)
	{
		____newlyCompressedBlob_9 = value;
		Il2CppCodeGenWriteBarrier(&____newlyCompressedBlob_9, value);
	}

	inline static int32_t get_offset_of__outputLock_10() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424, ____outputLock_10)); }
	inline Il2CppObject * get__outputLock_10() const { return ____outputLock_10; }
	inline Il2CppObject ** get_address_of__outputLock_10() { return &____outputLock_10; }
	inline void set__outputLock_10(Il2CppObject * value)
	{
		____outputLock_10 = value;
		Il2CppCodeGenWriteBarrier(&____outputLock_10, value);
	}

	inline static int32_t get_offset_of__isClosed_11() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424, ____isClosed_11)); }
	inline bool get__isClosed_11() const { return ____isClosed_11; }
	inline bool* get_address_of__isClosed_11() { return &____isClosed_11; }
	inline void set__isClosed_11(bool value)
	{
		____isClosed_11 = value;
	}

	inline static int32_t get_offset_of__firstWriteDone_12() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424, ____firstWriteDone_12)); }
	inline bool get__firstWriteDone_12() const { return ____firstWriteDone_12; }
	inline bool* get_address_of__firstWriteDone_12() { return &____firstWriteDone_12; }
	inline void set__firstWriteDone_12(bool value)
	{
		____firstWriteDone_12 = value;
	}

	inline static int32_t get_offset_of__currentlyFilling_13() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424, ____currentlyFilling_13)); }
	inline int32_t get__currentlyFilling_13() const { return ____currentlyFilling_13; }
	inline int32_t* get_address_of__currentlyFilling_13() { return &____currentlyFilling_13; }
	inline void set__currentlyFilling_13(int32_t value)
	{
		____currentlyFilling_13 = value;
	}

	inline static int32_t get_offset_of__lastFilled_14() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424, ____lastFilled_14)); }
	inline int32_t get__lastFilled_14() const { return ____lastFilled_14; }
	inline int32_t* get_address_of__lastFilled_14() { return &____lastFilled_14; }
	inline void set__lastFilled_14(int32_t value)
	{
		____lastFilled_14 = value;
	}

	inline static int32_t get_offset_of__lastWritten_15() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424, ____lastWritten_15)); }
	inline int32_t get__lastWritten_15() const { return ____lastWritten_15; }
	inline int32_t* get_address_of__lastWritten_15() { return &____lastWritten_15; }
	inline void set__lastWritten_15(int32_t value)
	{
		____lastWritten_15 = value;
	}

	inline static int32_t get_offset_of__latestCompressed_16() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424, ____latestCompressed_16)); }
	inline int32_t get__latestCompressed_16() const { return ____latestCompressed_16; }
	inline int32_t* get_address_of__latestCompressed_16() { return &____latestCompressed_16; }
	inline void set__latestCompressed_16(int32_t value)
	{
		____latestCompressed_16 = value;
	}

	inline static int32_t get_offset_of__Crc32_17() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424, ____Crc32_17)); }
	inline int32_t get__Crc32_17() const { return ____Crc32_17; }
	inline int32_t* get_address_of__Crc32_17() { return &____Crc32_17; }
	inline void set__Crc32_17(int32_t value)
	{
		____Crc32_17 = value;
	}

	inline static int32_t get_offset_of__runningCrc_18() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424, ____runningCrc_18)); }
	inline CRC32_t926500445 * get__runningCrc_18() const { return ____runningCrc_18; }
	inline CRC32_t926500445 ** get_address_of__runningCrc_18() { return &____runningCrc_18; }
	inline void set__runningCrc_18(CRC32_t926500445 * value)
	{
		____runningCrc_18 = value;
		Il2CppCodeGenWriteBarrier(&____runningCrc_18, value);
	}

	inline static int32_t get_offset_of__latestLock_19() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424, ____latestLock_19)); }
	inline Il2CppObject * get__latestLock_19() const { return ____latestLock_19; }
	inline Il2CppObject ** get_address_of__latestLock_19() { return &____latestLock_19; }
	inline void set__latestLock_19(Il2CppObject * value)
	{
		____latestLock_19 = value;
		Il2CppCodeGenWriteBarrier(&____latestLock_19, value);
	}

	inline static int32_t get_offset_of__toWrite_20() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424, ____toWrite_20)); }
	inline Queue_1_t260535031 * get__toWrite_20() const { return ____toWrite_20; }
	inline Queue_1_t260535031 ** get_address_of__toWrite_20() { return &____toWrite_20; }
	inline void set__toWrite_20(Queue_1_t260535031 * value)
	{
		____toWrite_20 = value;
		Il2CppCodeGenWriteBarrier(&____toWrite_20, value);
	}

	inline static int32_t get_offset_of__toFill_21() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424, ____toFill_21)); }
	inline Queue_1_t260535031 * get__toFill_21() const { return ____toFill_21; }
	inline Queue_1_t260535031 ** get_address_of__toFill_21() { return &____toFill_21; }
	inline void set__toFill_21(Queue_1_t260535031 * value)
	{
		____toFill_21 = value;
		Il2CppCodeGenWriteBarrier(&____toFill_21, value);
	}

	inline static int32_t get_offset_of__totalBytesProcessed_22() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424, ____totalBytesProcessed_22)); }
	inline int64_t get__totalBytesProcessed_22() const { return ____totalBytesProcessed_22; }
	inline int64_t* get_address_of__totalBytesProcessed_22() { return &____totalBytesProcessed_22; }
	inline void set__totalBytesProcessed_22(int64_t value)
	{
		____totalBytesProcessed_22 = value;
	}

	inline static int32_t get_offset_of__compressLevel_23() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424, ____compressLevel_23)); }
	inline int32_t get__compressLevel_23() const { return ____compressLevel_23; }
	inline int32_t* get_address_of__compressLevel_23() { return &____compressLevel_23; }
	inline void set__compressLevel_23(int32_t value)
	{
		____compressLevel_23 = value;
	}

	inline static int32_t get_offset_of__pendingException_24() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424, ____pendingException_24)); }
	inline Exception_t1967233988 * get__pendingException_24() const { return ____pendingException_24; }
	inline Exception_t1967233988 ** get_address_of__pendingException_24() { return &____pendingException_24; }
	inline void set__pendingException_24(Exception_t1967233988 * value)
	{
		____pendingException_24 = value;
		Il2CppCodeGenWriteBarrier(&____pendingException_24, value);
	}

	inline static int32_t get_offset_of__handlingException_25() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424, ____handlingException_25)); }
	inline bool get__handlingException_25() const { return ____handlingException_25; }
	inline bool* get_address_of__handlingException_25() { return &____handlingException_25; }
	inline void set__handlingException_25(bool value)
	{
		____handlingException_25 = value;
	}

	inline static int32_t get_offset_of__eLock_26() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424, ____eLock_26)); }
	inline Il2CppObject * get__eLock_26() const { return ____eLock_26; }
	inline Il2CppObject ** get_address_of__eLock_26() { return &____eLock_26; }
	inline void set__eLock_26(Il2CppObject * value)
	{
		____eLock_26 = value;
		Il2CppCodeGenWriteBarrier(&____eLock_26, value);
	}

	inline static int32_t get_offset_of__DesiredTrace_27() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424, ____DesiredTrace_27)); }
	inline uint32_t get__DesiredTrace_27() const { return ____DesiredTrace_27; }
	inline uint32_t* get_address_of__DesiredTrace_27() { return &____DesiredTrace_27; }
	inline void set__DesiredTrace_27(uint32_t value)
	{
		____DesiredTrace_27 = value;
	}

	inline static int32_t get_offset_of_U3CStrategyU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424, ___U3CStrategyU3Ek__BackingField_28)); }
	inline int32_t get_U3CStrategyU3Ek__BackingField_28() const { return ___U3CStrategyU3Ek__BackingField_28; }
	inline int32_t* get_address_of_U3CStrategyU3Ek__BackingField_28() { return &___U3CStrategyU3Ek__BackingField_28; }
	inline void set_U3CStrategyU3Ek__BackingField_28(int32_t value)
	{
		___U3CStrategyU3Ek__BackingField_28 = value;
	}
};

struct ParallelDeflateOutputStream_t3413079424_StaticFields
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::IO_BUFFER_SIZE_DEFAULT
	int32_t ___IO_BUFFER_SIZE_DEFAULT_1;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::BufferPairsPerCore
	int32_t ___BufferPairsPerCore_2;

public:
	inline static int32_t get_offset_of_IO_BUFFER_SIZE_DEFAULT_1() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424_StaticFields, ___IO_BUFFER_SIZE_DEFAULT_1)); }
	inline int32_t get_IO_BUFFER_SIZE_DEFAULT_1() const { return ___IO_BUFFER_SIZE_DEFAULT_1; }
	inline int32_t* get_address_of_IO_BUFFER_SIZE_DEFAULT_1() { return &___IO_BUFFER_SIZE_DEFAULT_1; }
	inline void set_IO_BUFFER_SIZE_DEFAULT_1(int32_t value)
	{
		___IO_BUFFER_SIZE_DEFAULT_1 = value;
	}

	inline static int32_t get_offset_of_BufferPairsPerCore_2() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t3413079424_StaticFields, ___BufferPairsPerCore_2)); }
	inline int32_t get_BufferPairsPerCore_2() const { return ___BufferPairsPerCore_2; }
	inline int32_t* get_address_of_BufferPairsPerCore_2() { return &___BufferPairsPerCore_2; }
	inline void set_BufferPairsPerCore_2(int32_t value)
	{
		___BufferPairsPerCore_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
