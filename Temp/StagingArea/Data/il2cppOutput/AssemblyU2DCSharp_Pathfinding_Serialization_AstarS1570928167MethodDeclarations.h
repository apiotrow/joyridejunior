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

// Pathfinding.Serialization.AstarSerializer
struct AstarSerializer_t1570928167;
// Pathfinding.AstarData
struct AstarData_t2489830825;
// Pathfinding.Serialization.SerializeSettings
struct SerializeSettings_t950356261;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// Pathfinding.NavGraph[]
struct NavGraphU5BU5D_t3538363758;
// Pathfinding.NavGraph
struct NavGraph_t535983959;
// Pathfinding.GraphEditorBase[]
struct GraphEditorBaseU5BU5D_t647058985;
// System.Version
struct Version_t497901645;
// Pathfinding.GraphNode[]
struct GraphNodeU5BU5D_t2658295925;
// System.IO.BinaryReader
struct BinaryReader_t2158806251;
// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t495942682;
// System.String
struct String_t;
// Pathfinding.Serialization.GraphMeta
struct GraphMeta_t2836493941;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_AstarData2489830825.h"
#include "AssemblyU2DCSharp_Pathfinding_Serialization_Seriali950356261.h"
#include "AssemblyU2DCSharp_Pathfinding_NavGraph535983959.h"
#include "mscorlib_System_Version497901645.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip495942682.h"
#include "mscorlib_System_String968488902.h"

