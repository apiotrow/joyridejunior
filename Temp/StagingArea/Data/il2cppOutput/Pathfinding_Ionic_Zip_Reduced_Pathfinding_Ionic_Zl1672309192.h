#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1809983122;
// Pathfinding.Ionic.Zlib.InflateCodes
struct InflateCodes_t759193082;
// Pathfinding.Ionic.Zlib.ZlibCodec
struct ZlibCodec_t1793744486;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Object
struct Il2CppObject;
// Pathfinding.Ionic.Zlib.InfTree
struct InfTree_t4050669178;

#include "mscorlib_System_Object837106420.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl4208905641.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.InflateBlocks
struct  InflateBlocks_t1672309192  : public Il2CppObject
{
public:
	// Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode Pathfinding.Ionic.Zlib.InflateBlocks::mode
	int32_t ___mode_1;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::left
	int32_t ___left_2;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::table
	int32_t ___table_3;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::index
	int32_t ___index_4;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateBlocks::blens
	Int32U5BU5D_t1809983122* ___blens_5;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateBlocks::bb
	Int32U5BU5D_t1809983122* ___bb_6;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateBlocks::tb
	Int32U5BU5D_t1809983122* ___tb_7;
	// Pathfinding.Ionic.Zlib.InflateCodes Pathfinding.Ionic.Zlib.InflateBlocks::codes
	InflateCodes_t759193082 * ___codes_8;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::last
	int32_t ___last_9;
	// Pathfinding.Ionic.Zlib.ZlibCodec Pathfinding.Ionic.Zlib.InflateBlocks::_codec
	ZlibCodec_t1793744486 * ____codec_10;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::bitk
	int32_t ___bitk_11;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::bitb
	int32_t ___bitb_12;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateBlocks::hufts
	Int32U5BU5D_t1809983122* ___hufts_13;
	// System.Byte[] Pathfinding.Ionic.Zlib.InflateBlocks::window
	ByteU5BU5D_t58506160* ___window_14;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::end
	int32_t ___end_15;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::readAt
	int32_t ___readAt_16;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::writeAt
	int32_t ___writeAt_17;
	// System.Object Pathfinding.Ionic.Zlib.InflateBlocks::checkfn
	Il2CppObject * ___checkfn_18;
	// System.UInt32 Pathfinding.Ionic.Zlib.InflateBlocks::check
	uint32_t ___check_19;
	// Pathfinding.Ionic.Zlib.InfTree Pathfinding.Ionic.Zlib.InflateBlocks::inftree
	InfTree_t4050669178 * ___inftree_20;

public:
	inline static int32_t get_offset_of_mode_1() { return static_cast<int32_t>(offsetof(InflateBlocks_t1672309192, ___mode_1)); }
	inline int32_t get_mode_1() const { return ___mode_1; }
	inline int32_t* get_address_of_mode_1() { return &___mode_1; }
	inline void set_mode_1(int32_t value)
	{
		___mode_1 = value;
	}

	inline static int32_t get_offset_of_left_2() { return static_cast<int32_t>(offsetof(InflateBlocks_t1672309192, ___left_2)); }
	inline int32_t get_left_2() const { return ___left_2; }
	inline int32_t* get_address_of_left_2() { return &___left_2; }
	inline void set_left_2(int32_t value)
	{
		___left_2 = value;
	}

	inline static int32_t get_offset_of_table_3() { return static_cast<int32_t>(offsetof(InflateBlocks_t1672309192, ___table_3)); }
	inline int32_t get_table_3() const { return ___table_3; }
	inline int32_t* get_address_of_table_3() { return &___table_3; }
	inline void set_table_3(int32_t value)
	{
		___table_3 = value;
	}

	inline static int32_t get_offset_of_index_4() { return static_cast<int32_t>(offsetof(InflateBlocks_t1672309192, ___index_4)); }
	inline int32_t get_index_4() const { return ___index_4; }
	inline int32_t* get_address_of_index_4() { return &___index_4; }
	inline void set_index_4(int32_t value)
	{
		___index_4 = value;
	}

