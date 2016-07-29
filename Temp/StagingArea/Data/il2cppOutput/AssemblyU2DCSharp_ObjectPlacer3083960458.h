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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectPlacer
struct  ObjectPlacer_t3083960458  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject ObjectPlacer::go
	GameObject_t4012695102 * ___go_2;
	// System.Boolean ObjectPlacer::direct
	bool ___direct_3;
	// System.Boolean ObjectPlacer::issueGUOs
	bool ___issueGUOs_4;

public:
	inline static int32_t get_offset_of_go_2() { return static_cast<int32_t>(offsetof(ObjectPlacer_t3083960458, ___go_2)); }
	inline GameObject_t4012695102 * get_go_2() const { return ___go_2; }
	inline GameObject_t4012695102 ** get_address_of_go_2() { return &___go_2; }
	inline void set_go_2(GameObject_t4012695102 * value)
	{
		___go_2 = value;
		Il2CppCodeGenWriteBarrier(&___go_2, value);
	}

	inline static int32_t get_offset_of_direct_3() { return static_cast<int32_t>(offsetof(ObjectPlacer_t3083960458, ___direct_3)); }
	inline bool get_direct_3() const { return ___direct_3; }
	inline bool* get_address_of_direct_3() { return &___direct_3; }
	inline void set_direct_3(bool value)
	{
		___direct_3 = value;
	}

	inline static int32_t get_offset_of_issueGUOs_4() { return static_cast<int32_t>(offsetof(ObjectPlacer_t3083960458, ___issueGUOs_4)); }
	inline bool get_issueGUOs_4() const { return ___issueGUOs_4; }
	inline bool* get_address_of_issueGUOs_4() { return &___issueGUOs_4; }
	inline void set_issueGUOs_4(bool value)
	{
		___issueGUOs_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
