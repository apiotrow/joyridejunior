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

// AstarDebugger
struct AstarDebugger_t914461524;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void AstarDebugger::.ctor()
extern "C"  void AstarDebugger__ctor_m3311881367 (AstarDebugger_t914461524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarDebugger::Start()
extern "C"  void AstarDebugger_Start_m2259019159 (AstarDebugger_t914461524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarDebugger::Update()
extern "C"  void AstarDebugger_Update_m1315969366 (AstarDebugger_t914461524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarDebugger::DrawGraphLine(System.Int32,UnityEngine.Matrix4x4,System.Single,System.Single,System.Single,System.Single,UnityEngine.Color)
extern "C"  void AstarDebugger_DrawGraphLine_m3149468588 (AstarDebugger_t914461524 * __this, int32_t ___index0, Matrix4x4_t277289660  ___m1, float ___x12, float ___x23, float ___y14, float ___y25, Color_t1588175760  ___col6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarDebugger::Cross(UnityEngine.Vector3)
extern "C"  void AstarDebugger_Cross_m2174123972 (AstarDebugger_t914461524 * __this, Vector3_t3525329789  ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarDebugger::OnGUI()
extern "C"  void AstarDebugger_OnGUI_m2807280017 (AstarDebugger_t914461524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AstarDebugger::<debugTypes>m__C()
extern "C"  int32_t AstarDebugger_U3CdebugTypesU3Em__C_m1265407761 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AstarDebugger::<debugTypes>m__D()
extern "C"  int32_t AstarDebugger_U3CdebugTypesU3Em__D_m1265408722 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
