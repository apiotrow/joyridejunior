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

// Pathfinding.AstarData
struct AstarData_t2489830825;
// AstarPath
struct AstarPath_t4090270936;
// Pathfinding.NavMeshGraph
struct NavMeshGraph_t179402474;
// Pathfinding.GridGraph
struct GridGraph_t1662136020;
// Pathfinding.PointGraph
struct PointGraph_t1637416714;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// Pathfinding.Serialization.SerializeSettings
struct SerializeSettings_t950356261;
// Pathfinding.Serialization.AstarSerializer
struct AstarSerializer_t1570928167;
// System.Type
struct Type_t;
// System.String
struct String_t;
// Pathfinding.NavGraph
struct NavGraph_t535983959;
// Pathfinding.GraphNode
struct GraphNode_t3525007772;
// System.Collections.IEnumerable
struct IEnumerable_t287189635;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pathfinding_NavMeshGraph179402474.h"
#include "AssemblyU2DCSharp_Pathfinding_GridGraph1662136020.h"
#include "AssemblyU2DCSharp_Pathfinding_PointGraph1637416714.h"
#include "AssemblyU2DCSharp_Pathfinding_Serialization_Seriali950356261.h"
#include "AssemblyU2DCSharp_Pathfinding_Serialization_AstarS1570928167.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Type2779229935.h"
#include "AssemblyU2DCSharp_Pathfinding_NavGraph535983959.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"

