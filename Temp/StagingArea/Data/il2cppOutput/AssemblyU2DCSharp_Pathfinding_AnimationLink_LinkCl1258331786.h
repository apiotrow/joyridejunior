#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationClip
struct AnimationClip_t57566497;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.AnimationLink/LinkClip
struct  LinkClip_t1258331786  : public Il2CppObject
{
public:
	// UnityEngine.AnimationClip Pathfinding.AnimationLink/LinkClip::clip
	AnimationClip_t57566497 * ___clip_0;
	// UnityEngine.Vector3 Pathfinding.AnimationLink/LinkClip::velocity
	Vector3_t3525329789  ___velocity_1;
	// System.Int32 Pathfinding.AnimationLink/LinkClip::loopCount
	int32_t ___loopCount_2;

public:
	inline static int32_t get_offset_of_clip_0() { return static_cast<int32_t>(offsetof(LinkClip_t1258331786, ___clip_0)); }
	inline AnimationClip_t57566497 * get_clip_0() const { return ___clip_0; }
	inline AnimationClip_t57566497 ** get_address_of_clip_0() { return &___clip_0; }
	inline void set_clip_0(AnimationClip_t57566497 * value)
	{
		___clip_0 = value;
		Il2CppCodeGenWriteBarrier(&___clip_0, value);
	}

	inline static int32_t get_offset_of_velocity_1() { return static_cast<int32_t>(offsetof(LinkClip_t1258331786, ___velocity_1)); }
	inline Vector3_t3525329789  get_velocity_1() const { return ___velocity_1; }
	inline Vector3_t3525329789 * get_address_of_velocity_1() { return &___velocity_1; }
	inline void set_velocity_1(Vector3_t3525329789  value)
	{
		___velocity_1 = value;
	}

	inline static int32_t get_offset_of_loopCount_2() { return static_cast<int32_t>(offsetof(LinkClip_t1258331786, ___loopCount_2)); }
	inline int32_t get_loopCount_2() const { return ___loopCount_2; }
	inline int32_t* get_address_of_loopCount_2() { return &___loopCount_2; }
	inline void set_loopCount_2(int32_t value)
	{
		___loopCount_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