	inline static int32_t get_offset_of_blens_5() { return static_cast<int32_t>(offsetof(InflateBlocks_t1672309192, ___blens_5)); }
	inline Int32U5BU5D_t1809983122* get_blens_5() const { return ___blens_5; }
	inline Int32U5BU5D_t1809983122** get_address_of_blens_5() { return &___blens_5; }
	inline void set_blens_5(Int32U5BU5D_t1809983122* value)
	{
		___blens_5 = value;
		Il2CppCodeGenWriteBarrier(&___blens_5, value);
	}

	inline static int32_t get_offset_of_bb_6() { return static_cast<int32_t>(offsetof(InflateBlocks_t1672309192, ___bb_6)); }
	inline Int32U5BU5D_t1809983122* get_bb_6() const { return ___bb_6; }
	inline Int32U5BU5D_t1809983122** get_address_of_bb_6() { return &___bb_6; }
	inline void set_bb_6(Int32U5BU5D_t1809983122* value)
	{
		___bb_6 = value;
		Il2CppCodeGenWriteBarrier(&___bb_6, value);
	}

	inline static int32_t get_offset_of_tb_7() { return static_cast<int32_t>(offsetof(InflateBlocks_t1672309192, ___tb_7)); }
	inline Int32U5BU5D_t1809983122* get_tb_7() const { return ___tb_7; }
	inline Int32U5BU5D_t1809983122** get_address_of_tb_7() { return &___tb_7; }
	inline void set_tb_7(Int32U5BU5D_t1809983122* value)
	{
		___tb_7 = value;
		Il2CppCodeGenWriteBarrier(&___tb_7, value);
	}

	inline static int32_t get_offset_of_codes_8() { return static_cast<int32_t>(offsetof(InflateBlocks_t1672309192, ___codes_8)); }
	inline InflateCodes_t759193082 * get_codes_8() const { return ___codes_8; }
	inline InflateCodes_t759193082 ** get_address_of_codes_8() { return &___codes_8; }
	inline void set_codes_8(InflateCodes_t759193082 * value)
	{
		___codes_8 = value;
		Il2CppCodeGenWriteBarrier(&___codes_8, value);
	}

	inline static int32_t get_offset_of_last_9() { return static_cast<int32_t>(offsetof(InflateBlocks_t1672309192, ___last_9)); }
	inline int32_t get_last_9() const { return ___last_9; }
	inline int32_t* get_address_of_last_9() { return &___last_9; }
	inline void set_last_9(int32_t value)
	{
		___last_9 = value;
	}

	inline static int32_t get_offset_of__codec_10() { return static_cast<int32_t>(offsetof(InflateBlocks_t1672309192, ____codec_10)); }
	inline ZlibCodec_t1793744486 * get__codec_10() const { return ____codec_10; }
	inline ZlibCodec_t1793744486 ** get_address_of__codec_10() { return &____codec_10; }
	inline void set__codec_10(ZlibCodec_t1793744486 * value)
	{
		____codec_10 = value;
		Il2CppCodeGenWriteBarrier(&____codec_10, value);
	}

	inline static int32_t get_offset_of_bitk_11() { return static_cast<int32_t>(offsetof(InflateBlocks_t1672309192, ___bitk_11)); }
	inline int32_t get_bitk_11() const { return ___bitk_11; }
	inline int32_t* get_address_of_bitk_11() { return &___bitk_11; }
	inline void set_bitk_11(int32_t value)
	{
		___bitk_11 = value;
	}

	inline static int32_t get_offset_of_bitb_12() { return static_cast<int32_t>(offsetof(InflateBlocks_t1672309192, ___bitb_12)); }
	inline int32_t get_bitb_12() const { return ___bitb_12; }
	inline int32_t* get_address_of_bitb_12() { return &___bitb_12; }
	inline void set_bitb_12(int32_t value)
	{
		___bitb_12 = value;
	}

	inline static int32_t get_offset_of_hufts_13() { return static_cast<int32_t>(offsetof(InflateBlocks_t1672309192, ___hufts_13)); }
	inline Int32U5BU5D_t1809983122* get_hufts_13() const { return ___hufts_13; }
	inline Int32U5BU5D_t1809983122** get_address_of_hufts_13() { return &___hufts_13; }
	inline void set_hufts_13(Int32U5BU5D_t1809983122* value)
	{
		___hufts_13 = value;
		Il2CppCodeGenWriteBarrier(&___hufts_13, value);
	}

