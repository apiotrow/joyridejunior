#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Pathfinding_ColliderType3342172858.h"
#include "AssemblyU2DCSharp_Pathfinding_RayDirection922222561.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.GraphCollision
struct  GraphCollision_t2946873072  : public Il2CppObject
{
public:
	// Pathfinding.ColliderType Pathfinding.GraphCollision::type
	int32_t ___type_1;
	// System.Single Pathfinding.GraphCollision::diameter
	float ___diameter_2;
	// System.Single Pathfinding.GraphCollision::height
	float ___height_3;
	// System.Single Pathfinding.GraphCollision::collisionOffset
	float ___collisionOffset_4;
	// Pathfinding.RayDirection Pathfinding.GraphCollision::rayDirection
	int32_t ___rayDirection_5;
	// UnityEngine.LayerMask Pathfinding.GraphCollision::mask
	LayerMask_t1862190090  ___mask_6;
	// UnityEngine.LayerMask Pathfinding.GraphCollision::heightMask
	LayerMask_t1862190090  ___heightMask_7;
	// System.Single Pathfinding.GraphCollision::fromHeight
	float ___fromHeight_8;
	// System.Boolean Pathfinding.GraphCollision::thickRaycast
	bool ___thickRaycast_9;
	// System.Single Pathfinding.GraphCollision::thickRaycastDiameter
	float ___thickRaycastDiameter_10;
	// System.Boolean Pathfinding.GraphCollision::unwalkableWhenNoGround
	bool ___unwalkableWhenNoGround_11;
	// System.Boolean Pathfinding.GraphCollision::use2D
	bool ___use2D_12;
	// System.Boolean Pathfinding.GraphCollision::collisionCheck
	bool ___collisionCheck_13;
	// System.Boolean Pathfinding.GraphCollision::heightCheck
	bool ___heightCheck_14;
	// UnityEngine.Vector3 Pathfinding.GraphCollision::up
	Vector3_t3525329789  ___up_15;
	// UnityEngine.Vector3 Pathfinding.GraphCollision::upheight
	Vector3_t3525329789  ___upheight_16;
	// System.Single Pathfinding.GraphCollision::finalRadius
	float ___finalRadius_17;
	// System.Single Pathfinding.GraphCollision::finalRaycastRadius
	float ___finalRaycastRadius_18;

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(GraphCollision_t2946873072, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_diameter_2() { return static_cast<int32_t>(offsetof(GraphCollision_t2946873072, ___diameter_2)); }
	inline float get_diameter_2() const { return ___diameter_2; }
	inline float* get_address_of_diameter_2() { return &___diameter_2; }
	inline void set_diameter_2(float value)
	{
		___diameter_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(GraphCollision_t2946873072, ___height_3)); }
	inline float get_height_3() const { return ___height_3; }
	inline float* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(float value)
	{
		___height_3 = value;
	}

	inline static int32_t get_offset_of_collisionOffset_4() { return static_cast<int32_t>(offsetof(GraphCollision_t2946873072, ___collisionOffset_4)); }
	inline float get_collisionOffset_4() const { return ___collisionOffset_4; }
	inline float* get_address_of_collisionOffset_4() { return &___collisionOffset_4; }
	inline void set_collisionOffset_4(float value)
	{
		___collisionOffset_4 = value;
	}

	inline static int32_t get_offset_of_rayDirection_5() { return static_cast<int32_t>(offsetof(GraphCollision_t2946873072, ___rayDirection_5)); }
	inline int32_t get_rayDirection_5() const { return ___rayDirection_5; }
	inline int32_t* get_address_of_rayDirection_5() { return &___rayDirection_5; }
	inline void set_rayDirection_5(int32_t value)
	{
		___rayDirection_5 = value;
	}

	inline static int32_t get_offset_of_mask_6() { return static_cast<int32_t>(offsetof(GraphCollision_t2946873072, ___mask_6)); }
	inline LayerMask_t1862190090  get_mask_6() const { return ___mask_6; }
	inline LayerMask_t1862190090 * get_address_of_mask_6() { return &___mask_6; }
	inline void set_mask_6(LayerMask_t1862190090  value)
	{
		___mask_6 = value;
	}

	inline static int32_t get_offset_of_heightMask_7() { return static_cast<int32_t>(offsetof(GraphCollision_t2946873072, ___heightMask_7)); }
	inline LayerMask_t1862190090  get_heightMask_7() const { return ___heightMask_7; }
	inline LayerMask_t1862190090 * get_address_of_heightMask_7() { return &___heightMask_7; }
	inline void set_heightMask_7(LayerMask_t1862190090  value)
	{
		___heightMask_7 = value;
	}

