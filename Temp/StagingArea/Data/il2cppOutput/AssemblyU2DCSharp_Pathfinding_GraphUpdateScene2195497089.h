#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;

#include "AssemblyU2DCSharp_Pathfinding_GraphModifier2580797297.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.GraphUpdateScene
struct  GraphUpdateScene_t2195497089  : public GraphModifier_t2580797297
{
public:
	// UnityEngine.Vector3[] Pathfinding.GraphUpdateScene::points
	Vector3U5BU5D_t3227571696* ___points_5;
	// UnityEngine.Vector3[] Pathfinding.GraphUpdateScene::convexPoints
	Vector3U5BU5D_t3227571696* ___convexPoints_6;
	// System.Boolean Pathfinding.GraphUpdateScene::convex
	bool ___convex_7;
	// System.Single Pathfinding.GraphUpdateScene::minBoundsHeight
	float ___minBoundsHeight_8;
	// System.Int32 Pathfinding.GraphUpdateScene::penaltyDelta
	int32_t ___penaltyDelta_9;
	// System.Boolean Pathfinding.GraphUpdateScene::modifyWalkability
	bool ___modifyWalkability_10;
	// System.Boolean Pathfinding.GraphUpdateScene::setWalkability
	bool ___setWalkability_11;
	// System.Boolean Pathfinding.GraphUpdateScene::applyOnStart
	bool ___applyOnStart_12;
	// System.Boolean Pathfinding.GraphUpdateScene::applyOnScan
	bool ___applyOnScan_13;
	// System.Boolean Pathfinding.GraphUpdateScene::useWorldSpace
	bool ___useWorldSpace_14;
	// System.Boolean Pathfinding.GraphUpdateScene::updatePhysics
	bool ___updatePhysics_15;
	// System.Boolean Pathfinding.GraphUpdateScene::resetPenaltyOnPhysics
	bool ___resetPenaltyOnPhysics_16;
	// System.Boolean Pathfinding.GraphUpdateScene::updateErosion
	bool ___updateErosion_17;
	// System.Boolean Pathfinding.GraphUpdateScene::lockToY
	bool ___lockToY_18;
	// System.Single Pathfinding.GraphUpdateScene::lockToYValue
	float ___lockToYValue_19;
	// System.Boolean Pathfinding.GraphUpdateScene::modifyTag
	bool ___modifyTag_20;
	// System.Int32 Pathfinding.GraphUpdateScene::setTag
	int32_t ___setTag_21;
	// System.Int32 Pathfinding.GraphUpdateScene::setTagInvert
	int32_t ___setTagInvert_22;
	// System.Boolean Pathfinding.GraphUpdateScene::firstApplied
	bool ___firstApplied_23;

public:
	inline static int32_t get_offset_of_points_5() { return static_cast<int32_t>(offsetof(GraphUpdateScene_t2195497089, ___points_5)); }
	inline Vector3U5BU5D_t3227571696* get_points_5() const { return ___points_5; }
	inline Vector3U5BU5D_t3227571696** get_address_of_points_5() { return &___points_5; }
	inline void set_points_5(Vector3U5BU5D_t3227571696* value)
	{
		___points_5 = value;
		Il2CppCodeGenWriteBarrier(&___points_5, value);
	}

	inline static int32_t get_offset_of_convexPoints_6() { return static_cast<int32_t>(offsetof(GraphUpdateScene_t2195497089, ___convexPoints_6)); }
	inline Vector3U5BU5D_t3227571696* get_convexPoints_6() const { return ___convexPoints_6; }
	inline Vector3U5BU5D_t3227571696** get_address_of_convexPoints_6() { return &___convexPoints_6; }
	inline void set_convexPoints_6(Vector3U5BU5D_t3227571696* value)
	{
		___convexPoints_6 = value;
		Il2CppCodeGenWriteBarrier(&___convexPoints_6, value);
	}

