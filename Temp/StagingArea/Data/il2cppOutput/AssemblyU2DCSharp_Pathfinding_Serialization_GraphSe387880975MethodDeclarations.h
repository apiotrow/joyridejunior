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

// Pathfinding.Serialization.GraphSerializationContext
struct GraphSerializationContext_t387880975;
// System.IO.BinaryReader
struct BinaryReader_t2158806251;
// Pathfinding.GraphNode[]
struct GraphNodeU5BU5D_t2658295925;
// System.IO.BinaryWriter
struct BinaryWriter_t2314211483;
// Pathfinding.GraphNode
struct GraphNode_t3525007772;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_BinaryReader2158806251.h"
#include "mscorlib_System_IO_BinaryWriter2314211483.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"

// System.Void Pathfinding.Serialization.GraphSerializationContext::.ctor(System.IO.BinaryReader,Pathfinding.GraphNode[],System.UInt32)
extern "C"  void GraphSerializationContext__ctor_m3088550833 (GraphSerializationContext_t387880975 * __this, BinaryReader_t2158806251 * ___reader0, GraphNodeU5BU5D_t2658295925* ___id2NodeMapping1, uint32_t ___graphIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.GraphSerializationContext::.ctor(System.IO.BinaryWriter)
extern "C"  void GraphSerializationContext__ctor_m2278175177 (GraphSerializationContext_t387880975 * __this, BinaryWriter_t2314211483 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Serialization.GraphSerializationContext::GetNodeIdentifier(Pathfinding.GraphNode)
extern "C"  int32_t GraphSerializationContext_GetNodeIdentifier_m4079208217 (GraphSerializationContext_t387880975 * __this, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GraphNode Pathfinding.Serialization.GraphSerializationContext::GetNodeFromIdentifier(System.Int32)
extern "C"  GraphNode_t3525007772 * GraphSerializationContext_GetNodeFromIdentifier_m2490173645 (GraphSerializationContext_t387880975 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
