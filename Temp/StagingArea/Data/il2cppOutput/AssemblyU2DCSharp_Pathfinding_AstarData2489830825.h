#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type[]
struct TypeU5BU5D_t3431720054;
// Pathfinding.NavGraph[]
struct NavGraphU5BU5D_t3538363758;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// UnityEngine.TextAsset
struct TextAsset_t2461560304;
// Pathfinding.NavMeshGraph
struct NavMeshGraph_t179402474;
// Pathfinding.GridGraph
struct GridGraph_t1662136020;
// Pathfinding.PointGraph
struct PointGraph_t1637416714;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.AstarData
struct  AstarData_t2489830825  : public Il2CppObject
{
public:
	// Pathfinding.NavGraph[] Pathfinding.AstarData::graphs
	NavGraphU5BU5D_t3538363758* ___graphs_1;
	// System.String Pathfinding.AstarData::dataString
	String_t* ___dataString_2;
	// System.Byte[] Pathfinding.AstarData::upgradeData
	ByteU5BU5D_t58506160* ___upgradeData_3;
	// System.Byte[] Pathfinding.AstarData::data_backup
	ByteU5BU5D_t58506160* ___data_backup_4;
	// UnityEngine.TextAsset Pathfinding.AstarData::file_cachedStartup
	TextAsset_t2461560304 * ___file_cachedStartup_5;
	// System.Byte[] Pathfinding.AstarData::data_cachedStartup
	ByteU5BU5D_t58506160* ___data_cachedStartup_6;
	// System.Boolean Pathfinding.AstarData::cacheStartup
	bool ___cacheStartup_7;
	// Pathfinding.NavMeshGraph Pathfinding.AstarData::<navmesh>k__BackingField
	NavMeshGraph_t179402474 * ___U3CnavmeshU3Ek__BackingField_8;
	// Pathfinding.GridGraph Pathfinding.AstarData::<gridGraph>k__BackingField
	GridGraph_t1662136020 * ___U3CgridGraphU3Ek__BackingField_9;
	// Pathfinding.PointGraph Pathfinding.AstarData::<pointGraph>k__BackingField
	PointGraph_t1637416714 * ___U3CpointGraphU3Ek__BackingField_10;
	// System.Type[] Pathfinding.AstarData::<graphTypes>k__BackingField
	TypeU5BU5D_t3431720054* ___U3CgraphTypesU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_graphs_1() { return static_cast<int32_t>(offsetof(AstarData_t2489830825, ___graphs_1)); }
	inline NavGraphU5BU5D_t3538363758* get_graphs_1() const { return ___graphs_1; }
	inline NavGraphU5BU5D_t3538363758** get_address_of_graphs_1() { return &___graphs_1; }
	inline void set_graphs_1(NavGraphU5BU5D_t3538363758* value)
	{
		___graphs_1 = value;
		Il2CppCodeGenWriteBarrier(&___graphs_1, value);
	}

	inline static int32_t get_offset_of_dataString_2() { return static_cast<int32_t>(offsetof(AstarData_t2489830825, ___dataString_2)); }
	inline String_t* get_dataString_2() const { return ___dataString_2; }
	inline String_t** get_address_of_dataString_2() { return &___dataString_2; }
	inline void set_dataString_2(String_t* value)
	{
		___dataString_2 = value;
		Il2CppCodeGenWriteBarrier(&___dataString_2, value);
	}

	inline static int32_t get_offset_of_upgradeData_3() { return static_cast<int32_t>(offsetof(AstarData_t2489830825, ___upgradeData_3)); }
	inline ByteU5BU5D_t58506160* get_upgradeData_3() const { return ___upgradeData_3; }
	inline ByteU5BU5D_t58506160** get_address_of_upgradeData_3() { return &___upgradeData_3; }
	inline void set_upgradeData_3(ByteU5BU5D_t58506160* value)
	{
		___upgradeData_3 = value;
		Il2CppCodeGenWriteBarrier(&___upgradeData_3, value);
	}

	inline static int32_t get_offset_of_data_backup_4() { return static_cast<int32_t>(offsetof(AstarData_t2489830825, ___data_backup_4)); }
	inline ByteU5BU5D_t58506160* get_data_backup_4() const { return ___data_backup_4; }
	inline ByteU5BU5D_t58506160** get_address_of_data_backup_4() { return &___data_backup_4; }
	inline void set_data_backup_4(ByteU5BU5D_t58506160* value)
	{
		___data_backup_4 = value;
		Il2CppCodeGenWriteBarrier(&___data_backup_4, value);
	}

	inline static int32_t get_offset_of_file_cachedStartup_5() { return static_cast<int32_t>(offsetof(AstarData_t2489830825, ___file_cachedStartup_5)); }
	inline TextAsset_t2461560304 * get_file_cachedStartup_5() const { return ___file_cachedStartup_5; }
	inline TextAsset_t2461560304 ** get_address_of_file_cachedStartup_5() { return &___file_cachedStartup_5; }
	inline void set_file_cachedStartup_5(TextAsset_t2461560304 * value)
	{
		___file_cachedStartup_5 = value;
		Il2CppCodeGenWriteBarrier(&___file_cachedStartup_5, value);
	}