	inline static int32_t get_offset_of_convex_7() { return static_cast<int32_t>(offsetof(GraphUpdateScene_t2195497089, ___convex_7)); }
	inline bool get_convex_7() const { return ___convex_7; }
	inline bool* get_address_of_convex_7() { return &___convex_7; }
	inline void set_convex_7(bool value)
	{
		___convex_7 = value;
	}

	inline static int32_t get_offset_of_minBoundsHeight_8() { return static_cast<int32_t>(offsetof(GraphUpdateScene_t2195497089, ___minBoundsHeight_8)); }
	inline float get_minBoundsHeight_8() const { return ___minBoundsHeight_8; }
	inline float* get_address_of_minBoundsHeight_8() { return &___minBoundsHeight_8; }
	inline void set_minBoundsHeight_8(float value)
	{
		___minBoundsHeight_8 = value;
	}

	inline static int32_t get_offset_of_penaltyDelta_9() { return static_cast<int32_t>(offsetof(GraphUpdateScene_t2195497089, ___penaltyDelta_9)); }
	inline int32_t get_penaltyDelta_9() const { return ___penaltyDelta_9; }
	inline int32_t* get_address_of_penaltyDelta_9() { return &___penaltyDelta_9; }
	inline void set_penaltyDelta_9(int32_t value)
	{
		___penaltyDelta_9 = value;
	}

	inline static int32_t get_offset_of_modifyWalkability_10() { return static_cast<int32_t>(offsetof(GraphUpdateScene_t2195497089, ___modifyWalkability_10)); }
	inline bool get_modifyWalkability_10() const { return ___modifyWalkability_10; }
	inline bool* get_address_of_modifyWalkability_10() { return &___modifyWalkability_10; }
	inline void set_modifyWalkability_10(bool value)
	{
		___modifyWalkability_10 = value;
	}

	inline static int32_t get_offset_of_setWalkability_11() { return static_cast<int32_t>(offsetof(GraphUpdateScene_t2195497089, ___setWalkability_11)); }
	inline bool get_setWalkability_11() const { return ___setWalkability_11; }
	inline bool* get_address_of_setWalkability_11() { return &___setWalkability_11; }
	inline void set_setWalkability_11(bool value)
	{
		___setWalkability_11 = value;
	}

	inline static int32_t get_offset_of_applyOnStart_12() { return static_cast<int32_t>(offsetof(GraphUpdateScene_t2195497089, ___applyOnStart_12)); }
	inline bool get_applyOnStart_12() const { return ___applyOnStart_12; }
	inline bool* get_address_of_applyOnStart_12() { return &___applyOnStart_12; }
	inline void set_applyOnStart_12(bool value)
	{
		___applyOnStart_12 = value;
	}

	inline static int32_t get_offset_of_applyOnScan_13() { return static_cast<int32_t>(offsetof(GraphUpdateScene_t2195497089, ___applyOnScan_13)); }
	inline bool get_applyOnScan_13() const { return ___applyOnScan_13; }
	inline bool* get_address_of_applyOnScan_13() { return &___applyOnScan_13; }
	inline void set_applyOnScan_13(bool value)
	{
		___applyOnScan_13 = value;
	}

	inline static int32_t get_offset_of_useWorldSpace_14() { return static_cast<int32_t>(offsetof(GraphUpdateScene_t2195497089, ___useWorldSpace_14)); }
	inline bool get_useWorldSpace_14() const { return ___useWorldSpace_14; }
	inline bool* get_address_of_useWorldSpace_14() { return &___useWorldSpace_14; }
	inline void set_useWorldSpace_14(bool value)
	{
		___useWorldSpace_14 = value;
	}

