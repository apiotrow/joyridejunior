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

// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_IntRect2022054815.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Pathfinding_Int22697168783.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// System.Void Pathfinding.IntRect::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void IntRect__ctor_m3840643652 (IntRect_t2022054815 * __this, int32_t ___xmin0, int32_t ___ymin1, int32_t ___xmax2, int32_t ___ymax3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.IntRect::.cctor()
extern "C"  void IntRect__cctor_m673997931 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.IntRect::Contains(System.Int32,System.Int32)
extern "C"  bool IntRect_Contains_m3684980121 (IntRect_t2022054815 * __this, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.IntRect::get_Width()
extern "C"  int32_t IntRect_get_Width_m2211611531 (IntRect_t2022054815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.IntRect::get_Height()
extern "C"  int32_t IntRect_get_Height_m344295076 (IntRect_t2022054815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.IntRect::IsValid()
extern "C"  bool IntRect_IsValid_m204100870 (IntRect_t2022054815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.IntRect::Equals(System.Object)
extern "C"  bool IntRect_Equals_m1847956391 (IntRect_t2022054815 * __this, Il2CppObject * ____b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.IntRect::GetHashCode()
extern "C"  int32_t IntRect_GetHashCode_m1882730815 (IntRect_t2022054815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.IntRect Pathfinding.IntRect::Intersection(Pathfinding.IntRect,Pathfinding.IntRect)
extern "C"  IntRect_t2022054815  IntRect_Intersection_m4103809867 (Il2CppObject * __this /* static, unused */, IntRect_t2022054815  ___a0, IntRect_t2022054815  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.IntRect::Intersects(Pathfinding.IntRect,Pathfinding.IntRect)
extern "C"  bool IntRect_Intersects_m1659427402 (Il2CppObject * __this /* static, unused */, IntRect_t2022054815  ___a0, IntRect_t2022054815  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.IntRect Pathfinding.IntRect::Union(Pathfinding.IntRect,Pathfinding.IntRect)
extern "C"  IntRect_t2022054815  IntRect_Union_m4197608659 (Il2CppObject * __this /* static, unused */, IntRect_t2022054815  ___a0, IntRect_t2022054815  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.IntRect Pathfinding.IntRect::ExpandToContain(System.Int32,System.Int32)
extern "C"  IntRect_t2022054815  IntRect_ExpandToContain_m1130189981 (IntRect_t2022054815 * __this, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.IntRect Pathfinding.IntRect::Expand(System.Int32)
extern "C"  IntRect_t2022054815  IntRect_Expand_m435050563 (IntRect_t2022054815 * __this, int32_t ___range0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.IntRect Pathfinding.IntRect::Rotate(System.Int32)
extern "C"  IntRect_t2022054815  IntRect_Rotate_m1471607108 (IntRect_t2022054815 * __this, int32_t ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.IntRect Pathfinding.IntRect::Offset(Pathfinding.Int2)
extern "C"  IntRect_t2022054815  IntRect_Offset_m612405502 (IntRect_t2022054815 * __this, Int2_t2697168783  ___offset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.IntRect Pathfinding.IntRect::Offset(System.Int32,System.Int32)
extern "C"  IntRect_t2022054815  IntRect_Offset_m1839599579 (IntRect_t2022054815 * __this, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.IntRect::ToString()
extern "C"  String_t* IntRect_ToString_m200957419 (IntRect_t2022054815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.IntRect::DebugDraw(UnityEngine.Matrix4x4,UnityEngine.Color)
extern "C"  void IntRect_DebugDraw_m60096227 (IntRect_t2022054815 * __this, Matrix4x4_t277289660  ___matrix0, Color_t1588175760  ___col1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.IntRect::op_Equality(Pathfinding.IntRect,Pathfinding.IntRect)
extern "C"  bool IntRect_op_Equality_m4023204576 (Il2CppObject * __this /* static, unused */, IntRect_t2022054815  ___a0, IntRect_t2022054815  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.IntRect::op_Inequality(Pathfinding.IntRect,Pathfinding.IntRect)
extern "C"  bool IntRect_op_Inequality_m1949282459 (Il2CppObject * __this /* static, unused */, IntRect_t2022054815  ___a0, IntRect_t2022054815  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct IntRect_t2022054815;
struct IntRect_t2022054815_marshaled_pinvoke;

extern "C" void IntRect_t2022054815_marshal_pinvoke(const IntRect_t2022054815& unmarshaled, IntRect_t2022054815_marshaled_pinvoke& marshaled);
extern "C" void IntRect_t2022054815_marshal_pinvoke_back(const IntRect_t2022054815_marshaled_pinvoke& marshaled, IntRect_t2022054815& unmarshaled);
extern "C" void IntRect_t2022054815_marshal_pinvoke_cleanup(IntRect_t2022054815_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct IntRect_t2022054815;
struct IntRect_t2022054815_marshaled_com;

extern "C" void IntRect_t2022054815_marshal_com(const IntRect_t2022054815& unmarshaled, IntRect_t2022054815_marshaled_com& marshaled);
extern "C" void IntRect_t2022054815_marshal_com_back(const IntRect_t2022054815_marshaled_com& marshaled, IntRect_t2022054815& unmarshaled);
extern "C" void IntRect_t2022054815_marshal_com_cleanup(IntRect_t2022054815_marshaled_com& marshaled);
