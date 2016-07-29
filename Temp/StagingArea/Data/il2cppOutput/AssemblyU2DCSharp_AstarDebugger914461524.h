#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Font
struct Font_t1525081276;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// System.String
struct String_t;
// AstarDebugger/GraphPoint[]
struct GraphPointU5BU5D_t423657655;
// System.Single[]
struct SingleU5BU5D_t1219431280;
// UnityEngine.GUIStyle
struct GUIStyle_t1006925219;
// UnityEngine.Camera
struct Camera_t3533968274;
// AstarDebugger/PathTypeDebug[]
struct PathTypeDebugU5BU5D_t1625963325;
// System.Func`1<System.Int32>
struct Func_1_t3990196034;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AstarDebugger
struct  AstarDebugger_t914461524  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 AstarDebugger::yOffset
	int32_t ___yOffset_2;
	// System.Boolean AstarDebugger::show
	bool ___show_3;
	// System.Boolean AstarDebugger::showInEditor
	bool ___showInEditor_4;
	// System.Boolean AstarDebugger::showFPS
	bool ___showFPS_5;
	// System.Boolean AstarDebugger::showPathProfile
	bool ___showPathProfile_6;
	// System.Boolean AstarDebugger::showMemProfile
	bool ___showMemProfile_7;
	// System.Boolean AstarDebugger::showGraph
	bool ___showGraph_8;
	// System.Int32 AstarDebugger::graphBufferSize
	int32_t ___graphBufferSize_9;
	// UnityEngine.Font AstarDebugger::font
	Font_t1525081276 * ___font_10;
	// System.Int32 AstarDebugger::fontSize
	int32_t ___fontSize_11;
	// System.Text.StringBuilder AstarDebugger::text
	StringBuilder_t3822575854 * ___text_12;
	// System.String AstarDebugger::cachedText
	String_t* ___cachedText_13;
	// System.Single AstarDebugger::lastUpdate
	float ___lastUpdate_14;
	// AstarDebugger/GraphPoint[] AstarDebugger::graph
	GraphPointU5BU5D_t423657655* ___graph_15;
	// System.Single AstarDebugger::delayedDeltaTime
	float ___delayedDeltaTime_16;
	// System.Single AstarDebugger::lastCollect
	float ___lastCollect_17;
	// System.Single AstarDebugger::lastCollectNum
	float ___lastCollectNum_18;
	// System.Single AstarDebugger::delta
	float ___delta_19;
	// System.Single AstarDebugger::lastDeltaTime
	float ___lastDeltaTime_20;
	// System.Int32 AstarDebugger::allocRate
	int32_t ___allocRate_21;
	// System.Int32 AstarDebugger::lastAllocMemory
	int32_t ___lastAllocMemory_22;
	// System.Single AstarDebugger::lastAllocSet
	float ___lastAllocSet_23;
	// System.Int32 AstarDebugger::allocMem
	int32_t ___allocMem_24;
	// System.Int32 AstarDebugger::collectAlloc
	int32_t ___collectAlloc_25;
	// System.Int32 AstarDebugger::peakAlloc
	int32_t ___peakAlloc_26;
	// System.Int32 AstarDebugger::fpsDropCounterSize
	int32_t ___fpsDropCounterSize_27;
	// System.Single[] AstarDebugger::fpsDrops
	SingleU5BU5D_t1219431280* ___fpsDrops_28;
	// UnityEngine.Rect AstarDebugger::boxRect
	Rect_t1525428817  ___boxRect_29;
	// UnityEngine.GUIStyle AstarDebugger::style
	GUIStyle_t1006925219 * ___style_30;
	// UnityEngine.Camera AstarDebugger::cam
	Camera_t3533968274 * ___cam_31;
	// System.Single AstarDebugger::graphWidth
	float ___graphWidth_32;
	// System.Single AstarDebugger::graphHeight
	float ___graphHeight_33;
	// System.Single AstarDebugger::graphOffset
	float ___graphOffset_34;
	// System.Int32 AstarDebugger::maxVecPool
	int32_t ___maxVecPool_35;
	// System.Int32 AstarDebugger::maxNodePool
	int32_t ___maxNodePool_36;
	// AstarDebugger/PathTypeDebug[] AstarDebugger::debugTypes
	PathTypeDebugU5BU5D_t1625963325* ___debugTypes_37;

