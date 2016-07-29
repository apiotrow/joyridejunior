#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Pathfinding.GraphNode>
struct List_1_t26999445;
// System.Collections.Generic.Stack`1<Pathfinding.GraphNode>
struct Stack_1_t1800446511;
// AstarPath
struct AstarPath_t4090270936;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AstarPath/<FloodFill>c__AnonStorey11
struct  U3CFloodFillU3Ec__AnonStorey11_t2773545390  : public Il2CppObject
{
public:
	// System.UInt32 AstarPath/<FloodFill>c__AnonStorey11::area
	uint32_t ___area_0;
	// System.Collections.Generic.List`1<Pathfinding.GraphNode> AstarPath/<FloodFill>c__AnonStorey11::smallAreaList
	List_1_t26999445 * ___smallAreaList_1;
	// System.Collections.Generic.Stack`1<Pathfinding.GraphNode> AstarPath/<FloodFill>c__AnonStorey11::stack
	Stack_1_t1800446511 * ___stack_2;
	// System.Int32 AstarPath/<FloodFill>c__AnonStorey11::smallAreasDetected
	int32_t ___smallAreasDetected_3;
	// System.Boolean AstarPath/<FloodFill>c__AnonStorey11::warnAboutAreas
	bool ___warnAboutAreas_4;
	// AstarPath AstarPath/<FloodFill>c__AnonStorey11::<>f__this
	AstarPath_t4090270936 * ___U3CU3Ef__this_5;

public:
	inline static int32_t get_offset_of_area_0() { return static_cast<int32_t>(offsetof(U3CFloodFillU3Ec__AnonStorey11_t2773545390, ___area_0)); }
	inline uint32_t get_area_0() const { return ___area_0; }
	inline uint32_t* get_address_of_area_0() { return &___area_0; }
	inline void set_area_0(uint32_t value)
	{
		___area_0 = value;
	}

	inline static int32_t get_offset_of_smallAreaList_1() { return static_cast<int32_t>(offsetof(U3CFloodFillU3Ec__AnonStorey11_t2773545390, ___smallAreaList_1)); }
	inline List_1_t26999445 * get_smallAreaList_1() const { return ___smallAreaList_1; }
	inline List_1_t26999445 ** get_address_of_smallAreaList_1() { return &___smallAreaList_1; }
	inline void set_smallAreaList_1(List_1_t26999445 * value)
	{
		___smallAreaList_1 = value;
		Il2CppCodeGenWriteBarrier(&___smallAreaList_1, value);
	}

	inline static int32_t get_offset_of_stack_2() { return static_cast<int32_t>(offsetof(U3CFloodFillU3Ec__AnonStorey11_t2773545390, ___stack_2)); }
	inline Stack_1_t1800446511 * get_stack_2() const { return ___stack_2; }
	inline Stack_1_t1800446511 ** get_address_of_stack_2() { return &___stack_2; }
	inline void set_stack_2(Stack_1_t1800446511 * value)
	{
		___stack_2 = value;
		Il2CppCodeGenWriteBarrier(&___stack_2, value);
	}

	inline static int32_t get_offset_of_smallAreasDetected_3() { return static_cast<int32_t>(offsetof(U3CFloodFillU3Ec__AnonStorey11_t2773545390, ___smallAreasDetected_3)); }
	inline int32_t get_smallAreasDetected_3() const { return ___smallAreasDetected_3; }
	inline int32_t* get_address_of_smallAreasDetected_3() { return &___smallAreasDetected_3; }
	inline void set_smallAreasDetected_3(int32_t value)
	{
		___smallAreasDetected_3 = value;
	}

	inline static int32_t get_offset_of_warnAboutAreas_4() { return static_cast<int32_t>(offsetof(U3CFloodFillU3Ec__AnonStorey11_t2773545390, ___warnAboutAreas_4)); }
	inline bool get_warnAboutAreas_4() const { return ___warnAboutAreas_4; }
	inline bool* get_address_of_warnAboutAreas_4() { return &___warnAboutAreas_4; }
	inline void set_warnAboutAreas_4(bool value)
	{
		___warnAboutAreas_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_5() { return static_cast<int32_t>(offsetof(U3CFloodFillU3Ec__AnonStorey11_t2773545390, ___U3CU3Ef__this_5)); }
	inline AstarPath_t4090270936 * get_U3CU3Ef__this_5() const { return ___U3CU3Ef__this_5; }
	inline AstarPath_t4090270936 ** get_address_of_U3CU3Ef__this_5() { return &___U3CU3Ef__this_5; }
	inline void set_U3CU3Ef__this_5(AstarPath_t4090270936 * value)
	{
		___U3CU3Ef__this_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
