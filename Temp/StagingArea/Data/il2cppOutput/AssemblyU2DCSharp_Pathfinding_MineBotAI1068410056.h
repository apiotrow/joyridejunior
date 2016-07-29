#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animation
struct Animation_t350396337;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "AssemblyU2DCSharp_AIPath1930792045.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.MineBotAI
struct  MineBotAI_t1068410056  : public AIPath_t1930792045
{
public:
	// UnityEngine.Animation Pathfinding.MineBotAI::anim
	Animation_t350396337 * ___anim_28;
	// System.Single Pathfinding.MineBotAI::sleepVelocity
	float ___sleepVelocity_29;
	// System.Single Pathfinding.MineBotAI::animationSpeed
	float ___animationSpeed_30;
	// UnityEngine.GameObject Pathfinding.MineBotAI::endOfPathEffect
	GameObject_t4012695102 * ___endOfPathEffect_31;
	// UnityEngine.Vector3 Pathfinding.MineBotAI::lastTarget
	Vector3_t3525329789  ___lastTarget_32;

public:
	inline static int32_t get_offset_of_anim_28() { return static_cast<int32_t>(offsetof(MineBotAI_t1068410056, ___anim_28)); }
	inline Animation_t350396337 * get_anim_28() const { return ___anim_28; }
	inline Animation_t350396337 ** get_address_of_anim_28() { return &___anim_28; }
	inline void set_anim_28(Animation_t350396337 * value)
	{
		___anim_28 = value;
		Il2CppCodeGenWriteBarrier(&___anim_28, value);
	}

	inline static int32_t get_offset_of_sleepVelocity_29() { return static_cast<int32_t>(offsetof(MineBotAI_t1068410056, ___sleepVelocity_29)); }
	inline float get_sleepVelocity_29() const { return ___sleepVelocity_29; }
	inline float* get_address_of_sleepVelocity_29() { return &___sleepVelocity_29; }
	inline void set_sleepVelocity_29(float value)
	{
		___sleepVelocity_29 = value;
	}

	inline static int32_t get_offset_of_animationSpeed_30() { return static_cast<int32_t>(offsetof(MineBotAI_t1068410056, ___animationSpeed_30)); }
	inline float get_animationSpeed_30() const { return ___animationSpeed_30; }
	inline float* get_address_of_animationSpeed_30() { return &___animationSpeed_30; }
	inline void set_animationSpeed_30(float value)
	{
		___animationSpeed_30 = value;
	}

	inline static int32_t get_offset_of_endOfPathEffect_31() { return static_cast<int32_t>(offsetof(MineBotAI_t1068410056, ___endOfPathEffect_31)); }
	inline GameObject_t4012695102 * get_endOfPathEffect_31() const { return ___endOfPathEffect_31; }
	inline GameObject_t4012695102 ** get_address_of_endOfPathEffect_31() { return &___endOfPathEffect_31; }
	inline void set_endOfPathEffect_31(GameObject_t4012695102 * value)
	{
		___endOfPathEffect_31 = value;
		Il2CppCodeGenWriteBarrier(&___endOfPathEffect_31, value);
	}

	inline static int32_t get_offset_of_lastTarget_32() { return static_cast<int32_t>(offsetof(MineBotAI_t1068410056, ___lastTarget_32)); }
	inline Vector3_t3525329789  get_lastTarget_32() const { return ___lastTarget_32; }
	inline Vector3_t3525329789 * get_address_of_lastTarget_32() { return &___lastTarget_32; }
	inline void set_lastTarget_32(Vector3_t3525329789  value)
	{
		___lastTarget_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
