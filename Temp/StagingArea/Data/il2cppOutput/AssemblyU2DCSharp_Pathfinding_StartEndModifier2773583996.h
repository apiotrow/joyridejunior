#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`1<UnityEngine.Vector3>
struct Func_1_t373143740;
// System.Collections.Generic.List`1<Pathfinding.GraphNode>
struct List_1_t26999445;
// Pathfinding.GraphNodeDelegate
struct GraphNodeDelegate_t1019366209;

#include "AssemblyU2DCSharp_Pathfinding_PathModifier1057675144.h"
#include "AssemblyU2DCSharp_Pathfinding_StartEndModifier_Exa1656839606.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.StartEndModifier
struct  StartEndModifier_t2773583996  : public PathModifier_t1057675144
{
public:
	// System.Boolean Pathfinding.StartEndModifier::addPoints
	bool ___addPoints_1;
	// Pathfinding.StartEndModifier/Exactness Pathfinding.StartEndModifier::exactStartPoint
	int32_t ___exactStartPoint_2;
	// Pathfinding.StartEndModifier/Exactness Pathfinding.StartEndModifier::exactEndPoint
	int32_t ___exactEndPoint_3;
	// System.Func`1<UnityEngine.Vector3> Pathfinding.StartEndModifier::adjustStartPoint
	Func_1_t373143740 * ___adjustStartPoint_4;
	// System.Boolean Pathfinding.StartEndModifier::useRaycasting
	bool ___useRaycasting_5;
	// UnityEngine.LayerMask Pathfinding.StartEndModifier::mask
	LayerMask_t1862190090  ___mask_6;
	// System.Boolean Pathfinding.StartEndModifier::useGraphRaycasting
	bool ___useGraphRaycasting_7;
	// System.Collections.Generic.List`1<Pathfinding.GraphNode> Pathfinding.StartEndModifier::connectionBuffer
	List_1_t26999445 * ___connectionBuffer_8;
	// Pathfinding.GraphNodeDelegate Pathfinding.StartEndModifier::connectionBufferAddDelegate
	GraphNodeDelegate_t1019366209 * ___connectionBufferAddDelegate_9;

public:
	inline static int32_t get_offset_of_addPoints_1() { return static_cast<int32_t>(offsetof(StartEndModifier_t2773583996, ___addPoints_1)); }
	inline bool get_addPoints_1() const { return ___addPoints_1; }
	inline bool* get_address_of_addPoints_1() { return &___addPoints_1; }
	inline void set_addPoints_1(bool value)
	{
		___addPoints_1 = value;
	}

	inline static int32_t get_offset_of_exactStartPoint_2() { return static_cast<int32_t>(offsetof(StartEndModifier_t2773583996, ___exactStartPoint_2)); }
	inline int32_t get_exactStartPoint_2() const { return ___exactStartPoint_2; }
	inline int32_t* get_address_of_exactStartPoint_2() { return &___exactStartPoint_2; }
	inline void set_exactStartPoint_2(int32_t value)
	{
		___exactStartPoint_2 = value;
	}

	inline static int32_t get_offset_of_exactEndPoint_3() { return static_cast<int32_t>(offsetof(StartEndModifier_t2773583996, ___exactEndPoint_3)); }
	inline int32_t get_exactEndPoint_3() const { return ___exactEndPoint_3; }
	inline int32_t* get_address_of_exactEndPoint_3() { return &___exactEndPoint_3; }
	inline void set_exactEndPoint_3(int32_t value)
	{
		___exactEndPoint_3 = value;
	}

	inline static int32_t get_offset_of_adjustStartPoint_4() { return static_cast<int32_t>(offsetof(StartEndModifier_t2773583996, ___adjustStartPoint_4)); }
	inline Func_1_t373143740 * get_adjustStartPoint_4() const { return ___adjustStartPoint_4; }
	inline Func_1_t373143740 ** get_address_of_adjustStartPoint_4() { return &___adjustStartPoint_4; }
	inline void set_adjustStartPoint_4(Func_1_t373143740 * value)
	{
		___adjustStartPoint_4 = value;
		Il2CppCodeGenWriteBarrier(&___adjustStartPoint_4, value);
	}

	inline static int32_t get_offset_of_useRaycasting_5() { return static_cast<int32_t>(offsetof(StartEndModifier_t2773583996, ___useRaycasting_5)); }
	inline bool get_useRaycasting_5() const { return ___useRaycasting_5; }
	inline bool* get_address_of_useRaycasting_5() { return &___useRaycasting_5; }
	inline void set_useRaycasting_5(bool value)
	{
		___useRaycasting_5 = value;
	}

	inline static int32_t get_offset_of_mask_6() { return static_cast<int32_t>(offsetof(StartEndModifier_t2773583996, ___mask_6)); }
	inline LayerMask_t1862190090  get_mask_6() const { return ___mask_6; }
	inline LayerMask_t1862190090 * get_address_of_mask_6() { return &___mask_6; }
	inline void set_mask_6(LayerMask_t1862190090  value)
	{
		___mask_6 = value;
	}

	inline static int32_t get_offset_of_useGraphRaycasting_7() { return static_cast<int32_t>(offsetof(StartEndModifier_t2773583996, ___useGraphRaycasting_7)); }
	inline bool get_useGraphRaycasting_7() const { return ___useGraphRaycasting_7; }
	inline bool* get_address_of_useGraphRaycasting_7() { return &___useGraphRaycasting_7; }
	inline void set_useGraphRaycasting_7(bool value)
	{
		___useGraphRaycasting_7 = value;
	}

	inline static int32_t get_offset_of_connectionBuffer_8() { return static_cast<int32_t>(offsetof(StartEndModifier_t2773583996, ___connectionBuffer_8)); }
	inline List_1_t26999445 * get_connectionBuffer_8() const { return ___connectionBuffer_8; }
	inline List_1_t26999445 ** get_address_of_connectionBuffer_8() { return &___connectionBuffer_8; }
	inline void set_connectionBuffer_8(List_1_t26999445 * value)
	{
		___connectionBuffer_8 = value;
		Il2CppCodeGenWriteBarrier(&___connectionBuffer_8, value);
	}

	inline static int32_t get_offset_of_connectionBufferAddDelegate_9() { return static_cast<int32_t>(offsetof(StartEndModifier_t2773583996, ___connectionBufferAddDelegate_9)); }
	inline GraphNodeDelegate_t1019366209 * get_connectionBufferAddDelegate_9() const { return ___connectionBufferAddDelegate_9; }
	inline GraphNodeDelegate_t1019366209 ** get_address_of_connectionBufferAddDelegate_9() { return &___connectionBufferAddDelegate_9; }
	inline void set_connectionBufferAddDelegate_9(GraphNodeDelegate_t1019366209 * value)
	{
		___connectionBufferAddDelegate_9 = value;
		Il2CppCodeGenWriteBarrier(&___connectionBufferAddDelegate_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
