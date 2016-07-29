#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerController
struct PlayerController_t2866526589;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Bullet
struct  Bullet_t2000900386  : public MonoBehaviour_t3012272455
{
public:
	// PlayerController Bullet::pc
	PlayerController_t2866526589 * ___pc_2;
	// UnityEngine.Vector3 Bullet::bulletTarget
	Vector3_t3525329789  ___bulletTarget_3;
	// UnityEngine.Vector3 Bullet::dir
	Vector3_t3525329789  ___dir_4;

public:
	inline static int32_t get_offset_of_pc_2() { return static_cast<int32_t>(offsetof(Bullet_t2000900386, ___pc_2)); }
	inline PlayerController_t2866526589 * get_pc_2() const { return ___pc_2; }
	inline PlayerController_t2866526589 ** get_address_of_pc_2() { return &___pc_2; }
	inline void set_pc_2(PlayerController_t2866526589 * value)
	{
		___pc_2 = value;
		Il2CppCodeGenWriteBarrier(&___pc_2, value);
	}

	inline static int32_t get_offset_of_bulletTarget_3() { return static_cast<int32_t>(offsetof(Bullet_t2000900386, ___bulletTarget_3)); }
	inline Vector3_t3525329789  get_bulletTarget_3() const { return ___bulletTarget_3; }
	inline Vector3_t3525329789 * get_address_of_bulletTarget_3() { return &___bulletTarget_3; }
	inline void set_bulletTarget_3(Vector3_t3525329789  value)
	{
		___bulletTarget_3 = value;
	}

	inline static int32_t get_offset_of_dir_4() { return static_cast<int32_t>(offsetof(Bullet_t2000900386, ___dir_4)); }
	inline Vector3_t3525329789  get_dir_4() const { return ___dir_4; }
	inline Vector3_t3525329789 * get_address_of_dir_4() { return &___dir_4; }
	inline void set_dir_4(Vector3_t3525329789  value)
	{
		___dir_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
