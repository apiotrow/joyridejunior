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

// AIFollow
struct AIFollow_t4086657529;
// Pathfinding.Path
struct Path_t2697364881;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_Path2697364881.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void AIFollow::.ctor()
extern "C"  void AIFollow__ctor_m1391031490 (AIFollow_t4086657529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIFollow::Start()
extern "C"  void AIFollow_Start_m338169282 (AIFollow_t4086657529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIFollow::Reset()
extern "C"  void AIFollow_Reset_m3332431727 (AIFollow_t4086657529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIFollow::OnPathComplete(Pathfinding.Path)
extern "C"  void AIFollow_OnPathComplete_m1576501584 (AIFollow_t4086657529 * __this, Path_t2697364881 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AIFollow::WaitToRepath()
extern "C"  Il2CppObject * AIFollow_WaitToRepath_m2344476498 (AIFollow_t4086657529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIFollow::Stop()
extern "C"  void AIFollow_Stop_m1950984132 (AIFollow_t4086657529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIFollow::Resume()
extern "C"  void AIFollow_Resume_m240794863 (AIFollow_t4086657529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIFollow::Repath()
extern "C"  void AIFollow_Repath_m136648410 (AIFollow_t4086657529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIFollow::PathToTarget(UnityEngine.Vector3)
extern "C"  void AIFollow_PathToTarget_m2202349254 (AIFollow_t4086657529 * __this, Vector3_t3525329789  ___targetPoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIFollow::ReachedEndOfPath()
extern "C"  void AIFollow_ReachedEndOfPath_m326612903 (AIFollow_t4086657529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIFollow::Update()
extern "C"  void AIFollow_Update_m1899165323 (AIFollow_t4086657529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIFollow::OnDrawGizmos()
extern "C"  void AIFollow_OnDrawGizmos_m3992591902 (AIFollow_t4086657529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