// System.Void Pathfinding.AstarData::.ctor()
extern "C"  void AstarData__ctor_m3337821240 (AstarData_t2489830825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::.cctor()
extern "C"  void AstarData__cctor_m4206114421 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AstarPath Pathfinding.AstarData::get_active()
extern "C"  AstarPath_t4090270936 * AstarData_get_active_m3879711648 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NavMeshGraph Pathfinding.AstarData::get_navmesh()
extern "C"  NavMeshGraph_t179402474 * AstarData_get_navmesh_m3587494706 (AstarData_t2489830825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::set_navmesh(Pathfinding.NavMeshGraph)
extern "C"  void AstarData_set_navmesh_m2583774465 (AstarData_t2489830825 * __this, NavMeshGraph_t179402474 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GridGraph Pathfinding.AstarData::get_gridGraph()
extern "C"  GridGraph_t1662136020 * AstarData_get_gridGraph_m2624051914 (AstarData_t2489830825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::set_gridGraph(Pathfinding.GridGraph)
extern "C"  void AstarData_set_gridGraph_m3326992275 (AstarData_t2489830825 * __this, GridGraph_t1662136020 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.PointGraph Pathfinding.AstarData::get_pointGraph()
extern "C"  PointGraph_t1637416714 * AstarData_get_pointGraph_m209132606 (AstarData_t2489830825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::set_pointGraph(Pathfinding.PointGraph)
extern "C"  void AstarData_set_pointGraph_m519749439 (AstarData_t2489830825 * __this, PointGraph_t1637416714 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] Pathfinding.AstarData::get_graphTypes()
extern "C"  TypeU5BU5D_t3431720054* AstarData_get_graphTypes_m2597317896 (AstarData_t2489830825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::set_graphTypes(System.Type[])
extern "C"  void AstarData_set_graphTypes_m1396991715 (AstarData_t2489830825 * __this, TypeU5BU5D_t3431720054* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.AstarData::get_data()
extern "C"  ByteU5BU5D_t58506160* AstarData_get_data_m2791934197 (AstarData_t2489830825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::set_data(System.Byte[])
extern "C"  void AstarData_set_data_m2120944278 (AstarData_t2489830825 * __this, ByteU5BU5D_t58506160* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.AstarData::GetData()
extern "C"  ByteU5BU5D_t58506160* AstarData_GetData_m1180271392 (AstarData_t2489830825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::SetData(System.Byte[])
extern "C"  void AstarData_SetData_m787461831 (AstarData_t2489830825 * __this, ByteU5BU5D_t58506160* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::Awake()
extern "C"  void AstarData_Awake_m3575426459 (AstarData_t2489830825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::UpdateShortcuts()
extern "C"  void AstarData_UpdateShortcuts_m3771353146 (AstarData_t2489830825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::LoadFromCache()
extern "C"  void AstarData_LoadFromCache_m1941804936 (AstarData_t2489830825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.AstarData::SerializeGraphs()
extern "C"  ByteU5BU5D_t58506160* AstarData_SerializeGraphs_m2533749413 (AstarData_t2489830825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.AstarData::SerializeGraphs(Pathfinding.Serialization.SerializeSettings)
extern "C"  ByteU5BU5D_t58506160* AstarData_SerializeGraphs_m1784120690 (AstarData_t2489830825 * __this, SerializeSettings_t950356261 * ___settings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.AstarData::SerializeGraphs(Pathfinding.Serialization.SerializeSettings,System.UInt32&)
extern "C"  ByteU5BU5D_t58506160* AstarData_SerializeGraphs_m3715167334 (AstarData_t2489830825 * __this, SerializeSettings_t950356261 * ___settings0, uint32_t* ___checksum1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::SerializeGraphsPart(Pathfinding.Serialization.AstarSerializer)
extern "C"  void AstarData_SerializeGraphsPart_m3840615527 (AstarData_t2489830825 * __this, AstarSerializer_t1570928167 * ___sr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::DeserializeGraphs()
extern "C"  void AstarData_DeserializeGraphs_m1406254618 (AstarData_t2489830825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::ClearGraphs()
extern "C"  void AstarData_ClearGraphs_m1542155944 (AstarData_t2489830825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::OnDestroy()
extern "C"  void AstarData_OnDestroy_m854332721 (AstarData_t2489830825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::DeserializeGraphs(System.Byte[])
extern "C"  void AstarData_DeserializeGraphs_m263420911 (AstarData_t2489830825 * __this, ByteU5BU5D_t58506160* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::DeserializeGraphsAdditive(System.Byte[])
extern "C"  void AstarData_DeserializeGraphsAdditive_m2417725315 (AstarData_t2489830825 * __this, ByteU5BU5D_t58506160* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::DeserializeGraphsPart(Pathfinding.Serialization.AstarSerializer)
extern "C"  void AstarData_DeserializeGraphsPart_m783154792 (AstarData_t2489830825 * __this, AstarSerializer_t1570928167 * ___sr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::DeserializeGraphsPartAdditive(Pathfinding.Serialization.AstarSerializer)
extern "C"  void AstarData_DeserializeGraphsPartAdditive_m3018772220 (AstarData_t2489830825 * __this, AstarSerializer_t1570928167 * ___sr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::FindGraphTypes()
extern "C"  void AstarData_FindGraphTypes_m4193949104 (AstarData_t2489830825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Pathfinding.AstarData::GetGraphType(System.String)
extern "C"  Type_t * AstarData_GetGraphType_m2346344158 (AstarData_t2489830825 * __this, String_t* ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NavGraph Pathfinding.AstarData::CreateGraph(System.String)
extern "C"  NavGraph_t535983959 * AstarData_CreateGraph_m2442166130 (AstarData_t2489830825 * __this, String_t* ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NavGraph Pathfinding.AstarData::CreateGraph(System.Type)
extern "C"  NavGraph_t535983959 * AstarData_CreateGraph_m1103051753 (AstarData_t2489830825 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NavGraph Pathfinding.AstarData::AddGraph(System.String)
extern "C"  NavGraph_t535983959 * AstarData_AddGraph_m2895305201 (AstarData_t2489830825 * __this, String_t* ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NavGraph Pathfinding.AstarData::AddGraph(System.Type)
extern "C"  NavGraph_t535983959 * AstarData_AddGraph_m1782852136 (AstarData_t2489830825 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::AddGraph(Pathfinding.NavGraph)
extern "C"  void AstarData_AddGraph_m2927217668 (AstarData_t2489830825 * __this, NavGraph_t535983959 * ___graph0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.AstarData::RemoveGraph(Pathfinding.NavGraph)
extern "C"  bool AstarData_RemoveGraph_m1104433407 (AstarData_t2489830825 * __this, NavGraph_t535983959 * ___graph0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NavGraph Pathfinding.AstarData::GetGraph(Pathfinding.GraphNode)
extern "C"  NavGraph_t535983959 * AstarData_GetGraph_m1109118992 (Il2CppObject * __this /* static, unused */, GraphNode_t3525007772 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NavGraph Pathfinding.AstarData::FindGraphOfType(System.Type)
extern "C"  NavGraph_t535983959 * AstarData_FindGraphOfType_m341905269 (AstarData_t2489830825 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable Pathfinding.AstarData::FindGraphsOfType(System.Type)
extern "C"  Il2CppObject * AstarData_FindGraphsOfType_m3942088770 (AstarData_t2489830825 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable Pathfinding.AstarData::GetUpdateableGraphs()
extern "C"  Il2CppObject * AstarData_GetUpdateableGraphs_m3803278776 (AstarData_t2489830825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable Pathfinding.AstarData::GetRaycastableGraphs()
extern "C"  Il2CppObject * AstarData_GetRaycastableGraphs_m1984395418 (AstarData_t2489830825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.AstarData::GetGraphIndex(Pathfinding.NavGraph)
extern "C"  int32_t AstarData_GetGraphIndex_m2416648841 (AstarData_t2489830825 * __this, NavGraph_t535983959 * ___graph0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