public:
	inline static int32_t get_offset_of_yOffset_2() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___yOffset_2)); }
	inline int32_t get_yOffset_2() const { return ___yOffset_2; }
	inline int32_t* get_address_of_yOffset_2() { return &___yOffset_2; }
	inline void set_yOffset_2(int32_t value)
	{
		___yOffset_2 = value;
	}

	inline static int32_t get_offset_of_show_3() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___show_3)); }
	inline bool get_show_3() const { return ___show_3; }
	inline bool* get_address_of_show_3() { return &___show_3; }
	inline void set_show_3(bool value)
	{
		___show_3 = value;
	}

	inline static int32_t get_offset_of_showInEditor_4() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___showInEditor_4)); }
	inline bool get_showInEditor_4() const { return ___showInEditor_4; }
	inline bool* get_address_of_showInEditor_4() { return &___showInEditor_4; }
	inline void set_showInEditor_4(bool value)
	{
		___showInEditor_4 = value;
	}

	inline static int32_t get_offset_of_showFPS_5() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___showFPS_5)); }
	inline bool get_showFPS_5() const { return ___showFPS_5; }
	inline bool* get_address_of_showFPS_5() { return &___showFPS_5; }
	inline void set_showFPS_5(bool value)
	{
		___showFPS_5 = value;
	}

	inline static int32_t get_offset_of_showPathProfile_6() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___showPathProfile_6)); }
	inline bool get_showPathProfile_6() const { return ___showPathProfile_6; }
	inline bool* get_address_of_showPathProfile_6() { return &___showPathProfile_6; }
	inline void set_showPathProfile_6(bool value)
	{
		___showPathProfile_6 = value;
	}

	inline static int32_t get_offset_of_showMemProfile_7() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___showMemProfile_7)); }
	inline bool get_showMemProfile_7() const { return ___showMemProfile_7; }
	inline bool* get_address_of_showMemProfile_7() { return &___showMemProfile_7; }
	inline void set_showMemProfile_7(bool value)
	{
		___showMemProfile_7 = value;
	}

	inline static int32_t get_offset_of_showGraph_8() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___showGraph_8)); }
	inline bool get_showGraph_8() const { return ___showGraph_8; }
	inline bool* get_address_of_showGraph_8() { return &___showGraph_8; }
	inline void set_showGraph_8(bool value)
	{
		___showGraph_8 = value;
	}

	inline static int32_t get_offset_of_graphBufferSize_9() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___graphBufferSize_9)); }
	inline int32_t get_graphBufferSize_9() const { return ___graphBufferSize_9; }
	inline int32_t* get_address_of_graphBufferSize_9() { return &___graphBufferSize_9; }
	inline void set_graphBufferSize_9(int32_t value)
	{
		___graphBufferSize_9 = value;
	}

	inline static int32_t get_offset_of_font_10() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___font_10)); }
	inline Font_t1525081276 * get_font_10() const { return ___font_10; }
	inline Font_t1525081276 ** get_address_of_font_10() { return &___font_10; }
	inline void set_font_10(Font_t1525081276 * value)
	{
		___font_10 = value;
		Il2CppCodeGenWriteBarrier(&___font_10, value);
	}

	inline static int32_t get_offset_of_fontSize_11() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___fontSize_11)); }
	inline int32_t get_fontSize_11() const { return ___fontSize_11; }
	inline int32_t* get_address_of_fontSize_11() { return &___fontSize_11; }
	inline void set_fontSize_11(int32_t value)
	{
		___fontSize_11 = value;
	}

	inline static int32_t get_offset_of_text_12() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___text_12)); }
	inline StringBuilder_t3822575854 * get_text_12() const { return ___text_12; }
	inline StringBuilder_t3822575854 ** get_address_of_text_12() { return &___text_12; }
	inline void set_text_12(StringBuilder_t3822575854 * value)
	{
		___text_12 = value;
		Il2CppCodeGenWriteBarrier(&___text_12, value);
	}

	inline static int32_t get_offset_of_cachedText_13() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___cachedText_13)); }
	inline String_t* get_cachedText_13() const { return ___cachedText_13; }
	inline String_t** get_address_of_cachedText_13() { return &___cachedText_13; }
	inline void set_cachedText_13(String_t* value)
	{
		___cachedText_13 = value;
		Il2CppCodeGenWriteBarrier(&___cachedText_13, value);
	}

	inline static int32_t get_offset_of_lastUpdate_14() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___lastUpdate_14)); }
	inline float get_lastUpdate_14() const { return ___lastUpdate_14; }
	inline float* get_address_of_lastUpdate_14() { return &___lastUpdate_14; }
	inline void set_lastUpdate_14(float value)
	{
		___lastUpdate_14 = value;
	}

	inline static int32_t get_offset_of_graph_15() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___graph_15)); }
	inline GraphPointU5BU5D_t423657655* get_graph_15() const { return ___graph_15; }
	inline GraphPointU5BU5D_t423657655** get_address_of_graph_15() { return &___graph_15; }
	inline void set_graph_15(GraphPointU5BU5D_t423657655* value)
	{
		___graph_15 = value;
		Il2CppCodeGenWriteBarrier(&___graph_15, value);
	}

	inline static int32_t get_offset_of_delayedDeltaTime_16() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___delayedDeltaTime_16)); }
	inline float get_delayedDeltaTime_16() const { return ___delayedDeltaTime_16; }
	inline float* get_address_of_delayedDeltaTime_16() { return &___delayedDeltaTime_16; }
	inline void set_delayedDeltaTime_16(float value)
	{
		___delayedDeltaTime_16 = value;
	}

	inline static int32_t get_offset_of_lastCollect_17() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___lastCollect_17)); }
	inline float get_lastCollect_17() const { return ___lastCollect_17; }
	inline float* get_address_of_lastCollect_17() { return &___lastCollect_17; }
	inline void set_lastCollect_17(float value)
	{
		___lastCollect_17 = value;
	}

	inline static int32_t get_offset_of_lastCollectNum_18() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___lastCollectNum_18)); }
	inline float get_lastCollectNum_18() const { return ___lastCollectNum_18; }
	inline float* get_address_of_lastCollectNum_18() { return &___lastCollectNum_18; }
	inline void set_lastCollectNum_18(float value)
	{
		___lastCollectNum_18 = value;
	}

	inline static int32_t get_offset_of_delta_19() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___delta_19)); }
	inline float get_delta_19() const { return ___delta_19; }
	inline float* get_address_of_delta_19() { return &___delta_19; }
	inline void set_delta_19(float value)
	{
		___delta_19 = value;
	}

	inline static int32_t get_offset_of_lastDeltaTime_20() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___lastDeltaTime_20)); }
	inline float get_lastDeltaTime_20() const { return ___lastDeltaTime_20; }
	inline float* get_address_of_lastDeltaTime_20() { return &___lastDeltaTime_20; }
	inline void set_lastDeltaTime_20(float value)
	{
		___lastDeltaTime_20 = value;
	}

	inline static int32_t get_offset_of_allocRate_21() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___allocRate_21)); }
	inline int32_t get_allocRate_21() const { return ___allocRate_21; }
	inline int32_t* get_address_of_allocRate_21() { return &___allocRate_21; }
	inline void set_allocRate_21(int32_t value)
	{
		___allocRate_21 = value;
	}

	inline static int32_t get_offset_of_lastAllocMemory_22() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___lastAllocMemory_22)); }
	inline int32_t get_lastAllocMemory_22() const { return ___lastAllocMemory_22; }
	inline int32_t* get_address_of_lastAllocMemory_22() { return &___lastAllocMemory_22; }
	inline void set_lastAllocMemory_22(int32_t value)
	{
		___lastAllocMemory_22 = value;
	}

	inline static int32_t get_offset_of_lastAllocSet_23() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___lastAllocSet_23)); }
	inline float get_lastAllocSet_23() const { return ___lastAllocSet_23; }
	inline float* get_address_of_lastAllocSet_23() { return &___lastAllocSet_23; }
	inline void set_lastAllocSet_23(float value)
	{
		___lastAllocSet_23 = value;
	}

	inline static int32_t get_offset_of_allocMem_24() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___allocMem_24)); }
	inline int32_t get_allocMem_24() const { return ___allocMem_24; }
	inline int32_t* get_address_of_allocMem_24() { return &___allocMem_24; }
	inline void set_allocMem_24(int32_t value)
	{
		___allocMem_24 = value;
	}

	inline static int32_t get_offset_of_collectAlloc_25() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___collectAlloc_25)); }
	inline int32_t get_collectAlloc_25() const { return ___collectAlloc_25; }
	inline int32_t* get_address_of_collectAlloc_25() { return &___collectAlloc_25; }
	inline void set_collectAlloc_25(int32_t value)
	{
		___collectAlloc_25 = value;
	}

	inline static int32_t get_offset_of_peakAlloc_26() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___peakAlloc_26)); }
	inline int32_t get_peakAlloc_26() const { return ___peakAlloc_26; }
	inline int32_t* get_address_of_peakAlloc_26() { return &___peakAlloc_26; }
	inline void set_peakAlloc_26(int32_t value)
	{
		___peakAlloc_26 = value;
	}

	inline static int32_t get_offset_of_fpsDropCounterSize_27() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___fpsDropCounterSize_27)); }
	inline int32_t get_fpsDropCounterSize_27() const { return ___fpsDropCounterSize_27; }
	inline int32_t* get_address_of_fpsDropCounterSize_27() { return &___fpsDropCounterSize_27; }
	inline void set_fpsDropCounterSize_27(int32_t value)
	{
		___fpsDropCounterSize_27 = value;
	}

	inline static int32_t get_offset_of_fpsDrops_28() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___fpsDrops_28)); }
	inline SingleU5BU5D_t1219431280* get_fpsDrops_28() const { return ___fpsDrops_28; }
	inline SingleU5BU5D_t1219431280** get_address_of_fpsDrops_28() { return &___fpsDrops_28; }
	inline void set_fpsDrops_28(SingleU5BU5D_t1219431280* value)
	{
		___fpsDrops_28 = value;
		Il2CppCodeGenWriteBarrier(&___fpsDrops_28, value);
	}

	inline static int32_t get_offset_of_boxRect_29() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___boxRect_29)); }
	inline Rect_t1525428817  get_boxRect_29() const { return ___boxRect_29; }
	inline Rect_t1525428817 * get_address_of_boxRect_29() { return &___boxRect_29; }
	inline void set_boxRect_29(Rect_t1525428817  value)
	{
		___boxRect_29 = value;
	}

	inline static int32_t get_offset_of_style_30() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___style_30)); }
	inline GUIStyle_t1006925219 * get_style_30() const { return ___style_30; }
	inline GUIStyle_t1006925219 ** get_address_of_style_30() { return &___style_30; }
	inline void set_style_30(GUIStyle_t1006925219 * value)
	{
		___style_30 = value;
		Il2CppCodeGenWriteBarrier(&___style_30, value);
	}

	inline static int32_t get_offset_of_cam_31() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___cam_31)); }
	inline Camera_t3533968274 * get_cam_31() const { return ___cam_31; }
	inline Camera_t3533968274 ** get_address_of_cam_31() { return &___cam_31; }
	inline void set_cam_31(Camera_t3533968274 * value)
	{
		___cam_31 = value;
		Il2CppCodeGenWriteBarrier(&___cam_31, value);
	}

	inline static int32_t get_offset_of_graphWidth_32() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___graphWidth_32)); }
	inline float get_graphWidth_32() const { return ___graphWidth_32; }
	inline float* get_address_of_graphWidth_32() { return &___graphWidth_32; }
	inline void set_graphWidth_32(float value)
	{
		___graphWidth_32 = value;
	}

	inline static int32_t get_offset_of_graphHeight_33() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___graphHeight_33)); }
	inline float get_graphHeight_33() const { return ___graphHeight_33; }
	inline float* get_address_of_graphHeight_33() { return &___graphHeight_33; }
	inline void set_graphHeight_33(float value)
	{
		___graphHeight_33 = value;
	}

	inline static int32_t get_offset_of_graphOffset_34() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___graphOffset_34)); }
	inline float get_graphOffset_34() const { return ___graphOffset_34; }
	inline float* get_address_of_graphOffset_34() { return &___graphOffset_34; }
	inline void set_graphOffset_34(float value)
	{
		___graphOffset_34 = value;
	}

	inline static int32_t get_offset_of_maxVecPool_35() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___maxVecPool_35)); }
	inline int32_t get_maxVecPool_35() const { return ___maxVecPool_35; }
	inline int32_t* get_address_of_maxVecPool_35() { return &___maxVecPool_35; }
	inline void set_maxVecPool_35(int32_t value)
	{
		___maxVecPool_35 = value;
	}

	inline static int32_t get_offset_of_maxNodePool_36() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___maxNodePool_36)); }
	inline int32_t get_maxNodePool_36() const { return ___maxNodePool_36; }
	inline int32_t* get_address_of_maxNodePool_36() { return &___maxNodePool_36; }
	inline void set_maxNodePool_36(int32_t value)
	{
		___maxNodePool_36 = value;
	}

	inline static int32_t get_offset_of_debugTypes_37() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524, ___debugTypes_37)); }
	inline PathTypeDebugU5BU5D_t1625963325* get_debugTypes_37() const { return ___debugTypes_37; }
	inline PathTypeDebugU5BU5D_t1625963325** get_address_of_debugTypes_37() { return &___debugTypes_37; }
	inline void set_debugTypes_37(PathTypeDebugU5BU5D_t1625963325* value)
	{
		___debugTypes_37 = value;
		Il2CppCodeGenWriteBarrier(&___debugTypes_37, value);
	}
};

