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

// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_Util_Guid3965255757.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Pathfinding.Util.Guid::.ctor(System.Byte[])
extern "C"  void Guid__ctor_m3253633321 (Guid_t3965255757 * __this, ByteU5BU5D_t58506160* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Util.Guid::.ctor(System.String)
extern "C"  void Guid__ctor_m1016471650 (Guid_t3965255757 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Util.Guid::.cctor()
extern "C"  void Guid__cctor_m3727121677 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Util.Guid Pathfinding.Util.Guid::Parse(System.String)
extern "C"  Guid_t3965255757  Guid_Parse_m136985577 (Il2CppObject * __this /* static, unused */, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Pathfinding.Util.Guid::SwapEndianness(System.UInt64)
extern "C"  uint64_t Guid_SwapEndianness_m1783136430 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Util.Guid::ToByteArray()
extern "C"  ByteU5BU5D_t58506160* Guid_ToByteArray_m2320359518 (Guid_t3965255757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Util.Guid Pathfinding.Util.Guid::NewGuid()
extern "C"  Guid_t3965255757  Guid_NewGuid_m1526601359 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Util.Guid::Equals(System.Object)
extern "C"  bool Guid_Equals_m3602552133 (Guid_t3965255757 * __this, Il2CppObject * ____rhs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Util.Guid::GetHashCode()
extern "C"  int32_t Guid_GetHashCode_m3690717789 (Guid_t3965255757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Util.Guid::ToString()
extern "C"  String_t* Guid_ToString_m992955085 (Guid_t3965255757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Util.Guid::op_Equality(Pathfinding.Util.Guid,Pathfinding.Util.Guid)
extern "C"  bool Guid_op_Equality_m3840738558 (Il2CppObject * __this /* static, unused */, Guid_t3965255757  ___lhs0, Guid_t3965255757  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Util.Guid::op_Inequality(Pathfinding.Util.Guid,Pathfinding.Util.Guid)
extern "C"  bool Guid_op_Inequality_m2717140153 (Il2CppObject * __this /* static, unused */, Guid_t3965255757  ___lhs0, Guid_t3965255757  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Guid_t3965255757;
struct Guid_t3965255757_marshaled_pinvoke;

extern "C" void Guid_t3965255757_marshal_pinvoke(const Guid_t3965255757& unmarshaled, Guid_t3965255757_marshaled_pinvoke& marshaled);
extern "C" void Guid_t3965255757_marshal_pinvoke_back(const Guid_t3965255757_marshaled_pinvoke& marshaled, Guid_t3965255757& unmarshaled);
extern "C" void Guid_t3965255757_marshal_pinvoke_cleanup(Guid_t3965255757_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Guid_t3965255757;
struct Guid_t3965255757_marshaled_com;

extern "C" void Guid_t3965255757_marshal_com(const Guid_t3965255757& unmarshaled, Guid_t3965255757_marshaled_com& marshaled);
extern "C" void Guid_t3965255757_marshal_com_back(const Guid_t3965255757_marshaled_com& marshaled, Guid_t3965255757& unmarshaled);
extern "C" void Guid_t3965255757_marshal_com_cleanup(Guid_t3965255757_marshaled_com& marshaled);
