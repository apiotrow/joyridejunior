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

// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_Int32697168784.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Pathfinding.Int3::.ctor(UnityEngine.Vector3)
extern "C"  void Int3__ctor_m3006829228 (Int3_t2697168784 * __this, Vector3_t3525329789  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Int3::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void Int3__ctor_m4008748478 (Int3_t2697168784 * __this, int32_t ____x0, int32_t ____y1, int32_t ____z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Int3::.cctor()
extern "C"  void Int3__cctor_m3779939648 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.Int3::get_zero()
extern "C"  Int3_t2697168784  Int3_get_zero_m2458561751 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Int3::get_Item(System.Int32)
extern "C"  int32_t Int3_get_Item_m2575158482 (Int3_t2697168784 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Int3::set_Item(System.Int32,System.Int32)
extern "C"  void Int3_set_Item_m257566623 (Int3_t2697168784 * __this, int32_t ___i0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.Int3::Angle(Pathfinding.Int3,Pathfinding.Int3)
extern "C"  float Int3_Angle_m967603988 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___lhs0, Int3_t2697168784  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Int3::Dot(Pathfinding.Int3,Pathfinding.Int3)
extern "C"  int32_t Int3_Dot_m3175911072 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___lhs0, Int3_t2697168784  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Int3::DotLong(Pathfinding.Int3,Pathfinding.Int3)
extern "C"  int64_t Int3_DotLong_m1884751109 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___lhs0, Int3_t2697168784  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.Int3::Normal2D()
extern "C"  Int3_t2697168784  Int3_Normal2D_m1820040831 (Int3_t2697168784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.Int3::get_magnitude()
extern "C"  float Int3_get_magnitude_m1262467750 (Int3_t2697168784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Int3::get_costMagnitude()
extern "C"  int32_t Int3_get_costMagnitude_m4005587479 (Int3_t2697168784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.Int3::get_worldMagnitude()
extern "C"  float Int3_get_worldMagnitude_m1673059754 (Int3_t2697168784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.Int3::get_sqrMagnitude()
extern "C"  float Int3_get_sqrMagnitude_m1229423848 (Int3_t2697168784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Int3::get_sqrMagnitudeLong()
extern "C"  int64_t Int3_get_sqrMagnitudeLong_m2785283783 (Int3_t2697168784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Int3::ToString()
extern "C"  String_t* Int3_ToString_m37723046 (Int3_t2697168784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Int3::Equals(System.Object)
extern "C"  bool Int3_Equals_m3322400266 (Int3_t2697168784 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Int3::GetHashCode()
extern "C"  int32_t Int3_GetHashCode_m3976692526 (Int3_t2697168784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Int3::op_Equality(Pathfinding.Int3,Pathfinding.Int3)
extern "C"  bool Int3_op_Equality_m939288663 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___lhs0, Int3_t2697168784  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Int3::op_Inequality(Pathfinding.Int3,Pathfinding.Int3)
extern "C"  bool Int3_op_Inequality_m1728953106 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___lhs0, Int3_t2697168784  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.Int3::op_Explicit(UnityEngine.Vector3)
extern "C"  Int3_t2697168784  Int3_op_Explicit_m554191339 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___ob0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.Int3::op_Explicit(Pathfinding.Int3)
extern "C"  Vector3_t3525329789  Int3_op_Explicit_m64702197 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___ob0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.Int3::op_Subtraction(Pathfinding.Int3,Pathfinding.Int3)
extern "C"  Int3_t2697168784  Int3_op_Subtraction_m1036702058 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___lhs0, Int3_t2697168784  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.Int3::op_UnaryNegation(Pathfinding.Int3)
extern "C"  Int3_t2697168784  Int3_op_UnaryNegation_m2759192014 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___lhs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.Int3::op_Addition(Pathfinding.Int3,Pathfinding.Int3)
extern "C"  Int3_t2697168784  Int3_op_Addition_m3667120016 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___lhs0, Int3_t2697168784  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.Int3::op_Multiply(Pathfinding.Int3,System.Int32)
extern "C"  Int3_t2697168784  Int3_op_Multiply_m2603914823 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___lhs0, int32_t ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.Int3::op_Multiply(Pathfinding.Int3,System.Single)
extern "C"  Int3_t2697168784  Int3_op_Multiply_m3549970293 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___lhs0, float ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.Int3::op_Multiply(Pathfinding.Int3,System.Double)
extern "C"  Int3_t2697168784  Int3_op_Multiply_m3300407564 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___lhs0, double ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.Int3::op_Multiply(Pathfinding.Int3,UnityEngine.Vector3)
extern "C"  Int3_t2697168784  Int3_op_Multiply_m3214241315 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___lhs0, Vector3_t3525329789  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.Int3::op_Division(Pathfinding.Int3,System.Single)
extern "C"  Int3_t2697168784  Int3_op_Division_m1445488126 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___lhs0, float ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Int3::op_Implicit(Pathfinding.Int3)
extern "C"  String_t* Int3_op_Implicit_m2805062813 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___ob0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Int3_t2697168784;
struct Int3_t2697168784_marshaled_pinvoke;

extern "C" void Int3_t2697168784_marshal_pinvoke(const Int3_t2697168784& unmarshaled, Int3_t2697168784_marshaled_pinvoke& marshaled);
extern "C" void Int3_t2697168784_marshal_pinvoke_back(const Int3_t2697168784_marshaled_pinvoke& marshaled, Int3_t2697168784& unmarshaled);
extern "C" void Int3_t2697168784_marshal_pinvoke_cleanup(Int3_t2697168784_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Int3_t2697168784;
struct Int3_t2697168784_marshaled_com;

extern "C" void Int3_t2697168784_marshal_com(const Int3_t2697168784& unmarshaled, Int3_t2697168784_marshaled_com& marshaled);
extern "C" void Int3_t2697168784_marshal_com_back(const Int3_t2697168784_marshaled_com& marshaled, Int3_t2697168784& unmarshaled);
extern "C" void Int3_t2697168784_marshal_com_cleanup(Int3_t2697168784_marshaled_com& marshaled);
