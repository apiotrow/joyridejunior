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
// Pathfinding.Path
struct Path_t2697364881;
// UnityEngine.CharacterController
struct CharacterController_t2029520850;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AIPath
struct  AIPath_t1930792045  : public MonoBehaviour_t3012272455
{
public:
	// System.Single AIPath::repathRate
	float ___repathRate_2;
	// UnityEngine.Transform AIPath::target
	Transform_t284553113 * ___target_3;
	// System.Boolean AIPath::canSearch
	bool ___canSearch_4;
	// System.Boolean AIPath::canMove
	bool ___canMove_5;
	// System.Single AIPath::speed
	float ___speed_6;
	// System.Single AIPath::turningSpeed
	float ___turningSpeed_7;
	// System.Single AIPath::slowdownDistance
	float ___slowdownDistance_8;
	// System.Single AIPath::pickNextWaypointDist
	float ___pickNextWaypointDist_9;
	// System.Single AIPath::forwardLook
	float ___forwardLook_10;
	// System.Single AIPath::endReachedDistance
	float ___endReachedDistance_11;
	// System.Boolean AIPath::closestOnPathCheck
	bool ___closestOnPathCheck_12;
	// System.Single AIPath::minMoveScale
	float ___minMoveScale_13;
	// Seeker AIPath::seeker
	Seeker_t2472610117 * ___seeker_14;
	// UnityEngine.Transform AIPath::tr
	Transform_t284553113 * ___tr_15;
	// System.Single AIPath::lastRepath
	float ___lastRepath_16;
	// Pathfinding.Path AIPath::path
	Path_t2697364881 * ___path_17;
	// UnityEngine.CharacterController AIPath::controller
	CharacterController_t2029520850 * ___controller_18;
	// UnityEngine.Rigidbody AIPath::rigid
	Rigidbody_t1972007546 * ___rigid_19;
	// System.Int32 AIPath::currentWaypointIndex
	int32_t ___currentWaypointIndex_20;
	// System.Boolean AIPath::targetReached
	bool ___targetReached_21;
	// System.Boolean AIPath::canSearchAgain
	bool ___canSearchAgain_22;
	// UnityEngine.Vector3 AIPath::lastFoundWaypointPosition
	Vector3_t3525329789  ___lastFoundWaypointPosition_23;
	// System.Single AIPath::lastFoundWaypointTime
	float ___lastFoundWaypointTime_24;
	// System.Boolean AIPath::startHasRun
	bool ___startHasRun_25;
	// UnityEngine.Vector3 AIPath::targetPoint
	Vector3_t3525329789  ___targetPoint_26;
	// UnityEngine.Vector3 AIPath::targetDirection
	Vector3_t3525329789  ___targetDirection_27;

public:
	inline static int32_t get_offset_of_repathRate_2() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___repathRate_2)); }
	inline float get_repathRate_2() const { return ___repathRate_2; }
	inline float* get_address_of_repathRate_2() { return &___repathRate_2; }
	inline void set_repathRate_2(float value)
	{
		___repathRate_2 = value;
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___target_3)); }
	inline Transform_t284553113 * get_target_3() const { return ___target_3; }
	inline Transform_t284553113 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Transform_t284553113 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_3, value);
	}

	inline static int32_t get_offset_of_canSearch_4() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___canSearch_4)); }
	inline bool get_canSearch_4() const { return ___canSearch_4; }
	inline bool* get_address_of_canSearch_4() { return &___canSearch_4; }
	inline void set_canSearch_4(bool value)
	{
		___canSearch_4 = value;
	}

	inline static int32_t get_offset_of_canMove_5() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___canMove_5)); }
	inline bool get_canMove_5() const { return ___canMove_5; }
	inline bool* get_address_of_canMove_5() { return &___canMove_5; }
	inline void set_canMove_5(bool value)
	{
		___canMove_5 = value;
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_turningSpeed_7() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___turningSpeed_7)); }
	inline float get_turningSpeed_7() const { return ___turningSpeed_7; }
	inline float* get_address_of_turningSpeed_7() { return &___turningSpeed_7; }
	inline void set_turningSpeed_7(float value)
	{
		___turningSpeed_7 = value;
	}

	inline static int32_t get_offset_of_slowdownDistance_8() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___slowdownDistance_8)); }
	inline float get_slowdownDistance_8() const { return ___slowdownDistance_8; }
	inline float* get_address_of_slowdownDistance_8() { return &___slowdownDistance_8; }
	inline void set_slowdownDistance_8(float value)
	{
		___slowdownDistance_8 = value;
	}

	inline static int32_t get_offset_of_pickNextWaypointDist_9() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___pickNextWaypointDist_9)); }
	inline float get_pickNextWaypointDist_9() const { return ___pickNextWaypointDist_9; }
	inline float* get_address_of_pickNextWaypointDist_9() { return &___pickNextWaypointDist_9; }
	inline void set_pickNextWaypointDist_9(float value)
	{
		___pickNextWaypointDist_9 = value;
	}

	inline static int32_t get_offset_of_forwardLook_10() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___forwardLook_10)); }
	inline float get_forwardLook_10() const { return ___forwardLook_10; }
	inline float* get_address_of_forwardLook_10() { return &___forwardLook_10; }
	inline void set_forwardLook_10(float value)
	{
		___forwardLook_10 = value;
	}

	inline static int32_t get_offset_of_endReachedDistance_11() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___endReachedDistance_11)); }
	inline float get_endReachedDistance_11() const { return ___endReachedDistance_11; }
	inline float* get_address_of_endReachedDistance_11() { return &___endReachedDistance_11; }
	inline void set_endReachedDistance_11(float value)
	{
		___endReachedDistance_11 = value;
	}

	inline static int32_t get_offset_of_closestOnPathCheck_12() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___closestOnPathCheck_12)); }
	inline bool get_closestOnPathCheck_12() const { return ___closestOnPathCheck_12; }
	inline bool* get_address_of_closestOnPathCheck_12() { return &___closestOnPathCheck_12; }
	inline void set_closestOnPathCheck_12(bool value)
	{
		___closestOnPathCheck_12 = value;
	}

	inline static int32_t get_offset_of_minMoveScale_13() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___minMoveScale_13)); }
	inline float get_minMoveScale_13() const { return ___minMoveScale_13; }
	inline float* get_address_of_minMoveScale_13() { return &___minMoveScale_13; }
	inline void set_minMoveScale_13(float value)
	{
		___minMoveScale_13 = value;
	}

	inline static int32_t get_offset_of_seeker_14() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___seeker_14)); }
	inline Seeker_t2472610117 * get_seeker_14() const { return ___seeker_14; }
	inline Seeker_t2472610117 ** get_address_of_seeker_14() { return &___seeker_14; }
	inline void set_seeker_14(Seeker_t2472610117 * value)
	{
		___seeker_14 = value;
		Il2CppCodeGenWriteBarrier(&___seeker_14, value);
	}

	inline static int32_t get_offset_of_tr_15() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___tr_15)); }
	inline Transform_t284553113 * get_tr_15() const { return ___tr_15; }
	inline Transform_t284553113 ** get_address_of_tr_15() { return &___tr_15; }
	inline void set_tr_15(Transform_t284553113 * value)
	{
		___tr_15 = value;
		Il2CppCodeGenWriteBarrier(&___tr_15, value);
	}

	inline static int32_t get_offset_of_lastRepath_16() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___lastRepath_16)); }
	inline float get_lastRepath_16() const { return ___lastRepath_16; }
	inline float* get_address_of_lastRepath_16() { return &___lastRepath_16; }
	inline void set_lastRepath_16(float value)
	{
		___lastRepath_16 = value;
	}

	inline static int32_t get_offset_of_path_17() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___path_17)); }
	inline Path_t2697364881 * get_path_17() const { return ___path_17; }
	inline Path_t2697364881 ** get_address_of_path_17() { return &___path_17; }
	inline void set_path_17(Path_t2697364881 * value)
	{
		___path_17 = value;
		Il2CppCodeGenWriteBarrier(&___path_17, value);
	}

	inline static int32_t get_offset_of_controller_18() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___controller_18)); }
	inline CharacterController_t2029520850 * get_controller_18() const { return ___controller_18; }
	inline CharacterController_t2029520850 ** get_address_of_controller_18() { return &___controller_18; }
	inline void set_controller_18(CharacterController_t2029520850 * value)
	{
		___controller_18 = value;
		Il2CppCodeGenWriteBarrier(&___controller_18, value);
	}

	inline static int32_t get_offset_of_rigid_19() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___rigid_19)); }
	inline Rigidbody_t1972007546 * get_rigid_19() const { return ___rigid_19; }
	inline Rigidbody_t1972007546 ** get_address_of_rigid_19() { return &___rigid_19; }
	inline void set_rigid_19(Rigidbody_t1972007546 * value)
	{
		___rigid_19 = value;
		Il2CppCodeGenWriteBarrier(&___rigid_19, value);
	}

	inline static int32_t get_offset_of_currentWaypointIndex_20() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___currentWaypointIndex_20)); }
	inline int32_t get_currentWaypointIndex_20() const { return ___currentWaypointIndex_20; }
	inline int32_t* get_address_of_currentWaypointIndex_20() { return &___currentWaypointIndex_20; }
	inline void set_currentWaypointIndex_20(int32_t value)
	{
		___currentWaypointIndex_20 = value;
	}

	inline static int32_t get_offset_of_targetReached_21() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___targetReached_21)); }
	inline bool get_targetReached_21() const { return ___targetReached_21; }
	inline bool* get_address_of_targetReached_21() { return &___targetReached_21; }
	inline void set_targetReached_21(bool value)
	{
		___targetReached_21 = value;
	}

	inline static int32_t get_offset_of_canSearchAgain_22() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___canSearchAgain_22)); }
	inline bool get_canSearchAgain_22() const { return ___canSearchAgain_22; }
	inline bool* get_address_of_canSearchAgain_22() { return &___canSearchAgain_22; }
	inline void set_canSearchAgain_22(bool value)
	{
		___canSearchAgain_22 = value;
	}

	inline static int32_t get_offset_of_lastFoundWaypointPosition_23() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___lastFoundWaypointPosition_23)); }
	inline Vector3_t3525329789  get_lastFoundWaypointPosition_23() const { return ___lastFoundWaypointPosition_23; }
	inline Vector3_t3525329789 * get_address_of_lastFoundWaypointPosition_23() { return &___lastFoundWaypointPosition_23; }
	inline void set_lastFoundWaypointPosition_23(Vector3_t3525329789  value)
	{
		___lastFoundWaypointPosition_23 = value;
	}

	inline static int32_t get_offset_of_lastFoundWaypointTime_24() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___lastFoundWaypointTime_24)); }
	inline float get_lastFoundWaypointTime_24() const { return ___lastFoundWaypointTime_24; }
	inline float* get_address_of_lastFoundWaypointTime_24() { return &___lastFoundWaypointTime_24; }
	inline void set_lastFoundWaypointTime_24(float value)
	{
		___lastFoundWaypointTime_24 = value;
	}

	inline static int32_t get_offset_of_startHasRun_25() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___startHasRun_25)); }
	inline bool get_startHasRun_25() const { return ___startHasRun_25; }
	inline bool* get_address_of_startHasRun_25() { return &___startHasRun_25; }
	inline void set_startHasRun_25(bool value)
	{
		___startHasRun_25 = value;
	}

	inline static int32_t get_offset_of_targetPoint_26() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___targetPoint_26)); }
	inline Vector3_t3525329789  get_targetPoint_26() const { return ___targetPoint_26; }
	inline Vector3_t3525329789 * get_address_of_targetPoint_26() { return &___targetPoint_26; }
	inline void set_targetPoint_26(Vector3_t3525329789  value)
	{
		___targetPoint_26 = value;
	}

	inline static int32_t get_offset_of_targetDirection_27() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___targetDirection_27)); }
	inline Vector3_t3525329789  get_targetDirection_27() const { return ___targetDirection_27; }
	inline Vector3_t3525329789 * get_address_of_targetDirection_27() { return &___targetDirection_27; }
	inline void set_targetDirection_27(Vector3_t3525329789  value)
	{
		___targetDirection_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
