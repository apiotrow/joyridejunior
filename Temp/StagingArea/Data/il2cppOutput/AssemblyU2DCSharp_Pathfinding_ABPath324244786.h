#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.GraphNode
struct GraphNode_t3525007772;
// Pathfinding.PathNode
struct PathNode_t3993763123;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "AssemblyU2DCSharp_Pathfinding_Path2697364881.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_Pathfinding_Int32697168784.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.ABPath
struct  ABPath_t324244786  : public Path_t2697364881
{
public:
	// System.Boolean Pathfinding.ABPath::recalcStartEndCosts
	bool ___recalcStartEndCosts_30;
	// Pathfinding.GraphNode Pathfinding.ABPath::startNode
	GraphNode_t3525007772 * ___startNode_31;
	// Pathfinding.GraphNode Pathfinding.ABPath::endNode
	GraphNode_t3525007772 * ___endNode_32;
	// Pathfinding.GraphNode Pathfinding.ABPath::startHint
	GraphNode_t3525007772 * ___startHint_33;
	// Pathfinding.GraphNode Pathfinding.ABPath::endHint
	GraphNode_t3525007772 * ___endHint_34;
	// UnityEngine.Vector3 Pathfinding.ABPath::originalStartPoint
	Vector3_t3525329789  ___originalStartPoint_35;
	// UnityEngine.Vector3 Pathfinding.ABPath::originalEndPoint
	Vector3_t3525329789  ___originalEndPoint_36;
	// UnityEngine.Vector3 Pathfinding.ABPath::startPoint
	Vector3_t3525329789  ___startPoint_37;
	// UnityEngine.Vector3 Pathfinding.ABPath::endPoint
	Vector3_t3525329789  ___endPoint_38;
	// Pathfinding.Int3 Pathfinding.ABPath::startIntPoint
	Int3_t2697168784  ___startIntPoint_39;
	// System.Boolean Pathfinding.ABPath::calculatePartial
	bool ___calculatePartial_40;
	// Pathfinding.PathNode Pathfinding.ABPath::partialBestTarget
	PathNode_t3993763123 * ___partialBestTarget_41;
	// System.Int32[] Pathfinding.ABPath::endNodeCosts
	Int32U5BU5D_t1809983122* ___endNodeCosts_42;

public:
	inline static int32_t get_offset_of_recalcStartEndCosts_30() { return static_cast<int32_t>(offsetof(ABPath_t324244786, ___recalcStartEndCosts_30)); }
	inline bool get_recalcStartEndCosts_30() const { return ___recalcStartEndCosts_30; }
	inline bool* get_address_of_recalcStartEndCosts_30() { return &___recalcStartEndCosts_30; }
	inline void set_recalcStartEndCosts_30(bool value)
	{
		___recalcStartEndCosts_30 = value;
	}

	inline static int32_t get_offset_of_startNode_31() { return static_cast<int32_t>(offsetof(ABPath_t324244786, ___startNode_31)); }
	inline GraphNode_t3525007772 * get_startNode_31() const { return ___startNode_31; }
	inline GraphNode_t3525007772 ** get_address_of_startNode_31() { return &___startNode_31; }
	inline void set_startNode_31(GraphNode_t3525007772 * value)
	{
		___startNode_31 = value;
		Il2CppCodeGenWriteBarrier(&___startNode_31, value);
	}

	inline static int32_t get_offset_of_endNode_32() { return static_cast<int32_t>(offsetof(ABPath_t324244786, ___endNode_32)); }
	inline GraphNode_t3525007772 * get_endNode_32() const { return ___endNode_32; }
	inline GraphNode_t3525007772 ** get_address_of_endNode_32() { return &___endNode_32; }
	inline void set_endNode_32(GraphNode_t3525007772 * value)
	{
		___endNode_32 = value;
		Il2CppCodeGenWriteBarrier(&___endNode_32, value);
	}

	inline static int32_t get_offset_of_startHint_33() { return static_cast<int32_t>(offsetof(ABPath_t324244786, ___startHint_33)); }
	inline GraphNode_t3525007772 * get_startHint_33() const { return ___startHint_33; }
	inline GraphNode_t3525007772 ** get_address_of_startHint_33() { return &___startHint_33; }
	inline void set_startHint_33(GraphNode_t3525007772 * value)
	{
		___startHint_33 = value;
		Il2CppCodeGenWriteBarrier(&___startHint_33, value);
	}

