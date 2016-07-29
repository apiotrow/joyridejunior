#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Exception
struct Exception_t1967233988;
// Pathfinding.PathHandler
struct PathHandler_t2800540817;
// AstarPath
struct AstarPath_t4090270936;
// Pathfinding.Path
struct Path_t2697364881;
// OnPathDelegate
struct OnPathDelegate_t598607977;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Pathfinding_PathThreadInfo3207094601.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AstarPath/<CalculatePaths>c__Iterator7
struct  U3CCalculatePathsU3Ec__Iterator7_t3086410368  : public Il2CppObject
{
public:
	// System.Object AstarPath/<CalculatePaths>c__Iterator7::_threadInfo
	Il2CppObject * ____threadInfo_0;
	// Pathfinding.PathThreadInfo AstarPath/<CalculatePaths>c__Iterator7::<threadInfo>__0
	PathThreadInfo_t3207094601  ___U3CthreadInfoU3E__0_1;
	// System.Exception AstarPath/<CalculatePaths>c__Iterator7::<e>__1
	Exception_t1967233988 * ___U3CeU3E__1_2;
	// System.Int32 AstarPath/<CalculatePaths>c__Iterator7::<numPaths>__2
	int32_t ___U3CnumPathsU3E__2_3;
	// Pathfinding.PathHandler AstarPath/<CalculatePaths>c__Iterator7::<runData>__3
	PathHandler_t2800540817 * ___U3CrunDataU3E__3_4;
	// AstarPath AstarPath/<CalculatePaths>c__Iterator7::<astar>__4
	AstarPath_t4090270936 * ___U3CastarU3E__4_5;
	// System.Int64 AstarPath/<CalculatePaths>c__Iterator7::<maxTicks>__5
	int64_t ___U3CmaxTicksU3E__5_6;
	// System.Int64 AstarPath/<CalculatePaths>c__Iterator7::<targetTick>__6
	int64_t ___U3CtargetTickU3E__6_7;
	// Pathfinding.Path AstarPath/<CalculatePaths>c__Iterator7::<p>__7
	Path_t2697364881 * ___U3CpU3E__7_8;
	// System.Boolean AstarPath/<CalculatePaths>c__Iterator7::<blockedBefore>__8
	bool ___U3CblockedBeforeU3E__8_9;
	// OnPathDelegate AstarPath/<CalculatePaths>c__Iterator7::<tmpOnPathPreSearch>__9
	OnPathDelegate_t598607977 * ___U3CtmpOnPathPreSearchU3E__9_10;
	// System.Int64 AstarPath/<CalculatePaths>c__Iterator7::<startTicks>__10
	int64_t ___U3CstartTicksU3E__10_11;
	// System.Int64 AstarPath/<CalculatePaths>c__Iterator7::<totalTicks>__11
	int64_t ___U3CtotalTicksU3E__11_12;
	// OnPathDelegate AstarPath/<CalculatePaths>c__Iterator7::<tmpImmediateCallback>__12
	OnPathDelegate_t598607977 * ___U3CtmpImmediateCallbackU3E__12_13;
	// OnPathDelegate AstarPath/<CalculatePaths>c__Iterator7::<tmpOnPathPostSearch>__13
	OnPathDelegate_t598607977 * ___U3CtmpOnPathPostSearchU3E__13_14;
	// System.Int32 AstarPath/<CalculatePaths>c__Iterator7::$PC
	int32_t ___U24PC_15;
	// System.Object AstarPath/<CalculatePaths>c__Iterator7::$current
	Il2CppObject * ___U24current_16;
	// System.Object AstarPath/<CalculatePaths>c__Iterator7::<$>_threadInfo
	Il2CppObject * ___U3CU24U3E_threadInfo_17;

public:
	inline static int32_t get_offset_of__threadInfo_0() { return static_cast<int32_t>(offsetof(U3CCalculatePathsU3Ec__Iterator7_t3086410368, ____threadInfo_0)); }
	inline Il2CppObject * get__threadInfo_0() const { return ____threadInfo_0; }
	inline Il2CppObject ** get_address_of__threadInfo_0() { return &____threadInfo_0; }
	inline void set__threadInfo_0(Il2CppObject * value)
	{
		____threadInfo_0 = value;
		Il2CppCodeGenWriteBarrier(&____threadInfo_0, value);
	}

