#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.Serialization.JsonFx.TypeCoercionUtility
struct TypeCoercionUtility_t2799114442;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.JsonConverter>
struct List_1_t1859945671;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.JsonReaderSettings
struct  JsonReaderSettings_t2945431428  : public Il2CppObject
{
public:
	// Pathfinding.Serialization.JsonFx.TypeCoercionUtility Pathfinding.Serialization.JsonFx.JsonReaderSettings::Coercion
	TypeCoercionUtility_t2799114442 * ___Coercion_0;
	// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::allowUnquotedObjectKeys
	bool ___allowUnquotedObjectKeys_1;
	// System.String Pathfinding.Serialization.JsonFx.JsonReaderSettings::typeHintName
	String_t* ___typeHintName_2;
	// System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.JsonConverter> Pathfinding.Serialization.JsonFx.JsonReaderSettings::converters
	List_1_t1859945671 * ___converters_3;
	// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::<HandleCyclicReferences>k__BackingField
	bool ___U3CHandleCyclicReferencesU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_Coercion_0() { return static_cast<int32_t>(offsetof(JsonReaderSettings_t2945431428, ___Coercion_0)); }
	inline TypeCoercionUtility_t2799114442 * get_Coercion_0() const { return ___Coercion_0; }
	inline TypeCoercionUtility_t2799114442 ** get_address_of_Coercion_0() { return &___Coercion_0; }
	inline void set_Coercion_0(TypeCoercionUtility_t2799114442 * value)
	{
		___Coercion_0 = value;
		Il2CppCodeGenWriteBarrier(&___Coercion_0, value);
	}

	inline static int32_t get_offset_of_allowUnquotedObjectKeys_1() { return static_cast<int32_t>(offsetof(JsonReaderSettings_t2945431428, ___allowUnquotedObjectKeys_1)); }
	inline bool get_allowUnquotedObjectKeys_1() const { return ___allowUnquotedObjectKeys_1; }
	inline bool* get_address_of_allowUnquotedObjectKeys_1() { return &___allowUnquotedObjectKeys_1; }
	inline void set_allowUnquotedObjectKeys_1(bool value)
	{
		___allowUnquotedObjectKeys_1 = value;
	}

	inline static int32_t get_offset_of_typeHintName_2() { return static_cast<int32_t>(offsetof(JsonReaderSettings_t2945431428, ___typeHintName_2)); }
	inline String_t* get_typeHintName_2() const { return ___typeHintName_2; }
	inline String_t** get_address_of_typeHintName_2() { return &___typeHintName_2; }
	inline void set_typeHintName_2(String_t* value)
	{
		___typeHintName_2 = value;
		Il2CppCodeGenWriteBarrier(&___typeHintName_2, value);
	}

	inline static int32_t get_offset_of_converters_3() { return static_cast<int32_t>(offsetof(JsonReaderSettings_t2945431428, ___converters_3)); }
	inline List_1_t1859945671 * get_converters_3() const { return ___converters_3; }
	inline List_1_t1859945671 ** get_address_of_converters_3() { return &___converters_3; }
	inline void set_converters_3(List_1_t1859945671 * value)
	{
		___converters_3 = value;
		Il2CppCodeGenWriteBarrier(&___converters_3, value);
	}

	inline static int32_t get_offset_of_U3CHandleCyclicReferencesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(JsonReaderSettings_t2945431428, ___U3CHandleCyclicReferencesU3Ek__BackingField_4)); }
	inline bool get_U3CHandleCyclicReferencesU3Ek__BackingField_4() const { return ___U3CHandleCyclicReferencesU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CHandleCyclicReferencesU3Ek__BackingField_4() { return &___U3CHandleCyclicReferencesU3Ek__BackingField_4; }
	inline void set_U3CHandleCyclicReferencesU3Ek__BackingField_4(bool value)
	{
		___U3CHandleCyclicReferencesU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
