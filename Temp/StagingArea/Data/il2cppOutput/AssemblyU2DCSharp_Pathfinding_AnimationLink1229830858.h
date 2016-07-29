#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// Pathfinding.AnimationLink/LinkClip[]
struct LinkClipU5BU5D_t2023683087;

#include "AssemblyU2DCSharp_Pathfinding_NodeLink2851832770.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.AnimationLink
struct  AnimationLink_t1229830858  : public NodeLink2_t851832770
{
public:
	// System.String Pathfinding.AnimationLink::clip
	String_t* ___clip_18;
	// System.Single Pathfinding.AnimationLink::animSpeed
	float ___animSpeed_19;
	// System.Boolean Pathfinding.AnimationLink::reverseAnim
	bool ___reverseAnim_20;
	// UnityEngine.GameObject Pathfinding.AnimationLink::referenceMesh
	GameObject_t4012695102 * ___referenceMesh_21;
	// Pathfinding.AnimationLink/LinkClip[] Pathfinding.AnimationLink::sequence
	LinkClipU5BU5D_t2023683087* ___sequence_22;
	// System.String Pathfinding.AnimationLink::boneRoot
	String_t* ___boneRoot_23;

public:
	inline static int32_t get_offset_of_clip_18() { return static_cast<int32_t>(offsetof(AnimationLink_t1229830858, ___clip_18)); }
	inline String_t* get_clip_18() const { return ___clip_18; }
	inline String_t** get_address_of_clip_18() { return &___clip_18; }
	inline void set_clip_18(String_t* value)
	{
		___clip_18 = value;
		Il2CppCodeGenWriteBarrier(&___clip_18, value);
	}

	inline static int32_t get_offset_of_animSpeed_19() { return static_cast<int32_t>(offsetof(AnimationLink_t1229830858, ___animSpeed_19)); }
	inline float get_animSpeed_19() const { return ___animSpeed_19; }
	inline float* get_address_of_animSpeed_19() { return &___animSpeed_19; }
	inline void set_animSpeed_19(float value)
	{
		___animSpeed_19 = value;
	}

	inline static int32_t get_offset_of_reverseAnim_20() { return static_cast<int32_t>(offsetof(AnimationLink_t1229830858, ___reverseAnim_20)); }
	inline bool get_reverseAnim_20() const { return ___reverseAnim_20; }
	inline bool* get_address_of_reverseAnim_20() { return &___reverseAnim_20; }
	inline void set_reverseAnim_20(bool value)
	{
		___reverseAnim_20 = value;
	}

	inline static int32_t get_offset_of_referenceMesh_21() { return static_cast<int32_t>(offsetof(AnimationLink_t1229830858, ___referenceMesh_21)); }
	inline GameObject_t4012695102 * get_referenceMesh_21() const { return ___referenceMesh_21; }
	inline GameObject_t4012695102 ** get_address_of_referenceMesh_21() { return &___referenceMesh_21; }
	inline void set_referenceMesh_21(GameObject_t4012695102 * value)
	{
		___referenceMesh_21 = value;
		Il2CppCodeGenWriteBarrier(&___referenceMesh_21, value);
	}

	inline static int32_t get_offset_of_sequence_22() { return static_cast<int32_t>(offsetof(AnimationLink_t1229830858, ___sequence_22)); }
	inline LinkClipU5BU5D_t2023683087* get_sequence_22() const { return ___sequence_22; }
	inline LinkClipU5BU5D_t2023683087** get_address_of_sequence_22() { return &___sequence_22; }
	inline void set_sequence_22(LinkClipU5BU5D_t2023683087* value)
	{
		___sequence_22 = value;
		Il2CppCodeGenWriteBarrier(&___sequence_22, value);
	}

	inline static int32_t get_offset_of_boneRoot_23() { return static_cast<int32_t>(offsetof(AnimationLink_t1229830858, ___boneRoot_23)); }
	inline String_t* get_boneRoot_23() const { return ___boneRoot_23; }
	inline String_t** get_address_of_boneRoot_23() { return &___boneRoot_23; }
	inline void set_boneRoot_23(String_t* value)
	{
		___boneRoot_23 = value;
		Il2CppCodeGenWriteBarrier(&___boneRoot_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