	inline static int32_t get_offset_of_fromHeight_8() { return static_cast<int32_t>(offsetof(GraphCollision_t2946873072, ___fromHeight_8)); }
	inline float get_fromHeight_8() const { return ___fromHeight_8; }
	inline float* get_address_of_fromHeight_8() { return &___fromHeight_8; }
	inline void set_fromHeight_8(float value)
	{
		___fromHeight_8 = value;
	}

	inline static int32_t get_offset_of_thickRaycast_9() { return static_cast<int32_t>(offsetof(GraphCollision_t2946873072, ___thickRaycast_9)); }
	inline bool get_thickRaycast_9() const { return ___thickRaycast_9; }
	inline bool* get_address_of_thickRaycast_9() { return &___thickRaycast_9; }
	inline void set_thickRaycast_9(bool value)
	{
		___thickRaycast_9 = value;
	}

	inline static int32_t get_offset_of_thickRaycastDiameter_10() { return static_cast<int32_t>(offsetof(GraphCollision_t2946873072, ___thickRaycastDiameter_10)); }
	inline float get_thickRaycastDiameter_10() const { return ___thickRaycastDiameter_10; }
	inline float* get_address_of_thickRaycastDiameter_10() { return &___thickRaycastDiameter_10; }
	inline void set_thickRaycastDiameter_10(float value)
	{
		___thickRaycastDiameter_10 = value;
	}

	inline static int32_t get_offset_of_unwalkableWhenNoGround_11() { return static_cast<int32_t>(offsetof(GraphCollision_t2946873072, ___unwalkableWhenNoGround_11)); }
	inline bool get_unwalkableWhenNoGround_11() const { return ___unwalkableWhenNoGround_11; }
	inline bool* get_address_of_unwalkableWhenNoGround_11() { return &___unwalkableWhenNoGround_11; }
	inline void set_unwalkableWhenNoGround_11(bool value)
	{
		___unwalkableWhenNoGround_11 = value;
	}

	inline static int32_t get_offset_of_use2D_12() { return static_cast<int32_t>(offsetof(GraphCollision_t2946873072, ___use2D_12)); }
	inline bool get_use2D_12() const { return ___use2D_12; }
	inline bool* get_address_of_use2D_12() { return &___use2D_12; }
	inline void set_use2D_12(bool value)
	{
		___use2D_12 = value;
	}

	inline static int32_t get_offset_of_collisionCheck_13() { return static_cast<int32_t>(offsetof(GraphCollision_t2946873072, ___collisionCheck_13)); }
	inline bool get_collisionCheck_13() const { return ___collisionCheck_13; }
	inline bool* get_address_of_collisionCheck_13() { return &___collisionCheck_13; }
	inline void set_collisionCheck_13(bool value)
	{
		___collisionCheck_13 = value;
	}

	inline static int32_t get_offset_of_heightCheck_14() { return static_cast<int32_t>(offsetof(GraphCollision_t2946873072, ___heightCheck_14)); }
	inline bool get_heightCheck_14() const { return ___heightCheck_14; }
	inline bool* get_address_of_heightCheck_14() { return &___heightCheck_14; }
	inline void set_heightCheck_14(bool value)
	{
		___heightCheck_14 = value;
	}

	inline static int32_t get_offset_of_up_15() { return static_cast<int32_t>(offsetof(GraphCollision_t2946873072, ___up_15)); }
	inline Vector3_t3525329789  get_up_15() const { return ___up_15; }
	inline Vector3_t3525329789 * get_address_of_up_15() { return &___up_15; }
	inline void set_up_15(Vector3_t3525329789  value)
	{
		___up_15 = value;
	}

	inline static int32_t get_offset_of_upheight_16() { return static_cast<int32_t>(offsetof(GraphCollision_t2946873072, ___upheight_16)); }
	inline Vector3_t3525329789  get_upheight_16() const { return ___upheight_16; }
	inline Vector3_t3525329789 * get_address_of_upheight_16() { return &___upheight_16; }
	inline void set_upheight_16(Vector3_t3525329789  value)
	{
		___upheight_16 = value;
	}

	inline static int32_t get_offset_of_finalRadius_17() { return static_cast<int32_t>(offsetof(GraphCollision_t2946873072, ___finalRadius_17)); }
	inline float get_finalRadius_17() const { return ___finalRadius_17; }
	inline float* get_address_of_finalRadius_17() { return &___finalRadius_17; }
	inline void set_finalRadius_17(float value)
	{
		___finalRadius_17 = value;
	}

	inline static int32_t get_offset_of_finalRaycastRadius_18() { return static_cast<int32_t>(offsetof(GraphCollision_t2946873072, ___finalRaycastRadius_18)); }
	inline float get_finalRaycastRadius_18() const { return ___finalRaycastRadius_18; }
	inline float* get_address_of_finalRaycastRadius_18() { return &___finalRaycastRadius_18; }
	inline void set_finalRaycastRadius_18(float value)
	{
		___finalRaycastRadius_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
