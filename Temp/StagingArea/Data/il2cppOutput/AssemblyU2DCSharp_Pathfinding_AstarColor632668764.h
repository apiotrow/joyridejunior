#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Color[]
struct ColorU5BU5D_t3477081137;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.AstarColor
struct  AstarColor_t632668764  : public Il2CppObject
{
public:
	// UnityEngine.Color Pathfinding.AstarColor::_NodeConnection
	Color_t1588175760  ____NodeConnection_0;
	// UnityEngine.Color Pathfinding.AstarColor::_UnwalkableNode
	Color_t1588175760  ____UnwalkableNode_1;
	// UnityEngine.Color Pathfinding.AstarColor::_BoundsHandles
	Color_t1588175760  ____BoundsHandles_2;
	// UnityEngine.Color Pathfinding.AstarColor::_ConnectionLowLerp
	Color_t1588175760  ____ConnectionLowLerp_3;
	// UnityEngine.Color Pathfinding.AstarColor::_ConnectionHighLerp
	Color_t1588175760  ____ConnectionHighLerp_4;
	// UnityEngine.Color Pathfinding.AstarColor::_MeshEdgeColor
	Color_t1588175760  ____MeshEdgeColor_5;
	// UnityEngine.Color Pathfinding.AstarColor::_MeshColor
	Color_t1588175760  ____MeshColor_6;
	// UnityEngine.Color[] Pathfinding.AstarColor::_AreaColors
	ColorU5BU5D_t3477081137* ____AreaColors_7;

public:
	inline static int32_t get_offset_of__NodeConnection_0() { return static_cast<int32_t>(offsetof(AstarColor_t632668764, ____NodeConnection_0)); }
	inline Color_t1588175760  get__NodeConnection_0() const { return ____NodeConnection_0; }
	inline Color_t1588175760 * get_address_of__NodeConnection_0() { return &____NodeConnection_0; }
	inline void set__NodeConnection_0(Color_t1588175760  value)
	{
		____NodeConnection_0 = value;
	}

	inline static int32_t get_offset_of__UnwalkableNode_1() { return static_cast<int32_t>(offsetof(AstarColor_t632668764, ____UnwalkableNode_1)); }
	inline Color_t1588175760  get__UnwalkableNode_1() const { return ____UnwalkableNode_1; }
	inline Color_t1588175760 * get_address_of__UnwalkableNode_1() { return &____UnwalkableNode_1; }
	inline void set__UnwalkableNode_1(Color_t1588175760  value)
	{
		____UnwalkableNode_1 = value;
	}

	inline static int32_t get_offset_of__BoundsHandles_2() { return static_cast<int32_t>(offsetof(AstarColor_t632668764, ____BoundsHandles_2)); }
	inline Color_t1588175760  get__BoundsHandles_2() const { return ____BoundsHandles_2; }
	inline Color_t1588175760 * get_address_of__BoundsHandles_2() { return &____BoundsHandles_2; }
	inline void set__BoundsHandles_2(Color_t1588175760  value)
	{
		____BoundsHandles_2 = value;
	}

	inline static int32_t get_offset_of__ConnectionLowLerp_3() { return static_cast<int32_t>(offsetof(AstarColor_t632668764, ____ConnectionLowLerp_3)); }
	inline Color_t1588175760  get__ConnectionLowLerp_3() const { return ____ConnectionLowLerp_3; }
	inline Color_t1588175760 * get_address_of__ConnectionLowLerp_3() { return &____ConnectionLowLerp_3; }
	inline void set__ConnectionLowLerp_3(Color_t1588175760  value)
	{
		____ConnectionLowLerp_3 = value;
	}

	inline static int32_t get_offset_of__ConnectionHighLerp_4() { return static_cast<int32_t>(offsetof(AstarColor_t632668764, ____ConnectionHighLerp_4)); }
	inline Color_t1588175760  get__ConnectionHighLerp_4() const { return ____ConnectionHighLerp_4; }
	inline Color_t1588175760 * get_address_of__ConnectionHighLerp_4() { return &____ConnectionHighLerp_4; }
	inline void set__ConnectionHighLerp_4(Color_t1588175760  value)
	{
		____ConnectionHighLerp_4 = value;
	}

	inline static int32_t get_offset_of__MeshEdgeColor_5() { return static_cast<int32_t>(offsetof(AstarColor_t632668764, ____MeshEdgeColor_5)); }
	inline Color_t1588175760  get__MeshEdgeColor_5() const { return ____MeshEdgeColor_5; }
	inline Color_t1588175760 * get_address_of__MeshEdgeColor_5() { return &____MeshEdgeColor_5; }
	inline void set__MeshEdgeColor_5(Color_t1588175760  value)
	{
		____MeshEdgeColor_5 = value;
	}

	inline static int32_t get_offset_of__MeshColor_6() { return static_cast<int32_t>(offsetof(AstarColor_t632668764, ____MeshColor_6)); }
	inline Color_t1588175760  get__MeshColor_6() const { return ____MeshColor_6; }
	inline Color_t1588175760 * get_address_of__MeshColor_6() { return &____MeshColor_6; }
	inline void set__MeshColor_6(Color_t1588175760  value)
	{
		____MeshColor_6 = value;
	}

	inline static int32_t get_offset_of__AreaColors_7() { return static_cast<int32_t>(offsetof(AstarColor_t632668764, ____AreaColors_7)); }
	inline ColorU5BU5D_t3477081137* get__AreaColors_7() const { return ____AreaColors_7; }
	inline ColorU5BU5D_t3477081137** get_address_of__AreaColors_7() { return &____AreaColors_7; }
	inline void set__AreaColors_7(ColorU5BU5D_t3477081137* value)
	{
		____AreaColors_7 = value;
		Il2CppCodeGenWriteBarrier(&____AreaColors_7, value);
	}
};

