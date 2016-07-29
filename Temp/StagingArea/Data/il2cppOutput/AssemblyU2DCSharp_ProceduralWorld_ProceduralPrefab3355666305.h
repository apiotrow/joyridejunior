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

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProceduralWorld/ProceduralPrefab
struct  ProceduralPrefab_t3355666305  : public Il2CppObject
{
public:
	// UnityEngine.GameObject ProceduralWorld/ProceduralPrefab::prefab
	GameObject_t4012695102 * ___prefab_0;
	// System.Single ProceduralWorld/ProceduralPrefab::density
	float ___density_1;
	// System.Single ProceduralWorld/ProceduralPrefab::perlin
	float ___perlin_2;
	// System.Single ProceduralWorld/ProceduralPrefab::perlinPower
	float ___perlinPower_3;
	// UnityEngine.Vector2 ProceduralWorld/ProceduralPrefab::perlinOffset
	Vector2_t3525329788  ___perlinOffset_4;
	// System.Single ProceduralWorld/ProceduralPrefab::perlinScale
	float ___perlinScale_5;
	// System.Single ProceduralWorld/ProceduralPrefab::random
	float ___random_6;
	// System.Boolean ProceduralWorld/ProceduralPrefab::singleFixed
	bool ___singleFixed_7;

public:
	inline static int32_t get_offset_of_prefab_0() { return static_cast<int32_t>(offsetof(ProceduralPrefab_t3355666305, ___prefab_0)); }
	inline GameObject_t4012695102 * get_prefab_0() const { return ___prefab_0; }
	inline GameObject_t4012695102 ** get_address_of_prefab_0() { return &___prefab_0; }
	inline void set_prefab_0(GameObject_t4012695102 * value)
	{
		___prefab_0 = value;
		Il2CppCodeGenWriteBarrier(&___prefab_0, value);
	}

	inline static int32_t get_offset_of_density_1() { return static_cast<int32_t>(offsetof(ProceduralPrefab_t3355666305, ___density_1)); }
	inline float get_density_1() const { return ___density_1; }
	inline float* get_address_of_density_1() { return &___density_1; }
	inline void set_density_1(float value)
	{
		___density_1 = value;
	}

	inline static int32_t get_offset_of_perlin_2() { return static_cast<int32_t>(offsetof(ProceduralPrefab_t3355666305, ___perlin_2)); }
	inline float get_perlin_2() const { return ___perlin_2; }
	inline float* get_address_of_perlin_2() { return &___perlin_2; }
	inline void set_perlin_2(float value)
	{
		___perlin_2 = value;
	}

	inline static int32_t get_offset_of_perlinPower_3() { return static_cast<int32_t>(offsetof(ProceduralPrefab_t3355666305, ___perlinPower_3)); }
	inline float get_perlinPower_3() const { return ___perlinPower_3; }
	inline float* get_address_of_perlinPower_3() { return &___perlinPower_3; }
	inline void set_perlinPower_3(float value)
	{
		___perlinPower_3 = value;
	}

	inline static int32_t get_offset_of_perlinOffset_4() { return static_cast<int32_t>(offsetof(ProceduralPrefab_t3355666305, ___perlinOffset_4)); }
	inline Vector2_t3525329788  get_perlinOffset_4() const { return ___perlinOffset_4; }
	inline Vector2_t3525329788 * get_address_of_perlinOffset_4() { return &___perlinOffset_4; }
	inline void set_perlinOffset_4(Vector2_t3525329788  value)
	{
		___perlinOffset_4 = value;
	}

	inline static int32_t get_offset_of_perlinScale_5() { return static_cast<int32_t>(offsetof(ProceduralPrefab_t3355666305, ___perlinScale_5)); }
	inline float get_perlinScale_5() const { return ___perlinScale_5; }
	inline float* get_address_of_perlinScale_5() { return &___perlinScale_5; }
	inline void set_perlinScale_5(float value)
	{
		___perlinScale_5 = value;
	}

	inline static int32_t get_offset_of_random_6() { return static_cast<int32_t>(offsetof(ProceduralPrefab_t3355666305, ___random_6)); }
	inline float get_random_6() const { return ___random_6; }
	inline float* get_address_of_random_6() { return &___random_6; }
	inline void set_random_6(float value)
	{
		___random_6 = value;
	}

	inline static int32_t get_offset_of_singleFixed_7() { return static_cast<int32_t>(offsetof(ProceduralPrefab_t3355666305, ___singleFixed_7)); }
	inline bool get_singleFixed_7() const { return ___singleFixed_7; }
	inline bool* get_address_of_singleFixed_7() { return &___singleFixed_7; }
	inline void set_singleFixed_7(bool value)
	{
		___singleFixed_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
