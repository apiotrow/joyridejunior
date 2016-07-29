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
// System.SByte[]
struct SByteU5BU5D_t1084170289;
// System.Int16[]
struct Int16U5BU5D_t3675865332;
// Pathfinding.Ionic.Zlib.StaticTree
struct StaticTree_t2324544199;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.Tree
struct  Tree_t444004153  : public Il2CppObject
{
public:
	// System.Int16[] Pathfinding.Ionic.Zlib.Tree::dyn_tree
	Int16U5BU5D_t3675865332* ___dyn_tree_9;
	// System.Int32 Pathfinding.Ionic.Zlib.Tree::max_code
	int32_t ___max_code_10;
	// Pathfinding.Ionic.Zlib.StaticTree Pathfinding.Ionic.Zlib.Tree::staticTree
	StaticTree_t2324544199 * ___staticTree_11;

public:
	inline static int32_t get_offset_of_dyn_tree_9() { return static_cast<int32_t>(offsetof(Tree_t444004153, ___dyn_tree_9)); }
	inline Int16U5BU5D_t3675865332* get_dyn_tree_9() const { return ___dyn_tree_9; }
	inline Int16U5BU5D_t3675865332** get_address_of_dyn_tree_9() { return &___dyn_tree_9; }
	inline void set_dyn_tree_9(Int16U5BU5D_t3675865332* value)
	{
		___dyn_tree_9 = value;
		Il2CppCodeGenWriteBarrier(&___dyn_tree_9, value);
	}

	inline static int32_t get_offset_of_max_code_10() { return static_cast<int32_t>(offsetof(Tree_t444004153, ___max_code_10)); }
	inline int32_t get_max_code_10() const { return ___max_code_10; }
	inline int32_t* get_address_of_max_code_10() { return &___max_code_10; }
	inline void set_max_code_10(int32_t value)
	{
		___max_code_10 = value;
	}

	inline static int32_t get_offset_of_staticTree_11() { return static_cast<int32_t>(offsetof(Tree_t444004153, ___staticTree_11)); }
	inline StaticTree_t2324544199 * get_staticTree_11() const { return ___staticTree_11; }
	inline StaticTree_t2324544199 ** get_address_of_staticTree_11() { return &___staticTree_11; }
	inline void set_staticTree_11(StaticTree_t2324544199 * value)
	{
		___staticTree_11 = value;
		Il2CppCodeGenWriteBarrier(&___staticTree_11, value);
	}
};

struct Tree_t444004153_StaticFields
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.Tree::HEAP_SIZE
	int32_t ___HEAP_SIZE_0;
	// System.Int32[] Pathfinding.Ionic.Zlib.Tree::ExtraLengthBits
	Int32U5BU5D_t1809983122* ___ExtraLengthBits_1;
	// System.Int32[] Pathfinding.Ionic.Zlib.Tree::ExtraDistanceBits
	Int32U5BU5D_t1809983122* ___ExtraDistanceBits_2;
	// System.Int32[] Pathfinding.Ionic.Zlib.Tree::extra_blbits
	Int32U5BU5D_t1809983122* ___extra_blbits_3;
	// System.SByte[] Pathfinding.Ionic.Zlib.Tree::bl_order
	SByteU5BU5D_t1084170289* ___bl_order_4;
	// System.SByte[] Pathfinding.Ionic.Zlib.Tree::_dist_code
	SByteU5BU5D_t1084170289* ____dist_code_5;
	// System.SByte[] Pathfinding.Ionic.Zlib.Tree::LengthCode
	SByteU5BU5D_t1084170289* ___LengthCode_6;
	// System.Int32[] Pathfinding.Ionic.Zlib.Tree::LengthBase
	Int32U5BU5D_t1809983122* ___LengthBase_7;
	// System.Int32[] Pathfinding.Ionic.Zlib.Tree::DistanceBase
	Int32U5BU5D_t1809983122* ___DistanceBase_8;

