#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t495942682;
// System.String
struct String_t;

#include "mscorlib_System_EventArgs516466188.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zi3277276783.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ZipProgressEventArgs
struct  ZipProgressEventArgs_t3276703762  : public EventArgs_t516466188
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.ZipProgressEventArgs::_entriesTotal
	int32_t ____entriesTotal_1;
	// System.Boolean Pathfinding.Ionic.Zip.ZipProgressEventArgs::_cancel
	bool ____cancel_2;
	// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipProgressEventArgs::_latestEntry
	ZipEntry_t495942682 * ____latestEntry_3;
	// Pathfinding.Ionic.Zip.ZipProgressEventType Pathfinding.Ionic.Zip.ZipProgressEventArgs::_flavor
	int32_t ____flavor_4;
	// System.String Pathfinding.Ionic.Zip.ZipProgressEventArgs::_archiveName
	String_t* ____archiveName_5;
	// System.Int64 Pathfinding.Ionic.Zip.ZipProgressEventArgs::_bytesTransferred
	int64_t ____bytesTransferred_6;
	// System.Int64 Pathfinding.Ionic.Zip.ZipProgressEventArgs::_totalBytesToTransfer
	int64_t ____totalBytesToTransfer_7;

public:
	inline static int32_t get_offset_of__entriesTotal_1() { return static_cast<int32_t>(offsetof(ZipProgressEventArgs_t3276703762, ____entriesTotal_1)); }
	inline int32_t get__entriesTotal_1() const { return ____entriesTotal_1; }
	inline int32_t* get_address_of__entriesTotal_1() { return &____entriesTotal_1; }
	inline void set__entriesTotal_1(int32_t value)
	{
		____entriesTotal_1 = value;
	}

	inline static int32_t get_offset_of__cancel_2() { return static_cast<int32_t>(offsetof(ZipProgressEventArgs_t3276703762, ____cancel_2)); }
	inline bool get__cancel_2() const { return ____cancel_2; }
	inline bool* get_address_of__cancel_2() { return &____cancel_2; }
	inline void set__cancel_2(bool value)
	{
		____cancel_2 = value;
	}

	inline static int32_t get_offset_of__latestEntry_3() { return static_cast<int32_t>(offsetof(ZipProgressEventArgs_t3276703762, ____latestEntry_3)); }
	inline ZipEntry_t495942682 * get__latestEntry_3() const { return ____latestEntry_3; }
	inline ZipEntry_t495942682 ** get_address_of__latestEntry_3() { return &____latestEntry_3; }
	inline void set__latestEntry_3(ZipEntry_t495942682 * value)
	{
		____latestEntry_3 = value;
		Il2CppCodeGenWriteBarrier(&____latestEntry_3, value);
	}

	inline static int32_t get_offset_of__flavor_4() { return static_cast<int32_t>(offsetof(ZipProgressEventArgs_t3276703762, ____flavor_4)); }
	inline int32_t get__flavor_4() const { return ____flavor_4; }
	inline int32_t* get_address_of__flavor_4() { return &____flavor_4; }
	inline void set__flavor_4(int32_t value)
	{
		____flavor_4 = value;
	}

	inline static int32_t get_offset_of__archiveName_5() { return static_cast<int32_t>(offsetof(ZipProgressEventArgs_t3276703762, ____archiveName_5)); }
	inline String_t* get__archiveName_5() const { return ____archiveName_5; }
	inline String_t** get_address_of__archiveName_5() { return &____archiveName_5; }
	inline void set__archiveName_5(String_t* value)
	{
		____archiveName_5 = value;
		Il2CppCodeGenWriteBarrier(&____archiveName_5, value);
	}

	inline static int32_t get_offset_of__bytesTransferred_6() { return static_cast<int32_t>(offsetof(ZipProgressEventArgs_t3276703762, ____bytesTransferred_6)); }
	inline int64_t get__bytesTransferred_6() const { return ____bytesTransferred_6; }
	inline int64_t* get_address_of__bytesTransferred_6() { return &____bytesTransferred_6; }
	inline void set__bytesTransferred_6(int64_t value)
	{
		____bytesTransferred_6 = value;
	}

	inline static int32_t get_offset_of__totalBytesToTransfer_7() { return static_cast<int32_t>(offsetof(ZipProgressEventArgs_t3276703762, ____totalBytesToTransfer_7)); }
	inline int64_t get__totalBytesToTransfer_7() const { return ____totalBytesToTransfer_7; }
	inline int64_t* get_address_of__totalBytesToTransfer_7() { return &____totalBytesToTransfer_7; }
	inline void set__totalBytesToTransfer_7(int64_t value)
	{
		____totalBytesToTransfer_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
