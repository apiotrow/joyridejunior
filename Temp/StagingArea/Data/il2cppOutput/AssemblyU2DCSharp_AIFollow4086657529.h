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
// UnityEngine.CharacterController
struct CharacterController_t2029520850;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AIFollow
struct  AIFollow_t4086657529  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform AIFollow::target
	Transform_t284553113 * ___target_2;
	// System.Single AIFollow::repathRate
	float ___repathRate_3;
	// System.Single AIFollow::pickNextWaypointDistance
	float ___pickNextWaypointDistance_4;
	// System.Single AIFollow::targetReached
	float ___targetReached_5;
	// System.Single AIFollow::speed
	float ___speed_6;
	// System.Single AIFollow::rotationSpeed
	float ___rotationSpeed_7;
	// System.Boolean AIFollow::drawGizmos
	bool ___drawGizmos_8;
	// System.Boolean AIFollow::canSearch
	bool ___canSearch_9;
	// System.Boolean AIFollow::canMove
	bool ___canMove_10;
	// Seeker AIFollow::seeker
	Seeker_t2472610117 * ___seeker_11;
	// UnityEngine.CharacterController AIFollow::controller
	CharacterController_t2029520850 * ___controller_12;
	// UnityEngine.Transform AIFollow::tr
	Transform_t284553113 * ___tr_13;
	// System.Single AIFollow::lastPathSearch
	float ___lastPathSearch_14;
	// System.Int32 AIFollow::pathIndex
	int32_t ___pathIndex_15;
	// UnityEngine.Vector3[] AIFollow::path
	Vector3U5BU5D_t3227571696* ___path_16;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(AIFollow_t4086657529, ___target_2)); }
	inline Transform_t284553113 * get_target_2() const { return ___target_2; }
	inline Transform_t284553113 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t284553113 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_repathRate_3() { return static_cast<int32_t>(offsetof(AIFollow_t4086657529, ___repathRate_3)); }
	inline float get_repathRate_3() const { return ___repathRate_3; }
	inline float* get_address_of_repathRate_3() { return &___repathRate_3; }
	inline void set_repathRate_3(float value)
	{
		___repathRate_3 = value;
	}

	inline static int32_t get_offset_of_pickNextWaypointDistance_4() { return static_cast<int32_t>(offsetof(AIFollow_t4086657529, ___pickNextWaypointDistance_4)); }
	inline float get_pickNextWaypointDistance_4() const { return ___pickNextWaypointDistance_4; }
	inline float* get_address_of_pickNextWaypointDistance_4() { return &___pickNextWaypointDistance_4; }
	inline void set_pickNextWaypointDistance_4(float value)
	{
		___pickNextWaypointDistance_4 = value;
	}

	inline static int32_t get_offset_of_targetReached_5() { return static_cast<int32_t>(offsetof(AIFollow_t4086657529, ___targetReached_5)); }
	inline float get_targetReached_5() const { return ___targetReached_5; }
	inline float* get_address_of_targetReached_5() { return &___targetReached_5; }
	inline void set_targetReached_5(float value)
	{
		___targetReached_5 = value;
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(AIFollow_t4086657529, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_7() { return static_cast<int32_t>(offsetof(AIFollow_t4086657529, ___rotationSpeed_7)); }
	inline float get_rotationSpeed_7() const { return ___rotationSpeed_7; }
	inline float* get_address_of_rotationSpeed_7() { return &___rotationSpeed_7; }
	inline void set_rotationSpeed_7(float value)
	{
		___rotationSpeed_7 = value;
	}

	inline static int32_t get_offset_of_drawGizmos_8() { return static_cast<int32_t>(offsetof(AIFollow_t4086657529, ___drawGizmos_8)); }
	inline bool get_drawGizmos_8() const { return ___drawGizmos_8; }
	inline bool* get_address_of_drawGizmos_8() { return &___drawGizmos_8; }
	inline void set_drawGizmos_8(bool value)
	{
		___drawGizmos_8 = value;
	}

	inline static int32_t get_offset_of_canSearch_9() { return static_cast<int32_t>(offsetof(AIFollow_t4086657529, ___canSearch_9)); }
	inline bool get_canSearch_9() const { return ___canSearch_9; }
	inline bool* get_address_of_canSearch_9() { return &___canSearch_9; }
	inline void set_canSearch_9(bool value)
	{
		___canSearch_9 = value;
	}

	inline static int32_t get_offset_of_canMove_10() { return static_cast<int32_t>(offsetof(AIFollow_t4086657529, ___canMove_10)); }
	inline bool get_canMove_10() const { return ___canMove_10; }
	inline bool* get_address_of_canMove_10() { return &___canMove_10; }
	inline void set_canMove_10(bool value)
	{
		___canMove_10 = value;
	}

	inline static int32_t get_offset_of_seeker_11() { return static_cast<int32_t>(offsetof(AIFollow_t4086657529, ___seeker_11)); }
	inline Seeker_t2472610117 * get_seeker_11() const { return ___seeker_11; }
	inline Seeker_t2472610117 ** get_address_of_seeker_11() { return &___seeker_11; }
	inline void set_seeker_11(Seeker_t2472610117 * value)
	{
		___seeker_11 = value;
		Il2CppCodeGenWriteBarrier(&___seeker_11, value);
	}

	inline static int32_t get_offset_of_controller_12() { return static_cast<int32_t>(offsetof(AIFollow_t4086657529, ___controller_12)); }
	inline CharacterController_t2029520850 * get_controller_12() const { return ___controller_12; }
	inline CharacterController_t2029520850 ** get_address_of_controller_12() { return &___controller_12; }
	inline void set_controller_12(CharacterController_t2029520850 * value)
	{
		___controller_12 = value;
		Il2CppCodeGenWriteBarrier(&___controller_12, value);
	}

	inline static int32_t get_offset_of_tr_13() { return static_cast<int32_t>(offsetof(AIFollow_t4086657529, ___tr_13)); }
	inline Transform_t284553113 * get_tr_13() const { return ___tr_13; }
	inline Transform_t284553113 ** get_address_of_tr_13() { return &___tr_13; }
	inline void set_tr_13(Transform_t284553113 * value)
	{
		___tr_13 = value;
		Il2CppCodeGenWriteBarrier(&___tr_13, value);
	}

	inline static int32_t get_offset_of_lastPathSearch_14() { return static_cast<int32_t>(offsetof(AIFollow_t4086657529, ___lastPathSearch_14)); }
	inline float get_lastPathSearch_14() const { return ___lastPathSearch_14; }
	inline float* get_address_of_lastPathSearch_14() { return &___lastPathSearch_14; }
	inline void set_lastPathSearch_14(float value)
	{
		___lastPathSearch_14 = value;
	}

	inline static int32_t get_offset_of_pathIndex_15() { return static_cast<int32_t>(offsetof(AIFollow_t4086657529, ___pathIndex_15)); }
	inline int32_t get_pathIndex_15() const { return ___pathIndex_15; }
	inline int32_t* get_address_of_pathIndex_15() { return &___pathIndex_15; }
	inline void set_pathIndex_15(int32_t value)
	{
		___pathIndex_15 = value;
	}

	inline static int32_t get_offset_of_path_16() { return static_cast<int32_t>(offsetof(AIFollow_t4086657529, ___path_16)); }
	inline Vector3U5BU5D_t3227571696* get_path_16() const { return ___path_16; }
	inline Vector3U5BU5D_t3227571696** get_address_of_path_16() { return &___path_16; }
	inline void set_path_16(Vector3U5BU5D_t3227571696* value)
	{
		___path_16 = value;
		Il2CppCodeGenWriteBarrier(&___path_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
