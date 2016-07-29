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
// Pathfinding.Ionic.Zlib.InflateBlocks
struct InflateBlocks_t1672309192;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "mscorlib_System_Object837106420.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl2525132425.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.InflateManager
struct  InflateManager_t801909569  : public Il2CppObject
{
public:
	// Pathfinding.Ionic.Zlib.InflateManager/InflateManagerMode Pathfinding.Ionic.Zlib.InflateManager::mode
	int32_t ___mode_0;
	// Pathfinding.Ionic.Zlib.ZlibCodec Pathfinding.Ionic.Zlib.InflateManager::_codec
	ZlibCodec_t1793744486 * ____codec_1;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::method
	int32_t ___method_2;
	// System.UInt32 Pathfinding.Ionic.Zlib.InflateManager::computedCheck
	uint32_t ___computedCheck_3;
	// System.UInt32 Pathfinding.Ionic.Zlib.InflateManager::expectedCheck
	uint32_t ___expectedCheck_4;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::marker
	int32_t ___marker_5;
	// System.Boolean Pathfinding.Ionic.Zlib.InflateManager::_handleRfc1950HeaderBytes
	bool ____handleRfc1950HeaderBytes_6;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::wbits
	int32_t ___wbits_7;
	// Pathfinding.Ionic.Zlib.InflateBlocks Pathfinding.Ionic.Zlib.InflateManager::blocks
	InflateBlocks_t1672309192 * ___blocks_8;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(InflateManager_t801909569, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of__codec_1() { return static_cast<int32_t>(offsetof(InflateManager_t801909569, ____codec_1)); }
	inline ZlibCodec_t1793744486 * get__codec_1() const { return ____codec_1; }
	inline ZlibCodec_t1793744486 ** get_address_of__codec_1() { return &____codec_1; }
	inline void set__codec_1(ZlibCodec_t1793744486 * value)
	{
		____codec_1 = value;
		Il2CppCodeGenWriteBarrier(&____codec_1, value);
	}

	inline static int32_t get_offset_of_method_2() { return static_cast<int32_t>(offsetof(InflateManager_t801909569, ___method_2)); }
	inline int32_t get_method_2() const { return ___method_2; }
	inline int32_t* get_address_of_method_2() { return &___method_2; }
	inline void set_method_2(int32_t value)
	{
		___method_2 = value;
	}

	inline static int32_t get_offset_of_computedCheck_3() { return static_cast<int32_t>(offsetof(InflateManager_t801909569, ___computedCheck_3)); }
	inline uint32_t get_computedCheck_3() const { return ___computedCheck_3; }
	inline uint32_t* get_address_of_computedCheck_3() { return &___computedCheck_3; }
	inline void set_computedCheck_3(uint32_t value)
	{
		___computedCheck_3 = value;
	}

	inline static int32_t get_offset_of_expectedCheck_4() { return static_cast<int32_t>(offsetof(InflateManager_t801909569, ___expectedCheck_4)); }
	inline uint32_t get_expectedCheck_4() const { return ___expectedCheck_4; }
	inline uint32_t* get_address_of_expectedCheck_4() { return &___expectedCheck_4; }
	inline void set_expectedCheck_4(uint32_t value)
	{
		___expectedCheck_4 = value;
	}

	inline static int32_t get_offset_of_marker_5() { return static_cast<int32_t>(offsetof(InflateManager_t801909569, ___marker_5)); }
	inline int32_t get_marker_5() const { return ___marker_5; }
	inline int32_t* get_address_of_marker_5() { return &___marker_5; }
	inline void set_marker_5(int32_t value)
	{
		___marker_5 = value;
	}

	inline static int32_t get_offset_of__handleRfc1950HeaderBytes_6() { return static_cast<int32_t>(offsetof(InflateManager_t801909569, ____handleRfc1950HeaderBytes_6)); }
	inline bool get__handleRfc1950HeaderBytes_6() const { return ____handleRfc1950HeaderBytes_6; }
	inline bool* get_address_of__handleRfc1950HeaderBytes_6() { return &____handleRfc1950HeaderBytes_6; }
	inline void set__handleRfc1950HeaderBytes_6(bool value)
	{
		____handleRfc1950HeaderBytes_6 = value;
	}

	inline static int32_t get_offset_of_wbits_7() { return static_cast<int32_t>(offsetof(InflateManager_t801909569, ___wbits_7)); }
	inline int32_t get_wbits_7() const { return ___wbits_7; }
	inline int32_t* get_address_of_wbits_7() { return &___wbits_7; }
	inline void set_wbits_7(int32_t value)
	{
		___wbits_7 = value;
	}

	inline static int32_t get_offset_of_blocks_8() { return static_cast<int32_t>(offsetof(InflateManager_t801909569, ___blocks_8)); }
	inline InflateBlocks_t1672309192 * get_blocks_8() const { return ___blocks_8; }
	inline InflateBlocks_t1672309192 ** get_address_of_blocks_8() { return &___blocks_8; }
	inline void set_blocks_8(InflateBlocks_t1672309192 * value)
	{
		___blocks_8 = value;
		Il2CppCodeGenWriteBarrier(&___blocks_8, value);
	}
};

struct InflateManager_t801909569_StaticFields
{
public:
	// System.Byte[] Pathfinding.Ionic.Zlib.InflateManager::mark
	ByteU5BU5D_t58506160* ___mark_9;

public:
	inline static int32_t get_offset_of_mark_9() { return static_cast<int32_t>(offsetof(InflateManager_t801909569_StaticFields, ___mark_9)); }
	inline ByteU5BU5D_t58506160* get_mark_9() const { return ___mark_9; }
	inline ByteU5BU5D_t58506160** get_address_of_mark_9() { return &___mark_9; }
	inline void set_mark_9(ByteU5BU5D_t58506160* value)
	{
		___mark_9 = value;
		Il2CppCodeGenWriteBarrier(&___mark_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
