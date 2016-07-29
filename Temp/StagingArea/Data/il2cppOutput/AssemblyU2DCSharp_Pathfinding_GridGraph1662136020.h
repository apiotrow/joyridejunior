#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.GraphCollision
struct GraphCollision_t2946873072;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.UInt32[]
struct UInt32U5BU5D_t2133601851;
// Pathfinding.GridNode[]
struct GridNodeU5BU5D_t1318463069;

#include "AssemblyU2DCSharp_Pathfinding_NavGraph535983959.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Bounds3518514978.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "AssemblyU2DCSharp_Pathfinding_NumNeighbours3196851528.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.GridGraph
struct  GridGraph_t1662136020  : public NavGraph_t535983959
{
public:
	// System.Int32 Pathfinding.GridGraph::width
	int32_t ___width_12;
	// System.Int32 Pathfinding.GridGraph::depth
	int32_t ___depth_13;
	// System.Single Pathfinding.GridGraph::aspectRatio
	float ___aspectRatio_14;
	// System.Single Pathfinding.GridGraph::isometricAngle
	float ___isometricAngle_15;
	// System.Boolean Pathfinding.GridGraph::uniformEdgeCosts
	bool ___uniformEdgeCosts_16;
	// UnityEngine.Vector3 Pathfinding.GridGraph::rotation
	Vector3_t3525329789  ___rotation_17;
	// UnityEngine.Bounds Pathfinding.GridGraph::bounds
	Bounds_t3518514978  ___bounds_18;
	// UnityEngine.Vector3 Pathfinding.GridGraph::center
	Vector3_t3525329789  ___center_19;
	// UnityEngine.Vector2 Pathfinding.GridGraph::unclampedSize
	Vector2_t3525329788  ___unclampedSize_20;
	// System.Single Pathfinding.GridGraph::nodeSize
	float ___nodeSize_21;
	// Pathfinding.GraphCollision Pathfinding.GridGraph::collision
	GraphCollision_t2946873072 * ___collision_22;
	// System.Single Pathfinding.GridGraph::maxClimb
	float ___maxClimb_23;
	// System.Int32 Pathfinding.GridGraph::maxClimbAxis
	int32_t ___maxClimbAxis_24;
	// System.Single Pathfinding.GridGraph::maxSlope
	float ___maxSlope_25;
	// System.Int32 Pathfinding.GridGraph::erodeIterations
	int32_t ___erodeIterations_26;
	// System.Boolean Pathfinding.GridGraph::erosionUseTags
	bool ___erosionUseTags_27;
	// System.Int32 Pathfinding.GridGraph::erosionFirstTag
	int32_t ___erosionFirstTag_28;
	// System.Boolean Pathfinding.GridGraph::autoLinkGrids
	bool ___autoLinkGrids_29;
	// System.Single Pathfinding.GridGraph::autoLinkDistLimit
	float ___autoLinkDistLimit_30;
	// Pathfinding.NumNeighbours Pathfinding.GridGraph::neighbours
	int32_t ___neighbours_31;
	// System.Boolean Pathfinding.GridGraph::cutCorners
	bool ___cutCorners_32;
	// System.Single Pathfinding.GridGraph::penaltyPositionOffset
	float ___penaltyPositionOffset_33;
	// System.Boolean Pathfinding.GridGraph::penaltyPosition
	bool ___penaltyPosition_34;
	// System.Single Pathfinding.GridGraph::penaltyPositionFactor
	float ___penaltyPositionFactor_35;
	// System.Boolean Pathfinding.GridGraph::penaltyAngle
	bool ___penaltyAngle_36;
	// System.Single Pathfinding.GridGraph::penaltyAngleFactor
	float ___penaltyAngleFactor_37;
	// System.Single Pathfinding.GridGraph::penaltyAnglePower
	float ___penaltyAnglePower_38;
	// System.Int32[] Pathfinding.GridGraph::neighbourOffsets
	Int32U5BU5D_t1809983122* ___neighbourOffsets_39;
	// System.UInt32[] Pathfinding.GridGraph::neighbourCosts
	UInt32U5BU5D_t2133601851* ___neighbourCosts_40;
	// System.Int32[] Pathfinding.GridGraph::neighbourXOffsets
	Int32U5BU5D_t1809983122* ___neighbourXOffsets_41;
	// System.Int32[] Pathfinding.GridGraph::neighbourZOffsets
	Int32U5BU5D_t1809983122* ___neighbourZOffsets_42;
	// Pathfinding.GridNode[] Pathfinding.GridGraph::nodes
	GridNodeU5BU5D_t1318463069* ___nodes_44;
	// UnityEngine.Vector2 Pathfinding.GridGraph::<size>k__BackingField
	Vector2_t3525329788  ___U3CsizeU3Ek__BackingField_45;
	// UnityEngine.Matrix4x4 Pathfinding.GridGraph::<boundsMatrix>k__BackingField
	Matrix4x4_t277289660  ___U3CboundsMatrixU3Ek__BackingField_46;

public:
	inline static int32_t get_offset_of_width_12() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___width_12)); }
	inline int32_t get_width_12() const { return ___width_12; }
	inline int32_t* get_address_of_width_12() { return &___width_12; }
	inline void set_width_12(int32_t value)
	{
		___width_12 = value;
	}

	inline static int32_t get_offset_of_depth_13() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___depth_13)); }
	inline int32_t get_depth_13() const { return ___depth_13; }
	inline int32_t* get_address_of_depth_13() { return &___depth_13; }
	inline void set_depth_13(int32_t value)
	{
		___depth_13 = value;
	}

	inline static int32_t get_offset_of_aspectRatio_14() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___aspectRatio_14)); }
	inline float get_aspectRatio_14() const { return ___aspectRatio_14; }
	inline float* get_address_of_aspectRatio_14() { return &___aspectRatio_14; }
	inline void set_aspectRatio_14(float value)
	{
		___aspectRatio_14 = value;
	}

	inline static int32_t get_offset_of_isometricAngle_15() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___isometricAngle_15)); }
	inline float get_isometricAngle_15() const { return ___isometricAngle_15; }
	inline float* get_address_of_isometricAngle_15() { return &___isometricAngle_15; }
	inline void set_isometricAngle_15(float value)
	{
		___isometricAngle_15 = value;
	}

	inline static int32_t get_offset_of_uniformEdgeCosts_16() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___uniformEdgeCosts_16)); }
	inline bool get_uniformEdgeCosts_16() const { return ___uniformEdgeCosts_16; }
	inline bool* get_address_of_uniformEdgeCosts_16() { return &___uniformEdgeCosts_16; }
	inline void set_uniformEdgeCosts_16(bool value)
	{
		___uniformEdgeCosts_16 = value;
	}

	inline static int32_t get_offset_of_rotation_17() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___rotation_17)); }
	inline Vector3_t3525329789  get_rotation_17() const { return ___rotation_17; }
	inline Vector3_t3525329789 * get_address_of_rotation_17() { return &___rotation_17; }
	inline void set_rotation_17(Vector3_t3525329789  value)
	{
		___rotation_17 = value;
	}

	inline static int32_t get_offset_of_bounds_18() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___bounds_18)); }
	inline Bounds_t3518514978  get_bounds_18() const { return ___bounds_18; }
	inline Bounds_t3518514978 * get_address_of_bounds_18() { return &___bounds_18; }
	inline void set_bounds_18(Bounds_t3518514978  value)
	{
		___bounds_18 = value;
	}

	inline static int32_t get_offset_of_center_19() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___center_19)); }
	inline Vector3_t3525329789  get_center_19() const { return ___center_19; }
	inline Vector3_t3525329789 * get_address_of_center_19() { return &___center_19; }
	inline void set_center_19(Vector3_t3525329789  value)
	{
		___center_19 = value;
	}

	inline static int32_t get_offset_of_unclampedSize_20() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___unclampedSize_20)); }
	inline Vector2_t3525329788  get_unclampedSize_20() const { return ___unclampedSize_20; }
	inline Vector2_t3525329788 * get_address_of_unclampedSize_20() { return &___unclampedSize_20; }
	inline void set_unclampedSize_20(Vector2_t3525329788  value)
	{
		___unclampedSize_20 = value;
	}

	inline static int32_t get_offset_of_nodeSize_21() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___nodeSize_21)); }
	inline float get_nodeSize_21() const { return ___nodeSize_21; }
	inline float* get_address_of_nodeSize_21() { return &___nodeSize_21; }
	inline void set_nodeSize_21(float value)
	{
		___nodeSize_21 = value;
	}

	inline static int32_t get_offset_of_collision_22() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___collision_22)); }
	inline GraphCollision_t2946873072 * get_collision_22() const { return ___collision_22; }
	inline GraphCollision_t2946873072 ** get_address_of_collision_22() { return &___collision_22; }
	inline void set_collision_22(GraphCollision_t2946873072 * value)
	{
		___collision_22 = value;
		Il2CppCodeGenWriteBarrier(&___collision_22, value);
	}

	inline static int32_t get_offset_of_maxClimb_23() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___maxClimb_23)); }
	inline float get_maxClimb_23() const { return ___maxClimb_23; }
	inline float* get_address_of_maxClimb_23() { return &___maxClimb_23; }
	inline void set_maxClimb_23(float value)
	{
		___maxClimb_23 = value;
	}

	inline static int32_t get_offset_of_maxClimbAxis_24() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___maxClimbAxis_24)); }
	inline int32_t get_maxClimbAxis_24() const { return ___maxClimbAxis_24; }
	inline int32_t* get_address_of_maxClimbAxis_24() { return &___maxClimbAxis_24; }
	inline void set_maxClimbAxis_24(int32_t value)
	{
		___maxClimbAxis_24 = value;
	}

	inline static int32_t get_offset_of_maxSlope_25() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___maxSlope_25)); }
	inline float get_maxSlope_25() const { return ___maxSlope_25; }
	inline float* get_address_of_maxSlope_25() { return &___maxSlope_25; }
	inline void set_maxSlope_25(float value)
	{
		___maxSlope_25 = value;
	}

	inline static int32_t get_offset_of_erodeIterations_26() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___erodeIterations_26)); }
	inline int32_t get_erodeIterations_26() const { return ___erodeIterations_26; }
	inline int32_t* get_address_of_erodeIterations_26() { return &___erodeIterations_26; }
	inline void set_erodeIterations_26(int32_t value)
	{
		___erodeIterations_26 = value;
	}

	inline static int32_t get_offset_of_erosionUseTags_27() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___erosionUseTags_27)); }
	inline bool get_erosionUseTags_27() const { return ___erosionUseTags_27; }
	inline bool* get_address_of_erosionUseTags_27() { return &___erosionUseTags_27; }
	inline void set_erosionUseTags_27(bool value)
	{
		___erosionUseTags_27 = value;
	}

	inline static int32_t get_offset_of_erosionFirstTag_28() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___erosionFirstTag_28)); }
	inline int32_t get_erosionFirstTag_28() const { return ___erosionFirstTag_28; }
	inline int32_t* get_address_of_erosionFirstTag_28() { return &___erosionFirstTag_28; }
	inline void set_erosionFirstTag_28(int32_t value)
	{
		___erosionFirstTag_28 = value;
	}

	inline static int32_t get_offset_of_autoLinkGrids_29() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___autoLinkGrids_29)); }
	inline bool get_autoLinkGrids_29() const { return ___autoLinkGrids_29; }
	inline bool* get_address_of_autoLinkGrids_29() { return &___autoLinkGrids_29; }
	inline void set_autoLinkGrids_29(bool value)
	{
		___autoLinkGrids_29 = value;
	}

	inline static int32_t get_offset_of_autoLinkDistLimit_30() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___autoLinkDistLimit_30)); }
	inline float get_autoLinkDistLimit_30() const { return ___autoLinkDistLimit_30; }
	inline float* get_address_of_autoLinkDistLimit_30() { return &___autoLinkDistLimit_30; }
	inline void set_autoLinkDistLimit_30(float value)
	{
		___autoLinkDistLimit_30 = value;
	}

	inline static int32_t get_offset_of_neighbours_31() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___neighbours_31)); }
	inline int32_t get_neighbours_31() const { return ___neighbours_31; }
	inline int32_t* get_address_of_neighbours_31() { return &___neighbours_31; }
	inline void set_neighbours_31(int32_t value)
	{
		___neighbours_31 = value;
	}

	inline static int32_t get_offset_of_cutCorners_32() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___cutCorners_32)); }
	inline bool get_cutCorners_32() const { return ___cutCorners_32; }
	inline bool* get_address_of_cutCorners_32() { return &___cutCorners_32; }
	inline void set_cutCorners_32(bool value)
	{
		___cutCorners_32 = value;
	}

	inline static int32_t get_offset_of_penaltyPositionOffset_33() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___penaltyPositionOffset_33)); }
	inline float get_penaltyPositionOffset_33() const { return ___penaltyPositionOffset_33; }
	inline float* get_address_of_penaltyPositionOffset_33() { return &___penaltyPositionOffset_33; }
	inline void set_penaltyPositionOffset_33(float value)
	{
		___penaltyPositionOffset_33 = value;
	}

	inline static int32_t get_offset_of_penaltyPosition_34() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___penaltyPosition_34)); }
	inline bool get_penaltyPosition_34() const { return ___penaltyPosition_34; }
	inline bool* get_address_of_penaltyPosition_34() { return &___penaltyPosition_34; }
	inline void set_penaltyPosition_34(bool value)
	{
		___penaltyPosition_34 = value;
	}

	inline static int32_t get_offset_of_penaltyPositionFactor_35() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___penaltyPositionFactor_35)); }
	inline float get_penaltyPositionFactor_35() const { return ___penaltyPositionFactor_35; }
	inline float* get_address_of_penaltyPositionFactor_35() { return &___penaltyPositionFactor_35; }
	inline void set_penaltyPositionFactor_35(float value)
	{
		___penaltyPositionFactor_35 = value;
	}

	inline static int32_t get_offset_of_penaltyAngle_36() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___penaltyAngle_36)); }
	inline bool get_penaltyAngle_36() const { return ___penaltyAngle_36; }
	inline bool* get_address_of_penaltyAngle_36() { return &___penaltyAngle_36; }
	inline void set_penaltyAngle_36(bool value)
	{
		___penaltyAngle_36 = value;
	}

	inline static int32_t get_offset_of_penaltyAngleFactor_37() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___penaltyAngleFactor_37)); }
	inline float get_penaltyAngleFactor_37() const { return ___penaltyAngleFactor_37; }
	inline float* get_address_of_penaltyAngleFactor_37() { return &___penaltyAngleFactor_37; }
	inline void set_penaltyAngleFactor_37(float value)
	{
		___penaltyAngleFactor_37 = value;
	}

	inline static int32_t get_offset_of_penaltyAnglePower_38() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___penaltyAnglePower_38)); }
	inline float get_penaltyAnglePower_38() const { return ___penaltyAnglePower_38; }
	inline float* get_address_of_penaltyAnglePower_38() { return &___penaltyAnglePower_38; }
	inline void set_penaltyAnglePower_38(float value)
	{
		___penaltyAnglePower_38 = value;
	}

	inline static int32_t get_offset_of_neighbourOffsets_39() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___neighbourOffsets_39)); }
	inline Int32U5BU5D_t1809983122* get_neighbourOffsets_39() const { return ___neighbourOffsets_39; }
	inline Int32U5BU5D_t1809983122** get_address_of_neighbourOffsets_39() { return &___neighbourOffsets_39; }
	inline void set_neighbourOffsets_39(Int32U5BU5D_t1809983122* value)
	{
		___neighbourOffsets_39 = value;
		Il2CppCodeGenWriteBarrier(&___neighbourOffsets_39, value);
	}

	inline static int32_t get_offset_of_neighbourCosts_40() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___neighbourCosts_40)); }
	inline UInt32U5BU5D_t2133601851* get_neighbourCosts_40() const { return ___neighbourCosts_40; }
	inline UInt32U5BU5D_t2133601851** get_address_of_neighbourCosts_40() { return &___neighbourCosts_40; }
	inline void set_neighbourCosts_40(UInt32U5BU5D_t2133601851* value)
	{
		___neighbourCosts_40 = value;
		Il2CppCodeGenWriteBarrier(&___neighbourCosts_40, value);
	}

	inline static int32_t get_offset_of_neighbourXOffsets_41() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___neighbourXOffsets_41)); }
	inline Int32U5BU5D_t1809983122* get_neighbourXOffsets_41() const { return ___neighbourXOffsets_41; }
	inline Int32U5BU5D_t1809983122** get_address_of_neighbourXOffsets_41() { return &___neighbourXOffsets_41; }
	inline void set_neighbourXOffsets_41(Int32U5BU5D_t1809983122* value)
	{
		___neighbourXOffsets_41 = value;
		Il2CppCodeGenWriteBarrier(&___neighbourXOffsets_41, value);
	}

	inline static int32_t get_offset_of_neighbourZOffsets_42() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___neighbourZOffsets_42)); }
	inline Int32U5BU5D_t1809983122* get_neighbourZOffsets_42() const { return ___neighbourZOffsets_42; }
	inline Int32U5BU5D_t1809983122** get_address_of_neighbourZOffsets_42() { return &___neighbourZOffsets_42; }
	inline void set_neighbourZOffsets_42(Int32U5BU5D_t1809983122* value)
	{
		___neighbourZOffsets_42 = value;
		Il2CppCodeGenWriteBarrier(&___neighbourZOffsets_42, value);
	}

	inline static int32_t get_offset_of_nodes_44() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___nodes_44)); }
	inline GridNodeU5BU5D_t1318463069* get_nodes_44() const { return ___nodes_44; }
	inline GridNodeU5BU5D_t1318463069** get_address_of_nodes_44() { return &___nodes_44; }
	inline void set_nodes_44(GridNodeU5BU5D_t1318463069* value)
	{
		___nodes_44 = value;
		Il2CppCodeGenWriteBarrier(&___nodes_44, value);
	}

	inline static int32_t get_offset_of_U3CsizeU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___U3CsizeU3Ek__BackingField_45)); }
	inline Vector2_t3525329788  get_U3CsizeU3Ek__BackingField_45() const { return ___U3CsizeU3Ek__BackingField_45; }
	inline Vector2_t3525329788 * get_address_of_U3CsizeU3Ek__BackingField_45() { return &___U3CsizeU3Ek__BackingField_45; }
	inline void set_U3CsizeU3Ek__BackingField_45(Vector2_t3525329788  value)
	{
		___U3CsizeU3Ek__BackingField_45 = value;
	}

	inline static int32_t get_offset_of_U3CboundsMatrixU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020, ___U3CboundsMatrixU3Ek__BackingField_46)); }
	inline Matrix4x4_t277289660  get_U3CboundsMatrixU3Ek__BackingField_46() const { return ___U3CboundsMatrixU3Ek__BackingField_46; }
	inline Matrix4x4_t277289660 * get_address_of_U3CboundsMatrixU3Ek__BackingField_46() { return &___U3CboundsMatrixU3Ek__BackingField_46; }
	inline void set_U3CboundsMatrixU3Ek__BackingField_46(Matrix4x4_t277289660  value)
	{
		___U3CboundsMatrixU3Ek__BackingField_46 = value;
	}
};

struct GridGraph_t1662136020_StaticFields
{
public:
	// System.Int32[] Pathfinding.GridGraph::hexagonNeighbourIndices
	Int32U5BU5D_t1809983122* ___hexagonNeighbourIndices_43;

public:
	inline static int32_t get_offset_of_hexagonNeighbourIndices_43() { return static_cast<int32_t>(offsetof(GridGraph_t1662136020_StaticFields, ___hexagonNeighbourIndices_43)); }
	inline Int32U5BU5D_t1809983122* get_hexagonNeighbourIndices_43() const { return ___hexagonNeighbourIndices_43; }
	inline Int32U5BU5D_t1809983122** get_address_of_hexagonNeighbourIndices_43() { return &___hexagonNeighbourIndices_43; }
	inline void set_hexagonNeighbourIndices_43(Int32U5BU5D_t1809983122* value)
	{
		___hexagonNeighbourIndices_43 = value;
		Il2CppCodeGenWriteBarrier(&___hexagonNeighbourIndices_43, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
