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
#include "AssemblyU2DCSharp_Pathfinding_Int22697168783.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Pathfinding_Int32697168784.h"

// System.Void Pathfinding.Int2::.ctor(System.Int32,System.Int32)
extern "C"  void Int2__ctor_m1999260664 (Int2_t2697168783 * __this, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Int2::.cctor()
extern "C"  void Int2__cctor_m1281923711 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Int2::get_sqrMagnitudeLong()
extern "C"  int64_t Int2_get_sqrMagnitudeLong_m567525830 (Int2_t2697168783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Int2::DotLong(Pathfinding.Int2,Pathfinding.Int2)
extern "C"  int64_t Int2_DotLong_m134996132 (Il2CppObject * __this /* static, unused */, Int2_t2697168783  ___a0, Int2_t2697168783  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Int2::Equals(System.Object)
extern "C"  bool Int2_Equals_m3389407019 (Int2_t2697168783 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Int2::GetHashCode()
extern "C"  int32_t Int2_GetHashCode_m192259407 (Int2_t2697168783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int2 Pathfinding.Int2::Rotate(Pathfinding.Int2,System.Int32)
extern "C"  Int2_t2697168783  Int2_Rotate_m1134530819 (Il2CppObject * __this /* static, unused */, Int2_t2697168783  ___v0, int32_t ___r1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int2 Pathfinding.Int2::Min(Pathfinding.Int2,Pathfinding.Int2)
extern "C"  Int2_t2697168783  Int2_Min_m1049325336 (Il2CppObject * __this /* static, unused */, Int2_t2697168783  ___a0, Int2_t2697168783  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int2 Pathfinding.Int2::Max(Pathfinding.Int2,Pathfinding.Int2)
extern "C"  Int2_t2697168783  Int2_Max_m734332614 (Il2CppObject * __this /* static, unused */, Int2_t2697168783  ___a0, Int2_t2697168783  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int2 Pathfinding.Int2::FromInt3XZ(Pathfinding.Int3)
extern "C"  Int2_t2697168783  Int2_FromInt3XZ_m2149905864 (Il2CppObject * __this /* static, unused */, Int3_t2697168784  ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.Int2::ToInt3XZ(Pathfinding.Int2)
extern "C"  Int3_t2697168784  Int2_ToInt3XZ_m3739569241 (Il2CppObject * __this /* static, unused */, Int2_t2697168783  ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Int2::ToString()
extern "C"  String_t* Int2_ToString_m331126053 (Int2_t2697168783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int2 Pathfinding.Int2::op_Addition(Pathfinding.Int2,Pathfinding.Int2)
extern "C"  Int2_t2697168783  Int2_op_Addition_m2737851280 (Il2CppObject * __this /* static, unused */, Int2_t2697168783  ___a0, Int2_t2697168783  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int2 Pathfinding.Int2::op_Subtraction(Pathfinding.Int2,Pathfinding.Int2)
extern "C"  Int2_t2697168783  Int2_op_Subtraction_m1358316970 (Il2CppObject * __this /* static, unused */, Int2_t2697168783  ___a0, Int2_t2697168783  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Int2::op_Equality(Pathfinding.Int2,Pathfinding.Int2)
extern "C"  bool Int2_op_Equality_m1791519862 (Il2CppObject * __this /* static, unused */, Int2_t2697168783  ___a0, Int2_t2697168783  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Int2::op_Inequality(Pathfinding.Int2,Pathfinding.Int2)
extern "C"  bool Int2_op_Inequality_m1440234353 (Il2CppObject * __this /* static, unused */, Int2_t2697168783  ___a0, Int2_t2697168783  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Int2_t2697168783;
struct Int2_t2697168783_marshaled_pinvoke;

extern "C" void Int2_t2697168783_marshal_pinvoke(const Int2_t2697168783& unmarshaled, Int2_t2697168783_marshaled_pinvoke& marshaled);
extern "C" void Int2_t2697168783_marshal_pinvoke_back(const Int2_t2697168783_marshaled_pinvoke& marshaled, Int2_t2697168783& unmarshaled);
extern "C" void Int2_t2697168783_marshal_pinvoke_cleanup(Int2_t2697168783_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Int2_t2697168783;
struct Int2_t2697168783_marshaled_com;

extern "C" void Int2_t2697168783_marshal_com(const Int2_t2697168783& unmarshaled, Int2_t2697168783_marshaled_com& marshaled);
extern "C" void Int2_t2697168783_marshal_com_back(const Int2_t2697168783_marshaled_com& marshaled, Int2_t2697168783& unmarshaled);
extern "C" void Int2_t2697168783_marshal_com_cleanup(Int2_t2697168783_marshaled_com& marshaled);
