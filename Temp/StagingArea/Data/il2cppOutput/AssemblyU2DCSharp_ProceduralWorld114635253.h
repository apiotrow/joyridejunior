#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;
// ProceduralWorld/ProceduralPrefab[]
struct ProceduralPrefabU5BU5D_t1919102300;
// System.Collections.Generic.Queue`1<System.Collections.IEnumerator>
struct Queue_1_t1995294579;
// System.Collections.Generic.Dictionary`2<Pathfinding.Int2,ProceduralWorld/ProceduralTile>
struct Dictionary_2_t2952192078;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProceduralWorld
struct  ProceduralWorld_t114635253  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform ProceduralWorld::target
	Transform_t284553113 * ___target_2;
	// ProceduralWorld/ProceduralPrefab[] ProceduralWorld::prefabs
	ProceduralPrefabU5BU5D_t1919102300* ___prefabs_3;
	// System.Int32 ProceduralWorld::range
	int32_t ___range_4;
	// System.Single ProceduralWorld::tileSize
	float ___tileSize_5;
	// System.Int32 ProceduralWorld::subTiles
	int32_t ___subTiles_6;
	// System.Boolean ProceduralWorld::staticBatching
	bool ___staticBatching_7;
	// System.Collections.Generic.Queue`1<System.Collections.IEnumerator> ProceduralWorld::tileGenerationQueue
	Queue_1_t1995294579 * ___tileGenerationQueue_8;
	// System.Collections.Generic.Dictionary`2<Pathfinding.Int2,ProceduralWorld/ProceduralTile> ProceduralWorld::tiles
	Dictionary_2_t2952192078 * ___tiles_9;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(ProceduralWorld_t114635253, ___target_2)); }
	inline Transform_t284553113 * get_target_2() const { return ___target_2; }
	inline Transform_t284553113 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t284553113 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_prefabs_3() { return static_cast<int32_t>(offsetof(ProceduralWorld_t114635253, ___prefabs_3)); }
	inline ProceduralPrefabU5BU5D_t1919102300* get_prefabs_3() const { return ___prefabs_3; }
	inline ProceduralPrefabU5BU5D_t1919102300** get_address_of_prefabs_3() { return &___prefabs_3; }
	inline void set_prefabs_3(ProceduralPrefabU5BU5D_t1919102300* value)
	{
		___prefabs_3 = value;
		Il2CppCodeGenWriteBarrier(&___prefabs_3, value);
	}

	inline static int32_t get_offset_of_range_4() { return static_cast<int32_t>(offsetof(ProceduralWorld_t114635253, ___range_4)); }
	inline int32_t get_range_4() const { return ___range_4; }
	inline int32_t* get_address_of_range_4() { return &___range_4; }
	inline void set_range_4(int32_t value)
	{
		___range_4 = value;
	}

	inline static int32_t get_offset_of_tileSize_5() { return static_cast<int32_t>(offsetof(ProceduralWorld_t114635253, ___tileSize_5)); }
	inline float get_tileSize_5() const { return ___tileSize_5; }
	inline float* get_address_of_tileSize_5() { return &___tileSize_5; }
	inline void set_tileSize_5(float value)
	{
		___tileSize_5 = value;
	}

	inline static int32_t get_offset_of_subTiles_6() { return static_cast<int32_t>(offsetof(ProceduralWorld_t114635253, ___subTiles_6)); }
	inline int32_t get_subTiles_6() const { return ___subTiles_6; }
	inline int32_t* get_address_of_subTiles_6() { return &___subTiles_6; }
	inline void set_subTiles_6(int32_t value)
	{
		___subTiles_6 = value;
	}

	inline static int32_t get_offset_of_staticBatching_7() { return static_cast<int32_t>(offsetof(ProceduralWorld_t114635253, ___staticBatching_7)); }
	inline bool get_staticBatching_7() const { return ___staticBatching_7; }
	inline bool* get_address_of_staticBatching_7() { return &___staticBatching_7; }
	inline void set_staticBatching_7(bool value)
	{
		___staticBatching_7 = value;
	}

	inline static int32_t get_offset_of_tileGenerationQueue_8() { return static_cast<int32_t>(offsetof(ProceduralWorld_t114635253, ___tileGenerationQueue_8)); }
	inline Queue_1_t1995294579 * get_tileGenerationQueue_8() const { return ___tileGenerationQueue_8; }
	inline Queue_1_t1995294579 ** get_address_of_tileGenerationQueue_8() { return &___tileGenerationQueue_8; }
	inline void set_tileGenerationQueue_8(Queue_1_t1995294579 * value)
	{
		___tileGenerationQueue_8 = value;
		Il2CppCodeGenWriteBarrier(&___tileGenerationQueue_8, value);
	}

	inline static int32_t get_offset_of_tiles_9() { return static_cast<int32_t>(offsetof(ProceduralWorld_t114635253, ___tiles_9)); }
	inline Dictionary_2_t2952192078 * get_tiles_9() const { return ___tiles_9; }
	inline Dictionary_2_t2952192078 ** get_address_of_tiles_9() { return &___tiles_9; }
	inline void set_tiles_9(Dictionary_2_t2952192078 * value)
	{
		___tiles_9 = value;
		Il2CppCodeGenWriteBarrier(&___tiles_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