// System.Void Pathfinding.Serialization.AstarSerializer::.ctor(Pathfinding.AstarData)
extern "C"  void AstarSerializer__ctor_m3037339729 (AstarSerializer_t1570928167 * __this, AstarData_t2489830825 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::.ctor(Pathfinding.AstarData,Pathfinding.Serialization.SerializeSettings)
extern "C"  void AstarSerializer__ctor_m259497922 (AstarSerializer_t1570928167 * __this, AstarData_t2489830825 * ___data0, SerializeSettings_t950356261 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::.cctor()
extern "C"  void AstarSerializer__cctor_m323038335 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder Pathfinding.Serialization.AstarSerializer::GetStringBuilder()
extern "C"  StringBuilder_t3822575854 * AstarSerializer_GetStringBuilder_m1967744127 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::SetGraphIndexOffset(System.Int32)
extern "C"  void AstarSerializer_SetGraphIndexOffset_m2041348278 (AstarSerializer_t1570928167 * __this, int32_t ___offset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::AddChecksum(System.Byte[])
extern "C"  void AstarSerializer_AddChecksum_m3301231865 (AstarSerializer_t1570928167 * __this, ByteU5BU5D_t58506160* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.Serialization.AstarSerializer::GetChecksum()
extern "C"  uint32_t AstarSerializer_GetChecksum_m1025834080 (AstarSerializer_t1570928167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::OpenSerialize()
extern "C"  void AstarSerializer_OpenSerialize_m3612353858 (AstarSerializer_t1570928167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Serialization.AstarSerializer::CloseSerialize()
extern "C"  ByteU5BU5D_t58506160* AstarSerializer_CloseSerialize_m3360652532 (AstarSerializer_t1570928167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::SerializeGraphs(Pathfinding.NavGraph[])
extern "C"  void AstarSerializer_SerializeGraphs_m483888282 (AstarSerializer_t1570928167 * __this, NavGraphU5BU5D_t3538363758* ____graphs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Serialization.AstarSerializer::SerializeMeta()
extern "C"  ByteU5BU5D_t58506160* AstarSerializer_SerializeMeta_m529759547 (AstarSerializer_t1570928167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Serialization.AstarSerializer::Serialize(Pathfinding.NavGraph)
extern "C"  ByteU5BU5D_t58506160* AstarSerializer_Serialize_m3452120033 (AstarSerializer_t1570928167 * __this, NavGraph_t535983959 * ___graph0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::SerializeNodes()
extern "C"  void AstarSerializer_SerializeNodes_m3250766791 (AstarSerializer_t1570928167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Serialization.AstarSerializer::GetMaxNodeIndexInAllGraphs(Pathfinding.NavGraph[])
extern "C"  int32_t AstarSerializer_GetMaxNodeIndexInAllGraphs_m556052464 (Il2CppObject * __this /* static, unused */, NavGraphU5BU5D_t3538363758* ___graphs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Serialization.AstarSerializer::SerializeNodeIndices(Pathfinding.NavGraph[])
extern "C"  ByteU5BU5D_t58506160* AstarSerializer_SerializeNodeIndices_m2710042522 (Il2CppObject * __this /* static, unused */, NavGraphU5BU5D_t3538363758* ___graphs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Serialization.AstarSerializer::SerializeGraphExtraInfo(Pathfinding.NavGraph)
extern "C"  ByteU5BU5D_t58506160* AstarSerializer_SerializeGraphExtraInfo_m2281307761 (Il2CppObject * __this /* static, unused */, NavGraph_t535983959 * ___graph0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Serialization.AstarSerializer::SerializeGraphNodeReferences(Pathfinding.NavGraph)
extern "C"  ByteU5BU5D_t58506160* AstarSerializer_SerializeGraphNodeReferences_m3699608591 (Il2CppObject * __this /* static, unused */, NavGraph_t535983959 * ___graph0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::SerializeExtraInfo()
extern "C"  void AstarSerializer_SerializeExtraInfo_m1090161716 (AstarSerializer_t1570928167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::SerializeEditorSettings(Pathfinding.GraphEditorBase[])
extern "C"  void AstarSerializer_SerializeEditorSettings_m183979634 (AstarSerializer_t1570928167 * __this, GraphEditorBaseU5BU5D_t647058985* ___editors0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.AstarSerializer::OpenDeserialize(System.Byte[])
extern "C"  bool AstarSerializer_OpenDeserialize_m3950229332 (AstarSerializer_t1570928167 * __this, ByteU5BU5D_t58506160* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version Pathfinding.Serialization.AstarSerializer::FullyDefinedVersion(System.Version)
extern "C"  Version_t497901645 * AstarSerializer_FullyDefinedVersion_m1374306448 (Il2CppObject * __this /* static, unused */, Version_t497901645 * ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::CloseDeserialize()
extern "C"  void AstarSerializer_CloseDeserialize_m246161341 (AstarSerializer_t1570928167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NavGraph Pathfinding.Serialization.AstarSerializer::DeserializeGraph(System.Int32,System.Int32)
extern "C"  NavGraph_t535983959 * AstarSerializer_DeserializeGraph_m1610114857 (AstarSerializer_t1570928167 * __this, int32_t ___zipIndex0, int32_t ___graphIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NavGraph[] Pathfinding.Serialization.AstarSerializer::DeserializeGraphs()
extern "C"  NavGraphU5BU5D_t3538363758* AstarSerializer_DeserializeGraphs_m1887384310 (AstarSerializer_t1570928167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.AstarSerializer::DeserializeExtraInfo(Pathfinding.NavGraph)
extern "C"  bool AstarSerializer_DeserializeExtraInfo_m602153548 (AstarSerializer_t1570928167 * __this, NavGraph_t535983959 * ___graph0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.AstarSerializer::AnyDestroyedNodesInGraphs()
extern "C"  bool AstarSerializer_AnyDestroyedNodesInGraphs_m2096829038 (AstarSerializer_t1570928167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GraphNode[] Pathfinding.Serialization.AstarSerializer::DeserializeNodeReferenceMap()
extern "C"  GraphNodeU5BU5D_t2658295925* AstarSerializer_DeserializeNodeReferenceMap_m3949037257 (AstarSerializer_t1570928167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::DeserializeNodeReferences(Pathfinding.NavGraph,Pathfinding.GraphNode[])
extern "C"  void AstarSerializer_DeserializeNodeReferences_m372160292 (AstarSerializer_t1570928167 * __this, NavGraph_t535983959 * ___graph0, GraphNodeU5BU5D_t2658295925* ___int2Node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::DeserializeExtraInfo()
extern "C"  void AstarSerializer_DeserializeExtraInfo_m1576561909 (AstarSerializer_t1570928167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::PostDeserialization()
extern "C"  void AstarSerializer_PostDeserialization_m3478216539 (AstarSerializer_t1570928167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::DeserializeEditorSettings(Pathfinding.GraphEditorBase[])
extern "C"  void AstarSerializer_DeserializeEditorSettings_m3655712499 (AstarSerializer_t1570928167 * __this, GraphEditorBaseU5BU5D_t647058985* ___graphEditors0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.BinaryReader Pathfinding.Serialization.AstarSerializer::GetBinaryReader(Pathfinding.Ionic.Zip.ZipEntry)
extern "C"  BinaryReader_t2158806251 * AstarSerializer_GetBinaryReader_m604529954 (Il2CppObject * __this /* static, unused */, ZipEntry_t495942682 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Serialization.AstarSerializer::GetString(Pathfinding.Ionic.Zip.ZipEntry)
extern "C"  String_t* AstarSerializer_GetString_m2588191042 (Il2CppObject * __this /* static, unused */, ZipEntry_t495942682 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Serialization.GraphMeta Pathfinding.Serialization.AstarSerializer::DeserializeMeta(Pathfinding.Ionic.Zip.ZipEntry)
extern "C"  GraphMeta_t2836493941 * AstarSerializer_DeserializeMeta_m2910370820 (AstarSerializer_t1570928167 * __this, ZipEntry_t495942682 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::SaveToFile(System.String,System.Byte[])
extern "C"  void AstarSerializer_SaveToFile_m274085371 (Il2CppObject * __this /* static, unused */, String_t* ___path0, ByteU5BU5D_t58506160* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Serialization.AstarSerializer::LoadFromFile(System.String)
extern "C"  ByteU5BU5D_t58506160* AstarSerializer_LoadFromFile_m278208458 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
