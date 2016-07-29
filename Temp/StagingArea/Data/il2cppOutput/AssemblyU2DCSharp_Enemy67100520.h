#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Slider
struct Slider_t1468074762;

#include "AssemblyU2DCSharp_AILerp1930676671.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Enemy
struct  Enemy_t67100520  : public AILerp_t1930676671
{
public:
	// System.Int32 Enemy::health
	int32_t ___health_24;
	// UnityEngine.UI.Slider Enemy::healthBar
	Slider_t1468074762 * ___healthBar_25;

public:
	inline static int32_t get_offset_of_health_24() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___health_24)); }
	inline int32_t get_health_24() const { return ___health_24; }
	inline int32_t* get_address_of_health_24() { return &___health_24; }
	inline void set_health_24(int32_t value)
	{
		___health_24 = value;
	}

	inline static int32_t get_offset_of_healthBar_25() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___healthBar_25)); }
	inline Slider_t1468074762 * get_healthBar_25() const { return ___healthBar_25; }
	inline Slider_t1468074762 ** get_address_of_healthBar_25() { return &___healthBar_25; }
	inline void set_healthBar_25(Slider_t1468074762 * value)
	{
		___healthBar_25 = value;
		Il2CppCodeGenWriteBarrier(&___healthBar_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
