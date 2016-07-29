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

// Pathfinding.ThreadControlQueue
struct ThreadControlQueue_t881369674;
// Pathfinding.Path
struct Path_t2697364881;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_Path2697364881.h"

// System.Void Pathfinding.ThreadControlQueue::.ctor(System.Int32)
extern "C"  void ThreadControlQueue__ctor_m2307827428 (ThreadControlQueue_t881369674 * __this, int32_t ___numReceivers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.ThreadControlQueue::get_IsEmpty()
extern "C"  bool ThreadControlQueue_get_IsEmpty_m2850115799 (ThreadControlQueue_t881369674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.ThreadControlQueue::get_IsTerminating()
extern "C"  bool ThreadControlQueue_get_IsTerminating_m377370472 (ThreadControlQueue_t881369674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ThreadControlQueue::Block()
extern "C"  void ThreadControlQueue_Block_m3075780734 (ThreadControlQueue_t881369674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ThreadControlQueue::Unblock()
extern "C"  void ThreadControlQueue_Unblock_m1707075525 (ThreadControlQueue_t881369674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ThreadControlQueue::Lock()
extern "C"  void ThreadControlQueue_Lock_m3574517564 (ThreadControlQueue_t881369674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ThreadControlQueue::Unlock()
extern "C"  void ThreadControlQueue_Unlock_m1313608469 (ThreadControlQueue_t881369674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.ThreadControlQueue::get_AllReceiversBlocked()
extern "C"  bool ThreadControlQueue_get_AllReceiversBlocked_m1624228157 (ThreadControlQueue_t881369674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ThreadControlQueue::PushFront(Pathfinding.Path)
extern "C"  void ThreadControlQueue_PushFront_m680178225 (ThreadControlQueue_t881369674 * __this, Path_t2697364881 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ThreadControlQueue::Push(Pathfinding.Path)
extern "C"  void ThreadControlQueue_Push_m2472993532 (ThreadControlQueue_t881369674 * __this, Path_t2697364881 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ThreadControlQueue::Starving()
extern "C"  void ThreadControlQueue_Starving_m3306275407 (ThreadControlQueue_t881369674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ThreadControlQueue::TerminateReceivers()
extern "C"  void ThreadControlQueue_TerminateReceivers_m3471792916 (ThreadControlQueue_t881369674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Path Pathfinding.ThreadControlQueue::Pop()
extern "C"  Path_t2697364881 * ThreadControlQueue_Pop_m1280957620 (ThreadControlQueue_t881369674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ThreadControlQueue::ReceiverTerminated()
extern "C"  void ThreadControlQueue_ReceiverTerminated_m2964102595 (ThreadControlQueue_t881369674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Path Pathfinding.ThreadControlQueue::PopNoBlock(System.Boolean)
extern "C"  Path_t2697364881 * ThreadControlQueue_PopNoBlock_m3908198929 (ThreadControlQueue_t881369674 * __this, bool ___blockedBefore0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