	inline static int32_t get_offset_of_U3CthreadInfoU3E__0_1() { return static_cast<int32_t>(offsetof(U3CCalculatePathsU3Ec__Iterator7_t3086410368, ___U3CthreadInfoU3E__0_1)); }
	inline PathThreadInfo_t3207094601  get_U3CthreadInfoU3E__0_1() const { return ___U3CthreadInfoU3E__0_1; }
	inline PathThreadInfo_t3207094601 * get_address_of_U3CthreadInfoU3E__0_1() { return &___U3CthreadInfoU3E__0_1; }
	inline void set_U3CthreadInfoU3E__0_1(PathThreadInfo_t3207094601  value)
	{
		___U3CthreadInfoU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CeU3E__1_2() { return static_cast<int32_t>(offsetof(U3CCalculatePathsU3Ec__Iterator7_t3086410368, ___U3CeU3E__1_2)); }
	inline Exception_t1967233988 * get_U3CeU3E__1_2() const { return ___U3CeU3E__1_2; }
	inline Exception_t1967233988 ** get_address_of_U3CeU3E__1_2() { return &___U3CeU3E__1_2; }
	inline void set_U3CeU3E__1_2(Exception_t1967233988 * value)
	{
		___U3CeU3E__1_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CeU3E__1_2, value);
	}

	inline static int32_t get_offset_of_U3CnumPathsU3E__2_3() { return static_cast<int32_t>(offsetof(U3CCalculatePathsU3Ec__Iterator7_t3086410368, ___U3CnumPathsU3E__2_3)); }
	inline int32_t get_U3CnumPathsU3E__2_3() const { return ___U3CnumPathsU3E__2_3; }
	inline int32_t* get_address_of_U3CnumPathsU3E__2_3() { return &___U3CnumPathsU3E__2_3; }
	inline void set_U3CnumPathsU3E__2_3(int32_t value)
	{
		___U3CnumPathsU3E__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CrunDataU3E__3_4() { return static_cast<int32_t>(offsetof(U3CCalculatePathsU3Ec__Iterator7_t3086410368, ___U3CrunDataU3E__3_4)); }
	inline PathHandler_t2800540817 * get_U3CrunDataU3E__3_4() const { return ___U3CrunDataU3E__3_4; }
	inline PathHandler_t2800540817 ** get_address_of_U3CrunDataU3E__3_4() { return &___U3CrunDataU3E__3_4; }
	inline void set_U3CrunDataU3E__3_4(PathHandler_t2800540817 * value)
	{
		___U3CrunDataU3E__3_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CrunDataU3E__3_4, value);
	}

