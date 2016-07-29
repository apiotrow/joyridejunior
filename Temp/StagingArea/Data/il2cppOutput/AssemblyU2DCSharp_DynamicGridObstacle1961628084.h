#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Collider
struct Collider_t955670625;
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Bounds3518514978.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DynamicGridObstacle
struct  DynamicGridObstacle_t1961628084  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Collider DynamicGridObstacle::col
	Collider_t955670625 * ___col_2;
	// UnityEngine.Transform DynamicGridObstacle::tr
	Transform_t284553113 * ___tr_3;
	// System.Single DynamicGridObstacle::updateError
	float ___updateError_4;
	// System.Single DynamicGridObstacle::checkTime
	float ___checkTime_5;
	// UnityEngine.Bounds DynamicGridObstacle::prevBounds
	Bounds_t3518514978  ___prevBounds_6;
	// UnityEngine.Quaternion DynamicGridObstacle::prevRotation
	Quaternion_t1891715979  ___prevRotation_7;
	// System.Boolean DynamicGridObstacle::prevEnabled
	bool ___prevEnabled_8;
	// System.Single DynamicGridObstacle::lastCheckTime
	float ___lastCheckTime_9;

public:
	inline static int32_t get_offset_of_col_2() { return static_cast<int32_t>(offsetof(DynamicGridObstacle_t1961628084, ___col_2)); }
	inline Collider_t955670625 * get_col_2() const { return ___col_2; }
	inline Collider_t955670625 ** get_address_of_col_2() { return &___col_2; }
	inline void set_col_2(Collider_t955670625 * value)
	{
		___col_2 = value;
		Il2CppCodeGenWriteBarrier(&___col_2, value);
	}

	inline static int32_t get_offset_of_tr_3() { return static_cast<int32_t>(offsetof(DynamicGridObstacle_t1961628084, ___tr_3)); }
	inline Transform_t284553113 * get_tr_3() const { return ___tr_3; }
	inline Transform_t284553113 ** get_address_of_tr_3() { return &___tr_3; }
	inline void set_tr_3(Transform_t284553113 * value)
	{
		___tr_3 = value;
		Il2CppCodeGenWriteBarrier(&___tr_3, value);
	}

	inline static int32_t get_offset_of_updateError_4() { return static_cast<int32_t>(offsetof(DynamicGridObstacle_t1961628084, ___updateError_4)); }
	inline float get_updateError_4() const { return ___updateError_4; }
	inline float* get_address_of_updateError_4() { return &___updateError_4; }
	inline void set_updateError_4(float value)
	{
		___updateError_4 = value;
	}

	inline static int32_t get_offset_of_checkTime_5() { return static_cast<int32_t>(offsetof(DynamicGridObstacle_t1961628084, ___checkTime_5)); }
	inline float get_checkTime_5() const { return ___checkTime_5; }
	inline float* get_address_of_checkTime_5() { return &___checkTime_5; }
	inline void set_checkTime_5(float value)
	{
		___checkTime_5 = value;
	}

	inline static int32_t get_offset_of_prevBounds_6() { return static_cast<int32_t>(offsetof(DynamicGridObstacle_t1961628084, ___prevBounds_6)); }
	inline Bounds_t3518514978  get_prevBounds_6() const { return ___prevBounds_6; }
	inline Bounds_t3518514978 * get_address_of_prevBounds_6() { return &___prevBounds_6; }
	inline void set_prevBounds_6(Bounds_t3518514978  value)
	{
		___prevBounds_6 = value;
	}

	inline static int32_t get_offset_of_prevRotation_7() { return static_cast<int32_t>(offsetof(DynamicGridObstacle_t1961628084, ___prevRotation_7)); }
	inline Quaternion_t1891715979  get_prevRotation_7() const { return ___prevRotation_7; }
	inline Quaternion_t1891715979 * get_address_of_prevRotation_7() { return &___prevRotation_7; }
	inline void set_prevRotation_7(Quaternion_t1891715979  value)
	{
		___prevRotation_7 = value;
	}

	inline static int32_t get_offset_of_prevEnabled_8() { return static_cast<int32_t>(offsetof(DynamicGridObstacle_t1961628084, ___prevEnabled_8)); }
	inline bool get_prevEnabled_8() const { return ___prevEnabled_8; }
	inline bool* get_address_of_prevEnabled_8() { return &___prevEnabled_8; }
	inline void set_prevEnabled_8(bool value)
	{
		___prevEnabled_8 = value;
	}

	inline static int32_t get_offset_of_lastCheckTime_9() { return static_cast<int32_t>(offsetof(DynamicGridObstacle_t1961628084, ___lastCheckTime_9)); }
	inline float get_lastCheckTime_9() const { return ___lastCheckTime_9; }
	inline float* get_address_of_lastCheckTime_9() { return &___lastCheckTime_9; }
	inline void set_lastCheckTime_9(float value)
	{
		___lastCheckTime_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
