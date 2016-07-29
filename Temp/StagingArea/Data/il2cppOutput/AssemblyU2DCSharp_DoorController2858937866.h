#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Bounds3518514978.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DoorController
struct  DoorController_t2858937866  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean DoorController::open
	bool ___open_2;
	// System.Int32 DoorController::opentag
	int32_t ___opentag_3;
	// System.Int32 DoorController::closedtag
	int32_t ___closedtag_4;
	// System.Boolean DoorController::updateGraphsWithGUO
	bool ___updateGraphsWithGUO_5;
	// System.Single DoorController::yOffset
	float ___yOffset_6;
	// UnityEngine.Bounds DoorController::bounds
	Bounds_t3518514978  ___bounds_7;

public:
	inline static int32_t get_offset_of_open_2() { return static_cast<int32_t>(offsetof(DoorController_t2858937866, ___open_2)); }
	inline bool get_open_2() const { return ___open_2; }
	inline bool* get_address_of_open_2() { return &___open_2; }
	inline void set_open_2(bool value)
	{
		___open_2 = value;
	}

	inline static int32_t get_offset_of_opentag_3() { return static_cast<int32_t>(offsetof(DoorController_t2858937866, ___opentag_3)); }
	inline int32_t get_opentag_3() const { return ___opentag_3; }
	inline int32_t* get_address_of_opentag_3() { return &___opentag_3; }
	inline void set_opentag_3(int32_t value)
	{
		___opentag_3 = value;
	}

	inline static int32_t get_offset_of_closedtag_4() { return static_cast<int32_t>(offsetof(DoorController_t2858937866, ___closedtag_4)); }
	inline int32_t get_closedtag_4() const { return ___closedtag_4; }
	inline int32_t* get_address_of_closedtag_4() { return &___closedtag_4; }
	inline void set_closedtag_4(int32_t value)
	{
		___closedtag_4 = value;
	}

	inline static int32_t get_offset_of_updateGraphsWithGUO_5() { return static_cast<int32_t>(offsetof(DoorController_t2858937866, ___updateGraphsWithGUO_5)); }
	inline bool get_updateGraphsWithGUO_5() const { return ___updateGraphsWithGUO_5; }
	inline bool* get_address_of_updateGraphsWithGUO_5() { return &___updateGraphsWithGUO_5; }
	inline void set_updateGraphsWithGUO_5(bool value)
	{
		___updateGraphsWithGUO_5 = value;
	}

	inline static int32_t get_offset_of_yOffset_6() { return static_cast<int32_t>(offsetof(DoorController_t2858937866, ___yOffset_6)); }
	inline float get_yOffset_6() const { return ___yOffset_6; }
	inline float* get_address_of_yOffset_6() { return &___yOffset_6; }
	inline void set_yOffset_6(float value)
	{
		___yOffset_6 = value;
	}

	inline static int32_t get_offset_of_bounds_7() { return static_cast<int32_t>(offsetof(DoorController_t2858937866, ___bounds_7)); }
	inline Bounds_t3518514978  get_bounds_7() const { return ___bounds_7; }
	inline Bounds_t3518514978 * get_address_of_bounds_7() { return &___bounds_7; }
	inline void set_bounds_7(Bounds_t3518514978  value)
	{
		___bounds_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
