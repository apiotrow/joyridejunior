#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;
// AIPath[]
struct AIPathU5BU5D_t616438592;
// AILerp[]
struct AILerpU5BU5D_t3760092262;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.TargetMover
struct  TargetMover_t2261419228  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.LayerMask Pathfinding.TargetMover::mask
	LayerMask_t1862190090  ___mask_2;
	// UnityEngine.Transform Pathfinding.TargetMover::target
	Transform_t284553113 * ___target_3;
	// AIPath[] Pathfinding.TargetMover::ais2
	AIPathU5BU5D_t616438592* ___ais2_4;
	// AILerp[] Pathfinding.TargetMover::ais3
	AILerpU5BU5D_t3760092262* ___ais3_5;
	// System.Boolean Pathfinding.TargetMover::onlyOnDoubleClick
	bool ___onlyOnDoubleClick_6;
	// System.Boolean Pathfinding.TargetMover::use2D
	bool ___use2D_7;
	// UnityEngine.Camera Pathfinding.TargetMover::cam
	Camera_t3533968274 * ___cam_8;

public:
	inline static int32_t get_offset_of_mask_2() { return static_cast<int32_t>(offsetof(TargetMover_t2261419228, ___mask_2)); }
	inline LayerMask_t1862190090  get_mask_2() const { return ___mask_2; }
	inline LayerMask_t1862190090 * get_address_of_mask_2() { return &___mask_2; }
	inline void set_mask_2(LayerMask_t1862190090  value)
	{
		___mask_2 = value;
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(TargetMover_t2261419228, ___target_3)); }
	inline Transform_t284553113 * get_target_3() const { return ___target_3; }
	inline Transform_t284553113 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Transform_t284553113 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_3, value);
	}

	inline static int32_t get_offset_of_ais2_4() { return static_cast<int32_t>(offsetof(TargetMover_t2261419228, ___ais2_4)); }
	inline AIPathU5BU5D_t616438592* get_ais2_4() const { return ___ais2_4; }
	inline AIPathU5BU5D_t616438592** get_address_of_ais2_4() { return &___ais2_4; }
	inline void set_ais2_4(AIPathU5BU5D_t616438592* value)
	{
		___ais2_4 = value;
		Il2CppCodeGenWriteBarrier(&___ais2_4, value);
	}

	inline static int32_t get_offset_of_ais3_5() { return static_cast<int32_t>(offsetof(TargetMover_t2261419228, ___ais3_5)); }
	inline AILerpU5BU5D_t3760092262* get_ais3_5() const { return ___ais3_5; }
	inline AILerpU5BU5D_t3760092262** get_address_of_ais3_5() { return &___ais3_5; }
	inline void set_ais3_5(AILerpU5BU5D_t3760092262* value)
	{
		___ais3_5 = value;
		Il2CppCodeGenWriteBarrier(&___ais3_5, value);
	}

	inline static int32_t get_offset_of_onlyOnDoubleClick_6() { return static_cast<int32_t>(offsetof(TargetMover_t2261419228, ___onlyOnDoubleClick_6)); }
	inline bool get_onlyOnDoubleClick_6() const { return ___onlyOnDoubleClick_6; }
	inline bool* get_address_of_onlyOnDoubleClick_6() { return &___onlyOnDoubleClick_6; }
	inline void set_onlyOnDoubleClick_6(bool value)
	{
		___onlyOnDoubleClick_6 = value;
	}

	inline static int32_t get_offset_of_use2D_7() { return static_cast<int32_t>(offsetof(TargetMover_t2261419228, ___use2D_7)); }
	inline bool get_use2D_7() const { return ___use2D_7; }
	inline bool* get_address_of_use2D_7() { return &___use2D_7; }
	inline void set_use2D_7(bool value)
	{
		___use2D_7 = value;
	}

	inline static int32_t get_offset_of_cam_8() { return static_cast<int32_t>(offsetof(TargetMover_t2261419228, ___cam_8)); }
	inline Camera_t3533968274 * get_cam_8() const { return ___cam_8; }
	inline Camera_t3533968274 ** get_address_of_cam_8() { return &___cam_8; }
	inline void set_cam_8(Camera_t3533968274 * value)
	{
		___cam_8 = value;
		Il2CppCodeGenWriteBarrier(&___cam_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