struct AstarDebugger_t914461524_StaticFields
{
public:
	// System.Func`1<System.Int32> AstarDebugger::<>f__am$cache24
	Func_1_t3990196034 * ___U3CU3Ef__amU24cache24_38;
	// System.Func`1<System.Int32> AstarDebugger::<>f__am$cache25
	Func_1_t3990196034 * ___U3CU3Ef__amU24cache25_39;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache24_38() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524_StaticFields, ___U3CU3Ef__amU24cache24_38)); }
	inline Func_1_t3990196034 * get_U3CU3Ef__amU24cache24_38() const { return ___U3CU3Ef__amU24cache24_38; }
	inline Func_1_t3990196034 ** get_address_of_U3CU3Ef__amU24cache24_38() { return &___U3CU3Ef__amU24cache24_38; }
	inline void set_U3CU3Ef__amU24cache24_38(Func_1_t3990196034 * value)
	{
		___U3CU3Ef__amU24cache24_38 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache24_38, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache25_39() { return static_cast<int32_t>(offsetof(AstarDebugger_t914461524_StaticFields, ___U3CU3Ef__amU24cache25_39)); }
	inline Func_1_t3990196034 * get_U3CU3Ef__amU24cache25_39() const { return ___U3CU3Ef__amU24cache25_39; }
	inline Func_1_t3990196034 ** get_address_of_U3CU3Ef__amU24cache25_39() { return &___U3CU3Ef__amU24cache25_39; }
	inline void set_U3CU3Ef__amU24cache25_39(Func_1_t3990196034 * value)
	{
		___U3CU3Ef__amU24cache25_39 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache25_39, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