	inline static int32_t get_offset_of_data_cachedStartup_6() { return static_cast<int32_t>(offsetof(AstarData_t2489830825, ___data_cachedStartup_6)); }
	inline ByteU5BU5D_t58506160* get_data_cachedStartup_6() const { return ___data_cachedStartup_6; }
	inline ByteU5BU5D_t58506160** get_address_of_data_cachedStartup_6() { return &___data_cachedStartup_6; }
	inline void set_data_cachedStartup_6(ByteU5BU5D_t58506160* value)
	{
		___data_cachedStartup_6 = value;
		Il2CppCodeGenWriteBarrier(&___data_cachedStartup_6, value);
	}

	inline static int32_t get_offset_of_cacheStartup_7() { return static_cast<int32_t>(offsetof(AstarData_t2489830825, ___cacheStartup_7)); }
	inline bool get_cacheStartup_7() const { return ___cacheStartup_7; }
	inline bool* get_address_of_cacheStartup_7() { return &___cacheStartup_7; }
	inline void set_cacheStartup_7(bool value)
	{
		___cacheStartup_7 = value;
	}

	inline static int32_t get_offset_of_U3CnavmeshU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AstarData_t2489830825, ___U3CnavmeshU3Ek__BackingField_8)); }
	inline NavMeshGraph_t179402474 * get_U3CnavmeshU3Ek__BackingField_8() const { return ___U3CnavmeshU3Ek__BackingField_8; }
	inline NavMeshGraph_t179402474 ** get_address_of_U3CnavmeshU3Ek__BackingField_8() { return &___U3CnavmeshU3Ek__BackingField_8; }
	inline void set_U3CnavmeshU3Ek__BackingField_8(NavMeshGraph_t179402474 * value)
	{
		___U3CnavmeshU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CnavmeshU3Ek__BackingField_8, value);
	}

	inline static int32_t get_offset_of_U3CgridGraphU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(AstarData_t2489830825, ___U3CgridGraphU3Ek__BackingField_9)); }
	inline GridGraph_t1662136020 * get_U3CgridGraphU3Ek__BackingField_9() const { return ___U3CgridGraphU3Ek__BackingField_9; }
	inline GridGraph_t1662136020 ** get_address_of_U3CgridGraphU3Ek__BackingField_9() { return &___U3CgridGraphU3Ek__BackingField_9; }
	inline void set_U3CgridGraphU3Ek__BackingField_9(GridGraph_t1662136020 * value)
	{
		___U3CgridGraphU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CgridGraphU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CpointGraphU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(AstarData_t2489830825, ___U3CpointGraphU3Ek__BackingField_10)); }
	inline PointGraph_t1637416714 * get_U3CpointGraphU3Ek__BackingField_10() const { return ___U3CpointGraphU3Ek__BackingField_10; }
	inline PointGraph_t1637416714 ** get_address_of_U3CpointGraphU3Ek__BackingField_10() { return &___U3CpointGraphU3Ek__BackingField_10; }
	inline void set_U3CpointGraphU3Ek__BackingField_10(PointGraph_t1637416714 * value)
	{
		___U3CpointGraphU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CpointGraphU3Ek__BackingField_10, value);
	}

	inline static int32_t get_offset_of_U3CgraphTypesU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(AstarData_t2489830825, ___U3CgraphTypesU3Ek__BackingField_11)); }
	inline TypeU5BU5D_t3431720054* get_U3CgraphTypesU3Ek__BackingField_11() const { return ___U3CgraphTypesU3Ek__BackingField_11; }
	inline TypeU5BU5D_t3431720054** get_address_of_U3CgraphTypesU3Ek__BackingField_11() { return &___U3CgraphTypesU3Ek__BackingField_11; }
	inline void set_U3CgraphTypesU3Ek__BackingField_11(TypeU5BU5D_t3431720054* value)
	{
		___U3CgraphTypesU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CgraphTypesU3Ek__BackingField_11, value);
	}
};

struct AstarData_t2489830825_StaticFields
{
public:
	// System.Type[] Pathfinding.AstarData::DefaultGraphTypes
	TypeU5BU5D_t3431720054* ___DefaultGraphTypes_0;

public:
	inline static int32_t get_offset_of_DefaultGraphTypes_0() { return static_cast<int32_t>(offsetof(AstarData_t2489830825_StaticFields, ___DefaultGraphTypes_0)); }
	inline TypeU5BU5D_t3431720054* get_DefaultGraphTypes_0() const { return ___DefaultGraphTypes_0; }
	inline TypeU5BU5D_t3431720054** get_address_of_DefaultGraphTypes_0() { return &___DefaultGraphTypes_0; }
	inline void set_DefaultGraphTypes_0(TypeU5BU5D_t3431720054* value)
	{
		___DefaultGraphTypes_0 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultGraphTypes_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
