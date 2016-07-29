#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;

#include "AssemblyU2DCSharp_Pathfinding_MonoModifier2694713414.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.RaycastModifier
struct  RaycastModifier_t3915735436  : public MonoModifier_t2694713414
{
public:
	// System.Boolean Pathfinding.RaycastModifier::useRaycasting
	bool ___useRaycasting_3;
	// UnityEngine.LayerMask Pathfinding.RaycastModifier::mask
	LayerMask_t1862190090  ___mask_4;
	// System.Boolean Pathfinding.RaycastModifier::thickRaycast
	bool ___thickRaycast_5;
	// System.Single Pathfinding.RaycastModifier::thickRaycastRadius
	float ___thickRaycastRadius_6;
	// UnityEngine.Vector3 Pathfinding.RaycastModifier::raycastOffset
	Vector3_t3525329789  ___raycastOffset_7;
	// System.Boolean Pathfinding.RaycastModifier::subdivideEveryIter
	bool ___subdivideEveryIter_8;
	// System.Int32 Pathfinding.RaycastModifier::iterations
	int32_t ___iterations_9;
	// System.Boolean Pathfinding.RaycastModifier::useGraphRaycasting
	bool ___useGraphRaycasting_10;

public:
	inline static int32_t get_offset_of_useRaycasting_3() { return static_cast<int32_t>(offsetof(RaycastModifier_t3915735436, ___useRaycasting_3)); }
	inline bool get_useRaycasting_3() const { return ___useRaycasting_3; }
	inline bool* get_address_of_useRaycasting_3() { return &___useRaycasting_3; }
	inline void set_useRaycasting_3(bool value)
	{
		___useRaycasting_3 = value;
	}

	inline static int32_t get_offset_of_mask_4() { return static_cast<int32_t>(offsetof(RaycastModifier_t3915735436, ___mask_4)); }
	inline LayerMask_t1862190090  get_mask_4() const { return ___mask_4; }
	inline LayerMask_t1862190090 * get_address_of_mask_4() { return &___mask_4; }
	inline void set_mask_4(LayerMask_t1862190090  value)
	{
		___mask_4 = value;
	}

	inline static int32_t get_offset_of_thickRaycast_5() { return static_cast<int32_t>(offsetof(RaycastModifier_t3915735436, ___thickRaycast_5)); }
	inline bool get_thickRaycast_5() const { return ___thickRaycast_5; }
	inline bool* get_address_of_thickRaycast_5() { return &___thickRaycast_5; }
	inline void set_thickRaycast_5(bool value)
	{
		___thickRaycast_5 = value;
	}

	inline static int32_t get_offset_of_thickRaycastRadius_6() { return static_cast<int32_t>(offsetof(RaycastModifier_t3915735436, ___thickRaycastRadius_6)); }
	inline float get_thickRaycastRadius_6() const { return ___thickRaycastRadius_6; }
	inline float* get_address_of_thickRaycastRadius_6() { return &___thickRaycastRadius_6; }
	inline void set_thickRaycastRadius_6(float value)
	{
		___thickRaycastRadius_6 = value;
	}

	inline static int32_t get_offset_of_raycastOffset_7() { return static_cast<int32_t>(offsetof(RaycastModifier_t3915735436, ___raycastOffset_7)); }
	inline Vector3_t3525329789  get_raycastOffset_7() const { return ___raycastOffset_7; }
	inline Vector3_t3525329789 * get_address_of_raycastOffset_7() { return &___raycastOffset_7; }
	inline void set_raycastOffset_7(Vector3_t3525329789  value)
	{
		___raycastOffset_7 = value;
	}

	inline static int32_t get_offset_of_subdivideEveryIter_8() { return static_cast<int32_t>(offsetof(RaycastModifier_t3915735436, ___subdivideEveryIter_8)); }
	inline bool get_subdivideEveryIter_8() const { return ___subdivideEveryIter_8; }
	inline bool* get_address_of_subdivideEveryIter_8() { return &___subdivideEveryIter_8; }
	inline void set_subdivideEveryIter_8(bool value)
	{
		___subdivideEveryIter_8 = value;
	}

	inline static int32_t get_offset_of_iterations_9() { return static_cast<int32_t>(offsetof(RaycastModifier_t3915735436, ___iterations_9)); }
	inline int32_t get_iterations_9() const { return ___iterations_9; }
	inline int32_t* get_address_of_iterations_9() { return &___iterations_9; }
	inline void set_iterations_9(int32_t value)
	{
		___iterations_9 = value;
	}

	inline static int32_t get_offset_of_useGraphRaycasting_10() { return static_cast<int32_t>(offsetof(RaycastModifier_t3915735436, ___useGraphRaycasting_10)); }
	inline bool get_useGraphRaycasting_10() const { return ___useGraphRaycasting_10; }
	inline bool* get_address_of_useGraphRaycasting_10() { return &___useGraphRaycasting_10; }
	inline void set_useGraphRaycasting_10(bool value)
	{
		___useGraphRaycasting_10 = value;
	}
};

struct RaycastModifier_t3915735436_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Pathfinding.RaycastModifier::nodes
	List_1_t27321462 * ___nodes_11;

public:
	inline static int32_t get_offset_of_nodes_11() { return static_cast<int32_t>(offsetof(RaycastModifier_t3915735436_StaticFields, ___nodes_11)); }
	inline List_1_t27321462 * get_nodes_11() const { return ___nodes_11; }
	inline List_1_t27321462 ** get_address_of_nodes_11() { return &___nodes_11; }
	inline void set_nodes_11(List_1_t27321462 * value)
	{
		___nodes_11 = value;
		Il2CppCodeGenWriteBarrier(&___nodes_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
