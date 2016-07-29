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

// UnityEngine.Animation
struct Animation_t350396337;
// UnityEngine.AnimationState
struct AnimationState_t3357637594;
// System.String
struct String_t;
// UnityEngine.AnimationClip
struct AnimationClip_t57566497;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Animation350396337.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_PlayMode3466086244.h"
#include "UnityEngine_UnityEngine_AnimationClip57566497.h"

// System.Void UnityEngine.Animation::Sample()
extern "C"  void Animation_Sample_m2214901881 (Animation_t350396337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::INTERNAL_CALL_Sample(UnityEngine.Animation)
extern "C"  void Animation_INTERNAL_CALL_Sample_m579220077 (Il2CppObject * __this /* static, unused */, Animation_t350396337 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
extern "C"  AnimationState_t3357637594 * Animation_get_Item_m2669576386 (Animation_t350396337 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(System.String,UnityEngine.PlayMode)
extern "C"  bool Animation_Play_m1881292147 (Animation_t350396337 * __this, String_t* ___animation0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(System.String)
extern "C"  bool Animation_Play_m900498501 (Animation_t350396337 * __this, String_t* ___animation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::Blend(System.String,System.Single,System.Single)
extern "C"  void Animation_Blend_m2812291720 (Animation_t350396337 * __this, String_t* ___animation0, float ___targetWeight1, float ___fadeLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String)
extern "C"  void Animation_AddClip_m3358255085 (Animation_t350396337 * __this, AnimationClip_t57566497 * ___clip0, String_t* ___newName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32,System.Boolean)
extern "C"  void Animation_AddClip_m770980048 (Animation_t350396337 * __this, AnimationClip_t57566497 * ___clip0, String_t* ___newName1, int32_t ___firstFrame2, int32_t ___lastFrame3, bool ___addLoopFrame4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32)
extern "C"  void Animation_AddClip_m2718334733 (Animation_t350396337 * __this, AnimationClip_t57566497 * ___clip0, String_t* ___newName1, int32_t ___firstFrame2, int32_t ___lastFrame3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
extern "C"  Il2CppObject * Animation_GetEnumerator_m3015582503 (Animation_t350396337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetState(System.String)
extern "C"  AnimationState_t3357637594 * Animation_GetState_m528810595 (Animation_t350396337 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C"  AnimationState_t3357637594 * Animation_GetStateAtIndex_m513456147 (Animation_t350396337 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C"  int32_t Animation_GetStateCount_m3537607527 (Animation_t350396337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
