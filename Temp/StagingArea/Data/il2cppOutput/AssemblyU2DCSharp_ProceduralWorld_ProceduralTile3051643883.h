#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Random
struct Random_t922188920;
// ProceduralWorld
struct ProceduralWorld_t114635253;
// UnityEngine.Transform
struct Transform_t284553113;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProceduralWorld/ProceduralTile
struct  ProceduralTile_t3051643883  : public Il2CppObject
{
public:
	// System.Int32 ProceduralWorld/ProceduralTile::x
	int32_t ___x_0;
	// System.Int32 ProceduralWorld/ProceduralTile::z
	int32_t ___z_1;
	// System.Random ProceduralWorld/ProceduralTile::rnd
	Random_t922188920 * ___rnd_2;
	// System.Boolean ProceduralWorld/ProceduralTile::staticBatching
	bool ___staticBatching_3;
	// ProceduralWorld ProceduralWorld/ProceduralTile::world
	ProceduralWorld_t114635253 * ___world_4;
	// UnityEngine.Transform ProceduralWorld/ProceduralTile::root
	Transform_t284553113 * ___root_5;
	// System.Collections.IEnumerator ProceduralWorld/ProceduralTile::ie
	Il2CppObject * ___ie_6;
	// System.Boolean ProceduralWorld/ProceduralTile::<destroyed>k__BackingField
	bool ___U3CdestroyedU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(ProceduralTile_t3051643883, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_z_1() { return static_cast<int32_t>(offsetof(ProceduralTile_t3051643883, ___z_1)); }
	inline int32_t get_z_1() const { return ___z_1; }
	inline int32_t* get_address_of_z_1() { return &___z_1; }
	inline void set_z_1(int32_t value)
	{
		___z_1 = value;
	}

	inline static int32_t get_offset_of_rnd_2() { return static_cast<int32_t>(offsetof(ProceduralTile_t3051643883, ___rnd_2)); }
	inline Random_t922188920 * get_rnd_2() const { return ___rnd_2; }
	inline Random_t922188920 ** get_address_of_rnd_2() { return &___rnd_2; }
	inline void set_rnd_2(Random_t922188920 * value)
	{
		___rnd_2 = value;
		Il2CppCodeGenWriteBarrier(&___rnd_2, value);
	}

	inline static int32_t get_offset_of_staticBatching_3() { return static_cast<int32_t>(offsetof(ProceduralTile_t3051643883, ___staticBatching_3)); }
	inline bool get_staticBatching_3() const { return ___staticBatching_3; }
	inline bool* get_address_of_staticBatching_3() { return &___staticBatching_3; }
	inline void set_staticBatching_3(bool value)
	{
		___staticBatching_3 = value;
	}

	inline static int32_t get_offset_of_world_4() { return static_cast<int32_t>(offsetof(ProceduralTile_t3051643883, ___world_4)); }
	inline ProceduralWorld_t114635253 * get_world_4() const { return ___world_4; }
	inline ProceduralWorld_t114635253 ** get_address_of_world_4() { return &___world_4; }
	inline void set_world_4(ProceduralWorld_t114635253 * value)
	{
		___world_4 = value;
		Il2CppCodeGenWriteBarrier(&___world_4, value);
	}

	inline static int32_t get_offset_of_root_5() { return static_cast<int32_t>(offsetof(ProceduralTile_t3051643883, ___root_5)); }
	inline Transform_t284553113 * get_root_5() const { return ___root_5; }
	inline Transform_t284553113 ** get_address_of_root_5() { return &___root_5; }
	inline void set_root_5(Transform_t284553113 * value)
	{
		___root_5 = value;
		Il2CppCodeGenWriteBarrier(&___root_5, value);
	}

	inline static int32_t get_offset_of_ie_6() { return static_cast<int32_t>(offsetof(ProceduralTile_t3051643883, ___ie_6)); }
	inline Il2CppObject * get_ie_6() const { return ___ie_6; }
	inline Il2CppObject ** get_address_of_ie_6() { return &___ie_6; }
	inline void set_ie_6(Il2CppObject * value)
	{
		___ie_6 = value;
		Il2CppCodeGenWriteBarrier(&___ie_6, value);
	}

	inline static int32_t get_offset_of_U3CdestroyedU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ProceduralTile_t3051643883, ___U3CdestroyedU3Ek__BackingField_7)); }
	inline bool get_U3CdestroyedU3Ek__BackingField_7() const { return ___U3CdestroyedU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdestroyedU3Ek__BackingField_7() { return &___U3CdestroyedU3Ek__BackingField_7; }
	inline void set_U3CdestroyedU3Ek__BackingField_7(bool value)
	{
		___U3CdestroyedU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
