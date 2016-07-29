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
// Seeker
struct Seeker_t2472610117;
// Pathfinding.ABPath
struct ABPath_t324244786;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AILerp
struct  AILerp_t1930676671  : public MonoBehaviour_t3012272455
{
public:
	// System.Single AILerp::repathRate
	float ___repathRate_2;
	// UnityEngine.Transform AILerp::target
	Transform_t284553113 * ___target_3;
	// System.Boolean AILerp::canSearch
	bool ___canSearch_4;
	// System.Boolean AILerp::canMove
	bool ___canMove_5;
	// System.Single AILerp::speed
	float ___speed_6;
	// System.Boolean AILerp::enableRotation
	bool ___enableRotation_7;
	// System.Boolean AILerp::rotationIn2D
	bool ___rotationIn2D_8;
	// System.Single AILerp::rotationSpeed
	float ___rotationSpeed_9;
	// System.Boolean AILerp::interpolatePathSwitches
	bool ___interpolatePathSwitches_10;
	// System.Single AILerp::switchPathInterpolationSpeed
	float ___switchPathInterpolationSpeed_11;
	// Seeker AILerp::seeker
	Seeker_t2472610117 * ___seeker_12;
	// UnityEngine.Transform AILerp::tr
	Transform_t284553113 * ___tr_13;
	// System.Single AILerp::lastRepath
	float ___lastRepath_14;
	// Pathfinding.ABPath AILerp::path
	ABPath_t324244786 * ___path_15;
	// System.Int32 AILerp::currentWaypointIndex
	int32_t ___currentWaypointIndex_16;
	// System.Single AILerp::distanceAlongSegment
	float ___distanceAlongSegment_17;
	// System.Boolean AILerp::canSearchAgain
	bool ___canSearchAgain_18;
	// UnityEngine.Vector3 AILerp::previousMovementOrigin
	Vector3_t3525329789  ___previousMovementOrigin_19;
	// UnityEngine.Vector3 AILerp::previousMovementDirection
	Vector3_t3525329789  ___previousMovementDirection_20;
	// System.Single AILerp::previousMovementStartTime
	float ___previousMovementStartTime_21;
	// System.Boolean AILerp::startHasRun
	bool ___startHasRun_22;
	// System.Boolean AILerp::<targetReached>k__BackingField
	bool ___U3CtargetReachedU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_repathRate_2() { return static_cast<int32_t>(offsetof(AILerp_t1930676671, ___repathRate_2)); }
	inline float get_repathRate_2() const { return ___repathRate_2; }
	inline float* get_address_of_repathRate_2() { return &___repathRate_2; }
	inline void set_repathRate_2(float value)
	{
		___repathRate_2 = value;
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(AILerp_t1930676671, ___target_3)); }
	inline Transform_t284553113 * get_target_3() const { return ___target_3; }
	inline Transform_t284553113 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Transform_t284553113 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_3, value);
	}

	inline static int32_t get_offset_of_canSearch_4() { return static_cast<int32_t>(offsetof(AILerp_t1930676671, ___canSearch_4)); }
	inline bool get_canSearch_4() const { return ___canSearch_4; }
	inline bool* get_address_of_canSearch_4() { return &___canSearch_4; }
	inline void set_canSearch_4(bool value)
	{
		___canSearch_4 = value;
	}

	inline static int32_t get_offset_of_canMove_5() { return static_cast<int32_t>(offsetof(AILerp_t1930676671, ___canMove_5)); }
	inline bool get_canMove_5() const { return ___canMove_5; }
	inline bool* get_address_of_canMove_5() { return &___canMove_5; }
	inline void set_canMove_5(bool value)
	{
		___canMove_5 = value;
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(AILerp_t1930676671, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_enableRotation_7() { return static_cast<int32_t>(offsetof(AILerp_t1930676671, ___enableRotation_7)); }
	inline bool get_enableRotation_7() const { return ___enableRotation_7; }
	inline bool* get_address_of_enableRotation_7() { return &___enableRotation_7; }
	inline void set_enableRotation_7(bool value)
	{
		___enableRotation_7 = value;
	}

	inline static int32_t get_offset_of_rotationIn2D_8() { return static_cast<int32_t>(offsetof(AILerp_t1930676671, ___rotationIn2D_8)); }
	inline bool get_rotationIn2D_8() const { return ___rotationIn2D_8; }
	inline bool* get_address_of_rotationIn2D_8() { return &___rotationIn2D_8; }
	inline void set_rotationIn2D_8(bool value)
	{
		___rotationIn2D_8 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_9() { return static_cast<int32_t>(offsetof(AILerp_t1930676671, ___rotationSpeed_9)); }
	inline float get_rotationSpeed_9() const { return ___rotationSpeed_9; }
	inline float* get_address_of_rotationSpeed_9() { return &___rotationSpeed_9; }
	inline void set_rotationSpeed_9(float value)
	{
		___rotationSpeed_9 = value;
	}

	inline static int32_t get_offset_of_interpolatePathSwitches_10() { return static_cast<int32_t>(offsetof(AILerp_t1930676671, ___interpolatePathSwitches_10)); }
	inline bool get_interpolatePathSwitches_10() const { return ___interpolatePathSwitches_10; }
	inline bool* get_address_of_interpolatePathSwitches_10() { return &___interpolatePathSwitches_10; }
	inline void set_interpolatePathSwitches_10(bool value)
	{
		___interpolatePathSwitches_10 = value;
	}

	inline static int32_t get_offset_of_switchPathInterpolationSpeed_11() { return static_cast<int32_t>(offsetof(AILerp_t1930676671, ___switchPathInterpolationSpeed_11)); }
	inline float get_switchPathInterpolationSpeed_11() const { return ___switchPathInterpolationSpeed_11; }
	inline float* get_address_of_switchPathInterpolationSpeed_11() { return &___switchPathInterpolationSpeed_11; }
	inline void set_switchPathInterpolationSpeed_11(float value)
	{
		___switchPathInterpolationSpeed_11 = value;
	}

	inline static int32_t get_offset_of_seeker_12() { return static_cast<int32_t>(offsetof(AILerp_t1930676671, ___seeker_12)); }
	inline Seeker_t2472610117 * get_seeker_12() const { return ___seeker_12; }
	inline Seeker_t2472610117 ** get_address_of_seeker_12() { return &___seeker_12; }
	inline void set_seeker_12(Seeker_t2472610117 * value)
	{
		___seeker_12 = value;
		Il2CppCodeGenWriteBarrier(&___seeker_12, value);
	}

	inline static int32_t get_offset_of_tr_13() { return static_cast<int32_t>(offsetof(AILerp_t1930676671, ___tr_13)); }
	inline Transform_t284553113 * get_tr_13() const { return ___tr_13; }
	inline Transform_t284553113 ** get_address_of_tr_13() { return &___tr_13; }
	inline void set_tr_13(Transform_t284553113 * value)
	{
		___tr_13 = value;
		Il2CppCodeGenWriteBarrier(&___tr_13, value);
	}

	inline static int32_t get_offset_of_lastRepath_14() { return static_cast<int32_t>(offsetof(AILerp_t1930676671, ___lastRepath_14)); }
	inline float get_lastRepath_14() const { return ___lastRepath_14; }
	inline float* get_address_of_lastRepath_14() { return &___lastRepath_14; }
	inline void set_lastRepath_14(float value)
	{
		___lastRepath_14 = value;
	}

	inline static int32_t get_offset_of_path_15() { return static_cast<int32_t>(offsetof(AILerp_t1930676671, ___path_15)); }
	inline ABPath_t324244786 * get_path_15() const { return ___path_15; }
	inline ABPath_t324244786 ** get_address_of_path_15() { return &___path_15; }
	inline void set_path_15(ABPath_t324244786 * value)
	{
		___path_15 = value;
		Il2CppCodeGenWriteBarrier(&___path_15, value);
	}

	inline static int32_t get_offset_of_currentWaypointIndex_16() { return static_cast<int32_t>(offsetof(AILerp_t1930676671, ___currentWaypointIndex_16)); }
	inline int32_t get_currentWaypointIndex_16() const { return ___currentWaypointIndex_16; }
	inline int32_t* get_address_of_currentWaypointIndex_16() { return &___currentWaypointIndex_16; }
	inline void set_currentWaypointIndex_16(int32_t value)
	{
		___currentWaypointIndex_16 = value;
	}

	inline static int32_t get_offset_of_distanceAlongSegment_17() { return static_cast<int32_t>(offsetof(AILerp_t1930676671, ___distanceAlongSegment_17)); }
	inline float get_distanceAlongSegment_17() const { return ___distanceAlongSegment_17; }
	inline float* get_address_of_distanceAlongSegment_17() { return &___distanceAlongSegment_17; }
	inline void set_distanceAlongSegment_17(float value)
	{
		___distanceAlongSegment_17 = value;
	}

	inline static int32_t get_offset_of_canSearchAgain_18() { return static_cast<int32_t>(offsetof(AILerp_t1930676671, ___canSearchAgain_18)); }
	inline bool get_canSearchAgain_18() const { return ___canSearchAgain_18; }
	inline bool* get_address_of_canSearchAgain_18() { return &___canSearchAgain_18; }
	inline void set_canSearchAgain_18(bool value)
	{
		___canSearchAgain_18 = value;
	}

	inline static int32_t get_offset_of_previousMovementOrigin_19() { return static_cast<int32_t>(offsetof(AILerp_t1930676671, ___previousMovementOrigin_19)); }
	inline Vector3_t3525329789  get_previousMovementOrigin_19() const { return ___previousMovementOrigin_19; }
	inline Vector3_t3525329789 * get_address_of_previousMovementOrigin_19() { return &___previousMovementOrigin_19; }
	inline void set_previousMovementOrigin_19(Vector3_t3525329789  value)
	{
		___previousMovementOrigin_19 = value;
	}

	inline static int32_t get_offset_of_previousMovementDirection_20() { return static_cast<int32_t>(offsetof(AILerp_t1930676671, ___previousMovementDirection_20)); }
	inline Vector3_t3525329789  get_previousMovementDirection_20() const { return ___previousMovementDirection_20; }
	inline Vector3_t3525329789 * get_address_of_previousMovementDirection_20() { return &___previousMovementDirection_20; }
	inline void set_previousMovementDirection_20(Vector3_t3525329789  value)
	{
		___previousMovementDirection_20 = value;
	}

	inline static int32_t get_offset_of_previousMovementStartTime_21() { return static_cast<int32_t>(offsetof(AILerp_t1930676671, ___previousMovementStartTime_21)); }
	inline float get_previousMovementStartTime_21() const { return ___previousMovementStartTime_21; }
	inline float* get_address_of_previousMovementStartTime_21() { return &___previousMovementStartTime_21; }
	inline void set_previousMovementStartTime_21(float value)
	{
		___previousMovementStartTime_21 = value;
	}

	inline static int32_t get_offset_of_startHasRun_22() { return static_cast<int32_t>(offsetof(AILerp_t1930676671, ___startHasRun_22)); }
	inline bool get_startHasRun_22() const { return ___startHasRun_22; }
	inline bool* get_address_of_startHasRun_22() { return &___startHasRun_22; }
	inline void set_startHasRun_22(bool value)
	{
		___startHasRun_22 = value;
	}

	inline static int32_t get_offset_of_U3CtargetReachedU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(AILerp_t1930676671, ___U3CtargetReachedU3Ek__BackingField_23)); }
	inline bool get_U3CtargetReachedU3Ek__BackingField_23() const { return ___U3CtargetReachedU3Ek__BackingField_23; }
	inline bool* get_address_of_U3CtargetReachedU3Ek__BackingField_23() { return &___U3CtargetReachedU3Ek__BackingField_23; }
	inline void set_U3CtargetReachedU3Ek__BackingField_23(bool value)
	{
		___U3CtargetReachedU3Ek__BackingField_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
