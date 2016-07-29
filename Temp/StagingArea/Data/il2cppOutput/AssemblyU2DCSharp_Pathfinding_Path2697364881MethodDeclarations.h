#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Pathfinding.Path
struct Path_t2697364881;
// Pathfinding.PathHandler
struct PathHandler_t2800540817;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// Pathfinding.GraphNode
struct GraphNode_t3525007772;
// System.Object
struct Il2CppObject;
// Pathfinding.PathNode
struct PathNode_t3993763123;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_PathHandler2800540817.h"
#include "AssemblyU2DCSharp_PathCompleteState1625108115.h"
#include "mscorlib_System_DateTime339033936.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"
#include "AssemblyU2DCSharp_Pathfinding_Int32697168784.h"
#include "AssemblyU2DCSharp_PathState1615290188.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Pathfinding_PathNode3993763123.h"
#include "AssemblyU2DCSharp_PathLog873181375.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"

// System.Void Pathfinding.Path::.ctor()
extern "C"  void Path__ctor_m260748076 (Path_t2697364881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::.cctor()
extern "C"  void Path__cctor_m3306126849 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.PathHandler Pathfinding.Path::get_pathHandler()
extern "C"  PathHandler_t2800540817 * Path_get_pathHandler_m497382574 (Path_t2697364881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::set_pathHandler(Pathfinding.PathHandler)
extern "C"  void Path_set_pathHandler_m2664287077 (Path_t2697364881 * __this, PathHandler_t2800540817 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PathCompleteState Pathfinding.Path::get_CompleteState()
extern "C"  int32_t Path_get_CompleteState_m747948441 (Path_t2697364881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::set_CompleteState(PathCompleteState)
extern "C"  void Path_set_CompleteState_m1947399642 (Path_t2697364881 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Path::get_error()
extern "C"  bool Path_get_error_m2055541205 (Path_t2697364881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Path::get_errorLog()
extern "C"  String_t* Path_get_errorLog_m3260356928 (Path_t2697364881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Pathfinding.Path::get_callTime()
extern "C"  DateTime_t339033936  Path_get_callTime_m2816930405 (Path_t2697364881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::set_callTime(System.DateTime)
extern "C"  void Path_set_callTime_m135569720 (Path_t2697364881 * __this, DateTime_t339033936  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Path::get_recycled()
extern "C"  bool Path_get_recycled_m2294693030 (Path_t2697364881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::set_recycled(System.Boolean)
extern "C"  void Path_set_recycled_m3426933853 (Path_t2697364881 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 Pathfinding.Path::get_pathID()
extern "C"  uint16_t Path_get_pathID_m2467950678 (Path_t2697364881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::set_pathID(System.UInt16)
extern "C"  void Path_set_pathID_m1542771103 (Path_t2697364881 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Pathfinding.Path::get_tagPenalties()
extern "C"  Int32U5BU5D_t1809983122* Path_get_tagPenalties_m3078379162 (Path_t2697364881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::set_tagPenalties(System.Int32[])
extern "C"  void Path_set_tagPenalties_m2491824465 (Path_t2697364881 * __this, Int32U5BU5D_t1809983122* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Path::get_FloodingPath()
extern "C"  bool Path_get_FloodingPath_m267219454 (Path_t2697364881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.Path::GetTotalLength()
extern "C"  float Path_GetTotalLength_m2573209272 (Path_t2697364881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Pathfinding.Path::WaitForPath()
extern "C"  Il2CppObject * Path_WaitForPath_m1260176731 (Path_t2697364881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.Path::CalculateHScore(Pathfinding.GraphNode)
extern "C"  uint32_t Path_CalculateHScore_m2814933805 (Path_t2697364881 * __this, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.Path::GetTagPenalty(System.Int32)
extern "C"  uint32_t Path_GetTagPenalty_m3187446821 (Path_t2697364881 * __this, int32_t ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.Path::GetHTarget()
extern "C"  Int3_t2697168784  Path_GetHTarget_m1957207402 (Path_t2697364881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Path::CanTraverse(Pathfinding.GraphNode)
extern "C"  bool Path_CanTraverse_m2343256244 (Path_t2697364881 * __this, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.Path::GetTraversalCost(Pathfinding.GraphNode)
extern "C"  uint32_t Path_GetTraversalCost_m1607670404 (Path_t2697364881 * __this, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.Path::GetConnectionSpecialCost(Pathfinding.GraphNode,Pathfinding.GraphNode,System.UInt32)
extern "C"  uint32_t Path_GetConnectionSpecialCost_m2725876609 (Path_t2697364881 * __this, GraphNode_t3525007772 * ___a0, GraphNode_t3525007772 * ___b1, uint32_t ___currentCost2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Path::IsDone()
extern "C"  bool Path_IsDone_m3725184344 (Path_t2697364881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::AdvanceState(PathState)
extern "C"  void Path_AdvanceState_m1272899903 (Path_t2697364881 * __this, int32_t ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PathState Pathfinding.Path::GetState()
extern "C"  int32_t Path_GetState_m708198714 (Path_t2697364881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::LogError(System.String)
extern "C"  void Path_LogError_m461131590 (Path_t2697364881 * __this, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::ForceLogError(System.String)
extern "C"  void Path_ForceLogError_m484452073 (Path_t2697364881 * __this, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::Log(System.String)
extern "C"  void Path_Log_m2657264884 (Path_t2697364881 * __this, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::Error()
extern "C"  void Path_Error_m3921053778 (Path_t2697364881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::ErrorCheck()
extern "C"  void Path_ErrorCheck_m1553155896 (Path_t2697364881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::OnEnterPool()
extern "C"  void Path_OnEnterPool_m703969343 (Path_t2697364881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::Reset()
extern "C"  void Path_Reset_m2202148313 (Path_t2697364881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Path::HasExceededTime(System.Int32,System.Int64)
extern "C"  bool Path_HasExceededTime_m944181463 (Path_t2697364881 * __this, int32_t ___searchedNodes0, int64_t ___targetTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::Claim(System.Object)
extern "C"  void Path_Claim_m587811278 (Path_t2697364881 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::ReleaseSilent(System.Object)
extern "C"  void Path_ReleaseSilent_m2352513998 (Path_t2697364881 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::Release(System.Object,System.Boolean)
extern "C"  void Path_Release_m1925623866 (Path_t2697364881 * __this, Il2CppObject * ___o0, bool ___silent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::Trace(Pathfinding.PathNode)
extern "C"  void Path_Trace_m3370179710 (Path_t2697364881 * __this, PathNode_t3993763123 * ___from0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::DebugStringPrefix(PathLog,System.Text.StringBuilder)
extern "C"  void Path_DebugStringPrefix_m125223607 (Path_t2697364881 * __this, int32_t ___logMode0, StringBuilder_t3822575854 * ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::DebugStringSuffix(PathLog,System.Text.StringBuilder)
extern "C"  void Path_DebugStringSuffix_m2075266456 (Path_t2697364881 * __this, int32_t ___logMode0, StringBuilder_t3822575854 * ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Path::DebugString(PathLog)
extern "C"  String_t* Path_DebugString_m2169800424 (Path_t2697364881 * __this, int32_t ___logMode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::ReturnPath()
extern "C"  void Path_ReturnPath_m1286605709 (Path_t2697364881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::PrepareBase(Pathfinding.PathHandler)
extern "C"  void Path_PrepareBase_m1829675925 (Path_t2697364881 * __this, PathHandler_t2800540817 * ___pathHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::Cleanup()
extern "C"  void Path_Cleanup_m4139558830 (Path_t2697364881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
