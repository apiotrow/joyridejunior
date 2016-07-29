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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AstarSmoothFollow2
struct  AstarSmoothFollow2_t2943886784  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform AstarSmoothFollow2::target
	Transform_t284553113 * ___target_2;
	// System.Single AstarSmoothFollow2::distance
	float ___distance_3;
	// System.Single AstarSmoothFollow2::height
	float ___height_4;
	// System.Single AstarSmoothFollow2::damping
	float ___damping_5;
	// System.Boolean AstarSmoothFollow2::smoothRotation
	bool ___smoothRotation_6;
	// System.Boolean AstarSmoothFollow2::followBehind
	bool ___followBehind_7;
	// System.Single AstarSmoothFollow2::rotationDamping
	float ___rotationDamping_8;
	// System.Boolean AstarSmoothFollow2::staticOffset
	bool ___staticOffset_9;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(AstarSmoothFollow2_t2943886784, ___target_2)); }
	inline Transform_t284553113 * get_target_2() const { return ___target_2; }
	inline Transform_t284553113 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t284553113 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_distance_3() { return static_cast<int32_t>(offsetof(AstarSmoothFollow2_t2943886784, ___distance_3)); }
	inline float get_distance_3() const { return ___distance_3; }
	inline float* get_address_of_distance_3() { return &___distance_3; }
	inline void set_distance_3(float value)
	{
		___distance_3 = value;
	}

	inline static int32_t get_offset_of_height_4() { return static_cast<int32_t>(offsetof(AstarSmoothFollow2_t2943886784, ___height_4)); }
	inline float get_height_4() const { return ___height_4; }
	inline float* get_address_of_height_4() { return &___height_4; }
	inline void set_height_4(float value)
	{
		___height_4 = value;
	}

	inline static int32_t get_offset_of_damping_5() { return static_cast<int32_t>(offsetof(AstarSmoothFollow2_t2943886784, ___damping_5)); }
	inline float get_damping_5() const { return ___damping_5; }
	inline float* get_address_of_damping_5() { return &___damping_5; }
	inline void set_damping_5(float value)
	{
		___damping_5 = value;
	}

	inline static int32_t get_offset_of_smoothRotation_6() { return static_cast<int32_t>(offsetof(AstarSmoothFollow2_t2943886784, ___smoothRotation_6)); }
	inline bool get_smoothRotation_6() const { return ___smoothRotation_6; }
	inline bool* get_address_of_smoothRotation_6() { return &___smoothRotation_6; }
	inline void set_smoothRotation_6(bool value)
	{
		___smoothRotation_6 = value;
	}

	inline static int32_t get_offset_of_followBehind_7() { return static_cast<int32_t>(offsetof(AstarSmoothFollow2_t2943886784, ___followBehind_7)); }
	inline bool get_followBehind_7() const { return ___followBehind_7; }
	inline bool* get_address_of_followBehind_7() { return &___followBehind_7; }
	inline void set_followBehind_7(bool value)
	{
		___followBehind_7 = value;
	}

	inline static int32_t get_offset_of_rotationDamping_8() { return static_cast<int32_t>(offsetof(AstarSmoothFollow2_t2943886784, ___rotationDamping_8)); }
	inline float get_rotationDamping_8() const { return ___rotationDamping_8; }
	inline float* get_address_of_rotationDamping_8() { return &___rotationDamping_8; }
	inline void set_rotationDamping_8(float value)
	{
		___rotationDamping_8 = value;
	}

	inline static int32_t get_offset_of_staticOffset_9() { return static_cast<int32_t>(offsetof(AstarSmoothFollow2_t2943886784, ___staticOffset_9)); }
	inline bool get_staticOffset_9() const { return ___staticOffset_9; }
	inline bool* get_address_of_staticOffset_9() { return &___staticOffset_9; }
	inline void set_staticOffset_9(bool value)
	{
		___staticOffset_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