	inline static int32_t get_offset_of_endHint_34() { return static_cast<int32_t>(offsetof(ABPath_t324244786, ___endHint_34)); }
	inline GraphNode_t3525007772 * get_endHint_34() const { return ___endHint_34; }
	inline GraphNode_t3525007772 ** get_address_of_endHint_34() { return &___endHint_34; }
	inline void set_endHint_34(GraphNode_t3525007772 * value)
	{
		___endHint_34 = value;
		Il2CppCodeGenWriteBarrier(&___endHint_34, value);
	}

	inline static int32_t get_offset_of_originalStartPoint_35() { return static_cast<int32_t>(offsetof(ABPath_t324244786, ___originalStartPoint_35)); }
	inline Vector3_t3525329789  get_originalStartPoint_35() const { return ___originalStartPoint_35; }
	inline Vector3_t3525329789 * get_address_of_originalStartPoint_35() { return &___originalStartPoint_35; }
	inline void set_originalStartPoint_35(Vector3_t3525329789  value)
	{
		___originalStartPoint_35 = value;
	}

	inline static int32_t get_offset_of_originalEndPoint_36() { return static_cast<int32_t>(offsetof(ABPath_t324244786, ___originalEndPoint_36)); }
	inline Vector3_t3525329789  get_originalEndPoint_36() const { return ___originalEndPoint_36; }
	inline Vector3_t3525329789 * get_address_of_originalEndPoint_36() { return &___originalEndPoint_36; }
	inline void set_originalEndPoint_36(Vector3_t3525329789  value)
	{
		___originalEndPoint_36 = value;
	}

	inline static int32_t get_offset_of_startPoint_37() { return static_cast<int32_t>(offsetof(ABPath_t324244786, ___startPoint_37)); }
	inline Vector3_t3525329789  get_startPoint_37() const { return ___startPoint_37; }
	inline Vector3_t3525329789 * get_address_of_startPoint_37() { return &___startPoint_37; }
	inline void set_startPoint_37(Vector3_t3525329789  value)
	{
		___startPoint_37 = value;
	}

	inline static int32_t get_offset_of_endPoint_38() { return static_cast<int32_t>(offsetof(ABPath_t324244786, ___endPoint_38)); }
	inline Vector3_t3525329789  get_endPoint_38() const { return ___endPoint_38; }
	inline Vector3_t3525329789 * get_address_of_endPoint_38() { return &___endPoint_38; }
	inline void set_endPoint_38(Vector3_t3525329789  value)
	{
		___endPoint_38 = value;
	}

	inline static int32_t get_offset_of_startIntPoint_39() { return static_cast<int32_t>(offsetof(ABPath_t324244786, ___startIntPoint_39)); }
	inline Int3_t2697168784  get_startIntPoint_39() const { return ___startIntPoint_39; }
	inline Int3_t2697168784 * get_address_of_startIntPoint_39() { return &___startIntPoint_39; }
	inline void set_startIntPoint_39(Int3_t2697168784  value)
	{
		___startIntPoint_39 = value;
	}

	inline static int32_t get_offset_of_calculatePartial_40() { return static_cast<int32_t>(offsetof(ABPath_t324244786, ___calculatePartial_40)); }
	inline bool get_calculatePartial_40() const { return ___calculatePartial_40; }
	inline bool* get_address_of_calculatePartial_40() { return &___calculatePartial_40; }
	inline void set_calculatePartial_40(bool value)
	{
		___calculatePartial_40 = value;
	}

	inline static int32_t get_offset_of_partialBestTarget_41() { return static_cast<int32_t>(offsetof(ABPath_t324244786, ___partialBestTarget_41)); }
	inline PathNode_t3993763123 * get_partialBestTarget_41() const { return ___partialBestTarget_41; }
	inline PathNode_t3993763123 ** get_address_of_partialBestTarget_41() { return &___partialBestTarget_41; }
	inline void set_partialBestTarget_41(PathNode_t3993763123 * value)
	{
		___partialBestTarget_41 = value;
		Il2CppCodeGenWriteBarrier(&___partialBestTarget_41, value);
	}

	inline static int32_t get_offset_of_endNodeCosts_42() { return static_cast<int32_t>(offsetof(ABPath_t324244786, ___endNodeCosts_42)); }
	inline Int32U5BU5D_t1809983122* get_endNodeCosts_42() const { return ___endNodeCosts_42; }
	inline Int32U5BU5D_t1809983122** get_address_of_endNodeCosts_42() { return &___endNodeCosts_42; }
	inline void set_endNodeCosts_42(Int32U5BU5D_t1809983122* value)
	{
		___endNodeCosts_42 = value;
		Il2CppCodeGenWriteBarrier(&___endNodeCosts_42, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