	inline static int32_t get_offset_of_U3CastarU3E__4_5() { return static_cast<int32_t>(offsetof(U3CCalculatePathsU3Ec__Iterator7_t3086410368, ___U3CastarU3E__4_5)); }
	inline AstarPath_t4090270936 * get_U3CastarU3E__4_5() const { return ___U3CastarU3E__4_5; }
	inline AstarPath_t4090270936 ** get_address_of_U3CastarU3E__4_5() { return &___U3CastarU3E__4_5; }
	inline void set_U3CastarU3E__4_5(AstarPath_t4090270936 * value)
	{
		___U3CastarU3E__4_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CastarU3E__4_5, value);
	}

	inline static int32_t get_offset_of_U3CmaxTicksU3E__5_6() { return static_cast<int32_t>(offsetof(U3CCalculatePathsU3Ec__Iterator7_t3086410368, ___U3CmaxTicksU3E__5_6)); }
	inline int64_t get_U3CmaxTicksU3E__5_6() const { return ___U3CmaxTicksU3E__5_6; }
	inline int64_t* get_address_of_U3CmaxTicksU3E__5_6() { return &___U3CmaxTicksU3E__5_6; }
	inline void set_U3CmaxTicksU3E__5_6(int64_t value)
	{
		___U3CmaxTicksU3E__5_6 = value;
	}

	inline static int32_t get_offset_of_U3CtargetTickU3E__6_7() { return static_cast<int32_t>(offsetof(U3CCalculatePathsU3Ec__Iterator7_t3086410368, ___U3CtargetTickU3E__6_7)); }
	inline int64_t get_U3CtargetTickU3E__6_7() const { return ___U3CtargetTickU3E__6_7; }
	inline int64_t* get_address_of_U3CtargetTickU3E__6_7() { return &___U3CtargetTickU3E__6_7; }
	inline void set_U3CtargetTickU3E__6_7(int64_t value)
	{
		___U3CtargetTickU3E__6_7 = value;
	}

	inline static int32_t get_offset_of_U3CpU3E__7_8() { return static_cast<int32_t>(offsetof(U3CCalculatePathsU3Ec__Iterator7_t3086410368, ___U3CpU3E__7_8)); }
	inline Path_t2697364881 * get_U3CpU3E__7_8() const { return ___U3CpU3E__7_8; }
	inline Path_t2697364881 ** get_address_of_U3CpU3E__7_8() { return &___U3CpU3E__7_8; }
	inline void set_U3CpU3E__7_8(Path_t2697364881 * value)
	{
		___U3CpU3E__7_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CpU3E__7_8, value);
	}

	inline static int32_t get_offset_of_U3CblockedBeforeU3E__8_9() { return static_cast<int32_t>(offsetof(U3CCalculatePathsU3Ec__Iterator7_t3086410368, ___U3CblockedBeforeU3E__8_9)); }
	inline bool get_U3CblockedBeforeU3E__8_9() const { return ___U3CblockedBeforeU3E__8_9; }
	inline bool* get_address_of_U3CblockedBeforeU3E__8_9() { return &___U3CblockedBeforeU3E__8_9; }
	inline void set_U3CblockedBeforeU3E__8_9(bool value)
	{
		___U3CblockedBeforeU3E__8_9 = value;
	}

	inline static int32_t get_offset_of_U3CtmpOnPathPreSearchU3E__9_10() { return static_cast<int32_t>(offsetof(U3CCalculatePathsU3Ec__Iterator7_t3086410368, ___U3CtmpOnPathPreSearchU3E__9_10)); }
	inline OnPathDelegate_t598607977 * get_U3CtmpOnPathPreSearchU3E__9_10() const { return ___U3CtmpOnPathPreSearchU3E__9_10; }
	inline OnPathDelegate_t598607977 ** get_address_of_U3CtmpOnPathPreSearchU3E__9_10() { return &___U3CtmpOnPathPreSearchU3E__9_10; }
	inline void set_U3CtmpOnPathPreSearchU3E__9_10(OnPathDelegate_t598607977 * value)
	{
		___U3CtmpOnPathPreSearchU3E__9_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtmpOnPathPreSearchU3E__9_10, value);
	}

	inline static int32_t get_offset_of_U3CstartTicksU3E__10_11() { return static_cast<int32_t>(offsetof(U3CCalculatePathsU3Ec__Iterator7_t3086410368, ___U3CstartTicksU3E__10_11)); }
	inline int64_t get_U3CstartTicksU3E__10_11() const { return ___U3CstartTicksU3E__10_11; }
	inline int64_t* get_address_of_U3CstartTicksU3E__10_11() { return &___U3CstartTicksU3E__10_11; }
	inline void set_U3CstartTicksU3E__10_11(int64_t value)
	{
		___U3CstartTicksU3E__10_11 = value;
	}

	inline static int32_t get_offset_of_U3CtotalTicksU3E__11_12() { return static_cast<int32_t>(offsetof(U3CCalculatePathsU3Ec__Iterator7_t3086410368, ___U3CtotalTicksU3E__11_12)); }
	inline int64_t get_U3CtotalTicksU3E__11_12() const { return ___U3CtotalTicksU3E__11_12; }
	inline int64_t* get_address_of_U3CtotalTicksU3E__11_12() { return &___U3CtotalTicksU3E__11_12; }
	inline void set_U3CtotalTicksU3E__11_12(int64_t value)
	{
		___U3CtotalTicksU3E__11_12 = value;
	}

	inline static int32_t get_offset_of_U3CtmpImmediateCallbackU3E__12_13() { return static_cast<int32_t>(offsetof(U3CCalculatePathsU3Ec__Iterator7_t3086410368, ___U3CtmpImmediateCallbackU3E__12_13)); }
	inline OnPathDelegate_t598607977 * get_U3CtmpImmediateCallbackU3E__12_13() const { return ___U3CtmpImmediateCallbackU3E__12_13; }
	inline OnPathDelegate_t598607977 ** get_address_of_U3CtmpImmediateCallbackU3E__12_13() { return &___U3CtmpImmediateCallbackU3E__12_13; }
	inline void set_U3CtmpImmediateCallbackU3E__12_13(OnPathDelegate_t598607977 * value)
	{
		___U3CtmpImmediateCallbackU3E__12_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtmpImmediateCallbackU3E__12_13, value);
	}

	inline static int32_t get_offset_of_U3CtmpOnPathPostSearchU3E__13_14() { return static_cast<int32_t>(offsetof(U3CCalculatePathsU3Ec__Iterator7_t3086410368, ___U3CtmpOnPathPostSearchU3E__13_14)); }
	inline OnPathDelegate_t598607977 * get_U3CtmpOnPathPostSearchU3E__13_14() const { return ___U3CtmpOnPathPostSearchU3E__13_14; }
	inline OnPathDelegate_t598607977 ** get_address_of_U3CtmpOnPathPostSearchU3E__13_14() { return &___U3CtmpOnPathPostSearchU3E__13_14; }
	inline void set_U3CtmpOnPathPostSearchU3E__13_14(OnPathDelegate_t598607977 * value)
	{
		___U3CtmpOnPathPostSearchU3E__13_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtmpOnPathPostSearchU3E__13_14, value);
	}

	inline static int32_t get_offset_of_U24PC_15() { return static_cast<int32_t>(offsetof(U3CCalculatePathsU3Ec__Iterator7_t3086410368, ___U24PC_15)); }
	inline int32_t get_U24PC_15() const { return ___U24PC_15; }
	inline int32_t* get_address_of_U24PC_15() { return &___U24PC_15; }
	inline void set_U24PC_15(int32_t value)
	{
		___U24PC_15 = value;
	}

	inline static int32_t get_offset_of_U24current_16() { return static_cast<int32_t>(offsetof(U3CCalculatePathsU3Ec__Iterator7_t3086410368, ___U24current_16)); }
	inline Il2CppObject * get_U24current_16() const { return ___U24current_16; }
	inline Il2CppObject ** get_address_of_U24current_16() { return &___U24current_16; }
	inline void set_U24current_16(Il2CppObject * value)
	{
		___U24current_16 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_16, value);
	}

	inline static int32_t get_offset_of_U3CU24U3E_threadInfo_17() { return static_cast<int32_t>(offsetof(U3CCalculatePathsU3Ec__Iterator7_t3086410368, ___U3CU24U3E_threadInfo_17)); }
	inline Il2CppObject * get_U3CU24U3E_threadInfo_17() const { return ___U3CU24U3E_threadInfo_17; }
	inline Il2CppObject ** get_address_of_U3CU24U3E_threadInfo_17() { return &___U3CU24U3E_threadInfo_17; }
	inline void set_U3CU24U3E_threadInfo_17(Il2CppObject * value)
	{
		___U3CU24U3E_threadInfo_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3E_threadInfo_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