struct AstarColor_t632668764_StaticFields
{
public:
	// UnityEngine.Color Pathfinding.AstarColor::NodeConnection
	Color_t1588175760  ___NodeConnection_8;
	// UnityEngine.Color Pathfinding.AstarColor::UnwalkableNode
	Color_t1588175760  ___UnwalkableNode_9;
	// UnityEngine.Color Pathfinding.AstarColor::BoundsHandles
	Color_t1588175760  ___BoundsHandles_10;
	// UnityEngine.Color Pathfinding.AstarColor::ConnectionLowLerp
	Color_t1588175760  ___ConnectionLowLerp_11;
	// UnityEngine.Color Pathfinding.AstarColor::ConnectionHighLerp
	Color_t1588175760  ___ConnectionHighLerp_12;
	// UnityEngine.Color Pathfinding.AstarColor::MeshEdgeColor
	Color_t1588175760  ___MeshEdgeColor_13;
	// UnityEngine.Color Pathfinding.AstarColor::MeshColor
	Color_t1588175760  ___MeshColor_14;
	// UnityEngine.Color[] Pathfinding.AstarColor::AreaColors
	ColorU5BU5D_t3477081137* ___AreaColors_15;

public:
	inline static int32_t get_offset_of_NodeConnection_8() { return static_cast<int32_t>(offsetof(AstarColor_t632668764_StaticFields, ___NodeConnection_8)); }
	inline Color_t1588175760  get_NodeConnection_8() const { return ___NodeConnection_8; }
	inline Color_t1588175760 * get_address_of_NodeConnection_8() { return &___NodeConnection_8; }
	inline void set_NodeConnection_8(Color_t1588175760  value)
	{
		___NodeConnection_8 = value;
	}

	inline static int32_t get_offset_of_UnwalkableNode_9() { return static_cast<int32_t>(offsetof(AstarColor_t632668764_StaticFields, ___UnwalkableNode_9)); }
	inline Color_t1588175760  get_UnwalkableNode_9() const { return ___UnwalkableNode_9; }
	inline Color_t1588175760 * get_address_of_UnwalkableNode_9() { return &___UnwalkableNode_9; }
	inline void set_UnwalkableNode_9(Color_t1588175760  value)
	{
		___UnwalkableNode_9 = value;
	}

	inline static int32_t get_offset_of_BoundsHandles_10() { return static_cast<int32_t>(offsetof(AstarColor_t632668764_StaticFields, ___BoundsHandles_10)); }
	inline Color_t1588175760  get_BoundsHandles_10() const { return ___BoundsHandles_10; }
	inline Color_t1588175760 * get_address_of_BoundsHandles_10() { return &___BoundsHandles_10; }
	inline void set_BoundsHandles_10(Color_t1588175760  value)
	{
		___BoundsHandles_10 = value;
	}

	inline static int32_t get_offset_of_ConnectionLowLerp_11() { return static_cast<int32_t>(offsetof(AstarColor_t632668764_StaticFields, ___ConnectionLowLerp_11)); }
	inline Color_t1588175760  get_ConnectionLowLerp_11() const { return ___ConnectionLowLerp_11; }
	inline Color_t1588175760 * get_address_of_ConnectionLowLerp_11() { return &___ConnectionLowLerp_11; }
	inline void set_ConnectionLowLerp_11(Color_t1588175760  value)
	{
		___ConnectionLowLerp_11 = value;
	}

	inline static int32_t get_offset_of_ConnectionHighLerp_12() { return static_cast<int32_t>(offsetof(AstarColor_t632668764_StaticFields, ___ConnectionHighLerp_12)); }
	inline Color_t1588175760  get_ConnectionHighLerp_12() const { return ___ConnectionHighLerp_12; }
	inline Color_t1588175760 * get_address_of_ConnectionHighLerp_12() { return &___ConnectionHighLerp_12; }
	inline void set_ConnectionHighLerp_12(Color_t1588175760  value)
	{
		___ConnectionHighLerp_12 = value;
	}

	inline static int32_t get_offset_of_MeshEdgeColor_13() { return static_cast<int32_t>(offsetof(AstarColor_t632668764_StaticFields, ___MeshEdgeColor_13)); }
	inline Color_t1588175760  get_MeshEdgeColor_13() const { return ___MeshEdgeColor_13; }
	inline Color_t1588175760 * get_address_of_MeshEdgeColor_13() { return &___MeshEdgeColor_13; }
	inline void set_MeshEdgeColor_13(Color_t1588175760  value)
	{
		___MeshEdgeColor_13 = value;
	}

	inline static int32_t get_offset_of_MeshColor_14() { return static_cast<int32_t>(offsetof(AstarColor_t632668764_StaticFields, ___MeshColor_14)); }
	inline Color_t1588175760  get_MeshColor_14() const { return ___MeshColor_14; }
	inline Color_t1588175760 * get_address_of_MeshColor_14() { return &___MeshColor_14; }
	inline void set_MeshColor_14(Color_t1588175760  value)
	{
		___MeshColor_14 = value;
	}

	inline static int32_t get_offset_of_AreaColors_15() { return static_cast<int32_t>(offsetof(AstarColor_t632668764_StaticFields, ___AreaColors_15)); }
	inline ColorU5BU5D_t3477081137* get_AreaColors_15() const { return ___AreaColors_15; }
	inline ColorU5BU5D_t3477081137** get_address_of_AreaColors_15() { return &___AreaColors_15; }
	inline void set_AreaColors_15(ColorU5BU5D_t3477081137* value)
	{
		___AreaColors_15 = value;
		Il2CppCodeGenWriteBarrier(&___AreaColors_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