public:
	inline static int32_t get_offset_of_HEAP_SIZE_0() { return static_cast<int32_t>(offsetof(Tree_t444004153_StaticFields, ___HEAP_SIZE_0)); }
	inline int32_t get_HEAP_SIZE_0() const { return ___HEAP_SIZE_0; }
	inline int32_t* get_address_of_HEAP_SIZE_0() { return &___HEAP_SIZE_0; }
	inline void set_HEAP_SIZE_0(int32_t value)
	{
		___HEAP_SIZE_0 = value;
	}

	inline static int32_t get_offset_of_ExtraLengthBits_1() { return static_cast<int32_t>(offsetof(Tree_t444004153_StaticFields, ___ExtraLengthBits_1)); }
	inline Int32U5BU5D_t1809983122* get_ExtraLengthBits_1() const { return ___ExtraLengthBits_1; }
	inline Int32U5BU5D_t1809983122** get_address_of_ExtraLengthBits_1() { return &___ExtraLengthBits_1; }
	inline void set_ExtraLengthBits_1(Int32U5BU5D_t1809983122* value)
	{
		___ExtraLengthBits_1 = value;
		Il2CppCodeGenWriteBarrier(&___ExtraLengthBits_1, value);
	}

	inline static int32_t get_offset_of_ExtraDistanceBits_2() { return static_cast<int32_t>(offsetof(Tree_t444004153_StaticFields, ___ExtraDistanceBits_2)); }
	inline Int32U5BU5D_t1809983122* get_ExtraDistanceBits_2() const { return ___ExtraDistanceBits_2; }
	inline Int32U5BU5D_t1809983122** get_address_of_ExtraDistanceBits_2() { return &___ExtraDistanceBits_2; }
	inline void set_ExtraDistanceBits_2(Int32U5BU5D_t1809983122* value)
	{
		___ExtraDistanceBits_2 = value;
		Il2CppCodeGenWriteBarrier(&___ExtraDistanceBits_2, value);
	}

	inline static int32_t get_offset_of_extra_blbits_3() { return static_cast<int32_t>(offsetof(Tree_t444004153_StaticFields, ___extra_blbits_3)); }
	inline Int32U5BU5D_t1809983122* get_extra_blbits_3() const { return ___extra_blbits_3; }
	inline Int32U5BU5D_t1809983122** get_address_of_extra_blbits_3() { return &___extra_blbits_3; }
	inline void set_extra_blbits_3(Int32U5BU5D_t1809983122* value)
	{
		___extra_blbits_3 = value;
		Il2CppCodeGenWriteBarrier(&___extra_blbits_3, value);
	}

	inline static int32_t get_offset_of_bl_order_4() { return static_cast<int32_t>(offsetof(Tree_t444004153_StaticFields, ___bl_order_4)); }
	inline SByteU5BU5D_t1084170289* get_bl_order_4() const { return ___bl_order_4; }
	inline SByteU5BU5D_t1084170289** get_address_of_bl_order_4() { return &___bl_order_4; }
	inline void set_bl_order_4(SByteU5BU5D_t1084170289* value)
	{
		___bl_order_4 = value;
		Il2CppCodeGenWriteBarrier(&___bl_order_4, value);
	}

	inline static int32_t get_offset_of__dist_code_5() { return static_cast<int32_t>(offsetof(Tree_t444004153_StaticFields, ____dist_code_5)); }
	inline SByteU5BU5D_t1084170289* get__dist_code_5() const { return ____dist_code_5; }
	inline SByteU5BU5D_t1084170289** get_address_of__dist_code_5() { return &____dist_code_5; }
	inline void set__dist_code_5(SByteU5BU5D_t1084170289* value)
	{
		____dist_code_5 = value;
		Il2CppCodeGenWriteBarrier(&____dist_code_5, value);
	}

	inline static int32_t get_offset_of_LengthCode_6() { return static_cast<int32_t>(offsetof(Tree_t444004153_StaticFields, ___LengthCode_6)); }
	inline SByteU5BU5D_t1084170289* get_LengthCode_6() const { return ___LengthCode_6; }
	inline SByteU5BU5D_t1084170289** get_address_of_LengthCode_6() { return &___LengthCode_6; }
	inline void set_LengthCode_6(SByteU5BU5D_t1084170289* value)
	{
		___LengthCode_6 = value;
		Il2CppCodeGenWriteBarrier(&___LengthCode_6, value);
	}

	inline static int32_t get_offset_of_LengthBase_7() { return static_cast<int32_t>(offsetof(Tree_t444004153_StaticFields, ___LengthBase_7)); }
	inline Int32U5BU5D_t1809983122* get_LengthBase_7() const { return ___LengthBase_7; }
	inline Int32U5BU5D_t1809983122** get_address_of_LengthBase_7() { return &___LengthBase_7; }
	inline void set_LengthBase_7(Int32U5BU5D_t1809983122* value)
	{
		___LengthBase_7 = value;
		Il2CppCodeGenWriteBarrier(&___LengthBase_7, value);
	}

	inline static int32_t get_offset_of_DistanceBase_8() { return static_cast<int32_t>(offsetof(Tree_t444004153_StaticFields, ___DistanceBase_8)); }
	inline Int32U5BU5D_t1809983122* get_DistanceBase_8() const { return ___DistanceBase_8; }
	inline Int32U5BU5D_t1809983122** get_address_of_DistanceBase_8() { return &___DistanceBase_8; }
	inline void set_DistanceBase_8(Int32U5BU5D_t1809983122* value)
	{
		___DistanceBase_8 = value;
		Il2CppCodeGenWriteBarrier(&___DistanceBase_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