	inline static int32_t get_offset_of_updatePhysics_15() { return static_cast<int32_t>(offsetof(GraphUpdateScene_t2195497089, ___updatePhysics_15)); }
	inline bool get_updatePhysics_15() const { return ___updatePhysics_15; }
	inline bool* get_address_of_updatePhysics_15() { return &___updatePhysics_15; }
	inline void set_updatePhysics_15(bool value)
	{
		___updatePhysics_15 = value;
	}

	inline static int32_t get_offset_of_resetPenaltyOnPhysics_16() { return static_cast<int32_t>(offsetof(GraphUpdateScene_t2195497089, ___resetPenaltyOnPhysics_16)); }
	inline bool get_resetPenaltyOnPhysics_16() const { return ___resetPenaltyOnPhysics_16; }
	inline bool* get_address_of_resetPenaltyOnPhysics_16() { return &___resetPenaltyOnPhysics_16; }
	inline void set_resetPenaltyOnPhysics_16(bool value)
	{
		___resetPenaltyOnPhysics_16 = value;
	}

	inline static int32_t get_offset_of_updateErosion_17() { return static_cast<int32_t>(offsetof(GraphUpdateScene_t2195497089, ___updateErosion_17)); }
	inline bool get_updateErosion_17() const { return ___updateErosion_17; }
	inline bool* get_address_of_updateErosion_17() { return &___updateErosion_17; }
	inline void set_updateErosion_17(bool value)
	{
		___updateErosion_17 = value;
	}

	inline static int32_t get_offset_of_lockToY_18() { return static_cast<int32_t>(offsetof(GraphUpdateScene_t2195497089, ___lockToY_18)); }
	inline bool get_lockToY_18() const { return ___lockToY_18; }
	inline bool* get_address_of_lockToY_18() { return &___lockToY_18; }
	inline void set_lockToY_18(bool value)
	{
		___lockToY_18 = value;
	}

	inline static int32_t get_offset_of_lockToYValue_19() { return static_cast<int32_t>(offsetof(GraphUpdateScene_t2195497089, ___lockToYValue_19)); }
	inline float get_lockToYValue_19() const { return ___lockToYValue_19; }
	inline float* get_address_of_lockToYValue_19() { return &___lockToYValue_19; }
	inline void set_lockToYValue_19(float value)
	{
		___lockToYValue_19 = value;
	}

	inline static int32_t get_offset_of_modifyTag_20() { return static_cast<int32_t>(offsetof(GraphUpdateScene_t2195497089, ___modifyTag_20)); }
	inline bool get_modifyTag_20() const { return ___modifyTag_20; }
	inline bool* get_address_of_modifyTag_20() { return &___modifyTag_20; }
	inline void set_modifyTag_20(bool value)
	{
		___modifyTag_20 = value;
	}

	inline static int32_t get_offset_of_setTag_21() { return static_cast<int32_t>(offsetof(GraphUpdateScene_t2195497089, ___setTag_21)); }
	inline int32_t get_setTag_21() const { return ___setTag_21; }
	inline int32_t* get_address_of_setTag_21() { return &___setTag_21; }
	inline void set_setTag_21(int32_t value)
	{
		___setTag_21 = value;
	}

	inline static int32_t get_offset_of_setTagInvert_22() { return static_cast<int32_t>(offsetof(GraphUpdateScene_t2195497089, ___setTagInvert_22)); }
	inline int32_t get_setTagInvert_22() const { return ___setTagInvert_22; }
	inline int32_t* get_address_of_setTagInvert_22() { return &___setTagInvert_22; }
	inline void set_setTagInvert_22(int32_t value)
	{
		___setTagInvert_22 = value;
	}

	inline static int32_t get_offset_of_firstApplied_23() { return static_cast<int32_t>(offsetof(GraphUpdateScene_t2195497089, ___firstApplied_23)); }
	inline bool get_firstApplied_23() const { return ___firstApplied_23; }
	inline bool* get_address_of_firstApplied_23() { return &___firstApplied_23; }
	inline void set_firstApplied_23(bool value)
	{
		___firstApplied_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