	inline static int32_t get_offset_of_window_14() { return static_cast<int32_t>(offsetof(InflateBlocks_t1672309192, ___window_14)); }
	inline ByteU5BU5D_t58506160* get_window_14() const { return ___window_14; }
	inline ByteU5BU5D_t58506160** get_address_of_window_14() { return &___window_14; }
	inline void set_window_14(ByteU5BU5D_t58506160* value)
	{
		___window_14 = value;
		Il2CppCodeGenWriteBarrier(&___window_14, value);
	}

	inline static int32_t get_offset_of_end_15() { return static_cast<int32_t>(offsetof(InflateBlocks_t1672309192, ___end_15)); }
	inline int32_t get_end_15() const { return ___end_15; }
	inline int32_t* get_address_of_end_15() { return &___end_15; }
	inline void set_end_15(int32_t value)
	{
		___end_15 = value;
	}

	inline static int32_t get_offset_of_readAt_16() { return static_cast<int32_t>(offsetof(InflateBlocks_t1672309192, ___readAt_16)); }
	inline int32_t get_readAt_16() const { return ___readAt_16; }
	inline int32_t* get_address_of_readAt_16() { return &___readAt_16; }
	inline void set_readAt_16(int32_t value)
	{
		___readAt_16 = value;
	}

	inline static int32_t get_offset_of_writeAt_17() { return static_cast<int32_t>(offsetof(InflateBlocks_t1672309192, ___writeAt_17)); }
	inline int32_t get_writeAt_17() const { return ___writeAt_17; }
	inline int32_t* get_address_of_writeAt_17() { return &___writeAt_17; }
	inline void set_writeAt_17(int32_t value)
	{
		___writeAt_17 = value;
	}

	inline static int32_t get_offset_of_checkfn_18() { return static_cast<int32_t>(offsetof(InflateBlocks_t1672309192, ___checkfn_18)); }
	inline Il2CppObject * get_checkfn_18() const { return ___checkfn_18; }
	inline Il2CppObject ** get_address_of_checkfn_18() { return &___checkfn_18; }
	inline void set_checkfn_18(Il2CppObject * value)
	{
		___checkfn_18 = value;
		Il2CppCodeGenWriteBarrier(&___checkfn_18, value);
	}

	inline static int32_t get_offset_of_check_19() { return static_cast<int32_t>(offsetof(InflateBlocks_t1672309192, ___check_19)); }
	inline uint32_t get_check_19() const { return ___check_19; }
	inline uint32_t* get_address_of_check_19() { return &___check_19; }
	inline void set_check_19(uint32_t value)
	{
		___check_19 = value;
	}

	inline static int32_t get_offset_of_inftree_20() { return static_cast<int32_t>(offsetof(InflateBlocks_t1672309192, ___inftree_20)); }
	inline InfTree_t4050669178 * get_inftree_20() const { return ___inftree_20; }
	inline InfTree_t4050669178 ** get_address_of_inftree_20() { return &___inftree_20; }
	inline void set_inftree_20(InfTree_t4050669178 * value)
	{
		___inftree_20 = value;
		Il2CppCodeGenWriteBarrier(&___inftree_20, value);
	}
};

struct InflateBlocks_t1672309192_StaticFields
{
public:
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateBlocks::border
	Int32U5BU5D_t1809983122* ___border_0;

public:
	inline static int32_t get_offset_of_border_0() { return static_cast<int32_t>(offsetof(InflateBlocks_t1672309192_StaticFields, ___border_0)); }
	inline Int32U5BU5D_t1809983122* get_border_0() const { return ___border_0; }
	inline Int32U5BU5D_t1809983122** get_address_of_border_0() { return &___border_0; }
	inline void set_border_0(Int32U5BU5D_t1809983122* value)
	{
		___border_0 = value;
		Il2CppCodeGenWriteBarrier(&___border_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
