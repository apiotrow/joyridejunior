#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,Pathfinding.AstarProfiler/ProfilePoint>
struct Dictionary_2_t3011910391;
// Pathfinding.AstarProfiler/ProfilePoint[]
struct ProfilePointU5BU5D_t3365448830;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_DateTime339033936.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.AstarProfiler
struct  AstarProfiler_t2059270248  : public Il2CppObject
{
public:

public:
};

struct AstarProfiler_t2059270248_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Pathfinding.AstarProfiler/ProfilePoint> Pathfinding.AstarProfiler::profiles
	Dictionary_2_t3011910391 * ___profiles_0;
	// System.DateTime Pathfinding.AstarProfiler::startTime
	DateTime_t339033936  ___startTime_1;
	// Pathfinding.AstarProfiler/ProfilePoint[] Pathfinding.AstarProfiler::fastProfiles
	ProfilePointU5BU5D_t3365448830* ___fastProfiles_2;
	// System.String[] Pathfinding.AstarProfiler::fastProfileNames
	StringU5BU5D_t2956870243* ___fastProfileNames_3;

public:
	inline static int32_t get_offset_of_profiles_0() { return static_cast<int32_t>(offsetof(AstarProfiler_t2059270248_StaticFields, ___profiles_0)); }
	inline Dictionary_2_t3011910391 * get_profiles_0() const { return ___profiles_0; }
	inline Dictionary_2_t3011910391 ** get_address_of_profiles_0() { return &___profiles_0; }
	inline void set_profiles_0(Dictionary_2_t3011910391 * value)
	{
		___profiles_0 = value;
		Il2CppCodeGenWriteBarrier(&___profiles_0, value);
	}

	inline static int32_t get_offset_of_startTime_1() { return static_cast<int32_t>(offsetof(AstarProfiler_t2059270248_StaticFields, ___startTime_1)); }
	inline DateTime_t339033936  get_startTime_1() const { return ___startTime_1; }
	inline DateTime_t339033936 * get_address_of_startTime_1() { return &___startTime_1; }
	inline void set_startTime_1(DateTime_t339033936  value)
	{
		___startTime_1 = value;
	}

	inline static int32_t get_offset_of_fastProfiles_2() { return static_cast<int32_t>(offsetof(AstarProfiler_t2059270248_StaticFields, ___fastProfiles_2)); }
	inline ProfilePointU5BU5D_t3365448830* get_fastProfiles_2() const { return ___fastProfiles_2; }
	inline ProfilePointU5BU5D_t3365448830** get_address_of_fastProfiles_2() { return &___fastProfiles_2; }
	inline void set_fastProfiles_2(ProfilePointU5BU5D_t3365448830* value)
	{
		___fastProfiles_2 = value;
		Il2CppCodeGenWriteBarrier(&___fastProfiles_2, value);
	}

	inline static int32_t get_offset_of_fastProfileNames_3() { return static_cast<int32_t>(offsetof(AstarProfiler_t2059270248_StaticFields, ___fastProfileNames_3)); }
	inline StringU5BU5D_t2956870243* get_fastProfileNames_3() const { return ___fastProfileNames_3; }
	inline StringU5BU5D_t2956870243** get_address_of_fastProfileNames_3() { return &___fastProfileNames_3; }
	inline void set_fastProfileNames_3(StringU5BU5D_t2956870243* value)
	{
		___fastProfileNames_3 = value;
		Il2CppCodeGenWriteBarrier(&___fastProfileNames_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
