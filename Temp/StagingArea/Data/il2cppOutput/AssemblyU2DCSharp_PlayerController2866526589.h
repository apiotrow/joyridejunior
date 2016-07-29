#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t3632243084;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "AssemblyU2DCSharp_PlayerController_MoveType4255208139.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject PlayerController::player
	GameObject_t4012695102 * ___player_2;
	// UnityEngine.Rigidbody2D PlayerController::playerRB
	Rigidbody2D_t3632243084 * ___playerRB_3;
	// UnityEngine.Vector2 PlayerController::reticleTarget
	Vector2_t3525329788  ___reticleTarget_4;
	// System.Boolean PlayerController::weaponFiring
	bool ___weaponFiring_5;
	// System.Single PlayerController::firingSpeed
	float ___firingSpeed_6;
	// PlayerController/MoveType PlayerController::moveType
	int32_t ___moveType_7;
	// System.Single PlayerController::movSpeed
	float ___movSpeed_8;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___player_2)); }
	inline GameObject_t4012695102 * get_player_2() const { return ___player_2; }
	inline GameObject_t4012695102 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t4012695102 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_playerRB_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___playerRB_3)); }
	inline Rigidbody2D_t3632243084 * get_playerRB_3() const { return ___playerRB_3; }
	inline Rigidbody2D_t3632243084 ** get_address_of_playerRB_3() { return &___playerRB_3; }
	inline void set_playerRB_3(Rigidbody2D_t3632243084 * value)
	{
		___playerRB_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerRB_3, value);
	}

	inline static int32_t get_offset_of_reticleTarget_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___reticleTarget_4)); }
	inline Vector2_t3525329788  get_reticleTarget_4() const { return ___reticleTarget_4; }
	inline Vector2_t3525329788 * get_address_of_reticleTarget_4() { return &___reticleTarget_4; }
	inline void set_reticleTarget_4(Vector2_t3525329788  value)
	{
		___reticleTarget_4 = value;
	}

	inline static int32_t get_offset_of_weaponFiring_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___weaponFiring_5)); }
	inline bool get_weaponFiring_5() const { return ___weaponFiring_5; }
	inline bool* get_address_of_weaponFiring_5() { return &___weaponFiring_5; }
	inline void set_weaponFiring_5(bool value)
	{
		___weaponFiring_5 = value;
	}

	inline static int32_t get_offset_of_firingSpeed_6() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___firingSpeed_6)); }
	inline float get_firingSpeed_6() const { return ___firingSpeed_6; }
	inline float* get_address_of_firingSpeed_6() { return &___firingSpeed_6; }
	inline void set_firingSpeed_6(float value)
	{
		___firingSpeed_6 = value;
	}

	inline static int32_t get_offset_of_moveType_7() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___moveType_7)); }
	inline int32_t get_moveType_7() const { return ___moveType_7; }
	inline int32_t* get_address_of_moveType_7() { return &___moveType_7; }
	inline void set_moveType_7(int32_t value)
	{
		___moveType_7 = value;
	}

	inline static int32_t get_offset_of_movSpeed_8() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___movSpeed_8)); }
	inline float get_movSpeed_8() const { return ___movSpeed_8; }
	inline float* get_address_of_movSpeed_8() { return &___movSpeed_8; }
	inline void set_movSpeed_8(float value)
	{
		___movSpeed_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
