#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t58506160;
// AstarPath
struct AstarPath_t4090270936;
// System.String
struct String_t;
// Pathfinding.GraphNodeDelegateCancelable
struct GraphNodeDelegateCancelable_t4016762869;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.NavGraph
struct  NavGraph_t535983959  : public Il2CppObject
{
public:
	// System.Byte[] Pathfinding.NavGraph::_sguid
	ByteU5BU5D_t58506160* ____sguid_0;
	// AstarPath Pathfinding.NavGraph::active
	AstarPath_t4090270936 * ___active_1;
	// System.UInt32 Pathfinding.NavGraph::initialPenalty
	uint32_t ___initialPenalty_2;
	// System.Boolean Pathfinding.NavGraph::open
	bool ___open_3;
	// System.UInt32 Pathfinding.NavGraph::graphIndex
	uint32_t ___graphIndex_4;
	// System.String Pathfinding.NavGraph::name
	String_t* ___name_5;
	// System.Boolean Pathfinding.NavGraph::drawGizmos
	bool ___drawGizmos_6;
	// System.Boolean Pathfinding.NavGraph::infoScreenOpen
	bool ___infoScreenOpen_7;
	// UnityEngine.Matrix4x4 Pathfinding.NavGraph::matrix
	Matrix4x4_t277289660  ___matrix_8;
	// UnityEngine.Matrix4x4 Pathfinding.NavGraph::inverseMatrix
	Matrix4x4_t277289660  ___inverseMatrix_9;

public:
	inline static int32_t get_offset_of__sguid_0() { return static_cast<int32_t>(offsetof(NavGraph_t535983959, ____sguid_0)); }
	inline ByteU5BU5D_t58506160* get__sguid_0() const { return ____sguid_0; }
	inline ByteU5BU5D_t58506160** get_address_of__sguid_0() { return &____sguid_0; }
	inline void set__sguid_0(ByteU5BU5D_t58506160* value)
	{
		____sguid_0 = value;
		Il2CppCodeGenWriteBarrier(&____sguid_0, value);
	}

	inline static int32_t get_offset_of_active_1() { return static_cast<int32_t>(offsetof(NavGraph_t535983959, ___active_1)); }
	inline AstarPath_t4090270936 * get_active_1() const { return ___active_1; }
	inline AstarPath_t4090270936 ** get_address_of_active_1() { return &___active_1; }
	inline void set_active_1(AstarPath_t4090270936 * value)
	{
		___active_1 = value;
		Il2CppCodeGenWriteBarrier(&___active_1, value);
	}

	inline static int32_t get_offset_of_initialPenalty_2() { return static_cast<int32_t>(offsetof(NavGraph_t535983959, ___initialPenalty_2)); }
	inline uint32_t get_initialPenalty_2() const { return ___initialPenalty_2; }
	inline uint32_t* get_address_of_initialPenalty_2() { return &___initialPenalty_2; }
	inline void set_initialPenalty_2(uint32_t value)
	{
		___initialPenalty_2 = value;
	}

	inline static int32_t get_offset_of_open_3() { return static_cast<int32_t>(offsetof(NavGraph_t535983959, ___open_3)); }
	inline bool get_open_3() const { return ___open_3; }
	inline bool* get_address_of_open_3() { return &___open_3; }
	inline void set_open_3(bool value)
	{
		___open_3 = value;
	}

	inline static int32_t get_offset_of_graphIndex_4() { return static_cast<int32_t>(offsetof(NavGraph_t535983959, ___graphIndex_4)); }
	inline uint32_t get_graphIndex_4() const { return ___graphIndex_4; }
	inline uint32_t* get_address_of_graphIndex_4() { return &___graphIndex_4; }
	inline void set_graphIndex_4(uint32_t value)
	{
		___graphIndex_4 = value;
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(NavGraph_t535983959, ___name_5)); }
	inline String_t* get_name_5() const { return ___name_5; }
	inline String_t** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(String_t* value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier(&___name_5, value);
	}

	inline static int32_t get_offset_of_drawGizmos_6() { return static_cast<int32_t>(offsetof(NavGraph_t535983959, ___drawGizmos_6)); }
	inline bool get_drawGizmos_6() const { return ___drawGizmos_6; }
	inline bool* get_address_of_drawGizmos_6() { return &___drawGizmos_6; }
	inline void set_drawGizmos_6(bool value)
	{
		___drawGizmos_6 = value;
	}

	inline static int32_t get_offset_of_infoScreenOpen_7() { return static_cast<int32_t>(offsetof(NavGraph_t535983959, ___infoScreenOpen_7)); }
	inline bool get_infoScreenOpen_7() const { return ___infoScreenOpen_7; }
	inline bool* get_address_of_infoScreenOpen_7() { return &___infoScreenOpen_7; }
	inline void set_infoScreenOpen_7(bool value)
	{
		___infoScreenOpen_7 = value;
	}

	inline static int32_t get_offset_of_matrix_8() { return static_cast<int32_t>(offsetof(NavGraph_t535983959, ___matrix_8)); }
	inline Matrix4x4_t277289660  get_matrix_8() const { return ___matrix_8; }
	inline Matrix4x4_t277289660 * get_address_of_matrix_8() { return &___matrix_8; }
	inline void set_matrix_8(Matrix4x4_t277289660  value)
	{
		___matrix_8 = value;
	}

	inline static int32_t get_offset_of_inverseMatrix_9() { return static_cast<int32_t>(offsetof(NavGraph_t535983959, ___inverseMatrix_9)); }
	inline Matrix4x4_t277289660  get_inverseMatrix_9() const { return ___inverseMatrix_9; }
	inline Matrix4x4_t277289660 * get_address_of_inverseMatrix_9() { return &___inverseMatrix_9; }
	inline void set_inverseMatrix_9(Matrix4x4_t277289660  value)
	{
		___inverseMatrix_9 = value;
	}
};

struct NavGraph_t535983959_StaticFields
{
public:
	// Pathfinding.GraphNodeDelegateCancelable Pathfinding.NavGraph::<>f__am$cacheA
	GraphNodeDelegateCancelable_t4016762869 * ___U3CU3Ef__amU24cacheA_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheA_10() { return static_cast<int32_t>(offsetof(NavGraph_t535983959_StaticFields, ___U3CU3Ef__amU24cacheA_10)); }
	inline GraphNodeDelegateCancelable_t4016762869 * get_U3CU3Ef__amU24cacheA_10() const { return ___U3CU3Ef__amU24cacheA_10; }
	inline GraphNodeDelegateCancelable_t4016762869 ** get_address_of_U3CU3Ef__amU24cacheA_10() { return &___U3CU3Ef__amU24cacheA_10; }
	inline void set_U3CU3Ef__amU24cacheA_10(GraphNodeDelegateCancelable_t4016762869 * value)
	{
		___U3CU3Ef__amU24cacheA_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheA_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
